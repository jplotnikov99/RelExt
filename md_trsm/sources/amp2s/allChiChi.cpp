///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::ChiChiHH(const double &cos_t, const double &s){
double t =  (MChi*MChi) + (-s + cos_t*sqrt(s - 4* (MChi*MChi))*sqrt(s - 4*\
 
      (MH*MH)))/2. +  (MH*MH);
double u = -s - t + MChi*MChi + MChi*MChi + MH*MH + MH*MH;
return  (lam12*lam12) + (2* (lam12*lam12*lam12)* (vev*vev))/(t - \
 
      (MChi*MChi)) + (2* (lam12*lam12*lam12)* (vev*vev))/(u -  (MChi*MChi)) +\
 
      (lam12* (lam123*lam123)* (vev*vev))/(2.*(t -  (MPsi*MPsi))) + (lam12*\
 
      (lam123*lam123)* (vev*vev))/(2.*(u -  (MPsi*MPsi))) + (2*\
 
      (lam12*lam12*lam12*lam12)* (vev*vev*vev*vev))/((-t +  (MChi*MChi))*(-u\
 
      +  (MChi*MChi))) + ( (lam12*lam12)* (lam123*lam123)*\
 
      (vev*vev*vev*vev))/(2.*(t -  (MChi*MChi))*(t -  (MPsi*MPsi))) + (\
 
      (lam12*lam12)* (lam123*lam123)* (vev*vev*vev*vev))/(2.*(u - \
 
      (MChi*MChi))*(u -  (MPsi*MPsi))) + ( (lam12*lam12)* (lam123*lam123)*\
 
      (vev*vev*vev*vev))/(2.*(-u +  (MChi*MChi))*(-t +  (MPsi*MPsi))) + (\
 
      (lam12*lam12)* (lam123*lam123)* (vev*vev*vev*vev))/(2.*(-t + \
 
      (MChi*MChi))*(-u +  (MPsi*MPsi))) + ( (lam123*lam123*lam123*lam123)*\
 
      (vev*vev*vev*vev))/(8.*(-t +  (MPsi*MPsi))*(-u +  (MPsi*MPsi))) + (\
 
      (lam12*lam12*lam12*lam12)* (vev*vev*vev*vev))/ (( (MChi*MChi) - t)*(\
 
      (MChi*MChi) - t)) + ( (lam123*lam123*lam123*lam123)*\
 
      (vev*vev*vev*vev))/(16.* (( (MPsi*MPsi) - t)*( (MPsi*MPsi) - t))) + (\
 
      (lam12*lam12*lam12*lam12)* (vev*vev*vev*vev))/ (( (MChi*MChi) - u)*(\
 
      (MChi*MChi) - u)) + ( (lam123*lam123*lam123*lam123)*\
 
      (vev*vev*vev*vev))/(16.* (( (MPsi*MPsi) - u)*( (MPsi*MPsi) - u))) +\
 
      (12*lam* (lam12*lam12)*(s -  (MH*MH))* (vev*vev))/( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) + (36* (lam*lam)* (lam12*lam12)*\
 
      (vev*vev*vev*vev))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s + \
 
      (WH*WH))) + (12*lam* (lam12*lam12*lam12)*(-s +  (MH*MH))*\
 
      (vev*vev*vev*vev))/((-t +  (MChi*MChi))*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))) + (12*lam* (lam12*lam12*lam12)*(-s + \
 
      (MH*MH))* (vev*vev*vev*vev))/((-u +  (MChi*MChi))*( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (3*lam*lam12*\
 
      (lam123*lam123)*(-s +  (MH*MH))* (vev*vev*vev*vev))/((-t + \
 
      (MPsi*MPsi))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) +\
 
      (3*lam*lam12* (lam123*lam123)*(-s +  (MH*MH))* (vev*vev*vev*vev))/((-u\
 
      +  (MPsi*MPsi))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiChiAA(const double &cos_t, const double &s){
return ( (gc29*gc29)* (lam12*lam12)* (s*s)* (vev*vev))/(2.*( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiChiZZ(const double &cos_t, const double &s){
return ( (gc132*gc132)* (lam12*lam12)*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) + \
 
      (s*s))* (vev*vev))/(4.* (MZ*MZ*MZ*MZ)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiChiwW(const double &cos_t, const double &s){
return ( (gc112*gc112)* (lam12*lam12)*(-4*s* (MW*MW) + 12* (MW*MW*MW*MW) + \
 
      (s*s))* (vev*vev))/(4.* (MW*MW*MW*MW)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiChiGG(const double &cos_t, const double &s){
return (4* (gc30*gc30)* (lam12*lam12)* (s*s)* (vev*vev))/( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiEe(const double &cos_t, const double &s){
return (2* (gc80*gc80)* (lam12*lam12)*(s - 4* (Me*Me))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiMUmu(const double &cos_t, const double &s){
return (2* (gc81*gc81)* (lam12*lam12)*(s - 4* (MMU*MMU))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiTAta(const double &cos_t, const double &s){
return (2* (gc82*gc82)* (lam12*lam12)*(s - 4* (MTA*MTA))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiUu(const double &cos_t, const double &s){
return (6* (gc97*gc97)* (lam12*lam12)*(s - 4* (MU*MU))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiCc(const double &cos_t, const double &s){
return (6* (gc95*gc95)* (lam12*lam12)*(s - 4* (MC*MC))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiTt(const double &cos_t, const double &s){
return (6* (gc96*gc96)* (lam12*lam12)*(s - 4* (MT*MT))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiDd(const double &cos_t, const double &s){
return (6* (gc72*gc72)* (lam12*lam12)*(s - 4* (MD*MD))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiSs(const double &cos_t, const double &s){
return (6* (gc73*gc73)* (lam12*lam12)*(s - 4* (MS*MS))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiBb(const double &cos_t, const double &s){
return (6* (gc71*gc71)* (lam12*lam12)*(s - 4* (MB*MB))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiChiChiPsi(const double &cos_t, const double &s){
double t = (-s + 3* (MChi*MChi) +  (MPsi*MPsi) + cos_t*sqrt(s - 4*\
 
      (MChi*MChi))*sqrt(( (MChi*MChi*MChi*MChi) - 2* (MChi*MChi)*(s + \
 
      (MPsi*MPsi)) +  (( (MPsi*MPsi) - s)*( (MPsi*MPsi) - s)))/s))/2.;
double u = -s - t + MChi*MChi + MChi*MChi + MChi*MChi + MPsi*MPsi;
return (9* (lam223*lam223))/4. + (3*lam12*lam123*lam223*(s -  (MH*MH))*\
 
      (vev*vev))/(2.*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))))\
 
      + ( (lam12*lam12)* (lam123*lam123)* (vev*vev*vev*vev))/(4.*(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) +\
 
      (3*lam12*lam123*lam223*(t -  (MH*MH))* (vev*vev))/(2.*( (MH*MH*MH*MH) +\
 
       (t*t) +  (MH*MH)*(-2*t +  (WH*WH)))) + ( (lam12*lam12)*\
 
      (lam123*lam123)* (vev*vev*vev*vev))/(4.*( (MH*MH*MH*MH) +  (t*t) + \
 
      (MH*MH)*(-2*t +  (WH*WH)))) + ( (lam12*lam12)* (lam123*lam123)*\
 
      (vev*vev*vev*vev)*(s*t +  (MH*MH*MH*MH) -  (MH*MH)*(s + t - \
 
      (WH*WH))))/(2.*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*(\
 
      (MH*MH*MH*MH) +  (t*t) +  (MH*MH)*(-2*t +  (WH*WH)))) +\
 
      (3*lam12*lam123*lam223*(u -  (MH*MH))* (vev*vev))/(2.*( (MH*MH*MH*MH) +\
 
       (u*u) +  (MH*MH)*(-2*u +  (WH*WH)))) + ( (lam12*lam12)*\
 
      (lam123*lam123)* (vev*vev*vev*vev))/(4.*( (MH*MH*MH*MH) +  (u*u) + \
 
      (MH*MH)*(-2*u +  (WH*WH)))) + ( (lam12*lam12)* (lam123*lam123)*\
 
      (vev*vev*vev*vev)*(s*u +  (MH*MH*MH*MH) -  (MH*MH)*(s + u - \
 
      (WH*WH))))/(2.*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*(\
 
      (MH*MH*MH*MH) +  (u*u) +  (MH*MH)*(-2*u +  (WH*WH)))) + (\
 
      (lam12*lam12)* (lam123*lam123)* (vev*vev*vev*vev)*(t*u +  (MH*MH*MH*MH)\
 
      -  (MH*MH)*(t + u -  (WH*WH))))/(2.*( (MH*MH*MH*MH) +  (t*t) + \
 
      (MH*MH)*(-2*t +  (WH*WH)))*( (MH*MH*MH*MH) +  (u*u) +  (MH*MH)*(-2*u + \
 
      (WH*WH))));
}
double DT::ChiChiPsiPsi(const double &cos_t, const double &s){
double t =  (MChi*MChi) + (-s + cos_t*sqrt(s - 4* (MChi*MChi))*sqrt(s - 4*\
 
      (MPsi*MPsi)))/2. +  (MPsi*MPsi);
double u = -s - t + MChi*MChi + MChi*MChi + MPsi*MPsi + MPsi*MPsi;
return  (lam23*lam23) + (2*lam12*lam13*lam23*(s -  (MH*MH))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) + ( (lam12*lam12)*\
 
      (lam13*lam13)* (vev*vev*vev*vev))/( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH))) + (lam23* (lam123*lam123)*(t -  (MH*MH))*\
 
      (vev*vev))/(2.*( (MH*MH*MH*MH) +  (t*t) +  (MH*MH)*(-2*t +  (WH*WH))))\
 
      + ( (lam123*lam123*lam123*lam123)* (vev*vev*vev*vev))/(16.*(\
 
      (MH*MH*MH*MH) +  (t*t) +  (MH*MH)*(-2*t +  (WH*WH)))) + (lam12*lam13*\
 
      (lam123*lam123)* (vev*vev*vev*vev)*(s*t +  (MH*MH*MH*MH) -  (MH*MH)*(s\
 
      + t -  (WH*WH))))/(2.*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s + \
 
      (WH*WH)))*( (MH*MH*MH*MH) +  (t*t) +  (MH*MH)*(-2*t +  (WH*WH)))) +\
 
      (lam23* (lam123*lam123)*(u -  (MH*MH))* (vev*vev))/(2.*( (MH*MH*MH*MH)\
 
      +  (u*u) +  (MH*MH)*(-2*u +  (WH*WH)))) + (\
 
      (lam123*lam123*lam123*lam123)* (vev*vev*vev*vev))/(16.*( (MH*MH*MH*MH)\
 
      +  (u*u) +  (MH*MH)*(-2*u +  (WH*WH)))) + (lam12*lam13*\
 
      (lam123*lam123)* (vev*vev*vev*vev)*(s*u +  (MH*MH*MH*MH) -  (MH*MH)*(s\
 
      + u -  (WH*WH))))/(2.*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s + \
 
      (WH*WH)))*( (MH*MH*MH*MH) +  (u*u) +  (MH*MH)*(-2*u +  (WH*WH)))) + (\
 
      (lam123*lam123*lam123*lam123)* (vev*vev*vev*vev)*(t*u +  (MH*MH*MH*MH)\
 
      -  (MH*MH)*(t + u -  (WH*WH))))/(8.*( (MH*MH*MH*MH) +  (t*t) + \
 
      (MH*MH)*(-2*t +  (WH*WH)))*( (MH*MH*MH*MH) +  (u*u) +  (MH*MH)*(-2*u + \
 
      (WH*WH))));
}
