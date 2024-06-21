///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::pQPQHHfl(const double &cos_t, const double &s){
	 if(heavi(s,MH,MH)){
		 return 0.5*2*flux(s, MphiQ,MphiQ,MH,MH)*pQPQHH(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQHAfl(const double &cos_t, const double &s){
	 if(heavi(s,MH,0)){
		 return 2*flux(s, MphiQ,MphiQ,MH,0)*pQPQHA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQHZfl(const double &cos_t, const double &s){
	 if(heavi(s,MH,MZ)){
		 return 2*flux(s, MphiQ,MphiQ,MH,MZ)*pQPQHZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQHGfl(const double &cos_t, const double &s){
	 if(heavi(s,MH,0)){
		 return 2*flux(s, MphiQ,MphiQ,MH,0)*pQPQHG(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQAAfl(const double &cos_t, const double &s){
	 if(heavi(s,0,0)){
		 return 0.5*2*flux(s, MphiQ,MphiQ,0,0)*pQPQAA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQAZfl(const double &cos_t, const double &s){
	 if(heavi(s,0,MZ)){
		 return 2*flux(s, MphiQ,MphiQ,0,MZ)*pQPQAZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQAGfl(const double &cos_t, const double &s){
	 if(heavi(s,0,0)){
		 return 2*flux(s, MphiQ,MphiQ,0,0)*pQPQAG(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQZZfl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*2*flux(s, MphiQ,MphiQ,MZ,MZ)*pQPQZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQZGfl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,0)){
		 return 2*flux(s, MphiQ,MphiQ,MZ,0)*pQPQZG(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQwWfl(const double &cos_t, const double &s){
	 if(heavi(s,MW,MW)){
		 return 2*flux(s, MphiQ,MphiQ,MW,MW)*pQPQwW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQGGfl(const double &cos_t, const double &s){
	 if(heavi(s,0,0)){
		 return 0.5*2*flux(s, MphiQ,MphiQ,0,0)*pQPQGG(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQVEvefl(const double &cos_t, const double &s){
	 if(heavi(s,0,0)){
		 return 2*flux(s, MphiQ,MphiQ,0,0)*pQPQVEve(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQVMvmfl(const double &cos_t, const double &s){
	 if(heavi(s,0,0)){
		 return 2*flux(s, MphiQ,MphiQ,0,0)*pQPQVMvm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQVTvtfl(const double &cos_t, const double &s){
	 if(heavi(s,0,0)){
		 return 2*flux(s, MphiQ,MphiQ,0,0)*pQPQVTvt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQEefl(const double &cos_t, const double &s){
	 if(heavi(s,Me,Me)){
		 return 2*flux(s, MphiQ,MphiQ,Me,Me)*pQPQEe(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQMUmufl(const double &cos_t, const double &s){
	 if(heavi(s,MMU,MMU)){
		 return 2*flux(s, MphiQ,MphiQ,MMU,MMU)*pQPQMUmu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQTAtafl(const double &cos_t, const double &s){
	 if(heavi(s,MTA,MTA)){
		 return 2*flux(s, MphiQ,MphiQ,MTA,MTA)*pQPQTAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQUufl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MU)){
		 return 2*flux(s, MphiQ,MphiQ,MU,MU)*pQPQUu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQUcfl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MC)){
		 return 2*flux(s, MphiQ,MphiQ,MU,MC)*pQPQUc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQUtfl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MT)){
		 return 2*flux(s, MphiQ,MphiQ,MU,MT)*pQPQUt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQuCfl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MC)){
		 return 2*flux(s, MphiQ,MphiQ,MU,MC)*pQPQuC(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQuTfl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MT)){
		 return 2*flux(s, MphiQ,MphiQ,MU,MT)*pQPQuT(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQCcfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MC)){
		 return 2*flux(s, MphiQ,MphiQ,MC,MC)*pQPQCc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQCtfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MT)){
		 return 2*flux(s, MphiQ,MphiQ,MC,MT)*pQPQCt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQcTfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MT)){
		 return 2*flux(s, MphiQ,MphiQ,MC,MT)*pQPQcT(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQTtfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MT)){
		 return 2*flux(s, MphiQ,MphiQ,MT,MT)*pQPQTt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQDdfl(const double &cos_t, const double &s){
	 if(heavi(s,MD,MD)){
		 return 2*flux(s, MphiQ,MphiQ,MD,MD)*pQPQDd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQSsfl(const double &cos_t, const double &s){
	 if(heavi(s,MS,MS)){
		 return 2*flux(s, MphiQ,MphiQ,MS,MS)*pQPQSs(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQSbfl(const double &cos_t, const double &s){
	 if(heavi(s,MS,MB)){
		 return 2*flux(s, MphiQ,MphiQ,MS,MB)*pQPQSb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQsBfl(const double &cos_t, const double &s){
	 if(heavi(s,MS,MB)){
		 return 2*flux(s, MphiQ,MphiQ,MS,MB)*pQPQsB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::pQPQBbfl(const double &cos_t, const double &s){
	 if(heavi(s,MB,MB)){
		 return 2*flux(s, MphiQ,MphiQ,MB,MB)*pQPQBb(cos_t, s);
	 }
	 else{ return 0; }

}
