///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"
#include "utils.hpp"

double DT::H3H3hhfl(double cos_t, double s){
	 if(heavi(s,mHsm,mHsm)){
		 return 0.5*flux(s, mH3,mH3,mHsm,mHsm)*H3H3hh(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3hZfl(double cos_t, double s){
	 if(heavi(s,mHsm,MZ)){
		 return flux(s, mH3,mH3,mHsm,MZ)*H3H3hZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3ZZfl(double cos_t, double s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*flux(s, mH3,mH3,MZ,MZ)*H3H3ZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3wWfl(double cos_t, double s){
	 if(heavi(s,MW,MW)){
		 return flux(s, mH3,mH3,MW,MW)*H3H3wW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3Eefl(double cos_t, double s){
	 if(heavi(s,Me,Me)){
		 return flux(s, mH3,mH3,Me,Me)*H3H3Ee(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3Mmfl(double cos_t, double s){
	 if(heavi(s,MM,MM)){
		 return flux(s, mH3,mH3,MM,MM)*H3H3Mm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3TAtafl(double cos_t, double s){
	 if(heavi(s,MTA,MTA)){
		 return flux(s, mH3,mH3,MTA,MTA)*H3H3TAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3Uufl(double cos_t, double s){
	 if(heavi(s,MU,MU)){
		 return flux(s, mH3,mH3,MU,MU)*H3H3Uu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3Ccfl(double cos_t, double s){
	 if(heavi(s,MC,MC)){
		 return flux(s, mH3,mH3,MC,MC)*H3H3Cc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3Ttfl(double cos_t, double s){
	 if(heavi(s,MT,MT)){
		 return flux(s, mH3,mH3,MT,MT)*H3H3Tt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3Ddfl(double cos_t, double s){
	 if(heavi(s,MD,MD)){
		 return flux(s, mH3,mH3,MD,MD)*H3H3Dd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3Ssfl(double cos_t, double s){
	 if(heavi(s,MS,MS)){
		 return flux(s, mH3,mH3,MS,MS)*H3H3Ss(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3Bbfl(double cos_t, double s){
	 if(heavi(s,MB,MB)){
		 return flux(s, mH3,mH3,MB,MB)*H3H3Bb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3(double cos_t, double s){
	 return ( H3H3hhfl(cos_t, s) + H3H3hZfl(cos_t, s) + H3H3ZZfl(cos_t, s) +\
 
   H3H3wWfl(cos_t, s) + H3H3Eefl(cos_t, s) + H3H3Mmfl(cos_t, s) +\
 
   H3H3TAtafl(cos_t, s) + H3H3Uufl(cos_t, s) + H3H3Ccfl(cos_t, s) +\
 
   H3H3Ttfl(cos_t, s) + H3H3Ddfl(cos_t, s) + H3H3Ssfl(cos_t, s) +\
 
   H3H3Bbfl(cos_t, s) );
}
