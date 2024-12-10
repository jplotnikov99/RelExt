///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"
namespace DT{
	void ModelInfo::load_parameters(){
		FAGS = sqrt(4*M_PI*aS); gs = FAGS; G = FAGS;
		MW = pow(pow(MZ,2)/2.+pow(-(aEWM1*Pi*pow(2,-0.5)*pow(Gf,-1)*pow(MZ,2))+pow(MZ,4)/4.,0.5),0.5);
		EE = 2*pow(aEWM1,0.5)*pow(Pi,0.5);
		CW2 = pow(MW,2)*pow(MZ,-2);
		SW2 = 1-CW2;
		CW = pow(CW2,0.5);
		SW = pow(SW2,0.5);
		g1 = EE*pow(CW,-1);
		g2 = EE*pow(SW,-1);
		v = 0.8408964152537146*pow(Gf,-0.5);
		RR1x1 = cos(alph1)*cos(alph2);
		RR1x2 = cos(alph2)*sin(alph1);
		RR1x3 = sin(alph2);
		RR2x1 = -(cos(alph3)*sin(alph1))-cos(alph1)*sin(alph2)*sin(alph3);
		RR2x2 = cos(alph1)*cos(alph3)-sin(alph1)*sin(alph2)*sin(alph3);
		RR2x3 = cos(alph2)*sin(alph3);
		RR3x1 = -(cos(alph1)*cos(alph3)*sin(alph2))+sin(alph1)*sin(alph3);
		RR3x2 = -(cos(alph3)*sin(alph1)*sin(alph2))-cos(alph1)*sin(alph3);
		RR3x3 = cos(alph2)*cos(alph3);
		mH3 = pow(-((RR1x1*RR1x2*pow(mH1,2)+RR2x1*RR2x2*pow(mH2,2))*pow(RR3x1,-1)*pow(RR3x2,-1)),0.5);
		m11sq = -0.5*pow(mHsm,2);
		L1 = pow(mHsm,2)*pow(v,-2);
		L3 = 2*(-m22sq+pow(mHc,2))*pow(v,-2);
		L4 = pow(RR1x3-2*RR2x1*RR3x2,-1)*(2*(mH1-mH3)*(mH1+mH3)*RR1x2*RR3x2*RR3x3+2*RR1x2*RR2x2*RR2x3*(-pow(mH1,2)+pow(mH2,2))+RR1x3*(pow(mH2,2)+pow(mH3,2)-2*pow(mHc,2))-2*RR2x1*RR3x2*(pow(mH2,2)+pow(mH3,2)-2*pow(mHc,2))+RR1x3*(-pow(mH1,2)+pow(mH2,2))*pow(RR2x3,2)+(mH1-mH3)*(mH1+mH3)*RR1x3*pow(RR3x3,2))*pow(v,-2);
		L5 = RR1x3*pow(RR1x3-2*RR2x1*RR3x2,-1)*(pow(mH3,2)+pow(mH2,2)*(-1+pow(RR2x3,2))-pow(mH1,2)*pow(RR2x3,2)+(mH1-mH3)*(mH1+mH3)*pow(RR3x3,2))*pow(v,-2);
		L7 = -2*pow(RR1x3-2*RR2x1*RR3x2,-1)*(mssq*(RR1x3-2*RR2x1*RR3x2)+RR2x3*(2*RR1x2*RR2x2+RR1x3*RR2x3)*pow(mH2,2)+(RR1x1*RR3x1-RR1x2*RR3x2)*RR3x3*pow(mH3,2)-pow(mH1,2)*(-2*RR2x1*RR3x2+2*RR1x2*(RR2x2*RR2x3-RR3x2*RR3x3)+RR1x3*(1+pow(RR2x3,2)-pow(RR3x3,2))))*pow(v,-2);
		Treal = RR1x1*((-pow(mH1,2)+pow(mH2,2))*pow(RR2x1,2)+(mH1-mH3)*(mH1+mH3)*pow(RR3x1,2))*pow(RR1x3-2*RR2x1*RR3x2,-1)*pow(v,-1);
		Timag = RR1x2*((-pow(mH1,2)+pow(mH2,2))*pow(RR2x2,2)+(mH1-mH3)*(mH1+mH3)*pow(RR3x2,2))*pow(RR1x3-2*RR2x1*RR3x2,-1)*pow(v,-1);
		CKM1x1 = 0.97428;
		CKM1x2 = 0.2253;
		CKM1x3 = 0.00347;
		CKM2x1 = 0.2252;
		CKM2x2 = 0.97345;
		CKM2x3 = 0.041;
		CKM3x1 = 0.00862;
		CKM3x2 = 0.0403;
		CKM3x3 = 0.999152;
		EL = EE;
	}
}
