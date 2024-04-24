///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::wS1HH(){
	if(heaviDecays(MS1,MH,MH)){
		double coupling2 = 0.5*( (cos( alpha)*cos( alpha))* ((2* (MH*MH) +  (MS1*MS1))*(2* (MH*MH) +  (MS1*MS1)))* (sin(alpha)*sin(alpha))* ((svev*cos( alpha) - vev*sin(alpha))*(svev*cos( alpha) - vev*sin(alpha))))/( (svev*svev)* (vev*vev));
		double m2 = MH;
		double m3 = MH;
		return partial_width(scalar,scalar, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wS1HS1(){
	if(heaviDecays(MS1,MH,MS1)){
		double coupling2 = ( (cos( alpha)*cos( alpha))* ((- (MH*MH) - 2* (MS1*MS1))*(- (MH*MH) - 2* (MS1*MS1)))* (sin(alpha)*sin(alpha))* ((vev*cos( alpha) + svev*sin(alpha))*(vev*cos( alpha) + svev*sin(alpha))))/( (svev*svev)* (vev*vev));
		double m2 = MH;
		double m3 = MS1;
		return partial_width(scalar,scalar, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wS1S1S1(){
	if(heaviDecays(MS1,MS1,MS1)){
		double coupling2 = 0.5*(9* (MS1*MS1*MS1*MS1)* ((-(vev* (cos( alpha)*cos( alpha)*cos( alpha))) + svev* (sin(alpha)*sin(alpha)*sin(alpha)))*(-(vev* (cos( alpha)*cos( alpha)*cos( alpha))) + svev* (sin(alpha)*sin(alpha)*sin(alpha)))))/( (svev*svev)* (vev*vev));
		double m2 = MS1;
		double m3 = MS1;
		return partial_width(scalar,scalar, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wS1A1A1(){
	if(heaviDecays(MS1,MA1,MA1)){
		double coupling2 = 0.5*( (MS1*MS1*MS1*MS1)* (cos( alpha)*cos( alpha)))/ (svev*svev);
		double m2 = MA1;
		double m3 = MA1;
		return partial_width(scalar,scalar, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wS1ZZ(){
	if(heaviDecays(MS1,MZ,MZ)){
		double coupling2 = 0.5*( (EL*EL*EL*EL)* (vev*vev)* (( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw)))* (sin(alpha)*sin(alpha)))/(4.* (cw*cw*cw*cw)* (sw*sw*sw*sw));
		double m2 = MZ;
		double m3 = MZ;
		return partial_width(z_boson,z_boson, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wS1wW(){
	if(heaviDecays(MS1,MW,MW)){
		double coupling2 = ( (EL*EL*EL*EL)* (vev*vev)* (sin(alpha)*sin(alpha)))/(4.* (sw*sw*sw*sw));
		double m2 = MW;
		double m3 = MW;
		return partial_width(w_boson,w_boson, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wS1Ee(){
	if(heaviDecays(MS1,Me,Me)){
		double coupling2 =  (ye*ye)* (sin(alpha)*sin(alpha));
		double m2 = Me;
		double m3 = Me;
		return partial_width(lepton,lepton, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wS1MUmu(){
	if(heaviDecays(MS1,MMU,MMU)){
		double coupling2 =  (ym*ym)* (sin(alpha)*sin(alpha));
		double m2 = MMU;
		double m3 = MMU;
		return partial_width(lepton,lepton, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wS1TAta(){
	if(heaviDecays(MS1,MTA,MTA)){
		double coupling2 =  (ytau*ytau)* (sin(alpha)*sin(alpha));
		double m2 = MTA;
		double m3 = MTA;
		return partial_width(lepton,lepton, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wS1Uu(){
	if(heaviDecays(MS1,MU,MU)){
		double coupling2 =  (yup*yup)* (sin(alpha)*sin(alpha));
		double m2 = MU;
		double m3 = MU;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wS1Cc(){
	if(heaviDecays(MS1,MC,MC)){
		double coupling2 =  (yc*yc)* (sin(alpha)*sin(alpha));
		double m2 = MC;
		double m3 = MC;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wS1Tt(){
	if(heaviDecays(MS1,MT,MT)){
		double coupling2 =  (yt*yt)* (sin(alpha)*sin(alpha));
		double m2 = MT;
		double m3 = MT;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wS1Dd(){
	if(heaviDecays(MS1,MD,MD)){
		double coupling2 =  (ydo*ydo)* (sin(alpha)*sin(alpha));
		double m2 = MD;
		double m3 = MD;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wS1Ss(){
	if(heaviDecays(MS1,MS,MS)){
		double coupling2 =  (ys*ys)* (sin(alpha)*sin(alpha));
		double m2 = MS;
		double m3 = MS;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wS1Bb(){
	if(heaviDecays(MS1,MB,MB)){
		double coupling2 =  (yb*yb)* (sin(alpha)*sin(alpha));
		double m2 = MB;
		double m3 = MB;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wwS1(){
	return ( wS1HH() + wS1HS1() + wS1S1S1() + wS1A1A1() + wS1ZZ() + wS1wW() + wS1Ee() + wS1MUmu() + wS1TAta() + wS1Uu() + wS1Cc() + wS1Tt() + wS1Dd() + wS1Ss() + wS1Bb() );
}
