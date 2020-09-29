#ifndef CONSTANTS_H
#define CONSTANTS_H

#include "TString.h"
#include "TMath.h"

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

namespace Constants {

	// -------------------------------------------------------------------------------------

	TString UserID = "apapadop";

	// -------------------------------------------------------------------------------------

	// Argon 

	static const double A = 40.;
	static const double Z = 18.;

	static const int FontStyle = 132;

	// UBCodeVersion

//	static TString UBCodeVersion = "v08_00_00_33";
	static TString UBCodeVersion = "v08_00_00_43";	
//	static TString UBCodeVersion = "v08_00_00_47";	
	
	// Determine analysis style
	
	static bool CCQElike = false;

	// Labels

	static const TString PlotXAxis[] = {
	  "#frac{d#sigma}{d#deltap_{T}} [10^{-38} #frac{cm^{2}}{GeV/c Ar}]"
	 ,"#frac{d#sigma}{d#delta#alpha_{T}} []10^{-38} #frac{cm^{2}}{deg Ar}]"
	 ,"#frac{d#sigma}{d#delta#phi_{T}} [10^{-38} #frac{cm^{2}}{deg Ar}]"
	 ,"#frac{d#sigma}{dp_{#mu}} [10^{-38} #frac{cm^{2}}{GeV/c Ar}]"
	 ,"#frac{d#sigma}{dcos#theta_{#mu}} [10^{-38} #frac{cm^{2}}{Ar}]"
	 ,"#frac{d#sigma}{d#phi_{#mu}} [10^{-38} #frac{cm^{2}}{deg Ar}]"
	 ,"#frac{d#sigma}{dp_{p}} [10^{-38} #frac{cm^{2}}{GeV/c Ar}]"
	 ,"#frac{d#sigma}{dcos#theta_{p}} [10^{-38} #frac{cm^{2}}{Ar}]"
	 ,"#frac{d#sigma}{d#phi_{p}} [10^{-38} #frac{cm^{2}}{deg Ar}]"
	 ,"#frac{d#sigma}{dE^{Cal}} [10^{-38} #frac{cm^{2}}{GeV Ar}]"
	 ,"#frac{d#sigma}{dE^{QE}} [10^{-38} #frac{cm^{2}}{GeV Ar}]"
	 ,"#frac{d#sigma}{dQ^{2}} [10^{-38} #frac{cm^{2}}{GeV^{2}/c^{2} Ar}]"
	 ,"#frac{d#sigma}{dk_{Miss}} [10^{-38} #frac{cm^{2}}{GeV/c Ar}]"
	};

	// Genie Constants

	static const double SuSav2FluxIntegratedXSection = 37.2171; // e-38 cm^2
//	static const double FluxIntegratedXSection = 26.5732; // e-38 cm^2 MCC8 number
	static const double G18_10a_02_11a_FluxIntegratedXSection = 27.1682; // e-38 cm^2 MCC9 number GENIE v3.0.6
	static const double R_2_12_10_FluxIntegratedXSection = 35.116; // e-38 cm^2 MCC9 number GENIE v2.12.10
	static const double R_3_0_4_FluxIntegratedXSection = 26.7883; // e-38 cm^2 MCC9 number GENIE v3.0.4
//	static const int NGenieEvents = 1E5;

	// Global Constants

	static const double Units = 1E38; // so that the extracted cross-section is 10^{-38} cm^{2}
	static const double NTargets = 1.1782E30; // Argon nuclei, not nucleons
	
	static const int MuonPdg = 13, ProtonPdg = 2212, AbsChargedPionPdg = 211, NeutralPionPdg = 111, ElectronPdg = 11, DeuteriumPdg = 1000010020;

	static const double MuonMass = 106, ProtonMass = 938.272, NeutronMass = 939.565; // MeV
	static const double MuonMass_GeV = 0.106, ProtonMass_GeV = 0.938272, NeutronMass_GeV = 0.939565; // GeV
	static const double DeltaM2 = TMath::Power(NeutronMass_GeV,2.) - TMath::Power(ProtonMass_GeV,2.); // GeV^2	

	// ----------------------------------------------------------------------------------------------------------------------------------------------

	// POT Normalization

	// v43 Run 1 

	static const double tor860_wcut_Run1 = 4.131e+19;
	static const double E1DCNT_wcut_Run1 = 9147384.0;
	static const double EXT_Run1 = 34150796.0;
	
	// v43 Run 2 

	static const double tor860_wcut_Run2 = 0.;
	static const double E1DCNT_wcut_Run2 = 1.;
	static const double EXT_Run2 = 1.;
	
	// v43 Run 3 

	static const double tor860_wcut_Run3 = 9.506e+18;
	static const double E1DCNT_wcut_Run3 = 2297952.0;
	static const double EXT_Run3 = 5668319.0;
	
	// v43 Run 4 

	static const double tor860_wcut_Run4 = 0.;
	static const double E1DCNT_wcut_Run4 = 1.;
	static const double EXT_Run4 = 1.;
	
	// v43 Run 5 

	static const double tor860_wcut_Run5 = 0.;
	static const double E1DCNT_wcut_Run5 = 1.;
	static const double EXT_Run5 = 1.;		

	// -----------------------------------------------------------------------------------------------------------------------------------------------

	// v47 Run 1 
/*
	static const double tor860_wcut_Run1 = 1.655e+20;
	static const double E1DCNT_wcut_Run1 = 36783134.0;
	static const double EXT_Run1 = 65959384.0;
	
	// v47 Run 2 

	static const double tor860_wcut_Run2 = 2.629e+20;
	static const double E1DCNT_wcut_Run2 = 62229021.0;
	static const double EXT_Run2 = 155584859.0;
	
	// v47 Run 3 

	static const double tor860_wcut_Run3 = 2.566e+20;
	static const double E1DCNT_wcut_Run3 = 61475496.0;
	static const double EXT_Run3 = 202917228.0;
	
	// v47 Run 4 

	static const double tor860_wcut_Run4 = 0.;
	static const double E1DCNT_wcut_Run4 = 1.;
	static const double EXT_Run4 = 1.;
	
	// v47 Run 5 

	static const double tor860_wcut_Run5 = 0.;
	static const double E1DCNT_wcut_Run5 = 1.;
	static const double EXT_Run5 = 1.;
*/
	// -----------------------------------------------------------------------------------------------------------------------------------------------
	// -----------------------------------------------------------------------------------------------------------------------------------------------

	// Binning

	static const int NBinskMiss = 8; static const double ArrayNBinskMiss[NBinskMiss+1] = {0,0.1,0.2,0.3,0.4,0.5,0.6,0.8,1.}; 
	static const int NBinsPMiss = 8; static const double ArrayNBinsPMiss[NBinsPMiss+1] = {0,0.1,0.2,0.3,0.4,0.5,0.6,0.8,1.}; 
	static const int NBinsPMissMinus = 10; static const double ArrayNBinsPMissMinus[NBinsPMissMinus+1] = {0.,0.15,0.3,0.45,0.6,0.75,0.9,1.05,1.2,1.35,1.5};	
	
	static const int NBinsDeltaPT = 8; static const double ArrayNBinsDeltaPT[NBinsDeltaPT+1] = {0,0.1,0.2,0.3,0.4,0.5,0.6,0.8,1.}; 
	static const int NBinsDeltaAlphaT = 7; static const double ArrayNBinsDeltaAlphaT[NBinsDeltaAlphaT+1] = { 0.,25.,50.,75.,100.,125.,150.,180. }; 
	static const int NBinsDeltaPhiT = 10; 
	static const double ArrayNBinsDeltaPhiT[NBinsDeltaPhiT+1] = {0.,12.5,25.,37.5,50.,62.5,75.,90.,105.,120.,135.};	
	
	static const int NBinsEQE = 8; static const double ArrayNBinsEQE[NBinsEQE+1] = {0.2,0.4,0.6,0.8,1.,1.2,1.4,1.6,1.8}; 	
	
	// STV analysis

	static const int NBinsECal = 8; static const double ArrayNBinsECal[NBinsECal+1] = {0.2,0.4,0.6,0.8,1.,1.2,1.4,1.6,1.8}; 
	static const int NBinsQ2 = 8; static const double ArrayNBinsQ2[NBinsQ2+1] = { 0.0,0.1,0.2,0.3,0.4,0.5,0.65,0.8,1.}; 	
	
	static const int NBinsMuonMomentum = 8; static const double ArrayNBinsMuonMomentum[NBinsMuonMomentum+1] = { 0.1,0.3,0.5,0.7,0.9,1.1,1.3,1.5,1.7}; 
	static const int NBinsMuonPhi = 7; static const double ArrayNBinsMuonPhi[NBinsMuonPhi+1] = { -180.,-128.6,-77.1,-25.7,25.7,77.1,128.6,180.};
	static const int NBinsMuonCosTheta = 9; 
	static const double ArrayNBinsMuonCosTheta[NBinsMuonCosTheta+1] = { -1.,-0.8,-0.6,-0.4,-0.2,-0.0,0.2,0.5,0.8,1.};

	static const int NBinsProtonMomentum = 10; 
	static const double ArrayNBinsProtonMomentum[NBinsProtonMomentum+1] = {0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.,1.1,1.2};
	static const int NBinsProtonPhi = 7; static const double ArrayNBinsProtonPhi[NBinsProtonPhi+1] = { -180.,-128.6,-77.1,-25.7,25.7,77.1,128.6,180.}; 
	static const int NBinsProtonCosTheta = 8; 
	static const double ArrayNBinsProtonCosTheta[NBinsProtonCosTheta+1] = { -1.,-0.6,-0.3,0.,0.2,0.4,0.6,0.8,1. }; 
	
	
	// CCQE analysis
	
	/*
	
	static const int NBinsECal = 7; 
	static const double ArrayNBinsECal[NBinsECal+1] = {0.3, 0.51428571, 0.72857143, 0.94285714, 1.15714286,1.37142857, 1.58571429, 1.8}; 
	static const int NBinsQ2 = 7; 
	static const double ArrayNBinsQ2[NBinsQ2+1] = {0., 0.17142857, 0.34285714, 0.51428571, 0.68571429, 0.85714286,1.02857143,1.2}; 
	
	static const int NBinsMuonMomentum = 7; 
	static const double ArrayNBinsMuonMomentum[NBinsMuonMomentum+1] = {0.1, 0.3, 0.5, 0.7, 0.9, 1.1, 1.3, 1.5}; 
	static const int NBinsMuonPhi = 7; 
	static const double ArrayNBinsMuonPhi[NBinsMuonPhi+1] = {-180.,-128.57142857,-77.14285714,-25.71428571,25.71428571,77.14285714,128.57142857,180.};
	static const int NBinsMuonCosTheta = 7; 
	static const double ArrayNBinsMuonCosTheta[NBinsMuonCosTheta+1] = {-0.65, -0.4083,-0.167,0.075,0.317,0.5583, 0.8, 0.95};

	static const int NBinsProtonMomentum = 7; 
	static const double ArrayNBinsProtonMomentum[NBinsProtonMomentum+1] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.};
	static const int NBinsProtonPhi = 7; 
	static const double ArrayNBinsProtonPhi[NBinsProtonPhi+1] ={-180.,-128.57142857,-77.14285714,-25.71428571,25.71428571,77.14285714,128.57142857,180.};
	static const int NBinsProtonCosTheta = 7; 
	static const double ArrayNBinsProtonCosTheta[NBinsProtonCosTheta+1] = {0.15,0.2583,0.366,0.475 ,0.583,0.692,0.8,0.95}; 
	
	*/

	static const int NBinsChi2 = 25; static const double MinChi2 = 0., MaxChi2 = 500.;
	static const int NBinsThreePlaneChi2 = 25; static const double MinThreePlaneChi2 = 0., MaxThreePlaneChi2 = 500.;
	static const int NBinsThreePlaneChi2LogLikelihood = 40;
	static const double MinThreePlaneChi2LogLikelihood = -5., MaxThreePlaneChi2LogLikelihood = 5.;
	static const int NBinsDeltaTheta = 18; static const double MinDeltaTheta = 0., MaxDeltaTheta = 180.;
	static const int NBinsDeltaPhi = 15; static const double MinDeltaPhi = 0., MaxDeltaPhi = 360.;
	static const int NBinsdYZ = 20; static const double MindYZ = 0., MaxdYZ = 500.;
	static const int NBinsLengthDifference = 50; static const double MinLengthDifference = -500., MaxLengthDifference = 500.;
	static const int NBinsNPE = 50; static const double MinNPE = 0., MaxNPE = 3000.;
	static const int NBinsDistance = 22; static const double MinDistance = 0., MaxDistance = 11.;
	static const int NBinsNuScore = 25; static const double MinNuScore = 0.05, MaxNuScore = 1.;
	static const int NBinsFlashScore = 25; static const double MinFlashScore = 0., MaxFlashScore = 50.; 
	
	// -----------------------------------------------------------------------------------------------------------------------------------------------

	// Labels for 1D plots
	
	static TString LabelXAxisECal = ";E^{Cal} [GeV]"; static TString LabelXAxisTrueECal = ";True E^{Cal} [GeV]";
	static TString LabelXAxisEQE = ";E^{QE} [GeV]"; static TString LabelXAxisTrueEQE = ";True E^{QE} [GeV]";
	static TString LabelXAxisQ2 = ";Q^{2} [GeV^{2}/c^{2}]"; static TString LabelXAxisTrueQ2 = ";True Q^{2} [GeV^{2}/c^{2}]";
		
	static TString LabelXAxisMuonMomentum = ";P_{#mu} [GeV/c]"; static TString LabelXAxisTrueMuonMomentum = ";True P_{#mu} [GeV/c]";
	static TString LabelXAxisProtonMomentum = ";P_{p} [GeV/c]"; static TString LabelXAxisTrueProtonMomentum = ";True P_{p} [GeV/c]";
	static TString LabelXAxisMuonPhi = ";#phi_{#mu} [deg]"; static TString LabelXAxisTrueMuonPhi = ";True #phi_{#mu} [deg]";
	static TString LabelXAxisProtonPhi = ";#phi_{p} [deg]"; static TString LabelXAxisTrueProtonPhi = ";True #phi_{p} [deg]";
	static TString LabelXAxisMuonCosTheta = ";cos#theta_{#mu}"; static TString LabelXAxisTrueMuonCosTheta = ";True cos#theta_{#mu}";
	static TString LabelXAxisProtonCosTheta = ";cos#theta_{p}"; static TString LabelXAxisTrueProtonCosTheta = ";True cos#theta_{p}";

	static TString LabelXAxiskMiss = ";k_{miss} [GeV/c]"; static TString LabelXAxisTruekMiss = ";True k_{miss} [GeV/c]";
	static TString LabelXAxisPMissMinus = ";P^{-}_{miss} [GeV/c]"; static TString LabelXAxisTruePMissMinus = ";True P^{-}_{miss} [GeV/c]";
	static TString LabelXAxisPMiss = ";P_{miss} [GeV/c]"; static TString LabelXAxisTruePMiss = ";True P_{miss} [GeV/c]";
	
	static TString LabelXAxisDeltaPT = ";#deltap_{T} [GeV/c]"; static TString LabelXAxisTrueDeltaPT = ";True #deltap_{T} [GeV/c]";
	static TString LabelXAxisDeltaAlphaT = ";#delta#alpha_{T} [deg]"; static TString LabelXAxisTrueDeltaAlphaT = ";True #delta#alpha_{T} [deg]";
	static TString LabelXAxisDeltaPhiT = ";#delta#phi_{T} [deg]"; static TString LabelXAxisTrueDeltaPhiT = ";True #delta#phi_{T} [deg]";
		
			
	TString RecoLabelXAxisThreePlaneChi2MuonCandidateLogLikelihood = ";3-Plane LogLikelihood #mu-Candidate";
	TString RecoLabelXAxisThreePlaneChi2ProtonCandidateLogLikelihood = ";3-Plane LogLikelihood p-Candidate";
	TString RecoLabelXAxisChi2 = ";#chi^{2}_{p}";
	TString RecoLabelXAxisThreePlaneChi2 = ";3-plane #chi^{2}_{p}";
	TString RecoLabelXAxisDeltaTheta = ";#Delta#theta";
	TString RecoLabelXAxisThreePlaneChi2LogLikelihood = ";3-Plane LogLikelihood";
	TString RecoLabelXAxisDeltaPhi = ";#Delta#phi";
	TString RecoLabelXAxisdYZ = ";d_{YZ} (cm)";
	TString RecoLabelXAxisNPE = ";# PE";
	TString RecoLabelXAxisDistance = ";#mu - p distance (cm)";
	TString RecoLabelXAxisNuScore = ";#nu score";
	TString RecoLabelXAxisFlashScore = ";Flash score";
	TString RecoLabelXAxisLengthDifference = ";l_{#mu} - l_{p} [cm]";
	
	// ------------------------------------------------------------------------------------------------------------------------------------

	// Labels for 2D Plots

	static TString LabelXAxisDeltaPT2D = LabelXAxisTrueDeltaPT+";Reco #deltap_{T} [GeV/c]";
	static TString LabelXAxisDeltaAlphaT2D = LabelXAxisTrueDeltaAlphaT+";Reco #delta#alpha_{T} [deg]";
	static TString LabelXAxisDeltaPhiT2D = LabelXAxisTrueDeltaPhiT+";Reco #delta#phi_{T} [deg]";

	static TString LabelXAxisMuonMomentum2D = LabelXAxisTrueMuonMomentum+";Reco P_{#mu} [GeV/c]";
	static TString LabelXAxisMuonPhi2D = LabelXAxisTrueMuonPhi+";Reco #phi_{#mu} [deg]";
	static TString LabelXAxisMuonCosTheta2D = LabelXAxisTrueMuonCosTheta+";Reco cos#theta_{#mu}";

	static TString LabelXAxisProtonMomentum2D = LabelXAxisTrueProtonMomentum+";Reco P_{p} [GeV/c]";
	static TString LabelXAxisProtonPhi2D = LabelXAxisTrueProtonPhi+";Reco #phi_{p} [deg]";
	static TString LabelXAxisProtonCosTheta2D = LabelXAxisTrueProtonCosTheta+";Reco cos#theta_{p}";

	static TString LabelXAxisECal2D = ";True E^{Cal} [GeV];Reco E^{Cal} [GeV]";
	static TString LabelXAxisEQE2D = ";True E^{QE} [GeV];Reco E^{QE} [GeV]";
	static TString LabelXAxisQ22D = ";True Q^{2} [GeV^{2}/c^{2}];Reco Q^{2} [GeV^{2}/c^{2}]";

	// --------------------------------------------------------------------------------------------------------------------------------------

	static int OverlayColor = kAzure-4;
	static int BeamOnColor = kBlack;
	static int GenieOverlayColor = kBlack;
	static int GenieColor = 610;
	static int Geniev3OutOfTheBoxColor = kMagenta;
//	static int GenieOverlayColor = kOrange+7;	
	static int GiBUUColor = 410;
	static int NuWroColor = kOrange+7;	
	static int NEUTColor = kRed+1;
	static int GENIEv2Color = kBlue;	
	static int GENIEv3_0_4_Color = kGray+1;
	static int SuSav2Color = 429;	
	
	// ---------------------------------------------------------------------------------------------------------------------------------------

	// Constants, Cuts & Thresholds

	static const double NPE = 10;

	static const double MuonChi2Cut = 100.;
	static const double ProtonChi2Cut = 80.;

	static const double MuonThreePlaneChi2LogLikelihoodCut = -1.;
	static const double ProtonThreePlaneChi2LogLikelihoodCut = -0.5;

	static const double CosmicPID = -999.;
	static const int CosmicPdg = -99;

	static const double BE = 0.04; // GeV

	static const double DeltaRCut = 3; // cm
	static const double ThresholdPurity = 0.1; // 10%
	static const double UBSpaceReso = 0.3; // cm // 3mm spacing between the wires

	static const double DeltaThetaCut = 180.; // deg
	static const double DeltaPhiCentralValue = 180.; // deg
	static const double DeltaPhiOpeningAngle = 35.; // deg
	static const double MaxTransMissMomentum = 0.35; // deg

	static const double MaxMuPDistance = 2.; // cm

	static const double MaxPFParticleTrackDistance = 20.; // cm

	static const double YZBeamFlashVertexMaxDistance = 500.; // cm
	static const double BeamFlashPEThreshold = 100; // PEs

	static const double ChargedPionMomentumThres = 0.07;
	static const double NeutralPionMomentumThres = 0.0;

	static const double PurityThreshold = 0.1;

	static const double MinimumNuScore = 0.6;		

	// --------------------------------------------------------------------------------------------------------------------------------------

}
#endif
