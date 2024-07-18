///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"

namespace DT{
	void Model::load_tokens(){
		token1 = -((L3 + L4 + L5)*pow(RR1x1,2)) - (L3 + L4 - L5)*pow(RR1x2,2) - L7*pow(RR1x3,2);
		token2 = -3;
		token3 = L1;
		token4 = v;
		token5 = -2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 + L4 + L5)*pow(RR1x1,2)*v + (L3 + L4 - L5)*pow(RR1x2,2)*v + L7*pow(RR1x3,2)*v;
		token6 = -1;
		token7 = pow(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 + L4 + L5)*pow(RR1x1,2)*v + (L3 + L4 - L5)*pow(RR1x2,2)*v + L7*pow(RR1x3,2)*v,2);
		token8 = pow(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v),2);
		token9 = pow(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v),2);
		token10 = 1;
		token11 = EL;
		token12 = pow(CW,2) + pow(SW,2);
		token13 = RR1x1*RR1x3*Timag + RR1x2*RR1x3*Treal + L5*RR1x1*RR1x2*v;
		token14 = RR1x2*RR2x1 - RR1x1*RR2x2;
		token15 = -(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v);
		token16 = RR1x2*RR3x1 - RR1x1*RR3x2;
		token17 = -(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v);
		token18 = CW;
		token19 = SW;
		token20 = 2;
		token21 = pow(EL,2);
		token22 = pow(RR1x1,2) + pow(RR1x2,2);
		token23 = pow(pow(CW,2) + pow(SW,2),2);
		token24 = pow(RR1x2*RR2x1 - RR1x1*RR2x2,2);
		token25 = pow(RR1x2*RR3x1 - RR1x1*RR3x2,2);
		token26 = pow(CW,2);
		token27 = pow(SW,2);
		token28 = 4;
		token29 = 0.5;
		token30 = 1/SW;
		token31 = Me;
		token32 = 1/v;
		token33 = MM;
		token34 = MTA;
		token35 = MU;
		token36 = MC;
		token37 = MT;
		token38 = MD;
		token39 = MS;
		token40 = MB;
		token41 = -((L3 + L4 + L5)*RR1x1*RR2x1) - (L3 + L4 - L5)*RR1x2*RR2x2 - L7*RR1x3*RR2x3;
		token42 = -2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 + L4 + L5)*pow(RR2x1,2)*v + (L3 + L4 - L5)*pow(RR2x2,2)*v + L7*pow(RR2x3,2)*v;
		token43 = -(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v);
		token44 = RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v;
		token45 = pow(EL,3);
		token46 = pow(pow(CW,2) + pow(SW,2),3);
		token47 = RR2x2*RR3x1 - RR2x1*RR3x2;
		token48 = pow(CW,3);
		token49 = pow(SW,3);
		token50 = RR1x1*RR2x1 + RR1x2*RR2x2;
		token51 = 1/CW;
		token52 = -((L3 + L4 + L5)*RR1x1*RR3x1) - (L3 + L4 - L5)*RR1x2*RR3x2 - L7*RR1x3*RR3x3;
		token53 = -2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)*pow(RR3x1,2)*v + (L3 + L4 - L5)*pow(RR3x2,2)*v + L7*pow(RR3x3,2)*v;
		token54 = RR1x3*RR3x1*Timag + RR1x1*RR3x3*Timag + RR1x3*RR3x2*Treal + RR1x2*RR3x3*Treal + L5*RR1x2*RR3x1*v + L5*RR1x1*RR3x2*v;
		token55 = RR1x1*RR3x1 + RR1x2*RR3x2;
		token56 = -(RR2x2*RR3x1) + RR2x1*RR3x2;
		token57 = L3;
		token58 = -0.5;
		token59 = CW - SW;
		token60 = CW + SW;
		token61 = 1/sqrt(2);
		token62 = sqrt(2);
		token63 = CKM1x1;
		token64 = CKM1x2;
		token65 = CKM1x3;
		token66 = CKM2x1;
		token67 = CKM2x2;
		token68 = CKM2x3;
		token69 = CKM3x1;
		token70 = CKM3x2;
		token71 = CKM3x3;
		token72 = -((L3 + L4 + L5)*pow(RR2x1,2)) - (L3 + L4 - L5)*pow(RR2x2,2) - L7*pow(RR2x3,2);
		token73 = pow(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 + L4 + L5)*pow(RR2x1,2)*v + (L3 + L4 - L5)*pow(RR2x2,2)*v + L7*pow(RR2x3,2)*v,2);
		token74 = pow(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v),2);
		token75 = RR2x1*RR2x3*Timag + RR2x2*RR2x3*Treal + L5*RR2x1*RR2x2*v;
		token76 = pow(RR2x1,2) + pow(RR2x2,2);
		token77 = pow(RR2x2*RR3x1 - RR2x1*RR3x2,2);
		token78 = -((L3 + L4 + L5)*RR2x1*RR3x1) - (L3 + L4 - L5)*RR2x2*RR3x2 - L7*RR2x3*RR3x3;
		token79 = RR2x3*RR3x1*Timag + RR2x1*RR3x3*Timag + RR2x3*RR3x2*Treal + RR2x2*RR3x3*Treal + L5*RR2x2*RR3x1*v + L5*RR2x1*RR3x2*v;
		token80 = RR2x1*RR3x1 + RR2x2*RR3x2;
		token81 = -(RR1x2*RR2x1) + RR1x1*RR2x2;
		token82 = -((L3 + L4 + L5)*pow(RR3x1,2)) - (L3 + L4 - L5)*pow(RR3x2,2) - L7*pow(RR3x3,2);
		token83 = pow(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)*pow(RR3x1,2)*v + (L3 + L4 - L5)*pow(RR3x2,2)*v + L7*pow(RR3x3,2)*v,2);
		token84 = RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal + L5*RR3x1*RR3x2*v;
		token85 = pow(RR3x1,2) + pow(RR3x2,2);
		token86 = -(RR1x2*RR3x1) + RR1x1*RR3x2;
		token87 = pow(v,2);
		token88 = pow(L3,2);
		token89 = pow(pow(CW,2) - pow(SW,2),2);
		token90 = 0.25;
		token91 = pow(CW,-2);
		token92 = pow(SW,-2);
		token93 = 0.125;
		token94 = pow(CW,4) - pow(SW,4);
		token95 = 0.6666666666666666;
		token96 = 0.041666666666666664;
		token97 = 0.3333333333333333;
		token98 = -0.041666666666666664;
	}
}
