///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::PsiPsiHHfl(const double &cos_t, const double &s){
	 if(heavi(s,MH,MH)){
		 return 0.5*flux(s, MPsi,MPsi,MH,MH)*PsiPsiHH(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiAAfl(const double &cos_t, const double &s){
	 if(heavi(s,0,0)){
		 return 0.5*flux(s, MPsi,MPsi,0,0)*PsiPsiAA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiZZfl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*flux(s, MPsi,MPsi,MZ,MZ)*PsiPsiZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiwWfl(const double &cos_t, const double &s){
	 if(heavi(s,MW,MW)){
		 return flux(s, MPsi,MPsi,MW,MW)*PsiPsiwW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiGGfl(const double &cos_t, const double &s){
	 if(heavi(s,0,0)){
		 return 0.5*flux(s, MPsi,MPsi,0,0)*PsiPsiGG(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiEefl(const double &cos_t, const double &s){
	 if(heavi(s,Me,Me)){
		 return flux(s, MPsi,MPsi,Me,Me)*PsiPsiEe(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiMUmufl(const double &cos_t, const double &s){
	 if(heavi(s,MMU,MMU)){
		 return flux(s, MPsi,MPsi,MMU,MMU)*PsiPsiMUmu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiTAtafl(const double &cos_t, const double &s){
	 if(heavi(s,MTA,MTA)){
		 return flux(s, MPsi,MPsi,MTA,MTA)*PsiPsiTAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiUufl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MU)){
		 return flux(s, MPsi,MPsi,MU,MU)*PsiPsiUu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiCcfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MC)){
		 return flux(s, MPsi,MPsi,MC,MC)*PsiPsiCc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiTtfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MT)){
		 return flux(s, MPsi,MPsi,MT,MT)*PsiPsiTt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiDdfl(const double &cos_t, const double &s){
	 if(heavi(s,MD,MD)){
		 return flux(s, MPsi,MPsi,MD,MD)*PsiPsiDd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiSsfl(const double &cos_t, const double &s){
	 if(heavi(s,MS,MS)){
		 return flux(s, MPsi,MPsi,MS,MS)*PsiPsiSs(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiBbfl(const double &cos_t, const double &s){
	 if(heavi(s,MB,MB)){
		 return flux(s, MPsi,MPsi,MB,MB)*PsiPsiBb(cos_t, s);
	 }
	 else{ return 0; }

}
