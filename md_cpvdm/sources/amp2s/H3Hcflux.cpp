///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::H3HchWfl(double cos_t, double s){
	 if(heavi(s,mHsm,MW)){
		 return 2*2*flux(s, mH3,mHc,mHsm,MW)*H3HchW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HcAWfl(double cos_t, double s){
	 if(heavi(s,0,MW)){
		 return 2*2*flux(s, mH3,mHc,0,MW)*H3HcAW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HcZWfl(double cos_t, double s){
	 if(heavi(s,MZ,MW)){
		 return 2*2*flux(s, mH3,mHc,MZ,MW)*H3HcZW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HcveEfl(double cos_t, double s){
	 if(heavi(s,Mnue,Me)){
		 return 2*2*flux(s, mH3,mHc,Mnue,Me)*H3HcveE(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HcvmMfl(double cos_t, double s){
	 if(heavi(s,Mnum,MM)){
		 return 2*2*flux(s, mH3,mHc,Mnum,MM)*H3HcvmM(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HcvtTAfl(double cos_t, double s){
	 if(heavi(s,Mnut,MTA)){
		 return 2*2*flux(s, mH3,mHc,Mnut,MTA)*H3HcvtTA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HcuDfl(double cos_t, double s){
	 if(heavi(s,MU,MD)){
		 return 2*2*flux(s, mH3,mHc,MU,MD)*H3HcuD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HcuSfl(double cos_t, double s){
	 if(heavi(s,MU,MS)){
		 return 2*2*flux(s, mH3,mHc,MU,MS)*H3HcuS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HcuBfl(double cos_t, double s){
	 if(heavi(s,MU,MB)){
		 return 2*2*flux(s, mH3,mHc,MU,MB)*H3HcuB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HccDfl(double cos_t, double s){
	 if(heavi(s,MC,MD)){
		 return 2*2*flux(s, mH3,mHc,MC,MD)*H3HccD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HccSfl(double cos_t, double s){
	 if(heavi(s,MC,MS)){
		 return 2*2*flux(s, mH3,mHc,MC,MS)*H3HccS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HccBfl(double cos_t, double s){
	 if(heavi(s,MC,MB)){
		 return 2*2*flux(s, mH3,mHc,MC,MB)*H3HccB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HctDfl(double cos_t, double s){
	 if(heavi(s,MT,MD)){
		 return 2*2*flux(s, mH3,mHc,MT,MD)*H3HctD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HctSfl(double cos_t, double s){
	 if(heavi(s,MT,MS)){
		 return 2*2*flux(s, mH3,mHc,MT,MS)*H3HctS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HctBfl(double cos_t, double s){
	 if(heavi(s,MT,MB)){
		 return 2*2*flux(s, mH3,mHc,MT,MB)*H3HctB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3Hc(double cos_t, double s){
	 return ( H3HchWfl(cos_t, s) + H3HcAWfl(cos_t, s) + H3HcZWfl(cos_t, s) +\
 
   H3HcveEfl(cos_t, s) + H3HcvmMfl(cos_t, s) + H3HcvtTAfl(cos_t, s) +\
 
   H3HcuDfl(cos_t, s) + H3HcuSfl(cos_t, s) + H3HcuBfl(cos_t, s) +\
 
   H3HccDfl(cos_t, s) + H3HccSfl(cos_t, s) + H3HccBfl(cos_t, s) +\
 
   H3HctDfl(cos_t, s) + H3HctSfl(cos_t, s) + H3HctBfl(cos_t, s) );
}
