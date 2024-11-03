#ifndef CONSTANTS_H
#define CONSTANTS_H

#include "TString.h"
#include "TMath.h"

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <map>
#include <TDecompSVD.h>

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
	const TString CutExtension = "_NoCuts_PID_NuScore_CRT";

	// UBCodeVersion

	const TString UBCodeVersion = "v08_00_00_70";

	//----------------------------------------//

	// Exporting paths

	const TString PathToFiles = "/exp/uboone/data/users/"+UserID+"/my3DEvents/OutputFiles/"+UBCodeVersion+"/";
	const TString PathToExtractedXSec = "/exp/uboone/data/users/"+UserID+"/my3DSTVAnalysis/myXSec/"+UBCodeVersion+"/"; 
	const TString FileEfficienciesPath = "/exp/uboone/data/users/"+UserID+"/my3DSTVAnalysis/myEfficiencies/"+UBCodeVersion+"/";
	const TString PlotPath = "/exp/uboone/data/users/"+UserID+"/my3DSTVAnalysis/myPlots/"+UBCodeVersion+"/"; 
	const TString PathToSystematics = "/exp/uboone/data/users/"+UserID+"/my3DSTVAnalysis/mySystematics/"+UBCodeVersion+"/";
	const TString TrueSTVPath = PathToFiles;
	const TString MigrationMatrixPath = "/exp/uboone/data/users/"+UserID+"/my3DSTVAnalysis/myMigrationMatrices/"+UBCodeVersion+"/"; 

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
		{ "MuonMomentumPlot",  std::make_pair(0, 29) },
		{ "MuonCosThetaPlot",  std::make_pair(0, 24) },
		{ "MuonCosThetaSingleBinPlot",  std::make_pair(0, 16.9) },
		{ "ProtonMomentumPlot",  std::make_pair(0, 34) },
		{ "ProtonCosThetaPlot",  std::make_pair(0, 24) },
		{ "ECalPlot",  std::make_pair(0, 24.) },			

		{ "ECal_DeltaPT_0_00To0_30_DeltaAlphaT_0_00To90_00Plot",  std::make_pair(0, 0.39) },
		{ "ECal_DeltaPT_0_00To0_30_DeltaAlphaT_90_00To180_00Plot",  std::make_pair(0, 0.49) },
		{ "ECal_DeltaPT_0_30To1_00_DeltaAlphaT_0_00To90_00Plot",  std::make_pair(0, 0.019) },
		{ "ECal_DeltaPT_0_30To1_00_DeltaAlphaT_90_00To180_00Plot",  std::make_pair(0, 0.099) },

		{ "ECal_DeltaPn_0_00To0_30_DeltaAlpha3Dq_0_00To90_00Plot",  std::make_pair(0, 0.29) },
		{ "ECal_DeltaPn_0_00To0_30_DeltaAlpha3Dq_90_00To180_00Plot",  std::make_pair(0, 0.49) },
		{ "ECal_DeltaPn_0_30To1_00_DeltaAlpha3Dq_0_00To90_00Plot",  std::make_pair(0, 0.039) },
		{ "ECal_DeltaPn_0_30To1_00_DeltaAlpha3Dq_90_00To180_00Plot",  std::make_pair(0, 0.109) },

		{ "ECal_MuonCosTheta_Minus1_00To0_60_MuonMomentum_0_10To0_50Plot",  std::make_pair(0, 16.9) },
		{ "ECal_MuonCosTheta_Minus1_00To0_60_MuonMomentum_0_50To1_20Plot",  std::make_pair(0, 3.2) },
		{ "ECal_MuonCosTheta_0_60To1_00_MuonMomentum_0_10To0_50Plot",  std::make_pair(0, 19.9) },
		{ "ECal_MuonCosTheta_0_60To1_00_MuonMomentum_0_50To1_20Plot",  std::make_pair(0, 34.9) },

		{ "ECal_ProtonCosTheta_Minus1_00To0_60_ProtonMomentum_0_30To0_60Plot",  std::make_pair(0, 14.9) },
		{ "ECal_ProtonCosTheta_Minus1_00To0_60_ProtonMomentum_0_60To1_00Plot",  std::make_pair(0, 4.9) },
		{ "ECal_ProtonCosTheta_0_60To1_00_ProtonMomentum_0_30To0_60Plot",  std::make_pair(0, 59.9) },
		{ "ECal_ProtonCosTheta_0_60To1_00_ProtonMomentum_0_60To1_00Plot",  std::make_pair(0, 59) },

		{ "SerialECal_DeltaPTDeltaAlphaTPlot",  std::make_pair(0, 1.99) },
		{ "SerialECal_DeltaPnDeltaAlpha3DqPlot",  std::make_pair(0, 1.79) },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot",  std::make_pair(0, 2.19) },
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot",  std::make_pair(0, 2.79) },		
								
	};	
	
	//----------------------------------------//

	static std::map<TString,TString> VarLabel =
	{
		{ "DeltaPTPlot",  "#frac{d#sigma}{d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "DeltaPnPlot",  "#frac{d#sigma}{dp_{n}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "DeltaAlphaTPlot",  "#frac{d#sigma}{d#delta#alpha_{T}} #left[10^{-38} #frac{cm^{2}}{deg Ar}#right]" },
		{ "DeltaAlpha3DqPlot",  "#frac{d#sigma}{d#alpha_{3D}} #left[10^{-38} #frac{cm^{2}}{deg Ar}#right]" },
		{ "MuonMomentumPlot",  "#frac{d#sigma}{dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "MuonCosThetaPlot",  "#frac{d#sigma}{dcos#theta_{#mu}} #left[10^{-38} #frac{cm^{2}}{Ar}#right]" },
		{ "MuonCosThetaSingleBinPlot",  "#frac{d#sigma}{dcos#theta_{#mu}} #left[10^{-38} #frac{cm^{2}}{Ar}#right]" },
		{ "ProtonMomentumPlot",  "#frac{d#sigma}{dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV/c Ar}#right]" },
		{ "ProtonCosThetaPlot",  "#frac{d#sigma}{dcos#theta_{p}} #left[10^{-38} #frac{cm^{2}}{Ar}#right]" },
		{ "ECalPlot",  "#frac{d#sigma}{dE^{Cal}} #left[10^{-38} #frac{cm^{2}}{GeV Ar}#right]" },

         	{ "ECal_DeltaPT_0_00To0_30_DeltaAlphaT_0_00To90_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "ECal_DeltaPT_0_00To0_30_DeltaAlphaT_90_00To180_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "ECal_DeltaPT_0_30To1_00_DeltaAlphaT_0_00To90_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "ECal_DeltaPT_0_30To1_00_DeltaAlphaT_90_00To180_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#delta#alpha_{T}d#deltap_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },

         	{ "ECal_DeltaPn_0_00To0_30_DeltaAlpha3Dq_0_00To90_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#alpha_{3D}dp_{n}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "ECal_DeltaPn_0_00To0_30_DeltaAlpha3Dq_90_00To180_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#alpha_{3D}dp_{n}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "ECal_DeltaPn_0_30To1_00_DeltaAlpha3Dq_0_00To90_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#alpha_{3D}dp_{n}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "ECal_DeltaPn_0_30To1_00_DeltaAlpha3Dq_90_00To180_00Plot","#frac{d^{3}#sigma}{dE^{Cal}d#alpha_{3D}dp_{n}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },

		{ "ECal_MuonCosTheta_Minus1_00To0_60_MuonMomentum_0_10To0_50Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]" },
		{ "ECal_MuonCosTheta_0_60To1_00_MuonMomentum_0_10To0_50Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{#mu}dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_MuonCosTheta_Minus1_00To0_60_MuonMomentum_0_50To1_20Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{#mu}dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_MuonCosTheta_0_60To1_00_MuonMomentum_0_50To1_20Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{#mu}dp_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},

		{ "ECal_ProtonCosTheta_Minus1_00To0_60_ProtonMomentum_0_30To0_60Plot","#frac{d^{3}#sigma}{dE^{Cal}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_ProtonCosTheta_Minus1_00To0_60_ProtonMomentum_0_60To1_00Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{p}dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_ProtonCosTheta_0_60To1_00_ProtonMomentum_0_30To0_60Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{p}dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},
		{ "ECal_ProtonCosTheta_0_60To1_00_ProtonMomentum_0_60To1_00Plot","#frac{d^{3}#sigma}{dE^{Cal}dcos#theta_{p}dp_{p}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]"},	

		{ "SerialECal_DeltaPTDeltaAlphaTPlot", "#frac{d^{3}#sigma}{dE^{Cal} d#deltap_{T} d#delta#alpha_{T}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "SerialECal_DeltaPnDeltaAlpha3DqPlot", "#frac{d^{3}#sigma}{dE^{Cal} d#deltap_{n} d#delta#alpha_{3D}} #left[10^{-38} #frac{cm^{2}}{deg GeV^{2}/c Ar}#right]" },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot", "#frac{d^{3}#sigma}{dE^{Cal} dp_{#mu} dcos#theta_{#mu}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]" },
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot", "#frac{d^{3}#sigma}{dE^{Cal} dp_{p} dcos#theta_{p}} #left[10^{-38} #frac{cm^{2}}{GeV^{2}/c Ar}#right]" },
	
	};

	static std::map<TString,TString> LatexLabel =
	{
		{ "DeltaPTPlot",  "All events" },
		{ "DeltaPnPlot",  "All events" },
		{ "DeltaAlphaTPlot",  "All events" },
		{ "DeltaAlpha3DqPlot",  "All events" },
		{ "MuonMomentumPlot",  "All events" },
		{ "MuonCosThetaPlot",  "All events" },
		{ "MuonCosThetaSingleBinPlot",  "All events" },
		{ "ProtonMomentumPlot",  "All events" },
		{ "ProtonCosThetaPlot",  "All events" },
		{ "ECalPlot",  "All events" },

	        { "ECal_DeltaPT_0_00To0_30_DeltaAlphaT_0_00To90_00Plot","#deltap_{T} < 0.3 GeV/c, #delta#alpha_{T} < 90^{o}" },
		{ "ECal_DeltaPT_0_00To0_30_DeltaAlphaT_90_00To180_00Plot","#deltap_{T} < 0.3 GeV/c, 90^{o} < #delta#alpha_{T} < 180^{o}" },
		{ "ECal_DeltaPT_0_30To1_00_DeltaAlphaT_0_00To90_00Plot","#deltap_{T} > 0.3 GeV/c, #delta#alpha_{T} < 90^{o}" },
		{ "ECal_DeltaPT_0_30To1_00_DeltaAlphaT_90_00To180_00Plot","#deltap_{T} > 0.3 GeV/c, 90^{o} < #delta#alpha_{T} < 180^{o}" },

		{ "ECal_DeltaPn_0_00To0_30_DeltaAlpha3Dq_0_00To90_00Plot","p_{n} < 0.3 GeV/c, #alpha_{3D} < 90^{o}" },
		{ "ECal_DeltaPn_0_00To0_30_DeltaAlpha3Dq_90_00To180_00Plot","p_{n} < 0.3 GeV/c, 90^{o} < #alpha_{3D} < 180^{o}" },
		{ "ECal_DeltaPn_0_30To1_00_DeltaAlpha3Dq_0_00To90_00Plot","p_{n} > 0.3 GeV/c, #alpha_{3D} < 90^{o}" },
		{ "ECal_DeltaPn_0_30To1_00_DeltaAlpha3Dq_90_00To180_00Plot","p_{n} > 0.3 GeV/c, 90^{o} < #alpha_{3D} < 180^{o}" },

		{ "ECal_MuonCosTheta_Minus1_00To0_60_MuonMomentum_0_10To0_50Plot","-1 < cos#theta_{#mu} < 0.6, 0.1 < p_{#mu} < 0.5 GeV/c" },
		{ "ECal_MuonCosTheta_0_60To1_00_MuonMomentum_0_10To0_50Plot","0.6 < cos#theta_{#mu} < 1, 0.1 < p_{#mu} < 0.5 GeV/c"},
		{ "ECal_MuonCosTheta_Minus1_00To0_60_MuonMomentum_0_50To1_20Plot","-1 < cos#theta_{#mu} < 0.6, 0.5 < p_{#mu} < 1.2 GeV/c"},
		{ "ECal_MuonCosTheta_0_60To1_00_MuonMomentum_0_50To1_20Plot","0.6 < cos#theta_{#mu} < 1, 0.5 < p_{#mu} < 1.2 GeV/c"},

		{ "ECal_ProtonCosTheta_Minus1_00To0_60_ProtonMomentum_0_30To0_60Plot","-1 < cos#theta_{p} < 0.6, 0.3 < p_{p} < 0.6 GeV/c"},
		{ "ECal_ProtonCosTheta_0_60To1_00_ProtonMomentum_0_30To0_60Plot","0.6 < cos#theta_{p} < 1, 0.3 < p_{p} < 0.6 GeV/c"},
		{ "ECal_ProtonCosTheta_Minus1_00To0_60_ProtonMomentum_0_60To1_00Plot","-1 < cos#theta_{p} < 0.6, 0.6 < p_{p} < 1 GeV/c"},
		{ "ECal_ProtonCosTheta_0_60To1_00_ProtonMomentum_0_60To1_00Plot","0.6 < cos#theta_{p} < 1, 0.6 < p_{p} < 1 GeV/c"},

		{ "SerialECal_DeltaPTDeltaAlphaTPlot", "#deltap_{T} & #delta#alpha_{T} slices" },
		{ "SerialECal_DeltaPnDeltaAlpha3DqPlot", "p_{n} & #alpha_{3D} slices" },	
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
		{ "ECalPlot", "ECalPlot" },
		
		{ "SerialECal_DeltaPTDeltaAlphaTPlot_0", "ECal_DeltaPT_0_00To0_30_DeltaAlphaT_0_00To90_00Plot" },
		{ "SerialECal_DeltaPTDeltaAlphaTPlot_1", "ECal_DeltaPT_0_00To0_30_DeltaAlphaT_90_00To180_00Plot" },
		{ "SerialECal_DeltaPTDeltaAlphaTPlot_2", "ECal_DeltaPT_0_30To1_00_DeltaAlphaT_0_00To90_00Plot" },
		{ "SerialECal_DeltaPTDeltaAlphaTPlot_3", "ECal_DeltaPT_0_30To1_00_DeltaAlphaT_90_00To180_00Plot" },
	
		{ "SerialECal_DeltaPnDeltaAlpha3DqPlot_0", "ECal_DeltaPn_0_00To0_30_DeltaAlpha3Dq_0_00To90_00Plot" },
		{ "SerialECal_DeltaPnDeltaAlpha3DqPlot_1", "ECal_DeltaPn_0_00To0_30_DeltaAlpha3Dq_90_00To180_00Plot" },
		{ "SerialECal_DeltaPnDeltaAlpha3DqPlot_2", "ECal_DeltaPn_0_30To1_00_DeltaAlpha3Dq_0_00To90_00Plot" },
		{ "SerialECal_DeltaPnDeltaAlpha3DqPlot_3", "ECal_DeltaPn_0_30To1_00_DeltaAlpha3Dq_90_00To180_00Plot" },
					
		{ "SerialECal_MuonCosThetaMuonMomentumPlot_0", "ECal_MuonCosTheta_Minus1_00To0_60_MuonMomentum_0_10To0_50Plot" },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot_1", "ECal_MuonCosTheta_Minus1_00To0_60_MuonMomentum_0_50To1_20Plot" },	
		{ "SerialECal_MuonCosThetaMuonMomentumPlot_2", "ECal_MuonCosTheta_0_60To1_00_MuonMomentum_0_10To0_50Plot" },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot_3", "ECal_MuonCosTheta_0_60To1_00_MuonMomentum_0_50To1_20Plot" },

		{ "SerialECal_ProtonCosThetaProtonMomentumPlot_0", "ECal_ProtonCosTheta_Minus1_00To0_60_ProtonMomentum_0_30To0_60Plot" },	
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot_1", "ECal_ProtonCosTheta_Minus1_00To0_60_ProtonMomentum_0_60To1_00Plot" },		    
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot_2", "ECal_ProtonCosTheta_0_60To1_00_ProtonMomentum_0_30To0_60Plot" },
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot_3", "ECal_ProtonCosTheta_0_60To1_00_ProtonMomentum_0_60To1_00Plot" },							

		{ "ECal_DeltaPT_0_00To0_30_DeltaAlphaT_0_00To90_00Plot", "ECal_DeltaPT_0_00To0_30_DeltaAlphaT_0_00To90_00Plot" },
		{ "ECal_DeltaPT_0_00To0_30_DeltaAlphaT_90_00To180_00Plot", "ECal_DeltaPT_0_00To0_30_DeltaAlphaT_90_00To180_00Plot" },
		{ "ECal_DeltaPT_0_30To1_00_DeltaAlphaT_0_00To90_00Plot", "ECal_DeltaPT_0_30To1_00_DeltaAlphaT_0_00To90_00Plot" },
		{ "ECal_DeltaPT_0_30To1_00_DeltaAlphaT_90_00To180_00Plot", "ECal_DeltaPT_0_30To1_00_DeltaAlphaT_90_00To180_00Plot" },
	
		{ "ECal_DeltaPn_0_00To0_30_DeltaAlpha3Dq_0_00To90_00Plot", "ECal_DeltaPn_0_00To0_30_DeltaAlpha3Dq_0_00To90_00Plot" },
		{ "ECal_DeltaPn_0_00To0_30_DeltaAlpha3Dq_90_00To180_00Plot", "ECal_DeltaPn_0_00To0_30_DeltaAlpha3Dq_90_00To180_00Plot" },
		{ "ECal_DeltaPn_0_30To1_00_DeltaAlpha3Dq_0_00To90_00Plot", "ECal_DeltaPn_0_30To1_00_DeltaAlpha3Dq_0_00To90_00Plot" },
		{ "ECal_DeltaPn_0_30To1_00_DeltaAlpha3Dq_90_00To180_00Plot", "ECal_DeltaPn_0_30To1_00_DeltaAlpha3Dq_90_00To180_00Plot" },
		
		{ "ECal_MuonCosTheta_Minus1_00To0_60_MuonMomentum_0_10To0_50Plot", "ECal_MuonCosTheta_Minus1_00To0_60_MuonMomentum_0_10To0_50Plot" },
		{ "ECal_MuonCosTheta_Minus1_00To0_60_MuonMomentum_0_50To1_20Plot", "ECal_MuonCosTheta_Minus1_00To0_60_MuonMomentum_0_50To1_20Plot" },	
		{ "ECal_MuonCosTheta_0_60To1_00_MuonMomentum_0_10To0_50Plot", "ECal_MuonCosTheta_0_60To1_00_MuonMomentum_0_10To0_50Plot" },
		{ "ECal_MuonCosTheta_0_60To1_00_MuonMomentum_0_50To1_20Plot", "ECal_MuonCosTheta_0_60To1_00_MuonMomentum_0_50To1_20Plot" },
		
		{ "ECal_ProtonCosTheta_Minus1_00To0_60_ProtonMomentum_0_30To0_60Plot", "ECal_ProtonCosTheta_Minus1_00To0_60_ProtonMomentum_0_30To0_60Plot" },
		{ "ECal_ProtonCosTheta_Minus1_00To0_60_ProtonMomentum_0_60To1_00Plot", "ECal_ProtonCosTheta_Minus1_00To0_60_ProtonMomentum_0_60To1_00Plot" },	
		{ "ECal_ProtonCosTheta_0_60To1_00_ProtonMomentum_0_30To0_60Plot", "ECal_ProtonCosTheta_0_60To1_00_ProtonMomentum_0_30To0_60Plot" },
		{ "ECal_ProtonCosTheta_0_60To1_00_ProtonMomentum_0_60To1_00Plot", "ECal_ProtonCosTheta_0_60To1_00_ProtonMomentum_0_60To1_00Plot" },					
	
		{ "SerialECal_DeltaPTDeltaAlphaTPlot", "SerialECal_DeltaPTDeltaAlphaTPlot" },
		{ "SerialECal_DeltaPnDeltaAlpha3DqPlot", "SerialECal_DeltaPnDeltaAlpha3DqPlot" },	
		{ "SerialECal_MuonCosThetaMuonMomentumPlot", "SerialECal_MuonCosThetaMuonMomentumPlot" },
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot", "SerialECal_ProtonCosThetaProtonMomentumPlot" },								
	
	};
					
	// -------------------------------------------------------------------------------------------------------------------------

	// Global Constants

	static const double Units = 1E38; // so that the extracted cross-section is in 10^{-38} cm^{2}
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
				 ,"MuonMomentumPlot"
				 ,"MuonCosThetaPlot"
				 ,"MuonCosThetaSingleBinPlot"
				 ,"ProtonMomentumPlot"
				 ,"ProtonCosThetaPlot"
				 ,"ECalPlot"
				 ,"DeltaPnPlot"

				 ,"ECal_DeltaPT_0_00To0_30_DeltaAlphaT_0_00To90_00Plot"
				 ,"ECal_DeltaPT_0_00To0_30_DeltaAlphaT_90_00To180_00Plot"
				 ,"ECal_DeltaPT_0_30To1_00_DeltaAlphaT_0_00To90_00Plot"
				 ,"ECal_DeltaPT_0_30To1_00_DeltaAlphaT_90_00To180_00Plot"	

				 ,"ECal_DeltaPn_0_00To0_30_DeltaAlpha3Dq_0_00To90_00Plot"
				 ,"ECal_DeltaPn_0_00To0_30_DeltaAlpha3Dq_90_00To180_00Plot"
				 ,"ECal_DeltaPn_0_30To1_00_DeltaAlpha3Dq_0_00To90_00Plot"
				 ,"ECal_DeltaPn_0_30To1_00_DeltaAlpha3Dq_90_00To180_00Plot"	

				 ,"ECal_MuonCosTheta_Minus1_00To0_60_MuonMomentum_0_10To0_50Plot"
				 ,"ECal_MuonCosTheta_0_60To1_00_MuonMomentum_0_10To0_50Plot"
				 ,"ECal_MuonCosTheta_Minus1_00To0_60_MuonMomentum_0_50To1_20Plot"
				 ,"ECal_MuonCosTheta_0_60To1_00_MuonMomentum_0_50To1_20Plot"

				 ,"ECal_ProtonCosTheta_Minus1_00To0_60_ProtonMomentum_0_30To0_60Plot"
				 ,"ECal_ProtonCosTheta_0_60To1_00_ProtonMomentum_0_30To0_60Plot"
				 ,"ECal_ProtonCosTheta_Minus1_00To0_60_ProtonMomentum_0_60To1_00Plot"
				 ,"ECal_ProtonCosTheta_0_60To1_00_ProtonMomentum_0_60To1_00Plot" 

				 ,"SerialECal_DeltaPTDeltaAlphaTPlot"
				 ,"SerialECal_DeltaPnDeltaAlpha3DqPlot"
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot"
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot"
			

			 };
	
	//----------------------------------------//
	
	vector<TString> OneDimXSec = {
				  // 1D
				  "DeltaPTPlot"
				 ,"DeltaAlphaTPlot"
				 ,"DeltaAlpha3DqPlot"
				 ,"MuonMomentumPlot"
				 ,"MuonCosThetaPlot"
				 ,"MuonCosThetaSingleBinPlot"
				 ,"ProtonMomentumPlot"
				 ,"ProtonCosThetaPlot"
				 ,"ECalPlot"
				 ,"DeltaPnPlot"
				 //3D Correlated results
				 ,"SerialECal_DeltaPTDeltaAlphaTPlot"
				 ,"SerialECal_DeltaPnDeltaAlpha3DqPlot"
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot"
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot"	 				 
				 				 
			};	
	
	//----------------------------------------//
	
	vector<TString> MultiDimXSec = {
				  "DeltaPTPlot"
				 ,"DeltaAlphaTPlot"
				 ,"DeltaAlpha3DqPlot"
				 ,"MuonMomentumPlot"
				 ,"MuonCosThetaPlot"
				 ,"MuonCosThetaSingleBinPlot"
				 ,"ProtonMomentumPlot"
				 ,"ProtonCosThetaPlot"
				 ,"ECalPlot"
				 ,"DeltaPnPlot"
	
				 ,"SerialECal_DeltaPTDeltaAlphaTPlot_0"
				 ,"SerialECal_DeltaPTDeltaAlphaTPlot_1"
				 ,"SerialECal_DeltaPTDeltaAlphaTPlot_2"
				 ,"SerialECal_DeltaPTDeltaAlphaTPlot_3"

				 ,"SerialECal_DeltaPnDeltaAlpha3DqPlot_0"
				 ,"SerialECal_DeltaPnDeltaAlpha3DqPlot_1"
				 ,"SerialECal_DeltaPnDeltaAlpha3DqPlot_2"
				 ,"SerialECal_DeltaPnDeltaAlpha3DqPlot_3"

				 ,"SerialECal_MuonCosThetaMuonMomentumPlot_0"
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot_1"
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot_2"	
				 ,"SerialECal_MuonCosThetaMuonMomentumPlot_3"
				 
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot_0"
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot_1"
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot_2"	
				 ,"SerialECal_ProtonCosThetaProtonMomentumPlot_3"
						
	};	

	// --------------------------------------------------------------------------------------------------------------------------

	// POT Normalization & Runs
	// Add 4a ???

//	vector<TString> Runs{"Run1"};
	vector<TString> Runs{"Run1","Run2","Run3","Run4a","Run4b","Run4c","Run4d","Run5","Combined"};

	// ------------------------------------ //

	// Run 1 

	static const double tor860_wcut_Run1 = 4.566e+19;
	static const double E1DCNT_wcut_Run1 = 10127594.0;
	static const double EXT_Run1 = 32514217.0;

	static const double Fulltor860_wcut_Run1 = 1.67e20;
	static const double FullE1DCNT_wcut_Run1 = 37273255.0;
	static const double FullEXT_Run1 = 65744587.0;

	// ------------------------------------ //

	// Run 1A Open Trigger 

	static const double tor860_wcut_Run1A_open_trigger = 3.189e+19;
	static const double E1DCNT_wcut_Run1A_open_trigger = 8206126.0;
	static const double EXT_Run1A_open_trigger = 65744587.0;

	static const double Fulltor860_wcut_Run1A_open_trigger = 3.189e+19;
	static const double FullE1DCNT_wcut_Run1A_open_trigger = 8206126.0;
	static const double FullEXT_Run1A_open_trigger = 65744587.0;
	
	// ------------------------------------ //

	// Run 1B Open Trigger 

	static const double tor860_wcut_Run1B_open_trigger = 6.081e+19;
	static const double E1DCNT_wcut_Run1B_open_trigger = 13472878.0;
	static const double EXT_Run1B_open_trigger = 65744587.0;

	static const double Fulltor860_wcut_Run1B_open_trigger = 6.081e+19;
	static const double FullE1DCNT_wcut_Run1B_open_trigger = 13472878.0;
	static const double FullEXT_Run1B_open_trigger = 65744587.0;
		
	// ------------------------------------ //	
	
	// Run 2 

	static const double tor860_wcut_Run2 = 0.;
	static const double E1DCNT_wcut_Run2 = 0.;
	static const double EXT_Run2 = 1.;

	static const double Fulltor860_wcut_Run2 = 2.61e20;
	static const double FullE1DCNT_wcut_Run2 = 61882791.0;
	static const double FullEXT_Run2 = 153905891.0;
	
	// ------------------------------------ //	
	
	// Run 3 

	static const double tor860_wcut_Run3 = 9.513e+18;
	static const double E1DCNT_wcut_Run3 = 2299517.0;
	static const double EXT_Run3 = 131356320.0;

	static const double Fulltor860_wcut_Run3 = 2.57e20;
	static const double FullE1DCNT_wcut_Run3 = 61326657.0;
	static const double FullEXT_Run3 = 207224641.0;
	
	// ------------------------------------ //	
	
	// Run 4a 

	static const double tor860_wcut_Run4a = 0.;
	static const double E1DCNT_wcut_Run4a = 0.;
	static const double EXT_Run4a = 1.;

	static const double Fulltor860_wcut_Run4a = 4.5e19;
	static const double FullE1DCNT_wcut_Run4a = 9897624.;
	static const double FullEXT_Run4a = 27596585.;	

	// ------------------------------------ //	
	
	// Run 4b 

	static const double tor860_wcut_Run4b = 0.;
	static const double E1DCNT_wcut_Run4b = 0.;
	static const double EXT_Run4b = 1.;

	static const double Fulltor860_wcut_Run4b = 1.36e20;
	static const double FullE1DCNT_wcut_Run4b = 32305463.0;
	static const double FullEXT_Run4b = 89244940.0;	

	// ------------------------------------ //
		
	// Run 4c

	static const double tor860_wcut_Run4c = 0.;
	static const double E1DCNT_wcut_Run4c = 0.;
	static const double EXT_Run4c = 1.;

	static const double Fulltor860_wcut_Run4c = 8.95e19;
	static const double FullE1DCNT_wcut_Run4c = 20273291.0;
	static const double FullEXT_Run4c = 47178301.0;	

	// ------------------------------------ //
		
	// Run 4d 

	static const double tor860_wcut_Run4d = 0.;
	static const double E1DCNT_wcut_Run4d = 0.;
	static const double EXT_Run4d = 1.;

	static const double Fulltor860_wcut_Run4d = 4.93e19;
	static const double FullE1DCNT_wcut_Run4d = 11192660.0;
	static const double FullEXT_Run4d = 74409530.0;	

	// ------------------------------------ //
		
	// Run 5 

	static const double tor860_wcut_Run5 = 0.;
	static const double E1DCNT_wcut_Run5 = 0.;
	static const double EXT_Run5 = 1.;

	static const double Fulltor860_wcut_Run5 = 1.48e20;
	static const double FullE1DCNT_wcut_Run5 = 35265730.0;
	static const double FullEXT_Run5 = 107466402.0;	

	// ------------------------------------ //	
	
	// Combined POT

	static const double Fulltor860_wcut_Run1all = Fulltor860_wcut_Run1 + Fulltor860_wcut_Run1A_open_trigger + Fulltor860_wcut_Run1B_open_trigger;	
	static const double Fulltor860_wcut_Run4 = Fulltor860_wcut_Run4a + Fulltor860_wcut_Run4b + Fulltor860_wcut_Run4c + Fulltor860_wcut_Run4d;	
	static const double Fulltor860_wcut_Combined = Fulltor860_wcut_Run1all + Fulltor860_wcut_Run2 + Fulltor860_wcut_Run3 + Fulltor860_wcut_Run4 + Fulltor860_wcut_Run5;	
	
	static const double FullEXT_Run1all = FullEXT_Run1 + FullEXT_Run1A_open_trigger + FullEXT_Run1B_open_trigger;
	static const double FullEXT_Run4 = FullEXT_Run4a + FullEXT_Run4b + FullEXT_Run4c + FullEXT_Run4d;
	static const double FullEXT_Combined = FullEXT_Run1all + FullEXT_Run2 + FullEXT_Run3 + FullEXT_Run4 + FullEXT_Run5;	

	static const double FullE1DCNT_wcut_Run1all = FullE1DCNT_wcut_Run1 + FullE1DCNT_wcut_Run1A_open_trigger + FullE1DCNT_wcut_Run1B_open_trigger;	
	static const double FullE1DCNT_wcut_Run4 =  FullE1DCNT_wcut_Run4a + FullE1DCNT_wcut_Run4b + FullE1DCNT_wcut_Run4c + FullE1DCNT_wcut_Run4d;	
	static const double FullE1DCNT_wcut_Combined = FullE1DCNT_wcut_Run1all + FullE1DCNT_wcut_Run2 + FullE1DCNT_wcut_Run3 + FullE1DCNT_wcut_Run4 + FullE1DCNT_wcut_Run5;
	
	// ---------------------------------------------------------------------------------------------------------------------------

	// Binning

	static const int NBinsDeltaPT = 13; static const double ArrayNBinsDeltaPT[NBinsDeltaPT+1] = {0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.47,0.55,0.65,0.75,0.9};

	static const int NBinsDeltaPn = 10; static const double ArrayNBinsDeltaPn[NBinsDeltaPn+1] = {0,0.07,0.14,0.2,0.3,0.4,0.47,0.55,0.65,0.75,0.85};

	static const int NBinsDeltaAlphaT = 7; static const double ArrayNBinsDeltaAlphaT[NBinsDeltaAlphaT+1] = { 0.,22.,44.,66.,88.,110.,145.,180. };
	static const int NBinsDeltaAlpha3Dq = 8; static const double ArrayNBinsDeltaAlpha3Dq[NBinsDeltaAlpha3Dq+1] = { 0., 25., 50., 70., 90., 110., 130., 150.,180. };

	static const int NBinsECal = 9; static const double ArrayNBinsECal[NBinsECal+1] = {0.2,0.35,0.5,0.65,0.8,0.95,1.1,1.25,1.4,1.6}; 

	
	static const int NBinsMuonMomentum = 10; static const double ArrayNBinsMuonMomentum[NBinsMuonMomentum+1] = { 0.1,0.2,0.3,0.4,0.5,0.64,0.77,0.9,1.,1.1,1.2};

	static const int NBinsMuonCosTheta = 18;
	static const double ArrayNBinsMuonCosTheta[NBinsMuonCosTheta+1] = { -1.,-0.85,-0.7,-0.57,-0.45,-0.32,-0.2,-0.1,0.,0.1,0.2,0.3,0.4,0.5,0.6,0.72,0.84,0.95,1.};

	static const int NBinsProtonMomentum = 10; static const double ArrayNBinsProtonMomentum[NBinsProtonMomentum+1] = {0.3,0.38,0.45,0.5,0.55,0.625,0.7,0.75,0.8,0.87,1.};

	static const int NBinsProtonCosTheta = 11;
	static const double ArrayNBinsProtonCosTheta[NBinsProtonCosTheta+1] = { -1.,-0.73,-0.43,-0.18,0.05,0.2,0.37,0.54,0.7,0.8,0.9,1.};
	
	// -----------------------------------------------------------------------------------------------------------------------------------------

	static const int NBinsEv = 36; static const double MinEv = 0.25, MaxEv = 1.6;
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

	TString RecoLabelXAxisEv = ";E_{#nu} [GeV]";
	TString RecoLabelXAxisVertexX = ";Vertex x [cm]";
	TString RecoLabelXAxisVertexY = ";Vertex y [cm]";
	TString RecoLabelXAxisVertexZ = ";Vertex z [cm]";
	
	// ------------------------------------------------------------------------------------------------------------------------------------

	// Labels for 2D Plots

	static TString LabelXAxisDeltaPT2D = LabelXAxisTrueDeltaPT+";Reco #deltap_{T} [GeV/c]";
	static TString LabelXAxisDeltaAlphaT2D = LabelXAxisTrueDeltaAlphaT+";Reco #delta#alpha_{T} [deg]";
	static TString LabelXAxisDeltaAlpha3Dq2D = LabelXAxisTrueDeltaAlpha3Dq+";Reco #alpha_{3D} [deg]";

	static TString LabelXAxisDeltaPn2D = LabelXAxisTrueDeltaPn+";Reco p_{n} [GeV/c]";

	static TString LabelXAxisMuonMomentum2D = LabelXAxisTrueMuonMomentum+";Reco P_{#mu} [GeV/c]";
	static TString LabelXAxisMuonCosTheta2D = LabelXAxisTrueMuonCosTheta+";Reco cos#theta_{#mu}";

	static TString LabelXAxisProtonMomentum2D = LabelXAxisTrueProtonMomentum+";Reco P_{p} [GeV/c]";
	static TString LabelXAxisProtonCosTheta2D = LabelXAxisTrueProtonCosTheta+";Reco cos#theta_{p}";

	static TString LabelXAxisECal2D = ";True E^{Cal} [GeV];Reco E^{Cal} [GeV]";

	// --------------------------------------------------------------------------------------------------------------------------------------

	static int MCUncColor = kGray;	
	static int OverlayColor = kAzure-4;
	static int BeamOnColor = kBlack;
	static int GenieOverlayColor = kBlack;
	static int GenieColor = 610;
	static int Geniev3OutOfTheBoxColor = kMagenta;
	static int GiBUUColor = kGreen+1; // 410
	static int NuWroColor = kOrange+10;
	static int NEUTColor = kRed+1;
	static int GENIEv2Color = kBlue;	
	static int GENIEv3_0_4_Color = kGray+1;
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

	static const double ProtonLLRPIDScore = 0.05;

	static const double CosmicPID = -999.;
	static const int CosmicPdg = -99;

	static const double BE = 0.04; // GeV

	static const double ThresholdPurity = 0.1; // 10%
	static const double UBSpaceReso = 0.3; // cm // 3mm spacing between the wires

	static const double MaxMuPDistance = 2.; // cm

	static const double MaxPFParticleTrackDistance = 20.; // cm

	static const double YZBeamFlashVertexMaxDistance = 500.; // cm
	static const double BeamFlashPEThreshold = 100; // PEs

	static const double ChargedPionMomentumThres = 0.07;
	static const double NeutralPionMomentumThres = 0.0;

	static const double PurityThreshold = 0.1;

	static double POTUncertainty = 0.02; // 2% POT Uncertainty		

	static double NTargetUncertainty = 0.01; // 1% NTarget Uncertainty

	constexpr float TRACK_SCORE_CUT = 0.5;	

	// Quality cuts

	const TString MuRangeMCSAgree = "0.25"; const double MuRangeMCSAgreeValue = 0.25;
	const TString MuMinMCSLengthThres = "100";  const double MuMinMCSLengthThresValue = 100;
	const TString MuMinSumHits = "0.7";  const double MuMinSumHitsValue = 0.7;
	const TString PMinSumHits = "1.";  const double PMinSumHitsValue = 1.;	

	// --------------------------------------------------------------------------------------------------------------------------------------

	// Selection  & Quality cuts

	// Reco level

	const TString CC1p = "CC1p && CandidateMu_MCParticle_Pdg == 13 && CandidateP_MCParticle_Pdg == 2212 && NumberPi0 == 0"; 
	
	const TString CC1p1pi = "CandidateMu_MCParticle_Pdg == 211 && CandidateP_MCParticle_Pdg == 2212 && NumberPi0 == 0";	

	const TString Containment = "CandidateMu_StartContainment == 1 && CandidateP_StartContainment == 1 && CandidateP_EndContainment == 1 && True_CandidateMu_StartContainment == 1";

	const TString ContainmentData = "CandidateMu_StartContainment == 1 && CandidateP_StartContainment == 1 && CandidateP_EndContainment == 1";

	const TString ProtonMom = "CandidateP_P_Range > " + TString(std::to_string(ArrayNBinsProtonMomentum[0])) + " && CandidateP_P_Range < "\
		+ TString(std::to_string(ArrayNBinsProtonMomentum[NBinsProtonMomentum])) + " && True_CandidateP_P > "+ TString(std::to_string(ArrayNBinsProtonMomentum[0]))\
		+ " && True_CandidateP_P < "+ TString(std::to_string(ArrayNBinsProtonMomentum[NBinsProtonMomentum]));

	const TString ProtonMomData = "CandidateP_P_Range > " + TString(std::to_string(ArrayNBinsProtonMomentum[0])) + " && CandidateP_P_Range < "\
		+ TString(std::to_string(ArrayNBinsProtonMomentum[NBinsProtonMomentum]));
 
	const TString MuonMom = "True_CandidateMu_P > "+ TString(std::to_string(ArrayNBinsMuonMomentum[0])) + " && True_CandidateMu_P < "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[NBinsMuonMomentum]))\
		+ " && ( ( CandidateMu_EndContainment == 1 && CandidateMu_P_Range > "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[0])) + " && CandidateMu_P_Range < "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[NBinsMuonMomentum])) +" ) || ( CandidateMu_EndContainment == 0 && CandidateMu_P_MCS > "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[0])) + " && CandidateMu_P_MCS < "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[NBinsMuonMomentum])) +" ) )" ;

	const TString MuonMomData = "( ( CandidateMu_EndContainment == 1 && CandidateMu_P_Range > "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[0])) + " && CandidateMu_P_Range < "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[NBinsMuonMomentum])) +" ) || ( CandidateMu_EndContainment == 0 && CandidateMu_P_MCS > "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[0])) + " && CandidateMu_P_MCS < "\
		+ TString(std::to_string(ArrayNBinsMuonMomentum[NBinsMuonMomentum])) +" ) )" ;

	const TString QualityCut = " ( (CandidateMu_EndContainment == 1 && TMath::Abs(CandidateMu_P_Range-CandidateMu_P_MCS)/CandidateMu_P_Range < "\
		+ MuRangeMCSAgree +" ) || (CandidateMu_EndContainment == 0 && CandidateMu_Length > " + MuMinMCSLengthThres + ") )";

	const TString OnlyContainedMuQualityCut = " ( ( CandidateMu_EndContainment == 1 && TMath::Abs(CandidateMu_P_Range-CandidateMu_P_MCS/CandidateMu_P_Range < "+ MuRangeMCSAgree +" ) || (CandidateMu_EndContainment == 0) )";

	const TString MinHitsMu = "CandidateMu_P_Range > 0";

	const TString MinHitsP = "CandidateP_P_Range > 0";

	const TString MinMuonVertexDist = "CandidateMuStartVertexDistance < CandidateMuEndVertexDistance";

	const TString MinProtonVertexDist = "CandidatePStartVertexDistance < CandidatePEndVertexDistance";

	const TString AvoidFlippedTracks = "StartToStartDistance < EndToEndDistance";
	
	// --------------------------------------------------------------------------------------------------------------------------------
	
	// Qualifiers using reco info

	const TString qualifier = CC1p +" && "+ Containment + " && " + ProtonMom + " && " + MuonMom + " && " + QualityCut + " && " + MinMuonVertexDist\
		+ " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;
		
	const TString qualifierNoPCut = CC1p +" && "+ Containment + " && " + QualityCut + " && " + MinMuonVertexDist\
		+ " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;

	const TString qualifierPPNoCut = CC1p +" && "+ Containment + " && " + MuonMom + " && " + QualityCut + " && " + MinMuonVertexDist\
		+ " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;				

	const TString qualifierData = ContainmentData +" && " + ProtonMomData + " && " + MuonMomData + " && " + QualityCut + " && " + MinMuonVertexDist\
		+ " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;

	const TString qualifierNoMuRangeCut = CC1p +" && "+ Containment +" && " + ProtonMom + " && " + MuonMom + " && " + MinMuonVertexDist\
		+ " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;

	const TString qualifierNoHitSumCut = CC1p +" && "+ Containment +" && " + ProtonMom + " && " + MuonMom + " && " + QualityCut\
		+ " && " + MinMuonVertexDist + " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;

	const TString qualifierNoExitMuQC = CC1p +" && "+ Containment +" && " + ProtonMom + " && " + MuonMom + " && " + OnlyContainedMuQualityCut\
		+ " && " + MinMuonVertexDist + " && " + MinProtonVertexDist + " && " + AvoidFlippedTracks;
		
	const TString qualifierCC1p1pi = CC1p1pi +" && "+ Containment +" && " + ProtonMom + " && " + MuonMom + " && " + QualityCut + " && " + MinMuonVertexDist\
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

	const TString TrueQualifier = TrueCC1p + " && " + TrueProtonMom + " && " + TrueMuonMom + " && " + TrueDeltaAlphaT;
	
	const TString TrueQualifierNoPCut = TrueCC1p + " && " + TrueDeltaAlphaT;	
	
	const TString TrueQualifierNoPPCut = TrueCC1p + " && " + TrueMuonMom + " && " + TrueDeltaAlphaT;	

	//----------------------------------------//
	
	// And moving on towards a 2D analysis
	
	static const int TwoDNBinsDeltaPT = 2; std::vector<double> TwoDArrayNBinsDeltaPT{0.0,0.3,1.0};
	static const int TwoDNBinsDeltaPn = 2; std::vector<double> TwoDArrayNBinsDeltaPn{0.0,0.3,1.0};	
	static const int TwoDNBinsDeltaAlphaT = 2; std::vector<double> TwoDArrayNBinsDeltaAlphaT{0.0,90.0,180.0};
	static const int TwoDNBinsDeltaAlpha3Dq = 2; std::vector<double> TwoDArrayNBinsDeltaAlpha3Dq{0.0,90.0,180.0};
	static const int TwoDNBinsMuonCosTheta = 2; std::vector<double> TwoDArrayNBinsMuonCosTheta{-1.,0.6,1.0};
	static const int TwoDNBinsProtonCosTheta = 2; std::vector<double> TwoDArrayNBinsProtonCosTheta{-1.,0.6,1.0};
	static const int TwoDNBinsMuonMomentum = 2; std::vector<double> TwoDArrayNBinsMuonMomentum{0.1,0.5,1.2};
	static const int TwoDNBinsProtonMomentum = 2; std::vector<double> TwoDArrayNBinsProtonMomentum{0.3,0.6,1.};		

	//----------------------------------------//	
	
	std::vector< std::vector< std::vector<double> > > TwoDArrayNBinsECalInDeltaPTDeltaAlphaTSlices{
														{ // DeltaPT < 0.3 GeV/c
														{0.2,0.4,0.6,0.8,1.,1.6}, // DeltaAphaT < 90 deg
														{0.2,0.4,0.6,0.8,1.,1.6}  // 90 < DeltaAlphaT < 180 deg
														},	
														
														{ // DeltaPT > 0.3 GeV/c
														{0.2,0.5,0.8,1.6}, // DeltaAphaT < 90 deg
														{0.2,0.4,0.6,0.8,1.,1.6}  // 90 < DeltaAlphaT < 180 deg
														}		
																
													};
	
	std::vector< std::vector< std::vector<double> > > TwoDArrayNBinsECalInDeltaPnDeltaAlpha3DqSlices{
														{ // DeltaPn < 0.3 GeV/c
														{0.2,0.5,0.8,1.,1.6}, // DeltaApha3Dq < 90 deg
														{0.2,0.4,0.6,0.8,1.,1.6}  // 90 < DeltaAlpha3Dq < 180 deg
														},	
														
														{ // DeltaPn > 0.3 GeV/c
														{0.2,0.5,0.8,1.,1.6}, // DeltaApha3Dq < 90 deg
														{0.2,0.4,0.6,0.8,1.,1.6}  // 90 < DeltaAlpha3Dq < 180 deg
														}		
	
													};
	
	//----------------------------------------//	
													
	//----------------------------------------//	
	
	std::vector< std::vector< std::vector<double> > > TwoDArrayNBinsECalInMuonCosThetaMuonMomentumSlices{
														{ // -1 < cosθμ < 0.6
														{0.2,0.4,0.6,0.8,1.6},  // 0.10 < Pμ < 0.50 GeV/c
														{0.2,0.7,0.85,1.6}       // 0.50 < Pμ < 1.20 GeV/c
														},														
														{ // 0.6 < cosθμ < 1
														{0.2,0.5,0.7,1.6},  // 0.10 < Pμ < 0.50 GeV/c
														{0.2,0.7,0.9,1.1,1.3,1.6}   // 0.50 < Pμ < 1.20 GeV/c
														}		
																
													};
													
	//----------------------------------------//	
	
	std::vector< std::vector< std::vector<double> > > TwoDArrayNBinsECalInProtonCosThetaProtonMomentumSlices{
														{ // -1 < cosθp < 0.6
														{0.2,0.4,0.6,1.1,1.6},   // 0.30 < Pp < 0.60 GeV/c
														{0.2,0.6,0.9,1.6}    // 0.60 < Pp < 1.00 GeV/c
														},														
														
														{ // 0.6 < cosθμ < 1
														{0.2,0.4,0.6,0.9,1.6},   // 0.30 < Pp < 0.60 GeV/c
														{0.2,0.6,1.1,1.6}    // 0.60 < Pp < 1.00 GeV/c
														}		
																
													};																										
			
	//----------------------------------------//	

	// Scaling factor for multi dimensional analysis

	static std::map<TString,double> MultiDimScaleFactor =
	{
		{ "DeltaPTPlot", 1. },
		{ "DeltaAlphaTPlot", 1. },
		{ "DeltaAlpha3DqPlot", 1. },
		{ "MuonMomentumPlot", 1. },
		{ "MuonCosThetaPlot", 1. },
		{ "MuonCosThetaSingleBinPlot", 1. },
		{ "ProtonMomentumPlot", 1. },
		{ "ProtonCosThetaPlot", 1. },
		{ "ECalPlot", 1. },
		{ "DeltaPnPlot", 1. },
		
		{ "ECal_DeltaPT_0_00To0_30_DeltaAlphaT_0_00To90_00Plot", ( TwoDArrayNBinsDeltaPT.at(1) - TwoDArrayNBinsDeltaPT.at(0) ) * ( TwoDArrayNBinsDeltaAlphaT.at(1) - TwoDArrayNBinsDeltaAlphaT.at(0) ) },
		{ "ECal_DeltaPT_0_00To0_30_DeltaAlphaT_90_00To180_00Plot", ( TwoDArrayNBinsDeltaPT.at(1) - TwoDArrayNBinsDeltaPT.at(0) ) * ( TwoDArrayNBinsDeltaAlphaT.at(2) - TwoDArrayNBinsDeltaAlphaT.at(1) ) },
		{ "ECal_DeltaPT_0_30To1_00_DeltaAlphaT_0_00To90_00Plot", ( TwoDArrayNBinsDeltaPT.at(2) - TwoDArrayNBinsDeltaPT.at(1) )  * ( TwoDArrayNBinsDeltaAlphaT.at(1) - TwoDArrayNBinsDeltaAlphaT.at(0) ) },
		{ "ECal_DeltaPT_0_30To1_00_DeltaAlphaT_90_00To180_00Plot",  ( TwoDArrayNBinsDeltaPT.at(2) - TwoDArrayNBinsDeltaPT.at(1) ) * ( TwoDArrayNBinsDeltaAlphaT.at(2) - TwoDArrayNBinsDeltaAlphaT.at(1) ) },	
		
		{ "ECal_DeltaPn_0_00To0_30_DeltaAlpha3Dq_0_00To90_00Plot", ( TwoDArrayNBinsDeltaPn.at(1) - TwoDArrayNBinsDeltaPn.at(0) ) * ( TwoDArrayNBinsDeltaAlpha3Dq.at(1) - TwoDArrayNBinsDeltaAlpha3Dq.at(0) ) },
		{ "ECal_DeltaPn_0_00To0_30_DeltaAlpha3Dq_90_00To180_00Plot", ( TwoDArrayNBinsDeltaPn.at(1) - TwoDArrayNBinsDeltaPn.at(0) ) * ( TwoDArrayNBinsDeltaAlpha3Dq.at(2) - TwoDArrayNBinsDeltaAlpha3Dq.at(1) ) },
		{ "ECal_DeltaPn_0_30To1_00_DeltaAlpha3Dq_0_00To90_00Plot", ( TwoDArrayNBinsDeltaPn.at(2) - TwoDArrayNBinsDeltaPn.at(1) )  * ( TwoDArrayNBinsDeltaAlpha3Dq.at(1) - TwoDArrayNBinsDeltaAlpha3Dq.at(0) ) },
		{ "ECal_DeltaPn_0_30To1_00_DeltaAlpha3Dq_90_00To180_00Plot",  ( TwoDArrayNBinsDeltaPn.at(2) - TwoDArrayNBinsDeltaPn.at(1) ) * ( TwoDArrayNBinsDeltaAlpha3Dq.at(2) - TwoDArrayNBinsDeltaAlpha3Dq.at(1) ) },	
		
		{ "ECal_MuonCosTheta_Minus1_00To0_60_MuonMomentum_0_10To0_50Plot",  ( TwoDArrayNBinsMuonCosTheta.at(1) - TwoDArrayNBinsMuonCosTheta.at(0) ) * ( TwoDArrayNBinsMuonMomentum.at(1) - TwoDArrayNBinsMuonMomentum.at(0) ) },
		{ "ECal_MuonCosTheta_0_60To1_00_MuonMomentum_0_10To0_50Plot", ( TwoDArrayNBinsMuonCosTheta.at(2) - TwoDArrayNBinsMuonCosTheta.at(1) ) * ( TwoDArrayNBinsMuonMomentum.at(1) - TwoDArrayNBinsMuonMomentum.at(0) ) },
		{ "ECal_MuonCosTheta_Minus1_00To0_60_MuonMomentum_0_50To1_20Plot", ( TwoDArrayNBinsMuonCosTheta.at(1) - TwoDArrayNBinsMuonCosTheta.at(0) ) * ( TwoDArrayNBinsMuonMomentum.at(2) - TwoDArrayNBinsMuonMomentum.at(1) ) },
		{ "ECal_MuonCosTheta_0_60To1_00_MuonMomentum_0_50To1_20Plot",  ( TwoDArrayNBinsMuonCosTheta.at(2) - TwoDArrayNBinsMuonCosTheta.at(1) ) * ( TwoDArrayNBinsMuonMomentum.at(2) - TwoDArrayNBinsMuonMomentum.at(1) ) },

		{ "ECal_ProtonCosTheta_Minus1_00To0_60_ProtonMomentum_0_30To0_60Plot", ( TwoDArrayNBinsProtonCosTheta.at(1) - TwoDArrayNBinsProtonCosTheta.at(0) ) * ( TwoDArrayNBinsProtonMomentum.at(1) - TwoDArrayNBinsProtonMomentum.at(0) ) },
		{ "ECal_ProtonCosTheta_0_60To1_00_ProtonMomentum_0_30To0_60Plot",  ( TwoDArrayNBinsProtonCosTheta.at(2) - TwoDArrayNBinsProtonCosTheta.at(1) ) * ( TwoDArrayNBinsProtonMomentum.at(1) - TwoDArrayNBinsProtonMomentum.at(0) ) },
		{ "ECal_ProtonCosTheta_Minus1_00To0_60_ProtonMomentum_0_60To1_00Plot", ( TwoDArrayNBinsProtonCosTheta.at(1) - TwoDArrayNBinsProtonCosTheta.at(0) ) * ( TwoDArrayNBinsProtonMomentum.at(2) - TwoDArrayNBinsProtonMomentum.at(1) ) },
		{ "ECal_ProtonCosTheta_0_60To1_00_ProtonMomentum_0_60To1_00Plot", ( TwoDArrayNBinsProtonCosTheta.at(2) - TwoDArrayNBinsProtonCosTheta.at(1) ) * ( TwoDArrayNBinsProtonMomentum.at(2) - TwoDArrayNBinsProtonMomentum.at(1) ) },

		{ "SerialECal_DeltaPTDeltaAlphaTPlot", 1. },
		{ "SerialECal_DeltaPnDeltaAlpha3DqPlot", 1. },
		{ "SerialECal_MuonCosThetaMuonMomentumPlot", 1. },
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot", 1. },
	};	
	
	static std::map<TString,vector< vector< vector<double> > > > map_to_3d_bin =
	{
		{ "SerialECal_DeltaPTDeltaAlphaTPlot", TwoDArrayNBinsECalInDeltaPTDeltaAlphaTSlices  },			
		{ "SerialECal_DeltaPnDeltaAlpha3DqPlot", TwoDArrayNBinsECalInDeltaPnDeltaAlpha3DqSlices },			
		{ "SerialECal_MuonCosThetaMuonMomentumPlot", TwoDArrayNBinsECalInMuonCosThetaMuonMomentumSlices },			
		{ "SerialECal_ProtonCosThetaProtonMomentumPlot", TwoDArrayNBinsECalInProtonCosThetaProtonMomentumSlices },			
	
	};


	//----------------------------------------//
	
	// Interaction labels
	
	//const std::vector<int> InteBreakColors{kBlack,kBlue-5,kYellow+1,kOrange+7,kRed+1,kBlue};
	const std::vector<int> InteBreakColors{kBlack,kAzure-4,kOrange-3,kGreen+1,kRed+1,kBlue};		
	std::vector<TString> InteractionLabels = {"","QE","MEC","RES","DIS","COH"};
	const int NInte = InteractionLabels.size();
	
	//----------------------------------------//		

}
#endif
