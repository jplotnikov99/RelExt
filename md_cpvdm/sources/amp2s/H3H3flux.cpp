///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::H3H3hhfl(const double &cos_t, const double &s){
	 if(heavi(s,mHsm,mHsm)){
		 return 0.5*flux(s, mH3,mH3,mHsm,mHsm)*H3H3hh(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3hZfl(const double &cos_t, const double &s){
	 if(heavi(s,mHsm,MZ)){
		 return flux(s, mH3,mH3,mHsm,MZ)*H3H3hZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3ZZfl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*flux(s, mH3,mH3,MZ,MZ)*H3H3ZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3wWfl(const double &cos_t, const double &s){
	 if(heavi(s,MW,MW)){
		 return flux(s, mH3,mH3,MW,MW)*H3H3wW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3Eefl(const double &cos_t, const double &s){
	 if(heavi(s,Me,Me)){
		 return flux(s, mH3,mH3,Me,Me)*H3H3Ee(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3Mmfl(const double &cos_t, const double &s){
	 if(heavi(s,MM,MM)){
		 return flux(s, mH3,mH3,MM,MM)*H3H3Mm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3TAtafl(const double &cos_t, const double &s){
	 if(heavi(s,MTA,MTA)){
		 return flux(s, mH3,mH3,MTA,MTA)*H3H3TAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3Uufl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MU)){
		 return flux(s, mH3,mH3,MU,MU)*H3H3Uu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3Ccfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MC)){
		 return flux(s, mH3,mH3,MC,MC)*H3H3Cc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3Ttfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MT)){
		 return flux(s, mH3,mH3,MT,MT)*H3H3Tt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3Ddfl(const double &cos_t, const double &s){
	 if(heavi(s,MD,MD)){
		 return flux(s, mH3,mH3,MD,MD)*H3H3Dd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3Ssfl(const double &cos_t, const double &s){
	 if(heavi(s,MS,MS)){
		 return flux(s, mH3,mH3,MS,MS)*H3H3Ss(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3H3Bbfl(const double &cos_t, const double &s){
	 if(heavi(s,MB,MB)){
		 return flux(s, mH3,mH3,MB,MB)*H3H3Bb(cos_t, s);
	 }
	 else{ return 0; }

}
