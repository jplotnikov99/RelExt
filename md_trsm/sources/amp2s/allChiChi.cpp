///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::ChiChiHH(const double &cos_t, const double &s){
	double t =  (MChi*MChi) + (-s + cos_t*sqrt(s - 4* (MChi*MChi))*sqrt(s - 4* (MH*MH)))/2. +  (MH*MH);
	double u = -s - t + MChi*MChi + MChi*MChi + MH*MH + MH*MH;
	return 0.5*((2*token1*token4*token6*token7)/(t -  (MChi*MChi)) + (2*token1*token4*token6*token7)/(u -  (MChi*MChi)) - (2*token1*token4*token6*token8)/(-(t*token10) + token10* (MPsi*MPsi)) - (2*token1*token4*token6*token8)/(-(token10*u) + token10* (MPsi*MPsi)) +  (token1*token1) + (2*token7*token8* (token4*token4)* (token6*token6))/(token10*(t -  (MChi*MChi))*(t -  (MPsi*MPsi))) + (2*token7*token8* (token4*token4)* (token6*token6))/(token10*(u -  (MChi*MChi))*(u -  (MPsi*MPsi))) + (2*token7*token8* (token4*token4)* (token6*token6))/(token10*(-u +  (MChi*MChi))*(-t +  (MPsi*MPsi))) + (2*token7*token8* (token4*token4)* (token6*token6))/(token10*(-t +  (MChi*MChi))*(-u +  (MPsi*MPsi))) + (2* (token4*token4)* (token6*token6)* (token7*token7))/((-t +  (MChi*MChi))*(-u +  (MChi*MChi))) + ( (token4*token4)* (token6*token6)* (token7*token7))/ (( (MChi*MChi) - t)*( (MChi*MChi) - t)) + (2* (token4*token4)* (token6*token6)* (token8*token8))/((-t +  (MPsi*MPsi))*(-u +  (MPsi*MPsi))* (token10*token10)) + ( (token4*token4)* (token6*token6)* (token8*token8))/( (( (MPsi*MPsi) - t)*( (MPsi*MPsi) - t))* (token10*token10)) + ( (token4*token4)* (token6*token6)* (token7*token7))/ (( (MChi*MChi) - u)*( (MChi*MChi) - u)) + ( (token4*token4)* (token6*token6)* (token8*token8))/( (token10*token10)* (( (MPsi*MPsi) - u)*( (MPsi*MPsi) - u))) + (2*token1*token2*token3*token4*token5*(s -  (MH*MH)))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) + (2*token2*token3*token5*token6*token7*(-s +  (MH*MH))* (token4*token4))/((-t +  (MChi*MChi))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token2*token3*token5*token6*token7*(-s +  (MH*MH))* (token4*token4))/((-u +  (MChi*MChi))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token2*token3*token5*token6*token8*(-s +  (MH*MH))* (token4*token4))/(token10*(-t +  (MPsi*MPsi))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token2*token3*token5*token6*token8*(-s +  (MH*MH))* (token4*token4))/(token10*(-u +  (MPsi*MPsi))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + ( (token2*token2)* (token3*token3)* (token4*token4)* (token5*token5))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiChiAA(const double &cos_t, const double &s){
	return 0.5*((2* (s*s)* (token11*token11)* (token12*token12)* (token13*token13)* (token5*token5))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiChiZZ(const double &cos_t, const double &s){
	return 0.5*(((-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (token14*token14)* (token15*token15)* (token4*token4)* (token5*token5))/(4.* (MZ*MZ*MZ*MZ)* (token16*token16)* (token17*token17)* (token18*token18)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiwW(const double &cos_t, const double &s){
	return (((-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s))* (token14*token14)* (token4*token4)* (token5*token5))/(4.* (MW*MW*MW*MW)* (token16*token16)* (token18*token18)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiGG(const double &cos_t, const double &s){
	return 0.5*((16* (s*s)* (token13*token13)* (token19*token19)* (token20*token20)* (token21*token21))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiChiEe(const double &cos_t, const double &s){
	return ((2*(s - 4* (Me*Me))* (token13*token13)* (token22*token22)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiMUmu(const double &cos_t, const double &s){
	return ((2*(s - 4* (MMU*MMU))* (token13*token13)* (token24*token24)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiTAta(const double &cos_t, const double &s){
	return ((2*(s - 4* (MTA*MTA))* (token13*token13)* (token25*token25)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiUu(const double &cos_t, const double &s){
	return ((6*(s - 4* (MU*MU))* (token13*token13)* (token26*token26)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiCc(const double &cos_t, const double &s){
	return ((6*(s - 4* (MC*MC))* (token13*token13)* (token27*token27)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiTt(const double &cos_t, const double &s){
	return ((6*(s - 4* (MT*MT))* (token13*token13)* (token28*token28)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiDd(const double &cos_t, const double &s){
	return ((6*(s - 4* (MD*MD))* (token13*token13)* (token29*token29)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiSs(const double &cos_t, const double &s){
	return ((6*(s - 4* (MS*MS))* (token13*token13)* (token30*token30)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiChiBb(const double &cos_t, const double &s){
	return ((6*(s - 4* (MB*MB))* (token13*token13)* (token31*token31)* (token5*token5)* (token6*token6))/( (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
