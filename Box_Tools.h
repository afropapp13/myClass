#ifndef BOX_TOOLS_H
#define BOX_TOOLS_H

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "TMath.h"
#include <TVector3.h>
#include <TLorentzVector.h>

class Box_Tools {

	private:
		
		double fChargeBoxDepPlane0;
		double fChargeBoxDepPlane1;
		double fChargeBoxDepPlane2;
		
		double fChargeBoxTotalPlane0;
		double fChargeBoxTotalPlane1;
		double fChargeBoxTotalPlane2;	
		
		double fChargeFracDepPlane0;
		double fChargeFracDepPlane1;
		double fChargeFracDepPlane2;							

	public:

		// Default constructor
		Box_Tools(std::vector<double> Integral,std::vector<double> PeakTime,std::vector<double> Wire,std::vector<double> Plane, double BoxWires, double BoxTicks, TVector3 VertexWire, TVector3 VertexTick);

		// Default destructor
		//~Box_Tools(){}

		double GetChargeDepPlane0();
		double GetChargeDepPlane1();
		double GetChargeDepPlane2();				

};

#endif
