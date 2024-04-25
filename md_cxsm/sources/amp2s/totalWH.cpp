///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"
#include "width.hpp"
#include <memory>

double DT::wHHH(){
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
		double coupling2 = 0.5*(9* (MH*MH*MH*MH)* ((svev* (cos( alpha)*cos( alpha)*cos( alpha)) + vev* (sin(alpha)*sin(alpha)*sin(alpha)))*(svev* (cos( alpha)*cos( alpha)*cos( alpha)) + vev* (sin(alpha)*sin(alpha)*sin(alpha)))))/( (svev*svev)* (vev*vev));
		double m2 = MH;
		double m3 = MH;
		return w->partial_width(scalar,scalar, m2, m3, coupling2);
}
double DT::wHHS1(){
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
		double coupling2 = ( (cos( alpha)*cos( alpha))* ((2* (MH*MH) +  (MS1*MS1))*(2* (MH*MH) +  (MS1*MS1)))* (sin(alpha)*sin(alpha))* ((svev*cos( alpha) - vev*sin(alpha))*(svev*cos( alpha) - vev*sin(alpha))))/( (svev*svev)* (vev*vev));
		double m2 = MH;
		double m3 = MS1;
		return w->partial_width(scalar,scalar, m2, m3, coupling2);
}
double DT::wHS1S1(){
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
		double coupling2 = 0.5*( (cos( alpha)*cos( alpha))* ((- (MH*MH) - 2* (MS1*MS1))*(- (MH*MH) - 2* (MS1*MS1)))* (sin(alpha)*sin(alpha))* ((vev*cos( alpha) + svev*sin(alpha))*(vev*cos( alpha) + svev*sin(alpha))))/( (svev*svev)* (vev*vev));
		double m2 = MS1;
		double m3 = MS1;
		return w->partial_width(scalar,scalar, m2, m3, coupling2);
}
double DT::wHA1A1(){
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
		double coupling2 = 0.5*( (MH*MH*MH*MH)* (sin(alpha)*sin(alpha)))/ (svev*svev);
		double m2 = MA1;
		double m3 = MA1;
		return w->partial_width(scalar,scalar, m2, m3, coupling2);
}
double DT::wHZZ(){
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
		double coupling2 = 0.5*( (EL*EL*EL*EL)* (vev*vev)* (cos( alpha)*cos( alpha))* (( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))))/(4.* (cw*cw*cw*cw)* (sw*sw*sw*sw));
		double m2 = MZ;
		double m3 = MZ;
		return w->partial_width(z_boson,z_boson, m2, m3, coupling2);
}
double DT::wHwW(){
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
		double coupling2 = ( (EL*EL*EL*EL)* (vev*vev)* (cos( alpha)*cos( alpha)))/(4.* (sw*sw*sw*sw));
		double m2 = MW;
		double m3 = MW;
		return w->partial_width(w_boson,w_boson, m2, m3, coupling2);
}
double DT::wHEe(){
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
		double coupling2 =  (ye*ye)* (cos( alpha)*cos( alpha));
		double m2 = Me;
		double m3 = Me;
		return w->partial_width(lepton,lepton, m2, m3, coupling2);
}
double DT::wHMUmu(){
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
		double coupling2 =  (ym*ym)* (cos( alpha)*cos( alpha));
		double m2 = MMU;
		double m3 = MMU;
		return w->partial_width(lepton,lepton, m2, m3, coupling2);
}
double DT::wHTAta(){
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
		double coupling2 =  (ytau*ytau)* (cos( alpha)*cos( alpha));
		double m2 = MTA;
		double m3 = MTA;
		return w->partial_width(lepton,lepton, m2, m3, coupling2);
}
double DT::wHUu(){
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
		double coupling2 =  (yup*yup)* (cos( alpha)*cos( alpha));
		double m2 = MU;
		double m3 = MU;
		return w->partial_width(quark,quark, m2, m3, coupling2);
}
double DT::wHCc(){
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
		double coupling2 =  (yc*yc)* (cos( alpha)*cos( alpha));
		double m2 = MC;
		double m3 = MC;
		return w->partial_width(quark,quark, m2, m3, coupling2);
}
double DT::wHTt(){
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
		double coupling2 =  (yt*yt)* (cos( alpha)*cos( alpha));
		double m2 = MT;
		double m3 = MT;
		return w->partial_width(quark,quark, m2, m3, coupling2);
}
double DT::wHDd(){
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
		double coupling2 =  (ydo*ydo)* (cos( alpha)*cos( alpha));
		double m2 = MD;
		double m3 = MD;
		return w->partial_width(quark,quark, m2, m3, coupling2);
}
double DT::wHSs(){
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
		double coupling2 =  (ys*ys)* (cos( alpha)*cos( alpha));
		double m2 = MS;
		double m3 = MS;
		return w->partial_width(quark,quark, m2, m3, coupling2);
}
double DT::wHBb(){
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
		double coupling2 =  (yb*yb)* (cos( alpha)*cos( alpha));
		double m2 = MB;
		double m3 = MB;
		return w->partial_width(quark,quark, m2, m3, coupling2);
}
double DT::wwH(){
	return ( wHHH() + wHHS1() + wHS1S1() + wHA1A1() + wHZZ() + wHwW() + wHEe() + wHMUmu() + wHTAta() + wHUu() + wHCc() + wHTt() + wHDd() + wHSs() + wHBb() );
}
