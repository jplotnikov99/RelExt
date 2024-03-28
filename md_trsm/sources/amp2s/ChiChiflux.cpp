///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::ChiChiHHfl(const double &cos_t, const double &s){
	 if(heavi(s,MH,MH)){
		 return 0.5*flux(s, MChi,MChi,MH,MH)*ChiChiHH(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiChiAAfl(const double &cos_t, const double &s){
	 if(heavi(s,0,0)){
		 return 0.5*flux(s, MChi,MChi,0,0)*ChiChiAA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiChiZZfl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*flux(s, MChi,MChi,MZ,MZ)*ChiChiZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiChiwWfl(const double &cos_t, const double &s){
	 if(heavi(s,MW,MW)){
		 return flux(s, MChi,MChi,MW,MW)*ChiChiwW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiChiGGfl(const double &cos_t, const double &s){
	 if(heavi(s,0,0)){
		 return 0.5*flux(s, MChi,MChi,0,0)*ChiChiGG(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiChiEefl(const double &cos_t, const double &s){
	 if(heavi(s,Me,Me)){
		 return flux(s, MChi,MChi,Me,Me)*ChiChiEe(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiChiMUmufl(const double &cos_t, const double &s){
	 if(heavi(s,MMU,MMU)){
		 return flux(s, MChi,MChi,MMU,MMU)*ChiChiMUmu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiChiTAtafl(const double &cos_t, const double &s){
	 if(heavi(s,MTA,MTA)){
		 return flux(s, MChi,MChi,MTA,MTA)*ChiChiTAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiChiUufl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MU)){
		 return flux(s, MChi,MChi,MU,MU)*ChiChiUu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiChiCcfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MC)){
		 return flux(s, MChi,MChi,MC,MC)*ChiChiCc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiChiTtfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MT)){
		 return flux(s, MChi,MChi,MT,MT)*ChiChiTt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiChiDdfl(const double &cos_t, const double &s){
	 if(heavi(s,MD,MD)){
		 return flux(s, MChi,MChi,MD,MD)*ChiChiDd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiChiSsfl(const double &cos_t, const double &s){
	 if(heavi(s,MS,MS)){
		 return flux(s, MChi,MChi,MS,MS)*ChiChiSs(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiChiBbfl(const double &cos_t, const double &s){
	 if(heavi(s,MB,MB)){
		 return flux(s, MChi,MChi,MB,MB)*ChiChiBb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiChiChiPsifl(const double &cos_t, const double &s){
	 if(heavi(s,MChi,MPsi)){
		 return flux(s, MChi,MChi,MChi,MPsi)*ChiChiChiPsi(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiChiPsiPsifl(const double &cos_t, const double &s){
	 if(heavi(s,MPsi,MPsi)){
		 return 0.5*flux(s, MChi,MChi,MPsi,MPsi)*ChiChiPsiPsi(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::ChiChi(const double &cos_t, const double &s){
	 return ( ChiChiHHfl(cos_t, s) + ChiChiAAfl(cos_t, s) + ChiChiZZfl(cos_t, s)\
 
      + ChiChiwWfl(cos_t, s) + ChiChiGGfl(cos_t, s) + ChiChiEefl(cos_t, s) +\
 
      ChiChiMUmufl(cos_t, s) + ChiChiTAtafl(cos_t, s) + ChiChiUufl(cos_t, s)\
 
      + ChiChiCcfl(cos_t, s) + ChiChiTtfl(cos_t, s) + ChiChiDdfl(cos_t, s) +\
 
      ChiChiSsfl(cos_t, s) + ChiChiBbfl(cos_t, s));
}
