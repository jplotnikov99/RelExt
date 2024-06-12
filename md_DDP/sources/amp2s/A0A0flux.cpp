///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::A0A0H1H1fl(const double &cos_t, const double &s){
	 if(heavi(s,MH1,MH1)){
		 return 0.5*flux(s, MA0,MA0,MH1,MH1)*A0A0H1H1(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0A0H1H2fl(const double &cos_t, const double &s){
	 if(heavi(s,MH1,MH2)){
		 return flux(s, MA0,MA0,MH1,MH2)*A0A0H1H2(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0A0H2H2fl(const double &cos_t, const double &s){
	 if(heavi(s,MH2,MH2)){
		 return 0.5*flux(s, MA0,MA0,MH2,MH2)*A0A0H2H2(cos_t, s);
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
double DT::A0A0GGfl(const double &cos_t, const double &s){
	 if(heavi(s,0,0)){
		 return 0.5*flux(s, MA0,MA0,0,0)*A0A0GG(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0A0Eefl(const double &cos_t, const double &s){
	 if(heavi(s,Me,Me)){
		 return flux(s, MA0,MA0,Me,Me)*A0A0Ee(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0A0Mmfl(const double &cos_t, const double &s){
	 if(heavi(s,MM,MM)){
		 return flux(s, MA0,MA0,MM,MM)*A0A0Mm(cos_t, s);
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
