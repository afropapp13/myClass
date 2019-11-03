#include "Unfold.h"
#include <TUnfoldSys.h>
#include <TString.h>

//some standard C++ includes
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

Unfold::Unfold(TH2D* response, TH1D* dataHist,TString number) { 

	TUnfoldSys unfold(response,TUnfold::kHistMapOutputVert,TUnfold::kRegModeNone);
	double scaleBias = 0.0;
	unfold.SetInput(dataHist, scaleBias);
	double tau = 0.0001;
	unfold.DoUnfold(tau);
	int NbinGen = response->GetNbinsY();
	Int_t *binMap = new Int_t[NbinGen+2];
	for(Int_t i=1;i<=NbinGen;i++) binMap[i]=i;
	binMap[0]=-1; // try 0,1
	binMap[NbinGen+1]=-1;
	const TArrayD*	TBinArray =response->GetYaxis()->GetXbins();
	const Double_t* TheArray= TBinArray->GetArray();
	TString dataName = dataHist->GetName();
	unfoldedH_ = new TH1D(dataName+"unfolded",dataName+"unfolded",NbinGen,TheArray);
	unfold.GetOutput(unfoldedH_,binMap);

	// Get Error Matrix

	float MaxY = response->GetYaxis()->GetXmax(); 
	float MinY = response->GetYaxis()->GetXmin();
	ErrorMatrixInput_ = new TH2D("ErrInput"+number,"ErrInput",NbinGen,MinY,MaxY,NbinGen,MinY,MaxY);
	unfold.GetEmatrixInput(ErrorMatrixInput_,binMap);
	//unfold.GetEmatrixTotal(ErrorMatrixInput_,binMap) ;

	// Get Covariant Matrix
	CorMatrixInput_ = new TH2D("CorInput"+number,"CorInput",NbinGen,TheArray,NbinGen,TheArray);
	unfold.GetRhoIJ(CorMatrixInput_,binMap);

}
