///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/alldecays.hpp"
#include "../../include/declarations.hpp"

#include "utils.hpp"

double DT::wHHH(){
	 if(heaviDecays(MH,MH,MH)){
		 return 0.5*(-9*sqrt(3)*MH* (lam*lam)* (vev*vev))/(4.*Pi*sqrt(-\
 
   (MH*MH*MH*MH)));
	 }
	 else{ return 0; }

}
double DT::wHChiChi(){
	 if(heaviDecays(MH,MChi,MChi)){
		 return 0.5*(sqrt(-4* (MChi*MChi)* (MH*MH) +  (MH*MH*MH*MH))* (vev*vev)*\
 
   ((lam12 + lam13 + (lam12 - lam13)*cos( 2*alpha) +\
 
   lam123*sin(2*alpha))*(lam12 + lam13 + (lam12 - lam13)*cos( 2*alpha) +\
 
   lam123*sin(2*alpha))))/(64.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHChiPsi(){
	 if(heaviDecays(MH,MChi,MPsi)){
		 return (sqrt((MChi + MH - MPsi)*(-MChi + MH + MPsi)*( (MH*MH) -  ((MChi +\
 
   MPsi)*(MChi + MPsi))))* ((lam123*vev*cos( 2*alpha) + (-lam12 +\
 
   lam13)*vev*sin(2*alpha))*(lam123*vev*cos( 2*alpha) + (-lam12 +\
 
   lam13)*vev*sin(2*alpha))))/(64.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHPsiPsi(){
	 if(heaviDecays(MH,MPsi,MPsi)){
		 return 0.5*(sqrt( (MH*MH*MH*MH) - 4* (MH*MH)* (MPsi*MPsi))* (vev*vev)*\
 
   ((lam12 + lam13 + (-lam12 + lam13)*cos( 2*alpha) -\
 
   lam123*sin(2*alpha))*(lam12 + lam13 + (-lam12 + lam13)*cos( 2*alpha) -\
 
   lam123*sin(2*alpha))))/(64.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHAA(){
	 if(heaviDecays(MH,0,0)){
		 return 0.5*(MH* (gc29*gc29)*sqrt( (MH*MH*MH*MH)))/(32.*Pi);
	 }
	 else{ return 0; }

}
double DT::wHZZ(){
	 if(heaviDecays(MH,MZ,MZ)){
		 return 0.5*( (gc132*gc132)*sqrt( (MH*MH*MH*MH) - 4* (MH*MH)* (MZ*MZ))*(\
 
   (MH*MH*MH*MH) - 4* (MH*MH)* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ)))/(64.*Pi*\
 
   (MH*MH*MH)* (MZ*MZ*MZ*MZ));
	 }
	 else{ return 0; }

}
double DT::wHwW(){
	 if(heaviDecays(MH,MW,MW)){
		 return ( (gc112*gc112)*sqrt( (MH*MH*MH*MH) - 4* (MH*MH)* (MW*MW))*(\
 
   (MH*MH*MH*MH) - 4* (MH*MH)* (MW*MW) + 12* (MW*MW*MW*MW)))/(64.*Pi*\
 
   (MH*MH*MH)* (MW*MW*MW*MW));
	 }
	 else{ return 0; }

}
double DT::wHGG(){
	 if(heaviDecays(MH,0,0)){
		 return 0.5*(MH* (gc30*gc30)*sqrt( (MH*MH*MH*MH)))/(4.*Pi);
	 }
	 else{ return 0; }

}
double DT::wHEe(){
	 if(heaviDecays(MH,Me,Me)){
		 return ( (gc80*gc80)*(-4* (Me*Me) +  (MH*MH))*sqrt(-4* (Me*Me)* (MH*MH) + \
 
   (MH*MH*MH*MH)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHMUmu(){
	 if(heaviDecays(MH,MMU,MMU)){
		 return ( (gc81*gc81)*( (MH*MH) - 4* (MMU*MMU))*sqrt( (MH*MH*MH*MH) - 4*\
 
   (MH*MH)* (MMU*MMU)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHTAta(){
	 if(heaviDecays(MH,MTA,MTA)){
		 return ( (gc82*gc82)*( (MH*MH) - 4* (MTA*MTA))*sqrt( (MH*MH*MH*MH) - 4*\
 
   (MH*MH)* (MTA*MTA)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHUu(){
	 if(heaviDecays(MH,MU,MU)){
		 return (3* (gc97*gc97)*( (MH*MH) - 4* (MU*MU))*sqrt( (MH*MH*MH*MH) - 4*\
 
   (MH*MH)* (MU*MU)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHCc(){
	 if(heaviDecays(MH,MC,MC)){
		 return (3* (gc95*gc95)*(-4* (MC*MC) +  (MH*MH))*sqrt(-4* (MC*MC)* (MH*MH)\
 
   +  (MH*MH*MH*MH)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHTt(){
	 if(heaviDecays(MH,MT,MT)){
		 return (3* (gc96*gc96)*( (MH*MH) - 4* (MT*MT))*sqrt( (MH*MH*MH*MH) - 4*\
 
   (MH*MH)* (MT*MT)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHDd(){
	 if(heaviDecays(MH,MD,MD)){
		 return (3* (gc72*gc72)*(-4* (MD*MD) +  (MH*MH))*sqrt(-4* (MD*MD)* (MH*MH)\
 
   +  (MH*MH*MH*MH)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHSs(){
	 if(heaviDecays(MH,MS,MS)){
		 return (3* (gc73*gc73)*( (MH*MH) - 4* (MS*MS))*sqrt( (MH*MH*MH*MH) - 4*\
 
   (MH*MH)* (MS*MS)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHBb(){
	 if(heaviDecays(MH,MB,MB)){
		 return (3* (gc71*gc71)*(-4* (MB*MB) +  (MH*MH))*sqrt(-4* (MB*MB)* (MH*MH)\
 
   +  (MH*MH*MH*MH)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wwH(){
	 return ( wHHH() + wHChiChi() + wHChiPsi() + wHPsiPsi() + wHAA() + wHZZ() +\
 
   wHwW() + wHGG() + wHEe() + wHMUmu() + wHTAta() + wHUu() + wHCc() + wHTt()\
 
   + wHDd() + wHSs() + wHBb() );
}
