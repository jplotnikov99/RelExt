///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::ChiPsiHH(const double &cos_t, const double &s){
	double t = (-s +  (MChi*MChi) + 2* (MH*MH) +  (MPsi*MPsi) + cos_t*sqrt(s - 4* (MH*MH))*sqrt(( (MChi*MChi*MChi*MChi) - 2* (MChi*MChi)*(s +  (MPsi*MPsi)) +  (( (MPsi*MPsi) - s)*( (MPsi*MPsi) - s)))/s))/2.;
	double u = -s - t + MChi*MChi + MPsi*MPsi + MH*MH + MH*MH;
	return 0.5*((token32*token34*token4*token5*token6)/(token16*(t -  (MChi*MChi))) + (token32*token34*token4*token5*token6)/(token16*(u -  (MChi*MChi))) + (token32*token34*token35*token4*token6)/(token16*(t -  (MPsi*MPsi))) + (token32*token34*token35*token4*token6)/(token16*(u -  (MPsi*MPsi))) +  (token32*token32)/4. + (2*token35*token5* (token34*token34)* (token4*token4)* (token6*token6))/((t -  (MChi*MChi))*(t -  (MPsi*MPsi))* (token16*token16)) + (2*token35*token5* (token34*token34)* (token4*token4)* (token6*token6))/((u -  (MChi*MChi))*(u -  (MPsi*MPsi))* (token16*token16)) + (2*token35*token5* (token34*token34)* (token4*token4)* (token6*token6))/((-u +  (MChi*MChi))*(-t +  (MPsi*MPsi))* (token16*token16)) + (2*token35*token5* (token34*token34)* (token4*token4)* (token6*token6))/((-t +  (MChi*MChi))*(-u +  (MPsi*MPsi))* (token16*token16)) + (2* (token34*token34)* (token35*token35)* (token4*token4)* (token6*token6))/((-t +  (MPsi*MPsi))*(-u +  (MPsi*MPsi))* (token16*token16)) + ( (token34*token34)* (token35*token35)* (token4*token4)* (token6*token6))/( (( (MPsi*MPsi) - t)*( (MPsi*MPsi) - t))* (token16*token16)) + (2* (token34*token34)* (token4*token4)* (token5*token5)* (token6*token6))/((-t +  (MChi*MChi))*(-u +  (MChi*MChi))* (token16*token16)) + ( (token34*token34)* (token4*token4)* (token5*token5)* (token6*token6))/( (( (MChi*MChi) - t)*( (MChi*MChi) - t))* (token16*token16)) + ( (token34*token34)* (token4*token4)* (token5*token5)* (token6*token6))/( (token16*token16)* (( (MChi*MChi) - u)*( (MChi*MChi) - u))) + ( (token34*token34)* (token35*token35)* (token4*token4)* (token6*token6))/( (token16*token16)* (( (MPsi*MPsi) - u)*( (MPsi*MPsi) - u))) + (token3*token32*token33*token34*token4*(s -  (MH*MH)))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) + (2*token3*token33*token5*token6*(-s +  (MH*MH))* (token34*token34)* (token4*token4))/(token16*(-t +  (MChi*MChi))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token3*token33*token5*token6*(-s +  (MH*MH))* (token34*token34)* (token4*token4))/(token16*(-u +  (MChi*MChi))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token3*token33*token35*token6*(-s +  (MH*MH))* (token34*token34)* (token4*token4))/(token16*(-t +  (MPsi*MPsi))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token3*token33*token35*token6*(-s +  (MH*MH))* (token34*token34)* (token4*token4))/(token16*(-u +  (MPsi*MPsi))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + ( (token3*token3)* (token33*token33)* (token34*token34)* (token4*token4))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiPsiAA(const double &cos_t, const double &s){
	return 0.5*((2* (s*s)* (token11*token11)* (token12*token12)* (token13*token13)* (token34*token34))/( (token16*token16)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiZZ(const double &cos_t, const double &s){
	return 0.5*(((-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (token14*token14)* (token15*token15)* (token34*token34)* (token4*token4))/(4.* (MZ*MZ*MZ*MZ)* (token10*token10)* (token17*token17)* (token18*token18)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiwW(const double &cos_t, const double &s){
	return (((-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s))* (token14*token14)* (token34*token34)* (token4*token4))/(4.* (MW*MW*MW*MW)* (token10*token10)* (token18*token18)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiGG(const double &cos_t, const double &s){
	return 0.5*((16* (s*s)* (token11*token11)* (token13*token13)* (token20*token20)* (token34*token34))/( (token16*token16)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiEe(const double &cos_t, const double &s){
	return ((2*(s - 4* (Me*Me))* (token13*token13)* (token22*token22)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiMUmu(const double &cos_t, const double &s){
	return ((2*(s - 4* (MMU*MMU))* (token13*token13)* (token24*token24)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiTAta(const double &cos_t, const double &s){
	return ((2*(s - 4* (MTA*MTA))* (token13*token13)* (token25*token25)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiUu(const double &cos_t, const double &s){
	return ((6*(s - 4* (MU*MU))* (token13*token13)* (token26*token26)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiCc(const double &cos_t, const double &s){
	return ((6*(s - 4* (MC*MC))* (token13*token13)* (token27*token27)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiTt(const double &cos_t, const double &s){
	return ((6*(s - 4* (MT*MT))* (token13*token13)* (token28*token28)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiDd(const double &cos_t, const double &s){
	return ((6*(s - 4* (MD*MD))* (token13*token13)* (token29*token29)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiSs(const double &cos_t, const double &s){
	return ((6*(s - 4* (MS*MS))* (token13*token13)* (token30*token30)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::ChiPsiBb(const double &cos_t, const double &s){
	return ((6*(s - 4* (MB*MB))* (token13*token13)* (token31*token31)* (token34*token34)* (token6*token6))/( (token16*token16)* (token23*token23)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
