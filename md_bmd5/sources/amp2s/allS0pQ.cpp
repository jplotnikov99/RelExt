///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::S0pQVMu(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MS0*MS0) + s* (MU*MU) -  (MS0*MS0)* (MU*MU) +  (MphiQ*MphiQ)*(s +  (MU*MU)) + cos_t*s*sqrt(( (MphiQ*MphiQ*MphiQ*MphiQ) - 2* (MphiQ*MphiQ)*(s +  (MS0*MS0)) +  (( (MS0*MS0) - s)*( (MS0*MS0) - s)))/s)*sqrt( (( (MU*MU) - s)*( (MU*MU) - s))/s) -  (s*s))/(2.*s);
	double u = -s - t + MS0*MS0 + MphiQ*MphiQ + 0*0 + MU*MU;
	return ((48*(t*u - (s + t + u)* (MphiQ*MphiQ) +  (MphiQ*MphiQ*MphiQ*MphiQ) + (s + u)* (MU*MU) -  (MU*MU*MU*MU))* (token3*token3)* (token36*token36)* (token40*token40)* (token51*token51))/ (( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t)));
}
double DT::S0pQVMc(const double &cos_t, const double &s){
	using namespace PAR;
	double t = ( (MC*MC)*(s +  (MphiQ*MphiQ) -  (MS0*MS0)) + s*(-s +  (MphiQ*MphiQ) +  (MS0*MS0) + cos_t*sqrt( (( (MC*MC) - s)*( (MC*MC) - s))/s)*sqrt(( (MphiQ*MphiQ*MphiQ*MphiQ) - 2* (MphiQ*MphiQ)*(s +  (MS0*MS0)) +  (( (MS0*MS0) - s)*( (MS0*MS0) - s)))/s)))/(2.*s);
	double u = -s - t + MS0*MS0 + MphiQ*MphiQ + 0*0 + MC*MC;
	return ((48*(t*u + (s + u)* (MC*MC) -  (MC*MC*MC*MC) - (s + t + u)* (MphiQ*MphiQ) +  (MphiQ*MphiQ*MphiQ*MphiQ))* (token3*token3)* (token36*token36)* (token44*token44)* (token51*token51))/ (( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t)));
}
double DT::S0pQVMt(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MS0*MS0) + s* (MT*MT) -  (MS0*MS0)* (MT*MT) +  (MphiQ*MphiQ)*(s +  (MT*MT)) + cos_t*s*sqrt(( (MphiQ*MphiQ*MphiQ*MphiQ) - 2* (MphiQ*MphiQ)*(s +  (MS0*MS0)) +  (( (MS0*MS0) - s)*( (MS0*MS0) - s)))/s)*sqrt( (( (MT*MT) - s)*( (MT*MT) - s))/s) -  (s*s))/(2.*s);
	double u = -s - t + MS0*MS0 + MphiQ*MphiQ + 0*0 + MT*MT;
	return ((48*(t*u - (s + t + u)* (MphiQ*MphiQ) +  (MphiQ*MphiQ*MphiQ*MphiQ) + (s + u)* (MT*MT) -  (MT*MT*MT*MT))* (token3*token3)* (token36*token36)* (token48*token48)* (token51*token51))/ (( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t)));
}
double DT::S0pQMUs(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MphiQ*MphiQ) + s* (MS*MS) +  (MphiQ*MphiQ)* (MS*MS) + s* (MS0*MS0) -  (MS*MS)* (MS0*MS0) +  (MMU*MMU)*(s -  (MphiQ*MphiQ) +  (MS0*MS0)) + cos_t*s*sqrt(( (MMU*MMU*MMU*MMU) - 2* (MMU*MMU)*(s +  (MS*MS)) +  (( (MS*MS) - s)*( (MS*MS) - s)))/s)*sqrt(( (MphiQ*MphiQ*MphiQ*MphiQ) - 2* (MphiQ*MphiQ)*(s +  (MS0*MS0)) +  (( (MS0*MS0) - s)*( (MS0*MS0) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MS0*MS0 + MphiQ*MphiQ + MMU*MMU + MS*MS;
	return ((-48*(-(t*u) + (s + t + u)* (MphiQ*MphiQ) -  (MphiQ*MphiQ*MphiQ*MphiQ) - s* (MS*MS) - u* (MS*MS) +  (MMU*MMU)*(t - 2* (MphiQ*MphiQ) + 2* (MS*MS)) +  (MS*MS*MS*MS))* (token1*token1)* (token33*token33)* (token36*token36)* (token51*token51))/ (( (MchiM*MchiM) - t)*( (MchiM*MchiM) - t)));
}
double DT::S0pQMUb(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MMU*MMU) + s* (MphiQ*MphiQ) -  (MMU*MMU)* (MphiQ*MphiQ) +  (MB*MB)*(s +  (MphiQ*MphiQ) -  (MS0*MS0)) + s* (MS0*MS0) +  (MMU*MMU)* (MS0*MS0) + cos_t*s*sqrt(( (MB*MB*MB*MB) - 2* (MB*MB)*(s +  (MMU*MMU)) +  (( (MMU*MMU) - s)*( (MMU*MMU) - s)))/s)*sqrt(( (MphiQ*MphiQ*MphiQ*MphiQ) - 2* (MphiQ*MphiQ)*(s +  (MS0*MS0)) +  (( (MS0*MS0) - s)*( (MS0*MS0) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MS0*MS0 + MphiQ*MphiQ + MMU*MMU + MB*MB;
	return ((-48*(-(t*u) +  (MB*MB*MB*MB) +  (MB*MB)*(-s - u + 2* (MMU*MMU)) +  (MMU*MMU)*(t - 2* (MphiQ*MphiQ)) + s* (MphiQ*MphiQ) + t* (MphiQ*MphiQ) + u* (MphiQ*MphiQ) -  (MphiQ*MphiQ*MphiQ*MphiQ))* (token1*token1)* (token32*token32)* (token36*token36)* (token51*token51))/ (( (MchiM*MchiM) - t)*( (MchiM*MchiM) - t)));
}
