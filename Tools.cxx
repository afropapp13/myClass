
//Class created by Afroditi Papadopoulou (apapadop@mit.edu)

// _________________________________________________________________________________________________________________________________________________

#ifndef TOOLS_CXX
#define TOOLS_CXX

#include "Tools.h"

// __________________________________________________________________________________________________________________________________________________

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

// __________________________________________________________________________________________________________________________________________________

bool Tools::inFVVector(TVector3 vector) {

	if(vector.X() < (FVx - borderx) && (vector.X() > borderx) && (vector.Y() < (FVy/2. - bordery)) && (vector.Y() > (-FVy/2. + bordery)) && 
	(vector.Z() < (FVz - borderz)) && (vector.Z() > borderz)) return true;
	else return false;
}

// __________________________________________________________________________________________________________________________________________________

bool Tools::inFV(double x, double y, double z) {

	if(x < (FVx - borderx) && (x > borderx) && (y < (FVy/2. - bordery)) && (y > (-FVy/2. + bordery)) && (z < (FVz - borderz)) && (z > borderz)) return true;
	else return false;
}

// __________________________________________________________________________________________________________________________________________________

bool Tools::IsContained(TVector3 TrackStart, TVector3 TrackEnd) {

	bool fContainedTrack = false;

	if ( inFV(TrackStart.X(),TrackStart.Y(),TrackStart.Z()) && inFV(TrackEnd.X(),TrackEnd.Y(),TrackEnd.Z()) ) { fContainedTrack = true; }

	return fContainedTrack;

}

// __________________________________________________________________________________________________________________________________________________

double Tools::PToKE(int pdg, double momentum) {

	double TrackKEConvert = -99;

	if ( fabs(pdg) == MuonPdg) { TrackKEConvert = sqrt( TMath::Power(momentum,2) + TMath::Power(MuonMass,2) ) - MuonMass ; }
	if ( fabs(pdg) == ProtonPdg) { TrackKEConvert = sqrt( TMath::Power(momentum,2) + TMath::Power(ProtonMass,2) ) - ProtonMass; }

	return TrackKEConvert;

}

// __________________________________________________________________________________________________________________________________________________

double Tools::KEToP(int pdg, double ke) {

	double TrackPConvert = -99;

	if ( fabs(pdg) == MuonPdg) { TrackPConvert = sqrt( TMath::Power(ke+MuonMass,2) - TMath::Power(MuonMass,2) ) ; }
	if ( fabs(pdg) == ProtonPdg) { TrackPConvert = sqrt( TMath::Power(ke+ProtonMass,2) - TMath::Power(ProtonMass,2) ); }

	return TrackPConvert;

}

// __________________________________________________________________________________________________________________________________________________

#endif
