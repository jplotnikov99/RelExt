///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"

double DT::amp2s::A0A0hh(double cos_t, double s){
double t =  (MA0*MA0) + (-s + cos_t*sqrt(s - 4* (MA0*MA0))*sqrt(s - 4*\
 
   (mh*mh)))/2. +  (mh*mh);
double u = -s - t + MA0*MA0 + MA0*MA0 + mh*mh + mh*mh;
return 2*lam3*lam4 - 2*lam3*lam5 - 2*lam4*lam5 +  (lam3*lam3) +  (lam4*lam4)\
 
   +  (lam5*lam5) - (2*lam3* ((lam3 + lam4 - lam5)*(lam3 + lam4 - lam5))*\
 
   (v*v))/(-t +  (MA0*MA0)) - (2*lam4* ((lam3 + lam4 - lam5)*(lam3 + lam4 -\
 
   lam5))* (v*v))/(-t +  (MA0*MA0)) + (2*lam5* ((lam3 + lam4 - lam5)*(lam3 +\
 
   lam4 - lam5))* (v*v))/(-t +  (MA0*MA0)) - (2*lam3* ((lam3 + lam4 -\
 
   lam5)*(lam3 + lam4 - lam5))* (v*v))/(-u +  (MA0*MA0)) - (2*lam4* ((lam3 +\
 
   lam4 - lam5)*(lam3 + lam4 - lam5))* (v*v))/(-u +  (MA0*MA0)) + (2*lam5*\
 
   ((lam3 + lam4 - lam5)*(lam3 + lam4 - lam5))* (v*v))/(-u +  (MA0*MA0)) +\
 
   (2* ((lam3 + lam4 - lam5)*(lam3 + lam4 - lam5)*(lam3 + lam4 - lam5)*(lam3\
 
   + lam4 - lam5))* (v*v*v*v))/((-t +  (MA0*MA0))*(-u +  (MA0*MA0))) + (\
 
   ((lam3 + lam4 - lam5)*(lam3 + lam4 - lam5)*(lam3 + lam4 - lam5)*(lam3 +\
 
   lam4 - lam5))* (v*v*v*v))/ (( (MA0*MA0) - t)*( (MA0*MA0) - t)) + ( ((lam3\
 
   + lam4 - lam5)*(lam3 + lam4 - lam5)*(lam3 + lam4 - lam5)*(lam3 + lam4 -\
 
   lam5))* (v*v*v*v))/ (( (MA0*MA0) - u)*( (MA0*MA0) - u)) -\
 
   (12*lam*lam3*(lam3 + lam4 - lam5)*(-s +  (mh*mh))* (v*v))/( (mh*mh*mh*mh)\
 
   +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh))) - (12*lam*lam4*(lam3 + lam4 -\
 
   lam5)*(-s +  (mh*mh))* (v*v))/( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s + \
 
   (Wh*Wh))) + (12*lam*(lam3 + lam4 - lam5)*lam5*(-s +  (mh*mh))* (v*v))/(\
 
   (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh))) + (36* (lam*lam)*\
 
   ((lam3 + lam4 - lam5)*(lam3 + lam4 - lam5))* (v*v*v*v))/( (mh*mh*mh*mh) + \
 
   (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh))) + (12*lam* ((lam3 + lam4 - lam5)*(lam3\
 
   + lam4 - lam5)*(lam3 + lam4 - lam5))*(-s +  (mh*mh))* (v*v*v*v))/((-t + \
 
   (MA0*MA0))*( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) +\
 
   (12*lam* ((lam3 + lam4 - lam5)*(lam3 + lam4 - lam5)*(lam3 + lam4 -\
 
   lam5))*(-s +  (mh*mh))* (v*v*v*v))/((-u +  (MA0*MA0))*( (mh*mh*mh*mh) + \
 
   (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh))));
}
double DT::amp2s::A0A0ZZ(double cos_t, double s){
double t =  (MA0*MA0) + (-s + cos_t*sqrt(s - 4* (MA0*MA0))*sqrt(s - 4*\
 
   (MZ*MZ)))/2. +  (MZ*MZ);
double u = -s - t + MA0*MA0 + MA0*MA0 + MZ*MZ + MZ*MZ;
return ( (gc156*gc156*gc156*gc156)*(-16* (MA0*MA0)* (MZ*MZ) +  ((s + t -\
 
   u)*(s + t - u)))*( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(u +  (MZ*MZ)) +  ((\
 
   (MZ*MZ) - u)*( (MZ*MZ) - u))))/(4.* (MZ*MZ*MZ*MZ)* (( (MH0*MH0) - u)*(\
 
   (MH0*MH0) - u))) + ( (gc156*gc156*gc156*gc156)*(-8*(-s + 2*(t + u) + 4*\
 
   (MA0*MA0))* (MZ*MZ*MZ*MZ*MZ*MZ) + 16* (MZ*MZ*MZ*MZ*MZ*MZ*MZ*MZ) - (-t + \
 
   (MA0*MA0))*(-u +  (MA0*MA0))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MZ*MZ)*(-8*s*t*u + 8*s* (MA0*MA0*MA0*MA0) + (t + u)* (s*s) - (t + u)* ((t\
 
   - u)*(t - u)) - 2* (MA0*MA0)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MZ*MZ*MZ*MZ)*(2*t*u - 16*(s - t - u)* (MA0*MA0) + 16* (MA0*MA0*MA0*MA0) +\
 
    (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-t +  (MH0*MH0))*(-u +  (MH0*MH0))*\
 
   (MZ*MZ*MZ*MZ)) + ( (gc156*gc156*gc156*gc156)*( (MA0*MA0*MA0*MA0) - 2*\
 
   (MA0*MA0)*(t +  (MZ*MZ)) +  (( (MZ*MZ) - t)*( (MZ*MZ) - t)))*(-16*\
 
   (MA0*MA0)* (MZ*MZ) +  ((s - t + u)*(s - t + u))))/(4.* (MZ*MZ*MZ*MZ)* ((\
 
   (MH0*MH0) - t)*( (MH0*MH0) - t))) + (gc177*(lam3 + lam4 - lam5)*v*\
 
   (gc156*gc156)*(-s +  (mh*mh))*(s*(s + t - u)*(-u +  (MA0*MA0)) - 2*(s +\
 
   3*t + u + 4* (MA0*MA0))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) + \
 
   (MZ*MZ)*(2*t*(t - u) + 3*s*(t + u) - 2*(3*s + t - u)* (MA0*MA0) + \
 
   (s*s))))/(2.*(-u +  (MH0*MH0))* (MZ*MZ*MZ*MZ)*( (mh*mh*mh*mh) +  (s*s) + \
 
   (mh*mh)*(-2*s +  (Wh*Wh)))) + (gc177*(lam3 + lam4 - lam5)*v*\
 
   (gc156*gc156)*(-s +  (mh*mh))*(s*(s - t + u)*(-t +  (MA0*MA0)) - 2*(s + t\
 
   + 3*u + 4* (MA0*MA0))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) + \
 
   (MZ*MZ)*(2*u*(-t + u) + 3*s*(t + u) - 2*(3*s - t + u)* (MA0*MA0) + \
 
   (s*s))))/(2.*(-t +  (MH0*MH0))* (MZ*MZ*MZ*MZ)*( (mh*mh*mh*mh) +  (s*s) + \
 
   (mh*mh)*(-2*s +  (Wh*Wh)))) + ( (gc177*gc177)* ((lam3 + lam4 - lam5)*(lam3\
 
   + lam4 - lam5))*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (v*v))/(4.*\
 
   (MZ*MZ*MZ*MZ)*( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) - (\
 
   (EL*EL)* (gc156*gc156)*(s*(s + t - u)*(-u +  (MA0*MA0)) - 2*(s + 3*t + u +\
 
   4* (MA0*MA0))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*t*(t -\
 
   u) + 3*s*(t + u) - 2*(3*s + t - u)* (MA0*MA0) +  (s*s)))* (( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW)*(-u +  (MH0*MH0))*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW)) - ( (EL*EL)* (gc156*gc156)*(s*(s - t + u)*(-t + \
 
   (MA0*MA0)) - 2*(s + t + 3*u + 4* (MA0*MA0))* (MZ*MZ*MZ*MZ) + 8*\
 
   (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*u*(-t + u) + 3*s*(t + u) - 2*(3*s - t +\
 
   u)* (MA0*MA0) +  (s*s)))* (( (CW*CW) +  (SW*SW))*( (CW*CW) + \
 
   (SW*SW))))/(4.* (CW*CW)*(-t +  (MH0*MH0))* (MZ*MZ*MZ*MZ)* (SW*SW)) -\
 
   (gc177*(lam3 + lam4 - lam5)*v* (EL*EL)*(-s +  (mh*mh))*(-4*s* (MZ*MZ) +\
 
   12* (MZ*MZ*MZ*MZ) +  (s*s))* (( (CW*CW) +  (SW*SW))*( (CW*CW) + \
 
   (SW*SW))))/(4.* (CW*CW)* (MZ*MZ*MZ*MZ)* (SW*SW)*( (mh*mh*mh*mh) +  (s*s) +\
 
    (mh*mh)*(-2*s +  (Wh*Wh)))) + ( (EL*EL*EL*EL)*(-4*s* (MZ*MZ) + 12*\
 
   (MZ*MZ*MZ*MZ) +  (s*s))* (( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*(\
 
   (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))))/(16.* (CW*CW*CW*CW)*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW*SW*SW));
}
double DT::amp2s::A0A0wW(double cos_t, double s){
double t =  (MA0*MA0) + (-s + cos_t*sqrt(s - 4* (MA0*MA0))*sqrt(s - 4*\
 
   (MW*MW)))/2. +  (MW*MW);
double u = -s - t + MA0*MA0 + MA0*MA0 + MW*MW + MW*MW;
return -0.25*(gc130*gc140* (EL*EL)*(s*(s + t - u)*(-u +  (MA0*MA0)) - 2*(s +\
 
   3*t + u + 4* (MA0*MA0))* (MW*MW*MW*MW) + 8* (MW*MW*MW*MW*MW*MW) + \
 
   (MW*MW)*(2*t*(t - u) + 3*s*(t + u) - 2*(3*s + t - u)* (MA0*MA0) + \
 
   (s*s))))/((-u +  (MHch*MHch))* (MW*MW*MW*MW)* (SW*SW)) - (gc130*gc140*\
 
   (EL*EL)*(s*(s - t + u)*(-t +  (MA0*MA0)) - 2*(s + t + 3*u + 4* (MA0*MA0))*\
 
   (MW*MW*MW*MW) + 8* (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(2*u*(-t + u) + 3*s*(t +\
 
   u) - 2*(3*s - t + u)* (MA0*MA0) +  (s*s))))/(4.*(-t +  (MHch*MHch))*\
 
   (MW*MW*MW*MW)* (SW*SW)) + ( (EL*EL*EL*EL)*(-4*s* (MW*MW) + 12*\
 
   (MW*MW*MW*MW) +  (s*s)))/(16.* (MW*MW*MW*MW)* (SW*SW*SW*SW)) + (\
 
   (gc130*gc130)* (gc140*gc140)*(-16* (MA0*MA0)* (MW*MW) +  ((s + t - u)*(s +\
 
   t - u)))*( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(u +  (MW*MW)) +  (( (MW*MW) -\
 
   u)*( (MW*MW) - u))))/(4.* (MW*MW*MW*MW)* (( (MHch*MHch) - u)*( (MHch*MHch)\
 
   - u))) + ( (gc130*gc130)* (gc140*gc140)*(-8*(-s + 2*(t + u) + 4*\
 
   (MA0*MA0))* (MW*MW*MW*MW*MW*MW) + 16* (MW*MW*MW*MW*MW*MW*MW*MW) - (-t + \
 
   (MA0*MA0))*(-u +  (MA0*MA0))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MW*MW)*(-8*s*t*u + 8*s* (MA0*MA0*MA0*MA0) + (t + u)* (s*s) - (t + u)* ((t\
 
   - u)*(t - u)) - 2* (MA0*MA0)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MW*MW*MW*MW)*(2*t*u - 16*(s - t - u)* (MA0*MA0) + 16* (MA0*MA0*MA0*MA0) +\
 
    (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-t +  (MHch*MHch))*(-u + \
 
   (MHch*MHch))* (MW*MW*MW*MW)) + ( (gc130*gc130)* (gc140*gc140)*(\
 
   (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(t +  (MW*MW)) +  (( (MW*MW) - t)*(\
 
   (MW*MW) - t)))*(-16* (MA0*MA0)* (MW*MW) +  ((s - t + u)*(s - t +\
 
   u))))/(4.* (MW*MW*MW*MW)* (( (MHch*MHch) - t)*( (MHch*MHch) - t))) +\
 
   (gc130*gc140*gc150*(lam3 + lam4 - lam5)*v*(-s +  (mh*mh))*(s*(s + t -\
 
   u)*(-u +  (MA0*MA0)) - 2*(s + 3*t + u + 4* (MA0*MA0))* (MW*MW*MW*MW) + 8*\
 
   (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(2*t*(t - u) + 3*s*(t + u) - 2*(3*s + t -\
 
   u)* (MA0*MA0) +  (s*s))))/(2.*(-u +  (MHch*MHch))* (MW*MW*MW*MW)*(\
 
   (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) +\
 
   (gc130*gc140*gc150*(lam3 + lam4 - lam5)*v*(-s +  (mh*mh))*(s*(s - t +\
 
   u)*(-t +  (MA0*MA0)) - 2*(s + t + 3*u + 4* (MA0*MA0))* (MW*MW*MW*MW) + 8*\
 
   (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(2*u*(-t + u) + 3*s*(t + u) - 2*(3*s - t +\
 
   u)* (MA0*MA0) +  (s*s))))/(2.*(-t +  (MHch*MHch))* (MW*MW*MW*MW)*(\
 
   (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) - (gc150*(lam3 +\
 
   lam4 - lam5)*v* (EL*EL)*(-s +  (mh*mh))*(-4*s* (MW*MW) + 12* (MW*MW*MW*MW)\
 
   +  (s*s)))/(4.* (MW*MW*MW*MW)* (SW*SW)*( (mh*mh*mh*mh) +  (s*s) + \
 
   (mh*mh)*(-2*s +  (Wh*Wh)))) + ( (gc150*gc150)* ((lam3 + lam4 - lam5)*(lam3\
 
   + lam4 - lam5))*(-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s))* (v*v))/(4.*\
 
   (MW*MW*MW*MW)*( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh))));
}
double DT::amp2s::A0A0GG(double cos_t, double s){
return (4* (gc48*gc48)* ((lam3 + lam4 - lam5)*(lam3 + lam4 - lam5))* (s*s)*\
 
   (v*v))/( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)));
}
double DT::amp2s::A0A0Ee(double cos_t, double s){
return (-2* (gc93*gc93)* ((lam3 + lam4 - lam5)*(lam3 + lam4 - lam5))*(-s + 4*\
 
   (Me*Me))* (v*v))/( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)));
}
double DT::amp2s::A0A0Mm(double cos_t, double s){
return (2* (gc95*gc95)* ((lam3 + lam4 - lam5)*(lam3 + lam4 - lam5))*(s - 4*\
 
   (MM*MM))* (v*v))/( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)));
}
double DT::amp2s::A0A0TAta(double cos_t, double s){
return (-2* (gc97*gc97)* ((lam3 + lam4 - lam5)*(lam3 + lam4 - lam5))*(-s + 4*\
 
   (MTA*MTA))* (v*v))/( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)));
}
double DT::amp2s::A0A0Uu(double cos_t, double s){
return (6* (gc115*gc115)* ((lam3 + lam4 - lam5)*(lam3 + lam4 - lam5))*(s - 4*\
 
   (MU*MU))* (v*v))/( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)));
}
double DT::amp2s::A0A0Cc(double cos_t, double s){
return (6* (gc111*gc111)* ((lam3 + lam4 - lam5)*(lam3 + lam4 - lam5))*(s - 4*\
 
   (MC*MC))* (v*v))/( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)));
}
double DT::amp2s::A0A0Tt(double cos_t, double s){
return (6* (gc113*gc113)* ((lam3 + lam4 - lam5)*(lam3 + lam4 - lam5))*(s - 4*\
 
   (MT*MT))* (v*v))/( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)));
}
double DT::amp2s::A0A0Dd(double cos_t, double s){
return (6* (gc80*gc80)* ((lam3 + lam4 - lam5)*(lam3 + lam4 - lam5))*(s - 4*\
 
   (MD*MD))* (v*v))/( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)));
}
double DT::amp2s::A0A0Ss(double cos_t, double s){
return (6* (gc82*gc82)* ((lam3 + lam4 - lam5)*(lam3 + lam4 - lam5))*(s - 4*\
 
   (MS*MS))* (v*v))/( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)));
}
double DT::amp2s::A0A0Bb(double cos_t, double s){
return (6* (gc78*gc78)* ((lam3 + lam4 - lam5)*(lam3 + lam4 - lam5))*(s - 4*\
 
   (MB*MB))* (v*v))/( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)));
}
