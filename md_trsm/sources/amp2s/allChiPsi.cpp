///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::ChiPsiHH(const double &cos_t, const double &s){
double t = (-s +  (MChi*MChi) + 2* (MH*MH) +  (MPsi*MPsi) + cos_t*sqrt(s - 4*\
 
      (MH*MH))*sqrt(( (MChi*MChi*MChi*MChi) - 2* (MChi*MChi)*(s + \
 
      (MPsi*MPsi)) +  (( (MPsi*MPsi) - s)*( (MPsi*MPsi) - s)))/s))/2.;
double u = -s - t + MChi*MChi + MPsi*MPsi + MH*MH + MH*MH;
return  (lam123*lam123)/4. + (lam12* (lam123*lam123)* (vev*vev))/(2.*(t - \
 
      (MChi*MChi))) + (lam12* (lam123*lam123)* (vev*vev))/(2.*(u - \
 
      (MChi*MChi))) + (lam13* (lam123*lam123)* (vev*vev))/(2.*(t - \
 
      (MPsi*MPsi))) + (lam13* (lam123*lam123)* (vev*vev))/(2.*(u - \
 
      (MPsi*MPsi))) + ( (lam12*lam12)* (lam123*lam123)*\
 
      (vev*vev*vev*vev))/(2.*(-t +  (MChi*MChi))*(-u +  (MChi*MChi))) +\
 
      (lam12*lam13* (lam123*lam123)* (vev*vev*vev*vev))/(2.*(t - \
 
      (MChi*MChi))*(t -  (MPsi*MPsi))) + (lam12*lam13* (lam123*lam123)*\
 
      (vev*vev*vev*vev))/(2.*(u -  (MChi*MChi))*(u -  (MPsi*MPsi))) +\
 
      (lam12*lam13* (lam123*lam123)* (vev*vev*vev*vev))/(2.*(-u + \
 
      (MChi*MChi))*(-t +  (MPsi*MPsi))) + (lam12*lam13* (lam123*lam123)*\
 
      (vev*vev*vev*vev))/(2.*(-t +  (MChi*MChi))*(-u +  (MPsi*MPsi))) + (\
 
      (lam123*lam123)* (lam13*lam13)* (vev*vev*vev*vev))/(2.*(-t + \
 
      (MPsi*MPsi))*(-u +  (MPsi*MPsi))) + ( (lam12*lam12)* (lam123*lam123)*\
 
      (vev*vev*vev*vev))/(4.* (( (MChi*MChi) - t)*( (MChi*MChi) - t))) + (\
 
      (lam123*lam123)* (lam13*lam13)* (vev*vev*vev*vev))/(4.* (( (MPsi*MPsi)\
 
      - t)*( (MPsi*MPsi) - t))) + ( (lam12*lam12)* (lam123*lam123)*\
 
      (vev*vev*vev*vev))/(4.* (( (MChi*MChi) - u)*( (MChi*MChi) - u))) + (\
 
      (lam123*lam123)* (lam13*lam13)* (vev*vev*vev*vev))/(4.* (( (MPsi*MPsi)\
 
      - u)*( (MPsi*MPsi) - u))) + (3*lam* (lam123*lam123)*(s -  (MH*MH))*\
 
      (vev*vev))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) + (9*\
 
      (lam*lam)* (lam123*lam123)* (vev*vev*vev*vev))/( (MH*MH*MH*MH) +  (s*s)\
 
      +  (MH*MH)*(-2*s +  (WH*WH))) + (3*lam*lam12* (lam123*lam123)*(-s + \
 
      (MH*MH))* (vev*vev*vev*vev))/((-t +  (MChi*MChi))*( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (3*lam*lam12*\
 
      (lam123*lam123)*(-s +  (MH*MH))* (vev*vev*vev*vev))/((-u + \
 
      (MChi*MChi))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) +\
 
      (3*lam*lam13* (lam123*lam123)*(-s +  (MH*MH))* (vev*vev*vev*vev))/((-t\
 
      +  (MPsi*MPsi))*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))))\
 
      + (3*lam*lam13* (lam123*lam123)*(-s +  (MH*MH))*\
 
      (vev*vev*vev*vev))/((-u +  (MPsi*MPsi))*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiPsiAA(const double &cos_t, const double &s){
return ( (gc29*gc29)* (lam123*lam123)* (s*s)* (vev*vev))/(8.*( (MH*MH*MH*MH)\
 
      +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiPsiZZ(const double &cos_t, const double &s){
return ( (gc132*gc132)* (lam123*lam123)*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) + \
 
      (s*s))* (vev*vev))/(16.* (MZ*MZ*MZ*MZ)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiPsiwW(const double &cos_t, const double &s){
return ( (gc112*gc112)* (lam123*lam123)*(-4*s* (MW*MW) + 12* (MW*MW*MW*MW) + \
 
      (s*s))* (vev*vev))/(16.* (MW*MW*MW*MW)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiPsiGG(const double &cos_t, const double &s){
return ( (gc30*gc30)* (lam123*lam123)* (s*s)* (vev*vev))/( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiPsiEe(const double &cos_t, const double &s){
return -0.5*( (gc80*gc80)* (lam123*lam123)*(-s + 4* (Me*Me))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiPsiMUmu(const double &cos_t, const double &s){
return -0.5*( (gc81*gc81)* (lam123*lam123)*(-s + 4* (MMU*MMU))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiPsiTAta(const double &cos_t, const double &s){
return -0.5*( (gc82*gc82)* (lam123*lam123)*(-s + 4* (MTA*MTA))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::ChiPsiUu(const double &cos_t, const double &s){
return (3* (gc97*gc97)* (lam123*lam123)*(s - 4* (MU*MU))* (vev*vev))/(2.*(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiPsiCc(const double &cos_t, const double &s){
return (3* (gc95*gc95)* (lam123*lam123)*(s - 4* (MC*MC))* (vev*vev))/(2.*(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiPsiTt(const double &cos_t, const double &s){
return (3* (gc96*gc96)* (lam123*lam123)*(s - 4* (MT*MT))* (vev*vev))/(2.*(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiPsiDd(const double &cos_t, const double &s){
return (3* (gc72*gc72)* (lam123*lam123)*(s - 4* (MD*MD))* (vev*vev))/(2.*(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiPsiSs(const double &cos_t, const double &s){
return (3* (gc73*gc73)* (lam123*lam123)*(s - 4* (MS*MS))* (vev*vev))/(2.*(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::ChiPsiBb(const double &cos_t, const double &s){
return (3* (gc71*gc71)* (lam123*lam123)*(s - 4* (MB*MB))* (vev*vev))/(2.*(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
