///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"
#include "utils.hpp"

double DT::amp2s::H0HchhWfl(double cos_t, double s){
	 if(utils::heavi(s,mh,MW)){
		 return 2*2*utils::flux(s, MH0,MHch,mh,MW)*H0HchhW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0HchAWfl(double cos_t, double s){
	 if(utils::heavi(s,0,MW)){
		 return 2*2*utils::flux(s, MH0,MHch,0,MW)*H0HchAW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0HchZWfl(double cos_t, double s){
	 if(utils::heavi(s,MZ,MW)){
		 return 2*2*utils::flux(s, MH0,MHch,MZ,MW)*H0HchZW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0HchveEfl(double cos_t, double s){
	 if(utils::heavi(s,Mnue,Me)){
		 return 2*2*utils::flux(s, MH0,MHch,Mnue,Me)*H0HchveE(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0HchvmMfl(double cos_t, double s){
	 if(utils::heavi(s,Mnum,MM)){
		 return 2*2*utils::flux(s, MH0,MHch,Mnum,MM)*H0HchvmM(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0HchvtTAfl(double cos_t, double s){
	 if(utils::heavi(s,Mnut,MTA)){
		 return 2*2*utils::flux(s, MH0,MHch,Mnut,MTA)*H0HchvtTA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0HchuDfl(double cos_t, double s){
	 if(utils::heavi(s,MU,MD)){
		 return 2*2*utils::flux(s, MH0,MHch,MU,MD)*H0HchuD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0HchuSfl(double cos_t, double s){
	 if(utils::heavi(s,MU,MS)){
		 return 2*2*utils::flux(s, MH0,MHch,MU,MS)*H0HchuS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0HchuBfl(double cos_t, double s){
	 if(utils::heavi(s,MU,MB)){
		 return 2*2*utils::flux(s, MH0,MHch,MU,MB)*H0HchuB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0HchcDfl(double cos_t, double s){
	 if(utils::heavi(s,MC,MD)){
		 return 2*2*utils::flux(s, MH0,MHch,MC,MD)*H0HchcD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0HchcSfl(double cos_t, double s){
	 if(utils::heavi(s,MC,MS)){
		 return 2*2*utils::flux(s, MH0,MHch,MC,MS)*H0HchcS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0HchcBfl(double cos_t, double s){
	 if(utils::heavi(s,MC,MB)){
		 return 2*2*utils::flux(s, MH0,MHch,MC,MB)*H0HchcB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0HchtDfl(double cos_t, double s){
	 if(utils::heavi(s,MT,MD)){
		 return 2*2*utils::flux(s, MH0,MHch,MT,MD)*H0HchtD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0HchtSfl(double cos_t, double s){
	 if(utils::heavi(s,MT,MS)){
		 return 2*2*utils::flux(s, MH0,MHch,MT,MS)*H0HchtS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0HchtBfl(double cos_t, double s){
	 if(utils::heavi(s,MT,MB)){
		 return 2*2*utils::flux(s, MH0,MHch,MT,MB)*H0HchtB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::H0Hch(double cos_t, double s){
	 return ( H0HchhWfl(cos_t, s) + H0HchAWfl(cos_t, s) + H0HchZWfl(cos_t, s) +\
 
   H0HchveEfl(cos_t, s) + H0HchvmMfl(cos_t, s) + H0HchvtTAfl(cos_t, s) +\
 
   H0HchuDfl(cos_t, s) + H0HchuSfl(cos_t, s) + H0HchuBfl(cos_t, s) +\
 
   H0HchcDfl(cos_t, s) + H0HchcSfl(cos_t, s) + H0HchcBfl(cos_t, s) +\
 
   H0HchtDfl(cos_t, s) + H0HchtSfl(cos_t, s) + H0HchtBfl(cos_t, s) );
}
