///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::PsiPsiHHfl(const double &cos_t, const double &s){
	return flux(s, MPsi,MPsi,MH,MH)*PsiPsiHH(cos_t, s);
}
double DT::PsiPsiAAfl(const double &cos_t, const double &s){
	return flux(s, MPsi,MPsi,0,0)*PsiPsiAA(cos_t, s);
}
double DT::PsiPsiZZfl(const double &cos_t, const double &s){
	return flux(s, MPsi,MPsi,MZ,MZ)*PsiPsiZZ(cos_t, s);
}
double DT::PsiPsiwWfl(const double &cos_t, const double &s){
	return flux(s, MPsi,MPsi,MW,MW)*PsiPsiwW(cos_t, s);
}
double DT::PsiPsiGGfl(const double &cos_t, const double &s){
	return flux(s, MPsi,MPsi,0,0)*PsiPsiGG(cos_t, s);
}
double DT::PsiPsiEefl(const double &cos_t, const double &s){
	return flux(s, MPsi,MPsi,Me,Me)*PsiPsiEe(cos_t, s);
}
double DT::PsiPsiMUmufl(const double &cos_t, const double &s){
	return flux(s, MPsi,MPsi,MMU,MMU)*PsiPsiMUmu(cos_t, s);
}
double DT::PsiPsiTAtafl(const double &cos_t, const double &s){
	return flux(s, MPsi,MPsi,MTA,MTA)*PsiPsiTAta(cos_t, s);
}
double DT::PsiPsiUufl(const double &cos_t, const double &s){
	return flux(s, MPsi,MPsi,MU,MU)*PsiPsiUu(cos_t, s);
}
double DT::PsiPsiCcfl(const double &cos_t, const double &s){
	return flux(s, MPsi,MPsi,MC,MC)*PsiPsiCc(cos_t, s);
}
double DT::PsiPsiTtfl(const double &cos_t, const double &s){
	return flux(s, MPsi,MPsi,MT,MT)*PsiPsiTt(cos_t, s);
}
double DT::PsiPsiDdfl(const double &cos_t, const double &s){
	return flux(s, MPsi,MPsi,MD,MD)*PsiPsiDd(cos_t, s);
}
double DT::PsiPsiSsfl(const double &cos_t, const double &s){
	return flux(s, MPsi,MPsi,MS,MS)*PsiPsiSs(cos_t, s);
}
double DT::PsiPsiBbfl(const double &cos_t, const double &s){
	return flux(s, MPsi,MPsi,MB,MB)*PsiPsiBb(cos_t, s);
}
