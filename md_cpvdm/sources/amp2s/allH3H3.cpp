///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::H3H3hh(const double &cos_t, const double &s){
double t =  (mH3*mH3) + (-s + cos_t*sqrt(s - 4* (mH3*mH3))*sqrt(s - 4*\
 
   (mHsm*mHsm)))/2. +  (mHsm*mHsm);
double u = -s - t + mH3*mH3 + mH3*mH3 + mHsm*mHsm + mHsm*mHsm;
return  (L5*L5)* (RR3x1*RR3x1*RR3x1*RR3x1) - 2* (L5*L5)* (RR3x1*RR3x1)*\
 
   (RR3x2*RR3x2) + 2*L3*L5* (RR3x1*RR3x1)*( (RR3x1*RR3x1) +  (RR3x2*RR3x2)) +\
 
   2*L4*L5* (RR3x1*RR3x1)*( (RR3x1*RR3x1) +  (RR3x2*RR3x2)) - 2*L3*L5*\
 
   (RR3x2*RR3x2)*( (RR3x1*RR3x1) +  (RR3x2*RR3x2)) - 2*L4*L5* (RR3x2*RR3x2)*(\
 
   (RR3x1*RR3x1) +  (RR3x2*RR3x2)) +  (L5*L5)* (RR3x2*RR3x2*RR3x2*RR3x2) +\
 
   2*L5*L7* (RR3x1*RR3x1)* (RR3x3*RR3x3) - 2*L5*L7* (RR3x2*RR3x2)*\
 
   (RR3x3*RR3x3) + 2*L3*L7*( (RR3x1*RR3x1) +  (RR3x2*RR3x2))* (RR3x3*RR3x3) +\
 
   2*L4*L7*( (RR3x1*RR3x1) +  (RR3x2*RR3x2))* (RR3x3*RR3x3) +  (L7*L7)*\
 
   (RR3x3*RR3x3*RR3x3*RR3x3) - (2*L5* (RR3x1*RR3x1)* ((-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)))/(-t +  (mH3*mH3)) - (2*L5*\
 
   (RR3x1*RR3x1)* ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)))/(-u +  (mH3*mH3)) + (2*L5* (RR3x2*RR3x2)*\
 
   ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)*\
 
   (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)))/(-t +  (mH3*mH3)) + (2*L5* (RR3x2*RR3x2)*\
 
   ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)*\
 
   (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)))/(-u +  (mH3*mH3)) - (2*L3*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))* ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)))/(-t +  (mH3*mH3)) - (2*L4*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))* ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)))/(-t +  (mH3*mH3)) - (2*L3*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))* ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)))/(-u +  (mH3*mH3)) - (2*L4*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))* ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)))/(-u +  (mH3*mH3)) - (2*L7* (RR3x3*RR3x3)*\
 
   ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)*\
 
   (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)))/(-t +  (mH3*mH3)) - (2*L7* (RR3x3*RR3x3)*\
 
   ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)*\
 
   (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)))/(-u +  (mH3*mH3)) + (2* ((-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)))/((-t +  (mH3*mH3))*(-u + \
 
   (mH3*mH3))) +  ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v))/ (( (mH3*mH3) - t)*( (mH3*mH3) - t)) + \
 
   ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)*\
 
   (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v))/ (( (mH3*mH3) - u)*( (mH3*mH3) - u)) + (2*L5*\
 
   (RR3x2*RR3x2)* ((-(RR1x1*(RR3x3*Treal + (L3 + L4 + L5)*RR3x1*v)) +\
 
   RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) + RR1x3*(RR3x2*Timag -\
 
   RR3x1*Treal - L7*RR3x3*v))*(-(RR1x1*(RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR3x1*v)) + RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR1x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))))/(-t +  (mH1*mH1)) +\
 
   (2*L5* (RR3x2*RR3x2)* ((-(RR1x1*(RR3x3*Treal + (L3 + L4 + L5)*RR3x1*v)) +\
 
   RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) + RR1x3*(RR3x2*Timag -\
 
   RR3x1*Treal - L7*RR3x3*v))*(-(RR1x1*(RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR3x1*v)) + RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR1x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))))/(-u +  (mH1*mH1)) - (2*\
 
   ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)*\
 
   (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v))* ((-(RR1x1*(RR3x3*Treal + (L3 + L4 + L5)*RR3x1*v)) +\
 
   RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) + RR1x3*(RR3x2*Timag -\
 
   RR3x1*Treal - L7*RR3x3*v))*(-(RR1x1*(RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR3x1*v)) + RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR1x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))))/((-t +  (mH1*mH1))*(t - \
 
   (mH3*mH3))) - (2* ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4\
 
   + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v))* ((-(RR1x1*(RR3x3*Treal + (L3 + L4 + L5)*RR3x1*v)) +\
 
   RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) + RR1x3*(RR3x2*Timag -\
 
   RR3x1*Treal - L7*RR3x3*v))*(-(RR1x1*(RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR3x1*v)) + RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR1x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))))/((-u +  (mH1*mH1))*(u - \
 
   (mH3*mH3))) + (2* ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4\
 
   + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v))* ((-(RR1x1*(RR3x3*Treal + (L3 + L4 + L5)*RR3x1*v)) +\
 
   RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) + RR1x3*(RR3x2*Timag -\
 
   RR3x1*Treal - L7*RR3x3*v))*(-(RR1x1*(RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR3x1*v)) + RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR1x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))))/((-u +  (mH1*mH1))*(-t +\
 
    (mH3*mH3))) + (2* ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4\
 
   + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v))* ((-(RR1x1*(RR3x3*Treal + (L3 + L4 + L5)*RR3x1*v)) +\
 
   RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) + RR1x3*(RR3x2*Timag -\
 
   RR3x1*Treal - L7*RR3x3*v))*(-(RR1x1*(RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR3x1*v)) + RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR1x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))))/((-t +  (mH1*mH1))*(-u +\
 
    (mH3*mH3))) + (2*L5* (RR3x2*RR3x2)* ((-(RR2x1*(RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR3x1*v)) + RR2x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR2x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))*(-(RR2x1*(RR3x3*Treal +\
 
   (L3 + L4 + L5)*RR3x1*v)) + RR2x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR2x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))))/(-t +  (mH2*mH2)) +\
 
   (2*L5* (RR3x2*RR3x2)* ((-(RR2x1*(RR3x3*Treal + (L3 + L4 + L5)*RR3x1*v)) +\
 
   RR2x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) + RR2x3*(RR3x2*Timag -\
 
   RR3x1*Treal - L7*RR3x3*v))*(-(RR2x1*(RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR3x1*v)) + RR2x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR2x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))))/(-u +  (mH2*mH2)) - (2*\
 
   ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)*\
 
   (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v))* ((-(RR2x1*(RR3x3*Treal + (L3 + L4 + L5)*RR3x1*v)) +\
 
   RR2x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) + RR2x3*(RR3x2*Timag -\
 
   RR3x1*Treal - L7*RR3x3*v))*(-(RR2x1*(RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR3x1*v)) + RR2x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR2x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))))/((-t +  (mH2*mH2))*(t - \
 
   (mH3*mH3))) - (2* ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4\
 
   + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v))* ((-(RR2x1*(RR3x3*Treal + (L3 + L4 + L5)*RR3x1*v)) +\
 
   RR2x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) + RR2x3*(RR3x2*Timag -\
 
   RR3x1*Treal - L7*RR3x3*v))*(-(RR2x1*(RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR3x1*v)) + RR2x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR2x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))))/((-u +  (mH2*mH2))*(u - \
 
   (mH3*mH3))) + (2* ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4\
 
   + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v))* ((-(RR2x1*(RR3x3*Treal + (L3 + L4 + L5)*RR3x1*v)) +\
 
   RR2x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) + RR2x3*(RR3x2*Timag -\
 
   RR3x1*Treal - L7*RR3x3*v))*(-(RR2x1*(RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR3x1*v)) + RR2x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR2x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))))/((-u +  (mH2*mH2))*(-t +\
 
    (mH3*mH3))) + (2* ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4\
 
   + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v))* ((-(RR2x1*(RR3x3*Treal + (L3 + L4 + L5)*RR3x1*v)) +\
 
   RR2x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) + RR2x3*(RR3x2*Timag -\
 
   RR3x1*Treal - L7*RR3x3*v))*(-(RR2x1*(RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR3x1*v)) + RR2x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR2x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))))/((-t +  (mH2*mH2))*(-u +\
 
    (mH3*mH3))) - (2*L5* (RR3x1*RR3x1)* ((-(RR1x2*RR3x3*Timag) +\
 
   RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/(-t +  (mH1*mH1)) - (2*L5* (RR3x1*RR3x1)*\
 
   ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/(-u +  (mH1*mH1)) - (2*L3*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))* ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v +\
 
   RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))))/(-t +  (mH1*mH1)) -\
 
   (2*L4*( (RR3x1*RR3x1) +  (RR3x2*RR3x2))* ((-(RR1x2*RR3x3*Timag) +\
 
   RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/(-t +  (mH1*mH1)) - (2*L3*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))* ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v +\
 
   RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))))/(-u +  (mH1*mH1)) -\
 
   (2*L4*( (RR3x1*RR3x1) +  (RR3x2*RR3x2))* ((-(RR1x2*RR3x3*Timag) +\
 
   RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/(-u +  (mH1*mH1)) - (2*L7* (RR3x3*RR3x3)*\
 
   ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/(-t +  (mH1*mH1)) - (2*L7* (RR3x3*RR3x3)*\
 
   ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/(-u +  (mH1*mH1)) + (2*\
 
   ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v +\
 
   RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) +\
 
   RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))))/((-t +  (mH1*mH1))*(-u +  (mH1*mH1))) + \
 
   ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v +\
 
   RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) +\
 
   RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v)))/\
 
   (( (mH1*mH1) - t)*( (mH1*mH1) - t)) +  ((-(RR1x2*RR3x3*Timag) +\
 
   RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v +\
 
   RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) +\
 
   RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v)))/\
 
   (( (mH1*mH1) - u)*( (mH1*mH1) - u)) - (2*L5* (RR3x1*RR3x1)*\
 
   ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/(-t +  (mH2*mH2)) - (2*L5* (RR3x1*RR3x1)*\
 
   ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/(-u +  (mH2*mH2)) - (2*L3*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))* ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))))/(-t +  (mH2*mH2)) -\
 
   (2*L4*( (RR3x1*RR3x1) +  (RR3x2*RR3x2))* ((-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/(-t +  (mH2*mH2)) - (2*L3*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))* ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))))/(-u +  (mH2*mH2)) -\
 
   (2*L4*( (RR3x1*RR3x1) +  (RR3x2*RR3x2))* ((-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/(-u +  (mH2*mH2)) - (2*L7* (RR3x3*RR3x3)*\
 
   ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/(-t +  (mH2*mH2)) - (2*L7* (RR3x3*RR3x3)*\
 
   ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/(-u +  (mH2*mH2)) - (2*\
 
   ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v)))* ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))))/((-t +  (mH1*mH1))*(t -  (mH2*mH2))) - (2*\
 
   ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v)))* ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))))/((-u +  (mH1*mH1))*(u -  (mH2*mH2))) + (2*\
 
   ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v)))* ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))))/((-u +  (mH1*mH1))*(-t +  (mH2*mH2))) + (2*\
 
   ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v)))* ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))))/((-t +  (mH1*mH1))*(-u +  (mH2*mH2))) + (2*\
 
   ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))))/((-t +  (mH2*mH2))*(-u +  (mH2*mH2))) + \
 
   ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v)))/\
 
   (( (mH2*mH2) - t)*( (mH2*mH2) - t)) +  ((-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v)))/\
 
   (( (mH2*mH2) - u)*( (mH2*mH2) - u)) - (6*L1*L5*v*(-s +  (mHsm*mHsm))*\
 
   (RR3x1*RR3x1)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3)))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm))) + (6*L1*L5*v*(-s +  (mHsm*mHsm))*\
 
   (RR3x2*RR3x2)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3)))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm))) - (6*L1*L3*v*(-s +  (mHsm*mHsm))*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3)))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm))) - (6*L1*L4*v*(-s +  (mHsm*mHsm))*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3)))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm))) - (6*L1*L7*v*(-s +  (mHsm*mHsm))*\
 
   (RR3x3*RR3x3)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3)))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm))) + (9* (L1*L1)* (v*v)* ((-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s)\
 
   +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (6*L1*v*(-s +  (mHsm*mHsm))*\
 
   ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)*\
 
   (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)))/((-t +  (mH3*mH3))*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + (6*L1*v*(-s +  (mHsm*mHsm))*\
 
   ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)*\
 
   (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)))/((-u +  (mH3*mH3))*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + (6*L1*v*(-s + \
 
   (mHsm*mHsm))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3))* ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v +\
 
   RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))))/((-t +  (mH1*mH1))*(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) +\
 
   (6*L1*v*(-s +  (mHsm*mHsm))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3))* ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v +\
 
   RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))))/((-u +  (mH1*mH1))*(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) +\
 
   (6*L1*v*(-s +  (mHsm*mHsm))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3))* ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))))/((-t +  (mH2*mH2))*(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) +\
 
   (6*L1*v*(-s +  (mHsm*mHsm))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3))* ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))))/((-u +  (mH2*mH2))*(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) +\
 
   2*L3*L4* (( (RR3x1*RR3x1) +  (RR3x2*RR3x2))*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))) +  (L3*L3)* (( (RR3x1*RR3x1) +  (RR3x2*RR3x2))*(\
 
   (RR3x1*RR3x1) +  (RR3x2*RR3x2))) +  (L4*L4)* (( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))*( (RR3x1*RR3x1) +  (RR3x2*RR3x2)));
}
double DT::H3H3hZ(const double &cos_t, const double &s){
double t = (-s + 2* (mH3*mH3) +  (mHsm*mHsm) +  (MZ*MZ) + cos_t*sqrt(s - 4*\
 
   (mH3*mH3))*sqrt(( (mHsm*mHsm*mHsm*mHsm) - 2* (mHsm*mHsm)*(s +  (MZ*MZ)) + \
 
   (( (MZ*MZ) - s)*( (MZ*MZ) - s)))/s))/2.;
double u = -s - t + mH3*mH3 + mH3*mH3 + mHsm*mHsm + MZ*MZ;
return -((gc213*gc214*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*((-t +  (mH3*mH3))*(-s\
 
   - t + u +  (mHsm*mHsm)) + (s - 2*t - u - 5* (mH3*mH3) + 3* (mHsm*mHsm))*\
 
   (MZ*MZ) +  (MZ*MZ*MZ*MZ)))/((-u +  (mH1*mH1))*(-t +  (mH2*mH2))* (MZ*MZ)))\
 
   - (gc213*gc214*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*((-t +  (mH3*mH3))*(-s\
 
   - t + u +  (mHsm*mHsm)) + (s - 2*t - u - 5* (mH3*mH3) + 3* (mHsm*mHsm))*\
 
   (MZ*MZ) +  (MZ*MZ*MZ*MZ)))/((-t +  (mH1*mH1))*(-u +  (mH2*mH2))* (MZ*MZ))\
 
   - (2*gc213*gc214*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*( (mH3*mH3*mH3*mH3) -\
 
   2* (mH3*mH3)*(t +  (MZ*MZ)) +  (( (MZ*MZ) - t)*( (MZ*MZ) - t))))/((-t + \
 
   (mH1*mH1))*(t -  (mH2*mH2))* (MZ*MZ)) - (gc213*gc214*(-(RR1x2*RR3x3*Timag)\
 
   + RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-2*(-s - t + u + 8* (mH3*mH3) +  (mHsm*mHsm))*\
 
   (MZ*MZ) +  (MZ*MZ*MZ*MZ) +  (( (mHsm*mHsm) - s - t + u)*( (mHsm*mHsm) - s\
 
   - t + u))))/(2.*(-u +  (mH1*mH1))*(u -  (mH2*mH2))* (MZ*MZ)) - (\
 
   (gc213*gc213)*((-t +  (mH3*mH3))*(-s - t + u +  (mHsm*mHsm)) + (s - 2*t -\
 
   u - 5* (mH3*mH3) + 3* (mHsm*mHsm))* (MZ*MZ) +  (MZ*MZ*MZ*MZ))*\
 
   ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/((-t +  (mH1*mH1))*(-u +  (mH1*mH1))*\
 
   (MZ*MZ)) + ( (gc213*gc213)*( (mH3*mH3*mH3*mH3) - 2* (mH3*mH3)*(t + \
 
   (MZ*MZ)) +  (( (MZ*MZ) - t)*( (MZ*MZ) - t)))* ((-(RR1x2*RR3x3*Timag) +\
 
   RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/( (MZ*MZ)* (( (mH1*mH1) - t)*( (mH1*mH1) -\
 
   t))) + ( (gc213*gc213)*(-2*(-s - t + u + 8* (mH3*mH3) +  (mHsm*mHsm))*\
 
   (MZ*MZ) +  (MZ*MZ*MZ*MZ) +  (( (mHsm*mHsm) - s - t + u)*( (mHsm*mHsm) - s\
 
   - t + u)))* ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v +\
 
   RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))))/(4.* (MZ*MZ)* ((\
 
   (mH1*mH1) - u)*( (mH1*mH1) - u))) - ( (gc214*gc214)*((-t +  (mH3*mH3))*(-s\
 
   - t + u +  (mHsm*mHsm)) + (s - 2*t - u - 5* (mH3*mH3) + 3* (mHsm*mHsm))*\
 
   (MZ*MZ) +  (MZ*MZ*MZ*MZ))* ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))))/((-t +  (mH2*mH2))*(-u +  (mH2*mH2))* (MZ*MZ)) + (\
 
   (gc214*gc214)*( (mH3*mH3*mH3*mH3) - 2* (mH3*mH3)*(t +  (MZ*MZ)) +  ((\
 
   (MZ*MZ) - t)*( (MZ*MZ) - t)))* ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal\
 
   + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))))/(\
 
   (MZ*MZ)* (( (mH2*mH2) - t)*( (mH2*mH2) - t))) + ( (gc214*gc214)*(-2*(-s -\
 
   t + u + 8* (mH3*mH3) +  (mHsm*mHsm))* (MZ*MZ) +  (MZ*MZ*MZ*MZ) +  ((\
 
   (mHsm*mHsm) - s - t + u)*( (mHsm*mHsm) - s - t + u)))*\
 
   ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/(4.* (MZ*MZ)* (( (mH2*mH2) - u)*( (mH2*mH2) -\
 
   u))) - (2*gc209*gc213*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-s +  (MZ*MZ))*((-s +  (mHsm*mHsm))*(-s - t +\
 
   u +  (mHsm*mHsm)) - (2*s - t + u + 2* (mHsm*mHsm))* (MZ*MZ) + \
 
   (MZ*MZ*MZ*MZ)))/((-u +  (mH1*mH1))* (MZ*MZ)*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (2*gc209*gc214*(RR3x1*RR3x3*Timag +\
 
   RR3x2*RR3x3*Treal + L5*RR3x1*RR3x2*v)*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-s\
 
   +  (MZ*MZ))*((-s +  (mHsm*mHsm))*(-s - t + u +  (mHsm*mHsm)) - (2*s - t +\
 
   u + 2* (mHsm*mHsm))* (MZ*MZ) +  (MZ*MZ*MZ*MZ)))/((-u +  (mH2*mH2))*\
 
   (MZ*MZ)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) +\
 
   (4*gc209*gc213*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-s +  (MZ*MZ))*((-t +  (mH3*mH3))*(-s + \
 
   (mHsm*mHsm)) + (-s - t - 2*u + 3* (mH3*mH3) + 3* (mHsm*mHsm))* (MZ*MZ) + \
 
   (MZ*MZ*MZ*MZ)))/((-t +  (mH1*mH1))* (MZ*MZ)*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (4*gc209*gc214*(RR3x1*RR3x3*Timag +\
 
   RR3x2*RR3x3*Treal + L5*RR3x1*RR3x2*v)*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-s\
 
   +  (MZ*MZ))*((-t +  (mH3*mH3))*(-s +  (mHsm*mHsm)) + (-s - t - 2*u + 3*\
 
   (mH3*mH3) + 3* (mHsm*mHsm))* (MZ*MZ) +  (MZ*MZ*MZ*MZ)))/((-t + \
 
   (mH2*mH2))* (MZ*MZ)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ)))) + (4* (gc209*gc209)*( (mHsm*mHsm*mHsm*mHsm) - 2* (mHsm*mHsm)*(s\
 
   +  (MZ*MZ)) +  (( (MZ*MZ) - s)*( (MZ*MZ) - s)))* ((RR3x1*RR3x3*Timag +\
 
   RR3x2*RR3x3*Treal + L5*RR3x1*RR3x2*v)*(RR3x1*RR3x3*Timag +\
 
   RR3x2*RR3x3*Treal + L5*RR3x1*RR3x2*v)))/( (MZ*MZ)*( (MZ*MZ*MZ*MZ) +  (s*s)\
 
   +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H3H3ZZ(const double &cos_t, const double &s){
double t =  (mH3*mH3) + (-s + cos_t*sqrt(s - 4* (mH3*mH3))*sqrt(s - 4*\
 
   (MZ*MZ)))/2. +  (MZ*MZ);
double u = -s - t + mH3*mH3 + mH3*mH3 + MZ*MZ + MZ*MZ;
return -0.5*( (gc213*gc213)* (gc214*gc214)*(-16* (mH3*mH3)* (MZ*MZ) +  ((s +\
 
   t - u)*(s + t - u)))*( (mH3*mH3*mH3*mH3) - 2* (mH3*mH3)*(u +  (MZ*MZ)) + \
 
   (( (MZ*MZ) - u)*( (MZ*MZ) - u))))/((-u +  (mH1*mH1))*(u -  (mH2*mH2))*\
 
   (MZ*MZ*MZ*MZ)) + ( (gc213*gc213*gc213*gc213)*(-16* (mH3*mH3)* (MZ*MZ) + \
 
   ((s + t - u)*(s + t - u)))*( (mH3*mH3*mH3*mH3) - 2* (mH3*mH3)*(u + \
 
   (MZ*MZ)) +  (( (MZ*MZ) - u)*( (MZ*MZ) - u))))/(4.* (MZ*MZ*MZ*MZ)* ((\
 
   (mH1*mH1) - u)*( (mH1*mH1) - u))) + ( (gc214*gc214*gc214*gc214)*(-16*\
 
   (mH3*mH3)* (MZ*MZ) +  ((s + t - u)*(s + t - u)))*( (mH3*mH3*mH3*mH3) - 2*\
 
   (mH3*mH3)*(u +  (MZ*MZ)) +  (( (MZ*MZ) - u)*( (MZ*MZ) - u))))/(4.*\
 
   (MZ*MZ*MZ*MZ)* (( (mH2*mH2) - u)*( (mH2*mH2) - u))) + (\
 
   (gc213*gc213*gc213*gc213)*(-8*(-s + 2*(t + u) + 4* (mH3*mH3))*\
 
   (MZ*MZ*MZ*MZ*MZ*MZ) + 16* (MZ*MZ*MZ*MZ*MZ*MZ*MZ*MZ) - (-t + \
 
   (mH3*mH3))*(-u +  (mH3*mH3))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MZ*MZ)*(-8*s*t*u + 8*s* (mH3*mH3*mH3*mH3) + (t + u)* (s*s) - (t + u)* ((t\
 
   - u)*(t - u)) - 2* (mH3*mH3)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MZ*MZ*MZ*MZ)*(2*t*u - 16*(s - t - u)* (mH3*mH3) + 16* (mH3*mH3*mH3*mH3) +\
 
    (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-t +  (mH1*mH1))*(-u +  (mH1*mH1))*\
 
   (MZ*MZ*MZ*MZ)) + ( (gc213*gc213)* (gc214*gc214)*(-8*(-s + 2*(t + u) + 4*\
 
   (mH3*mH3))* (MZ*MZ*MZ*MZ*MZ*MZ) + 16* (MZ*MZ*MZ*MZ*MZ*MZ*MZ*MZ) - (-t + \
 
   (mH3*mH3))*(-u +  (mH3*mH3))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MZ*MZ)*(-8*s*t*u + 8*s* (mH3*mH3*mH3*mH3) + (t + u)* (s*s) - (t + u)* ((t\
 
   - u)*(t - u)) - 2* (mH3*mH3)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MZ*MZ*MZ*MZ)*(2*t*u - 16*(s - t - u)* (mH3*mH3) + 16* (mH3*mH3*mH3*mH3) +\
 
    (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-u +  (mH1*mH1))*(-t +  (mH2*mH2))*\
 
   (MZ*MZ*MZ*MZ)) + ( (gc213*gc213)* (gc214*gc214)*(-8*(-s + 2*(t + u) + 4*\
 
   (mH3*mH3))* (MZ*MZ*MZ*MZ*MZ*MZ) + 16* (MZ*MZ*MZ*MZ*MZ*MZ*MZ*MZ) - (-t + \
 
   (mH3*mH3))*(-u +  (mH3*mH3))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MZ*MZ)*(-8*s*t*u + 8*s* (mH3*mH3*mH3*mH3) + (t + u)* (s*s) - (t + u)* ((t\
 
   - u)*(t - u)) - 2* (mH3*mH3)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MZ*MZ*MZ*MZ)*(2*t*u - 16*(s - t - u)* (mH3*mH3) + 16* (mH3*mH3*mH3*mH3) +\
 
    (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-t +  (mH1*mH1))*(-u +  (mH2*mH2))*\
 
   (MZ*MZ*MZ*MZ)) + ( (gc214*gc214*gc214*gc214)*(-8*(-s + 2*(t + u) + 4*\
 
   (mH3*mH3))* (MZ*MZ*MZ*MZ*MZ*MZ) + 16* (MZ*MZ*MZ*MZ*MZ*MZ*MZ*MZ) - (-t + \
 
   (mH3*mH3))*(-u +  (mH3*mH3))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MZ*MZ)*(-8*s*t*u + 8*s* (mH3*mH3*mH3*mH3) + (t + u)* (s*s) - (t + u)* ((t\
 
   - u)*(t - u)) - 2* (mH3*mH3)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MZ*MZ*MZ*MZ)*(2*t*u - 16*(s - t - u)* (mH3*mH3) + 16* (mH3*mH3*mH3*mH3) +\
 
    (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-t +  (mH2*mH2))*(-u +  (mH2*mH2))*\
 
   (MZ*MZ*MZ*MZ)) - ( (gc213*gc213)* (gc214*gc214)*( (mH3*mH3*mH3*mH3) - 2*\
 
   (mH3*mH3)*(t +  (MZ*MZ)) +  (( (MZ*MZ) - t)*( (MZ*MZ) - t)))*(-16*\
 
   (mH3*mH3)* (MZ*MZ) +  ((s - t + u)*(s - t + u))))/(2.*(-t +  (mH1*mH1))*(t\
 
   -  (mH2*mH2))* (MZ*MZ*MZ*MZ)) + ( (gc213*gc213*gc213*gc213)*(\
 
   (mH3*mH3*mH3*mH3) - 2* (mH3*mH3)*(t +  (MZ*MZ)) +  (( (MZ*MZ) - t)*(\
 
   (MZ*MZ) - t)))*(-16* (mH3*mH3)* (MZ*MZ) +  ((s - t + u)*(s - t +\
 
   u))))/(4.* (MZ*MZ*MZ*MZ)* (( (mH1*mH1) - t)*( (mH1*mH1) - t))) + (\
 
   (gc214*gc214*gc214*gc214)*( (mH3*mH3*mH3*mH3) - 2* (mH3*mH3)*(t + \
 
   (MZ*MZ)) +  (( (MZ*MZ) - t)*( (MZ*MZ) - t)))*(-16* (mH3*mH3)* (MZ*MZ) + \
 
   ((s - t + u)*(s - t + u))))/(4.* (MZ*MZ*MZ*MZ)* (( (mH2*mH2) - t)*(\
 
   (mH2*mH2) - t))) - ( (EL*EL)* (gc213*gc213)*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))*(s*(s + t - u)*(-u +  (mH3*mH3)) - 2*(s + 3*t + u + 4*\
 
   (mH3*mH3))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*t*(t - u)\
 
   + 3*s*(t + u) - 2*(3*s + t - u)* (mH3*mH3) +  (s*s)))* (( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW)*(-u +  (mH1*mH1))*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW)) - ( (EL*EL)* (gc214*gc214)*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))*(s*(s + t - u)*(-u +  (mH3*mH3)) - 2*(s + 3*t + u + 4*\
 
   (mH3*mH3))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*t*(t - u)\
 
   + 3*s*(t + u) - 2*(3*s + t - u)* (mH3*mH3) +  (s*s)))* (( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW)*(-u +  (mH2*mH2))*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW)) - ( (EL*EL)* (gc213*gc213)*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))*(s*(s - t + u)*(-t +  (mH3*mH3)) - 2*(s + t + 3*u + 4*\
 
   (mH3*mH3))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*u*(-t +\
 
   u) + 3*s*(t + u) - 2*(3*s - t + u)* (mH3*mH3) +  (s*s)))* (( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW)*(-t +  (mH1*mH1))*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW)) - ( (EL*EL)* (gc214*gc214)*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))*(s*(s - t + u)*(-t +  (mH3*mH3)) - 2*(s + t + 3*u + 4*\
 
   (mH3*mH3))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*u*(-t +\
 
   u) + 3*s*(t + u) - 2*(3*s - t + u)* (mH3*mH3) +  (s*s)))* (( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW)*(-t +  (mH2*mH2))*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW)) + (v* (EL*EL)* (gc213*gc213)*(-s + \
 
   (mHsm*mHsm))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3))*(s*(s + t - u)*(-u +  (mH3*mH3)) - 2*(s + 3*t + u + 4*\
 
   (mH3*mH3))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*t*(t - u)\
 
   + 3*s*(t + u) - 2*(3*s + t - u)* (mH3*mH3) +  (s*s)))* (( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW)*(-u +  (mH1*mH1))*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + (v* (EL*EL)* (gc214*gc214)*(-s + \
 
   (mHsm*mHsm))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3))*(s*(s + t - u)*(-u +  (mH3*mH3)) - 2*(s + 3*t + u + 4*\
 
   (mH3*mH3))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*t*(t - u)\
 
   + 3*s*(t + u) - 2*(3*s + t - u)* (mH3*mH3) +  (s*s)))* (( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW)*(-u +  (mH2*mH2))*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + (v* (EL*EL)* (gc213*gc213)*(-s + \
 
   (mHsm*mHsm))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3))*(s*(s - t + u)*(-t +  (mH3*mH3)) - 2*(s + t + 3*u + 4*\
 
   (mH3*mH3))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*u*(-t +\
 
   u) + 3*s*(t + u) - 2*(3*s - t + u)* (mH3*mH3) +  (s*s)))* (( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW)*(-t +  (mH1*mH1))*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + (v* (EL*EL)* (gc214*gc214)*(-s + \
 
   (mHsm*mHsm))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3))*(s*(s - t + u)*(-t +  (mH3*mH3)) - 2*(s + t + 3*u + 4*\
 
   (mH3*mH3))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*u*(-t +\
 
   u) + 3*s*(t + u) - 2*(3*s - t + u)* (mH3*mH3) +  (s*s)))* (( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW)*(-t +  (mH2*mH2))*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) - (v* (EL*EL*EL*EL)*(-s + \
 
   (mHsm*mHsm))*( (RR3x1*RR3x1) +  (RR3x2*RR3x2))*(-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v*\
 
   (RR3x2*RR3x2) + L7*v* (RR3x3*RR3x3))*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) + \
 
   (s*s))* (( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))))/(8.* (CW*CW*CW*CW)* (MZ*MZ*MZ*MZ)*\
 
   (SW*SW*SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))) + ( (EL*EL*EL*EL)*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) + \
 
   (s*s))* (v*v)* ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v))* (( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW)\
 
   +  (SW*SW))*( (CW*CW) +  (SW*SW))))/(16.* (CW*CW*CW*CW)* (MZ*MZ*MZ*MZ)*\
 
   (SW*SW*SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))) + ( (EL*EL*EL*EL)*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) + \
 
   (s*s))* (( (RR3x1*RR3x1) +  (RR3x2*RR3x2))*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2)))* (( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))))/(16.* (CW*CW*CW*CW)* (MZ*MZ*MZ*MZ)*\
 
   (SW*SW*SW*SW));
}
double DT::H3H3wW(const double &cos_t, const double &s){
double t =  (mH3*mH3) + (-s + cos_t*sqrt(s - 4* (mH3*mH3))*sqrt(s - 4*\
 
   (MW*MW)))/2. +  (MW*MW);
double u = -s - t + mH3*mH3 + mH3*mH3 + MW*MW + MW*MW;
return (gc181*gc192*v* (EL*EL)*(-s +  (mHsm*mHsm))*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3))*(s*(s + t - u)*(-u +  (mH3*mH3)) - 2*(s + 3*t + u + 4*\
 
   (mH3*mH3))* (MW*MW*MW*MW) + 8* (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(2*t*(t - u)\
 
   + 3*s*(t + u) - 2*(3*s + t - u)* (mH3*mH3) +  (s*s))))/(4.*(RR3x1 +\
 
   RR3x2)*(-u +  (mHc*mHc))* (MW*MW*MW*MW)* (SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +\
 
    (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + (gc181*gc192*v*\
 
   (EL*EL)*(-s +  (mHsm*mHsm))*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3))*(s*(s - t + u)*(-t +  (mH3*mH3)) - 2*(s + t + 3*u + 4*\
 
   (mH3*mH3))* (MW*MW*MW*MW) + 8* (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(2*u*(-t +\
 
   u) + 3*s*(t + u) - 2*(3*s - t + u)* (mH3*mH3) +  (s*s))))/(4.*(RR3x1 +\
 
   RR3x2)*(-t +  (mHc*mHc))* (MW*MW*MW*MW)* (SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +\
 
    (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) - (v* (EL*EL*EL*EL)*(-s + \
 
   (mHsm*mHsm))*( (RR3x1*RR3x1) +  (RR3x2*RR3x2))*(-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v*\
 
   (RR3x2*RR3x2) + L7*v* (RR3x3*RR3x3))*(-4*s* (MW*MW) + 12* (MW*MW*MW*MW) + \
 
   (s*s)))/(8.* (MW*MW*MW*MW)* (SW*SW*SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s)\
 
   +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + ( (EL*EL*EL*EL)*(-4*s* (MW*MW) +\
 
   12* (MW*MW*MW*MW) +  (s*s))* (v*v)* ((-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)))/(16.* (MW*MW*MW*MW)*\
 
   (SW*SW*SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))) - (gc181*gc192* (EL*EL)*(s*(s + t - u)*(-u +  (mH3*mH3)) -\
 
   2*(s + 3*t + u + 4* (mH3*mH3))* (MW*MW*MW*MW) + 8* (MW*MW*MW*MW*MW*MW) + \
 
   (MW*MW)*(2*t*(t - u) + 3*s*(t + u) - 2*(3*s + t - u)* (mH3*mH3) + \
 
   (s*s)))* (( (RR3x1*RR3x1) +  (RR3x2*RR3x2))*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))))/(4.*(RR3x1 + RR3x2)*(-u +  (mHc*mHc))* (MW*MW*MW*MW)*\
 
   (SW*SW)) - (gc181*gc192* (EL*EL)*(s*(s - t + u)*(-t +  (mH3*mH3)) - 2*(s +\
 
   t + 3*u + 4* (mH3*mH3))* (MW*MW*MW*MW) + 8* (MW*MW*MW*MW*MW*MW) + \
 
   (MW*MW)*(2*u*(-t + u) + 3*s*(t + u) - 2*(3*s - t + u)* (mH3*mH3) + \
 
   (s*s)))* (( (RR3x1*RR3x1) +  (RR3x2*RR3x2))*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))))/(4.*(RR3x1 + RR3x2)*(-t +  (mHc*mHc))* (MW*MW*MW*MW)*\
 
   (SW*SW)) + ( (EL*EL*EL*EL)*(-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s))*\
 
   (( (RR3x1*RR3x1) +  (RR3x2*RR3x2))*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))))/(16.* (MW*MW*MW*MW)* (SW*SW*SW*SW)) + ( (gc181*gc181)*\
 
   (gc192*gc192)*(-16* (mH3*mH3)* (MW*MW) +  ((s + t - u)*(s + t - u)))*(\
 
   (mH3*mH3*mH3*mH3) - 2* (mH3*mH3)*(u +  (MW*MW)) +  (( (MW*MW) - u)*(\
 
   (MW*MW) - u)))* (( (RR3x1*RR3x1) +  (RR3x2*RR3x2))*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))))/(4.* (MW*MW*MW*MW)* ((RR3x1 + RR3x2)*(RR3x1 + RR3x2))* ((\
 
   (mHc*mHc) - u)*( (mHc*mHc) - u))) + ( (gc181*gc181)* (gc192*gc192)*(-8*(-s\
 
   + 2*(t + u) + 4* (mH3*mH3))* (MW*MW*MW*MW*MW*MW) + 16*\
 
   (MW*MW*MW*MW*MW*MW*MW*MW) - (-t +  (mH3*mH3))*(-u +  (mH3*mH3))*(- (s*s) +\
 
    ((t - u)*(t - u))) +  (MW*MW)*(-8*s*t*u + 8*s* (mH3*mH3*mH3*mH3) + (t +\
 
   u)* (s*s) - (t + u)* ((t - u)*(t - u)) - 2* (mH3*mH3)*( (s*s) + 3* ((t -\
 
   u)*(t - u)))) +  (MW*MW*MW*MW)*(2*t*u - 16*(s - t - u)* (mH3*mH3) + 16*\
 
   (mH3*mH3*mH3*mH3) +  (s*s) + 7* (t*t) + 7* (u*u)))* (( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))*( (RR3x1*RR3x1) +  (RR3x2*RR3x2))))/(2.*(-t + \
 
   (mHc*mHc))*(-u +  (mHc*mHc))* (MW*MW*MW*MW)* ((RR3x1 + RR3x2)*(RR3x1 +\
 
   RR3x2))) + ( (gc181*gc181)* (gc192*gc192)*( (mH3*mH3*mH3*mH3) - 2*\
 
   (mH3*mH3)*(t +  (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))*(-16*\
 
   (mH3*mH3)* (MW*MW) +  ((s - t + u)*(s - t + u)))* (( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2))*( (RR3x1*RR3x1) +  (RR3x2*RR3x2))))/(4.* (MW*MW*MW*MW)*\
 
   ((RR3x1 + RR3x2)*(RR3x1 + RR3x2))* (( (mHc*mHc) - t)*( (mHc*mHc) - t)));
}
double DT::H3H3Ee(const double &cos_t, const double &s){
return (-2* (gc63*gc63)*(-s + 4* (Me*Me))* ((-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s)\
 
   +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) - (4*(4*gc62L*gc62R* (Me*Me) + \
 
   (gc62L*gc62L)*(-s + 2* (Me*Me)) +  (gc62R*gc62R)*(-s + 2* (Me*Me)))*\
 
   ((RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))\
 
   - (4*(gc62L + gc62R)*gc63*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(-s + 4* (Me*Me))*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) +\
 
   mHsm*WHsm*(s -  (MZ*MZ)))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3)))/(( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H3H3Mm(const double &cos_t, const double &s){
return (2* (gc65*gc65)*(s - 4* (MM*MM))* ((-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s)\
 
   +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (4*(s* (gc64L*gc64L) + s*\
 
   (gc64R*gc64R) - 4*gc64L*gc64R* (MM*MM) - 2*( (gc64L*gc64L) + \
 
   (gc64R*gc64R))* (MM*MM))* ((RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))\
 
   + (4*(gc64L + gc64R)*gc65*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(s - 4* (MM*MM))*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) +\
 
   mHsm*WHsm*(s -  (MZ*MZ)))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3)))/(( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H3H3TAta(const double &cos_t, const double &s){
return (-2* (gc67*gc67)*(-s + 4* (MTA*MTA))* ((-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s)\
 
   +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) - (4*(4*gc66L*gc66R* (MTA*MTA) + \
 
   (gc66L*gc66L)*(-s + 2* (MTA*MTA)) +  (gc66R*gc66R)*(-s + 2* (MTA*MTA)))*\
 
   ((RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))\
 
   - (4*(gc66L + gc66R)*gc67*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(-s + 4* (MTA*MTA))*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) +\
 
   mHsm*WHsm*(s -  (MZ*MZ)))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3)))/(( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H3H3Uu(const double &cos_t, const double &s){
return (6* (gc85*gc85)*(s - 4* (MU*MU))* ((-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s)\
 
   +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (12*(s* (gc84L*gc84L) + s*\
 
   (gc84R*gc84R) - 4*gc84L*gc84R* (MU*MU) - 2*( (gc84L*gc84L) + \
 
   (gc84R*gc84R))* (MU*MU))* ((RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))\
 
   + (12*(gc84L + gc84R)*gc85*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(s - 4* (MU*MU))*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) +\
 
   mHsm*WHsm*(s -  (MZ*MZ)))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3)))/(( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H3H3Cc(const double &cos_t, const double &s){
return (6* (gc81*gc81)*(s - 4* (MC*MC))* ((-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s)\
 
   +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (12*(s* (gc80L*gc80L) + s*\
 
   (gc80R*gc80R) - 4*gc80L*gc80R* (MC*MC) - 2*( (gc80L*gc80L) + \
 
   (gc80R*gc80R))* (MC*MC))* ((RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))\
 
   + (12*(gc80L + gc80R)*gc81*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(s - 4* (MC*MC))*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) +\
 
   mHsm*WHsm*(s -  (MZ*MZ)))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3)))/(( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H3H3Tt(const double &cos_t, const double &s){
return (6* (gc83*gc83)*(s - 4* (MT*MT))* ((-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s)\
 
   +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (12*(s* (gc82L*gc82L) + s*\
 
   (gc82R*gc82R) - 4*gc82L*gc82R* (MT*MT) - 2*( (gc82L*gc82L) + \
 
   (gc82R*gc82R))* (MT*MT))* ((RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))\
 
   + (12*(gc82L + gc82R)*gc83*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(s - 4* (MT*MT))*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) +\
 
   mHsm*WHsm*(s -  (MZ*MZ)))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3)))/(( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H3H3Dd(const double &cos_t, const double &s){
return (6* (gc50*gc50)*(s - 4* (MD*MD))* ((-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s)\
 
   +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (12*(s* (gc49L*gc49L) + s*\
 
   (gc49R*gc49R) - 4*gc49L*gc49R* (MD*MD) - 2*( (gc49L*gc49L) + \
 
   (gc49R*gc49R))* (MD*MD))* ((RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))\
 
   + (12*(gc49L + gc49R)*gc50*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(s - 4* (MD*MD))*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) +\
 
   mHsm*WHsm*(s -  (MZ*MZ)))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3)))/(( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H3H3Ss(const double &cos_t, const double &s){
return (6* (gc52*gc52)*(s - 4* (MS*MS))* ((-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s)\
 
   +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (12*(s* (gc51L*gc51L) + s*\
 
   (gc51R*gc51R) - 4*gc51L*gc51R* (MS*MS) - 2*( (gc51L*gc51L) + \
 
   (gc51R*gc51R))* (MS*MS))* ((RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))\
 
   + (12*(gc51L + gc51R)*gc52*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(s - 4* (MS*MS))*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) +\
 
   mHsm*WHsm*(s -  (MZ*MZ)))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3)))/(( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H3H3Bb(const double &cos_t, const double &s){
return (6* (gc48*gc48)*(s - 4* (MB*MB))* ((-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag +\
 
   2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)*\
 
   (RR3x2*RR3x2)*v + L7* (RR3x3*RR3x3)*v)))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s)\
 
   +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (12*(s* (gc47L*gc47L) + s*\
 
   (gc47R*gc47R) - 4*gc47L*gc47R* (MB*MB) - 2*( (gc47L*gc47L) + \
 
   (gc47R*gc47R))* (MB*MB))* ((RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))\
 
   + (12*(gc47L + gc47R)*gc48*(RR3x1*RR3x3*Timag + RR3x2*RR3x3*Treal +\
 
   L5*RR3x1*RR3x2*v)*(s - 4* (MB*MB))*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) +\
 
   mHsm*WHsm*(s -  (MZ*MZ)))*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR3x1*RR3x1) + (L3 + L4 - L5)*v* (RR3x2*RR3x2) + L7*v*\
 
   (RR3x3*RR3x3)))/(( (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s + \
 
   (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
