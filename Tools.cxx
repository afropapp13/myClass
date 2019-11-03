
//Class created by Afroditi Papadopoulou (apapadop@mit.edu)

// _________________________________________________________________________________________________________________________________________________________________________________________________

#ifndef TOOLS_CXX
#define TOOLS_CXX

#include "Tools.h"

// ____________________________________________________________________________________________________________________________________________________________________________________________________

bool Tools::inFVVector(TVector3 vector) {

	if(vector.X() < (FVx - borderx) && (vector.X() > borderx) && (vector.Y() < (FVy/2. - bordery)) && (vector.Y() > (-FVy/2. + bordery)) && 
	(vector.Z() < (FVz - borderz)) && (vector.Z() > borderz)) return true;
	else return false;
}

// ____________________________________________________________________________________________________________________________________________________________________________________________________

bool Tools::inFV(double x, double y, double z) {

	if(x < (FVx - borderx) && (x > borderx) && (y < (FVy/2. - bordery)) && (y > (-FVy/2. + bordery)) && (z < (FVz - borderz)) && (z > borderz)) return true;
	else return false;
}

// ____________________________________________________________________________________________________________________________________________________________________________________________________

bool Tools::IsContained(TVector3 TrackStart, TVector3 TrackEnd) {

	bool fContainedTrack = false;

	if ( inFV(TrackStart.X(),TrackStart.Y(),TrackStart.Z()) && inFV(TrackEnd.X(),TrackEnd.Y(),TrackEnd.Z()) ) { fContainedTrack = true; }

	return fContainedTrack;

}

// ____________________________________________________________________________________________________________________________________________________________________________________________________

double Tools::PToKE(int pdg, double momentum) {

	double TrackKEConvert = -99;

	if ( fabs(pdg) == MuonPdg) { TrackKEConvert = sqrt( TMath::Power(momentum,2) + TMath::Power(MuonMass,2) ) - MuonMass ; }
	if ( fabs(pdg) == ProtonPdg) { TrackKEConvert = sqrt( TMath::Power(momentum,2) + TMath::Power(ProtonMass,2) ) - ProtonMass; }

	return TrackKEConvert;

}

// ____________________________________________________________________________________________________________________________________________________________________________________________________

double Tools::KEToP(int pdg, double ke) {

	double TrackPConvert = -99;

	if ( fabs(pdg) == MuonPdg) { TrackPConvert = sqrt( TMath::Power(ke+MuonMass,2) - TMath::Power(MuonMass,2) ) ; }
	if ( fabs(pdg) == ProtonPdg) { TrackPConvert = sqrt( TMath::Power(ke+ProtonMass,2) - TMath::Power(ProtonMass,2) ); }

	return TrackPConvert;

}

// ____________________________________________________________________________________________________________________________________________________________________________________________________

#endif
