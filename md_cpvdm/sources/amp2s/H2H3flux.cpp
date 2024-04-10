///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::H2H3hhfl(const double &cos_t, const double &s){
	 if(heavi(s,mHsm,mHsm)){
		 return 0.5*2*flux(s, mH2,mH3,mHsm,mHsm)*H2H3hh(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H3hZfl(const double &cos_t, const double &s){
	 if(heavi(s,mHsm,MZ)){
		 return 2*flux(s, mH2,mH3,mHsm,MZ)*H2H3hZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H3ZZfl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*2*flux(s, mH2,mH3,MZ,MZ)*H2H3ZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H3wWfl(const double &cos_t, const double &s){
	 if(heavi(s,MW,MW)){
		 return 2*flux(s, mH2,mH3,MW,MW)*H2H3wW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H3VEvefl(const double &cos_t, const double &s){
	 if(heavi(s,Mnue,Mnue)){
		 return 2*flux(s, mH2,mH3,Mnue,Mnue)*H2H3VEve(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H3VMvmfl(const double &cos_t, const double &s){
	 if(heavi(s,Mnum,Mnum)){
		 return 2*flux(s, mH2,mH3,Mnum,Mnum)*H2H3VMvm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H3VTvtfl(const double &cos_t, const double &s){
	 if(heavi(s,Mnut,Mnut)){
		 return 2*flux(s, mH2,mH3,Mnut,Mnut)*H2H3VTvt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H3Eefl(const double &cos_t, const double &s){
	 if(heavi(s,Me,Me)){
		 return 2*flux(s, mH2,mH3,Me,Me)*H2H3Ee(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H3Mmfl(const double &cos_t, const double &s){
	 if(heavi(s,MM,MM)){
		 return 2*flux(s, mH2,mH3,MM,MM)*H2H3Mm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H3TAtafl(const double &cos_t, const double &s){
	 if(heavi(s,MTA,MTA)){
		 return 2*flux(s, mH2,mH3,MTA,MTA)*H2H3TAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H3Uufl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MU)){
		 return 2*flux(s, mH2,mH3,MU,MU)*H2H3Uu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H3Ccfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MC)){
		 return 2*flux(s, mH2,mH3,MC,MC)*H2H3Cc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H3Ttfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MT)){
		 return 2*flux(s, mH2,mH3,MT,MT)*H2H3Tt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H3Ddfl(const double &cos_t, const double &s){
	 if(heavi(s,MD,MD)){
		 return 2*flux(s, mH2,mH3,MD,MD)*H2H3Dd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H3Ssfl(const double &cos_t, const double &s){
	 if(heavi(s,MS,MS)){
		 return 2*flux(s, mH2,mH3,MS,MS)*H2H3Ss(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2H3Bbfl(const double &cos_t, const double &s){
	 if(heavi(s,MB,MB)){
		 return 2*flux(s, mH2,mH3,MB,MB)*H2H3Bb(cos_t, s);
	 }
	 else{ return 0; }

}
