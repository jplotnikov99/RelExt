///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"
namespace DT{
	void Model::load_parameters(){
		FAGS = sqrt(4*M_PI*aS); gs = FAGS; G = FAGS;
		yms = MS;
		ymc = MC;
		ymb = MB;
		ymt = MT;
		aEW = pow(aEWM1,-1);
		sw2 = 1-pow(MW,2)*pow(MZ,-2);
		EE = 2*pow(aEW,0.5)*pow(Pi,0.5);
		cw = pow(1-sw2,0.5);
		sw = pow(sw2,0.5);
		gw = EE*pow(sw,-1);
		g1 = EE*pow(cw,-1);
		vev = 2*MW*pow(gw,-1);
		delta2 = -((-pow(MH,2)+pow(MS1,2))*pow(svev,-1)*pow(vev,-1)*sin(2*alpha));
		lam = (pow(MH,2)+cos(2*alpha)*(pow(MH,2)-pow(MS1,2))+pow(MS1,2))*pow(vev,-2);
		muH = pow(2,-0.5)*pow(-(delta2*pow(svev,2))-lam*pow(vev,2),0.5);
		ye = yme*pow(2,0.5)*pow(vev,-1);
		ym = ymm*pow(2,0.5)*pow(vev,-1);
		ytau = ymtau*pow(2,0.5)*pow(vev,-1);
		yup = ymup*pow(2,0.5)*pow(vev,-1);
		yc = ymc*pow(2,0.5)*pow(vev,-1);
		yt = ymt*pow(2,0.5)*pow(vev,-1);
		ydo = ymdo*pow(2,0.5)*pow(vev,-1);
		ys = yms*pow(2,0.5)*pow(vev,-1);
		yb = ymb*pow(2,0.5)*pow(vev,-1);
		CKM1x1 = cos(cabi);
		CKM1x2 = sin(cabi);
		CKM1x3 = 0;
		CKM2x1 = -sin(cabi);
		CKM2x2 = cos(cabi);
		CKM2x3 = 0;
		CKM3x1 = 0;
		CKM3x2 = 0;
		CKM3x3 = 1;
		d2 = (pow(MH,2)+pow(MS1,2)+cos(2*alpha)*(-pow(MH,2)+pow(MS1,2)))*pow(svev,-2);
		b1 = -pow(MA1,2);
		b2 = (2*pow(MA1,2)-pow(MH,2)+cos(2*alpha)*(pow(MH,2)-pow(MS1,2))-pow(MS1,2)-vev*(pow(MH,2)-pow(MS1,2))*pow(svev,-1)*sin(2*alpha))/2.;
		I1a11 = CKM1x1*ydo;
		I1a12 = CKM2x1*ydo;
		I1a13 = CKM3x1*ydo;
		I1a21 = CKM1x2*ys;
		I1a22 = CKM2x2*ys;
		I1a23 = CKM3x2*ys;
		I1a31 = CKM1x3*yb;
		I1a32 = CKM2x3*yb;
		I1a33 = CKM3x3*yb;
		I2a11 = CKM1x1*yup;
		I2a12 = CKM2x1*yc;
		I2a13 = CKM3x1*yt;
		I2a21 = CKM1x2*yup;
		I2a22 = CKM2x2*yc;
		I2a23 = CKM3x2*yt;
		I2a31 = CKM1x3*yup;
		I2a32 = CKM2x3*yc;
		I2a33 = CKM3x3*yt;
		I3a11 = CKM1x1*yup;
		I3a12 = CKM1x2*yup;
		I3a13 = CKM1x3*yup;
		I3a21 = CKM2x1*yc;
		I3a22 = CKM2x2*yc;
		I3a23 = CKM2x3*yc;
		I3a31 = CKM3x1*yt;
		I3a32 = CKM3x2*yt;
		I3a33 = CKM3x3*yt;
		I4a11 = CKM1x1*ydo;
		I4a12 = CKM1x2*ys;
		I4a13 = CKM1x3*yb;
		I4a21 = CKM2x1*ydo;
		I4a22 = CKM2x2*ys;
		I4a23 = CKM2x3*yb;
		I4a31 = CKM3x1*ydo;
		I4a32 = CKM3x2*ys;
		I4a33 = CKM3x3*yb;
		EL = EE;
	}
}
