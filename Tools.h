#ifndef TOOLS_H
#define TOOLS_H

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "TMath.h"
#include <TVector3.h>

class Tools {

//	private:

	public:

		// Default constructor
		Tools(){ MuonMass = 106; ProtonMass = 938.272; MuonPdg = 13; ProtonPdg = 2212;
			 FVx = 256.; FVy = 230; FVz = 1036.; borderx = 10.; bordery = 10.; borderz = 10.;}

		// Default destructor
		~Tools(){}

		bool is_meson_or_antimeson(int pdg);
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
