///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::HcHcWWfl(const double &cos_t, const double &s){
	 if(heavi(s,MW,MW)){
		 return 0.5*2*flux(s, mHc,mHc,MW,MW)*HcHcWW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHChhfl(const double &cos_t, const double &s){
	 if(heavi(s,mHsm,mHsm)){
		 return 0.5*2*flux(s, mHc,mHc,mHsm,mHsm)*HcHChh(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHChAfl(const double &cos_t, const double &s){
	 if(heavi(s,mHsm,0)){
		 return 2*flux(s, mHc,mHc,mHsm,0)*HcHChA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHChZfl(const double &cos_t, const double &s){
	 if(heavi(s,mHsm,MZ)){
		 return 2*flux(s, mHc,mHc,mHsm,MZ)*HcHChZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCAAfl(const double &cos_t, const double &s){
	 if(heavi(s,0,0)){
		 return 0.5*2*flux(s, mHc,mHc,0,0)*HcHCAA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCAZfl(const double &cos_t, const double &s){
	 if(heavi(s,0,MZ)){
		 return 2*flux(s, mHc,mHc,0,MZ)*HcHCAZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCZZfl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*2*flux(s, mHc,mHc,MZ,MZ)*HcHCZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCwWfl(const double &cos_t, const double &s){
	 if(heavi(s,MW,MW)){
		 return 2*flux(s, mHc,mHc,MW,MW)*HcHCwW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCVEvefl(const double &cos_t, const double &s){
	 if(heavi(s,Mnue,Mnue)){
		 return 2*flux(s, mHc,mHc,Mnue,Mnue)*HcHCVEve(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCVMvmfl(const double &cos_t, const double &s){
	 if(heavi(s,Mnum,Mnum)){
		 return 2*flux(s, mHc,mHc,Mnum,Mnum)*HcHCVMvm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCVTvtfl(const double &cos_t, const double &s){
	 if(heavi(s,Mnut,Mnut)){
		 return 2*flux(s, mHc,mHc,Mnut,Mnut)*HcHCVTvt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCEefl(const double &cos_t, const double &s){
	 if(heavi(s,Me,Me)){
		 return 2*flux(s, mHc,mHc,Me,Me)*HcHCEe(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCMmfl(const double &cos_t, const double &s){
	 if(heavi(s,MM,MM)){
		 return 2*flux(s, mHc,mHc,MM,MM)*HcHCMm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCTAtafl(const double &cos_t, const double &s){
	 if(heavi(s,MTA,MTA)){
		 return 2*flux(s, mHc,mHc,MTA,MTA)*HcHCTAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCUufl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MU)){
		 return 2*flux(s, mHc,mHc,MU,MU)*HcHCUu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCCcfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MC)){
		 return 2*flux(s, mHc,mHc,MC,MC)*HcHCCc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCTtfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MT)){
		 return 2*flux(s, mHc,mHc,MT,MT)*HcHCTt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCDdfl(const double &cos_t, const double &s){
	 if(heavi(s,MD,MD)){
		 return 2*flux(s, mHc,mHc,MD,MD)*HcHCDd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCSsfl(const double &cos_t, const double &s){
	 if(heavi(s,MS,MS)){
		 return 2*flux(s, mHc,mHc,MS,MS)*HcHCSs(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCBbfl(const double &cos_t, const double &s){
	 if(heavi(s,MB,MB)){
		 return 2*flux(s, mHc,mHc,MB,MB)*HcHCBb(cos_t, s);
	 }
	 else{ return 0; }

}
