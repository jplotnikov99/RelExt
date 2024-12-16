///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"
namespace DT{
	void ModelInfo::load_parameters(){
		FAGS = sqrt(4*M_PI*aS); gs = FAGS; G = FAGS;
		MZ = MMZ;
		MW = MMW;
		MC = MMC;
		MB = MMB;
		MT = MMT;
		EE = 2*pow(aEWM1,0.5)*pow(Pi,0.5);
		CW2 = pow(MW,2)*pow(MZ,-2);
		SW2 = 1-CW2;
		CW = pow(CW2,0.5);
		SW = pow(SW2,0.5);
		g1 = EE*pow(CW,-1);
		g2 = EE*pow(SW,-1);
		v = 0.8408964152537146*pow(Gf,-0.5);
		CKM1x1 = 0.97428;
		CKM1x2 = 0.2253;
		CKM1x3 = 0.00347;
		CKM2x1 = 0.2252;
		CKM2x2 = 0.97345;
		CKM2x3 = 0.041;
		CKM3x1 = 0.00862;
		CKM3x2 = 0.0403;
		CKM3x3 = 0.999152;
		MH1 = mmH1;
		MH2 = mmH2;
		MH3 = mmH3;
		MA0 = mmA0;
		MHch = mmHch;
		vs = 100.;
		lam2 = pow(v,-2)*(pow(MH1,2)*pow(cos(aDM),2)+pow(MH2,2)*pow(sin(aDM),2));
		lam3 = pow(v,-2)*(2*(-pow(m11,2)+pow(MHch,2))-lam7*pow(vs,2));
		lam4 = (pow(MA0,2)+pow(MH3,2)-2*pow(MHch,2))*pow(v,-2);
		lam5 = (-pow(MA0,2)+pow(MH3,2))*pow(v,-2);
		lam6 = pow(vs,-2)*(pow(MH2,2)*pow(cos(aDM),2)+pow(MH1,2)*pow(sin(aDM),2));
		lam8 = cos(aDM)*(pow(MH1,2)-pow(MH2,2))*pow(v,-1)*pow(vs,-1)*sin(aDM);
		m22 = pow(2,-0.5)*pow(-(lam2*pow(v,2))-lam8*pow(vs,2),0.5);
		ms = pow(2,-0.5)*pow(-(lam8*pow(v,2))-lam6*pow(vs,2),0.5);
		GH = -0.08333333333333333*(pow(G,2)*(1+(13*pow(mmH1,6)*pow(MMT,-6))/16800.+(pow(mmH1,4)*pow(MMT,-4))/168.+(7*pow(mmH1,2)*pow(MMT,-2))/120.)*pow(Pi,-2)*pow(v,-1));
		EL = EE;
	}
}
