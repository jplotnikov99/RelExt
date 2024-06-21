///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::S0S0HH(const double &cos_t, const double &s){
	double t =  (MH*MH) + (-s + cos_t*sqrt(s - 4* (MH*MH))*sqrt(s - 4* (MS0*MS0)))/2. +  (MS0*MS0);
	double u = -s - t + MS0*MS0 + MS0*MS0 + MH*MH + MH*MH;
	return (2*token40*token68*token71*token72)/(t -  (MS0*MS0)) + (2*token40*token68*token71*token72)/(u -  (MS0*MS0)) +  (token68*token68) + (2* (token40*token40)* (token71*token71)* (token72*token72))/((-t +  (MS0*MS0))*(-u +  (MS0*MS0))) + ( (token40*token40)* (token71*token71)* (token72*token72))/ (( (MS0*MS0) - t)*( (MS0*MS0) - t)) + ( (token40*token40)* (token71*token71)* (token72*token72))/ (( (MS0*MS0) - u)*( (MS0*MS0) - u)) + (2*token68*token69*token70*token71*token8*(s -  (MH*MH)))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) + (2*token40*token69*token70*token72*token8*(-s +  (MH*MH))* (token71*token71))/((-t +  (MS0*MS0))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token40*token69*token70*token72*token8*(-s +  (MH*MH))* (token71*token71))/((-u +  (MS0*MS0))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + ( (token69*token69)* (token70*token70)* (token71*token71)* (token8*token8))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::S0S0ZZ(const double &cos_t, const double &s){
	return ((-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (token42*token42)* (token46*token46)* (token71*token71)* (token8*token8))/(4.* (MZ*MZ*MZ*MZ)* (token4*token4)* (token48*token48)* (token49*token49)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::S0S0wW(const double &cos_t, const double &s){
	return ((-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s))* (token46*token46)* (token71*token71)* (token8*token8))/(4.* (MW*MW*MW*MW)* (token4*token4)* (token49*token49)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::S0S0VMvm(const double &cos_t, const double &s){
	double t = (-s + cos_t*sqrt(s)*sqrt(s - 4* (MS0*MS0)))/2. +  (MS0*MS0);
	double u = -s - t + MS0*MS0 + MS0*MS0 + 0*0 + 0*0;
	return (-128*(t*u - (s + t + u)* (MS0*MS0) +  (MS0*MS0*MS0*MS0))* (token12*token12)* (token2*token2))/(9.*(-t +  (Mchi0*Mchi0))*(-u +  (Mchi0*Mchi0))) + (64*(t*u - (s + t + u)* (MS0*MS0) +  (MS0*MS0*MS0*MS0))* (token12*token12)* (token2*token2))/(9.* (( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t))) + (64*(t*u - (s + t + u)* (MS0*MS0) +  (MS0*MS0*MS0*MS0))* (token12*token12)* (token2*token2))/(9.* (( (Mchi0*Mchi0) - u)*( (Mchi0*Mchi0) - u)));
}
double DT::S0S0Ee(const double &cos_t, const double &s){
	return (2*(s - 4* (Me*Me))* (token40*token40)* (token74*token74)* (token8*token8)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::S0S0MUmu(const double &cos_t, const double &s){
	double t =  (MMU*MMU) + (-s + cos_t*sqrt(s - 4* (MMU*MMU))*sqrt(s - 4* (MS0*MS0)))/2. +  (MS0*MS0);
	double u = -s - t + MS0*MS0 + MS0*MS0 + MMU*MMU + MMU*MMU;
	return (-32*(t*u +  (MMU*MMU*MMU*MMU) - (s + t + u)* (MS0*MS0) + 2* (MMU*MMU)* (MS0*MS0) +  (MS0*MS0*MS0*MS0))* (token12*token12)* (token2*token2))/((-t +  (MchiM*MchiM))*(-u +  (MchiM*MchiM))) - (16*(-(t*u) + 3* (MMU*MMU*MMU*MMU) + (s + t + u)* (MS0*MS0) -  (MMU*MMU)*(s - t + u + 2* (MS0*MS0)) -  (MS0*MS0*MS0*MS0))* (token12*token12)* (token2*token2))/ (( (MchiM*MchiM) - t)*( (MchiM*MchiM) - t)) - (16*(-(t*u) + 3* (MMU*MMU*MMU*MMU) + (s + t + u)* (MS0*MS0) -  (MMU*MMU)*(s + t - u + 2* (MS0*MS0)) -  (MS0*MS0*MS0*MS0))* (token12*token12)* (token2*token2))/ (( (MchiM*MchiM) - u)*( (MchiM*MchiM) - u)) + (8*MMU*token12*token2*token40*token5*token8*token9*(-s +  (MH*MH))*(-s + t - u + 4* (MMU*MMU)))/(token10*(-t +  (MchiM*MchiM))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (8*MMU*token12*token2*token40*token5*token8*token9*(-s +  (MH*MH))*(-s - t + u + 4* (MMU*MMU)))/(token10*(-u +  (MchiM*MchiM))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*(s - 4* (MMU*MMU))* (token40*token40)* (token5*token5)* (token8*token8)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::S0S0TAta(const double &cos_t, const double &s){
	return (2*(s - 4* (MTA*MTA))* (token40*token40)* (token75*token75)* (token8*token8)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::S0S0Uu(const double &cos_t, const double &s){
	return (6*(s - 4* (MU*MU))* (token40*token40)* (token60*token60)* (token8*token8)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::S0S0Cc(const double &cos_t, const double &s){
	return (6*(s - 4* (MC*MC))* (token40*token40)* (token61*token61)* (token8*token8)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::S0S0Tt(const double &cos_t, const double &s){
	return (6*(s - 4* (MT*MT))* (token40*token40)* (token62*token62)* (token8*token8)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::S0S0Dd(const double &cos_t, const double &s){
	return (6*(s - 4* (MD*MD))* (token40*token40)* (token76*token76)* (token8*token8)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::S0S0Ss(const double &cos_t, const double &s){
	return (6*(s - 4* (MS*MS))* (token23*token23)* (token40*token40)* (token8*token8)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::S0S0Bb(const double &cos_t, const double &s){
	return (6*(s - 4* (MB*MB))* (token25*token25)* (token40*token40)* (token8*token8)* (token9*token9))/( (token10*token10)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
