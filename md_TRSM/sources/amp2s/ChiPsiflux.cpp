///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"
#include "utils.hpp"

double DT::ChiPsiHHfl(double cos_t, double s){
	 if(heavi(s,MH,MH)){
		 return 0.5*2*flux(s, MChi,MPsi,MH,MH)*ChiPsiHH(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiAAfl(double cos_t, double s){
	 if(heavi(s,0,0)){
		 return 0.5*2*flux(s, MChi,MPsi,0,0)*ChiPsiAA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiZZfl(double cos_t, double s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*2*flux(s, MChi,MPsi,MZ,MZ)*ChiPsiZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiwWfl(double cos_t, double s){
	 if(heavi(s,MW,MW)){
		 return 2*flux(s, MChi,MPsi,MW,MW)*ChiPsiwW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiGGfl(double cos_t, double s){
	 if(heavi(s,0,0)){
		 return 0.5*2*flux(s, MChi,MPsi,0,0)*ChiPsiGG(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiEefl(double cos_t, double s){
	 if(heavi(s,Me,Me)){
		 return 2*flux(s, MChi,MPsi,Me,Me)*ChiPsiEe(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiMUmufl(double cos_t, double s){
	 if(heavi(s,MMU,MMU)){
		 return 2*flux(s, MChi,MPsi,MMU,MMU)*ChiPsiMUmu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiTAtafl(double cos_t, double s){
	 if(heavi(s,MTA,MTA)){
		 return 2*flux(s, MChi,MPsi,MTA,MTA)*ChiPsiTAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiUufl(double cos_t, double s){
	 if(heavi(s,MU,MU)){
		 return 2*flux(s, MChi,MPsi,MU,MU)*ChiPsiUu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiCcfl(double cos_t, double s){
	 if(heavi(s,MC,MC)){
		 return 2*flux(s, MChi,MPsi,MC,MC)*ChiPsiCc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiTtfl(double cos_t, double s){
	 if(heavi(s,MT,MT)){
		 return 2*flux(s, MChi,MPsi,MT,MT)*ChiPsiTt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiDdfl(double cos_t, double s){
	 if(heavi(s,MD,MD)){
		 return 2*flux(s, MChi,MPsi,MD,MD)*ChiPsiDd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiSsfl(double cos_t, double s){
	 if(heavi(s,MS,MS)){
		 return 2*flux(s, MChi,MPsi,MS,MS)*ChiPsiSs(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiBbfl(double cos_t, double s){
	 if(heavi(s,MB,MB)){
		 return 2*flux(s, MChi,MPsi,MB,MB)*ChiPsiBb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsi(double cos_t, double s){
	 return ( ChiPsiHHfl(cos_t, s) + ChiPsiAAfl(cos_t, s) + ChiPsiZZfl(cos_t, s)\
 
      + ChiPsiwWfl(cos_t, s) + ChiPsiGGfl(cos_t, s) + ChiPsiEefl(cos_t, s) +\
 
      ChiPsiMUmufl(cos_t, s) + ChiPsiTAtafl(cos_t, s) + ChiPsiUufl(cos_t, s)\
 
      + ChiPsiCcfl(cos_t, s) + ChiPsiTtfl(cos_t, s) + ChiPsiDdfl(cos_t, s) +\
 
      ChiPsiSsfl(cos_t, s) + ChiPsiBbfl(cos_t, s) );
}
