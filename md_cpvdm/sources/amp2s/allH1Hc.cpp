///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::H1HchW(const double &cos_t, const double &s){
double t = (s* (mHc*mHc) + s* (mHsm*mHsm) -  (mHc*mHc)* (mHsm*mHsm) + \
 
   (mH1*mH1)*(s +  (mHsm*mHsm) -  (MW*MW)) + s* (MW*MW) +  (mHc*mHc)* (MW*MW)\
 
   + cos_t*s*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mHc*mHc)) +  ((\
 
   (mHc*mHc) - s)*( (mHc*mHc) - s)))/s)*sqrt(( (mHsm*mHsm*mHsm*mHsm) - 2*\
 
   (mHsm*mHsm)*(s +  (MW*MW)) +  (( (MW*MW) - s)*( (MW*MW) - s)))/s) - \
 
   (s*s))/(2.*s);
double u = -s - t + mH1*mH1 + mHc*mHc + mHsm*mHsm + MW*MW;
return (gc188*gc190*L3*(RR1x1*RR2x1 + RR1x2*RR2x2)*v*(-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*((-t +  (mHc*mHc))*(-s - t + u -  (mH1*mH1) +  (mHc*mHc) + \
 
   (mHsm*mHsm)) - (-s + 2*t + u + 3* (mH1*mH1) + 2* (mHc*mHc) - 3*\
 
   (mHsm*mHsm))* (MW*MW) +  (MW*MW*MW*MW)))/((RR1x1 + RR1x2)*(RR2x1 +\
 
   RR2x2)*(-t +  (mH2*mH2))*(-u +  (mHc*mHc))* (MW*MW)) +\
 
   (gc188*gc192*L3*(RR1x1*RR3x1 + RR1x2*RR3x2)*v*(-(RR1x2*RR3x3*Timag) +\
 
   RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*((-t +  (mHc*mHc))*(-s - t + u -  (mH1*mH1) +  (mHc*mHc) + \
 
   (mHsm*mHsm)) - (-s + 2*t + u + 3* (mH1*mH1) + 2* (mHc*mHc) - 3*\
 
   (mHsm*mHsm))* (MW*MW) +  (MW*MW*MW*MW)))/((RR1x1 + RR1x2)*(RR3x1 +\
 
   RR3x2)*(-t +  (mH3*mH3))*(-u +  (mHc*mHc))* (MW*MW)) + (L3*v*\
 
   (gc188*gc188)*((-t +  (mHc*mHc))*(-s - t + u -  (mH1*mH1) +  (mHc*mHc) + \
 
   (mHsm*mHsm)) - (-s + 2*t + u + 3* (mH1*mH1) + 2* (mHc*mHc) - 3*\
 
   (mHsm*mHsm))* (MW*MW) +  (MW*MW*MW*MW))*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/((-t +  (mH1*mH1))*(-u +  (mHc*mHc))* (MW*MW)* ((RR1x1 +\
 
   RR1x2)*(RR1x1 + RR1x2))) - (2*gc190*gc192*(RR2x1*RR3x1 +\
 
   RR2x2*RR3x2)*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v +\
 
   RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*( (mHc*mHc*mHc*mHc) -\
 
   2* (mHc*mHc)*(t +  (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t))))/((RR2x1 +\
 
   RR2x2)*(RR3x1 + RR3x2)*(-t +  (mH2*mH2))*(t -  (mH3*mH3))* (MW*MW)) -\
 
   (2*gc188*gc190*(RR1x1*RR2x1 + RR1x2*RR2x2)*(-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3))*( (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(t +  (MW*MW)) +  ((\
 
   (MW*MW) - t)*( (MW*MW) - t))))/((RR1x1 + RR1x2)*(RR2x1 + RR2x2)*(-t + \
 
   (mH1*mH1))*(t -  (mH2*mH2))* (MW*MW)) - (2*gc188*gc192*(RR1x1*RR3x1 +\
 
   RR1x2*RR3x2)*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3))*( (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(t +  (MW*MW)) +  ((\
 
   (MW*MW) - t)*( (MW*MW) - t))))/((RR1x1 + RR1x2)*(RR3x1 + RR3x2)*(-t + \
 
   (mH1*mH1))*(t -  (mH3*mH3))* (MW*MW)) + ( (gc188*gc188)* (L3*L3)*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(-2*(-s - t + u + 7* (mH1*mH1) + \
 
   (mHc*mHc) +  (mHsm*mHsm))* (MW*MW) +  (MW*MW*MW*MW) +  (( (mH1*mH1) - \
 
   (mHc*mHc) -  (mHsm*mHsm) + s + t - u)*( (mH1*mH1) -  (mHc*mHc) - \
 
   (mHsm*mHsm) + s + t - u)))* (v*v))/(4.* (MW*MW)* ((RR1x1 + RR1x2)*(RR1x1 +\
 
   RR1x2))* (( (mHc*mHc) - u)*( (mHc*mHc) - u))) + ( (gc188*gc188)*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2))*( (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(t + \
 
   (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))* ((-2*RR1x2*RR1x3*Timag +\
 
   2*RR1x1*RR1x3*Treal + (L3 + L4 + L5)* (RR1x1*RR1x1)*v + (L3 + L4 - L5)*\
 
   (RR1x2*RR1x2)*v + L7* (RR1x3*RR1x3)*v)*(-2*RR1x2*RR1x3*Timag +\
 
   2*RR1x1*RR1x3*Treal + (L3 + L4 + L5)* (RR1x1*RR1x1)*v + (L3 + L4 - L5)*\
 
   (RR1x2*RR1x2)*v + L7* (RR1x3*RR1x3)*v)))/( (MW*MW)* ((RR1x1 +\
 
   RR1x2)*(RR1x1 + RR1x2))* (( (mH1*mH1) - t)*( (mH1*mH1) - t))) + (\
 
   (gc190*gc190)*( (RR2x1*RR2x1) +  (RR2x2*RR2x2))*( (mHc*mHc*mHc*mHc) - 2*\
 
   (mHc*mHc)*(t +  (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))*\
 
   ((-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v\
 
   + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))))/( (MW*MW)* ((RR2x1 + RR2x2)*(RR2x1 + RR2x2))*\
 
   (( (mH2*mH2) - t)*( (mH2*mH2) - t))) + ( (gc192*gc192)*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))*( (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(t +  (MW*MW)) +  ((\
 
   (MW*MW) - t)*( (MW*MW) - t)))* ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal\
 
   + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v +\
 
   RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) +\
 
   RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))))/(\
 
   (MW*MW)* ((RR3x1 + RR3x2)*(RR3x1 + RR3x2))* (( (mH3*mH3) - t)*( (mH3*mH3)\
 
   - t))) + (gc190*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(2*gc186*(RR1x1 +\
 
   RR1x2)*(s*(2*RR1x3*(RR2x2*Timag - RR2x1*Treal) - (L4*RR1x1*RR2x1 +\
 
   L5*RR1x1*RR2x1 + L4*RR1x2*RR2x2 - L5*RR1x2*RR2x2)*v) -\
 
   MW*(2*RR1x3*(RR2x1*Timag + RR2x2*Treal) + (-(L4*RR1x2*RR2x1) +\
 
   L5*RR1x2*RR2x1 + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v)*WW +\
 
   (RR1x3*(-2*RR2x2*Timag + 2*RR2x1*Treal) + (L4*RR1x1*RR2x1 + L5*RR1x1*RR2x1\
 
   + L4*RR1x2*RR2x2 - L5*RR1x2*RR2x2)*v)* (MW*MW))* (MW*MW*MW*MW)* (SW*SW) +\
 
   (-t +  (mHc*mHc))*(-(gc188*v* (EL*EL)*(t - u +  (mH1*mH1) - \
 
   (mHc*mHc))*(-((RR1x1*RR2x1 + RR1x2*RR2x2)*s) + MW*(RR1x2*RR2x1 -\
 
   RR1x1*RR2x2)*WW + (RR1x1*RR2x1 + RR1x2*RR2x2)* (MW*MW))) - 2*gc186*(RR1x1\
 
   + RR1x2)*(-s +  (mHsm*mHsm))*(s*(RR1x3*(-2*RR2x2*Timag + 2*RR2x1*Treal) +\
 
   (L4*RR1x1*RR2x1 + L5*RR1x1*RR2x1 + L4*RR1x2*RR2x2 - L5*RR1x2*RR2x2)*v) +\
 
   MW*(2*RR1x3*(RR2x1*Timag + RR2x2*Treal) + (-(L4*RR1x2*RR2x1) +\
 
   L5*RR1x2*RR2x1 + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v)*WW +\
 
   (2*RR1x3*(RR2x2*Timag - RR2x1*Treal) - (L4*RR1x1*RR2x1 + L5*RR1x1*RR2x1 +\
 
   L4*RR1x2*RR2x2 - L5*RR1x2*RR2x2)*v)* (MW*MW))* (SW*SW)) + \
 
   (MW*MW)*(gc188*v* (EL*EL)*(-2*s + t - u + 3* (mH1*mH1) + 5*\
 
   (mHc*mHc))*((RR1x1*RR2x1 + RR1x2*RR2x2)*s + MW*(-(RR1x2*RR2x1*WW) +\
 
   RR1x1*RR2x2*WW) - (RR1x1*RR2x1 + RR1x2*RR2x2)* (MW*MW)) - 2*gc186*(RR1x1 +\
 
   RR1x2)*(-s - t - 2*u + 3* (mHc*mHc) + 3*\
 
   (mHsm*mHsm))*(s*(RR1x3*(-2*RR2x2*Timag + 2*RR2x1*Treal) + (L4*RR1x1*RR2x1\
 
   + L5*RR1x1*RR2x1 + L4*RR1x2*RR2x2 - L5*RR1x2*RR2x2)*v) +\
 
   MW*(2*RR1x3*(RR2x1*Timag + RR2x2*Treal) + (-(L4*RR1x2*RR2x1) +\
 
   L5*RR1x2*RR2x1 + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v)*WW +\
 
   (2*RR1x3*(RR2x2*Timag - RR2x1*Treal) - (L4*RR1x1*RR2x1 + L5*RR1x1*RR2x1 +\
 
   L4*RR1x2*RR2x2 - L5*RR1x2*RR2x2)*v)* (MW*MW))* (SW*SW))))/(2.*(RR1x1 +\
 
   RR1x2)*(RR2x1 + RR2x2)*(-t +  (mH2*mH2))* (MW*MW)* (SW*SW)*( (MW*MW*MW*MW)\
 
   +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (gc192*(-(RR1x2*RR3x3*Timag) +\
 
   RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(2*gc186*(RR1x1 + RR1x2)*(s*(2*RR1x3*(RR3x2*Timag -\
 
   RR3x1*Treal) - (L4*RR1x1*RR3x1 + L5*RR1x1*RR3x1 + L4*RR1x2*RR3x2 -\
 
   L5*RR1x2*RR3x2)*v) - MW*(2*RR1x3*(RR3x1*Timag + RR3x2*Treal) +\
 
   (-(L4*RR1x2*RR3x1) + L5*RR1x2*RR3x1 + L4*RR1x1*RR3x2 +\
 
   L5*RR1x1*RR3x2)*v)*WW + (RR1x3*(-2*RR3x2*Timag + 2*RR3x1*Treal) +\
 
   (L4*RR1x1*RR3x1 + L5*RR1x1*RR3x1 + L4*RR1x2*RR3x2 - L5*RR1x2*RR3x2)*v)*\
 
   (MW*MW))* (MW*MW*MW*MW)* (SW*SW) + (-t +  (mHc*mHc))*(-(gc188*v*\
 
   (EL*EL)*(t - u +  (mH1*mH1) -  (mHc*mHc))*(-((RR1x1*RR3x1 +\
 
   RR1x2*RR3x2)*s) + MW*(RR1x2*RR3x1 - RR1x1*RR3x2)*WW + (RR1x1*RR3x1 +\
 
   RR1x2*RR3x2)* (MW*MW))) - 2*gc186*(RR1x1 + RR1x2)*(-s + \
 
   (mHsm*mHsm))*(s*(RR1x3*(-2*RR3x2*Timag + 2*RR3x1*Treal) + (L4*RR1x1*RR3x1\
 
   + L5*RR1x1*RR3x1 + L4*RR1x2*RR3x2 - L5*RR1x2*RR3x2)*v) +\
 
   MW*(2*RR1x3*(RR3x1*Timag + RR3x2*Treal) + (-(L4*RR1x2*RR3x1) +\
 
   L5*RR1x2*RR3x1 + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v)*WW +\
 
   (2*RR1x3*(RR3x2*Timag - RR3x1*Treal) - (L4*RR1x1*RR3x1 + L5*RR1x1*RR3x1 +\
 
   L4*RR1x2*RR3x2 - L5*RR1x2*RR3x2)*v)* (MW*MW))* (SW*SW)) + \
 
   (MW*MW)*(gc188*v* (EL*EL)*(-2*s + t - u + 3* (mH1*mH1) + 5*\
 
   (mHc*mHc))*((RR1x1*RR3x1 + RR1x2*RR3x2)*s + MW*(-(RR1x2*RR3x1*WW) +\
 
   RR1x1*RR3x2*WW) - (RR1x1*RR3x1 + RR1x2*RR3x2)* (MW*MW)) - 2*gc186*(RR1x1 +\
 
   RR1x2)*(-s - t - 2*u + 3* (mHc*mHc) + 3*\
 
   (mHsm*mHsm))*(s*(RR1x3*(-2*RR3x2*Timag + 2*RR3x1*Treal) + (L4*RR1x1*RR3x1\
 
   + L5*RR1x1*RR3x1 + L4*RR1x2*RR3x2 - L5*RR1x2*RR3x2)*v) +\
 
   MW*(2*RR1x3*(RR3x1*Timag + RR3x2*Treal) + (-(L4*RR1x2*RR3x1) +\
 
   L5*RR1x2*RR3x1 + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v)*WW +\
 
   (2*RR1x3*(RR3x2*Timag - RR3x1*Treal) - (L4*RR1x1*RR3x1 + L5*RR1x1*RR3x1 +\
 
   L4*RR1x2*RR3x2 - L5*RR1x2*RR3x2)*v)* (MW*MW))* (SW*SW))))/(2.*(RR1x1 +\
 
   RR1x2)*(RR3x1 + RR3x2)*(-t +  (mH3*mH3))* (MW*MW)* (SW*SW)*( (MW*MW*MW*MW)\
 
   +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (gc188*L3*v*(2*gc186*(RR1x1 +\
 
   RR1x2)* (MW*MW*MW*MW)*(-2*MW*(RR1x1*RR1x3*Timag + RR1x2*RR1x3*Treal +\
 
   L5*RR1x1*RR1x2*v)*WW - s*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal +\
 
   (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))* (SW*SW) - (s + t - u +  (mH1*mH1) - \
 
   (mHc*mHc) -  (mHsm*mHsm))*(-(gc188*v* (EL*EL)*(t - u +  (mH1*mH1) - \
 
   (mHc*mHc))*(-s +  (MW*MW))*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))) -\
 
   2*gc186*(RR1x1 + RR1x2)*(-s +  (mHsm*mHsm))*(2*MW*(RR1x1*RR1x3*Timag +\
 
   RR1x2*RR1x3*Treal + L5*RR1x1*RR1x2*v)*WW + s*(-2*RR1x2*RR1x3*Timag +\
 
   RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) - \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))* (SW*SW)) +  (MW*MW)*(gc188*v* (EL*EL)*(4*s\
 
   + t - u - 11* (mH1*mH1) - 5* (mHc*mHc))*(-s +  (MW*MW))*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) + 2*gc186*(RR1x1 + RR1x2)*(2*s - t + u + 3* (mH1*mH1) - 3*\
 
   (mHc*mHc) + 2* (mHsm*mHsm))*(2*MW*(RR1x1*RR1x3*Timag + RR1x2*RR1x3*Treal +\
 
   L5*RR1x1*RR1x2*v)*WW + s*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal +\
 
   (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) - \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))* (SW*SW))))/(4.*(-u +  (mHc*mHc))* (MW*MW)*\
 
   ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))* (SW*SW)*( (MW*MW*MW*MW) +  (s*s) + \
 
   (MW*MW)*(-2*s +  (WW*WW)))) + (gc188*(-2*RR1x2*RR1x3*Timag +\
 
   2*RR1x1*RR1x3*Treal + (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v*\
 
   (RR1x2*RR1x2) + L7*v* (RR1x3*RR1x3))*(2*gc186*(RR1x1 + RR1x2)*\
 
   (MW*MW*MW*MW)*(-2*MW*(RR1x1*RR1x3*Timag + RR1x2*RR1x3*Treal +\
 
   L5*RR1x1*RR1x2*v)*WW - s*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal +\
 
   (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))* (SW*SW) + (-t +  (mHc*mHc))*(-(gc188*v*\
 
   (EL*EL)*(t - u +  (mH1*mH1) -  (mHc*mHc))*(-s +  (MW*MW))*( (RR1x1*RR1x1)\
 
   +  (RR1x2*RR1x2))) - 2*gc186*(RR1x1 + RR1x2)*(-s + \
 
   (mHsm*mHsm))*(2*MW*(RR1x1*RR1x3*Timag + RR1x2*RR1x3*Treal +\
 
   L5*RR1x1*RR1x2*v)*WW + s*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal +\
 
   (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) - \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))* (SW*SW)) +  (MW*MW)*(gc188*v* (EL*EL)*(2*s\
 
   - t + u - 3* (mH1*mH1) - 5* (mHc*mHc))*(-s +  (MW*MW))*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) - 2*gc186*(RR1x1 + RR1x2)*(-s - t - 2*u + 3* (mHc*mHc) + 3*\
 
   (mHsm*mHsm))*(2*MW*(RR1x1*RR1x3*Timag + RR1x2*RR1x3*Treal +\
 
   L5*RR1x1*RR1x2*v)*WW + s*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal +\
 
   (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) - \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))* (SW*SW))))/(2.*(-t +  (mH1*mH1))* (MW*MW)*\
 
   ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))* (SW*SW)*( (MW*MW*MW*MW) +  (s*s) + \
 
   (MW*MW)*(-2*s +  (WW*WW)))) + (-4*gc186*gc188*(RR1x1 + RR1x2)*v*\
 
   (EL*EL)*(t - u +  (mH1*mH1) -  (mHc*mHc))*(-s + \
 
   (mHsm*mHsm))*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 +\
 
   L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2))* (SW*SW) +  (EL*EL*EL*EL)*\
 
   (gc188*gc188)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))* (( (mH1*mH1) -  (mHc*mHc)\
 
   + t - u)*( (mH1*mH1) -  (mHc*mHc) + t - u))* (v*v) + 4* (gc186*gc186)*\
 
   (MW*MW*MW*MW)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*\
 
   (SW*SW*SW*SW)*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag +\
 
   L4*RR1x1*Treal + L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) + \
 
   (Treal*Treal)) + (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)))* (v*v)) + 4* (gc186*gc186)* ((RR1x1 + RR1x2)*(RR1x1 +\
 
   RR1x2))* (( (mHsm*mHsm) - s)*( (mHsm*mHsm) - s))*\
 
   (SW*SW*SW*SW)*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag +\
 
   L4*RR1x1*Treal + L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) + \
 
   (Treal*Treal)) + (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)))* (v*v)) - 4* (MW*MW)*(gc186*gc188*(RR1x1 + RR1x2)*v*\
 
   (EL*EL)*(-t + u + 3* (mH1*mH1) - 3* (mHc*mHc))*(-2*RR1x2*RR1x3*Timag +\
 
   RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2))*\
 
   (SW*SW) +  (EL*EL*EL*EL)* (gc188*gc188)*(-s + 2* (mH1*mH1) + 2*\
 
   (mHc*mHc))*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))* (v*v) + 2* (gc186*gc186)*(s\
 
   +  (mHsm*mHsm))* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*\
 
   (SW*SW*SW*SW)*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag +\
 
   L4*RR1x1*Treal + L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) + \
 
   (Treal*Treal)) + (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)))* (v*v))))/(16.* (MW*MW)* ((RR1x1 + RR1x2)*(RR1x1 +\
 
   RR1x2))* (SW*SW*SW*SW)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s + \
 
   (WW*WW))));
}
double DT::H1HcAW(const double &cos_t, const double &s){
double t = (s* (mHc*mHc) +  (mH1*mH1)*(s -  (MW*MW)) + s* (MW*MW) + \
 
   (mHc*mHc)* (MW*MW) + cos_t*s*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s + \
 
   (mHc*mHc)) +  (( (mHc*mHc) - s)*( (mHc*mHc) - s)))/s)*sqrt( (( (MW*MW) -\
 
   s)*( (MW*MW) - s))/s) -  (s*s))/(2.*s);
double u = -s - t + mH1*mH1 + mHc*mHc + 0*0 + MW*MW;
return -0.25*(gc188*gc20* (EL*EL)*((s + t - u +  (mH1*mH1) -  (mHc*mHc))*(-s\
 
   - 2*t + 2* (mHc*mHc)) + (3*(t + u) + 9* (mH1*mH1) +  (mHc*mHc))* (MW*MW) -\
 
   3* (MW*MW*MW*MW))*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)))/((RR1x1 +\
 
   RR1x2)*SW*(-u +  (mHc*mHc))* (MW*MW)) + (3* (EL*EL*EL*EL)*( (RR1x1*RR1x1)\
 
   +  (RR1x2*RR1x2)))/(4.* (SW*SW)) - ( (gc188*gc188)* (gc20*gc20)*(u + \
 
   (mHc*mHc))*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(-2*(-s - t + u + 7*\
 
   (mH1*mH1) +  (mHc*mHc))* (MW*MW) +  (MW*MW*MW*MW) +  (( (mH1*mH1) - \
 
   (mHc*mHc) + s + t - u)*( (mH1*mH1) -  (mHc*mHc) + s + t - u))))/(2.*\
 
   (MW*MW)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))* (( (mHc*mHc) - u)*( (mHc*mHc)\
 
   - u))) + ( (EL*EL)*(-(gc175*gc188*s*SW*(t - u +  (mH1*mH1) - \
 
   (mHc*mHc))*(-s +  (MW*MW))*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))) + \
 
   (MW*MW)*(gc175*gc188*SW*(11*(t - u) + 3* (mH1*mH1) - 3* (mHc*mHc))*(-s + \
 
   (MW*MW))*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)) - 3*(RR1x1 + RR1x2)*v*\
 
   (EL*EL)*(-2*MW*(RR1x1*RR1x3*Timag + RR1x2*RR1x3*Treal +\
 
   L5*RR1x1*RR1x2*v)*WW - s*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal +\
 
   (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2))))))/(4.*(RR1x1 + RR1x2)* (MW*MW)* (SW*SW)*(\
 
   (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (gc188*gc20*(\
 
   (MW*MW*MW*MW)*(20*gc175*gc188*SW*(2*s + t - u - 6* (mH1*mH1) - 2*\
 
   (mHc*mHc))*(-s +  (MW*MW))*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)) - 3*(RR1x1 +\
 
   RR1x2)*v* (EL*EL)*(-2*MW*(RR1x1*RR1x3*Timag + RR1x2*RR1x3*Treal +\
 
   L5*RR1x1*RR1x2*v)*WW - s*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal +\
 
   (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))) +  (MW*MW)*((RR1x1 + RR1x2)*v*\
 
   (EL*EL)*(3*(t + u) + 9* (mH1*mH1) +  (mHc*mHc))*(-2*MW*(RR1x1*RR1x3*Timag\
 
   + RR1x2*RR1x3*Treal + L5*RR1x1*RR1x2*v)*WW - s*(-2*RR1x2*RR1x3*Timag +\
 
   RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2))) - 4*gc175*gc188*SW*(-s +  (MW*MW))*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(6* (mH1*mH1*mH1*mH1) + (2*s - 8*t - 7*u)*\
 
   (mHc*mHc) +  (mH1*mH1)*(-14*s - 25*t - 8*u + 45* (mHc*mHc)) - 3*\
 
   (mHc*mHc*mHc*mHc) + 3*(t*u + 2*s*(t + u) +  (t*t) - 2* (u*u)))) + (s + t -\
 
   u +  (mH1*mH1) -  (mHc*mHc))*(-((RR1x1 + RR1x2)*v* (EL*EL)*(-s - 2*t + 2*\
 
   (mHc*mHc))*(2*MW*(RR1x1*RR1x3*Timag + RR1x2*RR1x3*Treal +\
 
   L5*RR1x1*RR1x2*v)*WW + s*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal +\
 
   (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) - \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))) + 4*gc175*gc188*SW*(-s +  (MW*MW))*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(-(s*t) + s*u - t*u + 3*(2*s + t)*\
 
   (mHc*mHc) +  (mH1*mH1)*(2*s - 2*t - u + 3* (mHc*mHc)) - 3*\
 
   (mHc*mHc*mHc*mHc) - 2* (s*s) +  (u*u)))))/(8.*SW*(-u +  (mHc*mHc))*\
 
   (MW*MW)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*( (MW*MW*MW*MW) +  (s*s) + \
 
   (MW*MW)*(-2*s +  (WW*WW)))) + (16* (gc175*gc175)* (gc188*gc188)*(-s + 2*\
 
   (mH1*mH1) + 2* (mHc*mHc))* (MW*MW*MW*MW)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2))* (SW*SW) + 2*gc175*gc188*s*SW*((RR1x1 + RR1x2)*v*\
 
   (EL*EL)*(t - u +  (mH1*mH1) -  (mHc*mHc))*(-2*RR1x2*RR1x3*Timag +\
 
   RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) +\
 
   4*gc175*gc188*SW*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(2*t*u + 2*\
 
   (mH1*mH1*mH1*mH1) + (-4*s - t + u)* (mHc*mHc) -  (mH1*mH1)*(4*s - t + u +\
 
   4* (mHc*mHc)) + 2* (mHc*mHc*mHc*mHc) + 2* (s*s) -  (t*t) -  (u*u))) + \
 
   (MW*MW)*(-2*gc175*gc188*(RR1x1 + RR1x2)*SW*v* (EL*EL)*(11*(t - u) + 3*\
 
   (mH1*mH1) - 3* (mHc*mHc))*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal +\
 
   (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) - 8* (gc175*gc175)*\
 
   (gc188*gc188)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))* (SW*SW)*(10*t*u + 10*\
 
   (mH1*mH1*mH1*mH1) + (-16*s + t - u)* (mHc*mHc) -  (mH1*mH1)*(16*s + t - u\
 
   + 20* (mHc*mHc)) + 10* (mHc*mHc*mHc*mHc) + 8* (s*s) - 5* (t*t) - 5* (u*u))\
 
   + 3* (EL*EL*EL*EL)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*\
 
   (v*v)*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag + L4*RR1x1*Treal +\
 
   L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) +  (Treal*Treal)) +\
 
   (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)))*\
 
   (v*v))))/(16.* (MW*MW)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))* (SW*SW)*(\
 
   (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H1HcZW(const double &cos_t, const double &s){
double t = (s* (mHc*mHc) + s* (MW*MW) +  (mHc*mHc)* (MW*MW) + s* (MZ*MZ) - \
 
   (mHc*mHc)* (MZ*MZ) +  (mH1*mH1)*(s -  (MW*MW) +  (MZ*MZ)) + cos_t*s*sqrt((\
 
   (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mHc*mHc)) +  (( (mHc*mHc) - s)*(\
 
   (mHc*mHc) - s)))/s)*sqrt(( (MW*MW*MW*MW) - 2* (MW*MW)*(s +  (MZ*MZ)) +  ((\
 
   (MZ*MZ) - s)*( (MZ*MZ) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mH1*mH1 + mHc*mHc + MZ*MZ + MW*MW;
return -0.25*(gc188*gc211* (EL*EL)*( (MW*MW*MW*MW)*(-u +  (mHc*mHc) + 3*\
 
   (MZ*MZ)) + (s + t - u +  (mH1*mH1) -  (mHc*mHc) -  (MZ*MZ))*(s*(-u + \
 
   (mHc*mHc)) + (s + 2*t + u - 3* (mHc*mHc))* (MZ*MZ) -  (MZ*MZ*MZ*MZ)) + \
 
   (MW*MW)*((-u +  (mHc*mHc))*(-2*s + t - u - 3* (mH1*mH1) + 3* (mHc*mHc)) -\
 
   (3*t + u + 9* (mH1*mH1) + 3* (mHc*mHc))* (MZ*MZ) + 4* (MZ*MZ*MZ*MZ)))*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2)))/(CW*(RR1x1 + RR1x2)*(-u +  (mHc*mHc))*\
 
   (MW*MW)* (MZ*MZ)) + ( (EL*EL*EL*EL)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(\
 
   (MW*MW*MW*MW) - 2* (MW*MW)*(s - 5* (MZ*MZ)) +  (( (MZ*MZ) - s)*( (MZ*MZ) -\
 
   s))))/(16.* (CW*CW)* (MW*MW)* (MZ*MZ)) -\
 
   (gc190*gc192*gc212*gc213*(RR2x1*RR3x1 + RR2x2*RR3x2)*( (mHc*mHc*mHc*mHc) -\
 
   2* (mHc*mHc)*(t +  (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))*(\
 
   (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(-s + t - u +  (mHc*mHc) +  (MW*MW) + 7*\
 
   (MZ*MZ)) +  (( (mHc*mHc) +  (MW*MW) -  (MZ*MZ) - s + t - u)*( (mHc*mHc) + \
 
   (MW*MW) -  (MZ*MZ) - s + t - u))))/(2.*(RR2x1 + RR2x2)*(RR3x1 + RR3x2)*(-t\
 
   +  (mH2*mH2))*(t -  (mH3*mH3))* (MW*MW)* (MZ*MZ)) + ( (gc190*gc190)*\
 
   (gc212*gc212)*( (RR2x1*RR2x1) +  (RR2x2*RR2x2))*( (mHc*mHc*mHc*mHc) - 2*\
 
   (mHc*mHc)*(t +  (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))*(\
 
   (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(-s + t - u +  (mHc*mHc) +  (MW*MW) + 7*\
 
   (MZ*MZ)) +  (( (mHc*mHc) +  (MW*MW) -  (MZ*MZ) - s + t - u)*( (mHc*mHc) + \
 
   (MW*MW) -  (MZ*MZ) - s + t - u))))/(4.* (MW*MW)* (MZ*MZ)* ((RR2x1 +\
 
   RR2x2)*(RR2x1 + RR2x2))* (( (mH2*mH2) - t)*( (mH2*mH2) - t))) + (\
 
   (gc192*gc192)* (gc213*gc213)*( (RR3x1*RR3x1) +  (RR3x2*RR3x2))*(\
 
   (mHc*mHc*mHc*mHc) - 2* (mHc*mHc)*(t +  (MW*MW)) +  (( (MW*MW) - t)*(\
 
   (MW*MW) - t)))*( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(-s + t - u +  (mHc*mHc)\
 
   +  (MW*MW) + 7* (MZ*MZ)) +  (( (mHc*mHc) +  (MW*MW) -  (MZ*MZ) - s + t -\
 
   u)*( (mHc*mHc) +  (MW*MW) -  (MZ*MZ) - s + t - u))))/(4.* (MW*MW)*\
 
   (MZ*MZ)* ((RR3x1 + RR3x2)*(RR3x1 + RR3x2))* (( (mH3*mH3) - t)*( (mH3*mH3)\
 
   - t))) + ( (gc188*gc188)* (gc211*gc211)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2))*( (MW*MW*MW*MW) - 2* (MW*MW)*(-s - t + u + 7* (mH1*mH1) + \
 
   (mHc*mHc) +  (MZ*MZ)) +  (( (mH1*mH1) -  (mHc*mHc) -  (MZ*MZ) + s + t -\
 
   u)*( (mH1*mH1) -  (mHc*mHc) -  (MZ*MZ) + s + t - u)))*( (mHc*mHc*mHc*mHc)\
 
   - 2* (mHc*mHc)*(u +  (MZ*MZ)) +  (( (MZ*MZ) - u)*( (MZ*MZ) - u))))/(4.*\
 
   (MW*MW)* (MZ*MZ)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))* (( (mHc*mHc) - u)*(\
 
   (mHc*mHc) - u))) + (gc190*gc212*(RR1x2*RR2x1 - RR1x1*RR2x2)* (EL*EL)*(\
 
   (MW*MW*MW*MW*MW*MW) -  (MW*MW*MW*MW)*(2*s + 3*u +  (mH1*mH1) - 4*\
 
   (mHc*mHc) - 4* (MZ*MZ)) + (-t +  (mHc*mHc))*(s*(s - t + u +  (mH1*mH1) - \
 
   (mHc*mHc)) + (-2*s - t + u - 3* (mH1*mH1) + 3* (mHc*mHc))* (MZ*MZ) + \
 
   (MZ*MZ*MZ*MZ)) +  (MW*MW)*(s*t + 3*s*u - t*u +  (mH1*mH1)*(s + t + 2*u -\
 
   3* (mHc*mHc)) - 5*s* (mHc*mHc) + 2*t* (mHc*mHc) - 5*u* (mHc*mHc) + 3*\
 
   (mHc*mHc*mHc*mHc) - (t + 3*u + 9* (mH1*mH1) + 3* (mHc*mHc))* (MZ*MZ) + 3*\
 
   (MZ*MZ*MZ*MZ) +  (s*s) -  (t*t) + 2* (u*u))))/(4.*CW*(RR2x1 + RR2x2)*(-t +\
 
    (mH2*mH2))* (MW*MW)* (MZ*MZ)) + (gc192*gc213*(RR1x2*RR3x1 - RR1x1*RR3x2)*\
 
   (EL*EL)*( (MW*MW*MW*MW*MW*MW) -  (MW*MW*MW*MW)*(2*s + 3*u +  (mH1*mH1) -\
 
   4* (mHc*mHc) - 4* (MZ*MZ)) + (-t +  (mHc*mHc))*(s*(s - t + u +  (mH1*mH1)\
 
   -  (mHc*mHc)) + (-2*s - t + u - 3* (mH1*mH1) + 3* (mHc*mHc))* (MZ*MZ) + \
 
   (MZ*MZ*MZ*MZ)) +  (MW*MW)*(s*t + 3*s*u - t*u +  (mH1*mH1)*(s + t + 2*u -\
 
   3* (mHc*mHc)) - 5*s* (mHc*mHc) + 2*t* (mHc*mHc) - 5*u* (mHc*mHc) + 3*\
 
   (mHc*mHc*mHc*mHc) - (t + 3*u + 9* (mH1*mH1) + 3* (mHc*mHc))* (MZ*MZ) + 3*\
 
   (MZ*MZ*MZ*MZ) +  (s*s) -  (t*t) + 2* (u*u))))/(4.*CW*(RR3x1 + RR3x2)*(-t +\
 
    (mH3*mH3))* (MW*MW)* (MZ*MZ)) - (gc188*gc190*gc211*gc212*(RR1x2*RR2x1 -\
 
   RR1x1*RR2x2)*( (MW*MW*MW*MW*MW*MW)*(-u +  (mHc*mHc) + 3* (MZ*MZ)) - \
 
   (MW*MW*MW*MW)*((-u +  (mHc*mHc))*(t + 2*u + 4* (mH1*mH1) +  (mHc*mHc)) +\
 
   (-4*s + 7*t + 8*u + 12* (mH1*mH1) + 5* (mHc*mHc))* (MZ*MZ) - 10*\
 
   (MZ*MZ*MZ*MZ)) + (-t +  (mHc*mHc))*(-((2*t + u + 4* (mH1*mH1) + \
 
   (mHc*mHc))* (MZ*MZ*MZ*MZ)) +  (MZ*MZ*MZ*MZ*MZ*MZ) + (-u + \
 
   (mHc*mHc))*(2*t*u +  (mH1*mH1*mH1*mH1) - 2*s* (mHc*mHc) - 2* (mH1*mH1)*(-s\
 
   +  (mHc*mHc)) +  (mHc*mHc*mHc*mHc) +  (s*s) -  (t*t) -  (u*u)) + \
 
   (MZ*MZ)*(4*s*u + 3* (mH1*mH1*mH1*mH1) +  (mH1*mH1)*(2*s + 4*t - 2*\
 
   (mHc*mHc)) + 2*(s + t - 3*u)* (mHc*mHc) -  (mHc*mHc*mHc*mHc) -  (s*s) + \
 
   (t*t) -  (u*u))) +  (MW*MW)*(-((-4*s + 8*t + 7*u + 12* (mH1*mH1) + 5*\
 
   (mHc*mHc))* (MZ*MZ*MZ*MZ)) + 3* (MZ*MZ*MZ*MZ*MZ*MZ) - (-u + \
 
   (mHc*mHc))*(-4*s*t - 3* (mH1*mH1*mH1*mH1) - 2*(s - 3*t + u)* (mHc*mHc) +\
 
   2* (mH1*mH1)*(-s - 2*u +  (mHc*mHc)) +  (mHc*mHc*mHc*mHc) +  (s*s) + \
 
   (t*t) -  (u*u)) +  (MZ*MZ)*(9* (mH1*mH1*mH1*mH1) + 2*(-5*s + t + u)*\
 
   (mHc*mHc) + 6* (mH1*mH1)*(-s + 2*(t + u) +  (mHc*mHc)) + 11*\
 
   (mHc*mHc*mHc*mHc) +  (s*s) + 5* (t*t) + 5* (u*u)))))/(2.*(RR1x1 +\
 
   RR1x2)*(RR2x1 + RR2x2)*(-t +  (mH2*mH2))*(-u +  (mHc*mHc))* (MW*MW)*\
 
   (MZ*MZ)) - (gc188*gc192*gc211*gc213*(RR1x2*RR3x1 - RR1x1*RR3x2)*(\
 
   (MW*MW*MW*MW*MW*MW)*(-u +  (mHc*mHc) + 3* (MZ*MZ)) -  (MW*MW*MW*MW)*((-u +\
 
    (mHc*mHc))*(t + 2*u + 4* (mH1*mH1) +  (mHc*mHc)) + (-4*s + 7*t + 8*u +\
 
   12* (mH1*mH1) + 5* (mHc*mHc))* (MZ*MZ) - 10* (MZ*MZ*MZ*MZ)) + (-t + \
 
   (mHc*mHc))*(-((2*t + u + 4* (mH1*mH1) +  (mHc*mHc))* (MZ*MZ*MZ*MZ)) + \
 
   (MZ*MZ*MZ*MZ*MZ*MZ) + (-u +  (mHc*mHc))*(2*t*u +  (mH1*mH1*mH1*mH1) - 2*s*\
 
   (mHc*mHc) - 2* (mH1*mH1)*(-s +  (mHc*mHc)) +  (mHc*mHc*mHc*mHc) +  (s*s) -\
 
    (t*t) -  (u*u)) +  (MZ*MZ)*(4*s*u + 3* (mH1*mH1*mH1*mH1) + \
 
   (mH1*mH1)*(2*s + 4*t - 2* (mHc*mHc)) + 2*(s + t - 3*u)* (mHc*mHc) - \
 
   (mHc*mHc*mHc*mHc) -  (s*s) +  (t*t) -  (u*u))) +  (MW*MW)*(-((-4*s + 8*t +\
 
   7*u + 12* (mH1*mH1) + 5* (mHc*mHc))* (MZ*MZ*MZ*MZ)) + 3*\
 
   (MZ*MZ*MZ*MZ*MZ*MZ) - (-u +  (mHc*mHc))*(-4*s*t - 3* (mH1*mH1*mH1*mH1) -\
 
   2*(s - 3*t + u)* (mHc*mHc) + 2* (mH1*mH1)*(-s - 2*u +  (mHc*mHc)) + \
 
   (mHc*mHc*mHc*mHc) +  (s*s) +  (t*t) -  (u*u)) +  (MZ*MZ)*(9*\
 
   (mH1*mH1*mH1*mH1) + 2*(-5*s + t + u)* (mHc*mHc) + 6* (mH1*mH1)*(-s + 2*(t\
 
   + u) +  (mHc*mHc)) + 11* (mHc*mHc*mHc*mHc) +  (s*s) + 5* (t*t) + 5*\
 
   (u*u)))))/(2.*(RR1x1 + RR1x2)*(RR3x1 + RR3x2)*(-t +  (mH3*mH3))*(-u + \
 
   (mHc*mHc))* (MW*MW)* (MZ*MZ)) + ( (EL*EL)*(\
 
   (MW*MW*MW*MW)*(4*CW*gc188*gc205*(-t + u + 2* (mH1*mH1) - 2* (mHc*mHc))*(-s\
 
   +  (MW*MW))*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)) - (RR1x1 + RR1x2)*v*\
 
   (EL*EL)*(-2*MW*(RR1x1*RR1x3*Timag + RR1x2*RR1x3*Treal +\
 
   L5*RR1x1*RR1x2*v)*WW - s*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal +\
 
   (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))) - 2* (MW*MW)*(s*(4*CW*gc188*gc205*(\
 
   (mH1*mH1) -  (mHc*mHc))*(-s +  (MW*MW))*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))\
 
   - (RR1x1 + RR1x2)*v* (EL*EL)*(-2*MW*(RR1x1*RR1x3*Timag + RR1x2*RR1x3*Treal\
 
   + L5*RR1x1*RR1x2*v)*WW - s*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal +\
 
   (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))) + 5* (MZ*MZ)*(4*CW*gc188*gc205*(t - u)*(-s\
 
   +  (MW*MW))*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)) + (RR1x1 + RR1x2)*v*\
 
   (EL*EL)*(-2*MW*(RR1x1*RR1x3*Timag + RR1x2*RR1x3*Treal +\
 
   L5*RR1x1*RR1x2*v)*WW - s*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal +\
 
   (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2))))) + (s -  (MZ*MZ))*(s*(4*CW*gc188*gc205*(t\
 
   - u)*(-s +  (MW*MW))*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)) - (RR1x1 +\
 
   RR1x2)*v* (EL*EL)*(-2*MW*(RR1x1*RR1x3*Timag + RR1x2*RR1x3*Treal +\
 
   L5*RR1x1*RR1x2*v)*WW - s*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal +\
 
   (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))) +  (MZ*MZ)*(4*CW*gc188*gc205*(t - u + 2*\
 
   (mH1*mH1) - 2* (mHc*mHc))*(-s +  (MW*MW))*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) + (RR1x1 + RR1x2)*v* (EL*EL)*(-2*MW*(RR1x1*RR1x3*Timag +\
 
   RR1x2*RR1x3*Treal + L5*RR1x1*RR1x2*v)*WW - s*(-2*RR1x2*RR1x3*Timag +\
 
   RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))))))/(16.*(RR1x1 + RR1x2)* (CW*CW)* (MW*MW)*\
 
   (MZ*MZ)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) -\
 
   (gc188*gc211*( (MW*MW*MW*MW)*( (MZ*MZ)*(20*CW*gc188*gc205*(-2*s - t + u +\
 
   6* (mH1*mH1) + 2* (mHc*mHc))*(-s +  (MW*MW))*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) - 3*(RR1x1 + RR1x2)*v* (EL*EL)*(-2*MW*(RR1x1*RR1x3*Timag +\
 
   RR1x2*RR1x3*Treal + L5*RR1x1*RR1x2*v)*WW - s*(-2*RR1x2*RR1x3*Timag +\
 
   RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))) + (-u + \
 
   (mHc*mHc))*(4*CW*gc188*gc205*(-4*s - t + u + 10* (mH1*mH1) + 6*\
 
   (mHc*mHc))*(-s +  (MW*MW))*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)) - (RR1x1 +\
 
   RR1x2)*v* (EL*EL)*(-2*MW*(RR1x1*RR1x3*Timag + RR1x2*RR1x3*Treal +\
 
   L5*RR1x1*RR1x2*v)*WW - s*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal +\
 
   (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2))))) + (s + t - u +  (mH1*mH1) -  (mHc*mHc) - \
 
   (MZ*MZ))*(s*(-u +  (mHc*mHc))*(4*CW*gc188*gc205*(t - u)*(-s +  (MW*MW))*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2)) - (RR1x1 + RR1x2)*v*\
 
   (EL*EL)*(-2*MW*(RR1x1*RR1x3*Timag + RR1x2*RR1x3*Treal +\
 
   L5*RR1x1*RR1x2*v)*WW - s*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal +\
 
   (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))) +  (MZ*MZ*MZ*MZ)*(4*CW*gc188*gc205*(-2*s -\
 
   t + u + 2* (mH1*mH1) + 6* (mHc*mHc))*(-s +  (MW*MW))*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) + (RR1x1 + RR1x2)*v* (EL*EL)*(-2*MW*(RR1x1*RR1x3*Timag +\
 
   RR1x2*RR1x3*Treal + L5*RR1x1*RR1x2*v)*WW - s*(-2*RR1x2*RR1x3*Timag +\
 
   RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))) +  (MZ*MZ)*(-((RR1x1 + RR1x2)*v*\
 
   (EL*EL)*(-s - 2*t - u + 3* (mHc*mHc))*(2*MW*(RR1x1*RR1x3*Timag +\
 
   RR1x2*RR1x3*Treal + L5*RR1x1*RR1x2*v)*WW + s*(-2*RR1x2*RR1x3*Timag +\
 
   RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) - \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))) + 4*CW*gc188*gc205*(-s +  (MW*MW))*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(s*t - s*u + t*u + (-6*s - 3*t + u)*\
 
   (mHc*mHc) - 2* (mH1*mH1)*(s - t +  (mHc*mHc)) + 2* (mHc*mHc*mHc*mHc) + 2*\
 
   (s*s) -  (u*u)))) +  (MW*MW)*(4* (MZ*MZ*MZ*MZ)*(4*CW*gc188*gc205*(-2*s - t\
 
   + u + 5* (mH1*mH1) + 3* (mHc*mHc))*(-s +  (MW*MW))*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) - (RR1x1 + RR1x2)*v* (EL*EL)*(-2*MW*(RR1x1*RR1x3*Timag +\
 
   RR1x2*RR1x3*Treal + L5*RR1x1*RR1x2*v)*WW - s*(-2*RR1x2*RR1x3*Timag +\
 
   RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))) +  (MZ*MZ)*((RR1x1 + RR1x2)*v*\
 
   (EL*EL)*(3*t + u + 9* (mH1*mH1) + 3* (mHc*mHc))*(-2*MW*(RR1x1*RR1x3*Timag\
 
   + RR1x2*RR1x3*Treal + L5*RR1x1*RR1x2*v)*WW - s*(-2*RR1x2*RR1x3*Timag +\
 
   RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2))) + 4*CW*gc188*gc205*(-s +  (MW*MW))*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(6*s*t + 6*s*u + 2*t*u + 6*\
 
   (mH1*mH1*mH1*mH1) + (2*s - 7*t - 5*u)* (mHc*mHc) +  (mH1*mH1)*(-14*s -\
 
   25*t - 11*u + 48* (mHc*mHc)) - 6* (mHc*mHc*mHc*mHc) + 3* (t*t) - 5*\
 
   (u*u))) + (-u +  (mHc*mHc))*(-((RR1x1 + RR1x2)*v* (EL*EL)*(2*s - t + u +\
 
   3* (mH1*mH1) - 3* (mHc*mHc))*(2*MW*(RR1x1*RR1x3*Timag + RR1x2*RR1x3*Treal\
 
   + L5*RR1x1*RR1x2*v)*WW + s*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal +\
 
   (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) - \
 
   (MW*MW)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)))) + 4*CW*gc188*gc205*(-s +  (MW*MW))*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(2*t*u + 2* (mH1*mH1*mH1*mH1) - 3*(2*s - t\
 
   + u)* (mHc*mHc) -  (mH1*mH1)*(10*s + 3*t - 3*u + 4* (mHc*mHc)) + 2*\
 
   (mHc*mHc*mHc*mHc) + 4* (s*s) -  (t*t) -  (u*u))))))/(8.*CW*(-u + \
 
   (mHc*mHc))* (MW*MW)* (MZ*MZ)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*(\
 
   (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) +\
 
   (gc190*gc212*((-4*CW*gc188*gc205*(-2*s + t - u + 2* (mH1*mH1) + 6*\
 
   (mHc*mHc))*((RR1x2*RR2x1 - RR1x1*RR2x2)*s + MW*(RR1x1*RR2x1 +\
 
   RR1x2*RR2x2)*WW + (-(RR1x2*RR2x1) + RR1x1*RR2x2)* (MW*MW)) + (RR1x1 +\
 
   RR1x2)*v* (EL*EL)*(-(s*(2*RR1x3*(RR2x1*Timag + RR2x2*Treal) +\
 
   (-(L4*RR1x2*RR2x1) + L5*RR1x2*RR2x1 + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v))\
 
   + MW*(RR1x3*(-2*RR2x2*Timag + 2*RR2x1*Treal) + (L4*RR1x1*RR2x1 +\
 
   L5*RR1x1*RR2x1 + L4*RR1x2*RR2x2 - L5*RR1x2*RR2x2)*v)*WW +\
 
   (2*RR1x3*(RR2x1*Timag + RR2x2*Treal) + (-(L4*RR1x2*RR2x1) + L5*RR1x2*RR2x1\
 
   + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v)* (MW*MW)))* (MW*MW*MW*MW*MW*MW) -\
 
   (-t +  (mHc*mHc))*(-(s*(s - t + u +  (mH1*mH1) - \
 
   (mHc*mHc))*(4*CW*gc188*gc205*(t - u)*(-(RR1x2*RR2x1*s) + RR1x1*RR2x2*s -\
 
   MW*(RR1x1*RR2x1 + RR1x2*RR2x2)*WW + (RR1x2*RR2x1 - RR1x1*RR2x2)* (MW*MW))\
 
   + (RR1x1 + RR1x2)*v* (EL*EL)*(-(s*(2*RR1x3*(RR2x1*Timag + RR2x2*Treal) +\
 
   (-(L4*RR1x2*RR2x1) + L5*RR1x2*RR2x1 + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v))\
 
   + MW*(RR1x3*(-2*RR2x2*Timag + 2*RR2x1*Treal) + (L4*RR1x1*RR2x1 +\
 
   L5*RR1x1*RR2x1 + L4*RR1x2*RR2x2 - L5*RR1x2*RR2x2)*v)*WW +\
 
   (2*RR1x3*(RR2x1*Timag + RR2x2*Treal) + (-(L4*RR1x2*RR2x1) + L5*RR1x2*RR2x1\
 
   + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v)* (MW*MW)))) +\
 
   (-4*CW*gc188*gc205*(-4*s + t - u + 10* (mH1*mH1) + 6*\
 
   (mHc*mHc))*((RR1x2*RR2x1 - RR1x1*RR2x2)*s + MW*(RR1x1*RR2x1 +\
 
   RR1x2*RR2x2)*WW + (-(RR1x2*RR2x1) + RR1x1*RR2x2)* (MW*MW)) - (RR1x1 +\
 
   RR1x2)*v* (EL*EL)*(-(s*(2*RR1x3*(RR2x1*Timag + RR2x2*Treal) +\
 
   (-(L4*RR1x2*RR2x1) + L5*RR1x2*RR2x1 + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v))\
 
   + MW*(RR1x3*(-2*RR2x2*Timag + 2*RR2x1*Treal) + (L4*RR1x1*RR2x1 +\
 
   L5*RR1x1*RR2x1 + L4*RR1x2*RR2x2 - L5*RR1x2*RR2x2)*v)*WW +\
 
   (2*RR1x3*(RR2x1*Timag + RR2x2*Treal) + (-(L4*RR1x2*RR2x1) + L5*RR1x2*RR2x1\
 
   + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v)* (MW*MW)))* (MZ*MZ*MZ*MZ) + \
 
   (MZ*MZ)*((RR1x1 + RR1x2)*v* (EL*EL)*(2*s + t - u + 3* (mH1*mH1) - 3*\
 
   (mHc*mHc))*(-(s*(2*RR1x3*(RR2x1*Timag + RR2x2*Treal) + (-(L4*RR1x2*RR2x1)\
 
   + L5*RR1x2*RR2x1 + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v)) +\
 
   MW*(RR1x3*(-2*RR2x2*Timag + 2*RR2x1*Treal) + (L4*RR1x1*RR2x1 +\
 
   L5*RR1x1*RR2x1 + L4*RR1x2*RR2x2 - L5*RR1x2*RR2x2)*v)*WW +\
 
   (2*RR1x3*(RR2x1*Timag + RR2x2*Treal) + (-(L4*RR1x2*RR2x1) + L5*RR1x2*RR2x1\
 
   + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v)* (MW*MW)) -\
 
   4*CW*gc188*gc205*((RR1x2*RR2x1 - RR1x1*RR2x2)*s + MW*(RR1x1*RR2x1 +\
 
   RR1x2*RR2x2)*WW + (-(RR1x2*RR2x1) + RR1x1*RR2x2)* (MW*MW))*(2*t*u + 2*\
 
   (mH1*mH1*mH1*mH1) - 3*(2*s + t - u)* (mHc*mHc) -  (mH1*mH1)*(10*s - 3*t +\
 
   3*u + 4* (mHc*mHc)) + 2* (mHc*mHc*mHc*mHc) + 4* (s*s) -  (t*t) -  (u*u))))\
 
   -  (MW*MW*MW*MW)*((RR1x1 + RR1x2)*v* (EL*EL)*(2*s + 3*u +  (mH1*mH1) - 4*\
 
   (mHc*mHc))*(-(s*(2*RR1x3*(RR2x1*Timag + RR2x2*Treal) + (-(L4*RR1x2*RR2x1)\
 
   + L5*RR1x2*RR2x1 + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v)) +\
 
   MW*(RR1x3*(-2*RR2x2*Timag + 2*RR2x1*Treal) + (L4*RR1x1*RR2x1 +\
 
   L5*RR1x1*RR2x1 + L4*RR1x2*RR2x2 - L5*RR1x2*RR2x2)*v)*WW +\
 
   (2*RR1x3*(RR2x1*Timag + RR2x2*Treal) + (-(L4*RR1x2*RR2x1) + L5*RR1x2*RR2x1\
 
   + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v)* (MW*MW)) +\
 
   4*(-4*CW*gc188*gc205*(-2*s + t - u + 5* (mH1*mH1) + 3*\
 
   (mHc*mHc))*((RR1x2*RR2x1 - RR1x1*RR2x2)*s + MW*(RR1x1*RR2x1 +\
 
   RR1x2*RR2x2)*WW + (-(RR1x2*RR2x1) + RR1x1*RR2x2)* (MW*MW)) - (RR1x1 +\
 
   RR1x2)*v* (EL*EL)*(-(s*(2*RR1x3*(RR2x1*Timag + RR2x2*Treal) +\
 
   (-(L4*RR1x2*RR2x1) + L5*RR1x2*RR2x1 + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v))\
 
   + MW*(RR1x3*(-2*RR2x2*Timag + 2*RR2x1*Treal) + (L4*RR1x1*RR2x1 +\
 
   L5*RR1x1*RR2x1 + L4*RR1x2*RR2x2 - L5*RR1x2*RR2x2)*v)*WW +\
 
   (2*RR1x3*(RR2x1*Timag + RR2x2*Treal) + (-(L4*RR1x2*RR2x1) + L5*RR1x2*RR2x1\
 
   + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v)* (MW*MW)))* (MZ*MZ) -\
 
   4*CW*gc188*gc205*((RR1x2*RR2x1 - RR1x1*RR2x2)*s + MW*(RR1x1*RR2x1 +\
 
   RR1x2*RR2x2)*WW + (-(RR1x2*RR2x1) + RR1x1*RR2x2)* (MW*MW))*(4*s*t - 4*s*u\
 
   + t*u + 2* (mH1*mH1*mH1*mH1) + 2*(7*s - 4*t + 5*u)* (mHc*mHc) + \
 
   (mH1*mH1)*(2*s - t - u + 6* (mHc*mHc)) - 8* (mHc*mHc*mHc*mHc) - 4* (s*s) -\
 
    (u*u))) +  (MW*MW)*((20*CW*gc188*gc205*(-2*s + t - u + 6* (mH1*mH1) + 2*\
 
   (mHc*mHc))*((RR1x2*RR2x1 - RR1x1*RR2x2)*s + MW*(RR1x1*RR2x1 +\
 
   RR1x2*RR2x2)*WW + (-(RR1x2*RR2x1) + RR1x1*RR2x2)* (MW*MW)) + 3*(RR1x1 +\
 
   RR1x2)*v* (EL*EL)*(-(s*(2*RR1x3*(RR2x1*Timag + RR2x2*Treal) +\
 
   (-(L4*RR1x2*RR2x1) + L5*RR1x2*RR2x1 + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v))\
 
   + MW*(RR1x3*(-2*RR2x2*Timag + 2*RR2x1*Treal) + (L4*RR1x1*RR2x1 +\
 
   L5*RR1x1*RR2x1 + L4*RR1x2*RR2x2 - L5*RR1x2*RR2x2)*v)*WW +\
 
   (2*RR1x3*(RR2x1*Timag + RR2x2*Treal) + (-(L4*RR1x2*RR2x1) + L5*RR1x2*RR2x1\
 
   + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v)* (MW*MW)))* (MZ*MZ*MZ*MZ) - (RR1x1 +\
 
   RR1x2)*v* (EL*EL)*(-(s*(2*RR1x3*(RR2x1*Timag + RR2x2*Treal) +\
 
   (-(L4*RR1x2*RR2x1) + L5*RR1x2*RR2x1 + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v))\
 
   + MW*(RR1x3*(-2*RR2x2*Timag + 2*RR2x1*Treal) + (L4*RR1x1*RR2x1 +\
 
   L5*RR1x1*RR2x1 + L4*RR1x2*RR2x2 - L5*RR1x2*RR2x2)*v)*WW +\
 
   (2*RR1x3*(RR2x1*Timag + RR2x2*Treal) + (-(L4*RR1x2*RR2x1) + L5*RR1x2*RR2x1\
 
   + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v)* (MW*MW))*(-(s*t) - 3*s*u + t*u +\
 
   (5*s - 2*t + 5*u)* (mHc*mHc) +  (mH1*mH1)*(-s - t - 2*u + 3* (mHc*mHc)) -\
 
   3* (mHc*mHc*mHc*mHc) -  (s*s) +  (t*t) - 2* (u*u)) -\
 
   4*CW*gc188*gc205*((RR1x2*RR2x1 - RR1x1*RR2x2)*s + MW*(RR1x1*RR2x1 +\
 
   RR1x2*RR2x2)*WW + (-(RR1x2*RR2x1) + RR1x1*RR2x2)* (MW*MW))*(2*\
 
   (mH1*mH1*mH1*mH1)*(s - u +  (mHc*mHc)) + (-8*s + 3*t - 5*u)*\
 
   (mHc*mHc*mHc*mHc) + 2* (mHc*mHc*mHc*mHc*mHc*mHc) + 3*t* (s*s) - 3*u* (s*s)\
 
   +  (mHc*mHc)*(3*u*(-t + u) + s*(-9*t + 11*u) + 8* (s*s)) - 2* (s*s*s) + s*\
 
   (t*t) + 2*u* (t*t) -  (t*t*t) +  (mH1*mH1)*(t*u - s*(t + u) + (6*s - 3*t +\
 
   7*u)* (mHc*mHc) - 4* (mHc*mHc*mHc*mHc) +  (t*t) - 2* (u*u)) - s* (u*u) -\
 
   t* (u*u)) -  (MZ*MZ)*((RR1x1 + RR1x2)*v* (EL*EL)*(t + 3*u + 9* (mH1*mH1) +\
 
   3* (mHc*mHc))*(-(s*(2*RR1x3*(RR2x1*Timag + RR2x2*Treal) +\
 
   (-(L4*RR1x2*RR2x1) + L5*RR1x2*RR2x1 + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v))\
 
   + MW*(RR1x3*(-2*RR2x2*Timag + 2*RR2x1*Treal) + (L4*RR1x1*RR2x1 +\
 
   L5*RR1x1*RR2x1 + L4*RR1x2*RR2x2 - L5*RR1x2*RR2x2)*v)*WW +\
 
   (2*RR1x3*(RR2x1*Timag + RR2x2*Treal) + (-(L4*RR1x2*RR2x1) + L5*RR1x2*RR2x1\
 
   + L4*RR1x1*RR2x2 + L5*RR1x1*RR2x2)*v)* (MW*MW)) -\
 
   4*CW*gc188*gc205*((RR1x2*RR2x1 - RR1x1*RR2x2)*s + MW*(RR1x1*RR2x1 +\
 
   RR1x2*RR2x2)*WW + (-(RR1x2*RR2x1) + RR1x1*RR2x2)* (MW*MW))*(6*s*t + 6*s*u\
 
   + 2*t*u + 6* (mH1*mH1*mH1*mH1) + (2*s - 5*t - 7*u)* (mHc*mHc) + \
 
   (mH1*mH1)*(-14*s - 11*t - 25*u + 48* (mHc*mHc)) - 6* (mHc*mHc*mHc*mHc) -\
 
   5* (t*t) + 3* (u*u))))))/(8.*CW*(RR1x1 + RR1x2)*(RR2x1 + RR2x2)*(-t + \
 
   (mH2*mH2))* (MW*MW)* (MZ*MZ)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s + \
 
   (WW*WW)))) + (gc192*gc213*((-4*CW*gc188*gc205*(-2*s + t - u + 2* (mH1*mH1)\
 
   + 6* (mHc*mHc))*((RR1x2*RR3x1 - RR1x1*RR3x2)*s + MW*(RR1x1*RR3x1 +\
 
   RR1x2*RR3x2)*WW + (-(RR1x2*RR3x1) + RR1x1*RR3x2)* (MW*MW)) + (RR1x1 +\
 
   RR1x2)*v* (EL*EL)*(-(s*(2*RR1x3*(RR3x1*Timag + RR3x2*Treal) +\
 
   (-(L4*RR1x2*RR3x1) + L5*RR1x2*RR3x1 + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v))\
 
   + MW*(RR1x3*(-2*RR3x2*Timag + 2*RR3x1*Treal) + (L4*RR1x1*RR3x1 +\
 
   L5*RR1x1*RR3x1 + L4*RR1x2*RR3x2 - L5*RR1x2*RR3x2)*v)*WW +\
 
   (2*RR1x3*(RR3x1*Timag + RR3x2*Treal) + (-(L4*RR1x2*RR3x1) + L5*RR1x2*RR3x1\
 
   + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v)* (MW*MW)))* (MW*MW*MW*MW*MW*MW) -\
 
   (-t +  (mHc*mHc))*(-(s*(s - t + u +  (mH1*mH1) - \
 
   (mHc*mHc))*(4*CW*gc188*gc205*(t - u)*(-(RR1x2*RR3x1*s) + RR1x1*RR3x2*s -\
 
   MW*(RR1x1*RR3x1 + RR1x2*RR3x2)*WW + (RR1x2*RR3x1 - RR1x1*RR3x2)* (MW*MW))\
 
   + (RR1x1 + RR1x2)*v* (EL*EL)*(-(s*(2*RR1x3*(RR3x1*Timag + RR3x2*Treal) +\
 
   (-(L4*RR1x2*RR3x1) + L5*RR1x2*RR3x1 + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v))\
 
   + MW*(RR1x3*(-2*RR3x2*Timag + 2*RR3x1*Treal) + (L4*RR1x1*RR3x1 +\
 
   L5*RR1x1*RR3x1 + L4*RR1x2*RR3x2 - L5*RR1x2*RR3x2)*v)*WW +\
 
   (2*RR1x3*(RR3x1*Timag + RR3x2*Treal) + (-(L4*RR1x2*RR3x1) + L5*RR1x2*RR3x1\
 
   + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v)* (MW*MW)))) +\
 
   (-4*CW*gc188*gc205*(-4*s + t - u + 10* (mH1*mH1) + 6*\
 
   (mHc*mHc))*((RR1x2*RR3x1 - RR1x1*RR3x2)*s + MW*(RR1x1*RR3x1 +\
 
   RR1x2*RR3x2)*WW + (-(RR1x2*RR3x1) + RR1x1*RR3x2)* (MW*MW)) - (RR1x1 +\
 
   RR1x2)*v* (EL*EL)*(-(s*(2*RR1x3*(RR3x1*Timag + RR3x2*Treal) +\
 
   (-(L4*RR1x2*RR3x1) + L5*RR1x2*RR3x1 + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v))\
 
   + MW*(RR1x3*(-2*RR3x2*Timag + 2*RR3x1*Treal) + (L4*RR1x1*RR3x1 +\
 
   L5*RR1x1*RR3x1 + L4*RR1x2*RR3x2 - L5*RR1x2*RR3x2)*v)*WW +\
 
   (2*RR1x3*(RR3x1*Timag + RR3x2*Treal) + (-(L4*RR1x2*RR3x1) + L5*RR1x2*RR3x1\
 
   + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v)* (MW*MW)))* (MZ*MZ*MZ*MZ) + \
 
   (MZ*MZ)*((RR1x1 + RR1x2)*v* (EL*EL)*(2*s + t - u + 3* (mH1*mH1) - 3*\
 
   (mHc*mHc))*(-(s*(2*RR1x3*(RR3x1*Timag + RR3x2*Treal) + (-(L4*RR1x2*RR3x1)\
 
   + L5*RR1x2*RR3x1 + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v)) +\
 
   MW*(RR1x3*(-2*RR3x2*Timag + 2*RR3x1*Treal) + (L4*RR1x1*RR3x1 +\
 
   L5*RR1x1*RR3x1 + L4*RR1x2*RR3x2 - L5*RR1x2*RR3x2)*v)*WW +\
 
   (2*RR1x3*(RR3x1*Timag + RR3x2*Treal) + (-(L4*RR1x2*RR3x1) + L5*RR1x2*RR3x1\
 
   + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v)* (MW*MW)) -\
 
   4*CW*gc188*gc205*((RR1x2*RR3x1 - RR1x1*RR3x2)*s + MW*(RR1x1*RR3x1 +\
 
   RR1x2*RR3x2)*WW + (-(RR1x2*RR3x1) + RR1x1*RR3x2)* (MW*MW))*(2*t*u + 2*\
 
   (mH1*mH1*mH1*mH1) - 3*(2*s + t - u)* (mHc*mHc) -  (mH1*mH1)*(10*s - 3*t +\
 
   3*u + 4* (mHc*mHc)) + 2* (mHc*mHc*mHc*mHc) + 4* (s*s) -  (t*t) -  (u*u))))\
 
   -  (MW*MW*MW*MW)*((RR1x1 + RR1x2)*v* (EL*EL)*(2*s + 3*u +  (mH1*mH1) - 4*\
 
   (mHc*mHc))*(-(s*(2*RR1x3*(RR3x1*Timag + RR3x2*Treal) + (-(L4*RR1x2*RR3x1)\
 
   + L5*RR1x2*RR3x1 + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v)) +\
 
   MW*(RR1x3*(-2*RR3x2*Timag + 2*RR3x1*Treal) + (L4*RR1x1*RR3x1 +\
 
   L5*RR1x1*RR3x1 + L4*RR1x2*RR3x2 - L5*RR1x2*RR3x2)*v)*WW +\
 
   (2*RR1x3*(RR3x1*Timag + RR3x2*Treal) + (-(L4*RR1x2*RR3x1) + L5*RR1x2*RR3x1\
 
   + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v)* (MW*MW)) +\
 
   4*(-4*CW*gc188*gc205*(-2*s + t - u + 5* (mH1*mH1) + 3*\
 
   (mHc*mHc))*((RR1x2*RR3x1 - RR1x1*RR3x2)*s + MW*(RR1x1*RR3x1 +\
 
   RR1x2*RR3x2)*WW + (-(RR1x2*RR3x1) + RR1x1*RR3x2)* (MW*MW)) - (RR1x1 +\
 
   RR1x2)*v* (EL*EL)*(-(s*(2*RR1x3*(RR3x1*Timag + RR3x2*Treal) +\
 
   (-(L4*RR1x2*RR3x1) + L5*RR1x2*RR3x1 + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v))\
 
   + MW*(RR1x3*(-2*RR3x2*Timag + 2*RR3x1*Treal) + (L4*RR1x1*RR3x1 +\
 
   L5*RR1x1*RR3x1 + L4*RR1x2*RR3x2 - L5*RR1x2*RR3x2)*v)*WW +\
 
   (2*RR1x3*(RR3x1*Timag + RR3x2*Treal) + (-(L4*RR1x2*RR3x1) + L5*RR1x2*RR3x1\
 
   + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v)* (MW*MW)))* (MZ*MZ) -\
 
   4*CW*gc188*gc205*((RR1x2*RR3x1 - RR1x1*RR3x2)*s + MW*(RR1x1*RR3x1 +\
 
   RR1x2*RR3x2)*WW + (-(RR1x2*RR3x1) + RR1x1*RR3x2)* (MW*MW))*(4*s*t - 4*s*u\
 
   + t*u + 2* (mH1*mH1*mH1*mH1) + 2*(7*s - 4*t + 5*u)* (mHc*mHc) + \
 
   (mH1*mH1)*(2*s - t - u + 6* (mHc*mHc)) - 8* (mHc*mHc*mHc*mHc) - 4* (s*s) -\
 
    (u*u))) +  (MW*MW)*((20*CW*gc188*gc205*(-2*s + t - u + 6* (mH1*mH1) + 2*\
 
   (mHc*mHc))*((RR1x2*RR3x1 - RR1x1*RR3x2)*s + MW*(RR1x1*RR3x1 +\
 
   RR1x2*RR3x2)*WW + (-(RR1x2*RR3x1) + RR1x1*RR3x2)* (MW*MW)) + 3*(RR1x1 +\
 
   RR1x2)*v* (EL*EL)*(-(s*(2*RR1x3*(RR3x1*Timag + RR3x2*Treal) +\
 
   (-(L4*RR1x2*RR3x1) + L5*RR1x2*RR3x1 + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v))\
 
   + MW*(RR1x3*(-2*RR3x2*Timag + 2*RR3x1*Treal) + (L4*RR1x1*RR3x1 +\
 
   L5*RR1x1*RR3x1 + L4*RR1x2*RR3x2 - L5*RR1x2*RR3x2)*v)*WW +\
 
   (2*RR1x3*(RR3x1*Timag + RR3x2*Treal) + (-(L4*RR1x2*RR3x1) + L5*RR1x2*RR3x1\
 
   + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v)* (MW*MW)))* (MZ*MZ*MZ*MZ) - (RR1x1 +\
 
   RR1x2)*v* (EL*EL)*(-(s*(2*RR1x3*(RR3x1*Timag + RR3x2*Treal) +\
 
   (-(L4*RR1x2*RR3x1) + L5*RR1x2*RR3x1 + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v))\
 
   + MW*(RR1x3*(-2*RR3x2*Timag + 2*RR3x1*Treal) + (L4*RR1x1*RR3x1 +\
 
   L5*RR1x1*RR3x1 + L4*RR1x2*RR3x2 - L5*RR1x2*RR3x2)*v)*WW +\
 
   (2*RR1x3*(RR3x1*Timag + RR3x2*Treal) + (-(L4*RR1x2*RR3x1) + L5*RR1x2*RR3x1\
 
   + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v)* (MW*MW))*(-(s*t) - 3*s*u + t*u +\
 
   (5*s - 2*t + 5*u)* (mHc*mHc) +  (mH1*mH1)*(-s - t - 2*u + 3* (mHc*mHc)) -\
 
   3* (mHc*mHc*mHc*mHc) -  (s*s) +  (t*t) - 2* (u*u)) -\
 
   4*CW*gc188*gc205*((RR1x2*RR3x1 - RR1x1*RR3x2)*s + MW*(RR1x1*RR3x1 +\
 
   RR1x2*RR3x2)*WW + (-(RR1x2*RR3x1) + RR1x1*RR3x2)* (MW*MW))*(2*\
 
   (mH1*mH1*mH1*mH1)*(s - u +  (mHc*mHc)) + (-8*s + 3*t - 5*u)*\
 
   (mHc*mHc*mHc*mHc) + 2* (mHc*mHc*mHc*mHc*mHc*mHc) + 3*t* (s*s) - 3*u* (s*s)\
 
   +  (mHc*mHc)*(3*u*(-t + u) + s*(-9*t + 11*u) + 8* (s*s)) - 2* (s*s*s) + s*\
 
   (t*t) + 2*u* (t*t) -  (t*t*t) +  (mH1*mH1)*(t*u - s*(t + u) + (6*s - 3*t +\
 
   7*u)* (mHc*mHc) - 4* (mHc*mHc*mHc*mHc) +  (t*t) - 2* (u*u)) - s* (u*u) -\
 
   t* (u*u)) -  (MZ*MZ)*((RR1x1 + RR1x2)*v* (EL*EL)*(t + 3*u + 9* (mH1*mH1) +\
 
   3* (mHc*mHc))*(-(s*(2*RR1x3*(RR3x1*Timag + RR3x2*Treal) +\
 
   (-(L4*RR1x2*RR3x1) + L5*RR1x2*RR3x1 + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v))\
 
   + MW*(RR1x3*(-2*RR3x2*Timag + 2*RR3x1*Treal) + (L4*RR1x1*RR3x1 +\
 
   L5*RR1x1*RR3x1 + L4*RR1x2*RR3x2 - L5*RR1x2*RR3x2)*v)*WW +\
 
   (2*RR1x3*(RR3x1*Timag + RR3x2*Treal) + (-(L4*RR1x2*RR3x1) + L5*RR1x2*RR3x1\
 
   + L4*RR1x1*RR3x2 + L5*RR1x1*RR3x2)*v)* (MW*MW)) -\
 
   4*CW*gc188*gc205*((RR1x2*RR3x1 - RR1x1*RR3x2)*s + MW*(RR1x1*RR3x1 +\
 
   RR1x2*RR3x2)*WW + (-(RR1x2*RR3x1) + RR1x1*RR3x2)* (MW*MW))*(6*s*t + 6*s*u\
 
   + 2*t*u + 6* (mH1*mH1*mH1*mH1) + (2*s - 5*t - 7*u)* (mHc*mHc) + \
 
   (mH1*mH1)*(-14*s - 11*t - 25*u + 48* (mHc*mHc)) - 6* (mHc*mHc*mHc*mHc) -\
 
   5* (t*t) + 3* (u*u))))))/(8.*CW*(RR1x1 + RR1x2)*(RR3x1 + RR3x2)*(-t + \
 
   (mH3*mH3))* (MW*MW)* (MZ*MZ)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s + \
 
   (WW*WW)))) + (-64* (CW*CW)* (gc188*gc188)* (gc205*gc205)*(-s + 2*\
 
   (mH1*mH1) + 2* (mHc*mHc))* (MW*MW*MW*MW*MW*MW)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) +  (MW*MW*MW*MW)*(64* (CW*CW)* (gc188*gc188)*\
 
   (gc205*gc205)*(-s + 2* (mH1*mH1) + 2* (mHc*mHc))* (MZ*MZ)*( (RR1x1*RR1x1)\
 
   +  (RR1x2*RR1x2)) - 8*CW*gc188*gc205*(RR1x1 + RR1x2)*v* (EL*EL)*(-t + u +\
 
   2* (mH1*mH1) - 2* (mHc*mHc))*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal\
 
   + (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) - 16* (CW*CW)*\
 
   (gc188*gc188)* (gc205*gc205)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(2*t*u + 4*\
 
   (mH1*mH1*mH1*mH1) - 4*(4*s - t + u)* (mHc*mHc) - 4* (mH1*mH1)*(4*s + t - u\
 
   + 2* (mHc*mHc)) + 4* (mHc*mHc*mHc*mHc) + 8* (s*s) -  (t*t) -  (u*u)) + \
 
   (EL*EL*EL*EL)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*\
 
   (v*v)*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag + L4*RR1x1*Treal +\
 
   L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) +  (Treal*Treal)) +\
 
   (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)))* (v*v))) + (s\
 
   -  (MZ*MZ))*(64* (CW*CW)* (gc188*gc188)* (gc205*gc205)*(-s + 2* (mH1*mH1)\
 
   + 2* (mHc*mHc))* (MZ*MZ*MZ*MZ)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)) + \
 
   (MZ*MZ)*(-8*CW*gc188*gc205*(RR1x1 + RR1x2)*v* (EL*EL)*(t - u + 2*\
 
   (mH1*mH1) - 2* (mHc*mHc))*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal +\
 
   (L4 + L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + 16* (CW*CW)*\
 
   (gc188*gc188)* (gc205*gc205)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(2*t*u + 4*\
 
   (mH1*mH1*mH1*mH1) - 4*(2*s + t - u)* (mHc*mHc) - 4* (mH1*mH1)*(2*s - t + u\
 
   + 2* (mHc*mHc)) + 4* (mHc*mHc*mHc*mHc) + 4* (s*s) -  (t*t) -  (u*u)) - \
 
   (EL*EL*EL*EL)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*\
 
   (v*v)*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag + L4*RR1x1*Treal +\
 
   L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) +  (Treal*Treal)) +\
 
   (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)))* (v*v))) +\
 
   s*(-8*CW*gc188*gc205*(RR1x1 + RR1x2)*(t - u)*v*\
 
   (EL*EL)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)) + 16* (CW*CW)* (gc188*gc188)*\
 
   (gc205*gc205)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))* ((t - u)*(t - u)) + \
 
   (EL*EL*EL*EL)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*\
 
   (v*v)*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag + L4*RR1x1*Treal +\
 
   L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) +  (Treal*Treal)) +\
 
   (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)))* (v*v)))) +\
 
   2* (MW*MW)*(32* (CW*CW)* (gc188*gc188)* (gc205*gc205)*(-s + 2* (mH1*mH1) +\
 
   2* (mHc*mHc))* (MZ*MZ*MZ*MZ)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)) +\
 
   s*(8*CW*gc188*gc205*(RR1x1 + RR1x2)*v* (EL*EL)*( (mH1*mH1) - \
 
   (mHc*mHc))*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 +\
 
   L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + 16* (CW*CW)* (gc188*gc188)*\
 
   (gc205*gc205)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(2*t*u + 2*\
 
   (mH1*mH1*mH1*mH1) - 2*(2*s - t + u)* (mHc*mHc) - 2* (mH1*mH1)*(2*s + t - u\
 
   + 2* (mHc*mHc)) + 2* (mHc*mHc*mHc*mHc) + 2* (s*s) -  (t*t) -  (u*u)) - \
 
   (EL*EL*EL*EL)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*\
 
   (v*v)*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag + L4*RR1x1*Treal +\
 
   L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) +  (Treal*Treal)) +\
 
   (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)))* (v*v))) + \
 
   (MZ*MZ)*(40*CW*gc188*gc205*(RR1x1 + RR1x2)*(t - u)*v*\
 
   (EL*EL)*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 + L5)*RR1x1*v)\
 
   + (L4 - L5)*v* (RR1x2*RR1x2)) - 16* (CW*CW)* (gc188*gc188)*\
 
   (gc205*gc205)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(10*t*u + 12*\
 
   (mH1*mH1*mH1*mH1) - 16*s* (mHc*mHc) - 8* (mH1*mH1)*(2*s + 3* (mHc*mHc)) +\
 
   12* (mHc*mHc*mHc*mHc) + 8* (s*s) - 5* (t*t) - 5* (u*u)) + 5*\
 
   (EL*EL*EL*EL)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*\
 
   (v*v)*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag + L4*RR1x1*Treal +\
 
   L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) +  (Treal*Treal)) +\
 
   (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)))*\
 
   (v*v)))))/(64.* (CW*CW)* (MW*MW)* (MZ*MZ)* ((RR1x1 + RR1x2)*(RR1x1 +\
 
   RR1x2))*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H1HcveE(const double &cos_t, const double &s){
double t = (s* (mH1*mH1) + s* (mHc*mHc) +  (Me*Me)*(s -  (mH1*mH1) + \
 
   (mHc*mHc)) + s* (Mnue*Mnue) +  (mH1*mH1)* (Mnue*Mnue) -  (mHc*mHc)*\
 
   (Mnue*Mnue) + cos_t*s*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s + \
 
   (mHc*mHc)) +  (( (mHc*mHc) - s)*( (mHc*mHc) - s)))/s)*sqrt(( (Me*Me*Me*Me)\
 
   - 2* (Me*Me)*(s +  (Mnue*Mnue)) +  (( (Mnue*Mnue) - s)*( (Mnue*Mnue) -\
 
   s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mH1*mH1 + mHc*mHc + Mnue*Mnue + Me*Me;
return (4*gc188*gc249*gc86R*Me*(RR1x1 + RR1x2)*(-t + u +  (mH1*mH1) - \
 
   (mHc*mHc))*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 +\
 
   L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + 4* (gc188*gc188)*\
 
   (gc249*gc249)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mHc*mHc) +  (Me*Me)*(-s + 2* (mH1*mH1) + 2*\
 
   (mHc*mHc)) +  (mHc*mHc*mHc*mHc) - 2* (mH1*mH1)*(s +  (mHc*mHc) - \
 
   (Mnue*Mnue)) - s* (Mnue*Mnue) + 2* (mHc*mHc)* (Mnue*Mnue) +  (s*s) - \
 
   (t*t) -  (u*u)) -  (gc86R*gc86R)*(-s +  (Me*Me) +  (Mnue*Mnue))* ((RR1x1 +\
 
   RR1x2)*(RR1x1 + RR1x2))*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag +\
 
   L4*RR1x1*Treal + L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) + \
 
   (Treal*Treal)) + (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)))* (v*v)))/(4.* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*(\
 
   (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H1HcvmM(const double &cos_t, const double &s){
double t = (s* (mHc*mHc) + s* (MM*MM) +  (mHc*mHc)* (MM*MM) + s* (Mnum*Mnum)\
 
   -  (mHc*mHc)* (Mnum*Mnum) +  (mH1*mH1)*(s -  (MM*MM) +  (Mnum*Mnum)) +\
 
   cos_t*s*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mHc*mHc)) +  ((\
 
   (mHc*mHc) - s)*( (mHc*mHc) - s)))/s)*sqrt(( (MM*MM*MM*MM) - 2* (MM*MM)*(s\
 
   +  (Mnum*Mnum)) +  (( (Mnum*Mnum) - s)*( (Mnum*Mnum) - s)))/s) - \
 
   (s*s))/(2.*s);
double u = -s - t + mH1*mH1 + mHc*mHc + Mnum*Mnum + MM*MM;
return (4*gc188*gc250*gc87R*MM*(RR1x1 + RR1x2)*(-t + u +  (mH1*mH1) - \
 
   (mHc*mHc))*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 +\
 
   L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + 4* (gc188*gc188)*\
 
   (gc250*gc250)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) +  (mHc*mHc*mHc*mHc) - 2* (mH1*mH1)*(s +  (mHc*mHc) - \
 
   (Mnum*Mnum)) - s* (Mnum*Mnum) + 2* (mHc*mHc)*(-s +  (Mnum*Mnum)) +  (s*s)\
 
   -  (t*t) -  (u*u)) -  (gc87R*gc87R)*(-s +  (Mnum*Mnum))* ((RR1x1 +\
 
   RR1x2)*(RR1x1 + RR1x2))*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag +\
 
   L4*RR1x1*Treal + L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) + \
 
   (Treal*Treal)) + (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)))* (v*v)) +  (MM*MM)*(4* (gc188*gc188)* (gc250*gc250)*(-s +\
 
   2* (mH1*mH1) + 2* (mHc*mHc))*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)) - \
 
   (gc87R*gc87R)* ((RR1x1 + RR1x2)*(RR1x1 +\
 
   RR1x2))*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag + L4*RR1x1*Treal +\
 
   L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) +  (Treal*Treal)) +\
 
   (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)))*\
 
   (v*v))))/(4.* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*( (MW*MW*MW*MW) +  (s*s) +\
 
    (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H1HcvtTA(const double &cos_t, const double &s){
double t = (s* (mHc*mHc) + s* (Mnut*Mnut) -  (mHc*mHc)* (Mnut*Mnut) + \
 
   (mH1*mH1)*(s +  (Mnut*Mnut) -  (MTA*MTA)) + s* (MTA*MTA) +  (mHc*mHc)*\
 
   (MTA*MTA) + cos_t*s*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s + \
 
   (mHc*mHc)) +  (( (mHc*mHc) - s)*( (mHc*mHc) - s)))/s)*sqrt((\
 
   (Mnut*Mnut*Mnut*Mnut) - 2* (Mnut*Mnut)*(s +  (MTA*MTA)) +  (( (MTA*MTA) -\
 
   s)*( (MTA*MTA) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mH1*mH1 + mHc*mHc + Mnut*Mnut + MTA*MTA;
return (4*gc188*gc251*gc88R*MTA*(RR1x1 + RR1x2)*(-t + u +  (mH1*mH1) - \
 
   (mHc*mHc))*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 +\
 
   L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + 4* (gc188*gc188)*\
 
   (gc251*gc251)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) +  (mHc*mHc*mHc*mHc) - s* (Mnut*Mnut) - 2* (mH1*mH1)*(s\
 
   +  (mHc*mHc) -  (Mnut*Mnut) -  (MTA*MTA)) - s* (MTA*MTA) + 2*\
 
   (mHc*mHc)*(-s +  (Mnut*Mnut) +  (MTA*MTA)) +  (s*s) -  (t*t) -  (u*u)) - \
 
   (gc88R*gc88R)*(-s +  (Mnut*Mnut) +  (MTA*MTA))* ((RR1x1 + RR1x2)*(RR1x1 +\
 
   RR1x2))*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag + L4*RR1x1*Treal +\
 
   L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) +  (Treal*Treal)) +\
 
   (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)))* (v*v)))/(4.*\
 
   ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*( (MW*MW*MW*MW) +  (s*s) + \
 
   (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H1HcuD(const double &cos_t, const double &s){
double t = (s* (mH1*mH1) + s* (mHc*mHc) +  (MD*MD)*(s -  (mH1*mH1) + \
 
   (mHc*mHc)) + s* (MU*MU) +  (mH1*mH1)* (MU*MU) -  (mHc*mHc)* (MU*MU) +\
 
   cos_t*s*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mHc*mHc)) +  ((\
 
   (mHc*mHc) - s)*( (mHc*mHc) - s)))/s)*sqrt(( (MD*MD*MD*MD) - 2* (MD*MD)*(s\
 
   +  (MU*MU)) +  (( (MU*MU) - s)*( (MU*MU) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mH1*mH1 + mHc*mHc + MU*MU + MD*MD;
return (3*(4*gc188*gc259*(RR1x1 + RR1x2)*(gc78R*MD*(-t + u +  (mH1*mH1) - \
 
   (mHc*mHc)) + gc78L*MU*(-t + u -  (mH1*mH1) + \
 
   (mHc*mHc)))*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 +\
 
   L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + 4* (gc188*gc188)*\
 
   (gc259*gc259)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mHc*mHc) +  (MD*MD)*(-s + 2* (mH1*mH1) + 2*\
 
   (mHc*mHc)) +  (mHc*mHc*mHc*mHc) - 2* (mH1*mH1)*(s +  (mHc*mHc) -  (MU*MU))\
 
   - s* (MU*MU) + 2* (mHc*mHc)* (MU*MU) +  (s*s) -  (t*t) -  (u*u)) -\
 
   (4*gc78L*gc78R*MD*MU +  (gc78L*gc78L)*(-s +  (MD*MD) +  (MU*MU)) + \
 
   (gc78R*gc78R)*(-s +  (MD*MD) +  (MU*MU)))* ((RR1x1 + RR1x2)*(RR1x1 +\
 
   RR1x2))*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag + L4*RR1x1*Treal +\
 
   L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) +  (Treal*Treal)) +\
 
   (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)))*\
 
   (v*v))))/(4.* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*( (MW*MW*MW*MW) +  (s*s) +\
 
    (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H1HcuS(const double &cos_t, const double &s){
double t = (s* (mHc*mHc) + s* (MS*MS) +  (mHc*mHc)* (MS*MS) + s* (MU*MU) - \
 
   (mHc*mHc)* (MU*MU) +  (mH1*mH1)*(s -  (MS*MS) +  (MU*MU)) + cos_t*s*sqrt((\
 
   (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mHc*mHc)) +  (( (mHc*mHc) - s)*(\
 
   (mHc*mHc) - s)))/s)*sqrt(( (MS*MS*MS*MS) - 2* (MS*MS)*(s +  (MU*MU)) +  ((\
 
   (MU*MU) - s)*( (MU*MU) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mH1*mH1 + mHc*mHc + MU*MU + MS*MS;
return (3*(4*gc188*gc260*(RR1x1 + RR1x2)*(gc79R*MS*(-t + u +  (mH1*mH1) - \
 
   (mHc*mHc)) + gc79L*MU*(-t + u -  (mH1*mH1) + \
 
   (mHc*mHc)))*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 +\
 
   L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + 4* (gc188*gc188)*\
 
   (gc260*gc260)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) +  (mHc*mHc*mHc*mHc) - s* (MS*MS) - 2* (mH1*mH1)*(s + \
 
   (mHc*mHc) -  (MS*MS) -  (MU*MU)) - s* (MU*MU) + 2* (mHc*mHc)*(-s + \
 
   (MS*MS) +  (MU*MU)) +  (s*s) -  (t*t) -  (u*u)) - (4*gc79L*gc79R*MS*MU + \
 
   (gc79L*gc79L)*(-s +  (MS*MS) +  (MU*MU)) +  (gc79R*gc79R)*(-s +  (MS*MS) +\
 
    (MU*MU)))* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*(4*RR1x3*(-(L4*RR1x2*Timag)\
 
   + L5*RR1x2*Timag + L4*RR1x1*Treal + L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*(\
 
   (Timag*Timag) +  (Treal*Treal)) + (2*L4*L5*( (RR1x1*RR1x1) - \
 
   (RR1x2*RR1x2)) +  (L4*L4)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)) +  (L5*L5)*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2)))* (v*v))))/(4.* ((RR1x1 + RR1x2)*(RR1x1 +\
 
   RR1x2))*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H1HcuB(const double &cos_t, const double &s){
double t = (s* (mH1*mH1) + s* (mHc*mHc) +  (MB*MB)*(s -  (mH1*mH1) + \
 
   (mHc*mHc)) + s* (MU*MU) +  (mH1*mH1)* (MU*MU) -  (mHc*mHc)* (MU*MU) +\
 
   cos_t*s*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mHc*mHc)) +  ((\
 
   (mHc*mHc) - s)*( (mHc*mHc) - s)))/s)*sqrt(( (MB*MB*MB*MB) - 2* (MB*MB)*(s\
 
   +  (MU*MU)) +  (( (MU*MU) - s)*( (MU*MU) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mH1*mH1 + mHc*mHc + MU*MU + MB*MB;
return (3*(4*gc188*gc258*(RR1x1 + RR1x2)*(gc77R*MB*(-t + u +  (mH1*mH1) - \
 
   (mHc*mHc)) + gc77L*MU*(-t + u -  (mH1*mH1) + \
 
   (mHc*mHc)))*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 +\
 
   L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + 4* (gc188*gc188)*\
 
   (gc258*gc258)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mHc*mHc) +  (MB*MB)*(-s + 2* (mH1*mH1) + 2*\
 
   (mHc*mHc)) +  (mHc*mHc*mHc*mHc) - 2* (mH1*mH1)*(s +  (mHc*mHc) -  (MU*MU))\
 
   - s* (MU*MU) + 2* (mHc*mHc)* (MU*MU) +  (s*s) -  (t*t) -  (u*u)) -\
 
   (4*gc77L*gc77R*MB*MU +  (gc77L*gc77L)*(-s +  (MB*MB) +  (MU*MU)) + \
 
   (gc77R*gc77R)*(-s +  (MB*MB) +  (MU*MU)))* ((RR1x1 + RR1x2)*(RR1x1 +\
 
   RR1x2))*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag + L4*RR1x1*Treal +\
 
   L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) +  (Treal*Treal)) +\
 
   (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)))*\
 
   (v*v))))/(4.* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*( (MW*MW*MW*MW) +  (s*s) +\
 
    (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H1HccD(const double &cos_t, const double &s){
double t = (s* (MD*MD) + s* (mH1*mH1) -  (MD*MD)* (mH1*mH1) +  (MC*MC)*(s + \
 
   (mH1*mH1) -  (mHc*mHc)) + s* (mHc*mHc) +  (MD*MD)* (mHc*mHc) +\
 
   cos_t*s*sqrt(( (MC*MC*MC*MC) - 2* (MC*MC)*(s +  (MD*MD)) +  (( (MD*MD) -\
 
   s)*( (MD*MD) - s)))/s)*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s + \
 
   (mHc*mHc)) +  (( (mHc*mHc) - s)*( (mHc*mHc) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mH1*mH1 + mHc*mHc + MC*MC + MD*MD;
return (3*(-4*gc188*gc253*(RR1x1 + RR1x2)*(gc72L*MC*(t - u +  (mH1*mH1) - \
 
   (mHc*mHc)) + gc72R*MD*(t - u -  (mH1*mH1) + \
 
   (mHc*mHc)))*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 +\
 
   L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + 4* (gc188*gc188)*\
 
   (gc253*gc253)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(2*t*u - 2*s* (mH1*mH1) + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mHc*mHc) - 2* (mH1*mH1)* (mHc*mHc) + \
 
   (MC*MC)*(-s + 2* (mH1*mH1) + 2* (mHc*mHc)) +  (MD*MD)*(-s + 2* (mH1*mH1) +\
 
   2* (mHc*mHc)) +  (mHc*mHc*mHc*mHc) +  (s*s) -  (t*t) -  (u*u)) -\
 
   (4*gc72L*gc72R*MC*MD +  (gc72L*gc72L)*(-s +  (MC*MC) +  (MD*MD)) + \
 
   (gc72R*gc72R)*(-s +  (MC*MC) +  (MD*MD)))* ((RR1x1 + RR1x2)*(RR1x1 +\
 
   RR1x2))*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag + L4*RR1x1*Treal +\
 
   L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) +  (Treal*Treal)) +\
 
   (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)))*\
 
   (v*v))))/(4.* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*( (MW*MW*MW*MW) +  (s*s) +\
 
    (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H1HccS(const double &cos_t, const double &s){
double t = (s* (mH1*mH1) +  (MC*MC)*(s +  (mH1*mH1) -  (mHc*mHc)) + s*\
 
   (mHc*mHc) + s* (MS*MS) -  (mH1*mH1)* (MS*MS) +  (mHc*mHc)* (MS*MS) +\
 
   cos_t*s*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mHc*mHc)) +  ((\
 
   (mHc*mHc) - s)*( (mHc*mHc) - s)))/s)*sqrt(( (MC*MC*MC*MC) - 2* (MC*MC)*(s\
 
   +  (MS*MS)) +  (( (MS*MS) - s)*( (MS*MS) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mH1*mH1 + mHc*mHc + MC*MC + MS*MS;
return (3*(-4*gc188*gc254*(RR1x1 + RR1x2)*(gc73L*MC*(t - u +  (mH1*mH1) - \
 
   (mHc*mHc)) + gc73R*MS*(t - u -  (mH1*mH1) + \
 
   (mHc*mHc)))*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 +\
 
   L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + 4* (gc188*gc188)*\
 
   (gc254*gc254)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mHc*mHc) +  (MC*MC)*(-s + 2* (mH1*mH1) + 2*\
 
   (mHc*mHc)) +  (mHc*mHc*mHc*mHc) - 2* (mH1*mH1)*(s +  (mHc*mHc) -  (MS*MS))\
 
   - s* (MS*MS) + 2* (mHc*mHc)* (MS*MS) +  (s*s) -  (t*t) -  (u*u)) -\
 
   (4*gc73L*gc73R*MC*MS +  (gc73L*gc73L)*(-s +  (MC*MC) +  (MS*MS)) + \
 
   (gc73R*gc73R)*(-s +  (MC*MC) +  (MS*MS)))* ((RR1x1 + RR1x2)*(RR1x1 +\
 
   RR1x2))*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag + L4*RR1x1*Treal +\
 
   L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) +  (Treal*Treal)) +\
 
   (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)))*\
 
   (v*v))))/(4.* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*( (MW*MW*MW*MW) +  (s*s) +\
 
    (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H1HccB(const double &cos_t, const double &s){
double t = (s* (MC*MC) + s* (mH1*mH1) +  (MC*MC)* (mH1*mH1) + s* (mHc*mHc) - \
 
   (MC*MC)* (mHc*mHc) +  (MB*MB)*(s -  (mH1*mH1) +  (mHc*mHc)) +\
 
   cos_t*s*sqrt(( (MB*MB*MB*MB) - 2* (MB*MB)*(s +  (MC*MC)) +  (( (MC*MC) -\
 
   s)*( (MC*MC) - s)))/s)*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s + \
 
   (mHc*mHc)) +  (( (mHc*mHc) - s)*( (mHc*mHc) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mH1*mH1 + mHc*mHc + MC*MC + MB*MB;
return (3*(4*gc188*gc252*(RR1x1 + RR1x2)*(gc71R*MB*(-t + u +  (mH1*mH1) - \
 
   (mHc*mHc)) + gc71L*MC*(-t + u -  (mH1*mH1) + \
 
   (mHc*mHc)))*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 +\
 
   L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + 4* (gc188*gc188)*\
 
   (gc252*gc252)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(2*t*u - 2*s* (mH1*mH1) + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mHc*mHc) - 2* (mH1*mH1)* (mHc*mHc) + \
 
   (MB*MB)*(-s + 2* (mH1*mH1) + 2* (mHc*mHc)) +  (MC*MC)*(-s + 2* (mH1*mH1) +\
 
   2* (mHc*mHc)) +  (mHc*mHc*mHc*mHc) +  (s*s) -  (t*t) -  (u*u)) -\
 
   (4*gc71L*gc71R*MB*MC +  (gc71L*gc71L)*(-s +  (MB*MB) +  (MC*MC)) + \
 
   (gc71R*gc71R)*(-s +  (MB*MB) +  (MC*MC)))* ((RR1x1 + RR1x2)*(RR1x1 +\
 
   RR1x2))*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag + L4*RR1x1*Treal +\
 
   L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) +  (Treal*Treal)) +\
 
   (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)))*\
 
   (v*v))))/(4.* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*( (MW*MW*MW*MW) +  (s*s) +\
 
    (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H1HctD(const double &cos_t, const double &s){
double t = (s* (mH1*mH1) + s* (mHc*mHc) +  (MD*MD)*(s -  (mH1*mH1) + \
 
   (mHc*mHc)) + s* (MT*MT) +  (mH1*mH1)* (MT*MT) -  (mHc*mHc)* (MT*MT) +\
 
   cos_t*s*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mHc*mHc)) +  ((\
 
   (mHc*mHc) - s)*( (mHc*mHc) - s)))/s)*sqrt(( (MD*MD*MD*MD) - 2* (MD*MD)*(s\
 
   +  (MT*MT)) +  (( (MT*MT) - s)*( (MT*MT) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mH1*mH1 + mHc*mHc + MT*MT + MD*MD;
return (3*(4*gc188*gc256*(RR1x1 + RR1x2)*(gc75R*MD*(-t + u +  (mH1*mH1) - \
 
   (mHc*mHc)) + gc75L*MT*(-t + u -  (mH1*mH1) + \
 
   (mHc*mHc)))*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 +\
 
   L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + 4* (gc188*gc188)*\
 
   (gc256*gc256)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mHc*mHc) +  (MD*MD)*(-s + 2* (mH1*mH1) + 2*\
 
   (mHc*mHc)) +  (mHc*mHc*mHc*mHc) - 2* (mH1*mH1)*(s +  (mHc*mHc) -  (MT*MT))\
 
   - s* (MT*MT) + 2* (mHc*mHc)* (MT*MT) +  (s*s) -  (t*t) -  (u*u)) -\
 
   (4*gc75L*gc75R*MD*MT +  (gc75L*gc75L)*(-s +  (MD*MD) +  (MT*MT)) + \
 
   (gc75R*gc75R)*(-s +  (MD*MD) +  (MT*MT)))* ((RR1x1 + RR1x2)*(RR1x1 +\
 
   RR1x2))*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag + L4*RR1x1*Treal +\
 
   L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) +  (Treal*Treal)) +\
 
   (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)))*\
 
   (v*v))))/(4.* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*( (MW*MW*MW*MW) +  (s*s) +\
 
    (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H1HctS(const double &cos_t, const double &s){
double t = (s* (mHc*mHc) + s* (MS*MS) +  (mHc*mHc)* (MS*MS) + s* (MT*MT) - \
 
   (mHc*mHc)* (MT*MT) +  (mH1*mH1)*(s -  (MS*MS) +  (MT*MT)) + cos_t*s*sqrt((\
 
   (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mHc*mHc)) +  (( (mHc*mHc) - s)*(\
 
   (mHc*mHc) - s)))/s)*sqrt(( (MS*MS*MS*MS) - 2* (MS*MS)*(s +  (MT*MT)) +  ((\
 
   (MT*MT) - s)*( (MT*MT) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mH1*mH1 + mHc*mHc + MT*MT + MS*MS;
return (3*(4*gc188*gc257*(RR1x1 + RR1x2)*(gc76R*MS*(-t + u +  (mH1*mH1) - \
 
   (mHc*mHc)) + gc76L*MT*(-t + u -  (mH1*mH1) + \
 
   (mHc*mHc)))*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 +\
 
   L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + 4* (gc188*gc188)*\
 
   (gc257*gc257)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) +  (mHc*mHc*mHc*mHc) - s* (MS*MS) - 2* (mH1*mH1)*(s + \
 
   (mHc*mHc) -  (MS*MS) -  (MT*MT)) - s* (MT*MT) + 2* (mHc*mHc)*(-s + \
 
   (MS*MS) +  (MT*MT)) +  (s*s) -  (t*t) -  (u*u)) - (4*gc76L*gc76R*MS*MT + \
 
   (gc76L*gc76L)*(-s +  (MS*MS) +  (MT*MT)) +  (gc76R*gc76R)*(-s +  (MS*MS) +\
 
    (MT*MT)))* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*(4*RR1x3*(-(L4*RR1x2*Timag)\
 
   + L5*RR1x2*Timag + L4*RR1x1*Treal + L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*(\
 
   (Timag*Timag) +  (Treal*Treal)) + (2*L4*L5*( (RR1x1*RR1x1) - \
 
   (RR1x2*RR1x2)) +  (L4*L4)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)) +  (L5*L5)*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2)))* (v*v))))/(4.* ((RR1x1 + RR1x2)*(RR1x1 +\
 
   RR1x2))*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H1HctB(const double &cos_t, const double &s){
double t = (s* (mH1*mH1) + s* (mHc*mHc) +  (MB*MB)*(s -  (mH1*mH1) + \
 
   (mHc*mHc)) + s* (MT*MT) +  (mH1*mH1)* (MT*MT) -  (mHc*mHc)* (MT*MT) +\
 
   cos_t*s*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mHc*mHc)) +  ((\
 
   (mHc*mHc) - s)*( (mHc*mHc) - s)))/s)*sqrt(( (MB*MB*MB*MB) - 2* (MB*MB)*(s\
 
   +  (MT*MT)) +  (( (MT*MT) - s)*( (MT*MT) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mH1*mH1 + mHc*mHc + MT*MT + MB*MB;
return (3*(4*gc188*gc255*(RR1x1 + RR1x2)*(gc74R*MB*(-t + u +  (mH1*mH1) - \
 
   (mHc*mHc)) + gc74L*MT*(-t + u -  (mH1*mH1) + \
 
   (mHc*mHc)))*(-2*RR1x2*RR1x3*Timag + RR1x1*(2*RR1x3*Treal + (L4 +\
 
   L5)*RR1x1*v) + (L4 - L5)*v* (RR1x2*RR1x2)) + 4* (gc188*gc188)*\
 
   (gc255*gc255)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mHc*mHc) +  (MB*MB)*(-s + 2* (mH1*mH1) + 2*\
 
   (mHc*mHc)) +  (mHc*mHc*mHc*mHc) - 2* (mH1*mH1)*(s +  (mHc*mHc) -  (MT*MT))\
 
   - s* (MT*MT) + 2* (mHc*mHc)* (MT*MT) +  (s*s) -  (t*t) -  (u*u)) -\
 
   (4*gc74L*gc74R*MB*MT +  (gc74L*gc74L)*(-s +  (MB*MB) +  (MT*MT)) + \
 
   (gc74R*gc74R)*(-s +  (MB*MB) +  (MT*MT)))* ((RR1x1 + RR1x2)*(RR1x1 +\
 
   RR1x2))*(4*RR1x3*(-(L4*RR1x2*Timag) + L5*RR1x2*Timag + L4*RR1x1*Treal +\
 
   L5*RR1x1*Treal)*v + 4* (RR1x3*RR1x3)*( (Timag*Timag) +  (Treal*Treal)) +\
 
   (2*L4*L5*( (RR1x1*RR1x1) -  (RR1x2*RR1x2)) +  (L4*L4)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)) +  (L5*L5)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2)))*\
 
   (v*v))))/(4.* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))*( (MW*MW*MW*MW) +  (s*s) +\
 
    (MW*MW)*(-2*s +  (WW*WW))));
}
