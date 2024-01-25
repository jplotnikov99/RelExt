///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"
#include "utils.hpp"

double DT::amp2s::A0HchhWfl(double cos_t, double s){
	 if(utils::heavi(s,mh,MW)){
		 return 2*2*utils::flux(s, MA0,MHch,mh,MW)*A0HchhW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0HchAWfl(double cos_t, double s){
	 if(utils::heavi(s,0,MW)){
		 return 2*2*utils::flux(s, MA0,MHch,0,MW)*A0HchAW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0HchZWfl(double cos_t, double s){
	 if(utils::heavi(s,MZ,MW)){
		 return 2*2*utils::flux(s, MA0,MHch,MZ,MW)*A0HchZW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0HchveEfl(double cos_t, double s){
	 if(utils::heavi(s,Mnue,Me)){
		 return 2*2*utils::flux(s, MA0,MHch,Mnue,Me)*A0HchveE(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0HchvmMfl(double cos_t, double s){
	 if(utils::heavi(s,Mnum,MM)){
		 return 2*2*utils::flux(s, MA0,MHch,Mnum,MM)*A0HchvmM(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0HchvtTAfl(double cos_t, double s){
	 if(utils::heavi(s,Mnut,MTA)){
		 return 2*2*utils::flux(s, MA0,MHch,Mnut,MTA)*A0HchvtTA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0HchuDfl(double cos_t, double s){
	 if(utils::heavi(s,MU,MD)){
		 return 2*2*utils::flux(s, MA0,MHch,MU,MD)*A0HchuD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0HchuSfl(double cos_t, double s){
	 if(utils::heavi(s,MU,MS)){
		 return 2*2*utils::flux(s, MA0,MHch,MU,MS)*A0HchuS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0HchuBfl(double cos_t, double s){
	 if(utils::heavi(s,MU,MB)){
		 return 2*2*utils::flux(s, MA0,MHch,MU,MB)*A0HchuB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0HchcDfl(double cos_t, double s){
	 if(utils::heavi(s,MC,MD)){
		 return 2*2*utils::flux(s, MA0,MHch,MC,MD)*A0HchcD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0HchcSfl(double cos_t, double s){
	 if(utils::heavi(s,MC,MS)){
		 return 2*2*utils::flux(s, MA0,MHch,MC,MS)*A0HchcS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0HchcBfl(double cos_t, double s){
	 if(utils::heavi(s,MC,MB)){
		 return 2*2*utils::flux(s, MA0,MHch,MC,MB)*A0HchcB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0HchtDfl(double cos_t, double s){
	 if(utils::heavi(s,MT,MD)){
		 return 2*2*utils::flux(s, MA0,MHch,MT,MD)*A0HchtD(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0HchtSfl(double cos_t, double s){
	 if(utils::heavi(s,MT,MS)){
		 return 2*2*utils::flux(s, MA0,MHch,MT,MS)*A0HchtS(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0HchtBfl(double cos_t, double s){
	 if(utils::heavi(s,MT,MB)){
		 return 2*2*utils::flux(s, MA0,MHch,MT,MB)*A0HchtB(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::A0Hch(double cos_t, double s){
	 return ( A0HchhWfl(cos_t, s) + A0HchAWfl(cos_t, s) + A0HchZWfl(cos_t, s) +\
 
   A0HchveEfl(cos_t, s) + A0HchvmMfl(cos_t, s) + A0HchvtTAfl(cos_t, s) +\
 
   A0HchuDfl(cos_t, s) + A0HchuSfl(cos_t, s) + A0HchuBfl(cos_t, s) +\
 
   A0HchcDfl(cos_t, s) + A0HchcSfl(cos_t, s) + A0HchcBfl(cos_t, s) +\
 
   A0HchtDfl(cos_t, s) + A0HchtSfl(cos_t, s) + A0HchtBfl(cos_t, s) );
}
