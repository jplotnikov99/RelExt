///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"
#include "utils.hpp"

double DT::HcHcWWfl(double cos_t, double s){
	 if(heavi(s,MW,MW)){
		 return 0.5*2*flux(s, mHc,mHc,MW,MW)*HcHcWW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHChhfl(double cos_t, double s){
	 if(heavi(s,mHsm,mHsm)){
		 return 0.5*2*flux(s, mHc,mHc,mHsm,mHsm)*HcHChh(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHChAfl(double cos_t, double s){
	 if(heavi(s,mHsm,0)){
		 return 2*flux(s, mHc,mHc,mHsm,0)*HcHChA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHChZfl(double cos_t, double s){
	 if(heavi(s,mHsm,MZ)){
		 return 2*flux(s, mHc,mHc,mHsm,MZ)*HcHChZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCAAfl(double cos_t, double s){
	 if(heavi(s,0,0)){
		 return 0.5*2*flux(s, mHc,mHc,0,0)*HcHCAA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCAZfl(double cos_t, double s){
	 if(heavi(s,0,MZ)){
		 return 2*flux(s, mHc,mHc,0,MZ)*HcHCAZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCZZfl(double cos_t, double s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*2*flux(s, mHc,mHc,MZ,MZ)*HcHCZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCwWfl(double cos_t, double s){
	 if(heavi(s,MW,MW)){
		 return 2*flux(s, mHc,mHc,MW,MW)*HcHCwW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCVEvefl(double cos_t, double s){
	 if(heavi(s,Mnue,Mnue)){
		 return 2*flux(s, mHc,mHc,Mnue,Mnue)*HcHCVEve(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCVMvmfl(double cos_t, double s){
	 if(heavi(s,Mnum,Mnum)){
		 return 2*flux(s, mHc,mHc,Mnum,Mnum)*HcHCVMvm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCVTvtfl(double cos_t, double s){
	 if(heavi(s,Mnut,Mnut)){
		 return 2*flux(s, mHc,mHc,Mnut,Mnut)*HcHCVTvt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCEefl(double cos_t, double s){
	 if(heavi(s,Me,Me)){
		 return 2*flux(s, mHc,mHc,Me,Me)*HcHCEe(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCMmfl(double cos_t, double s){
	 if(heavi(s,MM,MM)){
		 return 2*flux(s, mHc,mHc,MM,MM)*HcHCMm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCTAtafl(double cos_t, double s){
	 if(heavi(s,MTA,MTA)){
		 return 2*flux(s, mHc,mHc,MTA,MTA)*HcHCTAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCUufl(double cos_t, double s){
	 if(heavi(s,MU,MU)){
		 return 2*flux(s, mHc,mHc,MU,MU)*HcHCUu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCCcfl(double cos_t, double s){
	 if(heavi(s,MC,MC)){
		 return 2*flux(s, mHc,mHc,MC,MC)*HcHCCc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCTtfl(double cos_t, double s){
	 if(heavi(s,MT,MT)){
		 return 2*flux(s, mHc,mHc,MT,MT)*HcHCTt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCDdfl(double cos_t, double s){
	 if(heavi(s,MD,MD)){
		 return 2*flux(s, mHc,mHc,MD,MD)*HcHCDd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCSsfl(double cos_t, double s){
	 if(heavi(s,MS,MS)){
		 return 2*flux(s, mHc,mHc,MS,MS)*HcHCSs(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHCBbfl(double cos_t, double s){
	 if(heavi(s,MB,MB)){
		 return 2*flux(s, mHc,mHc,MB,MB)*HcHCBb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HcHc(double cos_t, double s){
	 return ( HcHcWWfl(cos_t, s) + HcHChhfl(cos_t, s) + HcHChAfl(cos_t, s) +\
 
   HcHChZfl(cos_t, s) + HcHCAAfl(cos_t, s) + HcHCAZfl(cos_t, s) +\
 
   HcHCZZfl(cos_t, s) + HcHCwWfl(cos_t, s) + HcHCVEvefl(cos_t, s) +\
 
   HcHCVMvmfl(cos_t, s) + HcHCVTvtfl(cos_t, s) + HcHCEefl(cos_t, s) +\
 
   HcHCMmfl(cos_t, s) + HcHCTAtafl(cos_t, s) + HcHCUufl(cos_t, s) +\
 
   HcHCCcfl(cos_t, s) + HcHCTtfl(cos_t, s) + HcHCDdfl(cos_t, s) +\
 
   HcHCSsfl(cos_t, s) + HcHCBbfl(cos_t, s) );
}
