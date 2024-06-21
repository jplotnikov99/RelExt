///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::chiMchi0vmmufl(const double &cos_t, const double &s){
	 if(heavi(s,0,MMU)){
		 return 2*2*flux(s, MchiM,Mchi0,0,MMU)*chiMchi0vmmu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMCHI0Hwfl(const double &cos_t, const double &s){
	 if(heavi(s,MH,MW)){
		 return 2*2*flux(s, MchiM,Mchi0,MH,MW)*chiMCHI0Hw(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMCHI0Awfl(const double &cos_t, const double &s){
	 if(heavi(s,0,MW)){
		 return 2*2*flux(s, MchiM,Mchi0,0,MW)*chiMCHI0Aw(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMCHI0Zwfl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,MW)){
		 return 2*2*flux(s, MchiM,Mchi0,MZ,MW)*chiMCHI0Zw(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMCHI0VEefl(const double &cos_t, const double &s){
	 if(heavi(s,0,Me)){
		 return 2*2*flux(s, MchiM,Mchi0,0,Me)*chiMCHI0VEe(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMCHI0VMmufl(const double &cos_t, const double &s){
	 if(heavi(s,0,MMU)){
		 return 2*2*flux(s, MchiM,Mchi0,0,MMU)*chiMCHI0VMmu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMCHI0VTtafl(const double &cos_t, const double &s){
	 if(heavi(s,0,MTA)){
		 return 2*2*flux(s, MchiM,Mchi0,0,MTA)*chiMCHI0VTta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMCHI0Udfl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MD)){
		 return 2*2*flux(s, MchiM,Mchi0,MU,MD)*chiMCHI0Ud(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMCHI0Usfl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MS)){
		 return 2*2*flux(s, MchiM,Mchi0,MU,MS)*chiMCHI0Us(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMCHI0Ubfl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MB)){
		 return 2*2*flux(s, MchiM,Mchi0,MU,MB)*chiMCHI0Ub(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMCHI0Cdfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MD)){
		 return 2*2*flux(s, MchiM,Mchi0,MC,MD)*chiMCHI0Cd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMCHI0Csfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MS)){
		 return 2*2*flux(s, MchiM,Mchi0,MC,MS)*chiMCHI0Cs(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMCHI0Cbfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MB)){
		 return 2*2*flux(s, MchiM,Mchi0,MC,MB)*chiMCHI0Cb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMCHI0Tdfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MD)){
		 return 2*2*flux(s, MchiM,Mchi0,MT,MD)*chiMCHI0Td(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMCHI0Tsfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MS)){
		 return 2*2*flux(s, MchiM,Mchi0,MT,MS)*chiMCHI0Ts(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMCHI0Tbfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MB)){
		 return 2*2*flux(s, MchiM,Mchi0,MT,MB)*chiMCHI0Tb(cos_t, s);
	 }
	 else{ return 0; }

}
