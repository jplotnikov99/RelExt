///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"
#include "utils.hpp"

double DT::H2H2hhfl(double cos_t, double s){
	 if(heavi(s,mHsm,mHsm)){
		 return 0.5*flux(s, mH2,mH2,mHsm,mHsm)*H2H2hh(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H2hZfl(double cos_t, double s){
	 if(heavi(s,mHsm,MZ)){
		 return flux(s, mH2,mH2,mHsm,MZ)*H2H2hZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H2ZZfl(double cos_t, double s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*flux(s, mH2,mH2,MZ,MZ)*H2H2ZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H2wWfl(double cos_t, double s){
	 if(heavi(s,MW,MW)){
		 return flux(s, mH2,mH2,MW,MW)*H2H2wW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H2Eefl(double cos_t, double s){
	 if(heavi(s,Me,Me)){
		 return flux(s, mH2,mH2,Me,Me)*H2H2Ee(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H2Mmfl(double cos_t, double s){
	 if(heavi(s,MM,MM)){
		 return flux(s, mH2,mH2,MM,MM)*H2H2Mm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H2TAtafl(double cos_t, double s){
	 if(heavi(s,MTA,MTA)){
		 return flux(s, mH2,mH2,MTA,MTA)*H2H2TAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H2Uufl(double cos_t, double s){
	 if(heavi(s,MU,MU)){
		 return flux(s, mH2,mH2,MU,MU)*H2H2Uu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H2Ccfl(double cos_t, double s){
	 if(heavi(s,MC,MC)){
		 return flux(s, mH2,mH2,MC,MC)*H2H2Cc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H2Ttfl(double cos_t, double s){
	 if(heavi(s,MT,MT)){
		 return flux(s, mH2,mH2,MT,MT)*H2H2Tt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H2Ddfl(double cos_t, double s){
	 if(heavi(s,MD,MD)){
		 return flux(s, mH2,mH2,MD,MD)*H2H2Dd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H2Ssfl(double cos_t, double s){
	 if(heavi(s,MS,MS)){
		 return flux(s, mH2,mH2,MS,MS)*H2H2Ss(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H2Bbfl(double cos_t, double s){
	 if(heavi(s,MB,MB)){
		 return flux(s, mH2,mH2,MB,MB)*H2H2Bb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H2(double cos_t, double s){
	 return ( H2H2hhfl(cos_t, s) + H2H2hZfl(cos_t, s) + H2H2ZZfl(cos_t, s) +\
 
   H2H2wWfl(cos_t, s) + H2H2Eefl(cos_t, s) + H2H2Mmfl(cos_t, s) +\
 
   H2H2TAtafl(cos_t, s) + H2H2Uufl(cos_t, s) + H2H2Ccfl(cos_t, s) +\
 
   H2H2Ttfl(cos_t, s) + H2H2Ddfl(cos_t, s) + H2H2Ssfl(cos_t, s) +\
 
   H2H2Bbfl(cos_t, s) );
}
