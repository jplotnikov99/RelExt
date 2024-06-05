///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::HchHchWWfl(const double &cos_t, const double &s){
	 if(heavi(s,MW,MW)){
		 return 0.5*2*flux(s, MHch,MHch,MW,MW)*HchHchWW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHH1H1fl(const double &cos_t, const double &s){
	 if(heavi(s,MH1,MH1)){
		 return 0.5*2*flux(s, MHch,MHch,MH1,MH1)*HchHCHH1H1(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHH1H2fl(const double &cos_t, const double &s){
	 if(heavi(s,MH1,MH2)){
		 return 2*flux(s, MHch,MHch,MH1,MH2)*HchHCHH1H2(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHH2H2fl(const double &cos_t, const double &s){
	 if(heavi(s,MH2,MH2)){
		 return 0.5*2*flux(s, MHch,MHch,MH2,MH2)*HchHCHH2H2(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHH1Afl(const double &cos_t, const double &s){
	 if(heavi(s,MH1,0)){
		 return 2*flux(s, MHch,MHch,MH1,0)*HchHCHH1A(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHH1Zfl(const double &cos_t, const double &s){
	 if(heavi(s,MH1,MZ)){
		 return 2*flux(s, MHch,MHch,MH1,MZ)*HchHCHH1Z(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHH2Afl(const double &cos_t, const double &s){
	 if(heavi(s,MH2,0)){
		 return 2*flux(s, MHch,MHch,MH2,0)*HchHCHH2A(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHH2Zfl(const double &cos_t, const double &s){
	 if(heavi(s,MH2,MZ)){
		 return 2*flux(s, MHch,MHch,MH2,MZ)*HchHCHH2Z(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHAAfl(const double &cos_t, const double &s){
	 if(heavi(s,0,0)){
		 return 0.5*2*flux(s, MHch,MHch,0,0)*HchHCHAA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHAZfl(const double &cos_t, const double &s){
	 if(heavi(s,0,MZ)){
		 return 2*flux(s, MHch,MHch,0,MZ)*HchHCHAZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHZZfl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*2*flux(s, MHch,MHch,MZ,MZ)*HchHCHZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHwWfl(const double &cos_t, const double &s){
	 if(heavi(s,MW,MW)){
		 return 2*flux(s, MHch,MHch,MW,MW)*HchHCHwW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHVEvefl(const double &cos_t, const double &s){
	 if(heavi(s,Mnue,Mnue)){
		 return 2*flux(s, MHch,MHch,Mnue,Mnue)*HchHCHVEve(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHVMvmfl(const double &cos_t, const double &s){
	 if(heavi(s,Mnum,Mnum)){
		 return 2*flux(s, MHch,MHch,Mnum,Mnum)*HchHCHVMvm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHVTvtfl(const double &cos_t, const double &s){
	 if(heavi(s,Mnut,Mnut)){
		 return 2*flux(s, MHch,MHch,Mnut,Mnut)*HchHCHVTvt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHEefl(const double &cos_t, const double &s){
	 if(heavi(s,Me,Me)){
		 return 2*flux(s, MHch,MHch,Me,Me)*HchHCHEe(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHMmfl(const double &cos_t, const double &s){
	 if(heavi(s,MM,MM)){
		 return 2*flux(s, MHch,MHch,MM,MM)*HchHCHMm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHTAtafl(const double &cos_t, const double &s){
	 if(heavi(s,MTA,MTA)){
		 return 2*flux(s, MHch,MHch,MTA,MTA)*HchHCHTAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHUufl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MU)){
		 return 2*flux(s, MHch,MHch,MU,MU)*HchHCHUu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHCcfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MC)){
		 return 2*flux(s, MHch,MHch,MC,MC)*HchHCHCc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHTtfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MT)){
		 return 2*flux(s, MHch,MHch,MT,MT)*HchHCHTt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHDdfl(const double &cos_t, const double &s){
	 if(heavi(s,MD,MD)){
		 return 2*flux(s, MHch,MHch,MD,MD)*HchHCHDd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHSsfl(const double &cos_t, const double &s){
	 if(heavi(s,MS,MS)){
		 return 2*flux(s, MHch,MHch,MS,MS)*HchHCHSs(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::HchHCHBbfl(const double &cos_t, const double &s){
	 if(heavi(s,MB,MB)){
		 return 2*flux(s, MHch,MHch,MB,MB)*HchHCHBb(cos_t, s);
	 }
	 else{ return 0; }

}
