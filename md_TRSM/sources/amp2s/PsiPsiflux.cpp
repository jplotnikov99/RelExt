///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"
#include "utils.hpp"

double DT::PsiPsiHHfl(double cos_t, double s){
	 if(heavi(s,MH,MH)){
		 return 0.5*flux(s, MPsi,MPsi,MH,MH)*PsiPsiHH(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiAAfl(double cos_t, double s){
	 if(heavi(s,0,0)){
		 return 0.5*flux(s, MPsi,MPsi,0,0)*PsiPsiAA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiZZfl(double cos_t, double s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*flux(s, MPsi,MPsi,MZ,MZ)*PsiPsiZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiwWfl(double cos_t, double s){
	 if(heavi(s,MW,MW)){
		 return flux(s, MPsi,MPsi,MW,MW)*PsiPsiwW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiGGfl(double cos_t, double s){
	 if(heavi(s,0,0)){
		 return 0.5*flux(s, MPsi,MPsi,0,0)*PsiPsiGG(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiEefl(double cos_t, double s){
	 if(heavi(s,Me,Me)){
		 return flux(s, MPsi,MPsi,Me,Me)*PsiPsiEe(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiMUmufl(double cos_t, double s){
	 if(heavi(s,MMU,MMU)){
		 return flux(s, MPsi,MPsi,MMU,MMU)*PsiPsiMUmu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiTAtafl(double cos_t, double s){
	 if(heavi(s,MTA,MTA)){
		 return flux(s, MPsi,MPsi,MTA,MTA)*PsiPsiTAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiUufl(double cos_t, double s){
	 if(heavi(s,MU,MU)){
		 return flux(s, MPsi,MPsi,MU,MU)*PsiPsiUu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiCcfl(double cos_t, double s){
	 if(heavi(s,MC,MC)){
		 return flux(s, MPsi,MPsi,MC,MC)*PsiPsiCc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiTtfl(double cos_t, double s){
	 if(heavi(s,MT,MT)){
		 return flux(s, MPsi,MPsi,MT,MT)*PsiPsiTt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiDdfl(double cos_t, double s){
	 if(heavi(s,MD,MD)){
		 return flux(s, MPsi,MPsi,MD,MD)*PsiPsiDd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiSsfl(double cos_t, double s){
	 if(heavi(s,MS,MS)){
		 return flux(s, MPsi,MPsi,MS,MS)*PsiPsiSs(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiBbfl(double cos_t, double s){
	 if(heavi(s,MB,MB)){
		 return flux(s, MPsi,MPsi,MB,MB)*PsiPsiBb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsiChiChifl(double cos_t, double s){
	 if(heavi(s,MChi,MChi)){
		 return 0.5*flux(s, MPsi,MPsi,MChi,MChi)*PsiPsiChiChi(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::PsiPsi(double cos_t, double s){
	 return ( PsiPsiHHfl(cos_t, s) + PsiPsiAAfl(cos_t, s) + PsiPsiZZfl(cos_t, s)\
 
      + PsiPsiwWfl(cos_t, s) + PsiPsiGGfl(cos_t, s) + PsiPsiEefl(cos_t, s) +\
 
      PsiPsiMUmufl(cos_t, s) + PsiPsiTAtafl(cos_t, s) + PsiPsiUufl(cos_t, s)\
 
      + PsiPsiCcfl(cos_t, s) + PsiPsiTtfl(cos_t, s) + PsiPsiDdfl(cos_t, s) +\
 
      PsiPsiSsfl(cos_t, s) + PsiPsiBbfl(cos_t, s) + PsiPsiChiChifl(cos_t, s)\
 
      );
}
