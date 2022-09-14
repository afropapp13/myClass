//Class created by Afroditi Papadopoulou (apapadop@mit.edu)

//----------------------------------------//

#ifndef TOOLS_CXX
#define TOOLS_CXX

// STD includes
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <sstream>

// Root Includes
#include "TRandom3.h"

#include "Tools.h"

using namespace std;

//----------------------------------------//

std::vector<TMatrixD> Tools::MatrixDecomp(int nbins,TVectorD matrix_pred,TMatrixD matrix_syst) {

	// MiniBooNE note from Mike Schaevitz
	// https://microboone-docdb.fnal.gov/cgi-bin/sso/RetrieveFile?docid=5926&filename=tn253.pdf&version=1
	
	TMatrixD matrix_shape(nbins, nbins);
	TMatrixD matrix_mixed(nbins, nbins);
	TMatrixD matrix_norm(nbins, nbins);

	///
	double N_T = 0;
	for (int idx = 0; idx < nbins; idx++) { N_T += matrix_pred(idx); }

	///
	double M_kl = 0;

	for (int i = 0; i < nbins; i++) {
		
		for (int j = 0; j < nbins; j++) {
			
			M_kl += matrix_syst(i,j);
	
		}

	}

	///
	for (int i = 0; i < nbins; i++) {

		for (int j = 0; j < nbins; j++) {	
  
			double N_i = matrix_pred(i);
			double N_j = matrix_pred(j);
			double M_ij = matrix_syst(i,j);	  
			double M_ik = 0; for(int k=0; k<nbins; k++) M_ik += matrix_syst(i,k);
			double M_kj = 0; for(int k=0; k<nbins; k++) M_kj += matrix_syst(k,j);
			matrix_shape(i,j) = M_ij - N_j*M_ik/N_T - N_i*M_kj/N_T + N_i*N_j*M_kl/N_T/N_T;
			matrix_mixed(i,j) = N_j*M_ik/N_T + N_i*M_kj/N_T - 2*N_i*N_j*M_kl/N_T/N_T;	
			matrix_norm(i,j) = N_i*N_j*M_kl/N_T/N_T;

		}

	}

	std::vector<TMatrixD> NormShapeVector = {matrix_norm+matrix_mixed,matrix_shape};
	return NormShapeVector;

}	

//----------------------------------------//

int Tools::ConcatRunSubRunEvent(int run, int subrun, int event, int universe) { 

	// Convert the integers to string 
	std::string srun    = std::to_string(run); 
	std::string ssubrun = std::to_string(subrun);
	std::string sevent  = std::to_string(event);
	std::string suniv  = std::to_string(universe);	

	// Concatenate the subrun and universe. Dont add the run/subrun because it makes the number too long for storing as an int
	std::string s =  ssubrun + suniv; 

	// std::cout << srun << "  " << ssubrun << "  " << sevent<< std::endl;
  
	// Convert the concatenated string to integer 
	int c = stoi(s); 
  
	// return the formed integer 
	return c; 

}

//----------------------------------------//

double Tools::PoissonRandomNumber(int seed) {

	// Set the seed of the TRandom 3 based on the run,subrun,event
	TRandom3* rand = new TRandom3();
	rand->SetSeed(seed); 

	// Generate the weight, using a poisson dist with mean 1
	double weight_poisson = rand->Poisson(1);

	delete rand;
	return weight_poisson;

}

//----------------------------------------//

bool Tools::is_meson_or_antimeson( int pdg_code ) {

	// Ignore differences between mesons and antimesons for this test. Mesons
	// will have positive PDG codes, while antimesons will have negative ones.
	int abs_pdg = std::abs( pdg_code );

	// Meson PDG codes have no more than seven digits. Seven-digit
	// codes beginning with "99" are reserved for generator-specific
	// particles
	if ( abs_pdg >= 9900000 ) return false;

	// Mesons have a value of zero for $n_{q1}$, the thousands digit
	int thousands_digit = ( abs_pdg / 1000 ) % 10;
	if ( thousands_digit != 0 ) return false;

	// They also have a nonzero value for $n_{q2}$, the hundreds digit
	int hundreds_digit = ( abs_pdg / 100 ) % 10;
	if ( hundreds_digit == 0 ) return false;

	// Reserved codes for Standard Model parton distribution functions
	if ( abs_pdg >= 901 && abs_pdg <= 930 ) return false;

	// Reggeon and pomeron
	if ( abs_pdg == 110 || abs_pdg == 990 ) return false;

	// Reserved codes for GEANT tracking purposes
	if ( abs_pdg == 998 || abs_pdg == 999 ) return false;

	// Reserved code for generator-specific pseudoparticles
	if ( abs_pdg == 100 ) return false;

	// If we've passed all of the tests above, then the particle is a meson
	return true;
}

//----------------------------------------//

bool Tools::inFVVector(TVector3 vector) {

	if(vector.X() < (fFVx - fborderx) && (vector.X() > fborderx) && (vector.Y() < (fFVy/2. - fbordery)) && (vector.Y() > (-fFVy/2. + fbordery)) && 
	(vector.Z() < (fFVz - fborderz)) && (vector.Z() > fborderz)) return true;
	else return false;
}

//----------------------------------------//

bool Tools::inFV(double x, double y, double z) {

	if(x < (fFVx - fborderx) && (x > fborderx) && (y < (fFVy/2. - fbordery)) && (y > (-fFVy/2. + fbordery)) && (z < (fFVz - fborderz)) && (z > fborderz)) return true;
	else return false;
}

//----------------------------------------//

bool Tools::IsContained(TVector3 TrackStart, TVector3 TrackEnd) {

	bool fContainedTrack = false;

	if ( inFV(TrackStart.X(),TrackStart.Y(),TrackStart.Z()) && inFV(TrackEnd.X(),TrackEnd.Y(),TrackEnd.Z()) ) { fContainedTrack = true; }

	return fContainedTrack;

}

//----------------------------------------//

double Tools::PToKE(int pdg, double momentum) {

	double TrackKEConvert = -99;

	if ( fabs(pdg) == fMuonPdg) { TrackKEConvert = sqrt( TMath::Power(momentum,2) + TMath::Power(fMuonMass,2) ) - fMuonMass ; }
	if ( fabs(pdg) == fProtonPdg) { TrackKEConvert = sqrt( TMath::Power(momentum,2) + TMath::Power(fProtonMass,2) ) - fProtonMass; }

	return TrackKEConvert;

}

//----------------------------------------//

double Tools::KEToP(int pdg, double ke) {

	double TrackPConvert = -99;

	if ( fabs(pdg) == fMuonPdg) { TrackPConvert = sqrt( TMath::Power(ke+fMuonMass,2) - TMath::Power(fMuonMass,2) ) ; }
	if ( fabs(pdg) == fProtonPdg) { TrackPConvert = sqrt( TMath::Power(ke+fProtonMass,2) - TMath::Power(fProtonMass,2) ); }

	return TrackPConvert;

}

//----------------------------------------//

TString Tools::to_string_with_precision(double a_value, const int n = 2) {
    std::ostringstream out;
    out.precision(n);
    out << std::fixed << a_value;
    return TString(out.str());
}

//----------------------------------------//

TString Tools::ConvertToString(double value) {

	TString StringValue = Tools::to_string_with_precision(value, 2);
	StringValue.ReplaceAll(".","_");
	StringValue.ReplaceAll("-","Minus");	

	return StringValue;

}

//----------------------------------------//

#endif