///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::PsiPsiHH(const double &cos_t, const double &s){
	using namespace PAR;
	double t =  (MH*MH) + (-s + cos_t*sqrt(s - 4* (MH*MH))*sqrt(s - 4* (MPsi*MPsi)))/2. +  (MPsi*MPsi);
	double u = -s - t + MPsi*MPsi + MPsi*MPsi + MH*MH + MH*MH;
	return 0.5*((2*token36*token4*token6*token8)/(token10*(t -  (MChi*MChi)/1000.)) + (2*token36*token4*token6*token8)/(token10*(u -  (MChi*MChi)/1000.)) + (2*token36*token37*token4*token6)/(t -  (MPsi*MPsi)/1000.) + (2*token36*token37*token4*token6)/(u -  (MPsi*MPsi)/1000.) +  (token36*token36) + (2*token37*token8* (token4*token4)* (token6*token6))/(token10*(t -  (MChi*MChi)/1000.)*(t -  (MPsi*MPsi)/1000.)) + (2*token37*token8* (token4*token4)* (token6*token6))/(token10*(u -  (MChi*MChi)/1000.)*(t -  (MPsi*MPsi)/1000.)) + (2*token37*token8* (token4*token4)* (token6*token6))/(token10*(t -  (MChi*MChi)/1000.)*(u -  (MPsi*MPsi)/1000.)) + (2*token37*token8* (token4*token4)* (token6*token6))/(token10*(u -  (MChi*MChi)/1000.)*(u -  (MPsi*MPsi)/1000.)) + (2* (token37*token37)* (token4*token4)* (token6*token6))/((t -  (MPsi*MPsi)/1000.)*(u -  (MPsi*MPsi)/1000.)) + ( (token37*token37)* (token4*token4)* (token6*token6))/ ((-0.001* (MPsi*MPsi) + t)*(-0.001* (MPsi*MPsi) + t)) + (2* (token4*token4)* (token6*token6)* (token8*token8))/((t -  (MChi*MChi)/1000.)*(u -  (MChi*MChi)/1000.)* (token10*token10)) + ( (token4*token4)* (token6*token6)* (token8*token8))/( ((-0.001* (MChi*MChi) + t)*(-0.001* (MChi*MChi) + t))* (token10*token10)) + ( (token4*token4)* (token6*token6)* (token8*token8))/( (token10*token10)* ((-0.001* (MChi*MChi) + u)*(-0.001* (MChi*MChi) + u))) + ( (token37*token37)* (token4*token4)* (token6*token6))/ ((-0.001* (MPsi*MPsi) + u)*(-0.001* (MPsi*MPsi) + u)) + (2*token2*token3*token35*token36*token4*(s -  (MH*MH)))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) + (2000*token2*token3*token35*token6*token8*(-s +  (MH*MH))* (token4*token4))/(token10*(-1000*t +  (MChi*MChi))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2000*token2*token3*token35*token6*token8*(-s +  (MH*MH))* (token4*token4))/(token10*(-1000*u +  (MChi*MChi))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2000*token2*token3*token35*token37*token6*(-s +  (MH*MH))* (token4*token4))/((-1000*t +  (MPsi*MPsi))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2000*token2*token3*token35*token37*token6*(-s +  (MH*MH))* (token4*token4))/((-1000*u +  (MPsi*MPsi))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + ( (token2*token2)* (token3*token3)* (token35*token35)* (token4*token4))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
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
