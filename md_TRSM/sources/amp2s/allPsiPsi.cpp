///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"

double DT::PsiPsiHH(double cos_t, double s){
double t =  (MH*MH) + (-s + cos_t*sqrt(s - 4* (MH*MH))*sqrt(s - 4*\
 
      (MPsi*MPsi)))/2. +  (MPsi*MPsi);
double u = -s - t + MPsi*MPsi + MPsi*MPsi + MH*MH + MH*MH;
return  (lam13*lam13) - (2* (lam13*lam13*lam13)* (vev*vev))/(-t + \
 
      (MPsi*MPsi)) - (2* (lam13*lam13*lam13)* (vev*vev))/(-u +  (MPsi*MPsi))\
 
      + (2* (lam13*lam13*lam13*lam13)* (vev*vev*vev*vev))/((-t + \
 
      (MPsi*MPsi))*(-u +  (MPsi*MPsi))) + ( (lam13*lam13*lam13*lam13)*\
 
      (vev*vev*vev*vev))/ (( (MPsi*MPsi) - t)*( (MPsi*MPsi) - t)) + (\
 
      (lam13*lam13*lam13*lam13)* (vev*vev*vev*vev))/ (( (MPsi*MPsi) - u)*(\
 
      (MPsi*MPsi) - u)) - (12*lam* (lam13*lam13)*(-s +  (MH*MH))*\
 
      (vev*vev))/( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) +\
 
      (36* (lam*lam)* (lam13*lam13)* (vev*vev*vev*vev))/( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH))) + (12*lam* (lam13*lam13*lam13)*(-s\
 
      +  (MH*MH))* (vev*vev*vev*vev))/((-t +  (MPsi*MPsi))*( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (12*lam* (lam13*lam13*lam13)*(-s\
 
      +  (MH*MH))* (vev*vev*vev*vev))/((-u +  (MPsi*MPsi))*( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::PsiPsiAA(double cos_t, double s){
return ( (gc29*gc29)* (lam13*lam13)* (s*s)* (vev*vev))/(2.*( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::PsiPsiZZ(double cos_t, double s){
return ( (gc132*gc132)* (lam13*lam13)*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) + \
 
      (s*s))* (vev*vev))/(4.* (MZ*MZ*MZ*MZ)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::PsiPsiwW(double cos_t, double s){
return ( (gc112*gc112)* (lam13*lam13)*(-4*s* (MW*MW) + 12* (MW*MW*MW*MW) + \
 
      (s*s))* (vev*vev))/(4.* (MW*MW*MW*MW)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH))));
}
double DT::PsiPsiGG(double cos_t, double s){
return (4* (gc30*gc30)* (lam13*lam13)* (s*s)* (vev*vev))/( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiEe(double cos_t, double s){
return (-2* (gc80*gc80)* (lam13*lam13)*(-s + 4* (Me*Me))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiMUmu(double cos_t, double s){
return (-2* (gc81*gc81)* (lam13*lam13)*(-s + 4* (MMU*MMU))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiTAta(double cos_t, double s){
return (-2* (gc82*gc82)* (lam13*lam13)*(-s + 4* (MTA*MTA))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiUu(double cos_t, double s){
return (6* (gc97*gc97)* (lam13*lam13)*(s - 4* (MU*MU))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiCc(double cos_t, double s){
return (6* (gc95*gc95)* (lam13*lam13)*(s - 4* (MC*MC))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiTt(double cos_t, double s){
return (6* (gc96*gc96)* (lam13*lam13)*(s - 4* (MT*MT))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiDd(double cos_t, double s){
return (6* (gc72*gc72)* (lam13*lam13)*(s - 4* (MD*MD))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiSs(double cos_t, double s){
return (6* (gc73*gc73)* (lam13*lam13)*(s - 4* (MS*MS))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiBb(double cos_t, double s){
return (6* (gc71*gc71)* (lam13*lam13)*(s - 4* (MB*MB))* (vev*vev))/(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
double DT::PsiPsiChiChi(double cos_t, double s){
return  ((3*lam2 + lam23 + 3*lam3 - 3*(lam2 - lam23 + lam3))*(3*lam2 + lam23\
 
      + 3*lam3 - 3*(lam2 - lam23 + lam3)))/16. + (lam12*lam13*(-3*lam2 -\
 
      lam23 - 3*lam3 + 3*(lam2 - lam23 + lam3))*(-s +  (MH*MH))*\
 
      (vev*vev))/(2.*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH))))\
 
      + ( (lam12*lam12)* (lam13*lam13)* (vev*vev*vev*vev))/( (MH*MH*MH*MH) + \
 
      (s*s) +  (MH*MH)*(-2*s +  (WH*WH)));
}
