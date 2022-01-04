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

//----------------------------------------//

int Tools::ConcatRunSubRunEvent(int run, int subrun, int event) { 

	// Safety checks to make sure that the numbers are not huge

	int ModRun = run /1E6; if (TMath::Abs(ModRun) > 1) { run = TMath::Abs(ModRun); }
	int ModSubRun = subrun /1E6; if (TMath::Abs(ModSubRun) > 1) { subrun = TMath::Abs(ModSubRun); }	
	int ModEvent = event /1E6; if (TMath::Abs(ModEvent) > 1) { event = TMath::Abs(ModEvent); }	

	// Convert the integers to string 
	std::string srun    = std::to_string(run); 
	std::string ssubrun = std::to_string(subrun);
	std::string sevent  = std::to_string(event);

	// Concatenate the subrun and event. Dont add the run because it makes the number too long for storing as an int
	std::string s =  ssubrun + sevent; 

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

	if(vector.X() < (FVx - borderx) && (vector.X() > borderx) && (vector.Y() < (FVy/2. - bordery)) && (vector.Y() > (-FVy/2. + bordery)) && 
	(vector.Z() < (FVz - borderz)) && (vector.Z() > borderz)) return true;
	else return false;
}

//----------------------------------------//

bool Tools::inFV(double x, double y, double z) {

	if(x < (FVx - borderx) && (x > borderx) && (y < (FVy/2. - bordery)) && (y > (-FVy/2. + bordery)) && (z < (FVz - borderz)) && (z > borderz)) return true;
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

	if ( fabs(pdg) == MuonPdg) { TrackKEConvert = sqrt( TMath::Power(momentum,2) + TMath::Power(MuonMass,2) ) - MuonMass ; }
	if ( fabs(pdg) == ProtonPdg) { TrackKEConvert = sqrt( TMath::Power(momentum,2) + TMath::Power(ProtonMass,2) ) - ProtonMass; }

	return TrackKEConvert;

}

//----------------------------------------//

double Tools::KEToP(int pdg, double ke) {

	double TrackPConvert = -99;

	if ( fabs(pdg) == MuonPdg) { TrackPConvert = sqrt( TMath::Power(ke+MuonMass,2) - TMath::Power(MuonMass,2) ) ; }
	if ( fabs(pdg) == ProtonPdg) { TrackPConvert = sqrt( TMath::Power(ke+ProtonMass,2) - TMath::Power(ProtonMass,2) ); }

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

int Tools::ReturnIndex(double value, std::vector<double> vec) {

	int length = vec.size();
	int index = -1;

	for (int i = 0; i < length-1; i ++) {

		if (value > vec.at(i) && value < vec.at(i+1)) { return i; }

	}	

	return index;

}

//----------------------------------------//

void Tools::Reweight(TH1D* h, double SF = 1.) {

	int NBins = h->GetXaxis()->GetNbins();

	for (int i = 0; i < NBins; i++) {

		double CurrentEntry = h->GetBinContent(i+1);
		double NewEntry = CurrentEntry * SF / h->GetBinWidth(i+1);

		double CurrentError = h->GetBinError(i+1);
		double NewError = CurrentError * SF / h->GetBinWidth(i+1);

		h->SetBinContent(i+1,NewEntry); 
//		h->SetBinError(i+1,NewError); 
		h->SetBinError(i+1,0.000001); 

	}

}

//----------------------------------------//

void Tools::Reweight2D(TH2D* h, double SF = 1.) {

	int NBinsX = h->GetXaxis()->GetNbins();
	int NBinsY = h->GetYaxis()->GetNbins();

	for (int i = 0; i < NBinsX; i++) {

		for (int j = 0; j < NBinsX; j++) {

			double CurrentEntry = h->GetBinContent(i+1,j+1);
			double NewEntry = CurrentEntry * SF / ( h->GetXaxis()->GetBinWidth(i+1) * h->GetYaxis()->GetBinWidth(j+1) );

			double CurrentError = h->GetBinError(i+1,j+1);
			double NewError = CurrentError * SF / ( h->GetXaxis()->GetBinWidth(i+1) * h->GetYaxis()->GetBinWidth(j+1) );

			h->SetBinContent(i+1,j+1,NewEntry); 
//			h->SetBinError(i+1,j+1,NewError); 
			h->SetBinError(i+1,j+1,0.000001); 

		}

	}

}

//----------------------------------------//

#endif
