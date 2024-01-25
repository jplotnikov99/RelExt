///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"
#include "utils.hpp"

double DT::H1H2hhfl(double cos_t, double s){
	 if(heavi(s,mHsm,mHsm)){
		 return 0.5*2*flux(s, mH1,mH2,mHsm,mHsm)*H1H2hh(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H2hZfl(double cos_t, double s){
	 if(heavi(s,mHsm,MZ)){
		 return 2*flux(s, mH1,mH2,mHsm,MZ)*H1H2hZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H2ZZfl(double cos_t, double s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*2*flux(s, mH1,mH2,MZ,MZ)*H1H2ZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H2wWfl(double cos_t, double s){
	 if(heavi(s,MW,MW)){
		 return 2*flux(s, mH1,mH2,MW,MW)*H1H2wW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H2VEvefl(double cos_t, double s){
	 if(heavi(s,Mnue,Mnue)){
		 return 2*flux(s, mH1,mH2,Mnue,Mnue)*H1H2VEve(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H2VMvmfl(double cos_t, double s){
	 if(heavi(s,Mnum,Mnum)){
		 return 2*flux(s, mH1,mH2,Mnum,Mnum)*H1H2VMvm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H2VTvtfl(double cos_t, double s){
	 if(heavi(s,Mnut,Mnut)){
		 return 2*flux(s, mH1,mH2,Mnut,Mnut)*H1H2VTvt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H2Eefl(double cos_t, double s){
	 if(heavi(s,Me,Me)){
		 return 2*flux(s, mH1,mH2,Me,Me)*H1H2Ee(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H2Mmfl(double cos_t, double s){
	 if(heavi(s,MM,MM)){
		 return 2*flux(s, mH1,mH2,MM,MM)*H1H2Mm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H2TAtafl(double cos_t, double s){
	 if(heavi(s,MTA,MTA)){
		 return 2*flux(s, mH1,mH2,MTA,MTA)*H1H2TAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H2Uufl(double cos_t, double s){
	 if(heavi(s,MU,MU)){
		 return 2*flux(s, mH1,mH2,MU,MU)*H1H2Uu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H2Ccfl(double cos_t, double s){
	 if(heavi(s,MC,MC)){
		 return 2*flux(s, mH1,mH2,MC,MC)*H1H2Cc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H2Ttfl(double cos_t, double s){
	 if(heavi(s,MT,MT)){
		 return 2*flux(s, mH1,mH2,MT,MT)*H1H2Tt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H2Ddfl(double cos_t, double s){
	 if(heavi(s,MD,MD)){
		 return 2*flux(s, mH1,mH2,MD,MD)*H1H2Dd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H2Ssfl(double cos_t, double s){
	 if(heavi(s,MS,MS)){
		 return 2*flux(s, mH1,mH2,MS,MS)*H1H2Ss(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H2Bbfl(double cos_t, double s){
	 if(heavi(s,MB,MB)){
		 return 2*flux(s, mH1,mH2,MB,MB)*H1H2Bb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1H2(double cos_t, double s){
	 return ( H1H2hhfl(cos_t, s) + H1H2hZfl(cos_t, s) + H1H2ZZfl(cos_t, s) +\
 
   H1H2wWfl(cos_t, s) + H1H2VEvefl(cos_t, s) + H1H2VMvmfl(cos_t, s) +\
 
   H1H2VTvtfl(cos_t, s) + H1H2Eefl(cos_t, s) + H1H2Mmfl(cos_t, s) +\
 
   H1H2TAtafl(cos_t, s) + H1H2Uufl(cos_t, s) + H1H2Ccfl(cos_t, s) +\
 
   H1H2Ttfl(cos_t, s) + H1H2Ddfl(cos_t, s) + H1H2Ssfl(cos_t, s) +\
 
   H1H2Bbfl(cos_t, s) );
}
