///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"

double DT::ChiChiPsiPsi(double cos_t, double s){
return  ((3*lam2 + lam23 + 3*lam3 - 3*(lam2 - lam23 + lam3))*(3*lam2 + lam23\
 
      + 3*lam3 - 3*(lam2 - lam23 + lam3)))/16. + (lam12*lam13*(-3*lam2 -\
 
      lam23 - 3*lam3 + 3*(lam2 - lam23 + lam3))*(-s +  (MH*MH))*\
 
      (vev*vev))/(2.*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))))\
 
      + ( (lam12*lam12)* (lam13*lam13)* (vev*vev*vev*vev))/( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiHH(double cos_t, double s){
double t =  (MChi*MChi) + (-s + cos_t*sqrt(s - 4* (MChi*MChi))*sqrt(s - 4*\
 
      (MH*MH)))/2. +  (MH*MH);
double u = -s - t + MChi*MChi + MChi*MChi + MH*MH + MH*MH;
return  (lam12*lam12) - (2* (lam12*lam12*lam12)* (vev*vev))/(-t + \
 
      (MChi*MChi)) - (2* (lam12*lam12*lam12)* (vev*vev))/(-u +  (MChi*MChi))\
 
      + (2* (lam12*lam12*lam12*lam12)* (vev*vev*vev*vev))/((-t + \
 
      (MChi*MChi))*(-u +  (MChi*MChi))) + ( (lam12*lam12*lam12*lam12)*\
 
      (vev*vev*vev*vev))/ (( (MChi*MChi) - t)*( (MChi*MChi) - t)) + (\
 
      (lam12*lam12*lam12*lam12)* (vev*vev*vev*vev))/ (( (MChi*MChi) - u)*(\
 
      (MChi*MChi) - u)) - (12*lam* (lam12*lam12)*(-s +  (MH*MH))*\
 
      (vev*vev))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) +\
 
      (36* (lam*lam)* (lam12*lam12)* (vev*vev*vev*vev))/( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) + (12*lam* (lam12*lam12*lam12)*(-s\
 
      +  (MH*MH))* (vev*vev*vev*vev))/((-t +  (MChi*MChi))*( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (12*lam* (lam12*lam12*lam12)*(-s\
 
      +  (MH*MH))* (vev*vev*vev*vev))/((-u +  (MChi*MChi))*( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiChiAA(double cos_t, double s){
return ( (gc29*gc29)* (lam12*lam12)* (s*s)* (vev*vev))/(2.*( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiChiZZ(double cos_t, double s){
return ( (gc132*gc132)* (lam12*lam12)*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) + \
 
      (s*s))* (vev*vev))/(4.* (MZ*MZ*MZ*MZ)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiChiwW(double cos_t, double s){
return ( (gc112*gc112)* (lam12*lam12)*(-4*s* (MW*MW) + 12* (MW*MW*MW*MW) + \
 
      (s*s))* (vev*vev))/(4.* (MW*MW*MW*MW)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiChiGG(double cos_t, double s){
return (4* (gc30*gc30)* (lam12*lam12)* (s*s)* (vev*vev))/( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiEe(double cos_t, double s){
return (-2* (gc80*gc80)* (lam12*lam12)*(-s + 4* (Me*Me))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiMUmu(double cos_t, double s){
return (-2* (gc81*gc81)* (lam12*lam12)*(-s + 4* (MMU*MMU))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiTAta(double cos_t, double s){
return (-2* (gc82*gc82)* (lam12*lam12)*(-s + 4* (MTA*MTA))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiUu(double cos_t, double s){
return (6* (gc97*gc97)* (lam12*lam12)*(s - 4* (MU*MU))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiCc(double cos_t, double s){
return (6* (gc95*gc95)* (lam12*lam12)*(s - 4* (MC*MC))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiTt(double cos_t, double s){
return (6* (gc96*gc96)* (lam12*lam12)*(s - 4* (MT*MT))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiDd(double cos_t, double s){
return (6* (gc72*gc72)* (lam12*lam12)*(s - 4* (MD*MD))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiSs(double cos_t, double s){
return (6* (gc73*gc73)* (lam12*lam12)*(s - 4* (MS*MS))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiBb(double cos_t, double s){
return (6* (gc71*gc71)* (lam12*lam12)*(s - 4* (MB*MB))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
