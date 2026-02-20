///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::ChiChiHH(const double &cos_t, const double &s){
	using namespace PAR;
	double t =  (MChi*MChi) + (-s + cos_t*sqrt(s - 4* (MChi*MChi))*sqrt(s - 4* (MH*MH)))/2. +  (MH*MH);
	double u = -s - t + MChi*MChi + MChi*MChi + MH*MH + MH*MH;
	return 0.5*((-2000000*token1*token4*token6*token7*(-t +  (MChi*MChi)))/(-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t)) - (2000000*token1*token4*token6*token8*(-t +  (MPsi*MPsi)))/(token10*(-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t))) +  (token1*token1) + (2000000*token7*token8*(-1000000*t*(-t +  (MPsi*MPsi)) +  (MChi*MChi)*(-1000000*t + 1000001* (MPsi*MPsi)))* (token4*token4)* (token6*token6))/(token10*(-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t))*(-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t))) + (1000000* (token4*token4)* (token6*token6)* (token7*token7))/(-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t)) + (1000000* (token4*token4)* (token6*token6)* (token8*token8))/((-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t))* (token10*token10)) - (2000000*token1*token4*token6*token7*(-u +  (MChi*MChi)))/(-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u)) + (2000000*token7*token8*(-1000000*u*(-t +  (MPsi*MPsi)) +  (MChi*MChi)*(-1000000*t + 1000001* (MPsi*MPsi)))* (token4*token4)* (token6*token6))/(token10*(-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t))*(-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u))) + (1000000* (token4*token4)* (token6*token6)* (token7*token7))/(-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u)) + (2000000*(1000000*t*u - 1000000*(t + u)* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi))* (token4*token4)* (token6*token6)* (token7*token7))/((-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t))*(-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u))) - (2000000*token1*token4*token6*token8*(-u +  (MPsi*MPsi)))/(token10*(-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u))) + (2000000*token7*token8*(-1000000*t*(-u +  (MPsi*MPsi)) +  (MChi*MChi)*(-1000000*u + 1000001* (MPsi*MPsi)))* (token4*token4)* (token6*token6))/(token10*(-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t))*(-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u))) + (1000000* (token4*token4)* (token6*token6)* (token8*token8))/( (token10*token10)*(-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u))) + (2000000*(1000000*t*u - 1000000*(t + u)* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi))* (token4*token4)* (token6*token6)* (token8*token8))/((-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t))* (token10*token10)*(-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u))) + (2000000*token7*token8*(-1000000*u*(-u +  (MPsi*MPsi)) +  (MChi*MChi)*(-1000000*u + 1000001* (MPsi*MPsi)))* (token4*token4)* (token6*token6))/(token10*(-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u))*(-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u))) + (2*token1*token2*token3*token4*token5*(s -  (MH*MH)))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) + (2000*token2*token3*token5*token6*token7*(-1000*t*(-s +  (MH*MH)) +  (MChi*MChi)*(-1000*s + MH*WH + 1000* (MH*MH)))* (token4*token4))/((-2000000*t* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (t*t))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2000*token2*token3*token5*token6*token8*(MH*WH* (MPsi*MPsi) - 1000*s*(-t +  (MPsi*MPsi)) + 1000* (MH*MH)*(-t +  (MPsi*MPsi)))* (token4*token4))/(token10*(-2000000*t* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (t*t))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + ( (token2*token2)* (token3*token3)* (token4*token4)* (token5*token5))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) + (2000*token2*token3*token5*token6*token7*(-1000*u*(-s +  (MH*MH)) +  (MChi*MChi)*(-1000*s + MH*WH + 1000* (MH*MH)))* (token4*token4))/((-2000000*u* (MChi*MChi) + 1000001* (MChi*MChi*MChi*MChi) + 1000000* (u*u))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2000*token2*token3*token5*token6*token8*(MH*WH* (MPsi*MPsi) - 1000*s*(-u +  (MPsi*MPsi)) + 1000* (MH*MH)*(-u +  (MPsi*MPsi)))* (token4*token4))/(token10*(-2000000*u* (MPsi*MPsi) + 1000001* (MPsi*MPsi*MPsi*MPsi) + 1000000* (u*u))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiAA(const double &cos_t, const double &s){
	using namespace PAR;
	return 0.5*((2* (s*s)* (token11*token11)* (token12*token12)* (token13*token13)* (token5*token5))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiChiZZ(const double &cos_t, const double &s){
	using namespace PAR;
	return 0.5*(((-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (token14*token14)* (token15*token15)* (token4*token4)* (token5*token5))/(4.* (MZ*MZ*MZ*MZ)* (token16*token16)* (token17*token17)* (token18*token18)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiwW(const double &cos_t, const double &s){
	using namespace PAR;
	return (((-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s))* (token14*token14)* (token4*token4)* (token5*token5))/(4.* (MW*MW*MW*MW)* (token16*token16)* (token18*token18)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiGG(const double &cos_t, const double &s){
	using namespace PAR;
	return 0.5*((16* (s*s)* (token13*token13)* (token19*token19)* (token20*token20)* (token21*token21))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiChiEe(const double &cos_t, const double &s){
	using namespace PAR;
	return ((2*(s - 4* (Me*Me))* (token13*token13)* (token22*token22)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiMUmu(const double &cos_t, const double &s){
	using namespace PAR;
	return ((2*(s - 4* (MMU*MMU))* (token13*token13)* (token24*token24)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiTAta(const double &cos_t, const double &s){
	using namespace PAR;
	return ((2*(s - 4* (MTA*MTA))* (token13*token13)* (token25*token25)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiUu(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MU*MU))* (token13*token13)* (token26*token26)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiCc(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MC*MC))* (token13*token13)* (token27*token27)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiTt(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MT*MT))* (token13*token13)* (token28*token28)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiDd(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MD*MD))* (token13*token13)* (token29*token29)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiSs(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MS*MS))* (token13*token13)* (token30*token30)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiBb(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MB*MB))* (token13*token13)* (token31*token31)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
