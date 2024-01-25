///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"
#include "utils.hpp"

double DT::amp2s::H0A0hZfl(double cos_t, double s){
	 if(utils::heavi(s,mh,MZ)){
		 return 2*utils::flux(s, MH0,MA0,mh,MZ)*H0A0hZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0A0wWfl(double cos_t, double s){
	 if(utils::heavi(s,MW,MW)){
		 return 2*utils::flux(s, MH0,MA0,MW,MW)*H0A0wW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0A0VEvefl(double cos_t, double s){
	 if(utils::heavi(s,Mnue,Mnue)){
		 return 2*utils::flux(s, MH0,MA0,Mnue,Mnue)*H0A0VEve(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0A0VMvmfl(double cos_t, double s){
	 if(utils::heavi(s,Mnum,Mnum)){
		 return 2*utils::flux(s, MH0,MA0,Mnum,Mnum)*H0A0VMvm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0A0VTvtfl(double cos_t, double s){
	 if(utils::heavi(s,Mnut,Mnut)){
		 return 2*utils::flux(s, MH0,MA0,Mnut,Mnut)*H0A0VTvt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0A0Eefl(double cos_t, double s){
	 if(utils::heavi(s,Me,Me)){
		 return 2*utils::flux(s, MH0,MA0,Me,Me)*H0A0Ee(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0A0Mmfl(double cos_t, double s){
	 if(utils::heavi(s,MM,MM)){
		 return 2*utils::flux(s, MH0,MA0,MM,MM)*H0A0Mm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0A0TAtafl(double cos_t, double s){
	 if(utils::heavi(s,MTA,MTA)){
		 return 2*utils::flux(s, MH0,MA0,MTA,MTA)*H0A0TAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0A0Uufl(double cos_t, double s){
	 if(utils::heavi(s,MU,MU)){
		 return 2*utils::flux(s, MH0,MA0,MU,MU)*H0A0Uu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0A0Ccfl(double cos_t, double s){
	 if(utils::heavi(s,MC,MC)){
		 return 2*utils::flux(s, MH0,MA0,MC,MC)*H0A0Cc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0A0Ttfl(double cos_t, double s){
	 if(utils::heavi(s,MT,MT)){
		 return 2*utils::flux(s, MH0,MA0,MT,MT)*H0A0Tt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0A0Ddfl(double cos_t, double s){
	 if(utils::heavi(s,MD,MD)){
		 return 2*utils::flux(s, MH0,MA0,MD,MD)*H0A0Dd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0A0Ssfl(double cos_t, double s){
	 if(utils::heavi(s,MS,MS)){
		 return 2*utils::flux(s, MH0,MA0,MS,MS)*H0A0Ss(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0A0Bbfl(double cos_t, double s){
	 if(utils::heavi(s,MB,MB)){
		 return 2*utils::flux(s, MH0,MA0,MB,MB)*H0A0Bb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0A0(double cos_t, double s){
	 return ( H0A0hZfl(cos_t, s) + H0A0wWfl(cos_t, s) + H0A0VEvefl(cos_t, s) +\
 
   H0A0VMvmfl(cos_t, s) + H0A0VTvtfl(cos_t, s) + H0A0Eefl(cos_t, s) +\
 
   H0A0Mmfl(cos_t, s) + H0A0TAtafl(cos_t, s) + H0A0Uufl(cos_t, s) +\
 
   H0A0Ccfl(cos_t, s) + H0A0Ttfl(cos_t, s) + H0A0Ddfl(cos_t, s) +\
 
   H0A0Ssfl(cos_t, s) + H0A0Bbfl(cos_t, s) );
}
