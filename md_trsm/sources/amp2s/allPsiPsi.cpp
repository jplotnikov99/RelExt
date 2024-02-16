///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::PsiPsiHH(const double &cos_t, const double &s){
double t =  (MH*MH) + (-s + cos_t*sqrt(s - 4* (MH*MH))*sqrt(s - 4*\
 
      (MPsi*MPsi)))/2. +  (MPsi*MPsi);
double u = -s - t + MPsi*MPsi + MPsi*MPsi + MH*MH + MH*MH;
return  (lam13*lam13) + (lam13* (lam123*lam123)* (vev*vev))/(2.*(t - \
 
      (MChi*MChi))) + (lam13* (lam123*lam123)* (vev*vev))/(2.*(u - \
 
      (MChi*MChi))) + (2* (lam13*lam13*lam13)* (vev*vev))/(t -  (MPsi*MPsi))\
 
      + (2* (lam13*lam13*lam13)* (vev*vev))/(u -  (MPsi*MPsi)) + (\
 
      (lam123*lam123*lam123*lam123)* (vev*vev*vev*vev))/(8.*(-t + \
 
      (MChi*MChi))*(-u +  (MChi*MChi))) + ( (lam123*lam123)* (lam13*lam13)*\
 
      (vev*vev*vev*vev))/(2.*(t -  (MChi*MChi))*(t -  (MPsi*MPsi))) + (\
 
      (lam123*lam123)* (lam13*lam13)* (vev*vev*vev*vev))/(2.*(u - \
 
      (MChi*MChi))*(u -  (MPsi*MPsi))) + ( (lam123*lam123)* (lam13*lam13)*\
 
      (vev*vev*vev*vev))/(2.*(-u +  (MChi*MChi))*(-t +  (MPsi*MPsi))) + (\
 
      (lam123*lam123)* (lam13*lam13)* (vev*vev*vev*vev))/(2.*(-t + \
 
      (MChi*MChi))*(-u +  (MPsi*MPsi))) + (2* (lam13*lam13*lam13*lam13)*\
 
      (vev*vev*vev*vev))/((-t +  (MPsi*MPsi))*(-u +  (MPsi*MPsi))) + (\
 
      (lam123*lam123*lam123*lam123)* (vev*vev*vev*vev))/(16.* (( (MChi*MChi)\
 
      - t)*( (MChi*MChi) - t))) + ( (lam13*lam13*lam13*lam13)*\
 
      (vev*vev*vev*vev))/ (( (MPsi*MPsi) - t)*( (MPsi*MPsi) - t)) + (\
 
      (lam123*lam123*lam123*lam123)* (vev*vev*vev*vev))/(16.* (( (MChi*MChi)\
 
      - u)*( (MChi*MChi) - u))) + ( (lam13*lam13*lam13*lam13)*\
 
      (vev*vev*vev*vev))/ (( (MPsi*MPsi) - u)*( (MPsi*MPsi) - u)) + (12*lam*\
 
      (lam13*lam13)*(s -  (MH*MH))* (vev*vev))/( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH))) + (36* (lam*lam)* (lam13*lam13)*\
 
      (vev*vev*vev*vev))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s + \
 
      (WH*WH))) + (3*lam*lam13* (lam123*lam123)*(-s +  (MH*MH))*\
 
      (vev*vev*vev*vev))/((-t +  (MChi*MChi))*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))) + (3*lam*lam13* (lam123*lam123)*(-s + \
 
      (MH*MH))* (vev*vev*vev*vev))/((-u +  (MChi*MChi))*( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (12*lam* (lam13*lam13*lam13)*(-s\
 
      +  (MH*MH))* (vev*vev*vev*vev))/((-t +  (MPsi*MPsi))*( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (12*lam* (lam13*lam13*lam13)*(-s\
 
      +  (MH*MH))* (vev*vev*vev*vev))/((-u +  (MPsi*MPsi))*( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::PsiPsiAA(const double &cos_t, const double &s){
return ( (gc29*gc29)* (lam13*lam13)* (s*s)* (vev*vev))/(2.*( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::PsiPsiZZ(const double &cos_t, const double &s){
return ( (gc132*gc132)* (lam13*lam13)*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) + \
 
      (s*s))* (vev*vev))/(4.* (MZ*MZ*MZ*MZ)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::PsiPsiwW(const double &cos_t, const double &s){
return ( (gc112*gc112)* (lam13*lam13)*(-4*s* (MW*MW) + 12* (MW*MW*MW*MW) + \
 
      (s*s))* (vev*vev))/(4.* (MW*MW*MW*MW)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::PsiPsiGG(const double &cos_t, const double &s){
return (4* (gc30*gc30)* (lam13*lam13)* (s*s)* (vev*vev))/( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiEe(const double &cos_t, const double &s){
return (2* (gc80*gc80)* (lam13*lam13)*(s - 4* (Me*Me))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiMUmu(const double &cos_t, const double &s){
return (2* (gc81*gc81)* (lam13*lam13)*(s - 4* (MMU*MMU))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiTAta(const double &cos_t, const double &s){
return (2* (gc82*gc82)* (lam13*lam13)*(s - 4* (MTA*MTA))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiUu(const double &cos_t, const double &s){
return (6* (gc97*gc97)* (lam13*lam13)*(s - 4* (MU*MU))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiCc(const double &cos_t, const double &s){
return (6* (gc95*gc95)* (lam13*lam13)*(s - 4* (MC*MC))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiTt(const double &cos_t, const double &s){
return (6* (gc96*gc96)* (lam13*lam13)*(s - 4* (MT*MT))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiDd(const double &cos_t, const double &s){
return (6* (gc72*gc72)* (lam13*lam13)*(s - 4* (MD*MD))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiSs(const double &cos_t, const double &s){
return (6* (gc73*gc73)* (lam13*lam13)*(s - 4* (MS*MS))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiBb(const double &cos_t, const double &s){
return (6* (gc71*gc71)* (lam13*lam13)*(s - 4* (MB*MB))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
