///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::whhh(){
	if(heaviDecays(mHsm,mHsm,mHsm)){
		double coupling2 = 0.5*9* (L1*L1)* (v*v);
		double m2 = mHsm;
		double m3 = mHsm;
		return partial_width(scalar,scalar, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whH1H1(){
	if(heaviDecays(mHsm,mH1,mH1)){
		double coupling2 = 0.5* ((2*RR1x2*RR1x3*Timag - 2*RR1x1*RR1x3*Treal - (L3 + L4 - L5)* (RR1x2*RR1x2)*v - ((L3 + L4 + L5)* (RR1x1*RR1x1) + L7* (RR1x3*RR1x3))*v)*(2*RR1x2*RR1x3*Timag - 2*RR1x1*RR1x3*Treal - (L3 + L4 - L5)* (RR1x2*RR1x2)*v - ((L3 + L4 + L5)* (RR1x1*RR1x1) + L7* (RR1x3*RR1x3))*v));
		double m2 = mH1;
		double m3 = mH1;
		return partial_width(scalar,scalar, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whH1H2(){
	if(heaviDecays(mHsm,mH1,mH2)){
		double coupling2 =  ((RR1x2*RR2x3*Timag - RR1x1*RR2x3*Treal - (L3 + L4 + L5)*RR1x1*RR2x1*v - (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(RR2x2*Timag - RR2x1*Treal - L7*RR2x3*v))*(RR1x2*RR2x3*Timag - RR1x1*RR2x3*Treal - (L3 + L4 + L5)*RR1x1*RR2x1*v - (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(RR2x2*Timag - RR2x1*Treal - L7*RR2x3*v)));
		double m2 = mH1;
		double m3 = mH2;
		return partial_width(scalar,scalar, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whH1H3(){
	if(heaviDecays(mHsm,mH1,mH3)){
		double coupling2 =  ((RR1x2*RR3x3*Timag - RR1x1*RR3x3*Treal - (L3 + L4 + L5)*RR1x1*RR3x1*v - (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))*(RR1x2*RR3x3*Timag - RR1x1*RR3x3*Treal - (L3 + L4 + L5)*RR1x1*RR3x1*v - (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v)));
		double m2 = mH1;
		double m3 = mH3;
		return partial_width(scalar,scalar, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whH2H2(){
	if(heaviDecays(mHsm,mH2,mH2)){
		double coupling2 = 0.5* ((2*RR2x2*RR2x3*Timag - 2*RR2x1*RR2x3*Treal - (L3 + L4 - L5)* (RR2x2*RR2x2)*v - ((L3 + L4 + L5)* (RR2x1*RR2x1) + L7* (RR2x3*RR2x3))*v)*(2*RR2x2*RR2x3*Timag - 2*RR2x1*RR2x3*Treal - (L3 + L4 - L5)* (RR2x2*RR2x2)*v - ((L3 + L4 + L5)* (RR2x1*RR2x1) + L7* (RR2x3*RR2x3))*v));
		double m2 = mH2;
		double m3 = mH2;
		return partial_width(scalar,scalar, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whH2H3(){
	if(heaviDecays(mHsm,mH2,mH3)){
		double coupling2 =  ((RR2x2*RR3x3*Timag - RR2x1*RR3x3*Treal - (L3 + L4 + L5)*RR2x1*RR3x1*v - (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))*(RR2x2*RR3x3*Timag - RR2x1*RR3x3*Treal - (L3 + L4 + L5)*RR2x1*RR3x1*v - (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v)));
		double m2 = mH2;
		double m3 = mH3;
		return partial_width(scalar,scalar, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whH3H3(){
	if(heaviDecays(mHsm,mH3,mH3)){
		double coupling2 = 0.5* ((2*RR3x2*RR3x3*Timag - 2*RR3x1*RR3x3*Treal - (L3 + L4 - L5)* (RR3x2*RR3x2)*v - ((L3 + L4 + L5)* (RR3x1*RR3x1) + L7* (RR3x3*RR3x3))*v)*(2*RR3x2*RR3x3*Timag - 2*RR3x1*RR3x3*Treal - (L3 + L4 - L5)* (RR3x2*RR3x2)*v - ((L3 + L4 + L5)* (RR3x1*RR3x1) + L7* (RR3x3*RR3x3))*v));
		double m2 = mH3;
		double m3 = mH3;
		return partial_width(scalar,scalar, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whHCHc(){
	if(heaviDecays(mHsm,mHc,mHc)){
		double coupling2 =  (L3*L3)* (v*v);
		double m2 = mHc;
		double m3 = mHc;
		return partial_width(scalar,scalar, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whZZ(){
	if(heaviDecays(mHsm,MZ,MZ)){
		double coupling2 = 0.5*( (EL*EL*EL*EL)* (v*v)* (( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW*CW*CW)* (SW*SW*SW*SW));
		double m2 = MZ;
		double m3 = MZ;
		return partial_width(z_boson,z_boson, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whwW(){
	if(heaviDecays(mHsm,MW,MW)){
		double coupling2 = ( (EL*EL*EL*EL)* (v*v))/(4.* (SW*SW*SW*SW));
		double m2 = MW;
		double m3 = MW;
		return partial_width(w_boson,w_boson, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whEe(){
	if(heaviDecays(mHsm,Me,Me)){
		double coupling2 =  (Me*Me)/ (v*v);
		double m2 = Me;
		double m3 = Me;
		return partial_width(lepton,lepton, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whMm(){
	if(heaviDecays(mHsm,MM,MM)){
		double coupling2 =  (MM*MM)/ (v*v);
		double m2 = MM;
		double m3 = MM;
		return partial_width(lepton,lepton, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whTAta(){
	if(heaviDecays(mHsm,MTA,MTA)){
		double coupling2 =  (MTA*MTA)/ (v*v);
		double m2 = MTA;
		double m3 = MTA;
		return partial_width(lepton,lepton, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whUu(){
	if(heaviDecays(mHsm,MU,MU)){
		double coupling2 =  (MU*MU)/ (v*v);
		double m2 = MU;
		double m3 = MU;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whCc(){
	if(heaviDecays(mHsm,MC,MC)){
		double coupling2 =  (MC*MC)/ (v*v);
		double m2 = MC;
		double m3 = MC;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whTt(){
	if(heaviDecays(mHsm,MT,MT)){
		double coupling2 =  (MT*MT)/ (v*v);
		double m2 = MT;
		double m3 = MT;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whDd(){
	if(heaviDecays(mHsm,MD,MD)){
		double coupling2 =  (MD*MD)/ (v*v);
		double m2 = MD;
		double m3 = MD;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whSs(){
	if(heaviDecays(mHsm,MS,MS)){
		double coupling2 =  (MS*MS)/ (v*v);
		double m2 = MS;
		double m3 = MS;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::whBb(){
	if(heaviDecays(mHsm,MB,MB)){
		double coupling2 =  (MB*MB)/ (v*v);
		double m2 = MB;
		double m3 = MB;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wwh(){
	return ( whhh() + whH1H1() + whH1H2() + whH1H3() + whH2H2() + whH2H3() + whH3H3() + whHCHc() + whZZ() + whwW() + whEe() + whMm() + whTAta() + whUu() + whCc() + whTt() + whDd() + whSs() + whBb() );
}
