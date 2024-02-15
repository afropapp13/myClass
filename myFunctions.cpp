#include "TMath.h"
#include <TH1D.h>
#include <TH2D.h>
#include <TMatrixD.h>

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cmath>

#include "Constants.h"

using namespace std;
using namespace Constants;

//----------------------------------------//

double FindOneDimHistoMaxValueBin(TH1D* h){

	int NBins = h->GetXaxis()->GetNbins();
	double HistoMax = -999.;	
	int bin_max = -1;

	for (int ibin = 1; ibin<= NBins; ibin++) {

		double LocalMax = h->GetBinContent(ibin);
		if (LocalMax > HistoMax) { HistoMax = LocalMax; bin_max = ibin; }

	}

	double bin_center_max = h->GetBinCenter(bin_max);

	return bin_center_max;

}

//----------------------------------------//

double FindTwoDimHistoMaxValue(TH2D* h){

	int NXBins = h->GetXaxis()->GetNbins();
	int NYBins = h->GetYaxis()->GetNbins();	
	double StartHistoMax = -9999.;
	double HistoMax = StartHistoMax;	

	for (int xbin = 1; xbin <= NXBins; xbin++) {

		for (int ybin = 1; ybin <= NYBins; ybin++) {		

			double LocalMax = h->GetBinContent(xbin,ybin);
			if (LocalMax > HistoMax && !isinf(LocalMax) ) { HistoMax = LocalMax; }

		}

	}

	if (HistoMax == StartHistoMax) { cout << "HistoMax = " << HistoMax << endl; }

	return HistoMax;

}

//----------------------------------------//

double FindTwoDimHistoMinValue(TH2D* h){

	int NXBins = h->GetXaxis()->GetNbins();
	int NYBins = h->GetYaxis()->GetNbins();	
	double StartHistoMin = 999999.;
	double HistoMin = StartHistoMin;	

	for (int xbin = 1; xbin<= NXBins; xbin++) {

		for (int ybin = 1; ybin<= NYBins; ybin++) {		

			double LocalMin = h->GetBinContent(xbin,ybin);
			if (LocalMin < HistoMin) { HistoMin = LocalMin; }

		}

	}

	if (HistoMin == StartHistoMin) { cout << "HistoMin = " << HistoMin << endl; }
	return HistoMin;

}

//----------------------------------------//

TString to_string_with_precision(double a_value, const int n = 3)
{
    std::ostringstream out;
    out.precision(n);
    out << std::fixed << a_value;
    return TString(out.str());
}

//----------------------------------------//

void CalcChiSquared(TH1D* h_model, TH1D* h_data, TH2D* cov, double &chi, int &ndof, double &pval, double &sigma) {

	// Clone them so we can scale them 

	TH1D* h_model_clone = (TH1D*)h_model->Clone();
	TH1D* h_data_clone  = (TH1D*)h_data->Clone();
	TH2D* h_cov_clone   = (TH2D*)cov->Clone();
	int NBins = h_cov_clone->GetNbinsX();

	// Getting covariance matrix in TMatrix form

	TMatrixD cov_m;
	cov_m.Clear();
	cov_m.ResizeTo(NBins,NBins);

	// loop over rows

	for (int i = 0; i < NBins; i++) {			

		// loop over columns

		for (int j = 0; j < NBins; j++) {

			cov_m[i][j] = h_cov_clone->GetBinContent(i+1, j+1);
 
		}
	
	}

	TMatrixD copy_cov_m = cov_m;

	// Inverting the covariance matrix
	TMatrixD inverse_cov_m = cov_m.Invert();

	// Calculating the chi2 = Summation_ij{ (x_i - mu_j)*E_ij^(-1)*(x_j - mu_j)  }
	// x = data, mu = model, E^(-1) = inverted covariance matrix 

	chi = 0.;
	
	for (int i = 0; i < NBins; i++) {

		//double XWidth = h_data_clone->GetBinWidth(i+1);

		for (int j = 0; j < NBins; j++) {

			//double YWidth = h_data_clone->GetBinWidth(i+1);

			double diffi = h_data_clone->GetBinContent(i+1) - h_model_clone->GetBinContent(i+1);
			double diffj = h_data_clone->GetBinContent(j+1) - h_model_clone->GetBinContent(j+1);
			double LocalChi = diffi * inverse_cov_m[i][j] * diffj; 
			chi += LocalChi;
		}

	}

	ndof = h_data_clone->GetNbinsX();
	pval = TMath::Prob(chi, ndof);
	sigma = TMath::Sqrt( TMath::ChisquareQuantile( 1-pval, 1 ) ); 

	delete h_model_clone;
	delete h_data_clone;
	delete h_cov_clone;

}

//----------------------------------------//

double PeLEE_ReturnBeamOnRunPOT(TString Run) {

	double DataPOT = -99.;

	if (Run == "Run1") { DataPOT = Fulltor860_wcut_Run1 ; }
	if (Run == "Run2") { DataPOT = Fulltor860_wcut_Run2 ; }
	if (Run == "Run3") { DataPOT = Fulltor860_wcut_Run3 ; }
	if (Run == "Run4a") { DataPOT = Fulltor860_wcut_Run4a ; }
	if (Run == "Run4b") { DataPOT = Fulltor860_wcut_Run4b ; }
	if (Run == "Run4c") { DataPOT = Fulltor860_wcut_Run4c ; }	
	if (Run == "Run4d") { DataPOT = Fulltor860_wcut_Run4d ; }		
	if (Run == "Run5") { DataPOT = Fulltor860_wcut_Run5 ; }
	if (Run == "Combined") { DataPOT = Fulltor860_wcut_Combined ; }

	return DataPOT;

}

//----------------------------------------//

double round(double var,int acc = 0) 
{ 
    double value = (int)(var * TMath::Power(10.,acc) + .5); 
    return (double)value / TMath::Power(10.,acc); 
} 

//----------------------------------------//

TString ToString(double num) {

	std::ostringstream start;
	start << num;
	string start1 = start.str();
	return start1;

}

// --------------------------------------------------------------------------------------------------------------------------------------------


