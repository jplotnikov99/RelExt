///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"
#include "utils.hpp"

double DT::amp2s::phichphichEEfl(double cos_t, double s){
	 if(utils::heavi(s,Me,Me)){
		 return 0.5*2*utils::flux(s, mphich,mphich,Me,Me)*phichphichEE(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichphichEMfl(double cos_t, double s){
	 if(utils::heavi(s,Me,MM)){
		 return 2*utils::flux(s, mphich,mphich,Me,MM)*phichphichEM(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichphichETAfl(double cos_t, double s){
	 if(utils::heavi(s,Me,MTA)){
		 return 2*utils::flux(s, mphich,mphich,Me,MTA)*phichphichETA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichphichMMfl(double cos_t, double s){
	 if(utils::heavi(s,MM,MM)){
		 return 0.5*2*utils::flux(s, mphich,mphich,MM,MM)*phichphichMM(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichphichMTAfl(double cos_t, double s){
	 if(utils::heavi(s,MM,MTA)){
		 return 2*utils::flux(s, mphich,mphich,MM,MTA)*phichphichMTA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichphichTATAfl(double cos_t, double s){
	 if(utils::heavi(s,MTA,MTA)){
		 return 0.5*2*utils::flux(s, mphich,mphich,MTA,MTA)*phichphichTATA
 
  (cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHhhfl(double cos_t, double s){
	 if(utils::heavi(s,mH,mH)){
		 return 0.5*2*utils::flux(s, mphich,mphich,mH,mH)*phichPHICHhh(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHhAfl(double cos_t, double s){
	 if(utils::heavi(s,mH,0)){
		 return 2*utils::flux(s, mphich,mphich,mH,0)*phichPHICHhA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHhZfl(double cos_t, double s){
	 if(utils::heavi(s,mH,MZ)){
		 return 2*utils::flux(s, mphich,mphich,mH,MZ)*phichPHICHhZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHAAfl(double cos_t, double s){
	 if(utils::heavi(s,0,0)){
		 return 0.5*2*utils::flux(s, mphich,mphich,0,0)*phichPHICHAA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHAZfl(double cos_t, double s){
	 if(utils::heavi(s,0,MZ)){
		 return 2*utils::flux(s, mphich,mphich,0,MZ)*phichPHICHAZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHZZfl(double cos_t, double s){
	 if(utils::heavi(s,MZ,MZ)){
		 return 0.5*2*utils::flux(s, mphich,mphich,MZ,MZ)*phichPHICHZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHwWfl(double cos_t, double s){
	 if(utils::heavi(s,MW,MW)){
		 return 2*utils::flux(s, mphich,mphich,MW,MW)*phichPHICHwW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHVEvefl(double cos_t, double s){
	 if(utils::heavi(s,Mnue,Mnue)){
		 return 2*utils::flux(s, mphich,mphich,Mnue,Mnue)*phichPHICHVEve(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHVMvmfl(double cos_t, double s){
	 if(utils::heavi(s,Mnum,Mnum)){
		 return 2*utils::flux(s, mphich,mphich,Mnum,Mnum)*phichPHICHVMvm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHVTvtfl(double cos_t, double s){
	 if(utils::heavi(s,Mnut,Mnut)){
		 return 2*utils::flux(s, mphich,mphich,Mnut,Mnut)*phichPHICHVTvt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHEefl(double cos_t, double s){
	 if(utils::heavi(s,Me,Me)){
		 return 2*utils::flux(s, mphich,mphich,Me,Me)*phichPHICHEe(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHEmfl(double cos_t, double s){
	 if(utils::heavi(s,Me,MM)){
		 return 2*utils::flux(s, mphich,mphich,Me,MM)*phichPHICHEm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHEtafl(double cos_t, double s){
	 if(utils::heavi(s,Me,MTA)){
		 return 2*utils::flux(s, mphich,mphich,Me,MTA)*phichPHICHEta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHeMfl(double cos_t, double s){
	 if(utils::heavi(s,Me,MM)){
		 return 2*utils::flux(s, mphich,mphich,Me,MM)*phichPHICHeM(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHeTAfl(double cos_t, double s){
	 if(utils::heavi(s,Me,MTA)){
		 return 2*utils::flux(s, mphich,mphich,Me,MTA)*phichPHICHeTA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHMmfl(double cos_t, double s){
	 if(utils::heavi(s,MM,MM)){
		 return 2*utils::flux(s, mphich,mphich,MM,MM)*phichPHICHMm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHMtafl(double cos_t, double s){
	 if(utils::heavi(s,MM,MTA)){
		 return 2*utils::flux(s, mphich,mphich,MM,MTA)*phichPHICHMta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHmTAfl(double cos_t, double s){
	 if(utils::heavi(s,MM,MTA)){
		 return 2*utils::flux(s, mphich,mphich,MM,MTA)*phichPHICHmTA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHTAtafl(double cos_t, double s){
	 if(utils::heavi(s,MTA,MTA)){
		 return 2*utils::flux(s, mphich,mphich,MTA,MTA)*phichPHICHTAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHUufl(double cos_t, double s){
	 if(utils::heavi(s,MU,MU)){
		 return 2*utils::flux(s, mphich,mphich,MU,MU)*phichPHICHUu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHCcfl(double cos_t, double s){
	 if(utils::heavi(s,MC,MC)){
		 return 2*utils::flux(s, mphich,mphich,MC,MC)*phichPHICHCc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHTtfl(double cos_t, double s){
	 if(utils::heavi(s,MT,MT)){
		 return 2*utils::flux(s, mphich,mphich,MT,MT)*phichPHICHTt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHDdfl(double cos_t, double s){
	 if(utils::heavi(s,MD,MD)){
		 return 2*utils::flux(s, mphich,mphich,MD,MD)*phichPHICHDd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHSsfl(double cos_t, double s){
	 if(utils::heavi(s,MS,MS)){
		 return 2*utils::flux(s, mphich,mphich,MS,MS)*phichPHICHSs(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichPHICHBbfl(double cos_t, double s){
	 if(utils::heavi(s,MB,MB)){
		 return 2*utils::flux(s, mphich,mphich,MB,MB)*phichPHICHBb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::phichphich(double cos_t, double s){
	 return ( phichphichEEfl(cos_t, s) + phichphichEMfl(cos_t, s) +\
 
   phichphichETAfl(cos_t, s) + phichphichMMfl(cos_t, s) +\
 
   phichphichMTAfl(cos_t, s) + phichphichTATAfl(cos_t, s) +\
 
   phichPHICHhhfl(cos_t, s) + phichPHICHhAfl(cos_t, s) +\
 
   phichPHICHhZfl(cos_t, s) + phichPHICHAAfl(cos_t, s) +\
 
   phichPHICHAZfl(cos_t, s) + phichPHICHZZfl(cos_t, s) +\
 
   phichPHICHwWfl(cos_t, s) + phichPHICHVEvefl(cos_t, s) +\
 
   phichPHICHVMvmfl(cos_t, s) + phichPHICHVTvtfl(cos_t, s) +\
 
   phichPHICHEefl(cos_t, s) + phichPHICHEmfl(cos_t, s) +\
 
   phichPHICHEtafl(cos_t, s) + phichPHICHeMfl(cos_t, s) +\
 
   phichPHICHeTAfl(cos_t, s) + phichPHICHMmfl(cos_t, s) +\
 
   phichPHICHMtafl(cos_t, s) + phichPHICHmTAfl(cos_t, s) +\
 
   phichPHICHTAtafl(cos_t, s) + phichPHICHUufl(cos_t, s) +\
 
   phichPHICHCcfl(cos_t, s) + phichPHICHTtfl(cos_t, s) +\
 
   phichPHICHDdfl(cos_t, s) + phichPHICHSsfl(cos_t, s) +\
 
   phichPHICHBbfl(cos_t, s) );
}
