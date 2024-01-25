///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"
#include "utils.hpp"

double DT::amp2s::HchHchWWfl(double cos_t, double s){
	 if(utils::heavi(s,MW,MW)){
		 return 0.5*2*utils::flux(s, MHch,MHch,MW,MW)*HchHchWW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHhhfl(double cos_t, double s){
	 if(utils::heavi(s,mh,mh)){
		 return 0.5*2*utils::flux(s, MHch,MHch,mh,mh)*HchHCHhh(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHhAfl(double cos_t, double s){
	 if(utils::heavi(s,mh,0)){
		 return 2*utils::flux(s, MHch,MHch,mh,0)*HchHCHhA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHhZfl(double cos_t, double s){
	 if(utils::heavi(s,mh,MZ)){
		 return 2*utils::flux(s, MHch,MHch,mh,MZ)*HchHCHhZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHAAfl(double cos_t, double s){
	 if(utils::heavi(s,0,0)){
		 return 0.5*2*utils::flux(s, MHch,MHch,0,0)*HchHCHAA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHAZfl(double cos_t, double s){
	 if(utils::heavi(s,0,MZ)){
		 return 2*utils::flux(s, MHch,MHch,0,MZ)*HchHCHAZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHZZfl(double cos_t, double s){
	 if(utils::heavi(s,MZ,MZ)){
		 return 0.5*2*utils::flux(s, MHch,MHch,MZ,MZ)*HchHCHZZ(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHwWfl(double cos_t, double s){
	 if(utils::heavi(s,MW,MW)){
		 return 2*utils::flux(s, MHch,MHch,MW,MW)*HchHCHwW(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHGGfl(double cos_t, double s){
	 if(utils::heavi(s,0,0)){
		 return 0.5*2*utils::flux(s, MHch,MHch,0,0)*HchHCHGG(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHVEvefl(double cos_t, double s){
	 if(utils::heavi(s,Mnue,Mnue)){
		 return 2*utils::flux(s, MHch,MHch,Mnue,Mnue)*HchHCHVEve(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHVMvmfl(double cos_t, double s){
	 if(utils::heavi(s,Mnum,Mnum)){
		 return 2*utils::flux(s, MHch,MHch,Mnum,Mnum)*HchHCHVMvm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHVTvtfl(double cos_t, double s){
	 if(utils::heavi(s,Mnut,Mnut)){
		 return 2*utils::flux(s, MHch,MHch,Mnut,Mnut)*HchHCHVTvt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHEefl(double cos_t, double s){
	 if(utils::heavi(s,Me,Me)){
		 return 2*utils::flux(s, MHch,MHch,Me,Me)*HchHCHEe(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHMmfl(double cos_t, double s){
	 if(utils::heavi(s,MM,MM)){
		 return 2*utils::flux(s, MHch,MHch,MM,MM)*HchHCHMm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHTAtafl(double cos_t, double s){
	 if(utils::heavi(s,MTA,MTA)){
		 return 2*utils::flux(s, MHch,MHch,MTA,MTA)*HchHCHTAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHUufl(double cos_t, double s){
	 if(utils::heavi(s,MU,MU)){
		 return 2*utils::flux(s, MHch,MHch,MU,MU)*HchHCHUu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHCcfl(double cos_t, double s){
	 if(utils::heavi(s,MC,MC)){
		 return 2*utils::flux(s, MHch,MHch,MC,MC)*HchHCHCc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHTtfl(double cos_t, double s){
	 if(utils::heavi(s,MT,MT)){
		 return 2*utils::flux(s, MHch,MHch,MT,MT)*HchHCHTt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHDdfl(double cos_t, double s){
	 if(utils::heavi(s,MD,MD)){
		 return 2*utils::flux(s, MHch,MHch,MD,MD)*HchHCHDd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHSsfl(double cos_t, double s){
	 if(utils::heavi(s,MS,MS)){
		 return 2*utils::flux(s, MHch,MHch,MS,MS)*HchHCHSs(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHCHBbfl(double cos_t, double s){
	 if(utils::heavi(s,MB,MB)){
		 return 2*utils::flux(s, MHch,MHch,MB,MB)*HchHCHBb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::HchHch(double cos_t, double s){
	 return ( HchHchWWfl(cos_t, s) + HchHCHhhfl(cos_t, s) + HchHCHhAfl(cos_t, s)\
 
   + HchHCHhZfl(cos_t, s) + HchHCHAAfl(cos_t, s) + HchHCHAZfl(cos_t, s) +\
 
   HchHCHZZfl(cos_t, s) + HchHCHwWfl(cos_t, s) + HchHCHGGfl(cos_t, s) +\
 
   HchHCHVEvefl(cos_t, s) + HchHCHVMvmfl(cos_t, s) + HchHCHVTvtfl(cos_t, s) +\
 
   HchHCHEefl(cos_t, s) + HchHCHMmfl(cos_t, s) + HchHCHTAtafl(cos_t, s) +\
 
   HchHCHUufl(cos_t, s) + HchHCHCcfl(cos_t, s) + HchHCHTtfl(cos_t, s) +\
 
   HchHCHDdfl(cos_t, s) + HchHCHSsfl(cos_t, s) + HchHCHBbfl(cos_t, s) );
}
