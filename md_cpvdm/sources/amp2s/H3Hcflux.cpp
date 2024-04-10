///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::H3HchWfl(const double &cos_t, const double &s){
	 if(heavi(s,mHsm,MW)){
		 return 2*2*flux(s, mH3,mHc,mHsm,MW)*H3HchW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HcAWfl(const double &cos_t, const double &s){
	 if(heavi(s,0,MW)){
		 return 2*2*flux(s, mH3,mHc,0,MW)*H3HcAW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HcZWfl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,MW)){
		 return 2*2*flux(s, mH3,mHc,MZ,MW)*H3HcZW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HcveEfl(const double &cos_t, const double &s){
	 if(heavi(s,Mnue,Me)){
		 return 2*2*flux(s, mH3,mHc,Mnue,Me)*H3HcveE(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HcvmMfl(const double &cos_t, const double &s){
	 if(heavi(s,Mnum,MM)){
		 return 2*2*flux(s, mH3,mHc,Mnum,MM)*H3HcvmM(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HcvtTAfl(const double &cos_t, const double &s){
	 if(heavi(s,Mnut,MTA)){
		 return 2*2*flux(s, mH3,mHc,Mnut,MTA)*H3HcvtTA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HcuDfl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MD)){
		 return 2*2*flux(s, mH3,mHc,MU,MD)*H3HcuD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HcuSfl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MS)){
		 return 2*2*flux(s, mH3,mHc,MU,MS)*H3HcuS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HcuBfl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MB)){
		 return 2*2*flux(s, mH3,mHc,MU,MB)*H3HcuB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HccDfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MD)){
		 return 2*2*flux(s, mH3,mHc,MC,MD)*H3HccD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HccSfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MS)){
		 return 2*2*flux(s, mH3,mHc,MC,MS)*H3HccS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HccBfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MB)){
		 return 2*2*flux(s, mH3,mHc,MC,MB)*H3HccB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HctDfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MD)){
		 return 2*2*flux(s, mH3,mHc,MT,MD)*H3HctD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HctSfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MS)){
		 return 2*2*flux(s, mH3,mHc,MT,MS)*H3HctS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::H3HctBfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MB)){
		 return 2*2*flux(s, mH3,mHc,MT,MB)*H3HctB(cos_t, s);
	 }
	 else{ return 0; }

}
