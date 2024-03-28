///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::H1HchWfl(const double &cos_t, const double &s){
	 if(heavi(s,mHsm,MW)){
		 return 2*2*flux(s, mH1,mHc,mHsm,MW)*H1HchW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1HcAWfl(const double &cos_t, const double &s){
	 if(heavi(s,0,MW)){
		 return 2*2*flux(s, mH1,mHc,0,MW)*H1HcAW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1HcZWfl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,MW)){
		 return 2*2*flux(s, mH1,mHc,MZ,MW)*H1HcZW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1HcveEfl(const double &cos_t, const double &s){
	 if(heavi(s,Mnue,Me)){
		 return 2*2*flux(s, mH1,mHc,Mnue,Me)*H1HcveE(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1HcvmMfl(const double &cos_t, const double &s){
	 if(heavi(s,Mnum,MM)){
		 return 2*2*flux(s, mH1,mHc,Mnum,MM)*H1HcvmM(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1HcvtTAfl(const double &cos_t, const double &s){
	 if(heavi(s,Mnut,MTA)){
		 return 2*2*flux(s, mH1,mHc,Mnut,MTA)*H1HcvtTA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1HcuDfl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MD)){
		 return 2*2*flux(s, mH1,mHc,MU,MD)*H1HcuD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1HcuSfl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MS)){
		 return 2*2*flux(s, mH1,mHc,MU,MS)*H1HcuS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1HcuBfl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MB)){
		 return 2*2*flux(s, mH1,mHc,MU,MB)*H1HcuB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1HccDfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MD)){
		 return 2*2*flux(s, mH1,mHc,MC,MD)*H1HccD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1HccSfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MS)){
		 return 2*2*flux(s, mH1,mHc,MC,MS)*H1HccS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1HccBfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MB)){
		 return 2*2*flux(s, mH1,mHc,MC,MB)*H1HccB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1HctDfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MD)){
		 return 2*2*flux(s, mH1,mHc,MT,MD)*H1HctD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1HctSfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MS)){
		 return 2*2*flux(s, mH1,mHc,MT,MS)*H1HctS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1HctBfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MB)){
		 return 2*2*flux(s, mH1,mHc,MT,MB)*H1HctB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H1Hc(const double &cos_t, const double &s){
	 return ( H1HchWfl(cos_t, s) + H1HcAWfl(cos_t, s) + H1HcZWfl(cos_t, s) +\
 
   H1HcveEfl(cos_t, s) + H1HcvmMfl(cos_t, s) + H1HcvtTAfl(cos_t, s) +\
 
   H1HcuDfl(cos_t, s) + H1HcuSfl(cos_t, s) + H1HcuBfl(cos_t, s) +\
 
   H1HccDfl(cos_t, s) + H1HccSfl(cos_t, s) + H1HccBfl(cos_t, s) +\
 
   H1HctDfl(cos_t, s) + H1HctSfl(cos_t, s) + H1HctBfl(cos_t, s) );
}
