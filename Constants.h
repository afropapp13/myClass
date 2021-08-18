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

	const int FontStyle = 132;
	const double TextSize = 0.07;
	const int NCont = 999; 
	const TString CutExtension = "_NoCuts_PID_NuScore";

	// UBCodeVersion

//	const TString UBCodeVersion = "v08_00_00_33";
//	const TString UBCodeVersion = "v08_00_00_43";
	const TString UBCodeVersion = "v08_00_00_52";

	// ---------------------------------------------------------------------------------

	// Exporting paths

	const TString PathToFiles = "/uboone/data/users/"+UserID+"/myEvents/OutputFiles/"+UBCodeVersion+"/";
	const TString PathToExtractedXSec = "/uboone/data/users/"+UserID+"/mySTVAnalysis/myXSec/"+UBCodeVersion+"/"; 
	const TString FileEfficienciesPath = "/uboone/data/users/"+UserID+"/mySTVAnalysis/myEfficiencies/"+UBCodeVersion+"/";
	const TString PlotPath = "/uboone/data/users/"+UserID+"/mySTVAnalysis/myPlots/"+UBCodeVersion+"/"; 
	const TString CCQEPlotPath = "/uboone/data/users/"+UserID+"/mySTVAnalysis/myCCQEPlots/"+UBCodeVersion+"/"; 
	const TString PathToSystematics = "/uboone/data/users/"+UserID+"/mySTVAnalysis/mySystematics/"+UBCodeVersion+"/";
	const TString TrueSTVPath = PathToFiles;
	const TString MigrationMatrixPath = "/uboone/data/users/"+UserID+"/mySTVAnalysis/myMigrationMatrices/"+UBCodeVersion+"/"; 

	//---------------------------------------------------------------------------------

	// Zarko Pavlovic, Jun 22 2020
	// /pnfs/uboone/persistent/uboonebeam/bnb_gsimple/bnb_gsimple_fluxes_01.09.2019_463_hist/readme.txt

	double Nominal_UB_XY_Surface = 256.35*233.; // cm2
	double SoftFidSurface = 250. * 224.;  // cm2
	double POTPerSpill = 4997.*5e8;

	// ---------------------------------------------------------------------------------

	// Labels / Ranges & Label  map

	static std::map<TString,std::pair<double,double> > XSecRange =
	{
		{ "DeltaPTPlot",  std::make_pair(0, 67) },
		{ "DeltaAlphaTPlot",  std::make_pair(0, 0.15) },
		{ "DeltaPhiTPlot",  std::make_pair(0., 0.53) },
		{ "MuonMomentumPlot",  std::make_pair(0, 24) },
		{ "MuonCosThetaPlot",  std::make_pair(0, 29) },
		{ "MuonCosThetaSingleBinPlot",  std::make_pair(0, 22) },
		{ "MuonPhiPlot",  std::make_pair(0, 0.059) },
		{ "ProtonMomentumPlot",  std::make_pair(0, 37) },
		{ "ProtonCosThetaPlot",  std::make_pair(0, 27) },
		{ "ProtonPhiPlot",  std::make_pair(0, 0.055) },
		{ "ECalPlot",  std::make_pair(0, 24) },
		{ "EQEPlot",  std::make_pair(0, 19) },
		{ "Q2Plot",  std::make_pair(0, 34) },	
		{ "CCQEMuonMomentumPlot",  std::make_pair(0, 24) },
		{ "CCQEMuonCosThetaPlot",  std::make_pair(0, 9) },
		{ "CCQEProtonMomentumPlot",  std::make_pair(0, 37) },
		{ "CCQEProtonCosThetaPlot",  std::make_pair(0, 11) },
		{ "CCQEECalPlot",  std::make_pair(0, 24) },
		{ "CCQEQ2Plot",  std::make_pair(0, 24) },	
		{ "DeltaPLPlot",  std::make_pair(0, 47) },
		{ "DeltaPnPlot",  std::make_pair(0, 59) },
		{ "DeltaPtxPlot",  std::make_pair(0, 47) },
		{ "DeltaPtyPlot",  std::make_pair(0, 47) },	
		{ "APlot",  std::make_pair(0, 39) },	
		{ "kMissPlot",  std::make_pair(0, 59) },
		{ "PMissPlot",  std::make_pair(0, 59) },	
		{ "PMissMinusPlot",  std::make_pair(0, 47) },
													
	};

	static std::map<TString,TString> VarLabel =
	{
		{ "DeltaPTPlot",  "#frac{d#sigma}{d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "DeltaAlphaTPlot",  "#frac{d#sigma}{d#delta#alpha_{T}} #left[10^{-38} #frac{cm^{2}}{deg Ar}#right]" },
		{ "DeltaPhiTPlot",  "#frac{d#sigma}{d#delta#phi_{T}} #left[10^{-38} #frac{cm^{2}}{deg Ar}#right]" },
		{ "MuonMomentumPlot",  "#frac{d#sigma}{dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "MuonCosThetaPlot",  "#frac{d#sigma}{dcos#theta_{#mu}} #left[10^{-38} #frac{cm^{2}}{Ar}#right]" },
		{ "MuonCosThetaSingleBinPlot",  "#frac{d#sigma}{dcos#theta_{#mu}} #left[10^{-38} #frac{cm^{2}}{Ar}#right]" },
		{ "MuonPhiPlot",  "#frac{d#sigma}{d#phi_{#mu}} #left[10^{-38} #frac{cm^{2}}{deg Ar}#right]" },
		{ "ProtonMomentumPlot",  "#frac{d#sigma}{dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "ProtonCosThetaPlot",  "#frac{d#sigma}{dcos#theta_{p}} #left[10^{-38} #frac{cm^{2}}{Ar}#right]" },
		{ "ProtonPhiPlot",  "#frac{d#sigma}{d#phi_{p}} #left[10^{-38} #frac{cm^{2}}{deg Ar}#right]" },
		{ "ECalPlot",  "#frac{d#sigma}{dE^{Cal}} #left[10^{-38} #frac{cm^{2}}{GeV Ar}#right]" },
		{ "EQEPlot",  "#frac{d#sigma}{dE^{QE}} #left[10^{-38} #frac{cm^{2}}{GeV Ar}#right]" },
		{ "Q2Plot",  "#frac{d#sigma}{dQ^{2}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c^{2} Ar}#right]" },	
		{ "CCQEMuonMomentumPlot",  "#frac{d#sigma}{dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "CCQEMuonCosThetaPlot",  "#frac{d#sigma}{dcos#theta_{#mu}} #left[10^{-38} #frac{cm^{2}}{Ar}#right]" },
		{ "CCQEProtonMomentumPlot",  "#frac{d#sigma}{dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "CCQEProtonCosThetaPlot",  "#frac{d#sigma}{dcos#theta_{p}} #left[10^{-38} #frac{cm^{2}}{Ar}#right]" },
		{ "CCQEECalPlot",  "#frac{d#sigma}{dE^{Cal}} #left[10^{-38} #frac{cm^{2}}{GeV Ar}#right]" },
		{ "CCQEQ2Plot",  "#frac{d#sigma}{dQ^{2}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c^{2} Ar}#right]" },	
		{ "DeltaPLPlot",  "#frac{d#sigma}{d#deltap_{L}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "DeltaPnPlot",  "#frac{d#sigma}{dp_{n,proxy}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "DeltaPtxPlot",  "#frac{d#sigma}{d#deltap_{T,x}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "DeltaPtyPlot",  "#frac{d#sigma}{d#deltap_{T,y}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "APlot",  "#frac{d#sigma}{d#alpha} #left[10^{-38} #frac{cm^{2}}{c Ar}#right]" },
		{ "kMissPlot",  "#frac{d#sigma}{dk_{Miss}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "PMissPlot",  "#frac{d#sigma}{dP_{Miss}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "PMissMinusPlot",  "#frac{d#sigma}{dp_{Miss}^{-}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" }
										
	};	

	// -------------------------------------------------------------------------------------------------------------------------

	// Genie Constants

	static const double SuSav2FluxIntegratedXSection = 37.2171; // e-38 cm^2
//	static const double FluxIntegratedXSection = 26.5732; // e-38 cm^2 MCC8 number
	static const double G18_10a_02_11a_FluxIntegratedXSection = 27.1682; // e-38 cm^2 MCC9 number GENIE v3.0.6
	static const double R_2_12_10_FluxIntegratedXSection = 35.116; // e-38 cm^2 MCC9 number GENIE v2.12.10
	static const double R_3_0_4_FluxIntegratedXSection = 26.7883; // e-38 cm^2 MCC9 number GENIE v3.0.4
	static const double R_3_0_6_G18_10a_02_11a_NoCoulomb_FluxIntegratedXSection = 26.134; // e-38 cm^2 MCC9 number GENIE v3.0.6 / G18_10a_02_11a w/o Coulomb corrections
	static const double R_3_0_6_G18_10a_02_11a_NoRPA_FluxIntegratedXSection = 27.7777; // e-38 cm^2 MCC9 number GENIE v3.0.6 / G18_10a_02_11a w/o RPA corrections
	static const double R_3_0_6_G18_10a_02_11a_RFG_FluxIntegratedXSection = 25.76; // e-38 cm^2 MCC9 number GENIE v3.0.6 / G18_10a_02_11a and RFG instead of LFG
	static const double R_3_0_6_G18_10a_02_11a_EffSF_FluxIntegratedXSection = 24.5238; // e-38 cm^2 MCC9 number GENIE v3.0.6 / G18_10a_02_11a and EffSF instead of LFG

	// Global Constants

	static const double Units = 1E38; // so that the extracted cross-section is 10^{-38} cm^{2}
	static const double NTargets = 1.203E30; // Argon nuclei, not nucleons
	
	static const int NuMuPdg = 14, MuonPdg = 13, ProtonPdg = 2212, AbsChargedPionPdg = 211, NeutralPionPdg = 111, ElectronPdg = 11, NeutronPdg = 2112, KaonPdg = 321;
	static const int DeuteriumPdg = 1000010020, HeliumPdg = 1000020040, ArgonPdg = 1000180400;

	static const double MuonMass = 106, ProtonMass = 938.272, NeutronMass = 939.565; // MeV
	static const double MuonMass_GeV = 0.106, ProtonMass_GeV = 0.938272, NeutronMass_GeV = 0.939565; // GeV
	static const double DeltaM2 = TMath::Power(NeutronMass_GeV,2.) - TMath::Power(ProtonMass_GeV,2.); // GeV^2	

	// -------------------------------------------------------------------------------------------------------------------------

	// Plots to be included for xsec extraction purposes

	vector<TString> PlotNames{"DeltaPTPlot","DeltaAlphaTPlot","DeltaPhiTPlot","MuonMomentumPlot","MuonCosThetaPlot","MuonCosThetaSingleBinPlot","MuonPhiPlot","ProtonMomentumPlot"
				 ,"ProtonCosThetaPlot","ProtonPhiPlot","Q2Plot","ECalPlot","EQEPlot"
				 ,"CCQEMuonMomentumPlot","CCQEMuonCosThetaPlot","CCQEProtonMomentumPlot","CCQEProtonCosThetaPlot"
				 ,"CCQEQ2Plot","CCQEECalPlot"
				 ,"DeltaPLPlot","DeltaPnPlot","DeltaPtxPlot","DeltaPtyPlot"
				 ,"APlot","kMissPlot","PMissPlot","PMissMinusPlot"};

	// "ECalPlot" "EQEPlot" "Q2Plot" "CCQEECalPlot" "CCQEEQEPlot" "CCQEQ2Plot"

	// --------------------------------------------------------------------------------------------------------------------------

	// POT Normalization & Runs


//	vector<TString> Runs{"Run1"};
/*	vector<TString> Runs{"Run1","Run3"};*/
/*	vector<TString> Runs{"Run1","Run2","Run3"};*/
	vector<TString> Runs{"Run1","Run2","Run3","Combined"};
//	vector<TString> Runs{"Run1","Run2","Run3","Run4","Run5"};

	// DeltaPT Slices

	vector<double> LowPT{0.,0.2,0.4};
	vector<double> HighPT{0.2,0.4,2.};	

	// v43 Run 1 

	static const double tor860_wcut_Run1 = 4.566e+19;
	static const double E1DCNT_wcut_Run1 = 10127594.0;
	static const double EXT_Run1 = 32514217.0;

	static const double Fulltor860_wcut_Run1 = 1.62e20;
	static const double FullE1DCNT_wcut_Run1 = 36139233.0;
	static const double FullEXT_Run1 = 65498807.0;
	
	// v43 Run 2 

	static const double tor860_wcut_Run2 = 0.;
	static const double E1DCNT_wcut_Run2 = 1.;
	static const double EXT_Run2 = 1.;

	static const double Fulltor860_wcut_Run2 = 2.62e20;
	static const double FullE1DCNT_wcut_Run2 = 62045760.0;
	static const double FullEXT_Run2 = 152404890.0;
	
	// v43 Run 3 

	static const double tor860_wcut_Run3 = 9.513e+18;
	static const double E1DCNT_wcut_Run3 = 2299517.0;
	static const double EXT_Run3 = 131356320.0;

	static const double Fulltor860_wcut_Run3 = 2.55e20;
	static const double FullE1DCNT_wcut_Run3 = 61012955.0;
	static const double FullEXT_Run3 = 214555174.0;
	
	// v43 Run 4 

	static const double tor860_wcut_Run4 = 0.;
	static const double E1DCNT_wcut_Run4 = 0.;
	static const double EXT_Run4 = 0.;

	static const double Fulltor860_wcut_Run4 = 0.;
	static const double FullE1DCNT_wcut_Run4 = 0.;
	static const double FullEXT_Run4 = 0.;
	
	// v43 Run 5 

	static const double tor860_wcut_Run5 = 0.;
	static const double E1DCNT_wcut_Run5 = 0.;
	static const double EXT_Run5 = 0.;	

	static const double Fulltor860_wcut_Run5 = 0.;
	static const double FullE1DCNT_wcut_Run5 = 0.;
	static const double FullEXT_Run5 = 0.;	

	// Combined POT

	static const double Fulltor860_wcut_Combined = Fulltor860_wcut_Run1 + Fulltor860_wcut_Run2 + Fulltor860_wcut_Run3 + Fulltor860_wcut_Run4 + tor860_wcut_Run5;	
	static const double FullEXT_Combined = FullEXT_Run1 + FullEXT_Run2 + FullEXT_Run3 + FullEXT_Run4 + FullEXT_Run5;	
	static const double FullE1DCNT_wcut_Combined = FullE1DCNT_wcut_Run1 + FullE1DCNT_wcut_Run2 + FullE1DCNT_wcut_Run3 + FullE1DCNT_wcut_Run4 + FullE1DCNT_wcut_Run5;	

	// -----------------------------------------------------------------------------------------------------------------------------------------------

	// Binning

	static const int NBinsA = 10; static const double ArrayNBinsA[NBinsA+1] = {0.5,0.6,0.7,0.8,0.9,1.,1.1,1.2,1.3,1.4,1.5}; 
	static const int NBinskMiss = 11; static const double ArrayNBinskMiss[NBinskMiss+1] = {0,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.47,0.55,0.65,0.75}; 
	static const int NBinsPMiss = 9; static const double ArrayNBinsPMiss[NBinsPMiss+1] = {0,0.07,0.14,0.2,0.3,0.4,0.5,0.6,0.8,1.}; 
	static const int NBinsPMissMinus = 13; 
	static const double ArrayNBinsPMissMinus[NBinsPMissMinus+1] = {0.525,0.6,0.675,0.75,0.825,0.9,0.975,1.05,1.125,1.2,1.275,1.35,1.425,1.5};	
	
/*	static const int NBinsDeltaPT = 8; static const double ArrayNBinsDeltaPT[NBinsDeltaPT+1] = {0,0.1,0.2,0.3,0.4,0.5,0.6,0.8,1.}; */
/*	static const int NBinsDeltaPT = 4; static const double ArrayNBinsDeltaPT[NBinsDeltaPT+1] = {0,0.18,0.41,0.73,1.};*/
/*	static const int NBinsDeltaPT = 6; static const double ArrayNBinsDeltaPT[NBinsDeltaPT+1] = {0,0.12,0.24,0.36,0.55,0.74,1.};*/
/*	static const int NBinsDeltaPT = 8; static const double ArrayNBinsDeltaPT[NBinsDeltaPT+1] = {0,0.1,0.2,0.3,0.4,0.5,0.6,0.75,0.95};*/
/*	static const int NBinsDeltaPT = 14; static const double ArrayNBinsDeltaPT[NBinsDeltaPT+1] = {0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.61,0.68,0.75};*/
	static const int NBinsDeltaPT = 12; static const double ArrayNBinsDeltaPT[NBinsDeltaPT+1] = {0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.47,0.55,0.65,0.75};

	static const int NBinsDeltaPL = 16; static const double ArrayNBinsDeltaPL[NBinsDeltaPL+1] = {-0.47,-0.39,-0.32,-0.25,-0.17,-0.1,-0.05,0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.47};
	static const int NBinsDeltaPn = 10; static const double ArrayNBinsDeltaPn[NBinsDeltaPn+1] = {0,0.07,0.14,0.2,0.27,0.34,0.4,0.47,0.55,0.65,0.75};
	static const int NBinsDeltaPtx = 20; static const double ArrayNBinsDeltaPtx[NBinsDeltaPtx+1] = {-0.55,-0.47,-0.4,-0.35,-0.3,-0.25,-0.2,-0.15,-0.1,-0.05,0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.47,0.55};
	static const int NBinsDeltaPty = 14; static const double ArrayNBinsDeltaPty[NBinsDeltaPty+1] = {-0.47,-0.36,-0.25,-0.2,-0.15,-0.1,-0.05,0,0.05,0.1,0.15,0.2,0.25,0.36,0.47};

/*	static const int NBinsDeltaAlphaT = 7; static const double ArrayNBinsDeltaAlphaT[NBinsDeltaAlphaT+1] = { 0.,25.,50.,75.,100.,125.,150.,180. }; */
/*	static const int NBinsDeltaAlphaT = 4; static const double ArrayNBinsDeltaAlphaT[NBinsDeltaAlphaT+1] = { 0.,36.,85.,140.,180. }; */
/*	static const int NBinsDeltaAlphaT = 12; static const double ArrayNBinsDeltaAlphaT[NBinsDeltaAlphaT+1] = { 0.,15.,30,45.,60.,75.,90.,105.,120.,135.,150.,165.,180. }; */
	static const int NBinsDeltaAlphaT = 10; static const double ArrayNBinsDeltaAlphaT[NBinsDeltaAlphaT+1] = { 0.,15.,30.,45.,62.,77.,92.,115.,135.,160.,180. };

/*	static const int NBinsDeltaPhiT = 10; */
/*	static const double ArrayNBinsDeltaPhiT[NBinsDeltaPhiT+1] = {0.,18,36,54,72,90,108,126,144,162.,180.};	*/

/*	static const int NBinsDeltaPhiT = 6; static const double ArrayNBinsDeltaPhiT[NBinsDeltaPhiT+1] = {0.,15,29,51,81,130.,180.};*/
	static const int NBinsDeltaPhiT = 13; static const double ArrayNBinsDeltaPhiT[NBinsDeltaPhiT+1] = {0.,10.,20.,30.,40.,50.,60.,75.,90.,106.,126.,145.,162.,180.};
	
	static const int NBinsEQE = 7; static const double ArrayNBinsEQE[NBinsEQE+1] = {0.2,0.4,0.6,0.8,1.,1.2,1.4,1.6}; 	
	
	// STV analysis

	static const int NBinsECal = 7; static const double ArrayNBinsECal[NBinsECal+1] = {0.2,0.4,0.6,0.8,1.,1.2,1.4,1.6}; 
	static const int NBinsQ2 = 8; static const double ArrayNBinsQ2[NBinsQ2+1] = { 0.0,0.1,0.2,0.3,0.4,0.5,0.65,0.8,1.}; 	
	
/*	static const int NBinsMuonMomentum = 8; static const double ArrayNBinsMuonMomentum[NBinsMuonMomentum+1] = { 0.1,0.3,0.5,0.7,0.9,1.1,1.3,1.5,1.7}; */
/*	static const int NBinsMuonMomentum = 5; static const double ArrayNBinsMuonMomentum[NBinsMuonMomentum+1] = { 0.1,0.25,0.45,0.8,1.15,1.7};*/
/*	static const int NBinsMuonMomentum = 9; static const double ArrayNBinsMuonMomentum[NBinsMuonMomentum+1] = { 0.1,0.2,0.3,0.45,0.6,0.75,0.9,1.1,1.3,1.5};*/
/*	static const int NBinsMuonMomentum = 9; static const double ArrayNBinsMuonMomentum[NBinsMuonMomentum+1] = { 0.1,0.25,0.4,0.55,0.7,0.85,1.,1.15,1.35,1.6};*/
	static const int NBinsMuonMomentum = 11; static const double ArrayNBinsMuonMomentum[NBinsMuonMomentum+1] = { 0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.,1.1,1.2};

/*	static const int NBinsMuonPhi = 7; static const double ArrayNBinsMuonPhi[NBinsMuonPhi+1] = { -180.,-128.6,-77.1,-25.7,25.7,77.1,128.6,180.};*/
	static const int NBinsMuonPhi = 17; static const double ArrayNBinsMuonPhi[NBinsMuonPhi+1] = { -180.,-160.,-140.,-120.,-100.,-80,-60,-40,-20.,0.,20.,40.,60.,90.,120.,140.,160.,180.};
/*	static const int NBinsMuonCosTheta = 9; */
/*	static const double ArrayNBinsMuonCosTheta[NBinsMuonCosTheta+1] = { -1.,-0.8,-0.6,-0.4,-0.2,-0.0,0.2,0.5,0.8,1.};*/

//	static const int NBinsMuonCosTheta = 11; 
/*	static const double ArrayNBinsMuonCosTheta[NBinsMuonCosTheta+1] = { -1.,-0.82,-0.6,-0.4,-0.2,-0.0,0.2,0.45,0.67,0.85,1.};*/
/*	static const double ArrayNBinsMuonCosTheta[NBinsMuonCosTheta+1] = { -1.,-0.8,-0.6,-0.4,-0.2,-0.0,0.2,0.4,0.55,0.7,0.85,1.};*/

	static const int NBinsMuonCosTheta = 19;
	static const double ArrayNBinsMuonCosTheta[NBinsMuonCosTheta+1] = { -1.,-0.85,-0.7,-0.57,-0.45,-0.32,-0.2,-0.1,0.,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.89,0.95,1.};

/*	static const int NBinsProtonMomentum = 9; */
/*	static const double ArrayNBinsProtonMomentum[NBinsProtonMomentum+1] = {0.25,0.4,0.5,0.6,0.7,0.8,0.9,1.,1.1,1.2};*/

/*	static const int NBinsProtonMomentum = 8; static const double ArrayNBinsProtonMomentum[NBinsProtonMomentum+1] = {0.25,0.37,0.5,0.6,0.7,0.8,0.92,1.07,1.25};*/
/*	static const int NBinsProtonMomentum = 14; static const double ArrayNBinsProtonMomentum[NBinsProtonMomentum+1] = {0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.9,1.,1.1};*/
/*	static const int NBinsProtonMomentum = 12; static const double ArrayNBinsProtonMomentum[NBinsProtonMomentum+1] = {0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.87,1.};*/
	static const int NBinsProtonMomentum = 11; static const double ArrayNBinsProtonMomentum[NBinsProtonMomentum+1] = {0.3,0.38,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.87,1.};

/*	static const int NBinsProtonPhi = 7; static const double ArrayNBinsProtonPhi[NBinsProtonPhi+1] = { -180.,-128.6,-77.1,-25.7,25.7,77.1,128.6,180.}; */
	static const int NBinsProtonPhi = 18; static const double ArrayNBinsProtonPhi[NBinsProtonPhi+1] = {-180.,-160.,-140.,-120.,-100.,-80,-60,-40,-20.,0.,20.,40.,60.,80.,100.,120.,140.,160.,180.}; 

/*	static const int NBinsProtonCosTheta = 8; */
/*	static const double ArrayNBinsProtonCosTheta[NBinsProtonCosTheta+1] = { -1.,-0.6,-0.3,0.,0.2,0.4,0.6,0.8,1. }; */

//	static const int NBinsProtonCosTheta = 8; 
/*	static const double ArrayNBinsProtonCosTheta[NBinsProtonCosTheta+1] = { -1.,-0.63,-0.25,0.05,0.3,0.51,0.68,0.84,1. };*/
/*	static const double ArrayNBinsProtonCosTheta[NBinsProtonCosTheta+1] = { -1.,-0.61,-0.23,0.05,0.3,0.51,0.68,0.84,1. };*/

	static const int NBinsProtonCosTheta = 12;
/*	static const double ArrayNBinsProtonCosTheta[NBinsProtonCosTheta+1] = { -1.,-0.73,-0.43,-0.18,0.05,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1. };*/
	static const double ArrayNBinsProtonCosTheta[NBinsProtonCosTheta+1] = { -1.,-0.73,-0.43,-0.18,0.05,0.2,0.34,0.47,0.6,0.7,0.8,0.9,1. };
	
	// -----------------------------------------------------------------------------------------------------------------------------------------
	
	// MCC8 CCQE analysis binning 
	
	static const int CCQENBinsECal = 7; 
	static const double CCQEArrayNBinsECal[CCQENBinsECal+1] = {0.3, 0.51428571, 0.72857143, 0.94285714, 1.15714286,1.37142857, 1.58571429, 1.8}; 
	static const int CCQENBinsQ2 = 7; 
	static const double CCQEArrayNBinsQ2[CCQENBinsQ2+1] = {0., 0.17142857, 0.34285714, 0.51428571, 0.68571429, 0.85714286,1.02857143,1.2}; 

	static const int CCQENBinsMuonMomentum = 7; // PRL binning
	static const double CCQEArrayNBinsMuonMomentum[CCQENBinsMuonMomentum+1] = {0.1, 0.3, 0.5, 0.7, 0.9, 1.1, 1.3,1.5}; // PRL binnning

	static const int CCQENBinsMuonPhi = 7; 
	static const double CCQEArrayNBinsMuonPhi[CCQENBinsMuonPhi+1] = {-180.,-128.57142857,-77.14285714,-25.71428571,25.71428571,77.14285714,128.57142857,180.};
	static const int CCQENBinsMuonCosTheta = 7; 
	static const double CCQEArrayNBinsMuonCosTheta[CCQENBinsMuonCosTheta+1] = {-0.65, -0.4083,-0.167,0.075,0.317,0.5583, 0.8, 0.95};

	static const int CCQENBinsProtonMomentum = 7; // PRL binning
	static const double CCQEArrayNBinsProtonMomentum[CCQENBinsProtonMomentum+1] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.};  // PRL binning

	static const int CCQENBinsProtonPhi = 7; 
	static const double CCQEArrayNBinsProtonPhi[CCQENBinsProtonPhi+1] ={-180.,-128.57142857,-77.14285714,-25.71428571,25.71428571,77.14285714,128.57142857,180.};
	static const int CCQENBinsProtonCosTheta = 7; 
	static const double CCQEArrayNBinsProtonCosTheta[CCQENBinsProtonCosTheta+1] = {0.15,0.2583,0.366,0.475 ,0.583,0.692,0.8,0.95}; 

	// -----------------------------------------------------------------------------------------------------------------------------------------

	static const int NBinsLLRPID = 40; static const double MinLLRPID = -1., MaxLLRPID = 1.;
	static const int NBinsChi2 = 30; static const double MinChi2 = 0., MaxChi2 = 300.;
	static const int NBinsThreePlaneChi2 = 25; static const double MinThreePlaneChi2 = 0., MaxThreePlaneChi2 = 500.;
	static const int NBinsThreePlaneChi2LogLikelihood = 40;
	static const double MinThreePlaneChi2LogLikelihood = -5., MaxThreePlaneChi2LogLikelihood = 5.;
	static const int NBinsDeltaTheta = 18; static const double MinDeltaTheta = 0., MaxDeltaTheta = 180.;
	static const int NBinsDeltaPhi = 15; static const double MinDeltaPhi = 0., MaxDeltaPhi = 360.;
	static const int NBinsdYZ = 20; static const double MindYZ = 0., MaxdYZ = 500.;
	static const int NBinsdXYZ = 30; static const double MindXYZ = 0., MaxdXYZ = 600.;
	static const int NBinsMuonLength = 50; static const double MinMuonLength = 0., MaxMuonLength = 400.;
	static const int NBinsProtonLength = 50; static const double MinProtonLength = 0., MaxProtonLength = 100.;
	static const int NBinsLengthDifference = 35; static const double MinLengthDifference = -150., MaxLengthDifference = 550.;
	static const int NBinsNPE = 50; static const double MinNPE = 0., MaxNPE = 3000.;
	static const int NBinsDistance = 22; static const double MinDistance = 0., MaxDistance = 11.;
	static const int NBinsEv = 36; static const double MinEv = 0.25, MaxEv = 1.6;
	static const int NBinsNu = 30; static const double MinNu = 0., MaxNu = 0.8;
	static const int NBinsNuScore = 25; static const double MinNuScore = 0., MaxNuScore = 1.;
	static const int NBinsFlashScore = 25; static const double MinFlashScore = 0., MaxFlashScore = 50.; 
	static const int NBinsTrackScore = 25; static const double MinTrackScore = 0.5, MaxTrackScore = 1.;
	static const int NBinsMuonVertexDistance = 25; static const double MinMuonVertexDistance = 0., MaxMuonVertexDistance = 2.;
	static const int NBinsProtonVertexDistance = 25; static const double MinProtonVertexDistance = 0., MaxProtonVertexDistance = 5.;
	static const int NBinsVertexActivity = 25; static const double MinVertexActivity = 0., MaxVertexActivity = 1.;
	static const int NBinsVertexX = 50; static const double MinVertexX = -10., MaxVertexX = 265.;
	static const int NBinsVertexY = 50; static const double MinVertexY = -120., MaxVertexY = 120.;
	static const int NBinsVertexZ = 50; static const double MinVertexZ = -50., MaxVertexZ = 1056.;
	
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

	static TString LabelXAxiskMiss = ";k_{Miss} [GeV/c]"; static TString LabelXAxisTruekMiss = ";True k_{miss} [GeV/c]";
	static TString LabelXAxisPMissMinus = ";P^{-}_{Miss} [GeV/c]"; static TString LabelXAxisTruePMissMinus = ";True P^{-}_{miss} [GeV/c]";
	static TString LabelXAxisPMiss = ";P_{Miss} [GeV/c]"; static TString LabelXAxisTruePMiss = ";True P_{miss} [GeV/c]";

	static TString LabelXAxisDeltaPL = ";#deltap_{L} [GeV/c]"; static TString LabelXAxisTrueDeltaPL = ";True #deltap_{L} [GeV/c]";
	static TString LabelXAxisDeltaPn = ";p_{n,proxy} [GeV/c]"; static TString LabelXAxisTrueDeltaPn = ";True p_{n,proxy} [GeV/c]";
	static TString LabelXAxisDeltaPtx = ";#deltap_{T,x} [GeV/c]"; static TString LabelXAxisTrueDeltaPtx = ";True #deltap_{T,x} [GeV/c]";
	static TString LabelXAxisDeltaPty = ";#deltap_{T,y} [GeV/c]"; static TString LabelXAxisTrueDeltaPty = ";True #deltap_{T,y} [GeV/c]";
	static TString LabelXAxisA = ";#alpha [c]"; static TString LabelXAxisTrueA = ";True #alpha [c]";
	
	static TString LabelXAxisDeltaPT = ";#deltap_{T} [GeV/c]"; static TString LabelXAxisTrueDeltaPT = ";True #deltap_{T} [GeV/c]";
	static TString LabelXAxisDeltaAlphaT = ";#delta#alpha_{T} [deg]"; static TString LabelXAxisTrueDeltaAlphaT = ";True #delta#alpha_{T} [deg]";
	static TString LabelXAxisDeltaPhiT = ";#delta#phi_{T} [deg]"; static TString LabelXAxisTrueDeltaPhiT = ";True #delta#phi_{T} [deg]";

	TString RecoLabelXAxisLLRPID = ";LLR PID Score";		
	TString RecoLabelXAxisMuonLLRPID = ";#mu Candidate LLR PID Score";
	TString RecoLabelXAxisProtonLLRPID = ";p Candidate LLR PID Score";
	TString RecoLabelXAxisThreePlaneChi2MuonCandidateLogLikelihood = ";3-Plane LogLikelihood #mu-Candidate";
	TString RecoLabelXAxisThreePlaneChi2ProtonCandidateLogLikelihood = ";3-Plane LogLikelihood p-Candidate";
	TString RecoLabelXAxisChi2 = "Y-Plane ;#chi^{2}_{p}";
	TString RecoLabelXAxisThreePlaneChi2 = ";3-plane #chi^{2}_{p}";
	TString RecoLabelXAxisDeltaTheta = ";#delta#theta_{#mu,p}";
	TString RecoLabelXAxisThreePlaneChi2LogLikelihood = ";3-Plane LogLikelihood";
	TString RecoLabelXAxisDeltaPhi = ";#delta#phi_{#mu,p}";
	TString RecoLabelXAxisdYZ = ";d_{YZ} [cm]";
	TString RecoLabelXAxisdXYZ = ";d_{XYZ} [cm]";
	TString RecoLabelXAxisNPE = ";# PE";
	TString RecoLabelXAxisDistance = ";#mu - p distance [cm]";
	TString RecoLabelXAxisNuScore = ";#nu Score";
	TString RecoLabelXAxisEv = ";E_{#nu} [GeV]";
	TString RecoLabelXAxisNu = ";Energy Transfer [GeV]";
	TString RecoLabelXAxisFlashScore = ";Flash Score";
	TString RecoLabelXAxisMuonTrackScore = ";Muon Track Score";
	TString RecoLabelXAxisMuonVertexDistanceTrackScore = ";Muon Vertex Distance [cm]";
	TString RecoLabelXAxisProtonVertexDistanceTrackScore = ";Proton Vertex Distance [cm]";
	TString RecoLabelXAxisVertexActivity = ";Vertex Activity";
	TString RecoLabelXAxisVertexX = ";Vertex X [cm]";
	TString RecoLabelXAxisVertexY = ";Vertex Y [cm]";
	TString RecoLabelXAxisVertexZ = ";Vertex Z [cm]";
	TString RecoLabelXAxisProtonTrackScore = ";Proton Track Score";
	TString RecoLabelXAxisLengthDifference = ";l_{#mu} - l_{p} [cm]";
	TString RecoLabelXAxisMuonLength = ";l_{#mu} [cm]";
	TString RecoLabelXAxisProtonLength = ";l_{p} [cm]";
	
	// ------------------------------------------------------------------------------------------------------------------------------------

	// Labels for 2D Plots

	static TString LabelXAxisDeltaPT2D = LabelXAxisTrueDeltaPT+";Reco #deltap_{T} [GeV/c]";
	static TString LabelXAxisDeltaAlphaT2D = LabelXAxisTrueDeltaAlphaT+";Reco #delta#alpha_{T} [deg]";
	static TString LabelXAxisDeltaPhiT2D = LabelXAxisTrueDeltaPhiT+";Reco #delta#phi_{T} [deg]";

	static TString LabelXAxisDeltaPL2D = LabelXAxisTrueDeltaPL+";Reco #deltap_{L} [GeV/c]";
	static TString LabelXAxisDeltaPn2D = LabelXAxisTrueDeltaPn+";Reco p_{n,proxy} [GeV/c]";
	static TString LabelXAxisDeltaPtx2D = LabelXAxisTrueDeltaPtx+";Reco #delta p_{T,x} [GeV/c]";
	static TString LabelXAxisDeltaPty2D = LabelXAxisTrueDeltaPty+";Reco #delta p_{T,y} [GeV/c]";
	static TString LabelXAxisA2D = LabelXAxisTrueA+";Reco #alpha [c]";

	static TString LabelXAxiskMiss2D = LabelXAxisTruekMiss+";Reco k_{Miss} [GeV/c]";
	static TString LabelXAxisPMiss2D = LabelXAxisTruePMiss+";Reco P_{Miss} [GeV/c]";
	static TString LabelXAxisPMissMinus2D = LabelXAxisTruePMissMinus+";Reco P^{-}_{Miss} [GeV/c]";

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
//	static int SuSav2Color = 429;	
	static int SuSav2Color = kOrange-3;	
	
	// ---------------------------------------------------------------------------------------------------------------------------------------

	// Constants, Cuts & Thresholds

	static const double NPE = 10;

	static const double MuonChi2Cut = 100.;
	static const double ProtonChi2Cut = 80.;

	static const double MuonThreePlaneChi2LogLikelihoodCut = -1.;
	static const double ProtonThreePlaneChi2LogLikelihoodCut = -0.5;
	static const double ProtonLLRPIDScore = 0.;

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

/*	static const double MinimumNuScore = 0.04;*/
	static const double MinimumNuScore = 0.;

	static double POTUncertainty = 0.02; // 2% POT Uncertainty		

	static double NTargetUncertainty = 0.01; // 1% NTarget Uncertainty

	constexpr float TRACK_SCORE_CUT = 0.5;	

	// Quality cuts

	const TString MuRangeMCSAgree = "0.25"; const double MuRangeMCSAgreeValue = 0.25;
	const TString MuMinMCSLengthThres = "100";  const double MuMinMCSLengthThresValue = 100;
	const TString MuMinSumHits = "0.7";  const double MuMinSumHitsValue = 0.7;
	const TString PMinSumHits = "1.";  const double PMinSumHitsValue = 1.;	

	// --------------------------------------------------------------------------------------------------------------------------------------

	static const double NuScoreStep = (MaxNuScore - MinNuScore) / double(NBinsNuScore);
	static const double LLPStep = (MaxThreePlaneChi2LogLikelihood - MinThreePlaneChi2LogLikelihood) / double(NBinsThreePlaneChi2LogLikelihood);
	static const double MuonLengthStep = (MaxMuonLength - MinMuonLength) / double(NBinsMuonLength);
	static const double LLRPIDStep = (MaxLLRPID - MinLLRPID) / double(NBinsLLRPID);

	// --------------------------------------------------------------------------------------------------------------------------------

	// Selection  & Quality cuts

	// To recalibrate or not, that is the question

	TString Recalibrate = "";
//	TString Recalibrate = "_Recalibrate"; 

	// Reco level

	const TString CC1p = "CC1p && CandidateMu_MCParticle_Pdg == 13 && CandidateP_MCParticle_Pdg == 2212 && NumberPi0 == 0"; 

	const TString Containment = "CandidateMu_StartContainment == 1 && CandidateP_StartContainment == 1 && CandidateP_EndContainment == 1 && True_CandidateMu_StartContainment == 1";

	const TString ContainmentData = "CandidateMu_StartContainment == 1 && CandidateP_StartContainment == 1 && CandidateP_EndContainment == 1";

	const TString ProtonMom = "CandidateP_P_Range" + Recalibrate + " > " + TString(std::to_string(ArrayNBinsProtonMomentum[0])) + " && CandidateP_P_Range" + Recalibrate + " < "\
		+ TString(std::to_string(ArrayNBinsProtonMomentum[NBinsProtonMomentum])) + " && True_CandidateP_P > "+ TString(std::to_string(ArrayNBinsProtonMomentum[0]))\
		+ " && True_CandidateP_P < "+ TString(std::to_string(ArrayNBinsProtonMomentum[NBinsProtonMomentum]));

	const TString ProtonMomData = "CandidateP_P_Range" + Recalibrate + " > " + TString(std::to_string(ArrayNBinsProtonMomentum[0])) + " && CandidateP_P_Range" + Recalibrate + " < "\
		+ TString(std::to_string(ArrayNBinsProtonMomentum[NBinsProtonMomentum]));

	const TString DeltaPT = "Reco_Pt" + Recalibrate + " > " + TString(std::to_string(ArrayNBinsDeltaPT[0])) + " && Reco_Pt" + Recalibrate + " < " + TString(std::to_string(ArrayNBinsDeltaPT[NBinsDeltaPT]))\
		+ " && True_Pt > " + TString(std::to_string(ArrayNBinsDeltaPT[0])) + " && True_Pt < " + TString(std::to_string(ArrayNBinsDeltaPT[NBinsDeltaPT]));

	const TString DeltaPTData = "Reco_Pt" + Recalibrate + " > " + TString(std::to_string(ArrayNBinsDeltaPT[0])) + " && Reco_Pt" + Recalibrate + " < " + TString(std::to_string(ArrayNBinsDeltaPT[NBinsDeltaPT]));
 
	const TString DeltaPhiT = "Reco_DeltaPhiT" + Recalibrate + " > " + TString(std::to_string(ArrayNBinsDeltaPhiT[0])) + " && Reco_DeltaPhiT" + Recalibrate + " < "\
		+ TString(std::to_string(ArrayNBinsDeltaPhiT[NBinsDeltaPhiT]))\
		+ " && True_DeltaPhiT > " + TString(std::to_string(ArrayNBinsDeltaPhiT[0])) + " && True_DeltaPhiT < " + TString(std::to_string(ArrayNBinsDeltaPhiT[NBinsDeltaPhiT])); 

	const TString DeltaPhiTData = "Reco_DeltaPhiT" + Recalibrate + " > " + TString(std::to_string(ArrayNBinsDeltaPhiT[0])) + " && Reco_DeltaPhiT" + Recalibrate + " < "\
		+ TString(std::to_string(ArrayNBinsDeltaPhiT[NBinsDeltaPhiT])); 

	const TString MuonMom = "True_CandidateMu_P > "+ TString(std::to_string(ArrayNBinsMuonMomentum[0])) + " && True_CandidateMu_P < "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[NBinsMuonMomentum]))\
		+ " && ( ( CandidateMu_EndContainment == 1 && CandidateMu_P_Range" + Recalibrate + " > "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[0])) + " && CandidateMu_P_Range" + Recalibrate + " < "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[NBinsMuonMomentum])) +" ) || ( CandidateMu_EndContainment == 0 && CandidateMu_P_MCS" + Recalibrate + " > "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[0])) + " && CandidateMu_P_MCS" + Recalibrate + " < "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[NBinsMuonMomentum])) +" ) )" ;

	const TString MuonMomData = "( ( CandidateMu_EndContainment == 1 && CandidateMu_P_Range" + Recalibrate + " > "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[0])) + " && CandidateMu_P_Range" + Recalibrate + " < "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[NBinsMuonMomentum])) +" ) || ( CandidateMu_EndContainment == 0 && CandidateMu_P_MCS" + Recalibrate + " > "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[0])) + " && CandidateMu_P_MCS" + Recalibrate + " < "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[NBinsMuonMomentum])) +" ) )" ;

	const TString QualityCut = " ( (CandidateMu_EndContainment == 1 && TMath::Abs(CandidateMu_P_Range" + Recalibrate\
		+ "-CandidateMu_P_MCS" + Recalibrate + ")/CandidateMu_P_Range" + Recalibrate + " < "\
		+ MuRangeMCSAgree +" ) || (CandidateMu_EndContainment == 0 && CandidateMu_Length > " + MuMinMCSLengthThres + ") )";

	const TString OnlyContainedMuQualityCut = " ( ( CandidateMu_EndContainment == 1 && TMath::Abs(CandidateMu_P_Range" + Recalibrate + "-CandidateMu_P_MCS" + Recalibrate + ")/CandidateMu_P_Range" + Recalibrate + " < "+ MuRangeMCSAgree +" ) || (CandidateMu_EndContainment == 0) )";


/*	const TString MinHitsMu = " ( (CandidateMu_Plane0_LastEDep > " + MuMinSumHits + " && CandidateMu_Plane1_LastEDep > " + MuMinSumHits + " && CandidateMu_Plane2_LastEDep > " + MuMinSumHits +" ) || (CandidateMu_Plane0_LastEDep < " + MuMinSumHits + " && CandidateMu_Plane1_LastEDep > " + MuMinSumHits + " && CandidateMu_Plane2_LastEDep > " + MuMinSumHits +" ) || (CandidateMu_Plane0_LastEDep > " + MuMinSumHits + " && CandidateMu_Plane1_LastEDep < " + MuMinSumHits + " && CandidateMu_Plane2_LastEDep > " + MuMinSumHits +" ) || (CandidateMu_Plane0_LastEDep > " + MuMinSumHits + " && CandidateMu_Plane1_LastEDep > " + MuMinSumHits + " && CandidateMu_Plane2_LastEDep < " + MuMinSumHits +" ) )";*/

	const TString MinHitsMu = "CandidateMu_P_Range > 0";

/*	const TString MinHitsP = " ( (CandidateP_Plane0_LastEDep > " + PMinSumHits + " && CandidateP_Plane1_LastEDep > " + PMinSumHits + " && CandidateP_Plane2_LastEDep > " + PMinSumHits +" ) || (CandidateP_Plane0_LastEDep < " + PMinSumHits + " && CandidateP_Plane1_LastEDep > " + PMinSumHits + " && CandidateP_Plane2_LastEDep > " + PMinSumHits +" ) || (CandidateP_Plane0_LastEDep > " + PMinSumHits + " && CandidateP_Plane1_LastEDep < " + PMinSumHits + " && CandidateP_Plane2_LastEDep > " + PMinSumHits +" ) || (CandidateP_Plane0_LastEDep > " + PMinSumHits + " && CandidateP_Plane1_LastEDep > " + PMinSumHits + " && CandidateP_Plane2_LastEDep < " + PMinSumHits +" ) )";*/

	const TString MinHitsP = "CandidateP_P_Range > 0";

	const TString MinMuonVertexDist = "CandidateMuStartVertexDistance < CandidateMuEndVertexDistance";

	const TString MinProtonVertexDist = "CandidatePStartVertexDistance < CandidatePEndVertexDistance";

	const TString AvoidFlippedTracks = "StartToStartDistance < EndToEndDistance";

	const TString qualifier = CC1p +" && "+ Containment +" && " + ProtonMom + " && " + DeltaPT + " && " + DeltaPhiT + " && " + MuonMom + " && " + QualityCut + " && " + MinHitsMu\
		+ " && " + MinHitsP + " && " + MinMuonVertexDist + " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;

	const TString qualifierData = ContainmentData +" && " + ProtonMomData + " && " + DeltaPTData + " && " + DeltaPhiTData + " && " + MuonMomData + " && " + QualityCut + " && " + MinHitsMu\
		+ " && " + MinHitsP + " && " + MinMuonVertexDist + " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;

	const TString qualifierNoMuRangeCut = CC1p +" && "+ Containment +" && " + ProtonMom + " && " + DeltaPT + " && " + DeltaPhiT + " && " + MuonMom + " && " + MinHitsMu\
		+ " && " + MinHitsP  + " && " + MinMuonVertexDist + " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;

	const TString qualifierNoHitSumCut = CC1p +" && "+ Containment +" && " + ProtonMom + " && " + DeltaPT + " && " + DeltaPhiT + " && " + MuonMom + " && " + QualityCut\
		+ " && " + MinMuonVertexDist + " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;

	const TString qualifierNoExitMuQC = CC1p +" && "+ Containment +" && " + ProtonMom + " && " + DeltaPT + " && " + DeltaPhiT + " && " + MuonMom + " && " + OnlyContainedMuQualityCut\
		+ " && " + MinHitsMu+ " && " + MinHitsP + " && " + MinMuonVertexDist + " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;

	// --------------------------------------------------------------------------------------------------------------------------------

	const TString TrueCC1p = "CC1p && NumberPi0 == 0";

	const TString TrueProtonMom = "Proton_MCParticle_Mom > " + TString(std::to_string(ArrayNBinsProtonMomentum[0])) + " && Proton_MCParticle_Mom < "\
		+ TString(std::to_string(ArrayNBinsProtonMomentum[NBinsProtonMomentum]));

	const TString TrueMuonMom = "Muon_MCParticle_Mom > " + TString(std::to_string(ArrayNBinsMuonMomentum[0])) + " && Muon_MCParticle_Mom < "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[NBinsMuonMomentum])); 

	const TString TrueDeltaPT = "True_Pt > " + TString(std::to_string(ArrayNBinsDeltaPT[0])) + " && True_Pt < " + TString(std::to_string(ArrayNBinsDeltaPT[NBinsDeltaPT]));

	const TString TrueDeltaAlphaT = "True_DeltaAlphaT > " + TString(std::to_string(ArrayNBinsDeltaAlphaT[0])) + " && True_DeltaAlphaT < "\
		+ TString(std::to_string(ArrayNBinsDeltaAlphaT[NBinsDeltaAlphaT]));

	const TString TrueDeltaPhiT = "True_DeltaPhiT > " + TString(std::to_string(ArrayNBinsDeltaPhiT[0])) + " && True_DeltaPhiT < " + TString(std::to_string(ArrayNBinsDeltaPhiT[NBinsDeltaPhiT]));

	const TString TrueQualifier = TrueCC1p + " && " + TrueProtonMom + " && " + TrueMuonMom + " && " + TrueDeltaPT + " && " + TrueDeltaAlphaT + " && " + TrueDeltaPhiT;

	// --------------------------------------------------------------------------------------------------------------------------------

}
#endif
