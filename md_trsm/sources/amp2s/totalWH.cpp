///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::wHHH(){
	if(heaviDecays(MH,MH,MH)){
		return 0.5*(-9*sqrt(3)*MH* (lam*lam)* (vev*vev))/(4.*Pi*sqrt(- (MH*MH*MH*MH)));
	}
	else{ return 0; }

}
double DT::wHChiChi(){
	if(heaviDecays(MH,MChi,MChi)){
		return 0.5*(sqrt(-4* (MChi*MChi)* (MH*MH) +  (MH*MH*MH*MH))* (vev*vev)* ((lam12 + lam13 + (lam12 - lam13)*cos( 2*alpha) + lam123*sin(2*alpha))*(lam12 + lam13 + (lam12 - lam13)*cos( 2*alpha) + lam123*sin(2*alpha))))/(64.*Pi* (MH*MH*MH));
	}
	else{ return 0; }

}
double DT::wHChiPsi(){
	if(heaviDecays(MH,MChi,MPsi)){
		return (sqrt((MChi + MH - MPsi)*(-MChi + MH + MPsi)*( (MH*MH) -  ((MChi + MPsi)*(MChi + MPsi))))* ((lam123*vev*cos( 2*alpha) + (-lam12 + lam13)*vev*sin(2*alpha))*(lam123*vev*cos( 2*alpha) + (-lam12 + lam13)*vev*sin(2*alpha))))/(64.*Pi* (MH*MH*MH));
	}
	else{ return 0; }

}
double DT::wHPsiPsi(){
	if(heaviDecays(MH,MPsi,MPsi)){
		return 0.5*(sqrt( (MH*MH*MH*MH) - 4* (MH*MH)* (MPsi*MPsi))* (vev*vev)* ((lam12 + lam13 + (-lam12 + lam13)*cos( 2*alpha) - lam123*sin(2*alpha))*(lam12 + lam13 + (-lam12 + lam13)*cos( 2*alpha) - lam123*sin(2*alpha))))/(64.*Pi* (MH*MH*MH));
	}
	else{ return 0; }

}
double DT::wHAA(){
	if(heaviDecays(MH,0,0)){
		return 0.5*(MH* (AH*AH)*sqrt( (MH*MH*MH*MH)))/(16.*Pi);
	}
	else{ return 0; }

}
double DT::wHZZ(){
	if(heaviDecays(MH,MZ,MZ)){
		return 0.5*( (EL*EL*EL*EL)*sqrt( (MH*MH*MH*MH) - 4* (MH*MH)* (MZ*MZ))*( (MH*MH*MH*MH) - 4* (MH*MH)* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ))* (vev*vev)* (( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))))/(256.*Pi* (cw*cw*cw*cw)* (MH*MH*MH)* (MZ*MZ*MZ*MZ)* (sw*sw*sw*sw));
	}
	else{ return 0; }

}
double DT::wHwW(){
	if(heaviDecays(MH,MW,MW)){
		return ( (EL*EL*EL*EL)*sqrt( (MH*MH*MH*MH) - 4* (MH*MH)* (MW*MW))*( (MH*MH*MH*MH) - 4* (MH*MH)* (MW*MW) + 12* (MW*MW*MW*MW))* (vev*vev))/(256.*Pi* (MH*MH*MH)* (MW*MW*MW*MW)* (sw*sw*sw*sw));
	}
	else{ return 0; }

}
double DT::wHGG(){
	if(heaviDecays(MH,0,0)){
		return 0.5*(MH* (GH*GH)*sqrt( (MH*MH*MH*MH)))/(2.*Pi);
	}
	else{ return 0; }

}
double DT::wHEe(){
	if(heaviDecays(MH,Me,Me)){
		return ((-4* (Me*Me) +  (MH*MH))*sqrt(-4* (Me*Me)* (MH*MH) +  (MH*MH*MH*MH))* (ye*ye))/(16.*Pi* (MH*MH*MH));
	}
	else{ return 0; }

}
double DT::wHMUmu(){
	if(heaviDecays(MH,MMU,MMU)){
		return (( (MH*MH) - 4* (MMU*MMU))*sqrt( (MH*MH*MH*MH) - 4* (MH*MH)* (MMU*MMU))* (ym*ym))/(16.*Pi* (MH*MH*MH));
	}
	else{ return 0; }

}
double DT::wHTAta(){
	if(heaviDecays(MH,MTA,MTA)){
		return (( (MH*MH) - 4* (MTA*MTA))*sqrt( (MH*MH*MH*MH) - 4* (MH*MH)* (MTA*MTA))* (ytau*ytau))/(16.*Pi* (MH*MH*MH));
	}
	else{ return 0; }

}
double DT::wHUu(){
	if(heaviDecays(MH,MU,MU)){
		return (3*( (MH*MH) - 4* (MU*MU))*sqrt( (MH*MH*MH*MH) - 4* (MH*MH)* (MU*MU))* (yup*yup))/(16.*Pi* (MH*MH*MH));
	}
	else{ return 0; }

}
double DT::wHCc(){
	if(heaviDecays(MH,MC,MC)){
		return (3*(-4* (MC*MC) +  (MH*MH))*sqrt(-4* (MC*MC)* (MH*MH) +  (MH*MH*MH*MH))* (yc*yc))/(16.*Pi* (MH*MH*MH));
	}
	else{ return 0; }

}
double DT::wHTt(){
	if(heaviDecays(MH,MT,MT)){
		return (3*( (MH*MH) - 4* (MT*MT))*sqrt( (MH*MH*MH*MH) - 4* (MH*MH)* (MT*MT))* (yt*yt))/(16.*Pi* (MH*MH*MH));
	}
	else{ return 0; }

}
double DT::wHDd(){
	if(heaviDecays(MH,MD,MD)){
		return (3*(-4* (MD*MD) +  (MH*MH))*sqrt(-4* (MD*MD)* (MH*MH) +  (MH*MH*MH*MH))* (ydo*ydo))/(16.*Pi* (MH*MH*MH));
	}
	else{ return 0; }

}
double DT::wHSs(){
	if(heaviDecays(MH,MS,MS)){
		return (3*( (MH*MH) - 4* (MS*MS))*sqrt( (MH*MH*MH*MH) - 4* (MH*MH)* (MS*MS))* (ys*ys))/(16.*Pi* (MH*MH*MH));
	}
	else{ return 0; }

}
double DT::wHBb(){
	if(heaviDecays(MH,MB,MB)){
		return (3*(-4* (MB*MB) +  (MH*MH))*sqrt(-4* (MB*MB)* (MH*MH) +  (MH*MH*MH*MH))* (yb*yb))/(16.*Pi* (MH*MH*MH));
	}
	else{ return 0; }

}
double DT::wwH(){
	return ( wHHH() + wHChiChi() + wHChiPsi() + wHPsiPsi() + wHAA() + wHZZ() + wHwW() + wHGG() + wHEe() + wHMUmu() + wHTAta() + wHUu() + wHCc() + wHTt() + wHDd() + wHSs() + wHBb() );
}
