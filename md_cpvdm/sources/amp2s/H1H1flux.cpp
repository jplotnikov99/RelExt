///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::H1H1hhfl(double cos_t, double s){
	 if(heavi(s,mHsm,mHsm)){
		 return 0.5*flux(s, mH1,mH1,mHsm,mHsm)*H1H1hh(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H1hZfl(double cos_t, double s){
	 if(heavi(s,mHsm,MZ)){
		 return flux(s, mH1,mH1,mHsm,MZ)*H1H1hZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H1ZZfl(double cos_t, double s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*flux(s, mH1,mH1,MZ,MZ)*H1H1ZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H1wWfl(double cos_t, double s){
	 if(heavi(s,MW,MW)){
		 return flux(s, mH1,mH1,MW,MW)*H1H1wW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H1Eefl(double cos_t, double s){
	 if(heavi(s,Me,Me)){
		 return flux(s, mH1,mH1,Me,Me)*H1H1Ee(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H1Mmfl(double cos_t, double s){
	 if(heavi(s,MM,MM)){
		 return flux(s, mH1,mH1,MM,MM)*H1H1Mm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H1TAtafl(double cos_t, double s){
	 if(heavi(s,MTA,MTA)){
		 return flux(s, mH1,mH1,MTA,MTA)*H1H1TAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H1Uufl(double cos_t, double s){
	 if(heavi(s,MU,MU)){
		 return flux(s, mH1,mH1,MU,MU)*H1H1Uu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H1Ccfl(double cos_t, double s){
	 if(heavi(s,MC,MC)){
		 return flux(s, mH1,mH1,MC,MC)*H1H1Cc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H1Ttfl(double cos_t, double s){
	 if(heavi(s,MT,MT)){
		 return flux(s, mH1,mH1,MT,MT)*H1H1Tt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H1Ddfl(double cos_t, double s){
	 if(heavi(s,MD,MD)){
		 return flux(s, mH1,mH1,MD,MD)*H1H1Dd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H1Ssfl(double cos_t, double s){
	 if(heavi(s,MS,MS)){
		 return flux(s, mH1,mH1,MS,MS)*H1H1Ss(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H1Bbfl(double cos_t, double s){
	 if(heavi(s,MB,MB)){
		 return flux(s, mH1,mH1,MB,MB)*H1H1Bb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H1(double cos_t, double s){
	 return ( H1H1hhfl(cos_t, s) + H1H1hZfl(cos_t, s) + H1H1ZZfl(cos_t, s) +\
 
   H1H1wWfl(cos_t, s) + H1H1Eefl(cos_t, s) + H1H1Mmfl(cos_t, s) +\
 
   H1H1TAtafl(cos_t, s) + H1H1Uufl(cos_t, s) + H1H1Ccfl(cos_t, s) +\
 
   H1H1Ttfl(cos_t, s) + H1H1Ddfl(cos_t, s) + H1H1Ssfl(cos_t, s) +\
 
   H1H1Bbfl(cos_t, s) );
}
