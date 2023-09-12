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

        // Kerberos user name
  
	TString UserID = "apapadop";

	//----------------------------------------//

	// Argon 

	static const double A = 40.;
	static const double Z = 18.;

	const int FontStyle = 132;
	const double TextSize = 0.07;
	const int NCont = 999; 
	const TString CutExtension = "_NoCuts_PID_NuScore";

	// UBCodeVersion

	const TString UBCodeVersion = "v08_00_00_52";

	//----------------------------------------//

	// Exporting paths

	const TString PathToFiles = "/uboone/data/users/"+UserID+"/my3DEvents/OutputFiles/"+UBCodeVersion+"/";
	const TString PathToExtractedXSec = "/uboone/data/users/"+UserID+"/my3DSTVAnalysis/myXSec/"+UBCodeVersion+"/"; 
	const TString FileEfficienciesPath = "/uboone/data/users/"+UserID+"/my3DSTVAnalysis/myEfficiencies/"+UBCodeVersion+"/";
	const TString PlotPath = "/uboone/data/users/"+UserID+"/my3DSTVAnalysis/myPlots/"+UBCodeVersion+"/"; 
	const TString PathToSystematics = "/uboone/data/users/"+UserID+"/my3DSTVAnalysis/mySystematics/"+UBCodeVersion+"/";
	const TString TrueSTVPath = PathToFiles;
	const TString MigrationMatrixPath = "/uboone/data/users/"+UserID+"/my3DSTVAnalysis/myMigrationMatrices/"+UBCodeVersion+"/"; 

	//----------------------------------------//

	// Zarko Pavlovic, Jun 22 2020
	// /pnfs/uboone/persistent/uboonebeam/bnb_gsimple/bnb_gsimple_fluxes_01.09.2019_463_hist/readme.txt

	double Nominal_UB_XY_Surface = 256.35*233.; // cm2
	double SoftFidSurface = 236. * 210.;  // cm2
	double POTPerSpill = 4997.*5e8;

	//----------------------------------------//

	// Labels / Ranges & Label  map
	// max values

	static std::map<TString,std::pair<double,double> > XSecRange =
	{
		{ "DeltaPTPlot",  std::make_pair(0, 59) },
		{ "DeltaPnPlot",  std::make_pair(0, 49) },
		{ "DeltaAlphaTPlot",  std::make_pair(0, 0.12) },
		{ "DeltaAlpha3DqPlot",  std::make_pair(0, 0.18) },
		{ "DeltaPhiTPlot",  std::make_pair(0., 0.39) },
		{ "DeltaPhi3DPlot",  std::make_pair(0., 0.39) },		
		{ "MuonMomentumPlot",  std::make_pair(0, 29) },
		{ "MuonCosThetaPlot",  std::make_pair(0, 24) },
		{ "MuonCosThetaSingleBinPlot",  std::make_pair(0, 14) },
		{ "ProtonMomentumPlot",  std::make_pair(0, 34) },
		{ "ProtonCosThetaPlot",  std::make_pair(0, 24) },
		{ "ECalPlot",  std::make_pair(0, 29.) },			
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_0_00To45_00Plot",  std::make_pair(0, 0.42) },
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_45_00To90_00Plot",  std::make_pair(0, 0.44) },
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_90_00To135_00Plot",  std::make_pair(0, 0.47) },	
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_135_00To180_00Plot",  std::make_pair(0, 0.43) },
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_0_00To45_00Plot",  std::make_pair(0, 0.14) },
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_45_00To90_00Plot",  std::make_pair(0, 0.16) },
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_90_00To135_00Plot",  std::make_pair(0, 0.29) },	
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_135_00To180_00Plot",  std::make_pair(0, 0.29) },
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_0_00To45_00Plot",  std::make_pair(0, 0.006) },
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_45_00To90_00Plot",  std::make_pair(0, 0.0159) },
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_90_00To135_00Plot",  std::make_pair(0, 0.036) },	
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_135_00To180_00Plot",  std::make_pair(0, 0.11) },
		{ "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_10To0_40Plot",  std::make_pair(0, 14.9) },
		{ "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_10To0_40Plot",  std::make_pair(0, 24.) },
		{ "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_10To0_40Plot",  std::make_pair(0, 19.) },
		{ "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_10To0_40Plot",  std::make_pair(0, 7.) },
		{ "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_40To0_60Plot",  std::make_pair(0, 2.2) },
		{ "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_40To0_60Plot",  std::make_pair(0, 34.) },
		{ "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_40To0_60Plot",  std::make_pair(0, 69.) },
		{ "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_40To0_60Plot",  std::make_pair(0, 21.) },
		{ "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_60To1_20Plot",  std::make_pair(0, 0.03) },
		{ "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_60To1_20Plot",  std::make_pair(0, 1.6) },
		{ "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_60To1_20Plot",  std::make_pair(0, 24.) },
		{ "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_60To1_20Plot",  std::make_pair(0, 39.) },
		{ "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_30To0_50Plot",  std::make_pair(0, 9.9) },
		{ "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_30To0_50Plot",  std::make_pair(0, 40.) },
		{ "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_30To0_50Plot",  std::make_pair(0, 54.) },
		{ "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_30To0_50Plot",  std::make_pair(0, 39.) },
		{ "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_50To0_70Plot",  std::make_pair(0, 2.4) },
		{ "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_50To0_70Plot",  std::make_pair(0, 24.) },
		{ "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_50To0_70Plot",  std::make_pair(0, 79.) },
		{ "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_50To0_70Plot",  std::make_pair(0, 60.) },
		{ "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_70To1_00Plot",  std::make_pair(0, 0.22) },
		{ "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_70To1_00Plot",  std::make_pair(0, 3.5) },
		{ "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_70To1_00Plot",  std::make_pair(0, 29.) },
		{ "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_70To1_00Plot",  std::make_pair(0, 64.) },
		{ "SerialECal_DeltaPTDeltaAlphaTPlot",  std::make_pair(0, 0.9) },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot",  std::make_pair(0, 2.4) },
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot",  std::make_pair(0, 1.1) },		
								
	};	
	
	//----------------------------------------//

	static std::map<TString,TString> VarLabel =
	{
		{ "DeltaPTPlot",  "#frac{d#sigma}{d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "DeltaPnPlot",  "#frac{d#sigma}{dp_{n}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "DeltaAlphaTPlot",  "#frac{d#sigma}{d#delta#alpha_{T}} #left[10^{-38} #frac{cm^{2}}{deg Ar}#right]" },
		{ "DeltaAlpha3DqPlot",  "#frac{d#sigma}{d#alpha_{3D}} #left[10^{-38} #frac{cm^{2}}{deg Ar}#right]" },
		{ "DeltaPhiTPlot",  "#frac{d#sigma}{d#delta#phi_{T}} #left[10^{-38} #frac{cm^{2}}{deg Ar}#right]" },
		{ "DeltaPhi3DPlot",  "#frac{d#sigma}{d#phi_{3D}} #left[10^{-38} #frac{cm^{2}}{deg Ar}#right]" },		
		{ "MuonMomentumPlot",  "#frac{d#sigma}{dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "MuonCosThetaPlot",  "#frac{d#sigma}{dcos#theta_{#mu}} #left[10^{-38} #frac{cm^{2}}{Ar}#right]" },
		{ "MuonCosThetaSingleBinPlot",  "#frac{d#sigma}{dcos#theta_{#mu}} #left[10^{-38} #frac{cm^{2}}{Ar}#right]" },
		{ "ProtonMomentumPlot",  "#frac{d#sigma}{dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "ProtonCosThetaPlot",  "#frac{d#sigma}{dcos#theta_{p}} #left[10^{-38} #frac{cm^{2}}{Ar}#right]" },
		{ "ECalPlot",  "#frac{d#sigma}{dE^{Cal}} #left[10^{-38} #frac{cm^{2}}{GeV Ar}#right]" },
         	{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_0_00To45_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_45_00To90_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_90_00To135_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },	
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_135_00To180_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_0_00To45_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_45_00To90_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_90_00To135_00Plot", "#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },	
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_135_00To180_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_0_00To45_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_45_00To90_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_90_00To135_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },	
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_135_00To180_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_10To0_40Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]" },
		{ "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_10To0_40Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{#mu}dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_10To0_40Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{#mu}dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]" },
		{ "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_10To0_40Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{#mu}dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_40To0_60Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{#mu}dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_40To0_60Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{#mu}dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_40To0_60Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{#mu}dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_40To0_60Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{#mu}dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_60To1_20Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{#mu}dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_60To1_20Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{#mu}dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_60To1_20Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{#mu}dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_60To1_20Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{#mu}dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_30To0_50Plot","#frac{d^{3}#sigma}{dE^{Cal}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_30To0_50Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{p}dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_30To0_50Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{p}dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_30To0_50Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{p}dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_50To0_70Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{p}dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_50To0_70Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{p}dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_50To0_70Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{p}dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_50To0_70Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{p}dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_70To1_00Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{p}dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_70To1_00Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{p}dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_70To1_00Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{p}dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_70To1_00Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{p}dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},	
		{ "ECal_DeltaAlphaT_0_00To45_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "ECal_DeltaAlphaT_45_00To90_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV Ar}#right]" },
		{ "ECal_DeltaAlphaT_90_00To135_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV Ar}#right]" },	
		{ "ECal_DeltaAlphaT_135_00To180_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV Ar}#right]" },
		{ "SerialECal_DeltaPTDeltaAlphaTPlot", "#frac{d^{3}#sigma}{dE^{Cal} d#deltap_{T} d#delta#alpha_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot", "#frac{d^{3}#sigma}{dE^{Cal} dp_{#mu} dcos#theta_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]" },
	
	};

	static std::map<TString,TString> LatexLabel =
	{
		{ "DeltaPTPlot",  "All events" },
		{ "DeltaPnPlot",  "All events" },
		{ "DeltaAlphaTPlot",  "All events" },
		{ "DeltaAlpha3DqPlot",  "All events" },
		{ "DeltaPhiTPlot",  "All events" },
		{ "DeltaPhi3DPlot",  "All events" },		
		{ "MuonMomentumPlot",  "All events" },
		{ "MuonCosThetaPlot",  "All events" },
		{ "MuonCosThetaSingleBinPlot",  "All events" },
		{ "ProtonMomentumPlot",  "All events" },
		{ "ProtonCosThetaPlot",  "All events" },
		{ "ECalPlot",  "All events" },
	        { "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_0_00To45_00Plot","#deltap_{T} < 0.2 GeV/c, #delta#alpha_{T} < 45^{o}" },
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_45_00To90_00Plot","#deltap_{T} < 0.2 GeV/c, 45^{o} < #delta#alpha_{T} < 90^{o}" },
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_90_00To135_00Plot","#deltap_{T} < 0.2 GeV/c, 90^{o} < #delta#alpha_{T} < 135^{o}" },	
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_135_00To180_00Plot","#deltap_{T} < 0.2 GeV/c, 135^{o} < #delta#alpha_{T} < 180^{o}" },
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_0_00To45_00Plot","0.2 < #deltap_{T} < 0.4 GeV/c, #delta#alpha_{T} < 45^{o}" },
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_45_00To90_00Plot","0.2 < #deltap_{T} < 0.4 GeV/c, 45^{o} < #delta#alpha_{T} < 90^{o}" },
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_90_00To135_00Plot","0.2 < #deltap_{T} < 0.4 GeV/c, 90^{o} < #delta#alpha_{T} < 135^{o}" },
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_135_00To180_00Plot","0.2 < #deltap_{T} < 0.4 GeV/c, 135^{o} < #delta#alpha_{T} < 180^{o}" },
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_0_00To45_00Plot","#deltap_{T} > 0.4 GeV/c, #delta#alpha_{T} < 45^{o}" },
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_45_00To90_00Plot","#deltap_{T} > 0.4 GeV/c, 45^{o} < #delta#alpha_{T} < 90^{o}" },
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_90_00To135_00Plot","#deltap_{T} > 0.4 GeV/c, 90^{o} < #delta#alpha_{T} < 135^{o}" },
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_135_00To180_00Plot","#deltap_{T} > 0.4 GeV/c, 135^{o} < #delta#alpha_{T} < 180^{o}" },
		{ "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_10To0_40Plot","-1 < cos#theta_{#mu} < 0, 0.1 < P_{#mu} < 0.4 GeV/c" },
		{ "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_10To0_40Plot","0 < cos#theta_{#mu} < 0.5, 0.1 < P_{#mu} < 0.4 GeV/c"},
		{ "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_10To0_40Plot","0.5 < cos#theta_{#mu} < 0.75, 0.1 < P_{#mu} < 0.4 GeV/c" },
		{ "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_10To0_40Plot","0.75 < cos#theta_{#mu} < 1, 0.1 < P_{#mu} < 0.4 GeV/c"},
		{ "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_40To0_60Plot","-1 < cos#theta_{#mu} < 0, 0.4 < P_{#mu} < 0.6 GeV/c"},
		{ "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_40To0_60Plot","0 < cos#theta_{#mu} < 0.5, 0.4 < P_{#mu} < 0.6 GeV/c"},
		{ "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_40To0_60Plot","0.5 < cos#theta_{#mu} < 0.75, 0.4 < P_{#mu} < 0.6 GeV/c"},
		{ "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_40To0_60Plot","0.75 < cos#theta_{#mu} < 1, 0.4 < P_{#mu} < 0.6 GeV/c"},
		{ "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_60To1_20Plot","-1 < cos#theta_{#mu} < 0, 0.6 < P_{#mu} < 1.2 GeV/c"},
		{ "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_60To1_20Plot","0 < cos#theta_{#mu} < 0.5, 0.6 < P_{#mu} < 1.2 GeV/c"},
		{ "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_60To1_20Plot","0.5 < cos#theta_{#mu} < 0.75, 0.6 < P_{#mu} < 1.2 GeV/c"},
		{ "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_60To1_20Plot","0.75 < cos#theta_{#mu} < 1, 0.6 < P_{#mu} < 1.2 GeV/c"},
		{ "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_30To0_50Plot","-1 < cos#theta_{p} < 0, 0.3 < P_{p} < 0.5 GeV/c"},
		{ "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_30To0_50Plot","0 < cos#theta_{p} < 0.5, 0.3 < P_{p} < 0.5 GeV/c"},
		{ "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_30To0_50Plot","0.5 < cos#theta_{p} < 0.75, 0.3 < P_{p} < 0.5 GeV/c"},
		{ "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_30To0_50Plot","0.75 < cos#theta_{p} < 1, 0.3 < P_{p} < 0.5 GeV/c"},
		{ "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_50To0_70Plot","-1 < cos#theta_{p} < 0, 0.5 < P_{p} < 0.7 GeV/c"},
		{ "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_50To0_70Plot","0 < cos#theta_{p} < 0.5, 0.5 < P_{p} < 0.7 GeV/c"},
		{ "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_50To0_70Plot","0.5 < cos#theta_{p} < 0.75, 0.5 < P_{p} < 0.7 GeV/c"},
		{ "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_50To0_70Plot","0.75 < cos#theta_{p} < 1, 0.5 < P_{p} < 0.7 GeV/c"},
		{ "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_70To1_00Plot","-1 < cos#theta_{p} < 0, 0.7 < P_{p} < 1 GeV/c"},
		{ "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_70To1_00Plot","0 < cos#theta_{p} < 0.5, 0.7 < P_{p} < 1 GeV/c"},
		{ "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_70To1_00Plot","0.5 < cos#theta_{p} < 0.75, 0.7 < P_{p} < 1 GeV/c"},
		{ "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_70To1_00Plot","0.75 < cos#theta_{p} < 1, 0.7 < P_{p} < 1 GeV/c"},
		{ "ECal_DeltaAlphaT_0_00To45_00Plot","#delta#alpha_{T} < 45^{o}" },
		{ "ECal_DeltaAlphaT_45_00To90_00Plot","45^{o} < #delta#alpha_{T} < 90^{o}" },
		{ "ECal_DeltaAlphaT_90_00To135_00Plot","90^{o} < #delta#alpha_{T} < 135^{o}" },	
		{ "ECal_DeltaAlphaT_135_00To180_00Plot","135^{o} < #delta#alpha_{T} < 180^{o}" },		
		{ "SerialECal_DeltaPTDeltaAlphaTPlot", "#deltap_{T} & #delta#alpha_{T} slices" },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot", "cos#theta_{#mu} & p_{#mu} slices" },
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot", "cos#theta_{p} & p_{p} slices" },								
	};	
	
	//----------------------------------------//
	
	static std::map<TString,TString> MapUncorCor =
	{

		{ "MuonCosThetaPlot", "MuonCosThetaPlot" },
		{ "MuonMomentumPlot", "MuonMomentumPlot" },
		{ "ProtonCosThetaPlot", "ProtonCosThetaPlot" },
		{ "ProtonMomentumPlot", "ProtonMomentumPlot" },				
		{ "DeltaPTPlot", "DeltaPTPlot" },
		{ "DeltaPnPlot", "DeltaPnPlot" },
		{ "DeltaAlphaTPlot", "DeltaAlphaTPlot" },
		{ "DeltaAlpha3DqPlot", "DeltaAlpha3DqPlot" },
		{ "DeltaPhiTPlot", "DeltaPhiTPlot" },
		{ "DeltaPhi3DPlot", "DeltaPhi3DPlot" },		
		{ "ECalPlot", "ECalPlot" },
		
		{ "SerialECal_DeltaPTDeltaAlphaTPlot_0", "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_0_00To45_00Plot" },
		{ "SerialECal_DeltaPTDeltaAlphaTPlot_1", "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_45_00To90_00Plot" },
		{ "SerialECal_DeltaPTDeltaAlphaTPlot_2", "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_90_00To135_00Plot" },	
		{ "SerialECal_DeltaPTDeltaAlphaTPlot_3", "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_135_00To180_00Plot" },
		{ "SerialECal_DeltaPTDeltaAlphaTPlot_4", "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_0_00To45_00Plot" },
		{ "SerialECal_DeltaPTDeltaAlphaTPlot_5", "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_45_00To90_00Plot" },
		{ "SerialECal_DeltaPTDeltaAlphaTPlot_6", "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_90_00To135_00Plot" },	
		{ "SerialECal_DeltaPTDeltaAlphaTPlot_7", "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_135_00To180_00Plot" },
		{ "SerialECal_DeltaPTDeltaAlphaTPlot_8", "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_0_00To45_00Plot" },
		{ "SerialECal_DeltaPTDeltaAlphaTPlot_9", "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_45_00To90_00Plot" },
		{ "SerialECal_DeltaPTDeltaAlphaTPlot_10", "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_90_00To135_00Plot" },	
		{ "SerialECal_DeltaPTDeltaAlphaTPlot_11", "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_135_00To180_00Plot" },
					
		{ "SerialECal_MuonCosThetaMuonMomentumPlot_0", "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_10To0_40Plot" },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot_1", "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_40To0_60Plot" },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot_2", "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_60To1_20Plot" },	
		{ "SerialECal_MuonCosThetaMuonMomentumPlot_3", "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_10To0_40Plot" },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot_4", "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_40To0_60Plot" },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot_5", "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_60To1_20Plot" },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot_6", "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_10To0_40Plot" },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot_7", "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_40To0_60Plot" },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot_8", "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_60To1_20Plot" },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot_9", "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_10To0_40Plot" },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot_10", "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_40To0_60Plot" },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot_11", "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_60To1_20Plot" },

		{ "SerialECal_ProtonCosThetaProtonMomentumPlot_1", "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_50To0_70Plot" },
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot_2", "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_70To1_00Plot" },		    { "SerialECal_ProtonCosThetaProtonMomentumPlot_3", "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_30To0_50Plot" },
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot_4", "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_50To0_70Plot" },
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot_5", "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_70To1_00Plot" },
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot_6", "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_30To0_50Plot" },
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot_7", "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_50To0_70Plot" },
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot_8", "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_70To1_00Plot" },
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot_9", "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_30To0_50Plot" },
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot_10", "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_50To0_70Plot" },
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot_11", "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_70To1_00Plot" },							
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_0_00To45_00Plot", "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_0_00To45_00Plot" },
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_45_00To90_00Plot", "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_45_00To90_00Plot" },
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_90_00To135_00Plot", "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_90_00To135_00Plot" },	
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_135_00To180_00Plot", "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_135_00To180_00Plot" },
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_0_00To45_00Plot", "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_0_00To45_00Plot" },
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_45_00To90_00Plot", "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_45_00To90_00Plot" },
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_90_00To135_00Plot", "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_90_00To135_00Plot" },	
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_135_00To180_00Plot", "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_135_00To180_00Plot" },
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_0_00To45_00Plot", "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_0_00To45_00Plot" },
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_45_00To90_00Plot", "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_45_00To90_00Plot" },
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_90_00To135_00Plot", "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_90_00To135_00Plot" },	
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_135_00To180_00Plot", "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_135_00To180_00Plot" },
		
		{ "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_10To0_40Plot", "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_10To0_40Plot" },
		{ "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_40To0_60Plot", "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_40To0_60Plot" },
		{ "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_60To1_20Plot", "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_60To1_20Plot" },	
		{ "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_10To0_40Plot", "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_10To0_40Plot" },
		{ "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_40To0_60Plot", "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_40To0_60Plot" },
		{ "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_60To1_20Plot", "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_60To1_20Plot" },
		{ "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_10To0_40Plot", "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_10To0_40Plot" },
		{ "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_40To0_60Plot", "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_40To0_60Plot" },
		{ "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_60To1_20Plot", "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_60To1_20Plot" },
		{ "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_10To0_40Plot", "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_10To0_40Plot" },
		{ "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_40To0_60Plot", "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_40To0_60Plot" },
		{ "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_60To1_20Plot", "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_60To1_20Plot" },
		
		{ "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_30To0_50Plot", "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_30To0_50Plot" },
		{ "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_50To0_70Plot", "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_50To0_70Plot" },
		{ "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_70To1_00Plot", "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_70To1_00Plot" },	
		{ "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_30To0_50Plot", "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_30To0_50Plot" },
		{ "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_50To0_70Plot", "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_50To0_70Plot" },
		{ "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_70To1_00Plot", "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_70To1_00Plot" },
		{ "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_30To0_50Plot", "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_30To0_50Plot" },
		{ "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_50To0_70Plot", "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_50To0_70Plot" },
		{ "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_70To1_00Plot", "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_70To1_00Plot" },
		{ "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_30To0_50Plot", "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_30To0_50Plot" },
		{ "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_50To0_70Plot", "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_50To0_70Plot" },
		{ "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_70To1_00Plot", "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_70To1_00Plot" },					
	
	};
					
	// -------------------------------------------------------------------------------------------------------------------------

	// Global Constants

	static const double Units = 1E38; // so that the extracted cross-section is in 10^{-38} cm^{2}
//	static const double NTargets = 1.203E30; // Argon nuclei, not nucleons
	static const double NTargets = 1.05E30; // Argon nuclei, not nucleons
	
	static const int NuMuPdg = 14, MuonPdg = 13, ProtonPdg = 2212, AbsChargedPionPdg = 211, NeutralPionPdg = 111;
	static const int ElectronPdg = 11, PhotonPdg = 22, NeutronPdg = 2112, KaonPdg = 321;
	static const int DeuteriumPdg = 1000010020, HeliumPdg = 1000020040, ArgonPdg = 1000180400;

	static const double MuonMass = 106, ProtonMass = 938.272, NeutronMass = 939.565; // MeV
	static const double MuonMass_GeV = 0.106, ProtonMass_GeV = 0.938272, NeutronMass_GeV = 0.939565; // GeV
	static const double DeltaM2 = TMath::Power(NeutronMass_GeV,2.) - TMath::Power(ProtonMass_GeV,2.); // GeV^2	

	// -------------------------------------------------------------------------------------------------------------------------

	// Plots to be included for xsec extraction purposes

	vector<TString> PlotNames{
				  "DeltaPTPlot"
				 ,"DeltaAlphaTPlot"
				 ,"DeltaAlpha3DqPlot"
				 ,"DeltaPhiTPlot"
				 ,"DeltaPhi3DPlot"
				 ,"MuonMomentumPlot"
				 ,"MuonCosThetaPlot"
				 ,"MuonCosThetaSingleBinPlot"
				 ,"ProtonMomentumPlot"
				 ,"ProtonCosThetaPlot"
				 ,"ECalPlot"
				 ,"DeltaPnPlot"
				 ,"ECal_DeltaPT_0_00To0_20_DeltaAlphaT_0_00To45_00Plot"
				 ,"ECal_DeltaPT_0_00To0_20_DeltaAlphaT_45_00To90_00Plot"
				 ,"ECal_DeltaPT_0_00To0_20_DeltaAlphaT_90_00To135_00Plot"
				 ,"ECal_DeltaPT_0_00To0_20_DeltaAlphaT_135_00To180_00Plot"
				 ,"ECal_DeltaPT_0_20To0_40_DeltaAlphaT_0_00To45_00Plot"
				 , "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_45_00To90_00Plot"
				 ,"ECal_DeltaPT_0_20To0_40_DeltaAlphaT_90_00To135_00Plot"
				 ,"ECal_DeltaPT_0_20To0_40_DeltaAlphaT_135_00To180_00Plot"
				 ,"ECal_DeltaPT_0_40To1_00_DeltaAlphaT_0_00To45_00Plot"
				 ,"ECal_DeltaPT_0_40To1_00_DeltaAlphaT_45_00To90_00Plot"
				 ,"ECal_DeltaPT_0_40To1_00_DeltaAlphaT_90_00To135_00Plot"
				 ,"ECal_DeltaPT_0_40To1_00_DeltaAlphaT_135_00To180_00Plot"	
				 ,"ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_10To0_40Plot"
				 ,"ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_10To0_40Plot"
				 ,"ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_10To0_40Plot"
				 ,"ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_10To0_40Plot"
				 ,"ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_40To0_60Plot"
				 ,"ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_40To0_60Plot"
				 ,"ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_40To0_60Plot"
				 ,"ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_40To0_60Plot"
				 ,"ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_60To1_20Plot"
				 ,"ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_60To1_20Plot"
				 ,"ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_60To1_20Plot"
				 ,"ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_60To1_20Plot"
				 ,"ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_30To0_50Plot"
				 ,"ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_30To0_50Plot"
				 ,"ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_30To0_50Plot"
				 ,"ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_30To0_50Plot"
				 ,"ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_50To0_70Plot"
				 ,"ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_50To0_70Plot"
				 ,"ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_50To0_70Plot"
				 ,"ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_50To0_70Plot"
				 ,"ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_70To1_00Plot"
				 ,"ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_70To1_00Plot"
				 ,"ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_70To1_00Plot"
				 ,"ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_70To1_00Plot" 
				 ,"SerialECal_DeltaPTDeltaAlphaTPlot"
				 ,"SerialECal_DeltaPtxDeltaPtyPlot"			 
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot"
			

			 };
	
	//----------------------------------------//
	
	vector<TString> OneDimXSec = {
				  // 1D
				  "DeltaPTPlot"
				 ,"DeltaAlphaTPlot"
				 ,"DeltaAlpha3DqPlot"
				 ,"DeltaPhiTPlot"
				 ,"DeltaPhi3DPlot"
				 ,"MuonMomentumPlot"
				 ,"MuonCosThetaPlot"
				 ,"MuonCosThetaSingleBinPlot"
				 ,"ProtonMomentumPlot"
				 ,"ProtonCosThetaPlot"
				 ,"ECalPlot"
				 ,"DeltaPnPlot"
				 //3D Correlated results
				 ,"SerialECal_DeltaPTDeltaAlphaTPlot"
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot"
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot"	 				 
				 				 
			};	
	
	//----------------------------------------//
	
	vector<TString> MultiDimXSec = {
				  "DeltaPTPlot"
				 ,"DeltaAlphaTPlot"
				 ,"DeltaAlpha3DqPlot"
				 ,"DeltaPhiTPlot"
				 ,"DeltaPhi3DPlot"
				 ,"MuonMomentumPlot"
				 ,"MuonCosThetaPlot"
				 ,"MuonCosThetaSingleBinPlot"
				 ,"ProtonMomentumPlot"
				 ,"ProtonCosThetaPlot"
				 ,"ECalPlot"
				 ,"DeltaPnPlot"
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot_0"
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot_1"
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot_2"	
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot_3"
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot_4"
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot_5"
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot_6"
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot_7"
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot_8"
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot_9"
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot_10"
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot_11"
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot_0"
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot_1"
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot_2"	
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot_3"
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot_4"
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot_5"
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot_6"
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot_7"
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot_8"
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot_9"
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot_10"
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot_11"							
						
	};	

	// --------------------------------------------------------------------------------------------------------------------------

	// POT Normalization & Runs


//	vector<TString> Runs{"Run1"};
/*	vector<TString> Runs{"Run1","Run3"};*/
/*	vector<TString> Runs{"Run1","Run2","Run3"};*/
//	vector<TString> Runs{"Run1","Run2","Run3","Run4a","Run4aRutgers","Combined"};
	vector<TString> Runs{"Run1","Run2","Run3","Run4a","Run4b","Run5","Combined"};
//	vector<TString> Runs{"Run1","Run2","Run3","Run4","Run5"};

	// ------------------------------------ //

	// v43 Run 1 

	static const double tor860_wcut_Run1 = 4.566e+19;
	static const double E1DCNT_wcut_Run1 = 10127594.0;
	static const double EXT_Run1 = 32514217.0;

	static const double Fulltor860_wcut_Run1 = 1.62e20;
	static const double FullE1DCNT_wcut_Run1 = 36139233.0;
	static const double FullEXT_Run1 = 65498807.0;
	
	// ------------------------------------ //	
	
	// v43 Run 2 

	static const double tor860_wcut_Run2 = 0.;
	static const double E1DCNT_wcut_Run2 = 1.;
	static const double EXT_Run2 = 1.;

	static const double Fulltor860_wcut_Run2 = 2.62e20;
	static const double FullE1DCNT_wcut_Run2 = 62045760.0;
	static const double FullEXT_Run2 = 152404890.0;
	
	// ------------------------------------ //	
	
	// v43 Run 3 

	static const double tor860_wcut_Run3 = 9.513e+18;
	static const double E1DCNT_wcut_Run3 = 2299517.0;
	static const double EXT_Run3 = 131356320.0;

	static const double Fulltor860_wcut_Run3 = 2.55e20;
	static const double FullE1DCNT_wcut_Run3 = 61012955.0;
	static const double FullEXT_Run3 = 214555174.0;
	
	// ------------------------------------ //	
	
	// v43 Run 4(a & b) 

	// Rutgers
	static const double tor860_wcut_Run4aRutgers = 4.345e+19;
	static const double E1DCNT_wcut_Run4aRutgers = 13772291.0;
	static const double EXT_Run4aRutgers = 23377641;

	// rm low purity runs (run < 19080 or run > 19420) & after chat with Zarko about current
	static const double tor860_wcut_Run4a = 3.37e+19;
	static const double E1DCNT_wcut_Run4a = 7435696;
	static const double EXT_Run4a = 23377641;
	
	// Feb 27 2023
	static const double tor860_wcut_Run4b = 1.4e20;
	static const double E1DCNT_wcut_Run4b = 33067363;
	static const double EXT_Run4b = 92797963;		

	static const double tor860_wcut_Run4 = 1.4e20;
	static const double E1DCNT_wcut_Run4 = 33067363;
	static const double EXT_Run4 = 92797963;		

	// Rutgers
	static const double Fulltor860_wcut_Run4aRutgers = 4.345e+19;
	static const double FullE1DCNT_wcut_Run4aRutgers = 13772291.0;
	static const double FullEXT_Run4aRutgers = 23377641;	

	// rm low purity runs (run < 19080 or run > 19420) & after chat with Zarko about current
	static const double Fulltor860_wcut_Run4a = 3.37e+19;
	static const double FullE1DCNT_wcut_Run4a = 7435696;
	static const double FullEXT_Run4a = 23377641;	
	
	// Feb 27 2023
	static const double Fulltor860_wcut_Run4b = 1.4e20;
	static const double FullE1DCNT_wcut_Run4b = 33067363;
	static const double FullEXT_Run4b = 92797963;	

	static const double Fulltor860_wcut_Run4 = 1.4e20;
	static const double FullE1DCNT_wcut_Run4 = 33067363;
	static const double FullEXT_Run4 = 92797963;
	
	// ------------------------------------ //		
	
	// v43 Run 5 

	static const double tor860_wcut_Run5a = 3.473e+19;
	static const double E1DCNT_wcut_Run5a = 8310967.0;
	static const double EXT_Run5a = 35657042.0;	

	static const double Fulltor860_wcut_Run5a = 3.473e+19;
	static const double FullE1DCNT_wcut_Run5a = 8310967.0;
	static const double FullEXT_Run5a = 35657042.0;

	static const double tor860_wcut_Run5 = 3.473e+19;
	static const double E1DCNT_wcut_Run5 = 8310967.0;
	static const double EXT_Run5 = 35657042.0;	

	static const double Fulltor860_wcut_Run5 = 3.473e+19;
	static const double FullE1DCNT_wcut_Run5 = 8310967.0;
	static const double FullEXT_Run5 = 35657042.0;	

	// Combined POT
	// For now just Runs 1 + 2 +3

	static const double Fulltor860_wcut_Combined = Fulltor860_wcut_Run1 + Fulltor860_wcut_Run2 + Fulltor860_wcut_Run3;	
	static const double FullEXT_Combined = FullEXT_Run1 + FullEXT_Run2 + FullEXT_Run3;	
	static const double FullE1DCNT_wcut_Combined = FullE1DCNT_wcut_Run1 + FullE1DCNT_wcut_Run2 + FullE1DCNT_wcut_Run3;	

	// -----------------------------------------------------------------------------------------------------------------------------------------------

	// Binning

	static const int NBinsDeltaPT = 13; static const double ArrayNBinsDeltaPT[NBinsDeltaPT+1] = {0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.47,0.55,0.65,0.75,0.9};

	static const int NBinsDeltaPn = 10; static const double ArrayNBinsDeltaPn[NBinsDeltaPn+1] = {0,0.07,0.14,0.2,0.3,0.4,0.47,0.55,0.65,0.75,0.85};

	static const int NBinsDeltaAlphaT = 7; static const double ArrayNBinsDeltaAlphaT[NBinsDeltaAlphaT+1] = { 0.,22.,44.,66.,88.,110.,145.,180. };
	static const int NBinsDeltaAlpha3Dq = 8; static const double ArrayNBinsDeltaAlpha3Dq[NBinsDeltaAlpha3Dq+1] = { 0., 25., 50., 70., 90., 110., 130., 150.,180. };
	static const int NBinsDeltaPhiT = 12; static const double ArrayNBinsDeltaPhiT[NBinsDeltaPhiT+1] = {0.,12.5,25.,37.5,50.,60.,75.,90.,106.,126.,145.,162.,180.};
	
	static const int NBinsDeltaPhi3D = 10; static const double ArrayNBinsDeltaPhi3D[NBinsDeltaPhi3D+1] = {0.,12.5,25.,37.5,50.,60.,75.,90.,106.,126.,180.};	
	
	// STV analysis

	static const int NBinsECal = 9; static const double ArrayNBinsECal[NBinsECal+1] = {0.2,0.35,0.5,0.65,0.8,0.95,1.1,1.25,1.4,1.6}; 

	
	static const int NBinsMuonMomentum = 10; static const double ArrayNBinsMuonMomentum[NBinsMuonMomentum+1] = { 0.1,0.2,0.3,0.4,0.5,0.64,0.77,0.9,1.,1.1,1.2};


	static const int NBinsMuonCosTheta = 18;
	static const double ArrayNBinsMuonCosTheta[NBinsMuonCosTheta+1] = { -1.,-0.85,-0.7,-0.57,-0.45,-0.32,-0.2,-0.1,0.,0.1,0.2,0.3,0.4,0.5,0.6,0.72,0.84,0.95,1.};

	static const int NBinsProtonMomentum = 10; static const double ArrayNBinsProtonMomentum[NBinsProtonMomentum+1] = {0.3,0.38,0.45,0.5,0.55,0.625,0.7,0.75,0.8,0.87,1.};

	static const int NBinsProtonCosTheta = 11;
	static const double ArrayNBinsProtonCosTheta[NBinsProtonCosTheta+1] = { -1.,-0.73,-0.43,-0.18,0.05,0.2,0.37,0.54,0.7,0.8,0.9,1.};
	
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
	static const int NBinsVertexX = 15; static const double MinVertexX = 10., MaxVertexX = 246.;
	static const int NBinsVertexY = 15; static const double MinVertexY = -105., MaxVertexY = 105.;
	static const int NBinsVertexZ = 25; static const double MinVertexZ = 10., MaxVertexZ = 1026.;
	
	// -----------------------------------------------------------------------------------------------------------------------------------------------

	// Labels for 1D plots
	
	static TString LabelXAxisECal = ";E^{Cal} [GeV]"; static TString LabelXAxisTrueECal = ";True E^{Cal} [GeV]";
		
	static TString LabelXAxisMuonMomentum = ";p_{#mu} [GeV/c]"; static TString LabelXAxisTrueMuonMomentum = ";True p_{#mu} [GeV/c]";
	static TString LabelXAxisProtonMomentum = ";p_{p} [GeV/c]"; static TString LabelXAxisTrueProtonMomentum = ";True p_{p} [GeV/c]";
	static TString LabelXAxisMuonCosTheta = ";cos#theta_{#mu}"; static TString LabelXAxisTrueMuonCosTheta = ";True cos#theta_{#mu}";
	static TString LabelXAxisProtonCosTheta = ";cos#theta_{p}"; static TString LabelXAxisTrueProtonCosTheta = ";True cos#theta_{p}";

	static TString LabelXAxisDeltaPn = ";p_{n} [GeV/c]"; static TString LabelXAxisTrueDeltaPn = ";True p_{n} [GeV/c]";
	static TString LabelXAxisDeltaPT = ";#deltap_{T} [GeV/c]"; static TString LabelXAxisTrueDeltaPT = ";True #deltap_{T} [GeV/c]";
	static TString LabelXAxisDeltaAlphaT = ";#delta#alpha_{T} [deg]"; static TString LabelXAxisTrueDeltaAlphaT = ";True #delta#alpha_{T} [deg]";
	static TString LabelXAxisDeltaAlpha3Dq = ";#alpha_{3D} [deg]"; static TString LabelXAxisTrueDeltaAlpha3Dq = ";True #alpha_{3D} [deg]";
	static TString LabelXAxisDeltaPhiT = ";#delta#phi_{T} [deg]"; static TString LabelXAxisTrueDeltaPhiT = ";True #delta#phi_{T} [deg]";
	static TString LabelXAxisDeltaPhi3D = ";#phi_{3D} [deg]"; static TString LabelXAxisTrueDeltaPhi3D = ";True #phi_{3D} [deg]";	

	TString RecoLabelXAxisLLRPID = ";Candidate LLR PID Score";		
	TString RecoLabelXAxisMuonLLRPID = ";Muon Candidate LLR PID Score";
	TString RecoLabelXAxisProtonLLRPID = ";Proton Candidate LLR PID Score";
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
	TString RecoLabelXAxisVertexX = ";Vertex x [cm]";
	TString RecoLabelXAxisVertexY = ";Vertex y [cm]";
	TString RecoLabelXAxisVertexZ = ";Vertex z [cm]";
	TString RecoLabelXAxisProtonTrackScore = ";Proton Track Score";
	TString RecoLabelXAxisLengthDifference = ";l_{#mu} - l_{p} [cm]";
	TString RecoLabelXAxisMuonLength = ";l_{#mu} [cm]";
	TString RecoLabelXAxisProtonLength = ";l_{p} [cm]";
	
	// ------------------------------------------------------------------------------------------------------------------------------------

	// Labels for 2D Plots

	static TString LabelXAxisDeltaPT2D = LabelXAxisTrueDeltaPT+";Reco #deltap_{T} [GeV/c]";
	static TString LabelXAxisDeltaAlphaT2D = LabelXAxisTrueDeltaAlphaT+";Reco #delta#alpha_{T} [deg]";
	static TString LabelXAxisDeltaAlpha3Dq2D = LabelXAxisTrueDeltaAlpha3Dq+";Reco #alpha_{3D} [deg]";
	static TString LabelXAxisDeltaPhiT2D = LabelXAxisTrueDeltaPhiT+";Reco #delta#phi_{T} [deg]";
	static TString LabelXAxisDeltaPhi3D2D = LabelXAxisTrueDeltaPhi3D+";Reco #phi_{3D} [deg]";	

	static TString LabelXAxisDeltaPn2D = LabelXAxisTrueDeltaPn+";Reco p_{n} [GeV/c]";

	static TString LabelXAxisMuonMomentum2D = LabelXAxisTrueMuonMomentum+";Reco P_{#mu} [GeV/c]";
	static TString LabelXAxisMuonCosTheta2D = LabelXAxisTrueMuonCosTheta+";Reco cos#theta_{#mu}";

	static TString LabelXAxisProtonMomentum2D = LabelXAxisTrueProtonMomentum+";Reco P_{p} [GeV/c]";
	static TString LabelXAxisProtonCosTheta2D = LabelXAxisTrueProtonCosTheta+";Reco cos#theta_{p}";

	static TString LabelXAxisECal2D = ";True E^{Cal} [GeV];Reco E^{Cal} [GeV]";

	// --------------------------------------------------------------------------------------------------------------------------------------

	static int OverlayColor = kAzure-4;
	static int BeamOnColor = kBlack;
	static int GenieOverlayColor = kBlack;
	static int GenieColor = 610;
	static int Geniev3OutOfTheBoxColor = kMagenta;
//	static int GenieOverlayColor = kOrange+7;	
	static int GiBUUColor = kGreen+1; // 410
//	static int NuWroColor = kOrange+7;	
	static int NuWroColor = kOrange+10;
	static int NEUTColor = kRed+1;
	static int GENIEv2Color = kBlue;	
	static int GENIEv3_0_4_Color = kGray+1;
//	static int SuSav2Color = 429;	
	static int SuSav2Color = kOrange-3;	
	
	static int NormUncBandColor = kGray+3;	
	
	static int G18LineStyle = kSolid;
	
	static int GiBUULineStyle = 2;
	static int NEUTLineStyle = 7;
	static int NuWroLineStyle = 5;
	
	static int UntunedLineStyle = 2;
	static int G21LineStyle = 7;
	static int Gv2LineStyle = 5;							
	
	// ---------------------------------------------------------------------------------------------------------------------------------------

	// Constants, Cuts & Thresholds

	static const double NPE = 10;

	static const double MuonChi2Cut = 100.;
	static const double ProtonChi2Cut = 80.;

	static const double MuonThreePlaneChi2LogLikelihoodCut = -1.;
	static const double ProtonThreePlaneChi2LogLikelihoodCut = -0.5;
	static const double ProtonLLRPIDScore = 0.05;

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
	
	const TString CC1p1pi = "CandidateMu_MCParticle_Pdg == 211 && CandidateP_MCParticle_Pdg == 2212 && NumberPi0 == 0";	

	const TString Containment = "CandidateMu_StartContainment == 1 && CandidateP_StartContainment == 1 && CandidateP_EndContainment == 1 && True_CandidateMu_StartContainment == 1";

	const TString ContainmentData = "CandidateMu_StartContainment == 1 && CandidateP_StartContainment == 1 && CandidateP_EndContainment == 1";

	const TString ProtonMom = "CandidateP_P_Range" + Recalibrate + " > " + TString(std::to_string(ArrayNBinsProtonMomentum[0])) + " && CandidateP_P_Range" + Recalibrate + " < "\
		+ TString(std::to_string(ArrayNBinsProtonMomentum[NBinsProtonMomentum])) + " && True_CandidateP_P > "+ TString(std::to_string(ArrayNBinsProtonMomentum[0]))\
		+ " && True_CandidateP_P < "+ TString(std::to_string(ArrayNBinsProtonMomentum[NBinsProtonMomentum]));

	const TString ProtonMomData = "CandidateP_P_Range" + Recalibrate + " > " + TString(std::to_string(ArrayNBinsProtonMomentum[0])) + " && CandidateP_P_Range" + Recalibrate + " < "\
		+ TString(std::to_string(ArrayNBinsProtonMomentum[NBinsProtonMomentum]));
 
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

	const TString MinHitsMu = "CandidateMu_P_Range > 0";

	const TString MinHitsP = "CandidateP_P_Range > 0";

	const TString MinMuonVertexDist = "CandidateMuStartVertexDistance < CandidateMuEndVertexDistance";

	const TString MinProtonVertexDist = "CandidatePStartVertexDistance < CandidatePEndVertexDistance";

	const TString AvoidFlippedTracks = "StartToStartDistance < EndToEndDistance";
	
	// --------------------------------------------------------------------------------------------------------------------------------
	
	// Qualifiers using reco info

	const TString qualifier = CC1p +" && "+ Containment + " && " + ProtonMom + " && " + DeltaPhiT + " && " + MuonMom + " && " + QualityCut + " && " + MinMuonVertexDist\
		+ " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;
		
	const TString qualifierNoPCut = CC1p +" && "+ Containment + " && " + DeltaPhiT + " && " + QualityCut + " && " + MinMuonVertexDist\
		+ " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;

	const TString qualifierPPNoCut = CC1p +" && "+ Containment + " && " + DeltaPhiT + " && " + MuonMom + " && " + QualityCut + " && " + MinMuonVertexDist\
		+ " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;				

	const TString qualifierData = ContainmentData +" && " + ProtonMomData + " && " + DeltaPhiTData + " && " + MuonMomData + " && " + QualityCut + " && " + MinMuonVertexDist\
		+ " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;

	const TString qualifierNoMuRangeCut = CC1p +" && "+ Containment +" && " + ProtonMom + " && " + DeltaPhiT + " && " + MuonMom + " && " + MinMuonVertexDist\
		+ " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;

	const TString qualifierNoHitSumCut = CC1p +" && "+ Containment +" && " + ProtonMom + " && " + DeltaPhiT + " && " + MuonMom + " && " + QualityCut\
		+ " && " + MinMuonVertexDist + " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;

	const TString qualifierNoExitMuQC = CC1p +" && "+ Containment +" && " + ProtonMom + " && " + DeltaPhiT + " && " + MuonMom + " && " + OnlyContainedMuQualityCut\
		+ " && " + MinMuonVertexDist + " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;
		
	const TString qualifierCC1p1pi = CC1p1pi +" && "+ Containment +" && " + ProtonMom + " && " + DeltaPhiT + " && " + MuonMom + " && " + QualityCut + " && " + MinMuonVertexDist\
		+ " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;		

	//----------------------------------------//
	
	// Qualifiers using truth level info

	const TString TrueCC1p = "CC1p && NumberPi0 == 0";

	const TString TrueProtonMom = "Proton_MCParticle_Mom > " + TString(std::to_string(ArrayNBinsProtonMomentum[0])) + " && Proton_MCParticle_Mom < "\
		+ TString(std::to_string(ArrayNBinsProtonMomentum[NBinsProtonMomentum]));

	const TString TrueMuonMom = "Muon_MCParticle_Mom > " + TString(std::to_string(ArrayNBinsMuonMomentum[0])) + " && Muon_MCParticle_Mom < "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[NBinsMuonMomentum])); 

	//const TString TrueDeltaPT = "True_Pt > " + TString(std::to_string(ArrayNBinsDeltaPT[0])) + " && True_Pt < " + TString(std::to_string(ArrayNBinsDeltaPT[NBinsDeltaPT]));

	const TString TrueDeltaAlphaT = "True_DeltaAlphaT > " + TString(std::to_string(ArrayNBinsDeltaAlphaT[0])) + " && True_DeltaAlphaT < "\
		+ TString(std::to_string(ArrayNBinsDeltaAlphaT[NBinsDeltaAlphaT]));

	const TString TrueDeltaPhiT = "True_DeltaPhiT > " + TString(std::to_string(ArrayNBinsDeltaPhiT[0])) + " && True_DeltaPhiT < " + TString(std::to_string(ArrayNBinsDeltaPhiT[NBinsDeltaPhiT]));

	const TString TrueQualifier = TrueCC1p + " && " + TrueProtonMom + " && " + TrueMuonMom + " && " + TrueDeltaAlphaT + " && " + TrueDeltaPhiT;
	
	const TString TrueQualifierNoPCut = TrueCC1p + " && " + TrueDeltaAlphaT + " && " + TrueDeltaPhiT;	
	
	const TString TrueQualifierNoPPCut = TrueCC1p + " && " + TrueMuonMom + " && " + TrueDeltaAlphaT + " && " + TrueDeltaPhiT;	

	//----------------------------------------//
	
	// And moving on towards a 2D analysis
		
	static const int TwoDNBinsDeltaPT = 3; std::vector<double> TwoDArrayNBinsDeltaPT{0.0,0.2,0.4,1.0};
	static const int TwoDNBinsDeltaPn = 3; std::vector<double> TwoDArrayNBinsDeltaPn{0.0,0.2,0.4,1.0};	
	static const int TwoDNBinsDeltaAlphaT = 4; std::vector<double> TwoDArrayNBinsDeltaAlphaT{0.0,45.0,90.0,135.0,180.0};
	static const int TwoDNBinsDeltaAlpha3Dq = 4; std::vector<double> TwoDArrayNBinsDeltaAlpha3Dq{0.0,45.0,90.0,135.0,180.0};
	static const int TwoDNBinsMuonCosTheta = 4; std::vector<double> TwoDArrayNBinsMuonCosTheta{-1.,0.0,0.5,0.75,1.0};
	static const int TwoDNBinsProtonCosTheta = 4; std::vector<double> TwoDArrayNBinsProtonCosTheta{-1.,0.0,0.5,0.75,1.0};
	static const int TwoDNBinsMuonMomentum = 3; std::vector<double> TwoDArrayNBinsMuonMomentum{0.1,0.4,0.6,1.2};
	static const int TwoDNBinsProtonMomentum = 3; std::vector<double> TwoDArrayNBinsProtonMomentum{0.3,0.5,0.7,1.};		

	//----------------------------------------//	
	
	std::vector< std::vector< std::vector<double> > > TwoDArrayNBinsECalInDeltaPTDeltaAlphaTSlices{	{ // DeltaPT < 0.2 GeV/c
														{0.2,0.4,0.6,0.8,1.,1.2,1.6}, // DeltaAphaT < 45 deg
														{0.2,0.4,0.6,0.8,1.,1.2,1.6}, // 45 < DeltaAphaT < 90 deg 
														{0.2,0.4,0.6,0.8,1.,1.2,1.6}, // 90 < DeltaAlphaT < 135 deg
														{0.2,0.4,0.6,0.8,1.,1.2,1.6} // 135 < DeltaAlphaT < 180 deg
														},	
														
														{ // 0.2 < DeltaPT < 0.4 GeV/c
														{0.2,0.4,0.6,0.8,1.,1.2,1.6}, // DeltaAphaT < 45 deg
														{0.2,0.4,0.6,0.8,1.,1.2,1.6}, // 45 < DeltaAphaT < 90 deg
														{0.2,0.4,0.6,0.8,1.,1.2,1.6}, // 90 < DeltaAlphaT < 135 deg		
														{0.2,0.4,0.6,0.8,1.,1.2,1.6} // 135 < DeltaAlphaT < 180 deg
														},
														
														{ // DeltaPT > 0.4 GeV/c
														{0.2,0.5,0.8,1.2,1.6}, // DeltaAphaT < 45 deg
														{0.2,0.5,0.8,1.2,1.6}, // 45 < DeltaAphaT < 90 deg
														{0.2,0.5,0.8,1.2,1.6}, // 90 < DeltaAlphaT < 135 deg		
														{0.2,0.5,0.8,1.2,1.6} // 135 < DeltaAlphaT < 180 deg
														}		
																
													};
													
	//----------------------------------------//	
	
	std::vector< std::vector< std::vector<double> > > TwoDArrayNBinsECalInMuonCosThetaMuonMomentumSlices{
														{ // -1 < cosθμ < 0
														{0.2,0.4,0.6,1.6},  // 0.10 < Pμ < 0.40 GeV/c
														{0.2,0.6,1.6},      // 0.40 < Pμ < 0.60 GeV/c
														{0.2,1.6}           // 0.60 < Pμ < 1.20 GeV/c
														},	
														
														{ // 0 < cosθμ < 0.5
														{0.2,0.4,0.6,1.6},  // 0.10 < Pμ < 0.40 GeV/c
														{0.2,0.6,0.8,1.6},  // 0.40 < Pμ < 0.6 GeV/c
														{0.2,1.6}   // 0.6 < Pμ < 1.20 GeV/c
														},
														
														{ // 0.5 < cosθμ < 0.75
														{0.2,0.4,0.6,1.6},  // 0.10 < Pμ < 0.40 GeV/c
														{0.2,0.6,0.8,1.6},  // 0.40 < Pμ < 0.6 GeV/c
														{0.2,0.8,1.,1.6}    // 0.6 < Pμ < 1.20 GeV/c
														},														
														
														{ // 0.75 < cosθμ < 1
														{0.2,0.5,1.6},      // 0.10 < Pμ < 0.40 GeV/c
														{0.2,0.8,1.6},      // 0.40 < Pμ < 0.6 GeV/c
														{0.2,0.8,1.2,1.6}   // 0.6 < Pμ < 1.20 GeV/c
														}		
																
													};
													
	//----------------------------------------//	
	
	std::vector< std::vector< std::vector<double> > > TwoDArrayNBinsECalInProtonCosThetaProtonMomentumSlices{
														{ // -1 < cosθp < 0
														{0.2,0.4,0.6,0.8,1.,1.2,1.6},     // 0.30 < Pp < 0.50 GeV/c
														{0.2,0.4,0.6,0.8,1.,1.2,1.6},     // 0.50 < Pp < 0.70 GeV/c
														{0.2,1.6}                         // 0.70 < Pp < 1.00 GeV/c
														},	
														
														{ // 0 < cosθp < 0.5
														{0.2,0.4,0.6,0.8,1.,1.2,1.6},     // 0.30 < Pp < 0.50 GeV/c
														{0.2,0.4,0.6,0.8,1.,1.2,1.6},     // 0.50 < Pp < 0.70 GeV/c
														{0.2,0.6,0.9,1.2,1.6}             // 0.70 < Pp < 1.00 GeV/c
														},
														
														{ // 0.5 < cosθp < 0.75
														{0.2,0.4,0.6,0.8,1.,1.2,1.6},     // 0.30 < Pp < 0.50 GeV/c
														{0.2,0.4,0.6,0.8,1.,1.2,1.6},     // 0.50 < Pp < 0.70 GeV/c
														{0.2,0.6,0.8,1.,1.2,1.6}  // 0.70 < Pp < 1.00 GeV/c
														},														
														
														{ // 0.75 < cosθμ < 1
														{0.2,0.8,1.6},                    // 0.30 < Pp < 0.50 GeV/c
														{0.2,0.5,0.8,1.2,1.6},            // 0.50 < Pp < 0.70 GeV/c
														{0.2,0.5,0.8,1.2,1.6}             // 0.70 < Pp < 1.00 GeV/c
														}		
																
													};																										
			
	//----------------------------------------//	

	// Scaling factor for multi dimensional analysis

	static std::map<TString,double> MultiDimScaleFactor =
	{
		{ "DeltaPTPlot", 1. },
		{ "DeltaAlphaTPlot", 1. },
		{ "DeltaAlpha3DqPlot", 1. },
		{ "DeltaPhiTPlot", 1. },
		{ "DeltaPhi3DPlot", 1. },		
		{ "MuonMomentumPlot", 1. },
		{ "MuonCosThetaPlot", 1. },
		{ "MuonCosThetaSingleBinPlot", 1. },
		{ "ProtonMomentumPlot", 1. },
		{ "ProtonCosThetaPlot", 1. },
		{ "ECalPlot", 1. },
		{ "DeltaPnPlot", 1. },
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_0_00To45_00Plot", ( TwoDArrayNBinsDeltaPT.at(1) - TwoDArrayNBinsDeltaPT.at(0) ) * ( TwoDArrayNBinsDeltaAlphaT.at(1) - TwoDArrayNBinsDeltaAlphaT.at(0) ) },
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_45_00To90_00Plot", ( TwoDArrayNBinsDeltaPT.at(1) - TwoDArrayNBinsDeltaPT.at(0) ) * ( TwoDArrayNBinsDeltaAlphaT.at(2) - TwoDArrayNBinsDeltaAlphaT.at(1) ) },
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_90_00To135_00Plot", ( TwoDArrayNBinsDeltaPT.at(1) - TwoDArrayNBinsDeltaPT.at(0) ) * ( TwoDArrayNBinsDeltaAlphaT.at(3) - TwoDArrayNBinsDeltaAlphaT.at(2) ) },	
		{ "ECal_DeltaPT_0_00To0_20_DeltaAlphaT_135_00To180_00Plot", ( TwoDArrayNBinsDeltaPT.at(1) - TwoDArrayNBinsDeltaPT.at(0) ) * ( TwoDArrayNBinsDeltaAlphaT.at(4) - TwoDArrayNBinsDeltaAlphaT.at(3) ) },
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_0_00To45_00Plot", ( TwoDArrayNBinsDeltaPT.at(2) - TwoDArrayNBinsDeltaPT.at(1) )  * ( TwoDArrayNBinsDeltaAlphaT.at(1) - TwoDArrayNBinsDeltaAlphaT.at(0) ) },
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_45_00To90_00Plot", ( TwoDArrayNBinsDeltaPT.at(2) - TwoDArrayNBinsDeltaPT.at(1) ) * ( TwoDArrayNBinsDeltaAlphaT.at(2) - TwoDArrayNBinsDeltaAlphaT.at(1) ) },
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_90_00To135_00Plot", ( TwoDArrayNBinsDeltaPT.at(2) - TwoDArrayNBinsDeltaPT.at(1) ) * ( TwoDArrayNBinsDeltaAlphaT.at(3) - TwoDArrayNBinsDeltaAlphaT.at(2) ) },	
		{ "ECal_DeltaPT_0_20To0_40_DeltaAlphaT_135_00To180_00Plot", ( TwoDArrayNBinsDeltaPT.at(2) - TwoDArrayNBinsDeltaPT.at(1) ) * ( TwoDArrayNBinsDeltaAlphaT.at(4) - TwoDArrayNBinsDeltaAlphaT.at(3) ) },
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_0_00To45_00Plot", ( TwoDArrayNBinsDeltaPT.at(3) - TwoDArrayNBinsDeltaPT.at(2) )  * ( TwoDArrayNBinsDeltaAlphaT.at(1) - TwoDArrayNBinsDeltaAlphaT.at(0) ) },
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_45_00To90_00Plot", ( TwoDArrayNBinsDeltaPT.at(3) - TwoDArrayNBinsDeltaPT.at(2) ) * ( TwoDArrayNBinsDeltaAlphaT.at(2) - TwoDArrayNBinsDeltaAlphaT.at(1) ) },
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_90_00To135_00Plot", ( TwoDArrayNBinsDeltaPT.at(3) - TwoDArrayNBinsDeltaPT.at(2) ) * ( TwoDArrayNBinsDeltaAlphaT.at(3) - TwoDArrayNBinsDeltaAlphaT.at(2) ) },	
		{ "ECal_DeltaPT_0_40To1_00_DeltaAlphaT_135_00To180_00Plot",  ( TwoDArrayNBinsDeltaPT.at(3) - TwoDArrayNBinsDeltaPT.at(2) ) * ( TwoDArrayNBinsDeltaAlphaT.at(4) - TwoDArrayNBinsDeltaAlphaT.at(3) ) },	
		
		{ "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_10To0_40Plot",  ( TwoDArrayNBinsMuonCosTheta.at(1) - TwoDArrayNBinsMuonCosTheta.at(0) ) * ( TwoDArrayNBinsMuonMomentum.at(1) - TwoDArrayNBinsMuonMomentum.at(0) ) },
		{ "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_10To0_40Plot",  ( TwoDArrayNBinsMuonCosTheta.at(2) - TwoDArrayNBinsMuonCosTheta.at(1) ) * ( TwoDArrayNBinsMuonMomentum.at(1) - TwoDArrayNBinsMuonMomentum.at(0) ) },
		{ "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_10To0_40Plot", ( TwoDArrayNBinsMuonCosTheta.at(3) - TwoDArrayNBinsMuonCosTheta.at(2) ) * ( TwoDArrayNBinsMuonMomentum.at(1) - TwoDArrayNBinsMuonMomentum.at(0) ) },
		{ "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_10To0_40Plot", ( TwoDArrayNBinsMuonCosTheta.at(4) - TwoDArrayNBinsMuonCosTheta.at(3) ) * ( TwoDArrayNBinsMuonMomentum.at(1) - TwoDArrayNBinsMuonMomentum.at(0) ) },
		{ "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_40To0_60Plot", ( TwoDArrayNBinsMuonCosTheta.at(1) - TwoDArrayNBinsMuonCosTheta.at(0) ) * ( TwoDArrayNBinsMuonMomentum.at(2) - TwoDArrayNBinsMuonMomentum.at(1) ) },
		{ "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_40To0_60Plot", ( TwoDArrayNBinsMuonCosTheta.at(2) - TwoDArrayNBinsMuonCosTheta.at(1) ) * ( TwoDArrayNBinsMuonMomentum.at(2) - TwoDArrayNBinsMuonMomentum.at(1) ) },
		{ "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_40To0_60Plot", ( TwoDArrayNBinsMuonCosTheta.at(3) - TwoDArrayNBinsMuonCosTheta.at(2) ) * ( TwoDArrayNBinsMuonMomentum.at(2) - TwoDArrayNBinsMuonMomentum.at(1) ) },
		{ "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_40To0_60Plot",  ( TwoDArrayNBinsMuonCosTheta.at(4) - TwoDArrayNBinsMuonCosTheta.at(3) ) * ( TwoDArrayNBinsMuonMomentum.at(2) - TwoDArrayNBinsMuonMomentum.at(1) ) },
		{ "ECal_MuonCosTheta_Minus1_00To0_00_MuonMomentum_0_60To1_20Plot", ( TwoDArrayNBinsMuonCosTheta.at(1) - TwoDArrayNBinsMuonCosTheta.at(0) ) * ( TwoDArrayNBinsMuonMomentum.at(3) - TwoDArrayNBinsMuonMomentum.at(2) ) },
		{ "ECal_MuonCosTheta_0_00To0_50_MuonMomentum_0_60To1_20Plot", ( TwoDArrayNBinsMuonCosTheta.at(2) - TwoDArrayNBinsMuonCosTheta.at(1) ) * ( TwoDArrayNBinsMuonMomentum.at(3) - TwoDArrayNBinsMuonMomentum.at(2) ) },
		{ "ECal_MuonCosTheta_0_50To0_75_MuonMomentum_0_60To1_20Plot",  ( TwoDArrayNBinsMuonCosTheta.at(3) - TwoDArrayNBinsMuonCosTheta.at(2) ) * ( TwoDArrayNBinsMuonMomentum.at(3) - TwoDArrayNBinsMuonMomentum.at(2) )},
		{ "ECal_MuonCosTheta_0_75To1_00_MuonMomentum_0_60To1_20Plot",  ( TwoDArrayNBinsMuonCosTheta.at(4) - TwoDArrayNBinsMuonCosTheta.at(3) ) * ( TwoDArrayNBinsMuonMomentum.at(3) - TwoDArrayNBinsMuonMomentum.at(2) ) },
		{ "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_30To0_50Plot", ( TwoDArrayNBinsProtonCosTheta.at(1) - TwoDArrayNBinsProtonCosTheta.at(0) ) * ( TwoDArrayNBinsProtonMomentum.at(1) - TwoDArrayNBinsProtonMomentum.at(0) ) },
		{ "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_30To0_50Plot", ( TwoDArrayNBinsProtonCosTheta.at(2) - TwoDArrayNBinsProtonCosTheta.at(1) ) * ( TwoDArrayNBinsProtonMomentum.at(1) - TwoDArrayNBinsProtonMomentum.at(0) ) },
		{ "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_30To0_50Plot", ( TwoDArrayNBinsProtonCosTheta.at(3) - TwoDArrayNBinsProtonCosTheta.at(2) ) * ( TwoDArrayNBinsProtonMomentum.at(1) - TwoDArrayNBinsProtonMomentum.at(0) ) },
		{ "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_30To0_50Plot",  ( TwoDArrayNBinsProtonCosTheta.at(4) - TwoDArrayNBinsProtonCosTheta.at(3) ) * ( TwoDArrayNBinsProtonMomentum.at(1) - TwoDArrayNBinsProtonMomentum.at(0) ) },
		{ "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_50To0_70Plot", ( TwoDArrayNBinsProtonCosTheta.at(1) - TwoDArrayNBinsProtonCosTheta.at(0) ) * ( TwoDArrayNBinsProtonMomentum.at(2) - TwoDArrayNBinsProtonMomentum.at(1) ) },
		{ "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_50To0_70Plot", ( TwoDArrayNBinsProtonCosTheta.at(2) - TwoDArrayNBinsProtonCosTheta.at(1) ) * ( TwoDArrayNBinsProtonMomentum.at(2) - TwoDArrayNBinsProtonMomentum.at(1) ) },
		{ "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_50To0_70Plot", ( TwoDArrayNBinsProtonCosTheta.at(3) - TwoDArrayNBinsProtonCosTheta.at(2) ) * ( TwoDArrayNBinsProtonMomentum.at(2) - TwoDArrayNBinsProtonMomentum.at(1) ) },
		{ "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_50To0_70Plot", ( TwoDArrayNBinsProtonCosTheta.at(4) - TwoDArrayNBinsProtonCosTheta.at(3) ) * ( TwoDArrayNBinsProtonMomentum.at(2) - TwoDArrayNBinsProtonMomentum.at(1) ) },
		{ "ECal_ProtonCosTheta_Minus1_00To0_00_ProtonMomentum_0_70To1_00Plot", ( TwoDArrayNBinsProtonCosTheta.at(1) - TwoDArrayNBinsProtonCosTheta.at(0) ) * ( TwoDArrayNBinsProtonMomentum.at(3) - TwoDArrayNBinsProtonMomentum.at(2) ) },
		{ "ECal_ProtonCosTheta_0_00To0_50_ProtonMomentum_0_70To1_00Plot", ( TwoDArrayNBinsProtonCosTheta.at(2) - TwoDArrayNBinsProtonCosTheta.at(1) ) * ( TwoDArrayNBinsProtonMomentum.at(3) - TwoDArrayNBinsProtonMomentum.at(2) ) },
		{ "ECal_ProtonCosTheta_0_50To0_75_ProtonMomentum_0_70To1_00Plot", ( TwoDArrayNBinsProtonCosTheta.at(3) - TwoDArrayNBinsProtonCosTheta.at(2) ) * ( TwoDArrayNBinsProtonMomentum.at(3) - TwoDArrayNBinsProtonMomentum.at(2) ) },
		{ "ECal_ProtonCosTheta_0_75To1_00_ProtonMomentum_0_70To1_00Plot", ( TwoDArrayNBinsProtonCosTheta.at(4) - TwoDArrayNBinsProtonCosTheta.at(3) ) * ( TwoDArrayNBinsProtonMomentum.at(3) - TwoDArrayNBinsProtonMomentum.at(2) ) },
		{ "SerialECal_DeltaPTDeltaAlphaTPlot", 1. },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot", 1. },
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot", 1. },
	};	
	
	//----------------------------------------//
	
	// Interaction labels
	
	//const std::vector<int> InteBreakColors{kBlack,kBlue-5,kYellow+1,kOrange+7,kRed+1,kBlue};
	const std::vector<int> InteBreakColors{kBlack,kAzure-4,kOrange-3,kGreen+1,kRed+1,kBlue};		
	std::vector<TString> InteractionLabels = {"","QE","MEC","RES","DIS","COH"};
	const int NInte = InteractionLabels.size();
	
	const std::vector<std::string> knobList = {"AGKYpT1pi_UBGenie","AGKYxF1pi_UBGenie","AhtBY_UBGenie","AxFFCCQEshape_UBGenie","BhtBY_UBGenie",
                 "CV1uBY_UBGenie","CV2uBY_UBGenie","DecayAngMEC_UBGenie","EtaNCEL_UBGenie","FrAbs_N_UBGenie",
                 "FrAbs_pi_UBGenie","FrCEx_N_UBGenie","FrCEx_pi_UBGenie","FrInel_N_UBGenie","FrInel_pi_UBGenie",
                 "FrPiProd_N_UBGenie","FrPiProd_pi_UBGenie","FracDelta_CCMEC_UBGenie","FracPN_CCMEC_UBGenie","MFP_N_UBGenie",
                 "MFP_pi_UBGenie","MaCCQE_UBGenie","MaCCRES_UBGenie","MaNCEL_UBGenie","MaNCRES_UBGenie",
                 "MvCCRES_UBGenie","MvNCRES_UBGenie","NonRESBGvbarnCC1pi_UBGenie","NonRESBGvbarnCC2pi_UBGenie","NonRESBGvbarnNC1pi_UBGenie",
                 "NonRESBGvbarnNC2pi_UBGenie","NonRESBGvbarpCC1pi_UBGenie","NonRESBGvbarpCC2pi_UBGenie","NonRESBGvbarpNC1pi_UBGenie","NonRESBGvbarpNC2pi_UBGenie",
                 "NonRESBGvnCC1pi_UBGenie","NonRESBGvnCC2pi_UBGenie","NonRESBGvnNC1pi_UBGenie","NonRESBGvnNC2pi_UBGenie","NonRESBGvpCC1pi_UBGenie",
                 "NonRESBGvpCC2pi_UBGenie","NonRESBGvpNC1pi_UBGenie","NonRESBGvpNC2pi_UBGenie","NormCCMEC_UBGenie","NormNCMEC_UBGenie",
                 "RDecBR1eta_UBGenie","RDecBR1gamma_UBGenie","RPA_CCQE_UBGenie","Theta_Delta2Npi_UBGenie","TunedCentralValue_UBGenie",
                 "VecFFCCQEshape_UBGenie","XSecShape_CCMEC_UBGenie","splines_general_Spline"};	
	
	//----------------------------------------//		

}
#endif
