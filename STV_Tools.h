#ifndef STV_TOOLS_H
#define STV_TOOLS_H

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "TMath.h"
#include <TVector3.h>
#include <TLorentzVector.h>

class STV_Tools {

	private:

		double fkMiss;
		double fEMiss;
		double fPMissMinus;
		double fPMiss;		
		double fPt;
		double fPL;
		double fPn;
		double fDeltaAlphaT;
		double fDeltaAlpha3D;		
		double fDeltaPhiT;
		double fECal;
		double fEQE;
		double fQ2;
		double fA;
		double fPtx;
		double fPty;										

	public:

		// Default constructor
		STV_Tools(TVector3 MuonVector,TVector3 ProtonVector, double MuonEnergy, double ProtonEnergy);

		// Default destructor
		~STV_Tools(){}

		double ReturnkMiss();
		double ReturnEMiss();
		double ReturnPMissMinus();
		double ReturnPMiss();
		double ReturnPt();
		double ReturnPL();
		double ReturnPn();
		double ReturnDeltaAlphaT();
		double ReturnDeltaAlpha3D();		
		double ReturnDeltaPhiT();
		double ReturnECal();
		double ReturnEQE();
		double ReturnQ2();		
		double ReturnA();
		double ReturnPtx();
		double ReturnPty();		

};

#endif
