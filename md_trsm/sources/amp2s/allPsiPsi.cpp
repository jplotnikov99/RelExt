///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::PsiPsiHH(const double &cos_t, const double &s){
	using namespace PAR;
	double t =  (MH*MH) + (-s + cos_t*sqrt(s - 4* (MH*MH))*sqrt(s - 4* (MPsi*MPsi)))/2. +  (MPsi*MPsi);
	double u = -s - t + MPsi*MPsi + MPsi*MPsi + MH*MH + MH*MH;
	return 0.5*((-2000000*token36*token4*token6*token8*(-t +  (MChi*MChi)))/(token10*(-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t))) - (2000000*token36*token37*token4*token6*(-t +  (MPsi*MPsi)))/(-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t)) +  (token36*token36) + (2000000*token37*token8*(-1000000*t*(-t +  (MPsi*MPsi)) +  (MChi*MChi)*(-1000000*t + 1000001* (MPsi*MPsi)))* (token4*token4)* (token6*token6))/(token10*(-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t))*(-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t))) + (1000000* (token37*token37)* (token4*token4)* (token6*token6))/(-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t)) + (1000000* (token4*token4)* (token6*token6)* (token8*token8))/((-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t))* (token10*token10)) - (2000000*token36*token4*token6*token8*(-u +  (MChi*MChi)))/(token10*(-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u))) + (2000000*token37*token8*(-1000000*u*(-t +  (MPsi*MPsi)) +  (MChi*MChi)*(-1000000*t + 1000001* (MPsi*MPsi)))* (token4*token4)* (token6*token6))/(token10*(-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t))*(-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u))) + (1000000* (token4*token4)* (token6*token6)* (token8*token8))/( (token10*token10)*(-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u))) + (2000000*(1000000*t*u - 1000000*(t + u)* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi))* (token4*token4)* (token6*token6)* (token8*token8))/((-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t))* (token10*token10)*(-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u))) - (2000000*token36*token37*token4*token6*(-u +  (MPsi*MPsi)))/(-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u)) + (2000000*token37*token8*(-1000000*t*(-u +  (MPsi*MPsi)) +  (MChi*MChi)*(-1000000*u + 1000001* (MPsi*MPsi)))* (token4*token4)* (token6*token6))/(token10*(-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t))*(-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u))) + (1000000* (token37*token37)* (token4*token4)* (token6*token6))/(-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u)) + (2000000*(1000000*t*u - 1000000*(t + u)* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi))* (token37*token37)* (token4*token4)* (token6*token6))/((-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t))*(-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u))) + (2000000*token37*token8*(-1000000*u*(-u +  (MPsi*MPsi)) +  (MChi*MChi)*(-1000000*u + 1000001* (MPsi*MPsi)))* (token4*token4)* (token6*token6))/(token10*(-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u))*(-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u))) + (2*token2*token3*token35*token36*token4*(s -  (MH*MH)))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) + (2000*token2*token3*token35*token6*token8*(-1000*t*(-s +  (MH*MH)) +  (MChi*MChi)*(-1000*s + MH*WH + 1000* (MH*MH)))* (token4*token4))/(token10*(-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2000*token2*token3*token35*token37*token6*(MH*WH* (MPsi*MPsi) - 1000*s*(-t +  (MPsi*MPsi)) + 1000* (MH*MH)*(-t +  (MPsi*MPsi)))* (token4*token4))/((-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + ( (token2*token2)* (token3*token3)* (token35*token35)* (token4*token4))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) + (2000*token2*token3*token35*token6*token8*(-1000*u*(-s +  (MH*MH)) +  (MChi*MChi)*(-1000*s + MH*WH + 1000* (MH*MH)))* (token4*token4))/(token10*(-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2000*token2*token3*token35*token37*token6*(MH*WH* (MPsi*MPsi) - 1000*s*(-u +  (MPsi*MPsi)) + 1000* (MH*MH)*(-u +  (MPsi*MPsi)))* (token4*token4))/((-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::PsiPsiAA(const double &cos_t, const double &s){
	using namespace PAR;
	return 0.5*((2* (s*s)* (token11*token11)* (token12*token12)* (token13*token13)* (token35*token35))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::PsiPsiZZ(const double &cos_t, const double &s){
	using namespace PAR;
	return 0.5*(((-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (token14*token14)* (token15*token15)* (token35*token35)* (token4*token4))/(4.* (MZ*MZ*MZ*MZ)* (token16*token16)* (token17*token17)* (token18*token18)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::PsiPsiwW(const double &cos_t, const double &s){
	using namespace PAR;
	return (((-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s))* (token14*token14)* (token35*token35)* (token4*token4))/(4.* (MW*MW*MW*MW)* (token16*token16)* (token18*token18)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::PsiPsiGG(const double &cos_t, const double &s){
	using namespace PAR;
	return 0.5*((16* (s*s)* (token13*token13)* (token19*token19)* (token20*token20)* (token38*token38))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::PsiPsiEe(const double &cos_t, const double &s){
	using namespace PAR;
	return ((2*(s - 4* (Me*Me))* (token13*token13)* (token22*token22)* (token35*token35)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::PsiPsiMUmu(const double &cos_t, const double &s){
	using namespace PAR;
	return ((2*(s - 4* (MMU*MMU))* (token13*token13)* (token24*token24)* (token35*token35)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::PsiPsiTAta(const double &cos_t, const double &s){
	using namespace PAR;
	return ((2*(s - 4* (MTA*MTA))* (token13*token13)* (token25*token25)* (token35*token35)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::PsiPsiUu(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MU*MU))* (token13*token13)* (token26*token26)* (token35*token35)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::PsiPsiCc(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MC*MC))* (token13*token13)* (token27*token27)* (token35*token35)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::PsiPsiTt(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MT*MT))* (token13*token13)* (token28*token28)* (token35*token35)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::PsiPsiDd(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MD*MD))* (token13*token13)* (token29*token29)* (token35*token35)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::PsiPsiSs(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MS*MS))* (token13*token13)* (token30*token30)* (token35*token35)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::PsiPsiBb(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MB*MB))* (token13*token13)* (token31*token31)* (token35*token35)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
