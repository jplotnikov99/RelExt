///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::A0A0HH(const double &cos_t, const double &s){
	double t =  (MA0*MA0) + (-s + cos_t*sqrt(s - 4* (MA0*MA0))*sqrt(s - 4* (MH*MH)))/2. +  (MH*MH);
	double u = -s - t + MA0*MA0 + MA0*MA0 + MH*MH + MH*MH;
	return 0.5*((2*token41*token74*token80*token82)/(t -  (MA0*MA0)) + (2*token41*token74*token80*token82)/(u -  (MA0*MA0)) +  (token80*token80) + (2* (token41*token41)* (token74*token74)* (token82*token82))/((-t +  (MA0*MA0))*(-u +  (MA0*MA0))) + ( (token41*token41)* (token74*token74)* (token82*token82))/ (( (MA0*MA0) - t)*( (MA0*MA0) - t)) + ( (token41*token41)* (token74*token74)* (token82*token82))/ (( (MA0*MA0) - u)*( (MA0*MA0) - u)) + (2*token41*token73*token80*token81*token82*(-s +  (MH*MH))* (token74*token74))/((-t +  (MA0*MA0))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token41*token73*token80*token81*token82*(-s +  (MH*MH))* (token74*token74))/((-u +  (MA0*MA0))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token73*token74*token81*(s -  (MH*MH))* (token80*token80))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) + ( (token73*token73)* (token74*token74)* (token80*token80)* (token81*token81))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::A0A0ZZ(const double &cos_t, const double &s){
	return 0.5*(((-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (token20*token20)* (token43*token43)* (token47*token47)* (token74*token74))/(4.* (MZ*MZ*MZ*MZ)* (token4*token4)* (token49*token49)* (token50*token50)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::A0A0wW(const double &cos_t, const double &s){
	return (((-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s))* (token20*token20)* (token47*token47)* (token74*token74))/(4.* (MW*MW*MW*MW)* (token4*token4)* (token50*token50)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::A0A0VMvm(const double &cos_t, const double &s){
	double t = (-s + cos_t*sqrt(s)*sqrt(s - 4* (MA0*MA0)))/2. +  (MA0*MA0);
	double u = -s - t + MA0*MA0 + MA0*MA0 + 0*0 + 0*0;
	return ((-32*(t*u - (s + t + u)* (MA0*MA0) +  (MA0*MA0*MA0*MA0))* (token12*token12)* (token2*token2))/((-t +  (Mchi0*Mchi0))*(-u +  (Mchi0*Mchi0))) + (16*(t*u - (s + t + u)* (MA0*MA0) +  (MA0*MA0*MA0*MA0))* (token12*token12)* (token2*token2))/ (( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t)) + (16*(t*u - (s + t + u)* (MA0*MA0) +  (MA0*MA0*MA0*MA0))* (token12*token12)* (token2*token2))/ (( (Mchi0*Mchi0) - u)*( (Mchi0*Mchi0) - u)));
}
double DT::A0A0Ee(const double &cos_t, const double &s){
	return ((2*(s - 4* (Me*Me))* (token77*token77)* (token80*token80)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::A0A0MUmu(const double &cos_t, const double &s){
	double t =  (MA0*MA0) + (-s + cos_t*sqrt(s - 4* (MA0*MA0))*sqrt(s - 4* (MMU*MMU)))/2. +  (MMU*MMU);
	double u = -s - t + MA0*MA0 + MA0*MA0 + MMU*MMU + MMU*MMU;
	return ((-32*(t*u +  (MA0*MA0*MA0*MA0) +  (MA0*MA0)*(-s - t - u + 2* (MMU*MMU)) +  (MMU*MMU*MMU*MMU))* (token12*token12)* (token2*token2))/((-t +  (MchiM*MchiM))*(-u +  (MchiM*MchiM))) + (16*(t*u +  (MA0*MA0*MA0*MA0) + (s - t + u)* (MMU*MMU) +  (MA0*MA0)*(-s - t - u + 2* (MMU*MMU)) - 3* (MMU*MMU*MMU*MMU))* (token12*token12)* (token2*token2))/ (( (MchiM*MchiM) - t)*( (MchiM*MchiM) - t)) + (16*(t*u +  (MA0*MA0*MA0*MA0) + (s + t - u)* (MMU*MMU) +  (MA0*MA0)*(-s - t - u + 2* (MMU*MMU)) - 3* (MMU*MMU*MMU*MMU))* (token12*token12)* (token2*token2))/ (( (MchiM*MchiM) - u)*( (MchiM*MchiM) - u)) + (8*MMU*token12*token2*token5*token80*token9*(-s +  (MH*MH))*(-s + t - u + 4* (MMU*MMU)))/(token10*(-t +  (MchiM*MchiM))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (8*MMU*token12*token2*token5*token80*token9*(-s +  (MH*MH))*(-s - t + u + 4* (MMU*MMU)))/(token10*(-u +  (MchiM*MchiM))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*(s - 4* (MMU*MMU))* (token5*token5)* (token80*token80)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::A0A0TAta(const double &cos_t, const double &s){
	return ((2*(s - 4* (MTA*MTA))* (token78*token78)* (token80*token80)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::A0A0Uu(const double &cos_t, const double &s){
	return ((6*(s - 4* (MU*MU))* (token63*token63)* (token80*token80)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::A0A0Cc(const double &cos_t, const double &s){
	return ((6*(s - 4* (MC*MC))* (token64*token64)* (token80*token80)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::A0A0Tt(const double &cos_t, const double &s){
	return ((6*(s - 4* (MT*MT))* (token65*token65)* (token80*token80)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::A0A0Dd(const double &cos_t, const double &s){
	return ((6*(s - 4* (MD*MD))* (token79*token79)* (token80*token80)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::A0A0Ss(const double &cos_t, const double &s){
	return ((6*(s - 4* (MS*MS))* (token23*token23)* (token80*token80)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::A0A0Bb(const double &cos_t, const double &s){
	return ((6*(s - 4* (MB*MB))* (token25*token25)* (token80*token80)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
