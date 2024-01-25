///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"
#include "utils.hpp"

double DT::A1A1HHfl(double cos_t, double s){
	 if(heavi(s,MH,MH)){
		 return 0.5*flux(s, MA1,MA1,MH,MH)*A1A1HH(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A1A1HS1fl(double cos_t, double s){
	 if(heavi(s,MH,MS1)){
		 return flux(s, MA1,MA1,MH,MS1)*A1A1HS1(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A1A1S1S1fl(double cos_t, double s){
	 if(heavi(s,MS1,MS1)){
		 return 0.5*flux(s, MA1,MA1,MS1,MS1)*A1A1S1S1(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A1A1ZZfl(double cos_t, double s){
	 if(heavi(s,MZ,MZ)){
		 return 0.5*flux(s, MA1,MA1,MZ,MZ)*A1A1ZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A1A1wWfl(double cos_t, double s){
	 if(heavi(s,MW,MW)){
		 return flux(s, MA1,MA1,MW,MW)*A1A1wW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A1A1Eefl(double cos_t, double s){
	 if(heavi(s,Me,Me)){
		 return flux(s, MA1,MA1,Me,Me)*A1A1Ee(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A1A1MUmufl(double cos_t, double s){
	 if(heavi(s,MMU,MMU)){
		 return flux(s, MA1,MA1,MMU,MMU)*A1A1MUmu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A1A1TAtafl(double cos_t, double s){
	 if(heavi(s,MTA,MTA)){
		 return flux(s, MA1,MA1,MTA,MTA)*A1A1TAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A1A1Uufl(double cos_t, double s){
	 if(heavi(s,MU,MU)){
		 return flux(s, MA1,MA1,MU,MU)*A1A1Uu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A1A1Ccfl(double cos_t, double s){
	 if(heavi(s,MC,MC)){
		 return flux(s, MA1,MA1,MC,MC)*A1A1Cc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A1A1Ttfl(double cos_t, double s){
	 if(heavi(s,MT,MT)){
		 return flux(s, MA1,MA1,MT,MT)*A1A1Tt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A1A1Ddfl(double cos_t, double s){
	 if(heavi(s,MD,MD)){
		 return flux(s, MA1,MA1,MD,MD)*A1A1Dd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A1A1Ssfl(double cos_t, double s){
	 if(heavi(s,MS,MS)){
		 return flux(s, MA1,MA1,MS,MS)*A1A1Ss(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A1A1Bbfl(double cos_t, double s){
	 if(heavi(s,MB,MB)){
		 return flux(s, MA1,MA1,MB,MB)*A1A1Bb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A1A1(double cos_t, double s){
	 return ( A1A1HHfl(cos_t, s) + A1A1HS1fl(cos_t, s) + A1A1S1S1fl(cos_t, s) +\
 
   A1A1ZZfl(cos_t, s) + A1A1wWfl(cos_t, s) + A1A1Eefl(cos_t, s) +\
 
   A1A1MUmufl(cos_t, s) + A1A1TAtafl(cos_t, s) + A1A1Uufl(cos_t, s) +\
 
   A1A1Ccfl(cos_t, s) + A1A1Ttfl(cos_t, s) + A1A1Ddfl(cos_t, s) +\
 
   A1A1Ssfl(cos_t, s) + A1A1Bbfl(cos_t, s) );
}
