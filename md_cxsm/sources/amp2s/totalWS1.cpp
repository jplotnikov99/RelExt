///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"
#include "mass_run.hpp"

double DT::wS1HH(){
	 if(heaviDecays(MS1,MH,MH)){
		 return 0.5*(sqrt(-4* (MH*MH)* (MS1*MS1) +  (MS1*MS1*MS1*MS1))* (cos(\
 
      alpha)*cos( alpha))* ((2* (MH*MH) +  (MS1*MS1))*(2* (MH*MH) + \
 
      (MS1*MS1)))* (sin(alpha)*sin(alpha))* ((svev*cos( alpha) -\
 
      vev*sin(alpha))*(svev*cos( alpha) - vev*sin(alpha))))/(16.*Pi*\
 
      (MS1*MS1*MS1)* (svev*svev)* (vev*vev));
	 }
	 else{ return 0; }

}
double DT::wS1HS1(){
	 if(heaviDecays(MS1,MH,MS1)){
		 return (sqrt( (MH*MH*MH*MH) - 4* (MH*MH)* (MS1*MS1))* (cos( alpha)*cos(\
 
      alpha))* (( (MH*MH) + 2* (MS1*MS1))*( (MH*MH) + 2* (MS1*MS1)))*\
 
      (sin(alpha)*sin(alpha))* ((vev*cos( alpha) + svev*sin(alpha))*(vev*cos(\
 
      alpha) + svev*sin(alpha))))/(16.*Pi* (MS1*MS1*MS1)* (svev*svev)*\
 
      (vev*vev));
	 }
	 else{ return 0; }

}
double DT::wS1S1S1(){
	 if(heaviDecays(MS1,MS1,MS1)){
		 return 0.5*(9*sqrt(3)*MS1*sqrt(- (MS1*MS1*MS1*MS1))* ((vev* (cos(\
 
      alpha)*cos( alpha)*cos( alpha)) - svev*\
 
      (sin(alpha)*sin(alpha)*sin(alpha)))*(vev* (cos( alpha)*cos( alpha)*cos(\
 
      alpha)) - svev* (sin(alpha)*sin(alpha)*sin(alpha)))))/(16.*Pi*\
 
      (svev*svev)* (vev*vev));
	 }
	 else{ return 0; }

}
double DT::wS1A1A1(){
	 if(heaviDecays(MS1,MA1,MA1)){
		 return 0.5*(MS1*sqrt(-4* (MA1*MA1)* (MS1*MS1) +  (MS1*MS1*MS1*MS1))* (cos(\
 
      alpha)*cos( alpha)))/(16.*Pi* (svev*svev));
	 }
	 else{ return 0; }

}
double DT::wS1ZZ(){
	 if(heaviDecays(MS1,MZ,MZ)){
		 return 0.5*( (EL*EL*EL*EL)*sqrt( (MS1*MS1*MS1*MS1) - 4* (MS1*MS1)*\
 
      (MZ*MZ))*( (MS1*MS1*MS1*MS1) - 4* (MS1*MS1)* (MZ*MZ) + 12*\
 
      (MZ*MZ*MZ*MZ))* (vev*vev)* (( (cw*cw) +  (sw*sw))*( (cw*cw) + \
 
      (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw)))*\
 
      (sin(alpha)*sin(alpha)))/(256.*Pi* (cw*cw*cw*cw)* (MS1*MS1*MS1)*\
 
      (MZ*MZ*MZ*MZ)* (sw*sw*sw*sw));
	 }
	 else{ return 0; }

}
double DT::wS1wW(){
	 if(heaviDecays(MS1,MW,MW)){
		 return ( (EL*EL*EL*EL)*sqrt( (MS1*MS1*MS1*MS1) - 4* (MS1*MS1)* (MW*MW))*(\
 
      (MS1*MS1*MS1*MS1) - 4* (MS1*MS1)* (MW*MW) + 12* (MW*MW*MW*MW))*\
 
      (vev*vev)* (sin(alpha)*sin(alpha)))/(256.*Pi* (MS1*MS1*MS1)*\
 
      (MW*MW*MW*MW)* (sw*sw*sw*sw));
	 }
	 else{ return 0; }

}
double DT::wS1Ee(){
	 if(heaviDecays(MS1,Me,Me)){
		 return ( (gc98*gc98)*(-4* (Me*Me) +  (MS1*MS1))*sqrt(-4* (Me*Me)*\
 
      (MS1*MS1) +  (MS1*MS1*MS1*MS1)))/(8.*Pi* (MS1*MS1*MS1));
	 }
	 else{ return 0; }

}
double DT::wS1MUmu(){
	 if(heaviDecays(MS1,MMU,MMU)){
		 return ( (gc99*gc99)*(-4* (MMU*MMU) +  (MS1*MS1))*sqrt(-4* (MMU*MMU)*\
 
      (MS1*MS1) +  (MS1*MS1*MS1*MS1)))/(8.*Pi* (MS1*MS1*MS1));
	 }
	 else{ return 0; }

}
double DT::wS1TAta(){
	 if(heaviDecays(MS1,MTA,MTA)){
		 return ( (gc100*gc100)*( (MS1*MS1) - 4* (MTA*MTA))*sqrt( (MS1*MS1*MS1*MS1)\
 
      - 4* (MS1*MS1)* (MTA*MTA)))/(8.*Pi* (MS1*MS1*MS1));
	 }
	 else{ return 0; }

}
double DT::wS1Uu(){
	 if(heaviDecays(MS1,MU,MU)){
		 return (3* (gc103*gc103)*( (MS1*MS1) - 4* (MU*MU))*sqrt( (MS1*MS1*MS1*MS1)\
 
      - 4* (MS1*MS1)* (MU*MU)))/(8.*Pi* (MS1*MS1*MS1));
	 }
	 else{ return 0; }

}
double DT::wS1Cc(){
	 if(heaviDecays(MS1,MC,MC)){
		 return (3* (gc101*gc101)*(-4* (MC*MC) +  (MS1*MS1))*sqrt(-4* (MC*MC)*\
 
      (MS1*MS1) +  (MS1*MS1*MS1*MS1)))/(8.*Pi* (MS1*MS1*MS1));
	 }
	 else{ return 0; }

}
double DT::wS1Tt(){
	 if(heaviDecays(MS1,MT,MT)){
		 return (3* (gc102*gc102)*( (MS1*MS1) - 4* (MT*MT))*sqrt( (MS1*MS1*MS1*MS1)\
 
      - 4* (MS1*MS1)* (MT*MT)))/(8.*Pi* (MS1*MS1*MS1));
	 }
	 else{ return 0; }

}
double DT::wS1Dd(){
	 if(heaviDecays(MS1,MD,MD)){
		 return (3* (gc96*gc96)*(-4* (MD*MD) +  (MS1*MS1))*sqrt(-4* (MD*MD)*\
 
      (MS1*MS1) +  (MS1*MS1*MS1*MS1)))/(8.*Pi* (MS1*MS1*MS1));
	 }
	 else{ return 0; }

}
double DT::wS1Ss(){
	 if(heaviDecays(MS1,MS,MS)){
		 return (3* (gc97*gc97)*(-4* (MS*MS) +  (MS1*MS1))*sqrt(-4* (MS*MS)*\
 
      (MS1*MS1) +  (MS1*MS1*MS1*MS1)))/(8.*Pi* (MS1*MS1*MS1));
	 }
	 else{ return 0; }

}
double DT::wS1Bb(){
	 if(heaviDecays(MS1,MB,MB)){
		 return (3* (gc95*gc95)*(-4* (MB*MB) +  (MS1*MS1))*sqrt(-4* (MB*MB)*\
 
      (MS1*MS1) +  (MS1*MS1*MS1*MS1)))/(8.*Pi* (MS1*MS1*MS1));
	 }
	 else{ return 0; }

}
double DT::wwS1(){
	 Mrun running;
	 double Q = MS1;
	 MS = running.RunM(Q, 3, running.N0);
	 MC = running.RunM(Q, 4, running.N0);
	 MB = running.RunM(Q, 5, running.N0);
	 MT = running.RunM(Q, 6, running.N0);
	 aS = running.alphaS(Q, running.NalphaS);
	 FAGS = sqrt(4*M_PI*aS); gs = FAGS; G = FAGS;
	 yms = MS;
	 ymc = MC;
	 ymb = MB;
	 ymt = MT;
	 return ( wS1HH() + wS1HS1() + wS1S1S1() + wS1A1A1() + wS1ZZ() + wS1wW() +\
 
      wS1Ee() + wS1MUmu() + wS1TAta() + wS1Uu() + wS1Cc() + wS1Tt() + wS1Dd()\
 
      + wS1Ss() + wS1Bb() );
}
