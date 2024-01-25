///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"
#include "utils.hpp"

double DT::amp2s::A0A0hhfl(double cos_t, double s){
	 if(utils::heavi(s,mh,mh)){
		 return 0.5*utils::flux(s, MA0,MA0,mh,mh)*A0A0hh(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0A0ZZfl(double cos_t, double s){
	 if(utils::heavi(s,MZ,MZ)){
		 return 0.5*utils::flux(s, MA0,MA0,MZ,MZ)*A0A0ZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0A0wWfl(double cos_t, double s){
	 if(utils::heavi(s,MW,MW)){
		 return utils::flux(s, MA0,MA0,MW,MW)*A0A0wW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0A0GGfl(double cos_t, double s){
	 if(utils::heavi(s,0,0)){
		 return 0.5*utils::flux(s, MA0,MA0,0,0)*A0A0GG(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0A0Eefl(double cos_t, double s){
	 if(utils::heavi(s,Me,Me)){
		 return utils::flux(s, MA0,MA0,Me,Me)*A0A0Ee(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0A0Mmfl(double cos_t, double s){
	 if(utils::heavi(s,MM,MM)){
		 return utils::flux(s, MA0,MA0,MM,MM)*A0A0Mm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0A0TAtafl(double cos_t, double s){
	 if(utils::heavi(s,MTA,MTA)){
		 return utils::flux(s, MA0,MA0,MTA,MTA)*A0A0TAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0A0Uufl(double cos_t, double s){
	 if(utils::heavi(s,MU,MU)){
		 return utils::flux(s, MA0,MA0,MU,MU)*A0A0Uu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0A0Ccfl(double cos_t, double s){
	 if(utils::heavi(s,MC,MC)){
		 return utils::flux(s, MA0,MA0,MC,MC)*A0A0Cc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0A0Ttfl(double cos_t, double s){
	 if(utils::heavi(s,MT,MT)){
		 return utils::flux(s, MA0,MA0,MT,MT)*A0A0Tt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0A0Ddfl(double cos_t, double s){
	 if(utils::heavi(s,MD,MD)){
		 return utils::flux(s, MA0,MA0,MD,MD)*A0A0Dd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0A0Ssfl(double cos_t, double s){
	 if(utils::heavi(s,MS,MS)){
		 return utils::flux(s, MA0,MA0,MS,MS)*A0A0Ss(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0A0Bbfl(double cos_t, double s){
	 if(utils::heavi(s,MB,MB)){
		 return utils::flux(s, MA0,MA0,MB,MB)*A0A0Bb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0A0(double cos_t, double s){
	 return ( A0A0hhfl(cos_t, s) + A0A0ZZfl(cos_t, s) + A0A0wWfl(cos_t, s) +\
 
   A0A0GGfl(cos_t, s) + A0A0Eefl(cos_t, s) + A0A0Mmfl(cos_t, s) +\
 
   A0A0TAtafl(cos_t, s) + A0A0Uufl(cos_t, s) + A0A0Ccfl(cos_t, s) +\
 
   A0A0Ttfl(cos_t, s) + A0A0Ddfl(cos_t, s) + A0A0Ssfl(cos_t, s) +\
 
   A0A0Bbfl(cos_t, s) );
}
