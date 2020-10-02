
//Class created by Afroditi Papadopoulou (apapadop@mit.edu)

// _________________________________________________________________________________________________________________________________________________

#ifndef BOX_TOOLS_CXX
#define BOX_TOOLS_CXX

#include <TMath.h>

#include "Box_Tools.h"

// __________________________________________________________________________________________________________________________________________________

Box_Tools::Box_Tools(std::vector<double> Integral,std::vector<double> PeakTime,std::vector<double> Wire,std::vector<double> Plane, double BoxWires, double BoxTicks, TVector3 VertexWire, TVector3 VertexTick) {

	fChargeBoxDepPlane0 = 0.;
	fChargeBoxDepPlane1 = 0.;
	fChargeBoxDepPlane2 = 0.;
	
	fChargeBoxTotalPlane0 = 0.;
	fChargeBoxTotalPlane1 = 0.;
	fChargeBoxTotalPlane2 = 0.;
	
	fChargeFracDepPlane0 = 0.;
	fChargeFracDepPlane1 = 0.;
	fChargeFracDepPlane2 = 0.;	
	
	// --------------------------------------------------------------------------------------------------------------	
	
	// Loop over the track associated hits across all 3 planes 
	
	int NHits = Integral.size();
	
	for (int hit = 0; hit < NHits; hit ++) {
	
		// ------------------------------------------------------------------------------------------------------	

		// Plane 0
		
		if (Plane[hit] == 0) {
		
			// Box deposition
		
			if (TMath::Abs(Wire[hit] - VertexWire[0]) < BoxWires/2 && TMath::Abs(PeakTime[hit] - VertexTick[0]) < BoxTicks/2) {
			
				fChargeBoxDepPlane0 += Integral[hit];
			
			}
			
			// Total deposition
			
			fChargeBoxTotalPlane0 += Integral[hit];	
				
		}	
		
		// ------------------------------------------------------------------------------------------------------
		
		// Plane 1
		
		if (Plane[hit] == 1) {
		
			// Box deposition
		
			if (TMath::Abs(Wire[hit] - VertexWire[1]) < BoxWires/2 && TMath::Abs(PeakTime[hit] - VertexTick[1]) < BoxTicks/2) {
			
				fChargeBoxDepPlane1 += Integral[hit];
			
			}
			
			// Total deposition
			
			fChargeBoxTotalPlane1 += Integral[hit];	
				
		}	
		
		// ------------------------------------------------------------------------------------------------------
		
		// Plane 2
		
		if (Plane[hit] == 2) {
		
			// Box deposition
		
			if (TMath::Abs(Wire[hit] - VertexWire[2]) < BoxWires/2 && TMath::Abs(PeakTime[hit] - VertexTick[2]) < BoxTicks/2) {
			
				fChargeBoxDepPlane2 += Integral[hit];
			
			}
			
			// Total deposition
			
			fChargeBoxTotalPlane2 += Integral[hit];	
				
		}		
		
		// ------------------------------------------------------------------------------------------------------		

	} // End of the loop over the hits	
	
	// --------------------------------------------------------------------------------------------------------------		

	fChargeFracDepPlane0 = fChargeBoxDepPlane0 / fChargeBoxTotalPlane0;
	fChargeFracDepPlane1 = fChargeBoxDepPlane1 / fChargeBoxTotalPlane1;
	fChargeFracDepPlane2 = fChargeBoxDepPlane2 / fChargeBoxTotalPlane2;

	// --------------------------------------------------------------------------------------------------------------		

}

// __________________________________________________________________________________________________________________________________________________

double Box_Tools::GetChargeDepPlane0() {

	return fChargeBoxDepPlane0;
}

// __________________________________________________________________________________________________________________________________________________

double Box_Tools::GetChargeDepPlane1() {

	return fChargeBoxDepPlane1;
}

// __________________________________________________________________________________________________________________________________________________

double Box_Tools::GetChargeDepPlane2() {

	return fChargeBoxDepPlane2;
}

// __________________________________________________________________________________________________________________________________________________

#endif
