#ifndef TOOLS_H
#define TOOLS_H

//some standard C++ includes
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

//some ROOT includes
#include "TString.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TTree.h"
#include "TH1F.h"
#include "TH2D.h"
#include "TFile.h"
#include "TCanvas.h"
#include "TStyle.h"
#include "TMath.h"
#include <TVector3.h>
#include <TString.h>
#include <TSpline.h>

class Tools {

//	private:

	public:

		// Default constructor
		Tools(){ MuonMass=106;ProtonMass=938;MuonPdg=13;ProtonPdg=2212;
			 FVx = 256.; FVy = 220; FVz = 1036.; borderx = 3.; bordery = 0.; borderz = 5.;}

		// Default destructor
		~Tools(){}

		bool IsContained(TVector3 TrackStart, TVector3 TrackEnd);
		bool inFV(double x, double y, double z);
		bool inFVVector(TVector3 vector);
		double PToKE(int pdg, double momentum);
		double KEToP(int pdg, double ke);

		double MuonMass; // MeV
		double ProtonMass; // MeV

		int MuonPdg;
		int ProtonPdg;

		double FVx;
		double FVy;
		double FVz;
		double borderx;
		double bordery;
		double borderz;

};

#endif
