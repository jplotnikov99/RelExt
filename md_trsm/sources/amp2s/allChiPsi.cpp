///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::ChiPsiHH(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (-s +  (MChi*MChi) + 2* (MH*MH) +  (MPsi*MPsi) + cos_t*sqrt(s - 4* (MH*MH))*sqrt(( (MChi*MChi*MChi*MChi) - 2* (MChi*MChi)*(s +  (MPsi*MPsi)) +  (( (MPsi*MPsi) - s)*( (MPsi*MPsi) - s)))/s))/2.;
	double u = -s - t + MChi*MChi + MPsi*MPsi + MH*MH + MH*MH;
	return 0.5*((-1000000*token32*token34*token4*token5*token6*(-t +  (MChi*MChi)))/(token16*(-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t))) - (1000000*token32*token34*token35*token4*token6*(-t +  (MPsi*MPsi)))/(token16*(-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t))) +  (token32*token32)/4. + (2000000*token35*token5*(-1000000*t*(-t +  (MPsi*MPsi)) +  (MChi*MChi)*(-1000000*t + 1000001* (MPsi*MPsi)))* (token34*token34)* (token4*token4)* (token6*token6))/((-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t))*(-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t))* (token16*token16)) + (1000000* (token34*token34)* (token35*token35)* (token4*token4)* (token6*token6))/((-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t))* (token16*token16)) + (1000000* (token34*token34)* (token4*token4)* (token5*token5)* (token6*token6))/((-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t))* (token16*token16)) - (1000000*token32*token34*token4*token5*token6*(-u +  (MChi*MChi)))/(token16*(-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u))) + (2000000*token35*token5*(-1000000*u*(-t +  (MPsi*MPsi)) +  (MChi*MChi)*(-1000000*t + 1000001* (MPsi*MPsi)))* (token34*token34)* (token4*token4)* (token6*token6))/((-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t))* (token16*token16)*(-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u))) + (1000000* (token34*token34)* (token4*token4)* (token5*token5)* (token6*token6))/( (token16*token16)*(-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u))) + (2000000*(1000000*t*u - 1000000*(t + u)* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi))* (token34*token34)* (token4*token4)* (token5*token5)* (token6*token6))/((-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t))* (token16*token16)*(-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u))) - (1000000*token32*token34*token35*token4*token6*(-u +  (MPsi*MPsi)))/(token16*(-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u))) + (2000000*token35*token5*(-1000000*t*(-u +  (MPsi*MPsi)) +  (MChi*MChi)*(-1000000*u + 1000001* (MPsi*MPsi)))* (token34*token34)* (token4*token4)* (token6*token6))/((-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t))* (token16*token16)*(-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u))) + (1000000* (token34*token34)* (token35*token35)* (token4*token4)* (token6*token6))/( (token16*token16)*(-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u))) + (2000000*(1000000*t*u - 1000000*(t + u)* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi))* (token34*token34)* (token35*token35)* (token4*token4)* (token6*token6))/((-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t))* (token16*token16)*(-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u))) + (2000000*token35*token5*(-1000000*u*(-u +  (MPsi*MPsi)) +  (MChi*MChi)*(-1000000*u + 1000001* (MPsi*MPsi)))* (token34*token34)* (token4*token4)* (token6*token6))/( (token16*token16)*(-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u))*(-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u))) + (token3*token32*token33*token34*token4*(s -  (MH*MH)))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) + (2000*token3*token33*token5*token6*(-1000*t*(-s +  (MH*MH)) +  (MChi*MChi)*(-1000*s + MH*WH + 1000* (MH*MH)))* (token34*token34)* (token4*token4))/(token16*(-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2000*token3*token33*token35*token6*(MH*WH* (MPsi*MPsi) - 1000*s*(-t +  (MPsi*MPsi)) + 1000* (MH*MH)*(-t +  (MPsi*MPsi)))* (token34*token34)* (token4*token4))/(token16*(-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + ( (token3*token3)* (token33*token33)* (token34*token34)* (token4*token4))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) + (2000*token3*token33*token5*token6*(-1000*u*(-s +  (MH*MH)) +  (MChi*MChi)*(-1000*s + MH*WH + 1000* (MH*MH)))* (token34*token34)* (token4*token4))/(token16*(-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2000*token3*token33*token35*token6*(MH*WH* (MPsi*MPsi) - 1000*s*(-u +  (MPsi*MPsi)) + 1000* (MH*MH)*(-u +  (MPsi*MPsi)))* (token34*token34)* (token4*token4))/(token16*(-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiAA(const double &cos_t, const double &s){
	using namespace PAR;
	return 0.5*((2* (s*s)* (token11*token11)* (token12*token12)* (token13*token13)* (token34*token34))/( (token16*token16)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiZZ(const double &cos_t, const double &s){
	using namespace PAR;
	return 0.5*(((-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (token14*token14)* (token15*token15)* (token34*token34)* (token4*token4))/(4.* (MZ*MZ*MZ*MZ)* (token10*token10)* (token17*token17)* (token18*token18)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiwW(const double &cos_t, const double &s){
	using namespace PAR;
	return (((-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s))* (token14*token14)* (token34*token34)* (token4*token4))/(4.* (MW*MW*MW*MW)* (token10*token10)* (token18*token18)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiGG(const double &cos_t, const double &s){
	using namespace PAR;
	return 0.5*((16* (s*s)* (token11*token11)* (token13*token13)* (token20*token20)* (token34*token34))/( (token16*token16)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiEe(const double &cos_t, const double &s){
	using namespace PAR;
	return ((2*(s - 4* (Me*Me))* (token13*token13)* (token22*token22)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiMUmu(const double &cos_t, const double &s){
	using namespace PAR;
	return ((2*(s - 4* (MMU*MMU))* (token13*token13)* (token24*token24)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiTAta(const double &cos_t, const double &s){
	using namespace PAR;
	return ((2*(s - 4* (MTA*MTA))* (token13*token13)* (token25*token25)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiUu(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MU*MU))* (token13*token13)* (token26*token26)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiCc(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MC*MC))* (token13*token13)* (token27*token27)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiTt(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MT*MT))* (token13*token13)* (token28*token28)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiDd(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MD*MD))* (token13*token13)* (token29*token29)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiSs(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MS*MS))* (token13*token13)* (token30*token30)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiBb(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MB*MB))* (token13*token13)* (token31*token31)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
