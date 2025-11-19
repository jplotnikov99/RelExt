///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::S0A0VMvm(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (-s +  (MA0*MA0) +  (MS0*MS0) + cos_t*sqrt(s)*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MS0*MS0)) +  (( (MS0*MS0) - s)*( (MS0*MS0) - s)))/s))/2.;
	double u = -s - t + MS0*MS0 + MA0*MA0 + 0*0 + 0*0;
	return ((500000*(t*u - (s + t + u)* (MA0*MA0) +  (MA0*MA0*MA0*MA0))* (token2*token2))/((-1000*t +  (Mchi0*Mchi0))*(-1000*u +  (Mchi0*Mchi0))) + (250000*(t*u - (s + t + u)* (MA0*MA0) +  (MA0*MA0*MA0*MA0))* (token2*token2))/ (( (Mchi0*Mchi0) - 1000*t)*( (Mchi0*Mchi0) - 1000*t)) + (250000*(t*u - (s + t + u)* (MA0*MA0) +  (MA0*MA0*MA0*MA0))* (token2*token2))/ (( (Mchi0*Mchi0) - 1000*u)*( (Mchi0*Mchi0) - 1000*u)));
}
double DT::S0A0MUmu(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (-s +  (MA0*MA0) + 2* (MMU*MMU) +  (MS0*MS0) + cos_t*sqrt(s - 4* (MMU*MMU))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MS0*MS0)) +  (( (MS0*MS0) - s)*( (MS0*MS0) - s)))/s))/2.;
	double u = -s - t + MS0*MS0 + MA0*MA0 + MMU*MMU + MMU*MMU;
	return ((500000*(t*u +  (MA0*MA0*MA0*MA0) +  (MA0*MA0)*(-s - t - u + 2* (MMU*MMU)) +  (MMU*MMU*MMU*MMU))* (token2*token2))/((-1000*t +  (MchiM*MchiM))*(-1000*u +  (MchiM*MchiM))) + (250000*(t*u +  (MA0*MA0*MA0*MA0) + (s - t + u)* (MMU*MMU) +  (MA0*MA0)*(-s - t - u + 2* (MMU*MMU)) - 3* (MMU*MMU*MMU*MMU))* (token2*token2))/ (( (MchiM*MchiM) - 1000*t)*( (MchiM*MchiM) - 1000*t)) + (250000*(t*u +  (MA0*MA0*MA0*MA0) + (s + t - u)* (MMU*MMU) +  (MA0*MA0)*(-s - t - u + 2* (MMU*MMU)) - 3* (MMU*MMU*MMU*MMU))* (token2*token2))/ (( (MchiM*MchiM) - 1000*u)*( (MchiM*MchiM) - 1000*u)));
}
