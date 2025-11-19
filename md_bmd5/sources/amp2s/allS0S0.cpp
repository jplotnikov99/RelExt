///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::S0S0HH(const double &cos_t, const double &s){
	using namespace PAR;
	double t =  (MH*MH) + (-s + cos_t*sqrt(s - 4* (MH*MH))*sqrt(s - 4* (MS0*MS0)))/2. +  (MS0*MS0);
	double u = -s - t + MS0*MS0 + MS0*MS0 + MH*MH + MH*MH;
	return 0.5*((2*token5*token71*token74*token75)/(t -  (MS0*MS0)/1000.) + (2*token5*token71*token74*token75)/(u -  (MS0*MS0)/1000.) +  (token71*token71) + (2* (token5*token5)* (token74*token74)* (token75*token75))/((t -  (MS0*MS0)/1000.)*(u -  (MS0*MS0)/1000.)) + ( (token5*token5)* (token74*token74)* (token75*token75))/ ((-0.001* (MS0*MS0) + t)*(-0.001* (MS0*MS0) + t)) + ( (token5*token5)* (token74*token74)* (token75*token75))/ ((-0.001* (MS0*MS0) + u)*(-0.001* (MS0*MS0) + u)) + (2*token52*token71*token72*token73*token74*(s -  (MH*MH)))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) + (2000*token5*token52*token72*token73*token75*(-s +  (MH*MH))* (token74*token74))/((-1000*t +  (MS0*MS0))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2000*token5*token52*token72*token73*token75*(-s +  (MH*MH))* (token74*token74))/((-1000*u +  (MS0*MS0))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + ( (token52*token52)* (token72*token72)* (token73*token73)* (token74*token74))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::S0S0ZZ(const double &cos_t, const double &s){
	using namespace PAR;
	return 0.5*(((-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (token14*token14)* (token52*token52)* (token74*token74)* (token9*token9))/(4.* (MZ*MZ*MZ*MZ)* (token18*token18)* (token19*token19)* (token4*token4)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::S0S0wW(const double &cos_t, const double &s){
	using namespace PAR;
	return (((-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s))* (token14*token14)* (token52*token52)* (token74*token74))/(4.* (MW*MW*MW*MW)* (token19*token19)* (token4*token4)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::S0S0VMvm(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (-s + cos_t*sqrt(s)*sqrt(s - 4* (MS0*MS0)))/2. +  (MS0*MS0);
	double u = -s - t + MS0*MS0 + MS0*MS0 + 0*0 + 0*0;
	return ((-32000000*(t*u - (s + t + u)* (MS0*MS0) +  (MS0*MS0*MS0*MS0))* (token2*token2)* (token54*token54))/((-1000*t +  (Mchi0*Mchi0))*(-1000*u +  (Mchi0*Mchi0))) + (16000000*(t*u - (s + t + u)* (MS0*MS0) +  (MS0*MS0*MS0*MS0))* (token2*token2)* (token54*token54))/ (( (Mchi0*Mchi0) - 1000*t)*( (Mchi0*Mchi0) - 1000*t)) + (16000000*(t*u - (s + t + u)* (MS0*MS0) +  (MS0*MS0*MS0*MS0))* (token2*token2)* (token54*token54))/ (( (Mchi0*Mchi0) - 1000*u)*( (Mchi0*Mchi0) - 1000*u)));
}
double DT::S0S0Ee(const double &cos_t, const double &s){
	using namespace PAR;
	return ((2*(s - 4* (Me*Me))* (token10*token10)* (token5*token5)* (token52*token52)* (token77*token77))/( (token35*token35)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::S0S0MUmu(const double &cos_t, const double &s){
	using namespace PAR;
	double t =  (MMU*MMU) + (-s + cos_t*sqrt(s - 4* (MMU*MMU))*sqrt(s - 4* (MS0*MS0)))/2. +  (MS0*MS0);
	double u = -s - t + MS0*MS0 + MS0*MS0 + MMU*MMU + MMU*MMU;
	return ((-32000000*(t*u +  (MMU*MMU*MMU*MMU) - (s + t + u)* (MS0*MS0) + 2* (MMU*MMU)* (MS0*MS0) +  (MS0*MS0*MS0*MS0))* (token2*token2)* (token54*token54))/((-1000*t +  (MchiM*MchiM))*(-1000*u +  (MchiM*MchiM))) - (16000000*(-(t*u) + 3* (MMU*MMU*MMU*MMU) + (s + t + u)* (MS0*MS0) -  (MMU*MMU)*(s - t + u + 2* (MS0*MS0)) -  (MS0*MS0*MS0*MS0))* (token2*token2)* (token54*token54))/ (( (MchiM*MchiM) - 1000*t)*( (MchiM*MchiM) - 1000*t)) - (16000000*(-(t*u) + 3* (MMU*MMU*MMU*MMU) + (s + t + u)* (MS0*MS0) -  (MMU*MMU)*(s + t - u + 2* (MS0*MS0)) -  (MS0*MS0*MS0*MS0))* (token2*token2)* (token54*token54))/ (( (MchiM*MchiM) - 1000*u)*( (MchiM*MchiM) - 1000*u)) + (8000*MMU*token10*token2*token5*token50*token52*token54*(-s +  (MH*MH))*(-s + t - u + 4* (MMU*MMU)))/(token35*(-1000*t +  (MchiM*MchiM))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (8000*MMU*token10*token2*token5*token50*token52*token54*(-s +  (MH*MH))*(-s - t + u + 4* (MMU*MMU)))/(token35*(-1000*u +  (MchiM*MchiM))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*(s - 4* (MMU*MMU))* (token10*token10)* (token5*token5)* (token50*token50)* (token52*token52))/( (token35*token35)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::S0S0TAta(const double &cos_t, const double &s){
	using namespace PAR;
	return ((2*(s - 4* (MTA*MTA))* (token10*token10)* (token5*token5)* (token52*token52)* (token78*token78))/( (token35*token35)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::S0S0Uu(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MU*MU))* (token10*token10)* (token5*token5)* (token52*token52)* (token67*token67))/( (token35*token35)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::S0S0Cc(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MC*MC))* (token10*token10)* (token5*token5)* (token52*token52)* (token68*token68))/( (token35*token35)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::S0S0Tt(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MT*MT))* (token10*token10)* (token5*token5)* (token52*token52)* (token69*token69))/( (token35*token35)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::S0S0Dd(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MD*MD))* (token10*token10)* (token5*token5)* (token52*token52)* (token79*token79))/( (token35*token35)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::S0S0Ss(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MS*MS))* (token10*token10)* (token5*token5)* (token52*token52)* (token56*token56))/( (token35*token35)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
double DT::S0S0Bb(const double &cos_t, const double &s){
	using namespace PAR;
	return ((6*(s - 4* (MB*MB))* (token10*token10)* (token5*token5)* (token52*token52)* (token58*token58))/( (token35*token35)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))));
}
