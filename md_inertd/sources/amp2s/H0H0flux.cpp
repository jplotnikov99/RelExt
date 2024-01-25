///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"
#include "utils.hpp"

double DT::amp2s::H0H0hhfl(double cos_t, double s){
	 if(utils::heavi(s,mh,mh)){
		 return 0.5*utils::flux(s, MH0,MH0,mh,mh)*H0H0hh(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0H0ZZfl(double cos_t, double s){
	 if(utils::heavi(s,MZ,MZ)){
		 return 0.5*utils::flux(s, MH0,MH0,MZ,MZ)*H0H0ZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0H0wWfl(double cos_t, double s){
	 if(utils::heavi(s,MW,MW)){
		 return utils::flux(s, MH0,MH0,MW,MW)*H0H0wW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0H0GGfl(double cos_t, double s){
	 if(utils::heavi(s,0,0)){
		 return 0.5*utils::flux(s, MH0,MH0,0,0)*H0H0GG(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0H0Eefl(double cos_t, double s){
	 if(utils::heavi(s,Me,Me)){
		 return utils::flux(s, MH0,MH0,Me,Me)*H0H0Ee(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0H0Mmfl(double cos_t, double s){
	 if(utils::heavi(s,MM,MM)){
		 return utils::flux(s, MH0,MH0,MM,MM)*H0H0Mm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0H0TAtafl(double cos_t, double s){
	 if(utils::heavi(s,MTA,MTA)){
		 return utils::flux(s, MH0,MH0,MTA,MTA)*H0H0TAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0H0Uufl(double cos_t, double s){
	 if(utils::heavi(s,MU,MU)){
		 return utils::flux(s, MH0,MH0,MU,MU)*H0H0Uu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0H0Ccfl(double cos_t, double s){
	 if(utils::heavi(s,MC,MC)){
		 return utils::flux(s, MH0,MH0,MC,MC)*H0H0Cc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0H0Ttfl(double cos_t, double s){
	 if(utils::heavi(s,MT,MT)){
		 return utils::flux(s, MH0,MH0,MT,MT)*H0H0Tt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0H0Ddfl(double cos_t, double s){
	 if(utils::heavi(s,MD,MD)){
		 return utils::flux(s, MH0,MH0,MD,MD)*H0H0Dd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0H0Ssfl(double cos_t, double s){
	 if(utils::heavi(s,MS,MS)){
		 return utils::flux(s, MH0,MH0,MS,MS)*H0H0Ss(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0H0Bbfl(double cos_t, double s){
	 if(utils::heavi(s,MB,MB)){
		 return utils::flux(s, MH0,MH0,MB,MB)*H0H0Bb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0H0(double cos_t, double s){
	 return ( H0H0hhfl(cos_t, s) + H0H0ZZfl(cos_t, s) + H0H0wWfl(cos_t, s) +\
 
   H0H0GGfl(cos_t, s) + H0H0Eefl(cos_t, s) + H0H0Mmfl(cos_t, s) +\
 
   H0H0TAtafl(cos_t, s) + H0H0Uufl(cos_t, s) + H0H0Ccfl(cos_t, s) +\
 
   H0H0Ttfl(cos_t, s) + H0H0Ddfl(cos_t, s) + H0H0Ssfl(cos_t, s) +\
 
   H0H0Bbfl(cos_t, s) );
}
