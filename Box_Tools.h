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

	public:

		// Default constructor
		Box_Tools(std::vector<double> Integral,std::vector<double> PeakTime,std::vector<double> Wire,std::vector<double> Plane);

		// Default destructor
		//~Box_Tools(){}

		double GetChargeBoxDepPlane0();
		double GetChargeBoxDepPlane1();
		double GetChargeBoxDepPlane2();				

};

#endif
