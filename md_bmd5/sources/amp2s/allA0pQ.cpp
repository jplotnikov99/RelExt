///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::A0pQVMu(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MphiQ*MphiQ) +  (MA0*MA0)*(s -  (MU*MU)) + s* (MU*MU) +  (MphiQ*MphiQ)* (MU*MU) + cos_t*s*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MphiQ*MphiQ)) +  (( (MphiQ*MphiQ) - s)*( (MphiQ*MphiQ) - s)))/s)*sqrt( (( (MU*MU) - s)*( (MU*MU) - s))/s) -  (s*s))/(2.*s);
	double u = -s - t + MA0*MA0 + MphiQ*MphiQ + 0*0 + MU*MU;
	return ((3*(t*u - (s + t + u)* (MphiQ*MphiQ) +  (MphiQ*MphiQ*MphiQ*MphiQ) + (s + u)* (MU*MU) -  (MU*MU*MU*MU))* (token36*token36)* (token40*token40)* (token51*token51))/ (( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t)));
}
double DT::A0pQVMc(const double &cos_t, const double &s){
	using namespace PAR;
	double t = ( (MA0*MA0)*(s -  (MC*MC)) + s* (MC*MC) + s* (MphiQ*MphiQ) +  (MC*MC)* (MphiQ*MphiQ) + cos_t*s*sqrt( (( (MC*MC) - s)*( (MC*MC) - s))/s)*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MphiQ*MphiQ)) +  (( (MphiQ*MphiQ) - s)*( (MphiQ*MphiQ) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MA0*MA0 + MphiQ*MphiQ + 0*0 + MC*MC;
	return ((3*(t*u + (s + u)* (MC*MC) -  (MC*MC*MC*MC) - (s + t + u)* (MphiQ*MphiQ) +  (MphiQ*MphiQ*MphiQ*MphiQ))* (token36*token36)* (token44*token44)* (token51*token51))/ (( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t)));
}
double DT::A0pQVMt(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MphiQ*MphiQ) +  (MA0*MA0)*(s -  (MT*MT)) + s* (MT*MT) +  (MphiQ*MphiQ)* (MT*MT) + cos_t*s*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MphiQ*MphiQ)) +  (( (MphiQ*MphiQ) - s)*( (MphiQ*MphiQ) - s)))/s)*sqrt( (( (MT*MT) - s)*( (MT*MT) - s))/s) -  (s*s))/(2.*s);
	double u = -s - t + MA0*MA0 + MphiQ*MphiQ + 0*0 + MT*MT;
	return ((3*(t*u - (s + t + u)* (MphiQ*MphiQ) +  (MphiQ*MphiQ*MphiQ*MphiQ) + (s + u)* (MT*MT) -  (MT*MT*MT*MT))* (token36*token36)* (token48*token48)* (token51*token51))/ (( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t)));
}
double DT::A0pQMUs(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MMU*MMU) + s* (MphiQ*MphiQ) -  (MMU*MMU)* (MphiQ*MphiQ) +  (MA0*MA0)*(s +  (MMU*MMU) -  (MS*MS)) + s* (MS*MS) +  (MphiQ*MphiQ)* (MS*MS) + cos_t*s*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MphiQ*MphiQ)) +  (( (MphiQ*MphiQ) - s)*( (MphiQ*MphiQ) - s)))/s)*sqrt(( (MMU*MMU*MMU*MMU) - 2* (MMU*MMU)*(s +  (MS*MS)) +  (( (MS*MS) - s)*( (MS*MS) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MA0*MA0 + MphiQ*MphiQ + MMU*MMU + MS*MS;
	return ((-3*(-(t*u) + (s + t + u)* (MphiQ*MphiQ) -  (MphiQ*MphiQ*MphiQ*MphiQ) - s* (MS*MS) - u* (MS*MS) +  (MMU*MMU)*(t - 2* (MphiQ*MphiQ) + 2* (MS*MS)) +  (MS*MS*MS*MS))* (token33*token33)* (token36*token36)* (token51*token51))/ (( (MchiM*MchiM) - t)*( (MchiM*MchiM) - t)));
}
double DT::A0pQMUb(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MB*MB) + s* (MMU*MMU) +  (MA0*MA0)*(s -  (MB*MB) +  (MMU*MMU)) + s* (MphiQ*MphiQ) +  (MB*MB)* (MphiQ*MphiQ) -  (MMU*MMU)* (MphiQ*MphiQ) + cos_t*s*sqrt(( (MB*MB*MB*MB) - 2* (MB*MB)*(s +  (MMU*MMU)) +  (( (MMU*MMU) - s)*( (MMU*MMU) - s)))/s)*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MphiQ*MphiQ)) +  (( (MphiQ*MphiQ) - s)*( (MphiQ*MphiQ) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MA0*MA0 + MphiQ*MphiQ + MMU*MMU + MB*MB;
	return ((3*(t*u -  (MB*MB*MB*MB) +  (MB*MB)*(s + u - 2* (MMU*MMU)) - s* (MphiQ*MphiQ) - t* (MphiQ*MphiQ) - u* (MphiQ*MphiQ) +  (MMU*MMU)*(-t + 2* (MphiQ*MphiQ)) +  (MphiQ*MphiQ*MphiQ*MphiQ))* (token32*token32)* (token36*token36)* (token51*token51))/ (( (MchiM*MchiM) - t)*( (MchiM*MchiM) - t)));
}
