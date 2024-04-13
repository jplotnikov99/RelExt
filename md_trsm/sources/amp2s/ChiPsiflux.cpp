///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::ChiPsiHHfl(const double &cos_t, const double &s){
	 if(heavi(s,MH,MH)){
		 return 0.5*2*flux(s, MChi,MPsi,MH,MH)*ChiPsiHH(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiAAfl(const double &cos_t, const double &s){
	 if(heavi(s,0,0)){
		 return 0.5*2*flux(s, MChi,MPsi,0,0)*ChiPsiAA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiZZfl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*2*flux(s, MChi,MPsi,MZ,MZ)*ChiPsiZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiwWfl(const double &cos_t, const double &s){
	 if(heavi(s,MW,MW)){
		 return 2*flux(s, MChi,MPsi,MW,MW)*ChiPsiwW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiGGfl(const double &cos_t, const double &s){
	 if(heavi(s,0,0)){
		 return 0.5*2*flux(s, MChi,MPsi,0,0)*ChiPsiGG(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiEefl(const double &cos_t, const double &s){
	 if(heavi(s,Me,Me)){
		 return 2*flux(s, MChi,MPsi,Me,Me)*ChiPsiEe(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiMUmufl(const double &cos_t, const double &s){
	 if(heavi(s,MMU,MMU)){
		 return 2*flux(s, MChi,MPsi,MMU,MMU)*ChiPsiMUmu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiTAtafl(const double &cos_t, const double &s){
	 if(heavi(s,MTA,MTA)){
		 return 2*flux(s, MChi,MPsi,MTA,MTA)*ChiPsiTAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiUufl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MU)){
		 return 2*flux(s, MChi,MPsi,MU,MU)*ChiPsiUu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiCcfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MC)){
		 return 2*flux(s, MChi,MPsi,MC,MC)*ChiPsiCc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiTtfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MT)){
		 return 2*flux(s, MChi,MPsi,MT,MT)*ChiPsiTt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiDdfl(const double &cos_t, const double &s){
	 if(heavi(s,MD,MD)){
		 return 2*flux(s, MChi,MPsi,MD,MD)*ChiPsiDd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiSsfl(const double &cos_t, const double &s){
	 if(heavi(s,MS,MS)){
		 return 2*flux(s, MChi,MPsi,MS,MS)*ChiPsiSs(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiPsiBbfl(const double &cos_t, const double &s){
	 if(heavi(s,MB,MB)){
		 return 2*flux(s, MChi,MPsi,MB,MB)*ChiPsiBb(cos_t, s);
	 }
	 else{ return 0; }

}
