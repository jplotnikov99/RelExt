///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::H2HchWfl(double cos_t, double s){
	 if(heavi(s,mHsm,MW)){
		 return 2*2*flux(s, mH2,mHc,mHsm,MW)*H2HchW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2HcAWfl(double cos_t, double s){
	 if(heavi(s,0,MW)){
		 return 2*2*flux(s, mH2,mHc,0,MW)*H2HcAW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2HcZWfl(double cos_t, double s){
	 if(heavi(s,MZ,MW)){
		 return 2*2*flux(s, mH2,mHc,MZ,MW)*H2HcZW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2HcveEfl(double cos_t, double s){
	 if(heavi(s,Mnue,Me)){
		 return 2*2*flux(s, mH2,mHc,Mnue,Me)*H2HcveE(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2HcvmMfl(double cos_t, double s){
	 if(heavi(s,Mnum,MM)){
		 return 2*2*flux(s, mH2,mHc,Mnum,MM)*H2HcvmM(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2HcvtTAfl(double cos_t, double s){
	 if(heavi(s,Mnut,MTA)){
		 return 2*2*flux(s, mH2,mHc,Mnut,MTA)*H2HcvtTA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2HcuDfl(double cos_t, double s){
	 if(heavi(s,MU,MD)){
		 return 2*2*flux(s, mH2,mHc,MU,MD)*H2HcuD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2HcuSfl(double cos_t, double s){
	 if(heavi(s,MU,MS)){
		 return 2*2*flux(s, mH2,mHc,MU,MS)*H2HcuS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2HcuBfl(double cos_t, double s){
	 if(heavi(s,MU,MB)){
		 return 2*2*flux(s, mH2,mHc,MU,MB)*H2HcuB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2HccDfl(double cos_t, double s){
	 if(heavi(s,MC,MD)){
		 return 2*2*flux(s, mH2,mHc,MC,MD)*H2HccD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2HccSfl(double cos_t, double s){
	 if(heavi(s,MC,MS)){
		 return 2*2*flux(s, mH2,mHc,MC,MS)*H2HccS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2HccBfl(double cos_t, double s){
	 if(heavi(s,MC,MB)){
		 return 2*2*flux(s, mH2,mHc,MC,MB)*H2HccB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2HctDfl(double cos_t, double s){
	 if(heavi(s,MT,MD)){
		 return 2*2*flux(s, mH2,mHc,MT,MD)*H2HctD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2HctSfl(double cos_t, double s){
	 if(heavi(s,MT,MS)){
		 return 2*2*flux(s, mH2,mHc,MT,MS)*H2HctS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2HctBfl(double cos_t, double s){
	 if(heavi(s,MT,MB)){
		 return 2*2*flux(s, mH2,mHc,MT,MB)*H2HctB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H2Hc(double cos_t, double s){
	 return ( H2HchWfl(cos_t, s) + H2HcAWfl(cos_t, s) + H2HcZWfl(cos_t, s) +\
 
   H2HcveEfl(cos_t, s) + H2HcvmMfl(cos_t, s) + H2HcvtTAfl(cos_t, s) +\
 
   H2HcuDfl(cos_t, s) + H2HcuSfl(cos_t, s) + H2HcuBfl(cos_t, s) +\
 
   H2HccDfl(cos_t, s) + H2HccSfl(cos_t, s) + H2HccBfl(cos_t, s) +\
 
   H2HctDfl(cos_t, s) + H2HctSfl(cos_t, s) + H2HctBfl(cos_t, s) );
}
