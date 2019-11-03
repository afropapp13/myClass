#ifndef TRACKVERTEXSORTING_H
#define TRACKVERTEXSORTING_H

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

class TrackVertexSorting {

	private:

		std::vector<int> fFirstTrackIndex;
		std::vector<int> fSecondTrackIndex;
		std::vector<double> fTrackPairDistance;
		TVector3 fVertexPosition;
		std::vector<TVector3> fVertexPositionVector;
		std::string fDistanceFromWhichPoints;

		TVector3 fFirstTrackStart;
		TVector3 fFirstTrackEnd;
		TVector3 fSecondTrackStart;
		TVector3 fSecondTrackEnd;

	public:

		// Default constructor
//		TrackVertexSorting(){MaxTrackDist = 11;} // cm
		TrackVertexSorting(){MaxTrackDist = 5;} // cm

		// Default destructor
		~TrackVertexSorting(){}

		void CandidateTrackPairs(std::vector<TVector3> VectorTrackStart,std::vector<TVector3> VectorTrackEnd);
		void LocateVertexPosition();
		std::vector<TVector3> ReturnVertexPosition();
		std::vector<int> ReturnFirstTrackVector();
		std::vector<int> ReturnSecondTrackVector();
		std::vector<double> ReturnTrackPairDistance();
		double ClosestDistanceToOtherTrack(TVector3 FirstTrackStart,TVector3 FirstTrackEnd,TVector3 SecondTrackStart,TVector3 SecondTrackEnd);

		double MaxTrackDist; // cm

};

#endif
