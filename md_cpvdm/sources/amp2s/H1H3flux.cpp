///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"
#include "utils.hpp"

double DT::H1H3hhfl(double cos_t, double s){
	 if(heavi(s,mHsm,mHsm)){
		 return 0.5*2*flux(s, mH1,mH3,mHsm,mHsm)*H1H3hh(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H3hZfl(double cos_t, double s){
	 if(heavi(s,mHsm,MZ)){
		 return 2*flux(s, mH1,mH3,mHsm,MZ)*H1H3hZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H3ZZfl(double cos_t, double s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*2*flux(s, mH1,mH3,MZ,MZ)*H1H3ZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H3wWfl(double cos_t, double s){
	 if(heavi(s,MW,MW)){
		 return 2*flux(s, mH1,mH3,MW,MW)*H1H3wW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H3VEvefl(double cos_t, double s){
	 if(heavi(s,Mnue,Mnue)){
		 return 2*flux(s, mH1,mH3,Mnue,Mnue)*H1H3VEve(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H3VMvmfl(double cos_t, double s){
	 if(heavi(s,Mnum,Mnum)){
		 return 2*flux(s, mH1,mH3,Mnum,Mnum)*H1H3VMvm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H3VTvtfl(double cos_t, double s){
	 if(heavi(s,Mnut,Mnut)){
		 return 2*flux(s, mH1,mH3,Mnut,Mnut)*H1H3VTvt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H3Eefl(double cos_t, double s){
	 if(heavi(s,Me,Me)){
		 return 2*flux(s, mH1,mH3,Me,Me)*H1H3Ee(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H3Mmfl(double cos_t, double s){
	 if(heavi(s,MM,MM)){
		 return 2*flux(s, mH1,mH3,MM,MM)*H1H3Mm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H3TAtafl(double cos_t, double s){
	 if(heavi(s,MTA,MTA)){
		 return 2*flux(s, mH1,mH3,MTA,MTA)*H1H3TAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H3Uufl(double cos_t, double s){
	 if(heavi(s,MU,MU)){
		 return 2*flux(s, mH1,mH3,MU,MU)*H1H3Uu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H3Ccfl(double cos_t, double s){
	 if(heavi(s,MC,MC)){
		 return 2*flux(s, mH1,mH3,MC,MC)*H1H3Cc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H3Ttfl(double cos_t, double s){
	 if(heavi(s,MT,MT)){
		 return 2*flux(s, mH1,mH3,MT,MT)*H1H3Tt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H3Ddfl(double cos_t, double s){
	 if(heavi(s,MD,MD)){
		 return 2*flux(s, mH1,mH3,MD,MD)*H1H3Dd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H3Ssfl(double cos_t, double s){
	 if(heavi(s,MS,MS)){
		 return 2*flux(s, mH1,mH3,MS,MS)*H1H3Ss(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H3Bbfl(double cos_t, double s){
	 if(heavi(s,MB,MB)){
		 return 2*flux(s, mH1,mH3,MB,MB)*H1H3Bb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H3(double cos_t, double s){
	 return ( H1H3hhfl(cos_t, s) + H1H3hZfl(cos_t, s) + H1H3ZZfl(cos_t, s) +\
 
   H1H3wWfl(cos_t, s) + H1H3VEvefl(cos_t, s) + H1H3VMvmfl(cos_t, s) +\
 
   H1H3VTvtfl(cos_t, s) + H1H3Eefl(cos_t, s) + H1H3Mmfl(cos_t, s) +\
 
   H1H3TAtafl(cos_t, s) + H1H3Uufl(cos_t, s) + H1H3Ccfl(cos_t, s) +\
 
   H1H3Ttfl(cos_t, s) + H1H3Ddfl(cos_t, s) + H1H3Ssfl(cos_t, s) +\
 
   H1H3Bbfl(cos_t, s) );
}
