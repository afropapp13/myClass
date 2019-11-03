#ifndef Unfold_H
#define Unfold_H

#include <TH1D.h>
#include <TH2D.h>

class Unfold {

	public:
		Unfold(TH2D* response, TH1D* dataHist,TString number);
		TH1D* GetUnfoldedHist(){return unfoldedH_;};
		TH2D* GetErrMatrix(){return ErrorMatrixInput_;};
		TH2D* GetCorMatrix(){return CorMatrixInput_;};

	private:
		TH2D* CorMatrixInput_;
		TH2D* ErrorMatrixInput_;
		TH1D* unfoldedH_;
		//TMatrixD covMatrix;

};

#endif
