///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"
namespace DT{
	void ModelInfo::load_parameters(){
		using namespace PAR;
		FAGS = sqrt(4*M_PI*aS); gs = FAGS; G = FAGS;
		yms = MS;
		ymc = MC;
		ymb = MB;
		ymt = MT;
		aEW = pow(aEWM1,-1);
		MW = pow(pow(MZ,2)/2.+pow(-(aEW*Pi*pow(2,-0.5)*pow(Gf,-1)*pow(MZ,2))+pow(MZ,4)/4.,0.5),0.5);
		sw2 = 1-pow(MW,2)*pow(MZ,-2);
		EE = 2*pow(aEW,0.5)*pow(Pi,0.5);
		cw = pow(1-sw2,0.5);
		sw = pow(sw2,0.5);
		gw = EE*pow(sw,-1);
		g1 = EE*pow(cw,-1);
		vev = 2*MW*sw*pow(EE,-1);
		ye = yme*pow(2,0.5)*pow(vev,-1);
		ym = ymm*pow(2,0.5)*pow(vev,-1);
		ytau = ymtau*pow(2,0.5)*pow(vev,-1);
		yup = ymup*pow(2,0.5)*pow(vev,-1);
		yc = ymc*pow(2,0.5)*pow(vev,-1);
		yt = ymt*pow(2,0.5)*pow(vev,-1);
		ydo = ymdo*pow(2,0.5)*pow(vev,-1);
		ys = yms*pow(2,0.5)*pow(vev,-1);
		yb = ymb*pow(2,0.5)*pow(vev,-1);
		c12 = pow(1-pow(s12,2),0.5);
		c23 = pow(1-pow(s23,2),0.5);
		c13 = pow(1-pow(s13,2),0.5);
		CKM1x1 = c12*c13;
		CKM1x2 = c13*s12;
		CKM1x3 = s13;
		CKM2x1 = -(c23*s12)-c12*s13*s23;
		CKM2x2 = c12*c23-s12*s13*s23;
		CKM2x3 = c13*s23;
		CKM3x1 = -(c12*c23*s13)+s12*s23;
		CKM3x2 = -(c23*s12*s13)-c12*s23;
		CKM3x3 = c13*c23;
		lamH = (pow(MH,2)*pow(vev,-2))/2.;
		muH = pow(lamH*pow(vev,2),0.5);
		MchiM = Mchi;
		Mchi0 = Mchi;
		muPQ = pow(pow(MphiQ,2)-(lamHPQ*pow(vev,2))/2.,0.5);
		muPL = pow(2,-0.5)*pow(pow(MA0,2)+pow(MS0,2)-lamHPL*pow(vev,2),0.5);
		lamHPLprime = -lamHPL+lamHS;
		muPLprime = pow(2,-0.5)*pow(-pow(MA0,2)+pow(MS0,2)-lamHPLprime*pow(vev,2),0.5);
		EL = EE;
	}
}
