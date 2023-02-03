#ifndef CONSTANTS_H
#define CONSTANTS_H

#include "TString.h"
#include "TMath.h"

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <map>

using namespace std;

namespace Constants {

	//----------------------------------------//

	// User  
  
	TString UserID = "apapadop";
	TString Experiment = "sbnd";
	const TString SBNDCodeVersion = "v09_56_00";
	const TString CutExtension = "_NoCuts_ProtonPID";	
	
	// Constants

	static const double Units = 1E38; // so that the extracted cross-section is 10^{-38} cm^{2}
	static const double NA = 6.02214 * TMath::Power(10.,23.); // Avogadro's number, mol^-1 
	
	static const int NuMuPdg = 14, MuonPdg = 13, NuEPdg = 12, ElectronPdg = 11;
	static const int ProtonPdg = 2212, NeutronPdg = 2112;
	static const int AbsChargedPionPdg = 211, NeutralPionPdg = 111, KaonPdg = 321;
	static const int DeuteriumPdg = 1000010020, HeliumPdg = 1000020040, ArgonPdg = 1000180400;

	static const double MuonMass = 106, ProtonMass = 938.272, NeutronMass = 939.565; // MeV
	static const double MuonMass_GeV = 0.106, ProtonMass_GeV = 0.938272, NeutronMass_GeV = 0.939565; // GeV
	static const double DeltaM2 = TMath::Power(NeutronMass_GeV,2.) - TMath::Power(ProtonMass_GeV,2.); // GeV^2	
	
	static const double CosmicPID = -999.;
	static const int    CosmicPdg = -99;	
	
	static double POTUncertainty = 0.02; // 2% POT Uncertainty		
	static double NTargetUncertainty = 0.01; // 1% NTarget Uncertainty	

	// Argon 

	static const double A = 40.;
	static const double Z = 18.;
	static const double ArgonDensity = 1.3836; // g/cm^3
	static const double ArgonMolMass = 39.95; // g/mol
	static const double BE = 0.04; // Argon binding energy, GeV	

	// Detector

	double FVx = 199.15; //cm
	double FVy = 200; //cm	
	double FVz = 500; //cm

	double borderx = 10; //cm
	double bordery = 10; //cm	
	double borderz = 10; //cm
	
	double SBND_FV = (FVx - 2 * borderx) * (FVy - 2 * bordery) * (FVz - 2 * borderz); // cm^3

	static const double NTargets = ArgonDensity * SBND_FV *NA / ArgonMolMass; // Argon nuclei, not nucleons		

	//----------------------------------------//

	// Paths

	const TString PathToFiles          = "/"+Experiment+"/data/users/"+UserID+"/myEvents/OutputFiles/"+SBNDCodeVersion+"/";
	const TString TrueSTVPath          = "/"+Experiment+"/data/users/"+UserID+"/myEvents/OutputFiles/"+SBNDCodeVersion+"/";	
	const TString PathToExtractedXSec  = "/"+Experiment+"/data/users/"+UserID+"/mySTVAnalysis/myXSec/"+SBNDCodeVersion+"/"; 
	const TString FileEfficienciesPath = "/"+Experiment+"/data/users/"+UserID+"/mySTVAnalysis/myEfficiencies/"+SBNDCodeVersion+"/";
	const TString PlotPath             = "/"+Experiment+"/data/users/"+UserID+"/mySTVAnalysis/myPlots/"+SBNDCodeVersion+"/"; 
	const TString PathToSystematics    = "/"+Experiment+"/data/users/"+UserID+"/mySTVAnalysis/mySystematics/"+SBNDCodeVersion+"/";
	const TString MigrationMatrixPath  = "/"+Experiment+"/data/users/"+UserID+"/mySTVAnalysis/myMigrationMatrices/"+SBNDCodeVersion+"/"; 

	//----------------------------------------//

	// Zarko Pavlovic, Jun 22 2020
	// /pnfs/uboone/persistent/uboonebeam/bnb_gsimple/bnb_gsimple_fluxes_01.09.2019_463_hist/readme.txt

	double Nominal_UB_XY_Surface = 256.35*233.; // cm2
	double SoftFidSurface = 236. * 210.;  // cm2
	double POTPerSpill = 4997.*5e8;

	//----------------------------------------//

	static std::map<TString,std::pair<double,double> > XSecRange =
	{
		{ "SingleBinPlot",       std::make_pair(0, 14) },	
		{ "MuonMomentumPlot",    std::make_pair(0, 29) },
		{ "MuonCosThetaPlot",    std::make_pair(0, 24) },
		{ "MuonPhiPlot",         std::make_pair(0, 0.049) },
		{ "ProtonMomentumPlot",  std::make_pair(0, 34) },
		{ "ProtonCosThetaPlot",  std::make_pair(0, 24) },
		{ "ProtonPhiPlot",       std::make_pair(0, 0.045) },
		{ "Pi0MomentumPlot",     std::make_pair(0, 34) },
		{ "Pi0CosThetaPlot",     std::make_pair(0, 24) },
		{ "Pi0PhiPlot",          std::make_pair(0, 0.045) },		
		{ "ECalPlot",            std::make_pair(0, 29.) },			
		{ "EQEPlot",             std::make_pair(0, 29.) },
		{ "Q2Plot",              std::make_pair(0, 29) },	
		{ "DeltaPTPlot",         std::make_pair(0, 59) },
		{ "DeltaPnPlot",         std::make_pair(0, 49) },		
		{ "DeltaAlphaTPlot",     std::make_pair(0, 0.12) },
		{ "DeltaAlpha3DPlot",    std::make_pair(0, 0.16) },		
		{ "DeltaPhiTPlot",       std::make_pair(0., 0.39) },			
		{ "DeltaPtxPlot",        std::make_pair(0, 54) },
		{ "DeltaPtyPlot",        std::make_pair(0, 39) },	
		{ "VertexXPlot",         std::make_pair(0, 0.079) },
		{ "VertexYPlot",         std::make_pair(0, 0.079) },
		{ "VertexZPlot",         std::make_pair(0, 0.014) },							
								
	};	
	
	//----------------------------------------//

	static std::map<TString,TString> VarLabel =
	{
		{ "SingleBinPlot",      "#sigma #left[10^{-38} #frac{cm^{2}}{Ar}#right]" },	
		{ "MuonMomentumPlot",   "#frac{d#sigma}{dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },		
		{ "MuonCosThetaPlot",   "#frac{d#sigma}{dcos#theta_{#mu}} #left[10^{-38} #frac{cm^{2}}{Ar}#right]" },
		{ "MuonPhiPlot",        "#frac{d#sigma}{d#phi_{#mu}} #left[10^{-38} #frac{cm^{2}}{deg Ar}#right]" },
		{ "ProtonMomentumPlot", "#frac{d#sigma}{dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "ProtonCosThetaPlot", "#frac{d#sigma}{dcos#theta_{p}} #left[10^{-38} #frac{cm^{2}}{Ar}#right]" },
		{ "ProtonPhiPlot",      "#frac{d#sigma}{d#phi_{p}} #left[10^{-38} #frac{cm^{2}}{deg Ar}#right]" },
		{ "Pi0MomentumPlot",    "#frac{d#sigma}{dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "Pi0CosThetaPlot",    "#frac{d#sigma}{dcos#theta_{p}} #left[10^{-38} #frac{cm^{2}}{Ar}#right]" },
		{ "Pi0PhiPlot",         "#frac{d#sigma}{d#phi_{p}} #left[10^{-38} #frac{cm^{2}}{deg Ar}#right]" },	
		{ "ECalPlot",           "#frac{d#sigma}{dE^{Cal}} #left[10^{-38} #frac{cm^{2}}{GeV Ar}#right]" },
		{ "EQEPlot",            "#frac{d#sigma}{dE^{QE}} #left[10^{-38} #frac{cm^{2}}{GeV Ar}#right]" },		
		{ "Q2Plot",             "#frac{d#sigma}{dQ^{2}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c^{2} Ar}#right]" },				
		{ "DeltaPTPlot",        "#frac{d#sigma}{d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "DeltaPnPlot",        "#frac{d#sigma}{dp_{n,proxy}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },		
		{ "DeltaAlphaTPlot",    "#frac{d#sigma}{d#delta#alpha_{T}} #left[10^{-38} #frac{cm^{2}}{deg Ar}#right]" },
		{ "DeltaAlpha3DPlot",   "#frac{d#sigma}{d#delta#alpha_{3D}} #left[10^{-38} #frac{cm^{2}}{deg Ar}#right]" },		
		{ "DeltaPhiTPlot",      "#frac{d#sigma}{d#delta#phi_{T}} #left[10^{-38} #frac{cm^{2}}{deg Ar}#right]" },	
		{ "DeltaPtxPlot",       "#frac{d#sigma}{d#deltap_{T,x}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "DeltaPtyPlot",       "#frac{d#sigma}{d#deltap_{T,y}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },	
		{ "VertexXPlot",        "#frac{d#sigma}{dx} #left[10^{-38} #frac{cm^{2}}{cm Ar}#right]" },
		{ "VertexYPlot",        "#frac{d#sigma}{dy} #left[10^{-38} #frac{cm^{2}}{cm Ar}#right]" },
		{ "VertexZPlot",        "#frac{d#sigma}{dz} #left[10^{-38} #frac{cm^{2}}{cm Ar}#right]" },			
					
	};
	
	//----------------------------------------//		
	
	static std::map<TString,TString> LatexLabel =
	{
		{ "SingleBinPlot",      "All events" },
		{ "MuonMomentumPlot",   "All events" },
		{ "MuonCosThetaPlot",   "All events" },
		{ "MuonPhiPlot",        "All events" },
		{ "ProtonMomentumPlot", "All events" },
		{ "ProtonCosThetaPlot", "All events" },
		{ "ProtonPhiPlot",      "All events" },
		{ "Pi0MomentumPlot",    "All events" },
		{ "Pi0CosThetaPlot",    "All events" },
		{ "Pi0PhiPlot",         "All events" },					
		{ "ECalPlot",           "All events" },							
		{ "EQEPlot",            "All events" },
		{ "Q2Plot",             "All events" },
		{ "DeltaPTPlot",        "All events" },
		{ "DeltaPnPlot",        "All events" },		
		{ "DeltaAlphaTPlot",    "All events" },
		{ "DeltaAlpha3DPlot",   "All events" },		
		{ "DeltaPhiTPlot",      "All events" },			
		{ "DeltaPtxPlot",       "All events" },
		{ "DeltaPtyPlot",       "All events" },
		{ "VertexXPlot",        "All events" },
		{ "VertexYPlot",        "All events" },
		{ "VertexZPlot",        "All events" },			
	};	
	
	//----------------------------------------//
	
	static std::map<TString,TString> MapUncorCor =
	{

		{ "SingleBinPlot",      "SingleBinPlot" },
		{ "MuonMomentumPlot",   "MuonMomentumPlot" },
		{ "MuonCosThetaPlot",   "MuonCosThetaPlot" },
		{ "MuonPhiPlot",        "MuonPhiPlot" },
		{ "ProtonMomentumPlot", "ProtonMomentumPlot" },
		{ "ProtonCosThetaPlot", "ProtonCosThetaPlot" },
		{ "ProtonPhiPlot",      "ProtonPhiPlot" },
		{ "Pi0MomentumPlot",    "Pi0MomentumPlot" },
		{ "Pi0CosThetaPlot",    "Pi0CosThetaPlot" },
		{ "Pi0PhiPlot",         "Pi0PhiPlot" },								
		{ "DeltaPTPlot",        "DeltaPTPlot" },
		{ "DeltaPnPlot",        "DeltaPnPlot" },		
		{ "DeltaAlphaTPlot",    "DeltaAlphaTPlot" },
		{ "DeltaAlpha3DPlot",   "DeltaAlpha3DPlot" },		
		{ "DeltaPhiTPlot",      "DeltaPhiTPlot" },
		{ "DeltaPtxPlot",       "DeltaPtxPlot" },
		{ "DeltaPtyPlot",       "DeltaPtyPlot" },
		{ "ECalPlot",           "ECalPlot" },
		{ "EQEPlot",            "EQEPlot" },								
		{ "Q2Plot",             "Q2Plot" },
		{ "VertexXPlot",        "VertexXPlot" },
		{ "VertexYPlot",        "VertexYPlot" },				
		{ "VertexZPlot",        "VertexZPlot" },								
	};	

	//----------------------------------------//

	// Plots to be included for xsec extraction purposes

	vector<TString> PlotNames{
				 "MuonCosThetaSingleBinPlot"
				,"MuonMomentumPlot"  
				,"MuonCosThetaPlot"
				,"MuonPhiPlot"
				,"ProtonMomentumPlot"  
				,"ProtonCosThetaPlot"
				,"ProtonPhiPlot"
				,"Pi0MomentumPlot"  
				,"Pi0CosThetaPlot"
				,"Pi0PhiPlot"								
				,"DeltaPTPlot"
				,"DeltaPnPlot"				
				,"DeltaAlphaTPlot"
				,"DeltaAlpha3DPlot"
				,"DeltaPhiTPlot"
				,"DeltaPtxPlot"
				,"DeltaPtyPlot"								
				,"ECalPlot"
				,"EQEPlot"
				,"Q2Plot"
				,"VertexXPlot"
				,"VertexYPlot"
				,"VertexZPlot"
				 				 				 				 
				};

	//----------------------------------------//

	// POT Normalization & Runs

	vector<TString> Runs{"Run1"};

	// Run 1 

	static const double tor860_wcut_Run1 = 4.566e+19;
	static const double E1DCNT_wcut_Run1 = 10127594.0;
	static const double EXT_Run1 = 32514217.0;

	static const double Fulltor860_wcut_Run1 = 1.62e20;
	static const double FullE1DCNT_wcut_Run1 = 36139233.0;
	static const double FullEXT_Run1 = 65498807.0;
	
	//----------------------------------------//

	// Binning

	static const int NBinsMuonMomentum = 10; static const double ArrayNBinsMuonMomentum[NBinsMuonMomentum+1] = { 0.1,0.2,0.3,0.4,0.5,0.64,0.77,0.9,1.,1.1,1.2};
	static const int NBinsMuonCosTheta = 18;
	static const double ArrayNBinsMuonCosTheta[NBinsMuonCosTheta+1] = { -1.,-0.85,-0.7,-0.57,-0.45,-0.32,-0.2,-0.1,0.,0.1,0.2,0.3,0.4,0.5,0.6,0.72,0.84,0.95,1.};
	static const int NBinsMuonPhi = 10; static const double ArrayNBinsMuonPhi[NBinsMuonPhi+1] = { -180.,-144.,-108.,-72.,-36.,0.,36.,72.,108.,144.,180.};	
	
	static const int NBinsProtonMomentum = 10; static const double ArrayNBinsProtonMomentum[NBinsProtonMomentum+1] = {0.3,0.38,0.45,0.5,0.55,0.625,0.7,0.75,0.8,0.87,1.};
	static const int NBinsProtonCosTheta = 11;
	static const double ArrayNBinsProtonCosTheta[NBinsProtonCosTheta+1] = { -1.,-0.73,-0.43,-0.18,0.05,0.2,0.37,0.54,0.7,0.8,0.9,1.};		
	static const int NBinsProtonPhi = 10; static const double ArrayNBinsProtonPhi[NBinsProtonPhi+1] = { -180.,-144.,-108.,-72.,-36.,0.,36.,72.,108.,144.,180.}; 
	
	static const int NBinsPi0Momentum = 10; static const double ArrayNBinsPi0Momentum[NBinsPi0Momentum+1] = {0.3,0.38,0.45,0.5,0.55,0.625,0.7,0.75,0.8,0.87,1.};
	static const int NBinsPi0CosTheta = 11;
	static const double ArrayNBinsPi0CosTheta[NBinsPi0CosTheta+1] = { -1.,-0.73,-0.43,-0.18,0.05,0.2,0.37,0.54,0.7,0.8,0.9,1.};		
	static const int NBinsPi0Phi = 10; static const double ArrayNBinsPi0Phi[NBinsPi0Phi+1] = { -180.,-144.,-108.,-72.,-36.,0.,36.,72.,108.,144.,180.}; 		

	static const int NBinsDeltaPT      = 13; static const double ArrayNBinsDeltaPT[NBinsDeltaPT+1] = {0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.47,0.55,0.65,0.75,0.9};
	static const int NBinsDeltaPn      = 10; static const double ArrayNBinsDeltaPn[NBinsDeltaPn+1] = {0,0.07,0.14,0.2,0.3,0.4,0.47,0.55,0.65,0.75,0.85};
	static const int NBinsDeltaAlphaT  = 7; static const double ArrayNBinsDeltaAlphaT[NBinsDeltaAlphaT+1] = { 0.,22.,44.,66.,88.,110.,145.,180. };
	static const int NBinsDeltaAlpha3D = 8; static const double ArrayNBinsDeltaAlpha3D[NBinsDeltaAlpha3D+1] = { 0.,30.,50.,70.,90.,110.,130.,155.,180. };	
	static const int NBinsDeltaPhiT    = 12; static const double ArrayNBinsDeltaPhiT[NBinsDeltaPhiT+1] = {0.,12.5,25.,37.5,50.,60.,75.,90.,106.,126.,145.,162.,180.};
	static const int NBinsDeltaPtx     = 11; static const double ArrayNBinsDeltaPtx[NBinsDeltaPtx+1] = {-0.55,-0.45,-0.35,-0.25,-0.15,-0.05,0.05,0.15,0.25,0.35,0.45,0.55};
	static const int NBinsDeltaPty     = 12; static const double ArrayNBinsDeltaPty[NBinsDeltaPty+1] = {-0.75,-0.65,-0.55,-0.45,-0.35,-0.25,-0.15,-0.05,0.05,0.15,0.25,0.35,0.45};
	
	static const int NBinsECal = 9; static const double ArrayNBinsECal[NBinsECal+1] = {0.2,0.35,0.5,0.65,0.8,0.95,1.1,1.25,1.4,1.6};	
	static const int NBinsEQE  = 10; static const double ArrayNBinsEQE[NBinsEQE+1] = {0.2,0.34,0.48,0.62,0.76,0.9,1.04,1.18,1.32,1.46,1.6}; 	 
	static const int NBinsQ2   = 8; static const double ArrayNBinsQ2[NBinsQ2+1] = { 0.,0.08,0.18,0.28,0.39,0.5,0.65,0.8,1.}; 	
	
	static const int NBinsVertexX = 15; static const double MinVertexX = 10., MaxVertexX = 246.;
	static const int NBinsVertexY = 15; static const double MinVertexY = -105., MaxVertexY = 105.;
	static const int NBinsVertexZ = 25; static const double MinVertexZ = 10., MaxVertexZ = 1026.;	
	
	//----------------------------------------//

	// 1D Labels
	
	static TString LabelXAxisMuonMomentum = ";p_{#mu} [GeV/c]"; static TString LabelXAxisTrueMuonMomentum = ";True p_{#mu} [GeV/c]";
	static TString LabelXAxisMuonCosTheta = ";cos#theta_{#mu}"; static TString LabelXAxisTrueMuonCosTheta = ";True cos#theta_{#mu}";
	static TString LabelXAxisMuonPhi      = ";#phi_{#mu} [deg]"; static TString LabelXAxisTrueMuonPhi = ";True #phi_{#mu} [deg]";
			
	static TString LabelXAxisProtonMomentum = ";p_{p} [GeV/c]"; static TString LabelXAxisTrueProtonMomentum = ";True p_{p} [GeV/c]";
	static TString LabelXAxisProtonCosTheta = ";cos#theta_{p}"; static TString LabelXAxisTrueProtonCosTheta = ";True cos#theta_{p}";
	static TString LabelXAxisProtonPhi      = ";#phi_{p} [deg]"; static TString LabelXAxisTrueProtonPhi = ";True #phi_{p} [deg]";	
	
	static TString LabelXAxisPi0Momentum    = ";p_{#pi^{0}} [GeV/c]"; static TString LabelXAxisTruePi0Momentum = ";True p_{#pi^{0}} [GeV/c]";
	static TString LabelXAxisPi0CosTheta    = ";cos#theta_{#pi^{0}}"; static TString LabelXAxisTruePi0CosTheta = ";True cos#theta_{#pi^{0}}";
	static TString LabelXAxisPi0Phi         = ";#phi_{#pi^{0}} [deg]"; static TString LabelXAxisTruePi0Phi = ";True #phi_{#pi^{0}} [deg]";	
	
	static TString LabelXAxisDeltaPT      = ";#deltap_{T} [GeV/c]"; static TString LabelXAxisTrueDeltaPT = ";True #deltap_{T} [GeV/c]";
	static TString LabelXAxisDeltaPn      = ";p_{n,proxy} [GeV/c]"; static TString LabelXAxisTrueDeltaPn = ";True p_{n,proxy} [GeV/c]";	
	static TString LabelXAxisDeltaAlphaT  = ";#delta#alpha_{T} [deg]"; static TString LabelXAxisTrueDeltaAlphaT = ";True #delta#alpha_{T} [deg]";
	static TString LabelXAxisDeltaAlpha3D = ";#delta#alpha_{3D} [deg]"; static TString LabelXAxisTrueDeltaAlpha3D = ";True #delta#alpha_{3D} [deg]";	
	static TString LabelXAxisDeltaPhiT    = ";#delta#phi_{T} [deg]"; static TString LabelXAxisTrueDeltaPhiT = ";True #delta#phi_{T} [deg]";
	static TString LabelXAxisDeltaPtx     = ";#deltap_{T,x} [GeV/c]"; static TString LabelXAxisTrueDeltaPtx = ";True #deltap_{T,x} [GeV/c]";
	static TString LabelXAxisDeltaPty     = ";#deltap_{T,y} [GeV/c]"; static TString LabelXAxisTrueDeltaPty = ";True #deltap_{T,y} [GeV/c]";		
	
	static TString LabelXAxisECal = ";E^{Cal} [GeV]"; static TString LabelXAxisTrueECal = ";True E^{Cal} [GeV]";
	static TString LabelXAxisEQE  = ";E^{QE} [GeV]"; static TString LabelXAxisTrueEQE = ";True E^{QE} [GeV]";
	static TString LabelXAxisQ2   = ";Q^{2} [GeV^{2}/c^{2}]"; static TString LabelXAxisTrueQ2 = ";True Q^{2} [GeV^{2}/c^{2}]";
	
	static TString LabelXAxisVertexX = "Vertex x [cm]";
	static TString LabelXAxisVertexY = "Vertex y [cm]";	
	static TString LabelXAxisVertexZ = "Vertex z [cm]";	
	
	// 2D Labels

	static TString LabelXAxisMuonMomentum2D = LabelXAxisTrueMuonMomentum+";Reco P_{#mu} [GeV/c]";
	static TString LabelXAxisMuonCosTheta2D = LabelXAxisTrueMuonCosTheta+";Reco cos#theta_{#mu}";
	static TString LabelXAxisMuonPhi2D      = LabelXAxisTrueMuonPhi+";Reco #phi_{#mu} [deg]";	

	static TString LabelXAxisProtonMomentum2D = LabelXAxisTrueProtonMomentum+";Reco P_{p} [GeV/c]";
	static TString LabelXAxisProtonCosTheta2D = LabelXAxisTrueProtonCosTheta+";Reco cos#theta_{p}";
	static TString LabelXAxisProtonPhi2D      = LabelXAxisTrueProtonPhi+";Reco #phi_{p} [deg]";
	
	static TString LabelXAxisPi0Momentum2D = LabelXAxisTruePi0Momentum+";Reco P_{#pi^{0}} [GeV/c]";
	static TString LabelXAxisPi0CosTheta2D = LabelXAxisTruePi0CosTheta+";Reco cos#theta_{#pi^{0}}";
	static TString LabelXAxisPi0Phi2D      = LabelXAxisTruePi0Phi+";Reco #phi_{#pi^{0}} [deg]";

	static TString LabelXAxisDeltaPT2D      = LabelXAxisTrueDeltaPT+";Reco #deltap_{T} [GeV/c]";
	static TString LabelXAxisDeltaPn2D      = LabelXAxisTrueDeltaPn+";Reco p_{n,proxy} [GeV/c]";	
	static TString LabelXAxisDeltaAlphaT2D  = LabelXAxisTrueDeltaAlphaT+";Reco #delta#alpha_{T} [deg]";
	static TString LabelXAxisDeltaAlpha3D2D = LabelXAxisTrueDeltaAlpha3D+";Reco #delta#alpha_{3D} [deg]";	
	static TString LabelXAxisDeltaPhiT2D    = LabelXAxisTrueDeltaPhiT+";Reco #delta#phi_{T} [deg]";
	static TString LabelXAxisDeltaPtx2D     = LabelXAxisTrueDeltaPtx+";Reco #deltap_{T,x} [GeV/c]";
	static TString LabelXAxisDeltaPty2D     = LabelXAxisTrueDeltaPty+";Reco #deltap_{T,y} [GeV/c]";	

	static TString LabelXAxisECal2D = ";True E^{Cal} [GeV];Reco E^{Cal} [GeV]";
	static TString LabelXAxisEQE2D  = ";True E^{QE} [GeV];Reco E^{QE} [GeV]";
	static TString LabelXAxisQ22D   = ";True Q^{2} [GeV^{2}/c^{2}];Reco Q^{2} [GeV^{2}/c^{2}]";
	
	static TString RecoLabelXAxisVertexX2D = ";True Vertex x [cm];Reco Vertex x [cm]";
	static TString RecoLabelXAxisVertexY2D = ";True Vertex y [cm];Reco Vertex y [cm]";
	static TString RecoLabelXAxisVertexZ2D = ";True Vertex z [cm];Reco Vertex z [cm]";											
			
	//----------------------------------------//	

	// Scaling factor for multi dimensional analysis

	static std::map<TString,double> MultiDimScaleFactor =
	{
		{ "SingleBinPlot",      1. },
		{ "MuonMomentumPlot",   1. },	
		{ "MuonCosThetaPlot",   1. },	
		{ "MuonPhiPlot",        1. },	
		{ "ProtonMomentumPlot", 1. },
		{ "ProtonCosThetaPlot", 1. },
		{ "ProtonPhiPlot",      1. },
		{ "Pi0MomentumPlot",    1. },
		{ "Pi0CosThetaPlot",    1. },
		{ "Pi0PhiPlot",         1. },								
		{ "DeltaPTPlot",        1. },
		{ "DeltaPnPlot",        1. },		
		{ "DeltaAlphaTPlot",    1. },
		{ "DeltaAlpha3DPlot",   1. },		
		{ "DeltaPhiTPlot",      1. },
		{ "DeltaPtxPlot",       1. },
		{ "DeltaPtyPlot",       1. },		
		{ "ECalPlot",           1. },			
		{ "EQEPlot",            1. },
		{ "Q2Plot",             1. },		
		{ "VertexXPlot",        1. },
		{ "VertexYPlot",        1. },
		{ "VertexZPlot",        1. },																
	};	
	
	//----------------------------------------//
	
	// Interaction labels
	
	const std::vector<int> InteBreakColors{kBlack,kAzure-4,kOrange-3,kGreen+1,kRed+1,kBlue};		
	const std::vector<TString> InteractionLabels{"","QE","MEC","RES","DIS","COH"};
	const int NInte = InteractionLabels.size();
	
	//----------------------------------------//		

}
#endif
