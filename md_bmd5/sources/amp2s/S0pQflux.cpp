///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::S0pQVMufl(const double &cos_t, const double &s){
	return 2*2*flux(s, MS0,MphiQ,0,MU)*S0pQVMu(cos_t, s);
}
double DT::S0pQVMcfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MS0,MphiQ,0,MC)*S0pQVMc(cos_t, s);
}
double DT::S0pQVMtfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MS0,MphiQ,0,MT)*S0pQVMt(cos_t, s);
}
double DT::S0pQMUsfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MS0,MphiQ,MMU,MS)*S0pQMUs(cos_t, s);
}
double DT::S0pQMUbfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MS0,MphiQ,MMU,MB)*S0pQMUb(cos_t, s);
}
