///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"
#include "utils.hpp"

double DT::amp2s::N1phichhEfl(double cos_t, double s){
	 if(utils::heavi(s,mH,Me)){
		 return 2*2*utils::flux(s, mN1,mphich,mH,Me)*N1phichhE(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1phichhMfl(double cos_t, double s){
	 if(utils::heavi(s,mH,MM)){
		 return 2*2*utils::flux(s, mN1,mphich,mH,MM)*N1phichhM(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1phichhTAfl(double cos_t, double s){
	 if(utils::heavi(s,mH,MTA)){
		 return 2*2*utils::flux(s, mN1,mphich,mH,MTA)*N1phichhTA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1phichAEfl(double cos_t, double s){
	 if(utils::heavi(s,0,Me)){
		 return 2*2*utils::flux(s, mN1,mphich,0,Me)*N1phichAE(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1phichAMfl(double cos_t, double s){
	 if(utils::heavi(s,0,MM)){
		 return 2*2*utils::flux(s, mN1,mphich,0,MM)*N1phichAM(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1phichATAfl(double cos_t, double s){
	 if(utils::heavi(s,0,MTA)){
		 return 2*2*utils::flux(s, mN1,mphich,0,MTA)*N1phichATA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1phichZEfl(double cos_t, double s){
	 if(utils::heavi(s,MZ,Me)){
		 return 2*2*utils::flux(s, mN1,mphich,MZ,Me)*N1phichZE(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1phichZMfl(double cos_t, double s){
	 if(utils::heavi(s,MZ,MM)){
		 return 2*2*utils::flux(s, mN1,mphich,MZ,MM)*N1phichZM(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1phichZTAfl(double cos_t, double s){
	 if(utils::heavi(s,MZ,MTA)){
		 return 2*2*utils::flux(s, mN1,mphich,MZ,MTA)*N1phichZTA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1phichWVEfl(double cos_t, double s){
	 if(utils::heavi(s,MW,Mnue)){
		 return 2*2*utils::flux(s, mN1,mphich,MW,Mnue)*N1phichWVE(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1phichWVMfl(double cos_t, double s){
	 if(utils::heavi(s,MW,Mnum)){
		 return 2*2*utils::flux(s, mN1,mphich,MW,Mnum)*N1phichWVM(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1phichWVTfl(double cos_t, double s){
	 if(utils::heavi(s,MW,Mnut)){
		 return 2*2*utils::flux(s, mN1,mphich,MW,Mnut)*N1phichWVT(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1phich(double cos_t, double s){
	 return ( N1phichhEfl(cos_t, s) + N1phichhMfl(cos_t, s) +\
 
   N1phichhTAfl(cos_t, s) + N1phichAEfl(cos_t, s) + N1phichAMfl(cos_t, s) +\
 
   N1phichATAfl(cos_t, s) + N1phichZEfl(cos_t, s) + N1phichZMfl(cos_t, s) +\
 
   N1phichZTAfl(cos_t, s) + N1phichWVEfl(cos_t, s) + N1phichWVMfl(cos_t, s) +\
 
   N1phichWVTfl(cos_t, s) );
}
