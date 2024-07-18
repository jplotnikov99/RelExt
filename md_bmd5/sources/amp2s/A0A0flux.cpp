///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::A0A0HHfl(const double &cos_t, const double &s){
	 if(heavi(s,MH,MH)){
		 return 0.5*flux(s, MA0,MA0,MH,MH)*A0A0HH(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0A0ZZfl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*flux(s, MA0,MA0,MZ,MZ)*A0A0ZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0A0wWfl(const double &cos_t, const double &s){
	 if(heavi(s,MW,MW)){
		 return flux(s, MA0,MA0,MW,MW)*A0A0wW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0A0VMvmfl(const double &cos_t, const double &s){
	 if(heavi(s,0,0)){
		 return flux(s, MA0,MA0,0,0)*A0A0VMvm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0A0Eefl(const double &cos_t, const double &s){
	 if(heavi(s,Me,Me)){
		 return flux(s, MA0,MA0,Me,Me)*A0A0Ee(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0A0MUmufl(const double &cos_t, const double &s){
	 if(heavi(s,MMU,MMU)){
		 return flux(s, MA0,MA0,MMU,MMU)*A0A0MUmu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0A0TAtafl(const double &cos_t, const double &s){
	 if(heavi(s,MTA,MTA)){
		 return flux(s, MA0,MA0,MTA,MTA)*A0A0TAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0A0Uufl(const double &cos_t, const double &s){
	 if(heavi(s,MU,MU)){
		 return flux(s, MA0,MA0,MU,MU)*A0A0Uu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0A0Ccfl(const double &cos_t, const double &s){
	 if(heavi(s,MC,MC)){
		 return flux(s, MA0,MA0,MC,MC)*A0A0Cc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0A0Ttfl(const double &cos_t, const double &s){
	 if(heavi(s,MT,MT)){
		 return flux(s, MA0,MA0,MT,MT)*A0A0Tt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0A0Ddfl(const double &cos_t, const double &s){
	 if(heavi(s,MD,MD)){
		 return flux(s, MA0,MA0,MD,MD)*A0A0Dd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0A0Ssfl(const double &cos_t, const double &s){
	 if(heavi(s,MS,MS)){
		 return flux(s, MA0,MA0,MS,MS)*A0A0Ss(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0A0Bbfl(const double &cos_t, const double &s){
	 if(heavi(s,MB,MB)){
		 return flux(s, MA0,MA0,MB,MB)*A0A0Bb(cos_t, s);
	 }
	 else{ return 0; }

}
