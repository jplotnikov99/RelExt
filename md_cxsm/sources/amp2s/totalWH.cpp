///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::wHHH(){
	if(heaviDecays(MH,MH,MH)){
		double coupling2 = 0.5*(9* (MH*MH*MH*MH)* ((svev* (cos( alpha)*cos( alpha)*cos( alpha)) + vev* (sin(alpha)*sin(alpha)*sin(alpha)))*(svev* (cos( alpha)*cos( alpha)*cos( alpha)) + vev* (sin(alpha)*sin(alpha)*sin(alpha)))))/( (svev*svev)* (vev*vev));
		double m2 = MH;
		double m3 = MH;
		return partial_width(scalar,scalar, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wHHS1(){
	if(heaviDecays(MH,MH,MS1)){
		double coupling2 = ( (cos( alpha)*cos( alpha))* ((2* (MH*MH) +  (MS1*MS1))*(2* (MH*MH) +  (MS1*MS1)))* (sin(alpha)*sin(alpha))* ((svev*cos( alpha) - vev*sin(alpha))*(svev*cos( alpha) - vev*sin(alpha))))/( (svev*svev)* (vev*vev));
		double m2 = MH;
		double m3 = MS1;
		return partial_width(scalar,scalar, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wHS1S1(){
	if(heaviDecays(MH,MS1,MS1)){
		double coupling2 = 0.5*( (cos( alpha)*cos( alpha))* ((- (MH*MH) - 2* (MS1*MS1))*(- (MH*MH) - 2* (MS1*MS1)))* (sin(alpha)*sin(alpha))* ((vev*cos( alpha) + svev*sin(alpha))*(vev*cos( alpha) + svev*sin(alpha))))/( (svev*svev)* (vev*vev));
		double m2 = MS1;
		double m3 = MS1;
		return partial_width(scalar,scalar, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wHA1A1(){
	if(heaviDecays(MH,MA1,MA1)){
		double coupling2 = 0.5*( (MH*MH*MH*MH)* (sin(alpha)*sin(alpha)))/ (svev*svev);
		double m2 = MA1;
		double m3 = MA1;
		return partial_width(scalar,scalar, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wHZZ(){
	if(heaviDecays(MH,MZ,MZ)){
		double coupling2 = 0.5*( (EL*EL*EL*EL)* (vev*vev)* (cos( alpha)*cos( alpha))* (( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))))/(4.* (cw*cw*cw*cw)* (sw*sw*sw*sw));
		double m2 = MZ;
		double m3 = MZ;
		return partial_width(z_boson,z_boson, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wHwW(){
	if(heaviDecays(MH,MW,MW)){
		double coupling2 = ( (EL*EL*EL*EL)* (vev*vev)* (cos( alpha)*cos( alpha)))/(4.* (sw*sw*sw*sw));
		double m2 = MW;
		double m3 = MW;
		return partial_width(w_boson,w_boson, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wHEe(){
	if(heaviDecays(MH,Me,Me)){
		double coupling2 =  (ye*ye)* (cos( alpha)*cos( alpha));
		double m2 = Me;
		double m3 = Me;
		return partial_width(lepton,lepton, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wHMUmu(){
	if(heaviDecays(MH,MMU,MMU)){
		double coupling2 =  (ym*ym)* (cos( alpha)*cos( alpha));
		double m2 = MMU;
		double m3 = MMU;
		return partial_width(lepton,lepton, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wHTAta(){
	if(heaviDecays(MH,MTA,MTA)){
		double coupling2 =  (ytau*ytau)* (cos( alpha)*cos( alpha));
		double m2 = MTA;
		double m3 = MTA;
		return partial_width(lepton,lepton, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wHUu(){
	if(heaviDecays(MH,MU,MU)){
		double coupling2 =  (yup*yup)* (cos( alpha)*cos( alpha));
		double m2 = MU;
		double m3 = MU;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wHCc(){
	if(heaviDecays(MH,MC,MC)){
		double coupling2 =  (yc*yc)* (cos( alpha)*cos( alpha));
		double m2 = MC;
		double m3 = MC;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wHTt(){
	if(heaviDecays(MH,MT,MT)){
		double coupling2 =  (yt*yt)* (cos( alpha)*cos( alpha));
		double m2 = MT;
		double m3 = MT;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wHDd(){
	if(heaviDecays(MH,MD,MD)){
		double coupling2 =  (ydo*ydo)* (cos( alpha)*cos( alpha));
		double m2 = MD;
		double m3 = MD;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wHSs(){
	if(heaviDecays(MH,MS,MS)){
		double coupling2 =  (ys*ys)* (cos( alpha)*cos( alpha));
		double m2 = MS;
		double m3 = MS;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wHBb(){
	if(heaviDecays(MH,MB,MB)){
		double coupling2 =  (yb*yb)* (cos( alpha)*cos( alpha));
		double m2 = MB;
		double m3 = MB;
		return partial_width(quark,quark, m2, m3, coupling2);
	}
	else{ return 0; }

}
double DT::wwH(){
	return ( wHHH() + wHHS1() + wHS1S1() + wHA1A1() + wHZZ() + wHwW() + wHEe() + wHMUmu() + wHTAta() + wHUu() + wHCc() + wHTt() + wHDd() + wHSs() + wHBb() );
}
