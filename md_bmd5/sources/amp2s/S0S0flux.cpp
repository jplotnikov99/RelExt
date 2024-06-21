///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::S0S0HHfl(const double &cos_t, const double &s){
	 if(heavi(s,MH,MH)){
		 return 0.5*flux(s, MS0,MS0,MH,MH)*S0S0HH(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::S0S0ZZfl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*flux(s, MS0,MS0,MZ,MZ)*S0S0ZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::S0S0wWfl(const double &cos_t, const double &s){
	 if(heavi(s,MW,MW)){
		 return flux(s, MS0,MS0,MW,MW)*S0S0wW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::S0S0VMvmfl(const double &cos_t, const double &s){
	 if(heavi(s,0,0)){
		 return flux(s, MS0,MS0,0,0)*S0S0VMvm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::S0S0Eefl(const double &cos_t, const double &s){
	 if(heavi(s,Me,Me)){
		 return flux(s, MS0,MS0,Me,Me)*S0S0Ee(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::S0S0MUmufl(const double &cos_t, const double &s){
	 if(heavi(s,MMU,MMU)){
		 return flux(s, MS0,MS0,MMU,MMU)*S0S0MUmu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::S0S0TAtafl(const double &cos_t, const double &s){
	 if(heavi(s,MTA,MTA)){
		 return flux(s, MS0,MS0,MTA,MTA)*S0S0TAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::S0S0Uufl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MU)){
		 return flux(s, MS0,MS0,MU,MU)*S0S0Uu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::S0S0Ccfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MC)){
		 return flux(s, MS0,MS0,MC,MC)*S0S0Cc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::S0S0Ttfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MT)){
		 return flux(s, MS0,MS0,MT,MT)*S0S0Tt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::S0S0Ddfl(const double &cos_t, const double &s){
	 if(heavi(s,MD,MD)){
		 return flux(s, MS0,MS0,MD,MD)*S0S0Dd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::S0S0Ssfl(const double &cos_t, const double &s){
	 if(heavi(s,MS,MS)){
		 return flux(s, MS0,MS0,MS,MS)*S0S0Ss(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::S0S0Bbfl(const double &cos_t, const double &s){
	 if(heavi(s,MB,MB)){
		 return flux(s, MS0,MS0,MB,MB)*S0S0Bb(cos_t, s);
	 }
	 else{ return 0; }

}
