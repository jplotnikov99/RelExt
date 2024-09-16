///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::ChiPsiHHfl(const double &cos_t, const double &s){
	return 2*flux(s, MChi,MPsi,MH,MH)*ChiPsiHH(cos_t, s);
}
double DT::ChiPsiAAfl(const double &cos_t, const double &s){
	return 2*flux(s, MChi,MPsi,0,0)*ChiPsiAA(cos_t, s);
}
double DT::ChiPsiZZfl(const double &cos_t, const double &s){
	return 2*flux(s, MChi,MPsi,MZ,MZ)*ChiPsiZZ(cos_t, s);
}
double DT::ChiPsiwWfl(const double &cos_t, const double &s){
	return 2*flux(s, MChi,MPsi,MW,MW)*ChiPsiwW(cos_t, s);
}
double DT::ChiPsiGGfl(const double &cos_t, const double &s){
	return 2*flux(s, MChi,MPsi,0,0)*ChiPsiGG(cos_t, s);
}
double DT::ChiPsiEefl(const double &cos_t, const double &s){
	return 2*flux(s, MChi,MPsi,Me,Me)*ChiPsiEe(cos_t, s);
}
double DT::ChiPsiMUmufl(const double &cos_t, const double &s){
	return 2*flux(s, MChi,MPsi,MMU,MMU)*ChiPsiMUmu(cos_t, s);
}
double DT::ChiPsiTAtafl(const double &cos_t, const double &s){
	return 2*flux(s, MChi,MPsi,MTA,MTA)*ChiPsiTAta(cos_t, s);
}
double DT::ChiPsiUufl(const double &cos_t, const double &s){
	return 2*flux(s, MChi,MPsi,MU,MU)*ChiPsiUu(cos_t, s);
}
double DT::ChiPsiCcfl(const double &cos_t, const double &s){
	return 2*flux(s, MChi,MPsi,MC,MC)*ChiPsiCc(cos_t, s);
}
double DT::ChiPsiTtfl(const double &cos_t, const double &s){
	return 2*flux(s, MChi,MPsi,MT,MT)*ChiPsiTt(cos_t, s);
}
double DT::ChiPsiDdfl(const double &cos_t, const double &s){
	return 2*flux(s, MChi,MPsi,MD,MD)*ChiPsiDd(cos_t, s);
}
double DT::ChiPsiSsfl(const double &cos_t, const double &s){
	return 2*flux(s, MChi,MPsi,MS,MS)*ChiPsiSs(cos_t, s);
}
double DT::ChiPsiBbfl(const double &cos_t, const double &s){
	return 2*flux(s, MChi,MPsi,MB,MB)*ChiPsiBb(cos_t, s);
}
