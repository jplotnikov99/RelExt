///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::wHHH(){
	 if(heaviDecays(MH,MH,MH)){
		 return 0.5*(9*sqrt(3)*MH*sqrt(- (MH*MH*MH*MH))* ((svev* (cos( alpha)*cos(\
 
      alpha)*cos( alpha)) + vev* (sin(alpha)*sin(alpha)*sin(alpha)))*(svev*\
 
      (cos( alpha)*cos( alpha)*cos( alpha)) + vev*\
 
      (sin(alpha)*sin(alpha)*sin(alpha)))))/(16.*Pi* (svev*svev)* (vev*vev));
	 }
	 else{ return 0; }

}
double DT::wHHS1(){
	 if(heaviDecays(MH,MH,MS1)){
		 return (sqrt(-4* (MH*MH)* (MS1*MS1) +  (MS1*MS1*MS1*MS1))* (cos(\
 
      alpha)*cos( alpha))* ((2* (MH*MH) +  (MS1*MS1))*(2* (MH*MH) + \
 
      (MS1*MS1)))* (sin(alpha)*sin(alpha))* ((svev*cos( alpha) -\
 
      vev*sin(alpha))*(svev*cos( alpha) - vev*sin(alpha))))/(16.*Pi*\
 
      (MH*MH*MH)* (svev*svev)* (vev*vev));
	 }
	 else{ return 0; }

}
double DT::wHS1S1(){
	 if(heaviDecays(MH,MS1,MS1)){
		 return 0.5*(sqrt( (MH*MH*MH*MH) - 4* (MH*MH)* (MS1*MS1))* (cos(\
 
      alpha)*cos( alpha))* (( (MH*MH) + 2* (MS1*MS1))*( (MH*MH) + 2*\
 
      (MS1*MS1)))* (sin(alpha)*sin(alpha))* ((vev*cos( alpha) +\
 
      svev*sin(alpha))*(vev*cos( alpha) + svev*sin(alpha))))/(16.*Pi*\
 
      (MH*MH*MH)* (svev*svev)* (vev*vev));
	 }
	 else{ return 0; }

}
double DT::wHA1A1(){
	 if(heaviDecays(MH,MA1,MA1)){
		 return 0.5*(MH*sqrt(-4* (MA1*MA1)* (MH*MH) +  (MH*MH*MH*MH))*\
 
      (sin(alpha)*sin(alpha)))/(16.*Pi* (svev*svev));
	 }
	 else{ return 0; }

}
double DT::wHZZ(){
	 if(heaviDecays(MH,MZ,MZ)){
		 return 0.5*( (EL*EL*EL*EL)*sqrt( (MH*MH*MH*MH) - 4* (MH*MH)* (MZ*MZ))*(\
 
      (MH*MH*MH*MH) - 4* (MH*MH)* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ))* (vev*vev)*\
 
      (cos( alpha)*cos( alpha))* (( (cw*cw) +  (sw*sw))*( (cw*cw) + \
 
      (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))))/(256.*Pi*\
 
      (cw*cw*cw*cw)* (MH*MH*MH)* (MZ*MZ*MZ*MZ)* (sw*sw*sw*sw));
	 }
	 else{ return 0; }

}
double DT::wHwW(){
	 if(heaviDecays(MH,MW,MW)){
		 return ( (EL*EL*EL*EL)*sqrt( (MH*MH*MH*MH) - 4* (MH*MH)* (MW*MW))*(\
 
      (MH*MH*MH*MH) - 4* (MH*MH)* (MW*MW) + 12* (MW*MW*MW*MW))* (vev*vev)*\
 
      (cos( alpha)*cos( alpha)))/(256.*Pi* (MH*MH*MH)* (MW*MW*MW*MW)*\
 
      (sw*sw*sw*sw));
	 }
	 else{ return 0; }

}
double DT::wHEe(){
	 if(heaviDecays(MH,Me,Me)){
		 return ( (gc64*gc64)*(-4* (Me*Me) +  (MH*MH))*sqrt(-4* (Me*Me)* (MH*MH) + \
 
      (MH*MH*MH*MH)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHMUmu(){
	 if(heaviDecays(MH,MMU,MMU)){
		 return ( (gc65*gc65)*( (MH*MH) - 4* (MMU*MMU))*sqrt( (MH*MH*MH*MH) - 4*\
 
      (MH*MH)* (MMU*MMU)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHTAta(){
	 if(heaviDecays(MH,MTA,MTA)){
		 return ( (gc66*gc66)*( (MH*MH) - 4* (MTA*MTA))*sqrt( (MH*MH*MH*MH) - 4*\
 
      (MH*MH)* (MTA*MTA)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHUu(){
	 if(heaviDecays(MH,MU,MU)){
		 return (3* (gc81*gc81)*( (MH*MH) - 4* (MU*MU))*sqrt( (MH*MH*MH*MH) - 4*\
 
      (MH*MH)* (MU*MU)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHCc(){
	 if(heaviDecays(MH,MC,MC)){
		 return (3* (gc79*gc79)*(-4* (MC*MC) +  (MH*MH))*sqrt(-4* (MC*MC)* (MH*MH)\
 
      +  (MH*MH*MH*MH)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHTt(){
	 if(heaviDecays(MH,MT,MT)){
		 return (3* (gc80*gc80)*( (MH*MH) - 4* (MT*MT))*sqrt( (MH*MH*MH*MH) - 4*\
 
      (MH*MH)* (MT*MT)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHDd(){
	 if(heaviDecays(MH,MD,MD)){
		 return (3* (gc56*gc56)*(-4* (MD*MD) +  (MH*MH))*sqrt(-4* (MD*MD)* (MH*MH)\
 
      +  (MH*MH*MH*MH)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHSs(){
	 if(heaviDecays(MH,MS,MS)){
		 return (3* (gc57*gc57)*( (MH*MH) - 4* (MS*MS))*sqrt( (MH*MH*MH*MH) - 4*\
 
      (MH*MH)* (MS*MS)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wHBb(){
	 if(heaviDecays(MH,MB,MB)){
		 return (3* (gc55*gc55)*(-4* (MB*MB) +  (MH*MH))*sqrt(-4* (MB*MB)* (MH*MH)\
 
      +  (MH*MH*MH*MH)))/(8.*Pi* (MH*MH*MH));
	 }
	 else{ return 0; }

}
double DT::wwH(){
	 return ( wHHH() + wHHS1() + wHS1S1() + wHA1A1() + wHZZ() + wHwW() + wHEe()\
 
      + wHMUmu() + wHTAta() + wHUu() + wHCc() + wHTt() + wHDd() + wHSs() +\
 
      wHBb() );
}
