
//Class created by Afroditi Papadopoulou (apapadop@mit.edu)

// _________________________________________________________________________________________________________________________________________________________________________________________________

#ifndef TRACKVERTEXSORTING_CXX
#define TRACKVERTEXSORTING_CXX

#include "TrackVertexSorting.h"

// _________________________________________________________________________________________________________________________________________________________________________________________________

void TrackVertexSorting::CandidateTrackPairs(std::vector<TVector3> VectorTrackStart, std::vector<TVector3> VectorTrackEnd) {

	int VectorTrackStartLength = VectorTrackStart.size();

	fFirstTrackIndex.clear();
	fSecondTrackIndex.clear();
	fTrackPairDistance.clear();
	fVertexPositionVector.clear();

	bool FirstCandidateTrack = true;
	bool SecondCandidateTrack = true;

	for (int i = 0; i < VectorTrackStartLength; i++) {

		fFirstTrackStart = VectorTrackStart.at(i);
		fFirstTrackEnd = VectorTrackEnd.at(i);

		int CounterFirstTrackPairs = 0;	
		FirstCandidateTrack = true;
	
		for (int j = i+1; j < VectorTrackStartLength; j++) { 

			if (FirstCandidateTrack == false) { continue; }

			fSecondTrackStart = VectorTrackStart.at(j);
			fSecondTrackEnd = VectorTrackEnd.at(j);

			double TrackDistance = ClosestDistanceToOtherTrack(fFirstTrackStart,fFirstTrackEnd,fSecondTrackStart,fSecondTrackEnd);

			// Candidate tracks should have a distance of < MaxTrackDist (cm)

			if (TrackDistance < MaxTrackDist) {

				CounterFirstTrackPairs ++;
				LocateVertexPosition();

				// The first track is matched for the first time

				if (CounterFirstTrackPairs == 1) { 

					fFirstTrackIndex.push_back(i);
					fSecondTrackIndex.push_back(j);
					fTrackPairDistance.push_back(TrackDistance);
					fVertexPositionVector.push_back(fVertexPosition);

				// If the track is about to be matched for the second time, remove everything and move to the next i-track
 
				} else if (CounterFirstTrackPairs == 2) {

					fFirstTrackIndex.erase(fFirstTrackIndex.end()-1);
					fSecondTrackIndex.erase(fSecondTrackIndex.end()-1);
					fTrackPairDistance.erase(fTrackPairDistance.end()-1);
					fVertexPositionVector.erase(fVertexPositionVector.end()-1);

					SecondCandidateTrack = false;

				}

			} // End of the if-statement for distance between tracks

			if ( SecondCandidateTrack == false) { FirstCandidateTrack = false; continue; }

		}
		
	}

}

// ____________________________________________________________________________________________________________________________________________________________________________________________________

std::vector<int> TrackVertexSorting::ReturnFirstTrackVector() {

	return 	fFirstTrackIndex;

}

// ____________________________________________________________________________________________________________________________________________________________________________________________________

std::vector<int> TrackVertexSorting::ReturnSecondTrackVector() {

	return 	fSecondTrackIndex;

}

// ____________________________________________________________________________________________________________________________________________________________________________________________________

std::vector<double> TrackVertexSorting::ReturnTrackPairDistance() {

	return 	fTrackPairDistance;

}

// ____________________________________________________________________________________________________________________________________________________________________________________________________

void TrackVertexSorting::LocateVertexPosition() {

	if ( fDistanceFromWhichPoints == "StartToStart") { fVertexPosition = (fFirstTrackStart + fSecondTrackStart) * 0.5; }
	if ( fDistanceFromWhichPoints == "StartToEnd") { fVertexPosition = (fFirstTrackStart + fSecondTrackEnd) * 0.5; }
	if ( fDistanceFromWhichPoints == "EndToStart") { fVertexPosition = (fFirstTrackEnd + fSecondTrackStart) * 0.5; }
	if ( fDistanceFromWhichPoints == "EndToEnd") { fVertexPosition = (fFirstTrackEnd + fSecondTrackEnd) * 0.5; }

}

// ____________________________________________________________________________________________________________________________________________________________________________________________________

double TrackVertexSorting::ClosestDistanceToOtherTrack(TVector3 FirstTrackStart,TVector3 FirstTrackEnd,TVector3 SecondTrackStart,TVector3 SecondTrackEnd) {

	double MinDistanceToOtherTrack = 10000;

	double DistanceStartStart = (FirstTrackStart - SecondTrackStart).Mag();

	if (MinDistanceToOtherTrack > DistanceStartStart) { MinDistanceToOtherTrack = DistanceStartStart; fDistanceFromWhichPoints = "StartToStart"; }

	Float_t DistanceStartEnd = (FirstTrackStart - SecondTrackEnd).Mag();
	if (MinDistanceToOtherTrack > DistanceStartEnd) { MinDistanceToOtherTrack = DistanceStartEnd; fDistanceFromWhichPoints = "StartToEnd";}

	Float_t DistanceEndStart = (FirstTrackEnd - SecondTrackStart).Mag();
	if (MinDistanceToOtherTrack > DistanceEndStart) { MinDistanceToOtherTrack = DistanceEndStart; fDistanceFromWhichPoints = "EndToStart";}

	Float_t DistanceEndEnd = (FirstTrackEnd - SecondTrackEnd).Mag();
	if (MinDistanceToOtherTrack > DistanceEndEnd) { MinDistanceToOtherTrack = DistanceEndEnd; fDistanceFromWhichPoints = "EndToEnd";}

	return MinDistanceToOtherTrack;
}

// ____________________________________________________________________________________________________________________________________________________________________________________________________

std::vector<TVector3> TrackVertexSorting::ReturnVertexPosition() {

	return 	fVertexPositionVector;

}

// ____________________________________________________________________________________________________________________________________________________________________________________________________

#endif
