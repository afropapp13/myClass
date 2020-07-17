
//Class created by Afroditi Papadopoulou (apapadop@mit.edu)

// _________________________________________________________________________________________________________________________________________________

#ifndef BOX_TOOLS_CXX
#define BOX_TOOLS_CXX

#include <TMath.h>

#include "Box_Tools.h"

// __________________________________________________________________________________________________________________________________________________

Box_Tools::Box_Tools(std::vector<double> Integral,std::vector<double> PeakTime,std::vector<double> Wire,std::vector<double> Plane) {

	fChargeBoxDepPlane0 = 0.;
	fChargeBoxDepPlane1 = 0.;
	fChargeBoxDepPlane2 = 0.;
	
	int NHits = Integral.size();
	
	double VertexWire = 0.;
	double VertexTick = 0.;

	double BoxWires = 0.;
	double BoxTicks = 0.;
	
	for (int hit = 0; hit < NHits; hit ++) {
	
		// Box definition
		
		if ( TMath::Abs(Wire[hit] - VertexWire) < BoxWires/2 && TMath::Abs(PeakTime[hit] - VertexTick) < BoxTicks/2 ) {
	
			if (Plane[hit] == 0) { fChargeBoxDepPlane0 += Integral[hit]; }
			if (Plane[hit] == 1) { fChargeBoxDepPlane1 += Integral[hit]; }
			if (Plane[hit] == 2) { fChargeBoxDepPlane2 += Integral[hit]; }						
	
		} // End of the box definition
	
	}		

}

// __________________________________________________________________________________________________________________________________________________

double Box_Tools::GetChargeBoxDepPlane0() {

	return fChargeBoxDepPlane0;
}

// __________________________________________________________________________________________________________________________________________________

double Box_Tools::GetChargeBoxDepPlane1() {

	return fChargeBoxDepPlane1;
}

// __________________________________________________________________________________________________________________________________________________

double Box_Tools::GetChargeBoxDepPlane2() {

	return fChargeBoxDepPlane2;
}

// __________________________________________________________________________________________________________________________________________________

#endif
