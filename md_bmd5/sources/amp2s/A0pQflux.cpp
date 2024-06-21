///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::A0pQVMufl(const double &cos_t, const double &s){
	 if(heavi(s,0,MU)){
		 return 2*2*flux(s, MA0,MphiQ,0,MU)*A0pQVMu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0pQVMcfl(const double &cos_t, const double &s){
	 if(heavi(s,0,MC)){
		 return 2*2*flux(s, MA0,MphiQ,0,MC)*A0pQVMc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0pQVMtfl(const double &cos_t, const double &s){
	 if(heavi(s,0,MT)){
		 return 2*2*flux(s, MA0,MphiQ,0,MT)*A0pQVMt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0pQMUsfl(const double &cos_t, const double &s){
	 if(heavi(s,MMU,MS)){
		 return 2*2*flux(s, MA0,MphiQ,MMU,MS)*A0pQMUs(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::A0pQMUbfl(const double &cos_t, const double &s){
	 if(heavi(s,MMU,MB)){
		 return 2*2*flux(s, MA0,MphiQ,MMU,MB)*A0pQMUb(cos_t, s);
	 }
	 else{ return 0; }

}
