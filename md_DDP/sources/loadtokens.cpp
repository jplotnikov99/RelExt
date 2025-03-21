///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"

namespace DT{
	void ModelInfo::load_tokens(){
		using namespace PAR;
		token1 = ((2*pow(m22,2) - 2*pow(MH3,2) + lam8*pow(vs,2))*pow(cos(aDM),2))/pow(v,2) - lam8*pow(sin(aDM),2);
		token2 = 3;
		token3 = pow(MH1,2);
		token4 = (2*pow(m22,2) - 2*pow(MH3,2) + lam8*pow(vs,2))*cos(aDM) - lam8*v*vs*sin(aDM);
		token5 = vs*pow(cos(aDM),3) + v*pow(sin(aDM),3);
		token6 = 2*pow(MH1,2) + pow(MH2,2);
		token7 = cos(aDM);
		token8 = sin(aDM);
		token9 = vs*cos(aDM) - v*sin(aDM);
		token10 = 2*(m22 - MH3)*(m22 + MH3)*sin(aDM) + lam8*vs*(v*cos(aDM) + vs*sin(aDM));
		token11 = -1;
		token12 = pow((2*pow(m22,2) - 2*pow(MH3,2) + lam8*pow(vs,2))*cos(aDM) - lam8*v*vs*sin(aDM),2);
		token13 = 1;
		token14 = pow(v,2);
		token15 = vs;
		token16 = 2*pow(m22,2) - 2*pow(MH3,2) + lam8*(pow(v,2) + pow(vs,2));
		token17 = pow(MH1,2) + 2*pow(MH2,2);
		token18 = v*cos(aDM) + vs*sin(aDM);
		token19 = -(lam8*pow(cos(aDM),2)) + ((2*pow(m22,2) - 2*pow(MH3,2) + lam8*pow(vs,2))*pow(sin(aDM),2))/pow(v,2);
		token20 = -3;
		token21 = pow(MH2,2);
		token22 = v*pow(cos(aDM),3) - vs*pow(sin(aDM),3);
		token23 = pow(2*(m22 - MH3)*(m22 + MH3)*sin(aDM) + lam8*vs*(v*cos(aDM) + vs*sin(aDM)),2);
		token24 = pow(EL,2);
		token25 = pow(pow(CW,2) + pow(SW,2),2);
		token26 = 2;
		token27 = pow(CW,2);
		token28 = pow(SW,2);
		token29 = 4;
		token30 = 0.25;
		token31 = pow(SW,-2);
		token32 = 0.5;
		token33 = GH;
		token34 = v;
		token35 = Me;
		token36 = MM;
		token37 = MTA;
		token38 = MU;
		token39 = MC;
		token40 = MT;
		token41 = MD;
		token42 = MS;
		token43 = MB;
		token44 = EL;
		token45 = MA0 - MH3;
		token46 = MA0 + MH3;
		token47 = pow(CW,2) + pow(SW,2);
		token48 = pow(EL,3);
		token49 = pow(pow(CW,2) + pow(SW,2),3);
		token50 = (2*pow(m22,2) - 2*pow(MA0,2) + lam8*pow(vs,2))*cos(aDM) - lam8*v*vs*sin(aDM);
		token51 = CW;
		token52 = SW;
		token53 = pow(CW,3);
		token54 = pow(SW,3);
		token55 = 2*(m22 - MA0)*(m22 + MA0)*sin(aDM) + lam8*vs*(v*cos(aDM) + vs*sin(aDM));
		token56 = 1/SW;
		token57 = 1/v;
		token58 = 1/CW;
		token59 = MH3 - MHch;
		token60 = MH3 + MHch;
		token61 = -0.5;
		token62 = (2*pow(m22,2) - 2*pow(MHch,2) + lam8*pow(vs,2))*cos(aDM) - lam8*v*vs*sin(aDM);
		token63 = 2*(m22 - MHch)*(m22 + MHch)*sin(aDM) + lam8*vs*(v*cos(aDM) + vs*sin(aDM));
		token64 = -pow(MH3,2) + pow(MHch,2);
		token65 = -0.25;
		token66 = CW - SW;
		token67 = CW + SW;
		token68 = 1/sqrt(2);
		token69 = CKM1x1;
		token70 = CKM1x2;
		token71 = CKM1x3;
		token72 = CKM2x1;
		token73 = CKM2x2;
		token74 = CKM2x3;
		token75 = CKM3x1;
		token76 = CKM3x2;
		token77 = CKM3x3;
		token78 = ((2*pow(m22,2) - 2*pow(MA0,2) + lam8*pow(vs,2))*pow(cos(aDM),2))/pow(v,2) - lam8*pow(sin(aDM),2);
		token79 = pow((2*pow(m22,2) - 2*pow(MA0,2) + lam8*pow(vs,2))*cos(aDM) - lam8*v*vs*sin(aDM),2);
		token80 = 2*pow(m22,2) - 2*pow(MA0,2) + lam8*(pow(v,2) + pow(vs,2));
		token81 = -(lam8*pow(cos(aDM),2)) + ((2*pow(m22,2) - 2*pow(MA0,2) + lam8*pow(vs,2))*pow(sin(aDM),2))/pow(v,2);
		token82 = pow(2*(m22 - MA0)*(m22 + MA0)*sin(aDM) + lam8*vs*(v*cos(aDM) + vs*sin(aDM)),2);
		token83 = -pow(MA0,2) + pow(MHch,2);
		token84 = MA0 - MHch;
		token85 = MA0 + MHch;
		token86 = sqrt(2);
		token87 = ((2*pow(m22,2) - 2*pow(MHch,2) + lam8*pow(vs,2))*pow(cos(aDM),2))/pow(v,2) - lam8*pow(sin(aDM),2);
		token88 = pow((2*pow(m22,2) - 2*pow(MHch,2) + lam8*pow(vs,2))*cos(aDM) - lam8*v*vs*sin(aDM),2);
		token89 = 2*pow(m22,2) - 2*pow(MHch,2) + lam8*(pow(v,2) + pow(vs,2));
		token90 = -(lam8*pow(cos(aDM),2)) + ((2*pow(m22,2) - 2*pow(MHch,2) + lam8*pow(vs,2))*pow(sin(aDM),2))/pow(v,2);
		token91 = pow(2*(m22 - MHch)*(m22 + MHch)*sin(aDM) + lam8*vs*(v*cos(aDM) + vs*sin(aDM)),2);
		token92 = pow(pow(CW,2) - pow(SW,2),2);
		token93 = pow(CW,-2);
		token94 = 0.125;
		token95 = pow(CW,4) - pow(SW,4);
		token96 = 0.6666666666666666;
		token97 = 0.041666666666666664;
		token98 = 0.3333333333333333;
		token99 = -0.041666666666666664;
	}
}
