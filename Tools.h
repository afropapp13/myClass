#ifndef TOOLS_H
#define TOOLS_H

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "TString.h"
#include "TMath.h"
#include <TVector3.h>
#include "TH1D.h"
#include "TH2D.h"
#include <TVectorD.h>
#include <TMatrixD.h>

#include <Constants.h>

using namespace Constants;

class Tools {

//	private:

	public:

		// Default constructor
		Tools(){ fMuonMass = MuonMass; fProtonMass = ProtonMass; fMuonPdg = MuonPdg; fProtonPdg = ProtonPdg;
			 fFVx = FVx; fFVy = FVy; fFVz = FVz; fborderx = borderx; fbordery = bordery; fborderz = borderz;}

		// Default destructor
		~Tools(){}

		int     ConcatRunSubRunEvent(int run, int subrun, int event, int univ);
		double  PoissonRandomNumber(int seed);
		bool    is_meson_or_antimeson(int pdg);
		bool    IsContained(TVector3 TrackStart, TVector3 TrackEnd);
		bool    inFV(double x, double y, double z);
		bool    inFVVector(TVector3 vector);
		double  PToKE(int pdg, double momentum);
		double  KEToP(int pdg, double ke);
		TString to_string_with_precision(double a_value, const int n);
		TString ConvertToString(double value);

		double  fMuonMass; // MeV
		double  fProtonMass; // MeV
		int     fMuonPdg;
		int     fProtonPdg;
		double  fFVx;
		double  fFVy;
		double  fFVz;
		double  fborderx;
		double  fbordery;
		double  fborderz;

};

#endif
