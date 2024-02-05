///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::HcHcWW(double cos_t, double s){
double t =  (mHc*mHc) + (-s + cos_t*sqrt(s - 4* (mHc*mHc))*sqrt(s - 4*\
 
   (MW*MW)))/2. +  (MW*MW);
double u = -s - t + mHc*mHc + mHc*mHc + MW*MW + MW*MW;
return -0.5*( (gc188*gc188)* (gc190*gc190)*(4*RR1x1*RR1x2*RR2x1*RR2x2 + \
 
   (RR1x1*RR1x1)*( (RR2x1*RR2x1) -  (RR2x2*RR2x2)) +  (RR1x2*RR1x2)*(-\
 
   (RR2x1*RR2x1) +  (RR2x2*RR2x2)))*(-16* (mHc*mHc)* (MW*MW) +  ((s + t -\
 
   u)*(s + t - u)))*( (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(u +  (MW*MW)) +  ((\
 
   (MW*MW) - u)*( (MW*MW) - u))))/((-u +  (mH1*mH1))*(u -  (mH2*mH2))*\
 
   (MW*MW*MW*MW)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))* ((RR2x1 + RR2x2)*(RR2x1\
 
   + RR2x2))) - ( (gc188*gc188)* (gc192*gc192)*(4*RR1x1*RR1x2*RR3x1*RR3x2 + \
 
   (RR1x1*RR1x1)*( (RR3x1*RR3x1) -  (RR3x2*RR3x2)) +  (RR1x2*RR1x2)*(-\
 
   (RR3x1*RR3x1) +  (RR3x2*RR3x2)))*(-16* (mHc*mHc)* (MW*MW) +  ((s + t -\
 
   u)*(s + t - u)))*( (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(u +  (MW*MW)) +  ((\
 
   (MW*MW) - u)*( (MW*MW) - u))))/(2.*(-u +  (mH1*mH1))*(u -  (mH3*mH3))*\
 
   (MW*MW*MW*MW)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))* ((RR3x1 + RR3x2)*(RR3x1\
 
   + RR3x2))) - ( (gc190*gc190)* (gc192*gc192)*(4*RR2x1*RR2x2*RR3x1*RR3x2 + \
 
   (RR2x1*RR2x1)*( (RR3x1*RR3x1) -  (RR3x2*RR3x2)) +  (RR2x2*RR2x2)*(-\
 
   (RR3x1*RR3x1) +  (RR3x2*RR3x2)))*(-16* (mHc*mHc)* (MW*MW) +  ((s + t -\
 
   u)*(s + t - u)))*( (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(u +  (MW*MW)) +  ((\
 
   (MW*MW) - u)*( (MW*MW) - u))))/(2.*(-u +  (mH2*mH2))*(u -  (mH3*mH3))*\
 
   (MW*MW*MW*MW)* ((RR2x1 + RR2x2)*(RR2x1 + RR2x2))* ((RR3x1 + RR3x2)*(RR3x1\
 
   + RR3x2))) + ( (gc188*gc188)* (gc190*gc190)*(4*RR1x1*RR1x2*RR2x1*RR2x2 + \
 
   (RR1x1*RR1x1)*( (RR2x1*RR2x1) -  (RR2x2*RR2x2)) +  (RR1x2*RR1x2)*(-\
 
   (RR2x1*RR2x1) +  (RR2x2*RR2x2)))*(-8*(-s + 2*(t + u) + 4* (mHc*mHc))*\
 
   (MW*MW*MW*MW*MW*MW) + 16* (MW*MW*MW*MW*MW*MW*MW*MW) - (-t + \
 
   (mHc*mHc))*(-u +  (mHc*mHc))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MW*MW)*(-8*s*t*u + 8*s* (mHc*mHc*mHc*mHc) + (t + u)* (s*s) - (t + u)* ((t\
 
   - u)*(t - u)) - 2* (mHc*mHc)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MW*MW*MW*MW)*(2*t*u - 16*(s - t - u)* (mHc*mHc) + 16* (mHc*mHc*mHc*mHc) +\
 
    (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-u +  (mH1*mH1))*(-t +  (mH2*mH2))*\
 
   (MW*MW*MW*MW)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))* ((RR2x1 + RR2x2)*(RR2x1\
 
   + RR2x2))) + ( (gc188*gc188)* (gc190*gc190)*(4*RR1x1*RR1x2*RR2x1*RR2x2 + \
 
   (RR1x1*RR1x1)*( (RR2x1*RR2x1) -  (RR2x2*RR2x2)) +  (RR1x2*RR1x2)*(-\
 
   (RR2x1*RR2x1) +  (RR2x2*RR2x2)))*(-8*(-s + 2*(t + u) + 4* (mHc*mHc))*\
 
   (MW*MW*MW*MW*MW*MW) + 16* (MW*MW*MW*MW*MW*MW*MW*MW) - (-t + \
 
   (mHc*mHc))*(-u +  (mHc*mHc))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MW*MW)*(-8*s*t*u + 8*s* (mHc*mHc*mHc*mHc) + (t + u)* (s*s) - (t + u)* ((t\
 
   - u)*(t - u)) - 2* (mHc*mHc)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MW*MW*MW*MW)*(2*t*u - 16*(s - t - u)* (mHc*mHc) + 16* (mHc*mHc*mHc*mHc) +\
 
    (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-t +  (mH1*mH1))*(-u +  (mH2*mH2))*\
 
   (MW*MW*MW*MW)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))* ((RR2x1 + RR2x2)*(RR2x1\
 
   + RR2x2))) + ( (gc188*gc188)* (gc192*gc192)*(4*RR1x1*RR1x2*RR3x1*RR3x2 + \
 
   (RR1x1*RR1x1)*( (RR3x1*RR3x1) -  (RR3x2*RR3x2)) +  (RR1x2*RR1x2)*(-\
 
   (RR3x1*RR3x1) +  (RR3x2*RR3x2)))*(-8*(-s + 2*(t + u) + 4* (mHc*mHc))*\
 
   (MW*MW*MW*MW*MW*MW) + 16* (MW*MW*MW*MW*MW*MW*MW*MW) - (-t + \
 
   (mHc*mHc))*(-u +  (mHc*mHc))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MW*MW)*(-8*s*t*u + 8*s* (mHc*mHc*mHc*mHc) + (t + u)* (s*s) - (t + u)* ((t\
 
   - u)*(t - u)) - 2* (mHc*mHc)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MW*MW*MW*MW)*(2*t*u - 16*(s - t - u)* (mHc*mHc) + 16* (mHc*mHc*mHc*mHc) +\
 
    (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-u +  (mH1*mH1))*(-t +  (mH3*mH3))*\
 
   (MW*MW*MW*MW)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))* ((RR3x1 + RR3x2)*(RR3x1\
 
   + RR3x2))) + ( (gc188*gc188)* (gc192*gc192)*(4*RR1x1*RR1x2*RR3x1*RR3x2 + \
 
   (RR1x1*RR1x1)*( (RR3x1*RR3x1) -  (RR3x2*RR3x2)) +  (RR1x2*RR1x2)*(-\
 
   (RR3x1*RR3x1) +  (RR3x2*RR3x2)))*(-8*(-s + 2*(t + u) + 4* (mHc*mHc))*\
 
   (MW*MW*MW*MW*MW*MW) + 16* (MW*MW*MW*MW*MW*MW*MW*MW) - (-t + \
 
   (mHc*mHc))*(-u +  (mHc*mHc))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MW*MW)*(-8*s*t*u + 8*s* (mHc*mHc*mHc*mHc) + (t + u)* (s*s) - (t + u)* ((t\
 
   - u)*(t - u)) - 2* (mHc*mHc)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MW*MW*MW*MW)*(2*t*u - 16*(s - t - u)* (mHc*mHc) + 16* (mHc*mHc*mHc*mHc) +\
 
    (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-t +  (mH1*mH1))*(-u +  (mH3*mH3))*\
 
   (MW*MW*MW*MW)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))* ((RR3x1 + RR3x2)*(RR3x1\
 
   + RR3x2))) + ( (gc190*gc190)* (gc192*gc192)*(4*RR2x1*RR2x2*RR3x1*RR3x2 + \
 
   (RR2x1*RR2x1)*( (RR3x1*RR3x1) -  (RR3x2*RR3x2)) +  (RR2x2*RR2x2)*(-\
 
   (RR3x1*RR3x1) +  (RR3x2*RR3x2)))*(-8*(-s + 2*(t + u) + 4* (mHc*mHc))*\
 
   (MW*MW*MW*MW*MW*MW) + 16* (MW*MW*MW*MW*MW*MW*MW*MW) - (-t + \
 
   (mHc*mHc))*(-u +  (mHc*mHc))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MW*MW)*(-8*s*t*u + 8*s* (mHc*mHc*mHc*mHc) + (t + u)* (s*s) - (t + u)* ((t\
 
   - u)*(t - u)) - 2* (mHc*mHc)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MW*MW*MW*MW)*(2*t*u - 16*(s - t - u)* (mHc*mHc) + 16* (mHc*mHc*mHc*mHc) +\
 
    (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-u +  (mH2*mH2))*(-t +  (mH3*mH3))*\
 
   (MW*MW*MW*MW)* ((RR2x1 + RR2x2)*(RR2x1 + RR2x2))* ((RR3x1 + RR3x2)*(RR3x1\
 
   + RR3x2))) + ( (gc190*gc190)* (gc192*gc192)*(4*RR2x1*RR2x2*RR3x1*RR3x2 + \
 
   (RR2x1*RR2x1)*( (RR3x1*RR3x1) -  (RR3x2*RR3x2)) +  (RR2x2*RR2x2)*(-\
 
   (RR3x1*RR3x1) +  (RR3x2*RR3x2)))*(-8*(-s + 2*(t + u) + 4* (mHc*mHc))*\
 
   (MW*MW*MW*MW*MW*MW) + 16* (MW*MW*MW*MW*MW*MW*MW*MW) - (-t + \
 
   (mHc*mHc))*(-u +  (mHc*mHc))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MW*MW)*(-8*s*t*u + 8*s* (mHc*mHc*mHc*mHc) + (t + u)* (s*s) - (t + u)* ((t\
 
   - u)*(t - u)) - 2* (mHc*mHc)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MW*MW*MW*MW)*(2*t*u - 16*(s - t - u)* (mHc*mHc) + 16* (mHc*mHc*mHc*mHc) +\
 
    (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-t +  (mH2*mH2))*(-u +  (mH3*mH3))*\
 
   (MW*MW*MW*MW)* ((RR2x1 + RR2x2)*(RR2x1 + RR2x2))* ((RR3x1 + RR3x2)*(RR3x1\
 
   + RR3x2))) - ( (gc188*gc188)* (gc190*gc190)*(4*RR1x1*RR1x2*RR2x1*RR2x2 + \
 
   (RR1x1*RR1x1)*( (RR2x1*RR2x1) -  (RR2x2*RR2x2)) +  (RR1x2*RR1x2)*(-\
 
   (RR2x1*RR2x1) +  (RR2x2*RR2x2)))*( (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(t + \
 
   (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))*(-16* (mHc*mHc)* (MW*MW) + \
 
   ((s - t + u)*(s - t + u))))/(2.*(-t +  (mH1*mH1))*(t -  (mH2*mH2))*\
 
   (MW*MW*MW*MW)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))* ((RR2x1 + RR2x2)*(RR2x1\
 
   + RR2x2))) - ( (gc188*gc188)* (gc192*gc192)*(4*RR1x1*RR1x2*RR3x1*RR3x2 + \
 
   (RR1x1*RR1x1)*( (RR3x1*RR3x1) -  (RR3x2*RR3x2)) +  (RR1x2*RR1x2)*(-\
 
   (RR3x1*RR3x1) +  (RR3x2*RR3x2)))*( (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(t + \
 
   (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))*(-16* (mHc*mHc)* (MW*MW) + \
 
   ((s - t + u)*(s - t + u))))/(2.*(-t +  (mH1*mH1))*(t -  (mH3*mH3))*\
 
   (MW*MW*MW*MW)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))* ((RR3x1 + RR3x2)*(RR3x1\
 
   + RR3x2))) - ( (gc190*gc190)* (gc192*gc192)*(4*RR2x1*RR2x2*RR3x1*RR3x2 + \
 
   (RR2x1*RR2x1)*( (RR3x1*RR3x1) -  (RR3x2*RR3x2)) +  (RR2x2*RR2x2)*(-\
 
   (RR3x1*RR3x1) +  (RR3x2*RR3x2)))*( (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(t + \
 
   (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))*(-16* (mHc*mHc)* (MW*MW) + \
 
   ((s - t + u)*(s - t + u))))/(2.*(-t +  (mH2*mH2))*(t -  (mH3*mH3))*\
 
   (MW*MW*MW*MW)* ((RR2x1 + RR2x2)*(RR2x1 + RR2x2))* ((RR3x1 + RR3x2)*(RR3x1\
 
   + RR3x2))) + ( (gc188*gc188*gc188*gc188)*(-16* (mHc*mHc)* (MW*MW) +  ((s +\
 
   t - u)*(s + t - u)))*( (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(u +  (MW*MW)) + \
 
   (( (MW*MW) - u)*( (MW*MW) - u)))* (( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2))))/(4.* (MW*MW*MW*MW)* ((RR1x1 +\
 
   RR1x2)*(RR1x1 + RR1x2)*(RR1x1 + RR1x2)*(RR1x1 + RR1x2))* (( (mH1*mH1) -\
 
   u)*( (mH1*mH1) - u))) + ( (gc188*gc188*gc188*gc188)*(-8*(-s + 2*(t + u) +\
 
   4* (mHc*mHc))* (MW*MW*MW*MW*MW*MW) + 16* (MW*MW*MW*MW*MW*MW*MW*MW) - (-t +\
 
    (mHc*mHc))*(-u +  (mHc*mHc))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MW*MW)*(-8*s*t*u + 8*s* (mHc*mHc*mHc*mHc) + (t + u)* (s*s) - (t + u)* ((t\
 
   - u)*(t - u)) - 2* (mHc*mHc)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MW*MW*MW*MW)*(2*t*u - 16*(s - t - u)* (mHc*mHc) + 16* (mHc*mHc*mHc*mHc) +\
 
    (s*s) + 7* (t*t) + 7* (u*u)))* (( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2))))/(2.*(-t +  (mH1*mH1))*(-u +  (mH1*mH1))*\
 
   (MW*MW*MW*MW)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2)*(RR1x1 + RR1x2)*(RR1x1 +\
 
   RR1x2))) + ( (gc188*gc188*gc188*gc188)*( (mHc*mHc*mHc*mHc) - 2*\
 
   (mHc*mHc)*(t +  (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))*(-16*\
 
   (mHc*mHc)* (MW*MW) +  ((s - t + u)*(s - t + u)))* (( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2))*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))))/(4.* (MW*MW*MW*MW)*\
 
   ((RR1x1 + RR1x2)*(RR1x1 + RR1x2)*(RR1x1 + RR1x2)*(RR1x1 + RR1x2))* ((\
 
   (mH1*mH1) - t)*( (mH1*mH1) - t))) + ( (gc190*gc190*gc190*gc190)*(-16*\
 
   (mHc*mHc)* (MW*MW) +  ((s + t - u)*(s + t - u)))*( (mHc*mHc*mHc*mHc) - 2*\
 
   (mHc*mHc)*(u +  (MW*MW)) +  (( (MW*MW) - u)*( (MW*MW) - u)))* ((\
 
   (RR2x1*RR2x1) +  (RR2x2*RR2x2))*( (RR2x1*RR2x1) +  (RR2x2*RR2x2))))/(4.*\
 
   (MW*MW*MW*MW)* ((RR2x1 + RR2x2)*(RR2x1 + RR2x2)*(RR2x1 + RR2x2)*(RR2x1 +\
 
   RR2x2))* (( (mH2*mH2) - u)*( (mH2*mH2) - u))) + (\
 
   (gc190*gc190*gc190*gc190)*(-8*(-s + 2*(t + u) + 4* (mHc*mHc))*\
 
   (MW*MW*MW*MW*MW*MW) + 16* (MW*MW*MW*MW*MW*MW*MW*MW) - (-t + \
 
   (mHc*mHc))*(-u +  (mHc*mHc))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MW*MW)*(-8*s*t*u + 8*s* (mHc*mHc*mHc*mHc) + (t + u)* (s*s) - (t + u)* ((t\
 
   - u)*(t - u)) - 2* (mHc*mHc)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MW*MW*MW*MW)*(2*t*u - 16*(s - t - u)* (mHc*mHc) + 16* (mHc*mHc*mHc*mHc) +\
 
    (s*s) + 7* (t*t) + 7* (u*u)))* (( (RR2x1*RR2x1) +  (RR2x2*RR2x2))*(\
 
   (RR2x1*RR2x1) +  (RR2x2*RR2x2))))/(2.*(-t +  (mH2*mH2))*(-u +  (mH2*mH2))*\
 
   (MW*MW*MW*MW)* ((RR2x1 + RR2x2)*(RR2x1 + RR2x2)*(RR2x1 + RR2x2)*(RR2x1 +\
 
   RR2x2))) + ( (gc190*gc190*gc190*gc190)*( (mHc*mHc*mHc*mHc) - 2*\
 
   (mHc*mHc)*(t +  (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))*(-16*\
 
   (mHc*mHc)* (MW*MW) +  ((s - t + u)*(s - t + u)))* (( (RR2x1*RR2x1) + \
 
   (RR2x2*RR2x2))*( (RR2x1*RR2x1) +  (RR2x2*RR2x2))))/(4.* (MW*MW*MW*MW)*\
 
   ((RR2x1 + RR2x2)*(RR2x1 + RR2x2)*(RR2x1 + RR2x2)*(RR2x1 + RR2x2))* ((\
 
   (mH2*mH2) - t)*( (mH2*mH2) - t))) + ( (gc192*gc192*gc192*gc192)*(-16*\
 
   (mHc*mHc)* (MW*MW) +  ((s + t - u)*(s + t - u)))*( (mHc*mHc*mHc*mHc) - 2*\
 
   (mHc*mHc)*(u +  (MW*MW)) +  (( (MW*MW) - u)*( (MW*MW) - u)))* ((\
 
   (RR3x1*RR3x1) +  (RR3x2*RR3x2))*( (RR3x1*RR3x1) +  (RR3x2*RR3x2))))/(4.*\
 
   (MW*MW*MW*MW)* ((RR3x1 + RR3x2)*(RR3x1 + RR3x2)*(RR3x1 + RR3x2)*(RR3x1 +\
 
   RR3x2))* (( (mH3*mH3) - u)*( (mH3*mH3) - u))) + (\
 
   (gc192*gc192*gc192*gc192)*(-8*(-s + 2*(t + u) + 4* (mHc*mHc))*\
 
   (MW*MW*MW*MW*MW*MW) + 16* (MW*MW*MW*MW*MW*MW*MW*MW) - (-t + \
 
   (mHc*mHc))*(-u +  (mHc*mHc))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MW*MW)*(-8*s*t*u + 8*s* (mHc*mHc*mHc*mHc) + (t + u)* (s*s) - (t + u)* ((t\
 
   - u)*(t - u)) - 2* (mHc*mHc)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MW*MW*MW*MW)*(2*t*u - 16*(s - t - u)* (mHc*mHc) + 16* (mHc*mHc*mHc*mHc) +\
 
    (s*s) + 7* (t*t) + 7* (u*u)))* (( (RR3x1*RR3x1) +  (RR3x2*RR3x2))*(\
 
   (RR3x1*RR3x1) +  (RR3x2*RR3x2))))/(2.*(-t +  (mH3*mH3))*(-u +  (mH3*mH3))*\
 
   (MW*MW*MW*MW)* ((RR3x1 + RR3x2)*(RR3x1 + RR3x2)*(RR3x1 + RR3x2)*(RR3x1 +\
 
   RR3x2))) + ( (gc192*gc192*gc192*gc192)*( (mHc*mHc*mHc*mHc) - 2*\
 
   (mHc*mHc)*(t +  (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))*(-16*\
 
   (mHc*mHc)* (MW*MW) +  ((s - t + u)*(s - t + u)))* (( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))*( (RR3x1*RR3x1) +  (RR3x2*RR3x2))))/(4.* (MW*MW*MW*MW)*\
 
   ((RR3x1 + RR3x2)*(RR3x1 + RR3x2)*(RR3x1 + RR3x2)*(RR3x1 + RR3x2))* ((\
 
   (mH3*mH3) - t)*( (mH3*mH3) - t)));
}
double DT::HcHChh(double cos_t, double s){
double t =  (mHc*mHc) + (-s + cos_t*sqrt(s - 4* (mHc*mHc))*sqrt(s - 4*\
 
   (mHsm*mHsm)))/2. +  (mHsm*mHsm);
double u = -s - t + mHc*mHc + mHc*mHc + mHsm*mHsm + mHsm*mHsm;
return  (L3*L3) + (2* (L3*L3*L3)* (v*v))/(t -  (mHc*mHc)) + (2* (L3*L3*L3)*\
 
   (v*v))/(u -  (mHc*mHc)) + (2* (L3*L3*L3*L3)* (v*v*v*v))/((-t + \
 
   (mHc*mHc))*(-u +  (mHc*mHc))) + ( (L3*L3*L3*L3)* (v*v*v*v))/ (( (mHc*mHc)\
 
   - t)*( (mHc*mHc) - t)) + ( (L3*L3*L3*L3)* (v*v*v*v))/ (( (mHc*mHc) - u)*(\
 
   (mHc*mHc) - u)) + (6*L1* (L3*L3)*(s -  (mHsm*mHsm))* (v*v))/(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (9*\
 
   (L1*L1)* (L3*L3)* (v*v*v*v))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (6*L1* (L3*L3*L3)*(-s + \
 
   (mHsm*mHsm))* (v*v*v*v))/((-t +  (mHc*mHc))*( (mHsm*mHsm*mHsm*mHsm) + \
 
   (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + (6*L1* (L3*L3*L3)*(-s + \
 
   (mHsm*mHsm))* (v*v*v*v))/((-u +  (mHc*mHc))*( (mHsm*mHsm*mHsm*mHsm) + \
 
   (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))));
}
double DT::HcHChA(double cos_t, double s){
double t = (-s + 2* (mHc*mHc) +  (mHsm*mHsm) + cos_t*sqrt(s - 4*\
 
   (mHc*mHc))*sqrt( ((- (mHsm*mHsm) + s)*(- (mHsm*mHsm) + s))/s))/2.;
double u = -s - t + mHc*mHc + mHc*mHc + mHsm*mHsm + 0*0;
return -(( (gc20*gc20)* (L3*L3)*(-s + t + u + 6* (mHc*mHc) - 3* (mHsm*mHsm))*\
 
   (v*v))/((-t +  (mHc*mHc))*(-u +  (mHc*mHc)))) - (2* (gc20*gc20)*\
 
   (L3*L3)*(t +  (mHc*mHc))* (v*v))/ (( (mHc*mHc) - t)*( (mHc*mHc) - t)) + (\
 
   (gc20*gc20)* (L3*L3)*(s + t - u - 4* (mHc*mHc) -  (mHsm*mHsm))* (v*v))/ ((\
 
   (mHc*mHc) - u)*( (mHc*mHc) - u));
}
double DT::HcHChZ(double cos_t, double s){
double t = (-s + 2* (mHc*mHc) +  (mHsm*mHsm) +  (MZ*MZ) + cos_t*sqrt(s - 4*\
 
   (mHc*mHc))*sqrt(( (mHsm*mHsm*mHsm*mHsm) - 2* (mHsm*mHsm)*(s +  (MZ*MZ)) + \
 
   (( (MZ*MZ) - s)*( (MZ*MZ) - s)))/s))/2.;
double u = -s - t + mHc*mHc + mHc*mHc + mHsm*mHsm + MZ*MZ;
return ( (gc211*gc211)* (L3*L3)*((-t +  (mHc*mHc))*(-s - t + u + \
 
   (mHsm*mHsm)) + (s - 2*t - u - 5* (mHc*mHc) + 3* (mHsm*mHsm))* (MZ*MZ) + \
 
   (MZ*MZ*MZ*MZ))* (v*v))/((-t +  (mHc*mHc))*(-u +  (mHc*mHc))* (MZ*MZ)) + (\
 
   (gc211*gc211)* (L3*L3)*( (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(t +  (MZ*MZ)) +\
 
    (( (MZ*MZ) - t)*( (MZ*MZ) - t)))* (v*v))/( (MZ*MZ)* (( (mHc*mHc) - t)*(\
 
   (mHc*mHc) - t))) + ( (gc211*gc211)* (L3*L3)*( (mHsm*mHsm*mHsm*mHsm) - 16*\
 
   (mHc*mHc)* (MZ*MZ) - 2* (mHsm*mHsm)*(s + t - u +  (MZ*MZ)) +  (( (MZ*MZ) +\
 
   s + t - u)*( (MZ*MZ) + s + t - u)))* (v*v))/(4.* (MZ*MZ)* (( (mHc*mHc) -\
 
   u)*( (mHc*mHc) - u))) + (L3* (EL*EL)* (gc211*gc211)*(-s +  (MZ*MZ))*((t -\
 
   u)*(s + t - u -  (mHsm*mHsm)) + (4*s + t - u - 16* (mHc*mHc))* (MZ*MZ))*\
 
   (v*v)* (( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW)*(-u + \
 
   (mHc*mHc))* (MZ*MZ)* (SW*SW)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ)))) + (L3* (EL*EL)* (gc211*gc211)*(-s +  (MZ*MZ))*(-((t - u)*(-t + \
 
   (mHc*mHc))) + (2*s - t + u - 8* (mHc*mHc))* (MZ*MZ))* (v*v)* (( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))))/(2.* (CW*CW)*(-t +  (mHc*mHc))* (MZ*MZ)*\
 
   (SW*SW)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (\
 
   (EL*EL*EL*EL)* (gc211*gc211)*(4*(s - 4* (mHc*mHc))* (MZ*MZ) +  ((t - u)*(t\
 
   - u)))* (v*v)* (( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))))/(16.* (CW*CW*CW*CW)* (MZ*MZ)*\
 
   (SW*SW*SW*SW)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::HcHCAA(double cos_t, double s){
double t = (-s + cos_t*sqrt(s)*sqrt(s - 4* (mHc*mHc)))/2. +  (mHc*mHc);
double u = -s - t + mHc*mHc + mHc*mHc + 0*0 + 0*0;
return 16* (EL*EL*EL*EL) + (2* (EL*EL)* (gc20*gc20)*(-2*s + 3*t - u + 6*\
 
   (mHc*mHc)))/(-t +  (mHc*mHc)) + (2* (EL*EL)* (gc20*gc20)*(-2*s - t + 3*u +\
 
   6* (mHc*mHc)))/(-u +  (mHc*mHc)) + (2* (gc20*gc20*gc20*gc20)*(t + \
 
   (mHc*mHc))*(-s + t - u + 4* (mHc*mHc)))/ (( (mHc*mHc) - t)*( (mHc*mHc) -\
 
   t)) + (2* (gc20*gc20*gc20*gc20)*(u +  (mHc*mHc))*(-s - t + u + 4*\
 
   (mHc*mHc)))/ (( (mHc*mHc) - u)*( (mHc*mHc) - u)) + (\
 
   (gc20*gc20*gc20*gc20)* ((6* (mHc*mHc) - s + t + u)*(6* (mHc*mHc) - s + t +\
 
   u)))/(2.*(-t +  (mHc*mHc))*(-u +  (mHc*mHc)));
}
double DT::HcHCAZ(double cos_t, double s){
double t = (-s + 2* (mHc*mHc) +  (MZ*MZ) + cos_t*sqrt(s - 4* (mHc*mHc))*sqrt(\
 
   ((- (MZ*MZ) + s)*(- (MZ*MZ) + s))/s))/2.;
double u = -s - t + mHc*mHc + mHc*mHc + 0*0 + MZ*MZ;
return (gc20*gc211* (EL*EL)*((t - u)*(-t +  (mHc*mHc)) + (-2*s + t - u + 8*\
 
   (mHc*mHc))* (MZ*MZ))*( (CW*CW) -  (SW*SW)))/(CW*SW*(-t +  (mHc*mHc))*\
 
   (MZ*MZ)) + (gc20*gc211* (EL*EL)*((s + t - u)*(-s - 2*t + 2* (mHc*mHc)) +\
 
   (3*(t + u) + 10* (mHc*mHc))* (MZ*MZ) - 3* (MZ*MZ*MZ*MZ))*( (CW*CW) - \
 
   (SW*SW)))/(2.*CW*SW*(-u +  (mHc*mHc))* (MZ*MZ)) - ( (gc20*gc20)*\
 
   (gc211*gc211)*(-s + t - u + 4* (mHc*mHc) +  (MZ*MZ))*( (mHc*mHc*mHc*mHc) -\
 
   2* (mHc*mHc)*(t +  (MZ*MZ)) +  (( (MZ*MZ) - t)*( (MZ*MZ) - t))))/(\
 
   (MZ*MZ)* (( (mHc*mHc) - t)*( (mHc*mHc) - t))) - ( (gc20*gc20)*\
 
   (gc211*gc211)*(u +  (mHc*mHc))*(-16* (mHc*mHc)* (MZ*MZ) +  (( (MZ*MZ) + s\
 
   + t - u)*( (MZ*MZ) + s + t - u))))/(2.* (MZ*MZ)* (( (mHc*mHc) - u)*(\
 
   (mHc*mHc) - u))) + ( (gc20*gc20)* (gc211*gc211)*((s + t - u)*(-t + \
 
   (mHc*mHc))*(-s + t + u + 6* (mHc*mHc)) - (-4*s + 7*t + 4*u + 21*\
 
   (mHc*mHc))* (MZ*MZ*MZ*MZ) + 3* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(-2*s*u -\
 
   14*(s - t - u)* (mHc*mHc) + 30* (mHc*mHc*mHc*mHc) +  (s*s) + 5* (t*t) + \
 
   (u*u))))/(2.*(-t +  (mHc*mHc))*(-u +  (mHc*mHc))* (MZ*MZ)) + (3*\
 
   (EL*EL*EL*EL)* (( (CW*CW) -  (SW*SW))*( (CW*CW) -  (SW*SW))))/( (CW*CW)*\
 
   (SW*SW));
}
double DT::HcHCZZ(double cos_t, double s){
double t =  (mHc*mHc) + (-s + cos_t*sqrt(s - 4* (mHc*mHc))*sqrt(s - 4*\
 
   (MZ*MZ)))/2. +  (MZ*MZ);
double u = -s - t + mHc*mHc + mHc*mHc + MZ*MZ + MZ*MZ;
return ( (gc211*gc211*gc211*gc211)*(-16* (mHc*mHc)* (MZ*MZ) +  ((s + t -\
 
   u)*(s + t - u)))*( (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(u +  (MZ*MZ)) +  ((\
 
   (MZ*MZ) - u)*( (MZ*MZ) - u))))/(4.* (MZ*MZ*MZ*MZ)* (( (mHc*mHc) - u)*(\
 
   (mHc*mHc) - u))) + ( (gc211*gc211*gc211*gc211)*(-8*(-s + 2*(t + u) + 4*\
 
   (mHc*mHc))* (MZ*MZ*MZ*MZ*MZ*MZ) + 16* (MZ*MZ*MZ*MZ*MZ*MZ*MZ*MZ) - (-t + \
 
   (mHc*mHc))*(-u +  (mHc*mHc))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MZ*MZ)*(-8*s*t*u + 8*s* (mHc*mHc*mHc*mHc) + (t + u)* (s*s) - (t + u)* ((t\
 
   - u)*(t - u)) - 2* (mHc*mHc)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MZ*MZ*MZ*MZ)*(2*t*u - 16*(s - t - u)* (mHc*mHc) + 16* (mHc*mHc*mHc*mHc) +\
 
    (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-t +  (mHc*mHc))*(-u +  (mHc*mHc))*\
 
   (MZ*MZ*MZ*MZ)) + ( (gc211*gc211*gc211*gc211)*( (mHc*mHc*mHc*mHc) - 2*\
 
   (mHc*mHc)*(t +  (MZ*MZ)) +  (( (MZ*MZ) - t)*( (MZ*MZ) - t)))*(-16*\
 
   (mHc*mHc)* (MZ*MZ) +  ((s - t + u)*(s - t + u))))/(4.* (MZ*MZ*MZ*MZ)* ((\
 
   (mHc*mHc) - t)*( (mHc*mHc) - t))) - ( (EL*EL)* (gc211*gc211)*(s*(s + t -\
 
   u)*(-u +  (mHc*mHc)) - 2*(s + 3*t + u + 4* (mHc*mHc))* (MZ*MZ*MZ*MZ) + 8*\
 
   (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*t*(t - u) + 3*s*(t + u) - 2*(3*s + t -\
 
   u)* (mHc*mHc) +  (s*s)))* (( (CW*CW) -  (SW*SW))*( (CW*CW) - \
 
   (SW*SW))))/(4.* (CW*CW)*(-u +  (mHc*mHc))* (MZ*MZ*MZ*MZ)* (SW*SW)) - (\
 
   (EL*EL)* (gc211*gc211)*(s*(s - t + u)*(-t +  (mHc*mHc)) - 2*(s + t + 3*u +\
 
   4* (mHc*mHc))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*u*(-t\
 
   + u) + 3*s*(t + u) - 2*(3*s - t + u)* (mHc*mHc) +  (s*s)))* (( (CW*CW) - \
 
   (SW*SW))*( (CW*CW) -  (SW*SW))))/(4.* (CW*CW)*(-t +  (mHc*mHc))*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW)) + ( (EL*EL*EL*EL)*(-4*s* (MZ*MZ) + 12*\
 
   (MZ*MZ*MZ*MZ) +  (s*s))* (( (CW*CW) -  (SW*SW))*( (CW*CW) -  (SW*SW))*(\
 
   (CW*CW) -  (SW*SW))*( (CW*CW) -  (SW*SW))))/(16.* (CW*CW*CW*CW)*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW*SW*SW)) + (L3* (EL*EL)* (gc211*gc211)*(-s + \
 
   (mHsm*mHsm))*(s*(s + t - u)*(-u +  (mHc*mHc)) - 2*(s + 3*t + u + 4*\
 
   (mHc*mHc))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*t*(t - u)\
 
   + 3*s*(t + u) - 2*(3*s + t - u)* (mHc*mHc) +  (s*s)))* (v*v)* (( (CW*CW) +\
 
    (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW)*(-u +  (mHc*mHc))*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + (L3* (EL*EL)* (gc211*gc211)*(-s + \
 
   (mHsm*mHsm))*(s*(s - t + u)*(-t +  (mHc*mHc)) - 2*(s + t + 3*u + 4*\
 
   (mHc*mHc))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*u*(-t +\
 
   u) + 3*s*(t + u) - 2*(3*s - t + u)* (mHc*mHc) +  (s*s)))* (v*v)* ((\
 
   (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW)*(-t + \
 
   (mHc*mHc))* (MZ*MZ*MZ*MZ)* (SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + ( (EL*EL*EL*EL)* (L3*L3)*(-4*s*\
 
   (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (v*v*v*v)* (( (CW*CW) +  (SW*SW))*(\
 
   (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))))/(16.*\
 
   (CW*CW*CW*CW)* (MZ*MZ*MZ*MZ)* (SW*SW*SW*SW)*( (mHsm*mHsm*mHsm*mHsm) + \
 
   (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) - (L3* (EL*EL*EL*EL)*(-s + \
 
   (mHsm*mHsm))*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (v*v)* ((\
 
   (CW*CW*CW*CW) -  (SW*SW*SW*SW))*( (CW*CW*CW*CW) -  (SW*SW*SW*SW))))/(8.*\
 
   (CW*CW*CW*CW)* (MZ*MZ*MZ*MZ)* (SW*SW*SW*SW)*( (mHsm*mHsm*mHsm*mHsm) + \
 
   (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))));
}
double DT::HcHCwW(double cos_t, double s){
double t =  (mHc*mHc) + (-s + cos_t*sqrt(s - 4* (mHc*mHc))*sqrt(s - 4*\
 
   (MW*MW)))/2. +  (MW*MW);
double u = -s - t + mHc*mHc + mHc*mHc + MW*MW + MW*MW;
return -0.25*(gc175*gc20*(t - u)* (EL*EL)*(-12* (MW*MW*MW*MW) +  (s*s)))/(s*\
 
   (MW*MW*MW*MW)* (SW*SW)) - (gc177*gc188* (EL*EL)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2))*(s*(s + t - u)*(-u +  (mHc*mHc)) - 2*(s + 3*t + u + 4*\
 
   (mHc*mHc))* (MW*MW*MW*MW) + 8* (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(2*t*(t - u)\
 
   + 3*s*(t + u) - 2*(3*s + t - u)* (mHc*mHc) +  (s*s))))/(4.*(RR1x1 +\
 
   RR1x2)*(-u +  (mH1*mH1))* (MW*MW*MW*MW)* (SW*SW)) - (gc179*gc190*\
 
   (EL*EL)*( (RR2x1*RR2x1) +  (RR2x2*RR2x2))*(s*(s + t - u)*(-u +  (mHc*mHc))\
 
   - 2*(s + 3*t + u + 4* (mHc*mHc))* (MW*MW*MW*MW) + 8* (MW*MW*MW*MW*MW*MW) +\
 
    (MW*MW)*(2*t*(t - u) + 3*s*(t + u) - 2*(3*s + t - u)* (mHc*mHc) + \
 
   (s*s))))/(4.*(RR2x1 + RR2x2)*(-u +  (mH2*mH2))* (MW*MW*MW*MW)* (SW*SW)) -\
 
   (gc181*gc192* (EL*EL)*( (RR3x1*RR3x1) +  (RR3x2*RR3x2))*(s*(s + t - u)*(-u\
 
   +  (mHc*mHc)) - 2*(s + 3*t + u + 4* (mHc*mHc))* (MW*MW*MW*MW) + 8*\
 
   (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(2*t*(t - u) + 3*s*(t + u) - 2*(3*s + t -\
 
   u)* (mHc*mHc) +  (s*s))))/(4.*(RR3x1 + RR3x2)*(-u +  (mH3*mH3))*\
 
   (MW*MW*MW*MW)* (SW*SW)) + ( (EL*EL*EL*EL)*(-4*s* (MW*MW) + 12*\
 
   (MW*MW*MW*MW) +  (s*s)))/(16.* (MW*MW*MW*MW)* (SW*SW*SW*SW)) + (\
 
   (gc175*gc175)* (gc20*gc20)*( (s*s)* ((t - u)*(t - u)) - 4*s* (MW*MW)*(8*s*\
 
   (mHc*mHc) - 2* (s*s) +  ((t - u)*(t - u))) + 4* (MW*MW*MW*MW)*(32*s*\
 
   (mHc*mHc) - 8* (s*s) + 3* ((t - u)*(t - u)))))/(4.* (MW*MW*MW*MW)* (s*s))\
 
   - (gc177*gc179*gc188*gc190*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(\
 
   (RR2x1*RR2x1) +  (RR2x2*RR2x2))*(-16* (mHc*mHc)* (MW*MW) +  ((s + t -\
 
   u)*(s + t - u)))*( (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(u +  (MW*MW)) +  ((\
 
   (MW*MW) - u)*( (MW*MW) - u))))/(2.*(RR1x1 + RR1x2)*(RR2x1 + RR2x2)*(-u + \
 
   (mH1*mH1))*(u -  (mH2*mH2))* (MW*MW*MW*MW)) - (gc177*gc181*gc188*gc192*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2))*( (RR3x1*RR3x1) +  (RR3x2*RR3x2))*(-16*\
 
   (mHc*mHc)* (MW*MW) +  ((s + t - u)*(s + t - u)))*( (mHc*mHc*mHc*mHc) - 2*\
 
   (mHc*mHc)*(u +  (MW*MW)) +  (( (MW*MW) - u)*( (MW*MW) - u))))/(2.*(RR1x1 +\
 
   RR1x2)*(RR3x1 + RR3x2)*(-u +  (mH1*mH1))*(u -  (mH3*mH3))* (MW*MW*MW*MW))\
 
   - (gc179*gc181*gc190*gc192*( (RR2x1*RR2x1) +  (RR2x2*RR2x2))*(\
 
   (RR3x1*RR3x1) +  (RR3x2*RR3x2))*(-16* (mHc*mHc)* (MW*MW) +  ((s + t -\
 
   u)*(s + t - u)))*( (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(u +  (MW*MW)) +  ((\
 
   (MW*MW) - u)*( (MW*MW) - u))))/(2.*(RR2x1 + RR2x2)*(RR3x1 + RR3x2)*(-u + \
 
   (mH2*mH2))*(u -  (mH3*mH3))* (MW*MW*MW*MW)) + (gc175*gc177*gc188*gc20*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(s*(t - u)*(s + t - u)*(-u +  (mHc*mHc)) +\
 
   8*(-2*s - t + u + 8* (mHc*mHc))* (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(-16*s*\
 
   (mHc*mHc*mHc*mHc) + (3*t - 7*u)* (s*s) + 2* (s*s*s) + 2*u* ((t - u)*(t -\
 
   u)) - 2* (mHc*mHc)*(s*(5*t - 13*u) + 2* (s*s) +  ((t - u)*(t - u))) + s*(\
 
   (t*t) -  (u*u))) + 2* (MW*MW*MW*MW)*(2*t*u + s*(t + 7*u) - 4*(3*t + 5*u)*\
 
   (mHc*mHc) + 32* (mHc*mHc*mHc*mHc) - 2* (s*s) +  (t*t) - 3*\
 
   (u*u))))/(2.*(RR1x1 + RR1x2)*s*(-u +  (mH1*mH1))* (MW*MW*MW*MW)) +\
 
   (gc175*gc179*gc190*gc20*( (RR2x1*RR2x1) +  (RR2x2*RR2x2))*(s*(t - u)*(s +\
 
   t - u)*(-u +  (mHc*mHc)) + 8*(-2*s - t + u + 8* (mHc*mHc))*\
 
   (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(-16*s* (mHc*mHc*mHc*mHc) + (3*t - 7*u)*\
 
   (s*s) + 2* (s*s*s) + 2*u* ((t - u)*(t - u)) - 2* (mHc*mHc)*(s*(5*t - 13*u)\
 
   + 2* (s*s) +  ((t - u)*(t - u))) + s*( (t*t) -  (u*u))) + 2*\
 
   (MW*MW*MW*MW)*(2*t*u + s*(t + 7*u) - 4*(3*t + 5*u)* (mHc*mHc) + 32*\
 
   (mHc*mHc*mHc*mHc) - 2* (s*s) +  (t*t) - 3* (u*u))))/(2.*(RR2x1 +\
 
   RR2x2)*s*(-u +  (mH2*mH2))* (MW*MW*MW*MW)) + (gc175*gc181*gc192*gc20*(\
 
   (RR3x1*RR3x1) +  (RR3x2*RR3x2))*(s*(t - u)*(s + t - u)*(-u +  (mHc*mHc)) +\
 
   8*(-2*s - t + u + 8* (mHc*mHc))* (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(-16*s*\
 
   (mHc*mHc*mHc*mHc) + (3*t - 7*u)* (s*s) + 2* (s*s*s) + 2*u* ((t - u)*(t -\
 
   u)) - 2* (mHc*mHc)*(s*(5*t - 13*u) + 2* (s*s) +  ((t - u)*(t - u))) + s*(\
 
   (t*t) -  (u*u))) + 2* (MW*MW*MW*MW)*(2*t*u + s*(t + 7*u) - 4*(3*t + 5*u)*\
 
   (mHc*mHc) + 32* (mHc*mHc*mHc*mHc) - 2* (s*s) +  (t*t) - 3*\
 
   (u*u))))/(2.*(RR3x1 + RR3x2)*s*(-u +  (mH3*mH3))* (MW*MW*MW*MW)) +\
 
   (gc175*gc20*L3*(t - u)* (EL*EL)*(-s +  (mHsm*mHsm))*(-12* (MW*MW*MW*MW) + \
 
   (s*s))* (v*v))/(4.*s* (MW*MW*MW*MW)* (SW*SW)*( (mHsm*mHsm*mHsm*mHsm) + \
 
   (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + (gc177*gc188*L3*\
 
   (EL*EL)*(-s +  (mHsm*mHsm))*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(s*(s + t -\
 
   u)*(-u +  (mHc*mHc)) - 2*(s + 3*t + u + 4* (mHc*mHc))* (MW*MW*MW*MW) + 8*\
 
   (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(2*t*(t - u) + 3*s*(t + u) - 2*(3*s + t -\
 
   u)* (mHc*mHc) +  (s*s)))* (v*v))/(4.*(RR1x1 + RR1x2)*(-u +  (mH1*mH1))*\
 
   (MW*MW*MW*MW)* (SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + (gc179*gc190*L3* (EL*EL)*(-s + \
 
   (mHsm*mHsm))*( (RR2x1*RR2x1) +  (RR2x2*RR2x2))*(s*(s + t - u)*(-u + \
 
   (mHc*mHc)) - 2*(s + 3*t + u + 4* (mHc*mHc))* (MW*MW*MW*MW) + 8*\
 
   (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(2*t*(t - u) + 3*s*(t + u) - 2*(3*s + t -\
 
   u)* (mHc*mHc) +  (s*s)))* (v*v))/(4.*(RR2x1 + RR2x2)*(-u +  (mH2*mH2))*\
 
   (MW*MW*MW*MW)* (SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + (gc181*gc192*L3* (EL*EL)*(-s + \
 
   (mHsm*mHsm))*( (RR3x1*RR3x1) +  (RR3x2*RR3x2))*(s*(s + t - u)*(-u + \
 
   (mHc*mHc)) - 2*(s + 3*t + u + 4* (mHc*mHc))* (MW*MW*MW*MW) + 8*\
 
   (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(2*t*(t - u) + 3*s*(t + u) - 2*(3*s + t -\
 
   u)* (mHc*mHc) +  (s*s)))* (v*v))/(4.*(RR3x1 + RR3x2)*(-u +  (mH3*mH3))*\
 
   (MW*MW*MW*MW)* (SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) - (L3* (EL*EL*EL*EL)*(-s + \
 
   (mHsm*mHsm))*(-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s))* (v*v))/(8.*\
 
   (MW*MW*MW*MW)* (SW*SW*SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + ( (EL*EL*EL*EL)* (L3*L3)*(-4*s*\
 
   (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s))* (v*v*v*v))/(16.* (MW*MW*MW*MW)*\
 
   (SW*SW*SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))) + (gc205*gc211*(t - u)* (EL*EL)*(-s +  (MZ*MZ))*(-12*\
 
   (MW*MW*MW*MW) +  (s*s)))/(4.* (MW*MW*MW*MW)* (SW*SW)*( (MZ*MZ*MZ*MZ) + \
 
   (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + ( (gc205*gc205)* (gc211*gc211)*(\
 
   (s*s)* ((t - u)*(t - u)) - 4*s* (MW*MW)*(8*s* (mHc*mHc) - 2* (s*s) +  ((t\
 
   - u)*(t - u))) + 4* (MW*MW*MW*MW)*(32*s* (mHc*mHc) - 8* (s*s) + 3* ((t -\
 
   u)*(t - u)))))/(4.* (MW*MW*MW*MW)*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (gc175*gc20*gc205*gc211*(-s +  (MZ*MZ))*(\
 
   (s*s)* ((t - u)*(t - u)) - 4*s* (MW*MW)*(8*s* (mHc*mHc) - 2* (s*s) +  ((t\
 
   - u)*(t - u))) + 4* (MW*MW*MW*MW)*(32*s* (mHc*mHc) - 8* (s*s) + 3* ((t -\
 
   u)*(t - u)))))/(2.*s* (MW*MW*MW*MW)*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (gc177*gc188*gc205*gc211*(-s +  (MZ*MZ))*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(s*(t - u)*(s + t - u)*(-u +  (mHc*mHc)) +\
 
   8*(-2*s - t + u + 8* (mHc*mHc))* (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(-16*s*\
 
   (mHc*mHc*mHc*mHc) + (3*t - 7*u)* (s*s) + 2* (s*s*s) + 2*u* ((t - u)*(t -\
 
   u)) - 2* (mHc*mHc)*(s*(5*t - 13*u) + 2* (s*s) +  ((t - u)*(t - u))) + s*(\
 
   (t*t) -  (u*u))) + 2* (MW*MW*MW*MW)*(2*t*u + s*(t + 7*u) - 4*(3*t + 5*u)*\
 
   (mHc*mHc) + 32* (mHc*mHc*mHc*mHc) - 2* (s*s) +  (t*t) - 3*\
 
   (u*u))))/(2.*(RR1x1 + RR1x2)*(-u +  (mH1*mH1))* (MW*MW*MW*MW)*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) -\
 
   (gc179*gc190*gc205*gc211*(-s +  (MZ*MZ))*( (RR2x1*RR2x1) + \
 
   (RR2x2*RR2x2))*(s*(t - u)*(s + t - u)*(-u +  (mHc*mHc)) + 8*(-2*s - t + u\
 
   + 8* (mHc*mHc))* (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(-16*s* (mHc*mHc*mHc*mHc)\
 
   + (3*t - 7*u)* (s*s) + 2* (s*s*s) + 2*u* ((t - u)*(t - u)) - 2*\
 
   (mHc*mHc)*(s*(5*t - 13*u) + 2* (s*s) +  ((t - u)*(t - u))) + s*( (t*t) - \
 
   (u*u))) + 2* (MW*MW*MW*MW)*(2*t*u + s*(t + 7*u) - 4*(3*t + 5*u)* (mHc*mHc)\
 
   + 32* (mHc*mHc*mHc*mHc) - 2* (s*s) +  (t*t) - 3* (u*u))))/(2.*(RR2x1 +\
 
   RR2x2)*(-u +  (mH2*mH2))* (MW*MW*MW*MW)*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (gc181*gc192*gc205*gc211*(-s +  (MZ*MZ))*(\
 
   (RR3x1*RR3x1) +  (RR3x2*RR3x2))*(s*(t - u)*(s + t - u)*(-u +  (mHc*mHc)) +\
 
   8*(-2*s - t + u + 8* (mHc*mHc))* (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(-16*s*\
 
   (mHc*mHc*mHc*mHc) + (3*t - 7*u)* (s*s) + 2* (s*s*s) + 2*u* ((t - u)*(t -\
 
   u)) - 2* (mHc*mHc)*(s*(5*t - 13*u) + 2* (s*s) +  ((t - u)*(t - u))) + s*(\
 
   (t*t) -  (u*u))) + 2* (MW*MW*MW*MW)*(2*t*u + s*(t + 7*u) - 4*(3*t + 5*u)*\
 
   (mHc*mHc) + 32* (mHc*mHc*mHc*mHc) - 2* (s*s) +  (t*t) - 3*\
 
   (u*u))))/(2.*(RR3x1 + RR3x2)*(-u +  (mH3*mH3))* (MW*MW*MW*MW)*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (gc205*gc211*L3*(t\
 
   - u)* (EL*EL)*(mHsm*MZ*WHsm*WZ + s*(s -  (MZ*MZ)) +  (mHsm*mHsm)*(-s + \
 
   (MZ*MZ)))*(-12* (MW*MW*MW*MW) +  (s*s))* (v*v))/(4.* (MW*MW*MW*MW)*\
 
   (SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (\
 
   (gc177*gc177)* (gc188*gc188)*(-16* (mHc*mHc)* (MW*MW) +  ((s + t - u)*(s +\
 
   t - u)))*( (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(u +  (MW*MW)) +  (( (MW*MW) -\
 
   u)*( (MW*MW) - u)))* (( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2))))/(4.* (MW*MW*MW*MW)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))* ((\
 
   (mH1*mH1) - u)*( (mH1*mH1) - u))) + ( (gc179*gc179)* (gc190*gc190)*(-16*\
 
   (mHc*mHc)* (MW*MW) +  ((s + t - u)*(s + t - u)))*( (mHc*mHc*mHc*mHc) - 2*\
 
   (mHc*mHc)*(u +  (MW*MW)) +  (( (MW*MW) - u)*( (MW*MW) - u)))* ((\
 
   (RR2x1*RR2x1) +  (RR2x2*RR2x2))*( (RR2x1*RR2x1) +  (RR2x2*RR2x2))))/(4.*\
 
   (MW*MW*MW*MW)* ((RR2x1 + RR2x2)*(RR2x1 + RR2x2))* (( (mH2*mH2) - u)*(\
 
   (mH2*mH2) - u))) + ( (gc181*gc181)* (gc192*gc192)*(-16* (mHc*mHc)* (MW*MW)\
 
   +  ((s + t - u)*(s + t - u)))*( (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(u + \
 
   (MW*MW)) +  (( (MW*MW) - u)*( (MW*MW) - u)))* (( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))*( (RR3x1*RR3x1) +  (RR3x2*RR3x2))))/(4.* (MW*MW*MW*MW)*\
 
   ((RR3x1 + RR3x2)*(RR3x1 + RR3x2))* (( (mH3*mH3) - u)*( (mH3*mH3) - u)));
}
double DT::HcHCVEve(double cos_t, double s){
double t =  (mHc*mHc) + (-s + cos_t*sqrt(s - 4* (mHc*mHc))*sqrt(s - 4*\
 
   (Mnue*Mnue)))/2. +  (Mnue*Mnue);
double u = -s - t + mHc*mHc + mHc*mHc + Mnue*Mnue + Mnue*Mnue;
return ( (gc211*gc211)* (gc282*gc282)*(2*t*u - 2*s* (Mnue*Mnue) + \
 
   (mHc*mHc)*(-4*s + 8* (Mnue*Mnue)) +  (s*s) -  (t*t) -  (u*u)))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::HcHCVMvm(double cos_t, double s){
double t =  (mHc*mHc) + (-s + cos_t*sqrt(s - 4* (mHc*mHc))*sqrt(s - 4*\
 
   (Mnum*Mnum)))/2. +  (Mnum*Mnum);
double u = -s - t + mHc*mHc + mHc*mHc + Mnum*Mnum + Mnum*Mnum;
return ( (gc211*gc211)* (gc283*gc283)*(2*t*u - 2*s* (Mnum*Mnum) + \
 
   (mHc*mHc)*(-4*s + 8* (Mnum*Mnum)) +  (s*s) -  (t*t) -  (u*u)))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::HcHCVTvt(double cos_t, double s){
double t =  (mHc*mHc) + (-s + cos_t*sqrt(s - 4* (mHc*mHc))*sqrt(s - 4*\
 
   (Mnut*Mnut)))/2. +  (Mnut*Mnut);
double u = -s - t + mHc*mHc + mHc*mHc + Mnut*Mnut + Mnut*Mnut;
return ( (gc211*gc211)* (gc284*gc284)*(2*t*u - 2*s* (Mnut*Mnut) + \
 
   (mHc*mHc)*(-4*s + 8* (Mnut*Mnut)) +  (s*s) -  (t*t) -  (u*u)))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::HcHCEe(double cos_t, double s){
double t =  (Me*Me) + (-s + cos_t*sqrt(s - 4* (Me*Me))*sqrt(s - 4*\
 
   (mHc*mHc)))/2. +  (mHc*mHc);
double u = -s - t + mHc*mHc + mHc*mHc + Me*Me + Me*Me;
return (-2* (gc20*gc20)* (gc243*gc243)*(4*s* (mHc*mHc) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (8*gc20*gc243*gc63*L3*Me*(t - u)*v*(-s + \
 
   (mHsm*mHsm)))/(s*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))) + (2* (gc63*gc63)* (L3*L3)*(s - 4* (Me*Me))* (v*v))/(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) +\
 
   (2*gc20*gc211*gc243*(gc276L + gc276R)*(-s +  (MZ*MZ))*(4*s* (mHc*mHc) - \
 
   (s*s) +  ((t - u)*(t - u))))/(s*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s\
 
   +  (WZ*WZ)))) + ( (gc211*gc211)*(4*gc276L*gc276R* (Me*Me)*(s - 4*\
 
   (mHc*mHc)) +  (gc276L*gc276L)*(2*t*u - 4*s* (mHc*mHc) +  (Me*Me)*(-2*s +\
 
   8* (mHc*mHc)) +  (s*s) -  (t*t) -  (u*u)) +  (gc276R*gc276R)*(2*t*u - 4*s*\
 
   (mHc*mHc) +  (Me*Me)*(-2*s + 8* (mHc*mHc)) +  (s*s) -  (t*t) -  (u*u))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) + (4*gc211*(gc276L +\
 
   gc276R)*gc63*L3*Me*(t - u)*v*(mHsm*MZ*WHsm*WZ + s*(s -  (MZ*MZ)) + \
 
   (mHsm*mHsm)*(-s +  (MZ*MZ))))/(( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::HcHCMm(double cos_t, double s){
double t =  (mHc*mHc) + (-s + cos_t*sqrt(s - 4* (mHc*mHc))*sqrt(s - 4*\
 
   (MM*MM)))/2. +  (MM*MM);
double u = -s - t + mHc*mHc + mHc*mHc + MM*MM + MM*MM;
return (-2* (gc20*gc20)* (gc244*gc244)*(4*s* (mHc*mHc) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (8*gc20*gc244*gc65*L3*MM*(t - u)*v*(-s + \
 
   (mHsm*mHsm)))/(s*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))) + (2* (gc65*gc65)* (L3*L3)*(s - 4* (MM*MM))* (v*v))/(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) -\
 
   (2*gc20*gc211*gc244*(gc277L + gc277R)*(-s +  (MZ*MZ))*(-4*s* (mHc*mHc) + \
 
   (s*s) -  ((t - u)*(t - u))))/(s*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s\
 
   +  (WZ*WZ)))) - ( (gc211*gc211)*(4*gc277L*gc277R*(-s + 4* (mHc*mHc))*\
 
   (MM*MM) - 2*( (gc277L*gc277L) +  (gc277R*gc277R))*(-s + 4* (mHc*mHc))*\
 
   (MM*MM) +  (gc277L*gc277L)*(4*s* (mHc*mHc) -  (s*s) +  ((t - u)*(t - u)))\
 
   +  (gc277R*gc277R)*(4*s* (mHc*mHc) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) + (4*gc211*(gc277L +\
 
   gc277R)*gc65*L3*MM*(t - u)*v*(mHsm*MZ*WHsm*WZ + s*(s -  (MZ*MZ)) + \
 
   (mHsm*mHsm)*(-s +  (MZ*MZ))))/(( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::HcHCTAta(double cos_t, double s){
double t =  (mHc*mHc) + (-s + cos_t*sqrt(s - 4* (mHc*mHc))*sqrt(s - 4*\
 
   (MTA*MTA)))/2. +  (MTA*MTA);
double u = -s - t + mHc*mHc + mHc*mHc + MTA*MTA + MTA*MTA;
return (-2* (gc20*gc20)* (gc245*gc245)*(4*s* (mHc*mHc) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (8*gc20*gc245*gc67*L3*MTA*(t - u)*v*(-s + \
 
   (mHsm*mHsm)))/(s*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))) + (2* (gc67*gc67)* (L3*L3)*(s - 4* (MTA*MTA))* (v*v))/(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) +\
 
   (2*gc20*gc211*gc245*(gc278L + gc278R)*(-s +  (MZ*MZ))*(4*s* (mHc*mHc) - \
 
   (s*s) +  ((t - u)*(t - u))))/(s*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s\
 
   +  (WZ*WZ)))) + ( (gc211*gc211)*(4*gc278L*gc278R*(s - 4* (mHc*mHc))*\
 
   (MTA*MTA) +  (gc278L*gc278L)*(2*t*u - 2*s* (MTA*MTA) +  (mHc*mHc)*(-4*s +\
 
   8* (MTA*MTA)) +  (s*s) -  (t*t) -  (u*u)) +  (gc278R*gc278R)*(2*t*u - 2*s*\
 
   (MTA*MTA) +  (mHc*mHc)*(-4*s + 8* (MTA*MTA)) +  (s*s) -  (t*t) - \
 
   (u*u))))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) +\
 
   (4*gc211*(gc278L + gc278R)*gc67*L3*MTA*(t - u)*v*(mHsm*MZ*WHsm*WZ + s*(s -\
 
    (MZ*MZ)) +  (mHsm*mHsm)*(-s +  (MZ*MZ))))/(( (mHsm*mHsm*mHsm*mHsm) + \
 
   (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::HcHCUu(double cos_t, double s){
double t =  (mHc*mHc) + (-s + cos_t*sqrt(s - 4* (mHc*mHc))*sqrt(s - 4*\
 
   (MU*MU)))/2. +  (MU*MU);
double u = -s - t + mHc*mHc + mHc*mHc + MU*MU + MU*MU;
return (-6* (gc20*gc20)* (gc248*gc248)*(4*s* (mHc*mHc) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc20*gc248*gc85*L3*MU*(t - u)*v*(-s + \
 
   (mHsm*mHsm)))/(s*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))) + (6* (gc85*gc85)* (L3*L3)*(s - 4* (MU*MU))* (v*v))/(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) -\
 
   (6*gc20*gc211*gc248*(gc281L + gc281R)*(-s +  (MZ*MZ))*(-4*s* (mHc*mHc) + \
 
   (s*s) -  ((t - u)*(t - u))))/(s*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s\
 
   +  (WZ*WZ)))) - (3* (gc211*gc211)*(4*gc281L*gc281R*(-s + 4* (mHc*mHc))*\
 
   (MU*MU) - 2*( (gc281L*gc281L) +  (gc281R*gc281R))*(-s + 4* (mHc*mHc))*\
 
   (MU*MU) +  (gc281L*gc281L)*(4*s* (mHc*mHc) -  (s*s) +  ((t - u)*(t - u)))\
 
   +  (gc281R*gc281R)*(4*s* (mHc*mHc) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) + (12*gc211*(gc281L +\
 
   gc281R)*gc85*L3*MU*(t - u)*v*(mHsm*MZ*WHsm*WZ + s*(s -  (MZ*MZ)) + \
 
   (mHsm*mHsm)*(-s +  (MZ*MZ))))/(( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::HcHCCc(double cos_t, double s){
double t =  (MC*MC) + (-s + cos_t*sqrt(s - 4* (MC*MC))*sqrt(s - 4*\
 
   (mHc*mHc)))/2. +  (mHc*mHc);
double u = -s - t + mHc*mHc + mHc*mHc + MC*MC + MC*MC;
return (-6* (gc20*gc20)* (gc246*gc246)*(4*s* (mHc*mHc) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc20*gc246*gc81*L3*MC*(t - u)*v*(-s + \
 
   (mHsm*mHsm)))/(s*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))) + (6* (gc81*gc81)* (L3*L3)*(s - 4* (MC*MC))* (v*v))/(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) -\
 
   (6*gc20*gc211*gc246*(gc279L + gc279R)*(-s +  (MZ*MZ))*(-4*s* (mHc*mHc) + \
 
   (s*s) -  ((t - u)*(t - u))))/(s*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s\
 
   +  (WZ*WZ)))) - (3* (gc211*gc211)*(4*gc279L*gc279R* (MC*MC)*(-s + 4*\
 
   (mHc*mHc)) - 2*( (gc279L*gc279L) +  (gc279R*gc279R))* (MC*MC)*(-s + 4*\
 
   (mHc*mHc)) +  (gc279L*gc279L)*(4*s* (mHc*mHc) -  (s*s) +  ((t - u)*(t -\
 
   u))) +  (gc279R*gc279R)*(4*s* (mHc*mHc) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) + (12*gc211*(gc279L +\
 
   gc279R)*gc81*L3*MC*(t - u)*v*(mHsm*MZ*WHsm*WZ + s*(s -  (MZ*MZ)) + \
 
   (mHsm*mHsm)*(-s +  (MZ*MZ))))/(( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::HcHCTt(double cos_t, double s){
double t =  (mHc*mHc) + (-s + cos_t*sqrt(s - 4* (mHc*mHc))*sqrt(s - 4*\
 
   (MT*MT)))/2. +  (MT*MT);
double u = -s - t + mHc*mHc + mHc*mHc + MT*MT + MT*MT;
return (-6* (gc20*gc20)* (gc247*gc247)*(4*s* (mHc*mHc) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc20*gc247*gc83*L3*MT*(t - u)*v*(-s + \
 
   (mHsm*mHsm)))/(s*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))) + (6* (gc83*gc83)* (L3*L3)*(s - 4* (MT*MT))* (v*v))/(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) -\
 
   (6*gc20*gc211*gc247*(gc280L + gc280R)*(-s +  (MZ*MZ))*(-4*s* (mHc*mHc) + \
 
   (s*s) -  ((t - u)*(t - u))))/(s*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s\
 
   +  (WZ*WZ)))) - (3* (gc211*gc211)*(4*gc280L*gc280R*(-s + 4* (mHc*mHc))*\
 
   (MT*MT) - 2*( (gc280L*gc280L) +  (gc280R*gc280R))*(-s + 4* (mHc*mHc))*\
 
   (MT*MT) +  (gc280L*gc280L)*(4*s* (mHc*mHc) -  (s*s) +  ((t - u)*(t - u)))\
 
   +  (gc280R*gc280R)*(4*s* (mHc*mHc) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) + (12*gc211*(gc280L +\
 
   gc280R)*gc83*L3*MT*(t - u)*v*(mHsm*MZ*WHsm*WZ + s*(s -  (MZ*MZ)) + \
 
   (mHsm*mHsm)*(-s +  (MZ*MZ))))/(( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::HcHCDd(double cos_t, double s){
double t =  (MD*MD) + (-s + cos_t*sqrt(s - 4* (MD*MD))*sqrt(s - 4*\
 
   (mHc*mHc)))/2. +  (mHc*mHc);
double u = -s - t + mHc*mHc + mHc*mHc + MD*MD + MD*MD;
return (-6* (gc20*gc20)* (gc241*gc241)*(4*s* (mHc*mHc) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc20*gc241*gc50*L3*MD*(t - u)*v*(-s + \
 
   (mHsm*mHsm)))/(s*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))) + (6* (gc50*gc50)* (L3*L3)*(s - 4* (MD*MD))* (v*v))/(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) -\
 
   (6*gc20*gc211*gc241*(gc274L + gc274R)*(-s +  (MZ*MZ))*(-4*s* (mHc*mHc) + \
 
   (s*s) -  ((t - u)*(t - u))))/(s*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s\
 
   +  (WZ*WZ)))) - (3* (gc211*gc211)*(4*gc274L*gc274R* (MD*MD)*(-s + 4*\
 
   (mHc*mHc)) - 2*( (gc274L*gc274L) +  (gc274R*gc274R))* (MD*MD)*(-s + 4*\
 
   (mHc*mHc)) +  (gc274L*gc274L)*(4*s* (mHc*mHc) -  (s*s) +  ((t - u)*(t -\
 
   u))) +  (gc274R*gc274R)*(4*s* (mHc*mHc) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) + (12*gc211*(gc274L +\
 
   gc274R)*gc50*L3*MD*(t - u)*v*(mHsm*MZ*WHsm*WZ + s*(s -  (MZ*MZ)) + \
 
   (mHsm*mHsm)*(-s +  (MZ*MZ))))/(( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::HcHCSs(double cos_t, double s){
double t =  (mHc*mHc) + (-s + cos_t*sqrt(s - 4* (mHc*mHc))*sqrt(s - 4*\
 
   (MS*MS)))/2. +  (MS*MS);
double u = -s - t + mHc*mHc + mHc*mHc + MS*MS + MS*MS;
return (-6* (gc20*gc20)* (gc242*gc242)*(4*s* (mHc*mHc) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc20*gc242*gc52*L3*MS*(t - u)*v*(-s + \
 
   (mHsm*mHsm)))/(s*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))) + (6* (gc52*gc52)* (L3*L3)*(s - 4* (MS*MS))* (v*v))/(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) -\
 
   (6*gc20*gc211*gc242*(gc275L + gc275R)*(-s +  (MZ*MZ))*(-4*s* (mHc*mHc) + \
 
   (s*s) -  ((t - u)*(t - u))))/(s*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s\
 
   +  (WZ*WZ)))) - (3* (gc211*gc211)*(4*gc275L*gc275R*(-s + 4* (mHc*mHc))*\
 
   (MS*MS) - 2*( (gc275L*gc275L) +  (gc275R*gc275R))*(-s + 4* (mHc*mHc))*\
 
   (MS*MS) +  (gc275L*gc275L)*(4*s* (mHc*mHc) -  (s*s) +  ((t - u)*(t - u)))\
 
   +  (gc275R*gc275R)*(4*s* (mHc*mHc) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) + (12*gc211*(gc275L +\
 
   gc275R)*gc52*L3*MS*(t - u)*v*(mHsm*MZ*WHsm*WZ + s*(s -  (MZ*MZ)) + \
 
   (mHsm*mHsm)*(-s +  (MZ*MZ))))/(( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::HcHCBb(double cos_t, double s){
double t =  (MB*MB) + (-s + cos_t*sqrt(s - 4* (MB*MB))*sqrt(s - 4*\
 
   (mHc*mHc)))/2. +  (mHc*mHc);
double u = -s - t + mHc*mHc + mHc*mHc + MB*MB + MB*MB;
return (-6* (gc20*gc20)* (gc240*gc240)*(4*s* (mHc*mHc) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc20*gc240*gc48*L3*MB*(t - u)*v*(-s + \
 
   (mHsm*mHsm)))/(s*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))) + (6* (gc48*gc48)* (L3*L3)*(s - 4* (MB*MB))* (v*v))/(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) -\
 
   (6*gc20*gc211*gc240*(gc273L + gc273R)*(-s +  (MZ*MZ))*(-4*s* (mHc*mHc) + \
 
   (s*s) -  ((t - u)*(t - u))))/(s*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s\
 
   +  (WZ*WZ)))) - (3* (gc211*gc211)*(4*gc273L*gc273R* (MB*MB)*(-s + 4*\
 
   (mHc*mHc)) - 2*( (gc273L*gc273L) +  (gc273R*gc273R))* (MB*MB)*(-s + 4*\
 
   (mHc*mHc)) +  (gc273L*gc273L)*(4*s* (mHc*mHc) -  (s*s) +  ((t - u)*(t -\
 
   u))) +  (gc273R*gc273R)*(4*s* (mHc*mHc) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) + (12*gc211*(gc273L +\
 
   gc273R)*gc48*L3*MB*(t - u)*v*(mHsm*MZ*WHsm*WZ + s*(s -  (MZ*MZ)) + \
 
   (mHsm*mHsm)*(-s +  (MZ*MZ))))/(( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
