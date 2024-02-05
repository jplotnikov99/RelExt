///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::H1H2hh(double cos_t, double s){
double t = (-s +  (mH1*mH1) +  (mH2*mH2) + 2* (mHsm*mHsm) + cos_t*sqrt(s - 4*\
 
   (mHsm*mHsm))*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (( (mH2*mH2) - s)*( (mH2*mH2) - s)))/s))/2.;
double u = -s - t + mH1*mH1 + mH2*mH2 + mHsm*mHsm + mHsm*mHsm;
return 4*L3*L4*RR1x1*RR1x2*RR2x1*RR2x2 + 2*L3*L7*RR1x1*RR1x3*RR2x1*RR2x3 +\
 
   2*L4*L7*RR1x1*RR1x3*RR2x1*RR2x3 + 2*L5*L7*RR1x1*RR1x3*RR2x1*RR2x3 +\
 
   2*L3*L7*RR1x2*RR1x3*RR2x2*RR2x3 + 2*L4*L7*RR1x2*RR1x3*RR2x2*RR2x3 -\
 
   2*L5*L7*RR1x2*RR1x3*RR2x2*RR2x3 + 2*RR1x1*RR1x2*RR2x1*RR2x2* (L3*L3) +\
 
   2*RR1x1*RR1x2*RR2x1*RR2x2* (L4*L4) - 2*RR1x1*RR1x2*RR2x1*RR2x2* (L5*L5) +\
 
   (2*L5*RR1x2*RR2x2*(-(RR1x1*(RR3x3*Treal + (L3 + L4 + L5)*RR3x1*v)) +\
 
   RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) + RR1x3*(RR3x2*Timag -\
 
   RR3x1*Treal - L7*RR3x3*v))*(-(RR2x1*(RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR3x1*v)) + RR2x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR2x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v)))/(-t +  (mH3*mH3)) -\
 
   (2*L3*RR1x1*RR2x1*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v)))/(-t +  (mH3*mH3)) -\
 
   (2*L4*RR1x1*RR2x1*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v)))/(-t +  (mH3*mH3)) -\
 
   (2*L5*RR1x1*RR2x1*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v)))/(-t +  (mH3*mH3)) -\
 
   (2*L3*RR1x2*RR2x2*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v)))/(-t +  (mH3*mH3)) -\
 
   (2*L4*RR1x2*RR2x2*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v)))/(-t +  (mH3*mH3)) -\
 
   (2*L7*RR1x3*RR2x3*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v)))/(-t +  (mH3*mH3)) +\
 
   (2*L5*RR1x2*RR2x2*(-(RR1x1*(RR3x3*Treal + (L3 + L4 + L5)*RR3x1*v)) +\
 
   RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) + RR1x3*(RR3x2*Timag -\
 
   RR3x1*Treal - L7*RR3x3*v))*(-(RR2x1*(RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR3x1*v)) + RR2x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR2x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v)))/(-u +  (mH3*mH3)) -\
 
   (2*L3*RR1x1*RR2x1*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v)))/(-u +  (mH3*mH3)) -\
 
   (2*L4*RR1x1*RR2x1*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v)))/(-u +  (mH3*mH3)) -\
 
   (2*L5*RR1x1*RR2x1*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v)))/(-u +  (mH3*mH3)) -\
 
   (2*L3*RR1x2*RR2x2*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v)))/(-u +  (mH3*mH3)) -\
 
   (2*L4*RR1x2*RR2x2*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v)))/(-u +  (mH3*mH3)) -\
 
   (2*L7*RR1x3*RR2x3*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v)))/(-u +  (mH3*mH3)) -\
 
   (2*L3*RR1x1*RR2x1*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/(-t +  (mH1*mH1)) -\
 
   (2*L4*RR1x1*RR2x1*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/(-t +  (mH1*mH1)) -\
 
   (2*L5*RR1x1*RR2x1*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/(-t +  (mH1*mH1)) -\
 
   (2*L3*RR1x2*RR2x2*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/(-t +  (mH1*mH1)) -\
 
   (2*L4*RR1x2*RR2x2*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/(-t +  (mH1*mH1)) +\
 
   (2*L5*RR1x2*RR2x2*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/(-t +  (mH1*mH1)) -\
 
   (2*L7*RR1x3*RR2x3*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/(-t +  (mH1*mH1)) -\
 
   (2*L3*RR1x1*RR2x1*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/(-u +  (mH1*mH1)) -\
 
   (2*L4*RR1x1*RR2x1*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/(-u +  (mH1*mH1)) -\
 
   (2*L5*RR1x1*RR2x1*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/(-u +  (mH1*mH1)) -\
 
   (2*L3*RR1x2*RR2x2*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/(-u +  (mH1*mH1)) -\
 
   (2*L4*RR1x2*RR2x2*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/(-u +  (mH1*mH1)) +\
 
   (2*L5*RR1x2*RR2x2*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/(-u +  (mH1*mH1)) -\
 
   (2*L7*RR1x3*RR2x3*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/(-u +  (mH1*mH1)) - (2*(-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-2*RR1x2*RR1x3*Timag +\
 
   2*RR1x1*RR1x3*Treal + (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v*\
 
   (RR1x2*RR1x2) + L7*v* (RR1x3*RR1x3)))/((-t +  (mH1*mH1))*(t -  (mH3*mH3)))\
 
   - (2*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v +\
 
   RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/((-u +  (mH1*mH1))*(u -  (mH3*mH3))) +\
 
   (2*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v +\
 
   RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/((-u +  (mH1*mH1))*(-t +  (mH3*mH3))) +\
 
   (2*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v +\
 
   RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3)))/((-t +  (mH1*mH1))*(-u +  (mH3*mH3))) + 2*L3*L4*\
 
   (RR1x1*RR1x1)* (RR2x1*RR2x1) + 2*L3*L5* (RR1x1*RR1x1)* (RR2x1*RR2x1) +\
 
   2*L4*L5* (RR1x1*RR1x1)* (RR2x1*RR2x1) +  (L3*L3)* (RR1x1*RR1x1)*\
 
   (RR2x1*RR2x1) +  (L4*L4)* (RR1x1*RR1x1)* (RR2x1*RR2x1) +  (L5*L5)*\
 
   (RR1x1*RR1x1)* (RR2x1*RR2x1) + 2*L3*L4* (RR1x2*RR1x2)* (RR2x2*RR2x2) -\
 
   2*L3*L5* (RR1x2*RR1x2)* (RR2x2*RR2x2) - 2*L4*L5* (RR1x2*RR1x2)*\
 
   (RR2x2*RR2x2) +  (L3*L3)* (RR1x2*RR1x2)* (RR2x2*RR2x2) +  (L4*L4)*\
 
   (RR1x2*RR1x2)* (RR2x2*RR2x2) +  (L5*L5)* (RR1x2*RR1x2)* (RR2x2*RR2x2) + \
 
   (L7*L7)* (RR1x3*RR1x3)* (RR2x3*RR2x3) -\
 
   (2*L5*RR1x2*RR2x2*(-(RR1x1*(RR2x3*Treal + (L3 + L4 + L5)*RR2x1*v)) +\
 
   RR1x2*(RR2x3*Timag - (L3 + L4 - L5)*RR2x2*v) + RR1x3*(RR2x2*Timag -\
 
   RR2x1*Treal - L7*RR2x3*v))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3)))/(-t +  (mH2*mH2)) -\
 
   (2*L3*RR1x1*RR2x1*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3)))/(-t +  (mH2*mH2)) -\
 
   (2*L4*RR1x1*RR2x1*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3)))/(-t +  (mH2*mH2)) -\
 
   (2*L5*RR1x1*RR2x1*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3)))/(-t +  (mH2*mH2)) -\
 
   (2*L3*RR1x2*RR2x2*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3)))/(-t +  (mH2*mH2)) -\
 
   (2*L4*RR1x2*RR2x2*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3)))/(-t +  (mH2*mH2)) -\
 
   (2*L7*RR1x3*RR2x3*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3)))/(-t +  (mH2*mH2)) -\
 
   (2*L5*RR1x2*RR2x2*(-(RR1x1*(RR2x3*Treal + (L3 + L4 + L5)*RR2x1*v)) +\
 
   RR1x2*(RR2x3*Timag - (L3 + L4 - L5)*RR2x2*v) + RR1x3*(RR2x2*Timag -\
 
   RR2x1*Treal - L7*RR2x3*v))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3)))/(-u +  (mH2*mH2)) -\
 
   (2*L3*RR1x1*RR2x1*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3)))/(-u +  (mH2*mH2)) -\
 
   (2*L4*RR1x1*RR2x1*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3)))/(-u +  (mH2*mH2)) -\
 
   (2*L5*RR1x1*RR2x1*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3)))/(-u +  (mH2*mH2)) -\
 
   (2*L3*RR1x2*RR2x2*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3)))/(-u +  (mH2*mH2)) -\
 
   (2*L4*RR1x2*RR2x2*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3)))/(-u +  (mH2*mH2)) -\
 
   (2*L7*RR1x3*RR2x3*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3)))/(-u +  (mH2*mH2)) - (2*(-(RR1x1*(RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*v)) + RR1x2*(RR2x3*Timag - (L3 + L4 - L5)*RR2x2*v) +\
 
   RR1x3*(RR2x2*Timag - RR2x1*Treal - L7*RR2x3*v))*(-(RR1x1*(RR3x3*Treal +\
 
   (L3 + L4 + L5)*RR3x1*v)) + RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR1x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3)))/((-t +  (mH2*mH2))*(t -  (mH3*mH3))) -\
 
   (2*(-(RR1x1*(RR2x3*Treal + (L3 + L4 + L5)*RR2x1*v)) + RR1x2*(RR2x3*Timag -\
 
   (L3 + L4 - L5)*RR2x2*v) + RR1x3*(RR2x2*Timag - RR2x1*Treal -\
 
   L7*RR2x3*v))*(-(RR1x1*(RR3x3*Treal + (L3 + L4 + L5)*RR3x1*v)) +\
 
   RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) + RR1x3*(RR3x2*Timag -\
 
   RR3x1*Treal - L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-2*RR2x2*RR2x3*Timag +\
 
   2*RR2x1*RR2x3*Treal + (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v*\
 
   (RR2x2*RR2x2) + L7*v* (RR2x3*RR2x3)))/((-u +  (mH2*mH2))*(u -  (mH3*mH3)))\
 
   + (2*(-(RR1x1*(RR2x3*Treal + (L3 + L4 + L5)*RR2x1*v)) + RR1x2*(RR2x3*Timag\
 
   - (L3 + L4 - L5)*RR2x2*v) + RR1x3*(RR2x2*Timag - RR2x1*Treal -\
 
   L7*RR2x3*v))*(-(RR1x1*(RR3x3*Treal + (L3 + L4 + L5)*RR3x1*v)) +\
 
   RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) + RR1x3*(RR3x2*Timag -\
 
   RR3x1*Treal - L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-2*RR2x2*RR2x3*Timag +\
 
   2*RR2x1*RR2x3*Treal + (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v*\
 
   (RR2x2*RR2x2) + L7*v* (RR2x3*RR2x3)))/((-u +  (mH2*mH2))*(-t + \
 
   (mH3*mH3))) + (2*(-(RR1x1*(RR2x3*Treal + (L3 + L4 + L5)*RR2x1*v)) +\
 
   RR1x2*(RR2x3*Timag - (L3 + L4 - L5)*RR2x2*v) + RR1x3*(RR2x2*Timag -\
 
   RR2x1*Treal - L7*RR2x3*v))*(-(RR1x1*(RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR3x1*v)) + RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR1x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3)))/((-t +  (mH2*mH2))*(-u +  (mH3*mH3))) + (2*\
 
   ((-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 + L4 + L5)*\
 
   (RR2x1*RR2x1)*v + (L3 + L4 - L5)* (RR2x2*RR2x2)*v + L7*\
 
   (RR2x3*RR2x3)*v)*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)* (RR2x1*RR2x1)*v + (L3 + L4 - L5)* (RR2x2*RR2x2)*v + L7*\
 
   (RR2x3*RR2x3)*v))* ((-(RR1x1*(RR2x3*Treal + (L3 + L4 + L5)*RR2x1*v)) +\
 
   RR1x2*(RR2x3*Timag - (L3 + L4 - L5)*RR2x2*v) + RR1x3*(RR2x2*Timag -\
 
   RR2x1*Treal - L7*RR2x3*v))*(-(RR1x1*(RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*v)) + RR1x2*(RR2x3*Timag - (L3 + L4 - L5)*RR2x2*v) +\
 
   RR1x3*(RR2x2*Timag - RR2x1*Treal - L7*RR2x3*v))))/((-t +  (mH2*mH2))*(-u +\
 
    (mH2*mH2))) + ( ((-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)* (RR2x1*RR2x1)*v + (L3 + L4 - L5)* (RR2x2*RR2x2)*v + L7*\
 
   (RR2x3*RR2x3)*v)*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)* (RR2x1*RR2x1)*v + (L3 + L4 - L5)* (RR2x2*RR2x2)*v + L7*\
 
   (RR2x3*RR2x3)*v))* ((-(RR1x1*(RR2x3*Treal + (L3 + L4 + L5)*RR2x1*v)) +\
 
   RR1x2*(RR2x3*Timag - (L3 + L4 - L5)*RR2x2*v) + RR1x3*(RR2x2*Timag -\
 
   RR2x1*Treal - L7*RR2x3*v))*(-(RR1x1*(RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*v)) + RR1x2*(RR2x3*Timag - (L3 + L4 - L5)*RR2x2*v) +\
 
   RR1x3*(RR2x2*Timag - RR2x1*Treal - L7*RR2x3*v))))/ (( (mH2*mH2) - t)*(\
 
   (mH2*mH2) - t)) + ( ((-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 +\
 
   L4 + L5)* (RR2x1*RR2x1)*v + (L3 + L4 - L5)* (RR2x2*RR2x2)*v + L7*\
 
   (RR2x3*RR2x3)*v)*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)* (RR2x1*RR2x1)*v + (L3 + L4 - L5)* (RR2x2*RR2x2)*v + L7*\
 
   (RR2x3*RR2x3)*v))* ((-(RR1x1*(RR2x3*Treal + (L3 + L4 + L5)*RR2x1*v)) +\
 
   RR1x2*(RR2x3*Timag - (L3 + L4 - L5)*RR2x2*v) + RR1x3*(RR2x2*Timag -\
 
   RR2x1*Treal - L7*RR2x3*v))*(-(RR1x1*(RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*v)) + RR1x2*(RR2x3*Timag - (L3 + L4 - L5)*RR2x2*v) +\
 
   RR1x3*(RR2x2*Timag - RR2x1*Treal - L7*RR2x3*v))))/ (( (mH2*mH2) - u)*(\
 
   (mH2*mH2) - u)) - (2*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 +\
 
   L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3))* ((-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))))/((-t +  (mH1*mH1))*(t\
 
   -  (mH2*mH2))) - (2*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 + L4\
 
   + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3))* ((-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))))/((-u +  (mH1*mH1))*(u\
 
   -  (mH2*mH2))) + (2*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 + L4\
 
   + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3))* ((-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))))/((-u + \
 
   (mH1*mH1))*(-t +  (mH2*mH2))) + (2*(-2*RR1x2*RR1x3*Timag +\
 
   2*RR1x1*RR1x3*Treal + (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v*\
 
   (RR1x2*RR1x2) + L7*v* (RR1x3*RR1x3))*(-2*RR2x2*RR2x3*Timag +\
 
   2*RR2x1*RR2x3*Treal + (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v*\
 
   (RR2x2*RR2x2) + L7*v* (RR2x3*RR2x3))* ((-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))))/((-t +  (mH1*mH1))*(-u +  (mH2*mH2))) + (2*\
 
   ((-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 + L4 + L5)*\
 
   (RR1x1*RR1x1)*v + (L3 + L4 - L5)* (RR1x2*RR1x2)*v + L7*\
 
   (RR1x3*RR1x3)*v)*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 + L4 +\
 
   L5)* (RR1x1*RR1x1)*v + (L3 + L4 - L5)* (RR1x2*RR1x2)*v + L7*\
 
   (RR1x3*RR1x3)*v))* ((-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))))/((-t + \
 
   (mH1*mH1))*(-u +  (mH1*mH1))) + ( ((-2*RR1x2*RR1x3*Timag +\
 
   2*RR1x1*RR1x3*Treal + (L3 + L4 + L5)* (RR1x1*RR1x1)*v + (L3 + L4 - L5)*\
 
   (RR1x2*RR1x2)*v + L7* (RR1x3*RR1x3)*v)*(-2*RR1x2*RR1x3*Timag +\
 
   2*RR1x1*RR1x3*Treal + (L3 + L4 + L5)* (RR1x1*RR1x1)*v + (L3 + L4 - L5)*\
 
   (RR1x2*RR1x2)*v + L7* (RR1x3*RR1x3)*v))* ((-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))))/ (( (mH1*mH1) - t)*( (mH1*mH1) - t)) + (\
 
   ((-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 + L4 + L5)*\
 
   (RR1x1*RR1x1)*v + (L3 + L4 - L5)* (RR1x2*RR1x2)*v + L7*\
 
   (RR1x3*RR1x3)*v)*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 + L4 +\
 
   L5)* (RR1x1*RR1x1)*v + (L3 + L4 - L5)* (RR1x2*RR1x2)*v + L7*\
 
   (RR1x3*RR1x3)*v))* ((-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))))/ (( (mH1*mH1) - u)*(\
 
   (mH1*mH1) - u)) + (2* ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 +\
 
   L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v +\
 
   RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) +\
 
   RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v)))*\
 
   ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/((-t +  (mH3*mH3))*(-u +  (mH3*mH3))) + (\
 
   ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v)))* ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))))/\
 
   (( (mH3*mH3) - t)*( (mH3*mH3) - t)) + ( ((-(RR1x2*RR3x3*Timag) +\
 
   RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v)))* ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal +\
 
   (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))))/\
 
   (( (mH3*mH3) - u)*( (mH3*mH3) - u)) -\
 
   (6*L1*L5*RR1x2*RR2x2*v*(-(RR1x1*(RR2x3*Treal + (L3 + L4 + L5)*RR2x1*v)) +\
 
   RR1x2*(RR2x3*Timag - (L3 + L4 - L5)*RR2x2*v) + RR1x3*(RR2x2*Timag -\
 
   RR2x1*Treal - L7*RR2x3*v))*(-s +  (mHsm*mHsm)))/( (mHsm*mHsm*mHsm*mHsm) + \
 
   (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) -\
 
   (6*L1*L3*RR1x1*RR2x1*v*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 +\
 
   L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))*(-s +  (mHsm*mHsm)))/(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) -\
 
   (6*L1*L4*RR1x1*RR2x1*v*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 +\
 
   L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))*(-s +  (mHsm*mHsm)))/(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) -\
 
   (6*L1*L5*RR1x1*RR2x1*v*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 +\
 
   L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))*(-s +  (mHsm*mHsm)))/(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) -\
 
   (6*L1*L3*RR1x2*RR2x2*v*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 +\
 
   L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))*(-s +  (mHsm*mHsm)))/(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) -\
 
   (6*L1*L4*RR1x2*RR2x2*v*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 +\
 
   L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))*(-s +  (mHsm*mHsm)))/(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) -\
 
   (6*L1*L7*RR1x3*RR2x3*v*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 +\
 
   L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))*(-s +  (mHsm*mHsm)))/(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) +\
 
   (6*L1*v*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v +\
 
   RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-s\
 
   +  (mHsm*mHsm)))/((-t +  (mH3*mH3))*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + (6*L1*v*(-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-s + \
 
   (mHsm*mHsm)))/((-u +  (mH3*mH3))*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + (6*L1*v*(-s + \
 
   (mHsm*mHsm))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3))* ((-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))))/((-t +  (mH1*mH1))*(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) +\
 
   (6*L1*v*(-s +  (mHsm*mHsm))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3))* ((-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))))/((-u +  (mH1*mH1))*(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) +\
 
   (6*L1*v*(-s +  (mHsm*mHsm))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3))* ((-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))))/((-t +  (mH2*mH2))*(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) +\
 
   (6*L1*v*(-s +  (mHsm*mHsm))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3))* ((-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3\
 
   + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))))/((-u +  (mH2*mH2))*(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) +\
 
   (9* (L1*L1)* (v*v)* ((-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4\
 
   + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag)\
 
   + RR2x1*Treal + L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))))/(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)));
}
double DT::H1H2hZ(double cos_t, double s){
double t = (s* (mH2*mH2) + s* (mHsm*mHsm) -  (mH2*mH2)* (mHsm*mHsm) + \
 
   (mH1*mH1)*(s +  (mHsm*mHsm) -  (MZ*MZ)) + s* (MZ*MZ) +  (mH2*mH2)* (MZ*MZ)\
 
   + cos_t*s*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mH2*mH2)) +  ((\
 
   (mH2*mH2) - s)*( (mH2*mH2) - s)))/s)*sqrt(( (mHsm*mHsm*mHsm*mHsm) - 2*\
 
   (mHsm*mHsm)*(s +  (MZ*MZ)) +  (( (MZ*MZ) - s)*( (MZ*MZ) - s)))/s) - \
 
   (s*s))/(2.*s);
double u = -s - t + mH1*mH1 + mH2*mH2 + mHsm*mHsm + MZ*MZ;
return -((gc213*gc214*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3\
 
   + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*((-t +  (mH2*mH2))*(-s\
 
   - t + u -  (mH1*mH1) +  (mH2*mH2) +  (mHsm*mHsm)) - (-s + 2*t + u + 3*\
 
   (mH1*mH1) + 2* (mH2*mH2) - 3* (mHsm*mHsm))* (MZ*MZ) + \
 
   (MZ*MZ*MZ*MZ)))/((-t +  (mH3*mH3))*(-u +  (mH3*mH3))* (MZ*MZ))) +\
 
   (gc212*gc213*(-(RR2x1*(RR3x3*Treal + (L3 + L4 + L5)*RR3x1*v)) +\
 
   RR2x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) + RR2x3*(RR3x2*Timag -\
 
   RR3x1*Treal - L7*RR3x3*v))*((-t +  (mH2*mH2))*(s + t - u +  (mH1*mH1) - \
 
   (mH2*mH2) -  (mHsm*mHsm)) + (-s + 2*t + u + 3* (mH1*mH1) + 2* (mH2*mH2) -\
 
   3* (mHsm*mHsm))* (MZ*MZ) -  (MZ*MZ*MZ*MZ))*(-2*RR1x2*RR1x3*Timag +\
 
   2*RR1x1*RR1x3*Treal + (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v*\
 
   (RR1x2*RR1x2) + L7*v* (RR1x3*RR1x3)))/((-t +  (mH1*mH1))*(-u + \
 
   (mH3*mH3))* (MZ*MZ)) + (gc212*gc214*(-(RR1x1*(RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR3x1*v)) + RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) +\
 
   RR1x3*(RR3x2*Timag - RR3x1*Treal - L7*RR3x3*v))*((-t +  (mH2*mH2))*(-s - t\
 
   + u -  (mH1*mH1) +  (mH2*mH2) +  (mHsm*mHsm)) - (-s + 2*t + u + 3*\
 
   (mH1*mH1) + 2* (mH2*mH2) - 3* (mHsm*mHsm))* (MZ*MZ) + \
 
   (MZ*MZ*MZ*MZ))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3)))/((-u +  (mH2*mH2))*(-t +  (mH3*mH3))* (MZ*MZ)) - (\
 
   (gc212*gc212)*((-t +  (mH2*mH2))*(s + t - u +  (mH1*mH1) -  (mH2*mH2) - \
 
   (mHsm*mHsm)) + (-s + 2*t + u + 3* (mH1*mH1) + 2* (mH2*mH2) - 3*\
 
   (mHsm*mHsm))* (MZ*MZ) -  (MZ*MZ*MZ*MZ))*(-2*RR1x2*RR1x3*Timag +\
 
   2*RR1x1*RR1x3*Treal + (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v*\
 
   (RR1x2*RR1x2) + L7*v* (RR1x3*RR1x3))*(-2*RR2x2*RR2x3*Timag +\
 
   2*RR2x1*RR2x3*Treal + (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v*\
 
   (RR2x2*RR2x2) + L7*v* (RR2x3*RR2x3)))/((-t +  (mH1*mH1))*(-u + \
 
   (mH2*mH2))* (MZ*MZ)) + (2*gc212*gc214*(-(RR1x2*RR3x3*Timag) +\
 
   RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 + L4 +\
 
   L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v* (RR1x2*RR1x2) + L7*v*\
 
   (RR1x3*RR1x3))*( (mH2*mH2*mH2*mH2) - 2* (mH2*mH2)*(t +  (MZ*MZ)) +  ((\
 
   (MZ*MZ) - t)*( (MZ*MZ) - t))))/((-t +  (mH1*mH1))*(t -  (mH3*mH3))*\
 
   (MZ*MZ)) - (gc212*gc213*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 +\
 
   L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v +\
 
   RR2x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-2*RR2x2*RR2x3*Timag +\
 
   2*RR2x1*RR2x3*Treal + (L3 + L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v*\
 
   (RR2x2*RR2x2) + L7*v* (RR2x3*RR2x3))*(-2*(-s - t + u + 7* (mH1*mH1) + \
 
   (mH2*mH2) +  (mHsm*mHsm))* (MZ*MZ) +  (MZ*MZ*MZ*MZ) +  (( (mH1*mH1) - \
 
   (mH2*mH2) -  (mHsm*mHsm) + s + t - u)*( (mH1*mH1) -  (mH2*mH2) - \
 
   (mHsm*mHsm) + s + t - u))))/(2.*(-u +  (mH2*mH2))*(u -  (mH3*mH3))*\
 
   (MZ*MZ)) + ( (gc212*gc212)*( (mH2*mH2*mH2*mH2) - 2* (mH2*mH2)*(t + \
 
   (MZ*MZ)) +  (( (MZ*MZ) - t)*( (MZ*MZ) - t)))* ((-2*RR1x2*RR1x3*Timag +\
 
   2*RR1x1*RR1x3*Treal + (L3 + L4 + L5)* (RR1x1*RR1x1)*v + (L3 + L4 - L5)*\
 
   (RR1x2*RR1x2)*v + L7* (RR1x3*RR1x3)*v)*(-2*RR1x2*RR1x3*Timag +\
 
   2*RR1x1*RR1x3*Treal + (L3 + L4 + L5)* (RR1x1*RR1x1)*v + (L3 + L4 - L5)*\
 
   (RR1x2*RR1x2)*v + L7* (RR1x3*RR1x3)*v)))/( (MZ*MZ)* (( (mH1*mH1) - t)*(\
 
   (mH1*mH1) - t))) + ( (gc212*gc212)*(-2*(-s - t + u + 7* (mH1*mH1) + \
 
   (mH2*mH2) +  (mHsm*mHsm))* (MZ*MZ) +  (MZ*MZ*MZ*MZ) +  (( (mH1*mH1) - \
 
   (mH2*mH2) -  (mHsm*mHsm) + s + t - u)*( (mH1*mH1) -  (mH2*mH2) - \
 
   (mHsm*mHsm) + s + t - u)))* ((-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)* (RR2x1*RR2x1)*v + (L3 + L4 - L5)* (RR2x2*RR2x2)*v + L7*\
 
   (RR2x3*RR2x3)*v)*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)* (RR2x1*RR2x1)*v + (L3 + L4 - L5)* (RR2x2*RR2x2)*v + L7*\
 
   (RR2x3*RR2x3)*v)))/(4.* (MZ*MZ)* (( (mH2*mH2) - u)*( (mH2*mH2) - u))) + (\
 
   (gc214*gc214)*( (mH2*mH2*mH2*mH2) - 2* (mH2*mH2)*(t +  (MZ*MZ)) +  ((\
 
   (MZ*MZ) - t)*( (MZ*MZ) - t)))* ((-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal\
 
   + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v +\
 
   RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) +\
 
   RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal + L7*RR3x3*v))))/(\
 
   (MZ*MZ)* (( (mH3*mH3) - t)*( (mH3*mH3) - t))) + ( (gc213*gc213)*(-2*(-s -\
 
   t + u + 7* (mH1*mH1) +  (mH2*mH2) +  (mHsm*mHsm))* (MZ*MZ) + \
 
   (MZ*MZ*MZ*MZ) +  (( (mH1*mH1) -  (mH2*mH2) -  (mHsm*mHsm) + s + t - u)*(\
 
   (mH1*mH1) -  (mH2*mH2) -  (mHsm*mHsm) + s + t - u)))*\
 
   ((-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v\
 
   + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/(4.* (MZ*MZ)* (( (mH3*mH3) - u)*( (mH3*mH3) -\
 
   u))) + (gc214*(-(RR1x1*(RR3x3*Treal + (L3 + L4 + L5)*RR3x1*v)) +\
 
   RR1x2*(RR3x3*Timag - (L3 + L4 - L5)*RR3x2*v) + RR1x3*(RR3x2*Timag -\
 
   RR3x1*Treal - L7*RR3x3*v))*(-s +  (MZ*MZ))*(4*gc209*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)* (CW*CW)* (MZ*MZ*MZ*MZ)* (SW*SW) +\
 
   (-t +  (mH2*mH2))*(gc212*v* (CW*CW*CW*CW)* (EL*EL)*(-t + u -  (mH1*mH1) + \
 
   (mH2*mH2)) + 2* (CW*CW)*(gc212*v* (EL*EL)*(-t + u -  (mH1*mH1) + \
 
   (mH2*mH2)) + 2*gc209*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag +\
 
   RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v +\
 
   L5*RR1x1*RR2x2*v)*(-s +  (mHsm*mHsm)))* (SW*SW) + gc212*v* (EL*EL)*(-t + u\
 
   -  (mH1*mH1) +  (mH2*mH2))* (SW*SW*SW*SW)) -  (MZ*MZ)*(gc212*v*\
 
   (CW*CW*CW*CW)* (EL*EL)*(-2*s + t - u + 3* (mH1*mH1) + 5* (mH2*mH2)) - 2*\
 
   (CW*CW)*(gc212*v* (EL*EL)*(2*s - t + u - 3* (mH1*mH1) - 5* (mH2*mH2)) +\
 
   2*gc209*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal +\
 
   RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(-s - t - 2*u +\
 
   3* (mH2*mH2) + 3* (mHsm*mHsm)))* (SW*SW) + gc212*v* (EL*EL)*(-2*s + t - u\
 
   + 3* (mH1*mH1) + 5* (mH2*mH2))* (SW*SW*SW*SW))))/(2.* (CW*CW)*(-t + \
 
   (mH3*mH3))* (MZ*MZ)* (SW*SW)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ)))) + (gc212*(-s +  (MZ*MZ))*(-2*RR1x2*RR1x3*Timag +\
 
   2*RR1x1*RR1x3*Treal + (L3 + L4 + L5)*v* (RR1x1*RR1x1) + (L3 + L4 - L5)*v*\
 
   (RR1x2*RR1x2) + L7*v* (RR1x3*RR1x3))*(4*gc209*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)* (CW*CW)* (MZ*MZ*MZ*MZ)* (SW*SW) +\
 
   (-t +  (mH2*mH2))*(gc212*v* (CW*CW*CW*CW)* (EL*EL)*(-t + u -  (mH1*mH1) + \
 
   (mH2*mH2)) + 2* (CW*CW)*(gc212*v* (EL*EL)*(-t + u -  (mH1*mH1) + \
 
   (mH2*mH2)) + 2*gc209*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag +\
 
   RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v +\
 
   L5*RR1x1*RR2x2*v)*(-s +  (mHsm*mHsm)))* (SW*SW) + gc212*v* (EL*EL)*(-t + u\
 
   -  (mH1*mH1) +  (mH2*mH2))* (SW*SW*SW*SW)) -  (MZ*MZ)*(gc212*v*\
 
   (CW*CW*CW*CW)* (EL*EL)*(-2*s + t - u + 3* (mH1*mH1) + 5* (mH2*mH2)) - 2*\
 
   (CW*CW)*(gc212*v* (EL*EL)*(2*s - t + u - 3* (mH1*mH1) - 5* (mH2*mH2)) +\
 
   2*gc209*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal +\
 
   RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(-s - t - 2*u +\
 
   3* (mH2*mH2) + 3* (mHsm*mHsm)))* (SW*SW) + gc212*v* (EL*EL)*(-2*s + t - u\
 
   + 3* (mH1*mH1) + 5* (mH2*mH2))* (SW*SW*SW*SW))))/(2.* (CW*CW)*(-t + \
 
   (mH1*mH1))* (MZ*MZ)* (SW*SW)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ)))) + (gc213*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))*(-s +  (MZ*MZ))*(4*gc209*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)* (CW*CW)* (MZ*MZ*MZ*MZ)* (SW*SW) + (s\
 
   + t - u +  (mH1*mH1) -  (mH2*mH2) -  (mHsm*mHsm))*(gc212*v* (CW*CW*CW*CW)*\
 
   (EL*EL)*(t - u +  (mH1*mH1) -  (mH2*mH2)) - 2* (CW*CW)*(gc212*v*\
 
   (EL*EL)*(-t + u -  (mH1*mH1) +  (mH2*mH2)) + 2*gc209*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(-s +  (mHsm*mHsm)))* (SW*SW) +\
 
   gc212*v* (EL*EL)*(t - u +  (mH1*mH1) -  (mH2*mH2))* (SW*SW*SW*SW)) - \
 
   (MZ*MZ)*(gc212*v* (CW*CW*CW*CW)* (EL*EL)*(-4*s - t + u + 11* (mH1*mH1) +\
 
   5* (mH2*mH2)) + 2* (CW*CW)*(gc212*v* (EL*EL)*(-4*s - t + u + 11* (mH1*mH1)\
 
   + 5* (mH2*mH2)) + 2*gc209*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag +\
 
   RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v +\
 
   L5*RR1x1*RR2x2*v)*(2*s - t + u + 3* (mH1*mH1) - 3* (mH2*mH2) + 2*\
 
   (mHsm*mHsm)))* (SW*SW) + gc212*v* (EL*EL)*(-4*s - t + u + 11* (mH1*mH1) +\
 
   5* (mH2*mH2))* (SW*SW*SW*SW))))/(4.* (CW*CW)*(-u +  (mH3*mH3))* (MZ*MZ)*\
 
   (SW*SW)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) +\
 
   (gc212*(-s +  (MZ*MZ))*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 +\
 
   L4 + L5)*v* (RR2x1*RR2x1) + (L3 + L4 - L5)*v* (RR2x2*RR2x2) + L7*v*\
 
   (RR2x3*RR2x3))*(4*gc209*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag +\
 
   RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v +\
 
   L5*RR1x1*RR2x2*v)* (CW*CW)* (MZ*MZ*MZ*MZ)* (SW*SW) + (s + t - u + \
 
   (mH1*mH1) -  (mH2*mH2) -  (mHsm*mHsm))*(gc212*v* (CW*CW*CW*CW)* (EL*EL)*(t\
 
   - u +  (mH1*mH1) -  (mH2*mH2)) - 2* (CW*CW)*(gc212*v* (EL*EL)*(-t + u - \
 
   (mH1*mH1) +  (mH2*mH2)) + 2*gc209*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag +\
 
   RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v +\
 
   L5*RR1x1*RR2x2*v)*(-s +  (mHsm*mHsm)))* (SW*SW) + gc212*v* (EL*EL)*(t - u\
 
   +  (mH1*mH1) -  (mH2*mH2))* (SW*SW*SW*SW)) -  (MZ*MZ)*(gc212*v*\
 
   (CW*CW*CW*CW)* (EL*EL)*(-4*s - t + u + 11* (mH1*mH1) + 5* (mH2*mH2)) + 2*\
 
   (CW*CW)*(gc212*v* (EL*EL)*(-4*s - t + u + 11* (mH1*mH1) + 5* (mH2*mH2)) +\
 
   2*gc209*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal +\
 
   RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(2*s - t + u + 3*\
 
   (mH1*mH1) - 3* (mH2*mH2) + 2* (mHsm*mHsm)))* (SW*SW) + gc212*v*\
 
   (EL*EL)*(-4*s - t + u + 11* (mH1*mH1) + 5* (mH2*mH2))*\
 
   (SW*SW*SW*SW))))/(4.* (CW*CW)*(-u +  (mH2*mH2))* (MZ*MZ)* (SW*SW)*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (16*\
 
   (CW*CW*CW*CW)* (gc209*gc209)* (MZ*MZ*MZ*MZ)* (SW*SW*SW*SW)*\
 
   ((RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal +\
 
   RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v +\
 
   L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag +\
 
   RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v +\
 
   L5*RR1x1*RR2x2*v)) + 4* (MZ*MZ)*(-2*gc212*v* (CW*CW*CW*CW*CW*CW)*\
 
   (EL*EL)*(gc209*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal\
 
   + RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(-t + u + 3*\
 
   (mH1*mH1) - 3* (mH2*mH2)) + 2*gc212*v* (EL*EL)*(-s + 2* (mH1*mH1) + 2*\
 
   (mH2*mH2)))* (SW*SW) - 2*gc212*v* (CW*CW)*\
 
   (EL*EL)*(gc209*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal\
 
   + RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(-t + u + 3*\
 
   (mH1*mH1) - 3* (mH2*mH2)) + 2*gc212*v* (EL*EL)*(-s + 2* (mH1*mH1) + 2*\
 
   (mH2*mH2)))* (SW*SW*SW*SW*SW*SW) +  (CW*CW*CW*CW*CW*CW*CW*CW)*\
 
   (EL*EL*EL*EL)* (gc212*gc212)*(s - 2* (mH1*mH1) - 2* (mH2*mH2))* (v*v) + \
 
   (EL*EL*EL*EL)* (gc212*gc212)*(s - 2* (mH1*mH1) - 2* (mH2*mH2))*\
 
   (SW*SW*SW*SW*SW*SW*SW*SW)* (v*v) - 2* (CW*CW*CW*CW)*\
 
   (SW*SW*SW*SW)*(2*gc209*gc212*v*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag +\
 
   RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v +\
 
   L5*RR1x1*RR2x2*v)* (EL*EL)*(-t + u + 3* (mH1*mH1) - 3* (mH2*mH2)) + 3*\
 
   (EL*EL*EL*EL)* (gc212*gc212)*(-s + 2* (mH1*mH1) + 2* (mH2*mH2))* (v*v) +\
 
   4* (gc209*gc209)*(s +  (mHsm*mHsm))* ((RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)))) +  (( (CW*CW*CW*CW)*\
 
   (EL*EL)*gc212*( (mH1*mH1) -  (mH2*mH2) + t - u)*v +  (EL*EL)*gc212*\
 
   (SW*SW*SW*SW)*( (mH1*mH1) -  (mH2*mH2) + t - u)*v - 2* (CW*CW)* (SW*SW)*(\
 
   (EL*EL)*gc212*(- (mH1*mH1) +  (mH2*mH2) - t + u)*v + 2*gc209*( (mHsm*mHsm)\
 
   - s)*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal +\
 
   RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)))*(\
 
   (CW*CW*CW*CW)* (EL*EL)*gc212*( (mH1*mH1) -  (mH2*mH2) + t - u)*v + \
 
   (EL*EL)*gc212* (SW*SW*SW*SW)*( (mH1*mH1) -  (mH2*mH2) + t - u)*v - 2*\
 
   (CW*CW)* (SW*SW)*( (EL*EL)*gc212*(- (mH1*mH1) +  (mH2*mH2) - t + u)*v +\
 
   2*gc209*( (mHsm*mHsm) - s)*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag +\
 
   RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v +\
 
   L5*RR1x1*RR2x2*v)))))/(16.* (CW*CW*CW*CW)* (MZ*MZ)* (SW*SW*SW*SW)*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H1H2ZZ(double cos_t, double s){
double t = (-s +  (mH1*mH1) +  (mH2*mH2) + 2* (MZ*MZ) + cos_t*sqrt(s - 4*\
 
   (MZ*MZ))*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mH2*mH2)) +  ((\
 
   (mH2*mH2) - s)*( (mH2*mH2) - s)))/s))/2.;
double u = -s - t + mH1*mH1 + mH2*mH2 + MZ*MZ + MZ*MZ;
return ( (gc213*gc213)* (gc214*gc214)*(-16* (mH1*mH1)* (MZ*MZ) +  ((\
 
   (mH1*mH1) -  (mH2*mH2) + s + t - u)*( (mH1*mH1) -  (mH2*mH2) + s + t -\
 
   u)))*( (mH2*mH2*mH2*mH2) - 2* (mH2*mH2)*(u +  (MZ*MZ)) +  (( (MZ*MZ) -\
 
   u)*( (MZ*MZ) - u))))/(4.* (MZ*MZ*MZ*MZ)* (( (mH3*mH3) - u)*( (mH3*mH3) -\
 
   u))) + ( (gc213*gc213)* (gc214*gc214)*(-8*(-s + 2*t + 2*u + 3* (mH1*mH1) +\
 
    (mH2*mH2))* (MZ*MZ*MZ*MZ*MZ*MZ) + 16* (MZ*MZ*MZ*MZ*MZ*MZ*MZ*MZ) + (-t + \
 
   (mH2*mH2))*(-u +  (mH2*mH2))*(2*t*u +  (mH1*mH1*mH1*mH1) - 2*s* (mH2*mH2)\
 
   - 2* (mH1*mH1)*(-s +  (mH2*mH2)) +  (mH2*mH2*mH2*mH2) +  (s*s) -  (t*t) - \
 
   (u*u)) +  (MZ*MZ*MZ*MZ)*(2*t*u + 9* (mH1*mH1*mH1*mH1) - 10*s* (mH2*mH2) -\
 
   2* (mH1*mH1)*(3*s - 8*(t + u) +  (mH2*mH2)) + 9* (mH2*mH2*mH2*mH2) + \
 
   (s*s) + 7* (t*t) + 7* (u*u)) +  (MZ*MZ)*(-8*s*t*u + \
 
   (mH1*mH1*mH1*mH1)*(-3*(t + u) + 6* (mH2*mH2)) + (4*s - 3*(t + u))*\
 
   (mH2*mH2*mH2*mH2) - 2* (mH2*mH2*mH2*mH2*mH2*mH2) + t* (s*s) + u* (s*s) +\
 
   u* (t*t) -  (t*t*t) + t* (u*u) - 2* (mH2*mH2)*(-6*t*u - s*(t + u) +  (s*s)\
 
   +  (t*t) +  (u*u)) - 2* (mH1*mH1)*(s*(t + u) - (2*s + 3*(t + u))*\
 
   (mH2*mH2) + 2* (mH2*mH2*mH2*mH2) + 2*( (t*t) +  (u*u))) - \
 
   (u*u*u))))/(2.*(-t +  (mH3*mH3))*(-u +  (mH3*mH3))* (MZ*MZ*MZ*MZ)) + (\
 
   (gc213*gc213)* (gc214*gc214)*( (mH2*mH2*mH2*mH2) - 2* (mH2*mH2)*(t + \
 
   (MZ*MZ)) +  (( (MZ*MZ) - t)*( (MZ*MZ) - t)))*(-16* (mH1*mH1)* (MZ*MZ) + \
 
   (( (mH1*mH1) -  (mH2*mH2) + s - t + u)*( (mH1*mH1) -  (mH2*mH2) + s - t +\
 
   u))))/(4.* (MZ*MZ*MZ*MZ)* (( (mH3*mH3) - t)*( (mH3*mH3) - t))) -\
 
   (gc213*gc214*(RR1x1*RR2x1 + RR1x2*RR2x2)* (EL*EL)*(s*(s + t - u + \
 
   (mH1*mH1) -  (mH2*mH2))*(-u +  (mH2*mH2)) - 2*(s + 3*t + u + 5* (mH1*mH1)\
 
   -  (mH2*mH2))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(3*s*t +\
 
   3*s*u - 2*t*u +  (mH1*mH1)*(s + 2*t + 4*u - 6* (mH2*mH2)) - (7*s + 4*t +\
 
   2*u)* (mH2*mH2) + 6* (mH2*mH2*mH2*mH2) +  (s*s) + 2* (t*t)))* (( (CW*CW) +\
 
    (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW)*(-u +  (mH3*mH3))*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW)) - (gc213*gc214*(RR1x1*RR2x1 + RR1x2*RR2x2)*\
 
   (EL*EL)*(s*(s - t + u +  (mH1*mH1) -  (mH2*mH2))*(-t +  (mH2*mH2)) - 2*(s\
 
   + t + 3*u + 5* (mH1*mH1) -  (mH2*mH2))* (MZ*MZ*MZ*MZ) + 8*\
 
   (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(3*s*t + 3*s*u - 2*t*u +  (mH1*mH1)*(s +\
 
   4*t + 2*u - 6* (mH2*mH2)) - (7*s + 2*t + 4*u)* (mH2*mH2) + 6*\
 
   (mH2*mH2*mH2*mH2) +  (s*s) + 2* (u*u)))* (( (CW*CW) +  (SW*SW))*( (CW*CW)\
 
   +  (SW*SW))))/(4.* (CW*CW)*(-t +  (mH3*mH3))* (MZ*MZ*MZ*MZ)* (SW*SW)) +\
 
   (gc213*gc214*v*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))* (EL*EL)*(-s +  (mHsm*mHsm))*(s*(s + t - u + \
 
   (mH1*mH1) -  (mH2*mH2))*(-u +  (mH2*mH2)) - 2*(s + 3*t + u + 5* (mH1*mH1)\
 
   -  (mH2*mH2))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(3*s*t +\
 
   3*s*u - 2*t*u +  (mH1*mH1)*(s + 2*t + 4*u - 6* (mH2*mH2)) - (7*s + 4*t +\
 
   2*u)* (mH2*mH2) + 6* (mH2*mH2*mH2*mH2) +  (s*s) + 2* (t*t)))* (( (CW*CW) +\
 
    (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW)*(-u +  (mH3*mH3))*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + (gc213*gc214*v*(-(RR1x2*RR2x3*Timag)\
 
   + RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))*\
 
   (EL*EL)*(-s +  (mHsm*mHsm))*(s*(s - t + u +  (mH1*mH1) -  (mH2*mH2))*(-t +\
 
    (mH2*mH2)) - 2*(s + t + 3*u + 5* (mH1*mH1) -  (mH2*mH2))* (MZ*MZ*MZ*MZ) +\
 
   8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(3*s*t + 3*s*u - 2*t*u +  (mH1*mH1)*(s +\
 
   4*t + 2*u - 6* (mH2*mH2)) - (7*s + 2*t + 4*u)* (mH2*mH2) + 6*\
 
   (mH2*mH2*mH2*mH2) +  (s*s) + 2* (u*u)))* (( (CW*CW) +  (SW*SW))*( (CW*CW)\
 
   +  (SW*SW))))/(4.* (CW*CW)*(-t +  (mH3*mH3))* (MZ*MZ*MZ*MZ)* (SW*SW)*(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + (\
 
   (EL*EL*EL*EL)* ((RR1x1*RR2x1 + RR1x2*RR2x2)*(RR1x1*RR2x1 +\
 
   RR1x2*RR2x2))*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) + \
 
   (SW*SW))))/(16.* (CW*CW*CW*CW)* (MZ*MZ*MZ*MZ)* (SW*SW*SW*SW)) -\
 
   ((RR1x1*RR2x1 + RR1x2*RR2x2)*v*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))* (EL*EL*EL*EL)*(-s + \
 
   (mHsm*mHsm))*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) + \
 
   (SW*SW))))/(8.* (CW*CW*CW*CW)* (MZ*MZ*MZ*MZ)* (SW*SW*SW*SW)*(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + (\
 
   (EL*EL*EL*EL)*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (v*v)*\
 
   ((-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v\
 
   + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v)))* (( (CW*CW) +  (SW*SW))*( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))))/(16.*\
 
   (CW*CW*CW*CW)* (MZ*MZ*MZ*MZ)* (SW*SW*SW*SW)*( (mHsm*mHsm*mHsm*mHsm) + \
 
   (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))));
}
double DT::H1H2wW(double cos_t, double s){
double t = (-s +  (mH1*mH1) +  (mH2*mH2) + 2* (MW*MW) + cos_t*sqrt(s - 4*\
 
   (MW*MW))*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mH2*mH2)) +  ((\
 
   (mH2*mH2) - s)*( (mH2*mH2) - s)))/s))/2.;
double u = -s - t + mH1*mH1 + mH2*mH2 + MW*MW + MW*MW;
return ( (EL*EL*EL*EL)* ((RR1x1*RR2x1 + RR1x2*RR2x2)*(RR1x1*RR2x1 +\
 
   RR1x2*RR2x2))*(-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s)))/(16.*\
 
   (MW*MW*MW*MW)* (SW*SW*SW*SW)) - (gc179*gc188* (EL*EL)* ((RR1x1*RR2x1 +\
 
   RR1x2*RR2x2)*(RR1x1*RR2x1 + RR1x2*RR2x2))*(s*(s + t - u +  (mH1*mH1) - \
 
   (mH2*mH2))*(-u +  (mH2*mH2)) - 2*(s + 3*t + u + 5* (mH1*mH1) - \
 
   (mH2*mH2))* (MW*MW*MW*MW) + 8* (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(3*s*t +\
 
   3*s*u - 2*t*u +  (mH1*mH1)*(s + 2*t + 4*u - 6* (mH2*mH2)) - (7*s + 4*t +\
 
   2*u)* (mH2*mH2) + 6* (mH2*mH2*mH2*mH2) +  (s*s) + 2* (t*t))))/(4.*(RR1x1 +\
 
   RR1x2)*(-u +  (mHc*mHc))* (MW*MW*MW*MW)* (SW*SW)) + ( (gc179*gc179)*\
 
   (gc188*gc188)*( (RR1x1*RR1x1) +  (RR1x2*RR1x2))*( (RR2x1*RR2x1) + \
 
   (RR2x2*RR2x2))*(-16* (mH1*mH1)* (MW*MW) +  (( (mH1*mH1) -  (mH2*mH2) + s +\
 
   t - u)*( (mH1*mH1) -  (mH2*mH2) + s + t - u)))*( (mH2*mH2*mH2*mH2) - 2*\
 
   (mH2*mH2)*(u +  (MW*MW)) +  (( (MW*MW) - u)*( (MW*MW) - u))))/(4.*\
 
   (MW*MW*MW*MW)* ((RR1x1 + RR1x2)*(RR1x1 + RR1x2))* (( (mHc*mHc) - u)*(\
 
   (mHc*mHc) - u))) - (gc177*gc190* (EL*EL)* ((RR1x1*RR2x1 +\
 
   RR1x2*RR2x2)*(RR1x1*RR2x1 + RR1x2*RR2x2))*(s*(s - t + u +  (mH1*mH1) - \
 
   (mH2*mH2))*(-t +  (mH2*mH2)) - 2*(s + t + 3*u + 5* (mH1*mH1) - \
 
   (mH2*mH2))* (MW*MW*MW*MW) + 8* (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(3*s*t +\
 
   3*s*u - 2*t*u +  (mH1*mH1)*(s + 4*t + 2*u - 6* (mH2*mH2)) - (7*s + 2*t +\
 
   4*u)* (mH2*mH2) + 6* (mH2*mH2*mH2*mH2) +  (s*s) + 2* (u*u))))/(4.*(RR2x1 +\
 
   RR2x2)*(-t +  (mHc*mHc))* (MW*MW*MW*MW)* (SW*SW)) +\
 
   (gc177*gc179*gc188*gc190*(4*RR1x1*RR1x2*RR2x1*RR2x2 +  (RR1x1*RR1x1)*(\
 
   (RR2x1*RR2x1) -  (RR2x2*RR2x2)) +  (RR1x2*RR1x2)*(- (RR2x1*RR2x1) + \
 
   (RR2x2*RR2x2)))*(-8*(-s + 2*t + 2*u + 3* (mH1*mH1) +  (mH2*mH2))*\
 
   (MW*MW*MW*MW*MW*MW) + 16* (MW*MW*MW*MW*MW*MW*MW*MW) + (-t + \
 
   (mH2*mH2))*(-u +  (mH2*mH2))*(2*t*u +  (mH1*mH1*mH1*mH1) - 2*s* (mH2*mH2)\
 
   - 2* (mH1*mH1)*(-s +  (mH2*mH2)) +  (mH2*mH2*mH2*mH2) +  (s*s) -  (t*t) - \
 
   (u*u)) +  (MW*MW*MW*MW)*(2*t*u + 9* (mH1*mH1*mH1*mH1) - 10*s* (mH2*mH2) -\
 
   2* (mH1*mH1)*(3*s - 8*(t + u) +  (mH2*mH2)) + 9* (mH2*mH2*mH2*mH2) + \
 
   (s*s) + 7* (t*t) + 7* (u*u)) +  (MW*MW)*(-8*s*t*u + \
 
   (mH1*mH1*mH1*mH1)*(-3*(t + u) + 6* (mH2*mH2)) + (4*s - 3*(t + u))*\
 
   (mH2*mH2*mH2*mH2) - 2* (mH2*mH2*mH2*mH2*mH2*mH2) + t* (s*s) + u* (s*s) +\
 
   u* (t*t) -  (t*t*t) + t* (u*u) - 2* (mH2*mH2)*(-6*t*u - s*(t + u) +  (s*s)\
 
   +  (t*t) +  (u*u)) - 2* (mH1*mH1)*(s*(t + u) - (2*s + 3*(t + u))*\
 
   (mH2*mH2) + 2* (mH2*mH2*mH2*mH2) + 2*( (t*t) +  (u*u))) - \
 
   (u*u*u))))/(2.*(RR1x1 + RR1x2)*(RR2x1 + RR2x2)*(-t +  (mHc*mHc))*(-u + \
 
   (mHc*mHc))* (MW*MW*MW*MW)) + ( (gc177*gc177)* (gc190*gc190)*(\
 
   (RR1x1*RR1x1) +  (RR1x2*RR1x2))*( (RR2x1*RR2x1) +  (RR2x2*RR2x2))*(\
 
   (mH2*mH2*mH2*mH2) - 2* (mH2*mH2)*(t +  (MW*MW)) +  (( (MW*MW) - t)*(\
 
   (MW*MW) - t)))*(-16* (mH1*mH1)* (MW*MW) +  (( (mH1*mH1) -  (mH2*mH2) + s -\
 
   t + u)*( (mH1*mH1) -  (mH2*mH2) + s - t + u))))/(4.* (MW*MW*MW*MW)*\
 
   ((RR2x1 + RR2x2)*(RR2x1 + RR2x2))* (( (mHc*mHc) - t)*( (mHc*mHc) - t))) -\
 
   ((RR1x1*RR2x1 + RR1x2*RR2x2)*v*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal +\
 
   (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))* (EL*EL*EL*EL)*(-s + \
 
   (mHsm*mHsm))*(-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s)))/(8.*\
 
   (MW*MW*MW*MW)* (SW*SW*SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + (gc179*gc188*v*(-(RR1x2*RR2x3*Timag)\
 
   + RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))*\
 
   (EL*EL)*(-((RR1x1*RR2x1 + RR1x2*RR2x2)*s) + mHsm*(-(RR1x2*RR2x1*WHsm) +\
 
   RR1x1*RR2x2*WHsm) + (RR1x1*RR2x1 + RR1x2*RR2x2)* (mHsm*mHsm))*(s*(s + t -\
 
   u +  (mH1*mH1) -  (mH2*mH2))*(-u +  (mH2*mH2)) - 2*(s + 3*t + u + 5*\
 
   (mH1*mH1) -  (mH2*mH2))* (MW*MW*MW*MW) + 8* (MW*MW*MW*MW*MW*MW) + \
 
   (MW*MW)*(3*s*t + 3*s*u - 2*t*u +  (mH1*mH1)*(s + 2*t + 4*u - 6* (mH2*mH2))\
 
   - (7*s + 4*t + 2*u)* (mH2*mH2) + 6* (mH2*mH2*mH2*mH2) +  (s*s) + 2*\
 
   (t*t))))/(4.*(RR1x1 + RR1x2)*(-u +  (mHc*mHc))* (MW*MW*MW*MW)* (SW*SW)*(\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) +\
 
   (gc177*gc190*v*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))* (EL*EL)*(-((RR1x1*RR2x1 + RR1x2*RR2x2)*s) +\
 
   mHsm*(RR1x2*RR2x1 - RR1x1*RR2x2)*WHsm + (RR1x1*RR2x1 + RR1x2*RR2x2)*\
 
   (mHsm*mHsm))*(s*(s - t + u +  (mH1*mH1) -  (mH2*mH2))*(-t +  (mH2*mH2)) -\
 
   2*(s + t + 3*u + 5* (mH1*mH1) -  (mH2*mH2))* (MW*MW*MW*MW) + 8*\
 
   (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(3*s*t + 3*s*u - 2*t*u +  (mH1*mH1)*(s +\
 
   4*t + 2*u - 6* (mH2*mH2)) - (7*s + 2*t + 4*u)* (mH2*mH2) + 6*\
 
   (mH2*mH2*mH2*mH2) +  (s*s) + 2* (u*u))))/(4.*(RR2x1 + RR2x2)*(-t + \
 
   (mHc*mHc))* (MW*MW*MW*MW)* (SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) + ( (EL*EL*EL*EL)*(-4*s* (MW*MW) + 12*\
 
   (MW*MW*MW*MW) +  (s*s))* (v*v)* ((-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal\
 
   + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v +\
 
   RR1x3*(-(RR2x2*Timag) + RR2x1*Treal + L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))))/(16.* (MW*MW*MW*MW)* (SW*SW*SW*SW)*( (mHsm*mHsm*mHsm*mHsm)\
 
   +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))) +\
 
   (gc205*gc212*MZ*(RR1x1*RR2x1 + RR1x2*RR2x2)*(t - u)*WZ* (EL*EL)*(-12*\
 
   (MW*MW*MW*MW) +  (s*s)))/(4.* (MW*MW*MW*MW)* (SW*SW)*( (MZ*MZ*MZ*MZ) + \
 
   (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + ( (gc205*gc205)* (gc212*gc212)*(\
 
   (s*s)* ((t - u)*(t - u)) - 4* (MW*MW*MW*MW)*(6*t*u + 8* (mH1*mH1*mH1*mH1)\
 
   - 16*s* (mH2*mH2) - 16* (mH1*mH1)*(s +  (mH2*mH2)) + 8* (mH2*mH2*mH2*mH2)\
 
   + 8* (s*s) - 3* (t*t) - 3* (u*u)) + 4*s* (MW*MW)*(2*t*u + 2*\
 
   (mH1*mH1*mH1*mH1) - 4*s* (mH2*mH2) - 4* (mH1*mH1)*(s +  (mH2*mH2)) + 2*\
 
   (mH2*mH2*mH2*mH2) + 2* (s*s) -  (t*t) -  (u*u))))/(4.* (MW*MW*MW*MW)*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) -\
 
   (gc177*gc190*gc205*gc212*(-(RR1x2*RR2x1*s) + RR1x1*RR2x2*s -\
 
   MZ*(RR1x1*RR2x1 + RR1x2*RR2x2)*WZ + (RR1x2*RR2x1 - RR1x1*RR2x2)*\
 
   (MZ*MZ))*(-(s*(t - u)*(s - t + u +  (mH1*mH1) -  (mH2*mH2))*(-t + \
 
   (mH2*mH2))) + 8*(-2*s + t - u + 6* (mH1*mH1) + 2* (mH2*mH2))*\
 
   (MW*MW*MW*MW*MW*MW) + 2* (MW*MW*MW*MW)*(7*s*t + s*u + 2*t*u + 4*\
 
   (mH1*mH1*mH1*mH1) + (6*s - 9*t + u)* (mH2*mH2) +  (mH1*mH1)*(-6*s - 11*t -\
 
   13*u + 32* (mH2*mH2)) - 4* (mH2*mH2*mH2*mH2) - 2* (s*s) - 3* (t*t) + \
 
   (u*u)) +  (MW*MW)*(-2*(s + t - u)* (mH1*mH1*mH1*mH1) + 2*(s - 4*t + 4*u)*\
 
   (mH2*mH2*mH2*mH2) - 7*t* (s*s) + 3*u* (s*s) + 2* (s*s*s) - s* (t*t) - 4*u*\
 
   (t*t) + 2* (t*t*t) +  (mH2*mH2)*(15*s*t - 11*s*u + 2*t*u - 4* (s*s) + 2*\
 
   (t*t) - 4* (u*u)) + s* (u*u) + 2*t* (u*u) +  (mH1*mH1)*(11*s*t + s*u +\
 
   2*t*u - 2*(8*s - 5*t + 5*u)* (mH2*mH2) - 4* (t*t) + 2*\
 
   (u*u)))))/(2.*(RR2x1 + RR2x2)*(-t +  (mHc*mHc))* (MW*MW*MW*MW)*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) -\
 
   (gc179*gc188*gc205*gc212*(-(RR1x2*RR2x1*s) + RR1x1*RR2x2*s +\
 
   MZ*(RR1x1*RR2x1 + RR1x2*RR2x2)*WZ + (RR1x2*RR2x1 - RR1x1*RR2x2)*\
 
   (MZ*MZ))*(s*(t - u)*(s + t - u +  (mH1*mH1) -  (mH2*mH2))*(-u + \
 
   (mH2*mH2)) + 8*(-2*s - t + u + 6* (mH1*mH1) + 2* (mH2*mH2))*\
 
   (MW*MW*MW*MW*MW*MW) + 2* (MW*MW*MW*MW)*(s*t + 7*s*u + 2*t*u + 4*\
 
   (mH1*mH1*mH1*mH1) + (6*s + t - 9*u)* (mH2*mH2) +  (mH1*mH1)*(-6*s - 13*t -\
 
   11*u + 32* (mH2*mH2)) - 4* (mH2*mH2*mH2*mH2) - 2* (s*s) +  (t*t) - 3*\
 
   (u*u)) +  (MW*MW)*(-2*(s - t + u)* (mH1*mH1*mH1*mH1) + 2*(s + 4*t - 4*u)*\
 
   (mH2*mH2*mH2*mH2) + 3*t* (s*s) - 7*u* (s*s) + 2* (s*s*s) + s* (t*t) + 2*u*\
 
   (t*t) +  (mH1*mH1)*(s*t + 11*s*u + 2*t*u - 2*(8*s + 5*t - 5*u)* (mH2*mH2)\
 
   + 2* (t*t) - 4* (u*u)) - s* (u*u) - 4*t* (u*u) +  (mH2*mH2)*(-11*s*t +\
 
   15*s*u + 2*t*u - 4* (s*s) - 4* (t*t) + 2* (u*u)) + 2*\
 
   (u*u*u))))/(2.*(RR1x1 + RR1x2)*(-u +  (mHc*mHc))* (MW*MW*MW*MW)*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (gc205*gc212*(t -\
 
   u)*v*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))* (EL*EL)*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) +\
 
   mHsm*WHsm*(s -  (MZ*MZ)))*(-12* (MW*MW*MW*MW) +  (s*s)))/(4.*\
 
   (MW*MW*MW*MW)* (SW*SW)*( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H1H2VEve(double cos_t, double s){
double t = (-s +  (mH1*mH1) +  (mH2*mH2) + 2* (Mnue*Mnue) + cos_t*sqrt(s - 4*\
 
   (Mnue*Mnue))*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (( (mH2*mH2) - s)*( (mH2*mH2) - s)))/s))/2.;
double u = -s - t + mH1*mH1 + mH2*mH2 + Mnue*Mnue + Mnue*Mnue;
return ( (gc212*gc212)* (gc282*gc282)*(2*t*u +  (mH1*mH1*mH1*mH1) + \
 
   (mH2*mH2*mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2) - 2* (Mnue*Mnue)) - 2*s*\
 
   (Mnue*Mnue) +  (mH2*mH2)*(-2*s + 4* (Mnue*Mnue)) +  (s*s) -  (t*t) - \
 
   (u*u)))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::H1H2VMvm(double cos_t, double s){
double t = (-s +  (mH1*mH1) +  (mH2*mH2) + 2* (Mnum*Mnum) + cos_t*sqrt(s - 4*\
 
   (Mnum*Mnum))*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (( (mH2*mH2) - s)*( (mH2*mH2) - s)))/s))/2.;
double u = -s - t + mH1*mH1 + mH2*mH2 + Mnum*Mnum + Mnum*Mnum;
return ( (gc212*gc212)* (gc283*gc283)*(2*t*u +  (mH1*mH1*mH1*mH1) + \
 
   (mH2*mH2*mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2) - 2* (Mnum*Mnum)) - 2*s*\
 
   (Mnum*Mnum) +  (mH2*mH2)*(-2*s + 4* (Mnum*Mnum)) +  (s*s) -  (t*t) - \
 
   (u*u)))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::H1H2VTvt(double cos_t, double s){
double t = (-s +  (mH1*mH1) +  (mH2*mH2) + 2* (Mnut*Mnut) + cos_t*sqrt(s - 4*\
 
   (Mnut*Mnut))*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (( (mH2*mH2) - s)*( (mH2*mH2) - s)))/s))/2.;
double u = -s - t + mH1*mH1 + mH2*mH2 + Mnut*Mnut + Mnut*Mnut;
return ( (gc212*gc212)* (gc284*gc284)*(2*t*u +  (mH1*mH1*mH1*mH1) + \
 
   (mH2*mH2*mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2) - 2* (Mnut*Mnut)) - 2*s*\
 
   (Mnut*Mnut) +  (mH2*mH2)*(-2*s + 4* (Mnut*Mnut)) +  (s*s) -  (t*t) - \
 
   (u*u)))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::H1H2Ee(double cos_t, double s){
double t = (-s + 2* (Me*Me) +  (mH1*mH1) +  (mH2*mH2) + cos_t*sqrt(s - 4*\
 
   (Me*Me))*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mH2*mH2)) +  ((\
 
   (mH2*mH2) - s)*( (mH2*mH2) - s)))/s))/2.;
double u = -s - t + mH1*mH1 + mH2*mH2 + Me*Me + Me*Me;
return (-2* (gc63*gc63)*(-s + 4* (Me*Me))* ((-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (-2*gc212*Me*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(gc276L*gc62L*(-t + u +  (mH1*mH1) - \
 
   (mH2*mH2)) + gc276R*gc62R*(-t + u +  (mH1*mH1) -  (mH2*mH2)) +\
 
   gc276R*gc62L*(-t + u -  (mH1*mH1) +  (mH2*mH2)) + gc276L*gc62R*(-t + u - \
 
   (mH1*mH1) +  (mH2*mH2))) +  (gc212*gc212)*(4*gc276L*gc276R* (Me*Me)*(s -\
 
   2* (mH1*mH1) - 2* (mH2*mH2)) +  (gc276L*gc276L)*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (Me*Me)*(-2*s + 4* (mH1*mH1) + 4* (mH2*mH2)) +  (mH2*mH2*mH2*mH2) +  (s*s)\
 
   -  (t*t) -  (u*u)) +  (gc276R*gc276R)*(2*t*u +  (mH1*mH1*mH1*mH1) - 2*s*\
 
   (mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2)) +  (Me*Me)*(-2*s + 4* (mH1*mH1)\
 
   + 4* (mH2*mH2)) +  (mH2*mH2*mH2*mH2) +  (s*s) -  (t*t) -  (u*u))) -\
 
   (4*gc62L*gc62R* (Me*Me) +  (gc62L*gc62L)*(-s + 2* (Me*Me)) + \
 
   (gc62R*gc62R)*(-s + 2* (Me*Me)))* ((RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag\
 
   + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v +\
 
   L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag +\
 
   RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v +\
 
   L5*RR1x1*RR2x2*v)))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))\
 
   - (2*gc63*(-(RR1x1*(RR2x3*Treal + (L3 + L4 + L5)*RR2x1*v)) +\
 
   RR1x2*(RR2x3*Timag - (L3 + L4 - L5)*RR2x2*v) + RR1x3*(RR2x2*Timag -\
 
   RR2x1*Treal - L7*RR2x3*v))*(2*gc212*(gc276L + gc276R)*Me*(t - u) - (gc62L\
 
   + gc62R)*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal +\
 
   RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(-s + 4*\
 
   (Me*Me)))*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) + mHsm*WHsm*(s -  (MZ*MZ))))/((\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H1H2Mm(double cos_t, double s){
double t = (-s +  (mH1*mH1) +  (mH2*mH2) + 2* (MM*MM) + cos_t*sqrt(s - 4*\
 
   (MM*MM))*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mH2*mH2)) +  ((\
 
   (mH2*mH2) - s)*( (mH2*mH2) - s)))/s))/2.;
double u = -s - t + mH1*mH1 + mH2*mH2 + MM*MM + MM*MM;
return (2* (gc65*gc65)*(s - 4* (MM*MM))* ((-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (-2*gc212*MM*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(gc277L*gc64L*(-t + u +  (mH1*mH1) - \
 
   (mH2*mH2)) + gc277R*gc64R*(-t + u +  (mH1*mH1) -  (mH2*mH2)) +\
 
   gc277R*gc64L*(-t + u -  (mH1*mH1) +  (mH2*mH2)) + gc277L*gc64R*(-t + u - \
 
   (mH1*mH1) +  (mH2*mH2))) +  (gc212*gc212)*(4*gc277L*gc277R*(s - 2*\
 
   (mH1*mH1) - 2* (mH2*mH2))* (MM*MM) +  (gc277L*gc277L)*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (mH2*mH2*mH2*mH2) +  (s*s) -  (t*t) -  (u*u)) +  (gc277R*gc277R)*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (mH2*mH2*mH2*mH2) +  (s*s) -  (t*t) -  (u*u))) + (s* (gc64L*gc64L) + s*\
 
   (gc64R*gc64R) - 4*gc64L*gc64R* (MM*MM))* ((RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)) +  (MM*MM)*(2* (gc212*gc212)*(\
 
   (gc277L*gc277L) +  (gc277R*gc277R))*(-s + 2* (mH1*mH1) + 2* (mH2*mH2)) -\
 
   2*( (gc64L*gc64L) +  (gc64R*gc64R))* ((RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v))))/( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))) + (2*gc65*(-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(2*gc212*(gc277L + gc277R)*MM*(t - u) - (gc64L +\
 
   gc64R)*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal +\
 
   RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(-s + 4*\
 
   (MM*MM)))*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) + mHsm*WHsm*(s -  (MZ*MZ))))/((\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H1H2TAta(double cos_t, double s){
double t = (-s +  (mH1*mH1) +  (mH2*mH2) + 2* (MTA*MTA) + cos_t*sqrt(s - 4*\
 
   (MTA*MTA))*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mH2*mH2)) +  ((\
 
   (mH2*mH2) - s)*( (mH2*mH2) - s)))/s))/2.;
double u = -s - t + mH1*mH1 + mH2*mH2 + MTA*MTA + MTA*MTA;
return (-2* (gc67*gc67)*(-s + 4* (MTA*MTA))* ((-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (-2*gc212*MTA*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(gc278L*gc66L*(-t + u +  (mH1*mH1) - \
 
   (mH2*mH2)) + gc278R*gc66R*(-t + u +  (mH1*mH1) -  (mH2*mH2)) +\
 
   gc278R*gc66L*(-t + u -  (mH1*mH1) +  (mH2*mH2)) + gc278L*gc66R*(-t + u - \
 
   (mH1*mH1) +  (mH2*mH2))) +  (gc212*gc212)*(4*gc278L*gc278R*(s - 2*\
 
   (mH1*mH1) - 2* (mH2*mH2))* (MTA*MTA) +  (gc278L*gc278L)*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) +  (mH2*mH2*mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2) - 2*\
 
   (MTA*MTA)) - 2*s* (MTA*MTA) +  (mH2*mH2)*(-2*s + 4* (MTA*MTA)) +  (s*s) - \
 
   (t*t) -  (u*u)) +  (gc278R*gc278R)*(2*t*u +  (mH1*mH1*mH1*mH1) + \
 
   (mH2*mH2*mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2) - 2* (MTA*MTA)) - 2*s*\
 
   (MTA*MTA) +  (mH2*mH2)*(-2*s + 4* (MTA*MTA)) +  (s*s) -  (t*t) -  (u*u)))\
 
   - (4*gc66L*gc66R* (MTA*MTA) +  (gc66L*gc66L)*(-s + 2* (MTA*MTA)) + \
 
   (gc66R*gc66R)*(-s + 2* (MTA*MTA)))* ((RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)))/( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))) - (2*gc67*(-(RR1x1*(RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*v)) + RR1x2*(RR2x3*Timag - (L3 + L4 - L5)*RR2x2*v) +\
 
   RR1x3*(RR2x2*Timag - RR2x1*Treal - L7*RR2x3*v))*(2*gc212*(gc278L +\
 
   gc278R)*MTA*(t - u) - (gc66L + gc66R)*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(-s + 4* (MTA*MTA)))*(-(MZ*s*WZ) +\
 
   MZ*WZ* (mHsm*mHsm) + mHsm*WHsm*(s -  (MZ*MZ))))/(( (mHsm*mHsm*mHsm*mHsm) +\
 
    (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H1H2Uu(double cos_t, double s){
double t = (-s +  (mH1*mH1) +  (mH2*mH2) + 2* (MU*MU) + cos_t*sqrt(s - 4*\
 
   (MU*MU))*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mH2*mH2)) +  ((\
 
   (mH2*mH2) - s)*( (mH2*mH2) - s)))/s))/2.;
double u = -s - t + mH1*mH1 + mH2*mH2 + MU*MU + MU*MU;
return (6* (gc85*gc85)*(s - 4* (MU*MU))* ((-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (3*(-2*gc212*MU*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(gc281L*gc84L*(-t + u +  (mH1*mH1) - \
 
   (mH2*mH2)) + gc281R*gc84R*(-t + u +  (mH1*mH1) -  (mH2*mH2)) +\
 
   gc281R*gc84L*(-t + u -  (mH1*mH1) +  (mH2*mH2)) + gc281L*gc84R*(-t + u - \
 
   (mH1*mH1) +  (mH2*mH2))) +  (gc212*gc212)*(4*gc281L*gc281R*(s - 2*\
 
   (mH1*mH1) - 2* (mH2*mH2))* (MU*MU) +  (gc281L*gc281L)*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (mH2*mH2*mH2*mH2) +  (s*s) -  (t*t) -  (u*u)) +  (gc281R*gc281R)*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (mH2*mH2*mH2*mH2) +  (s*s) -  (t*t) -  (u*u))) + (s* (gc84L*gc84L) + s*\
 
   (gc84R*gc84R) - 4*gc84L*gc84R* (MU*MU))* ((RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)) +  (MU*MU)*(2* (gc212*gc212)*(\
 
   (gc281L*gc281L) +  (gc281R*gc281R))*(-s + 2* (mH1*mH1) + 2* (mH2*mH2)) -\
 
   2*( (gc84L*gc84L) +  (gc84R*gc84R))* ((RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)))))/( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))) + (6*gc85*(-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(2*gc212*(gc281L + gc281R)*MU*(t - u) - (gc84L +\
 
   gc84R)*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal +\
 
   RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(-s + 4*\
 
   (MU*MU)))*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) + mHsm*WHsm*(s -  (MZ*MZ))))/((\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H1H2Cc(double cos_t, double s){
double t = (-s + 2* (MC*MC) +  (mH1*mH1) +  (mH2*mH2) + cos_t*sqrt(s - 4*\
 
   (MC*MC))*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mH2*mH2)) +  ((\
 
   (mH2*mH2) - s)*( (mH2*mH2) - s)))/s))/2.;
double u = -s - t + mH1*mH1 + mH2*mH2 + MC*MC + MC*MC;
return (6* (gc81*gc81)*(s - 4* (MC*MC))* ((-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (3*(-2*gc212*MC*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(gc279L*gc80L*(-t + u +  (mH1*mH1) - \
 
   (mH2*mH2)) + gc279R*gc80R*(-t + u +  (mH1*mH1) -  (mH2*mH2)) +\
 
   gc279R*gc80L*(-t + u -  (mH1*mH1) +  (mH2*mH2)) + gc279L*gc80R*(-t + u - \
 
   (mH1*mH1) +  (mH2*mH2))) +  (gc212*gc212)*(4*gc279L*gc279R* (MC*MC)*(s -\
 
   2* (mH1*mH1) - 2* (mH2*mH2)) +  (gc279L*gc279L)*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (mH2*mH2*mH2*mH2) +  (s*s) -  (t*t) -  (u*u)) +  (gc279R*gc279R)*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (mH2*mH2*mH2*mH2) +  (s*s) -  (t*t) -  (u*u))) + (s* (gc80L*gc80L) + s*\
 
   (gc80R*gc80R) - 4*gc80L*gc80R* (MC*MC))* ((RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)) +  (MC*MC)*(2* (gc212*gc212)*(\
 
   (gc279L*gc279L) +  (gc279R*gc279R))*(-s + 2* (mH1*mH1) + 2* (mH2*mH2)) -\
 
   2*( (gc80L*gc80L) +  (gc80R*gc80R))* ((RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)))))/( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))) + (6*gc81*(-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(2*gc212*(gc279L + gc279R)*MC*(t - u) - (gc80L +\
 
   gc80R)*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal +\
 
   RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(-s + 4*\
 
   (MC*MC)))*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) + mHsm*WHsm*(s -  (MZ*MZ))))/((\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H1H2Tt(double cos_t, double s){
double t = (-s +  (mH1*mH1) +  (mH2*mH2) + 2* (MT*MT) + cos_t*sqrt(s - 4*\
 
   (MT*MT))*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mH2*mH2)) +  ((\
 
   (mH2*mH2) - s)*( (mH2*mH2) - s)))/s))/2.;
double u = -s - t + mH1*mH1 + mH2*mH2 + MT*MT + MT*MT;
return (6* (gc83*gc83)*(s - 4* (MT*MT))* ((-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (3*(-2*gc212*MT*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(gc280L*gc82L*(-t + u +  (mH1*mH1) - \
 
   (mH2*mH2)) + gc280R*gc82R*(-t + u +  (mH1*mH1) -  (mH2*mH2)) +\
 
   gc280R*gc82L*(-t + u -  (mH1*mH1) +  (mH2*mH2)) + gc280L*gc82R*(-t + u - \
 
   (mH1*mH1) +  (mH2*mH2))) +  (gc212*gc212)*(4*gc280L*gc280R*(s - 2*\
 
   (mH1*mH1) - 2* (mH2*mH2))* (MT*MT) +  (gc280L*gc280L)*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (mH2*mH2*mH2*mH2) +  (s*s) -  (t*t) -  (u*u)) +  (gc280R*gc280R)*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (mH2*mH2*mH2*mH2) +  (s*s) -  (t*t) -  (u*u))) + (s* (gc82L*gc82L) + s*\
 
   (gc82R*gc82R) - 4*gc82L*gc82R* (MT*MT))* ((RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)) +  (MT*MT)*(2* (gc212*gc212)*(\
 
   (gc280L*gc280L) +  (gc280R*gc280R))*(-s + 2* (mH1*mH1) + 2* (mH2*mH2)) -\
 
   2*( (gc82L*gc82L) +  (gc82R*gc82R))* ((RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)))))/( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))) + (6*gc83*(-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(2*gc212*(gc280L + gc280R)*MT*(t - u) - (gc82L +\
 
   gc82R)*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal +\
 
   RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(-s + 4*\
 
   (MT*MT)))*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) + mHsm*WHsm*(s -  (MZ*MZ))))/((\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H1H2Dd(double cos_t, double s){
double t = (-s + 2* (MD*MD) +  (mH1*mH1) +  (mH2*mH2) + cos_t*sqrt(s - 4*\
 
   (MD*MD))*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mH2*mH2)) +  ((\
 
   (mH2*mH2) - s)*( (mH2*mH2) - s)))/s))/2.;
double u = -s - t + mH1*mH1 + mH2*mH2 + MD*MD + MD*MD;
return (6* (gc50*gc50)*(s - 4* (MD*MD))* ((-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (3*(-2*gc212*MD*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(gc274L*gc49L*(-t + u +  (mH1*mH1) - \
 
   (mH2*mH2)) + gc274R*gc49R*(-t + u +  (mH1*mH1) -  (mH2*mH2)) +\
 
   gc274R*gc49L*(-t + u -  (mH1*mH1) +  (mH2*mH2)) + gc274L*gc49R*(-t + u - \
 
   (mH1*mH1) +  (mH2*mH2))) +  (gc212*gc212)*(4*gc274L*gc274R* (MD*MD)*(s -\
 
   2* (mH1*mH1) - 2* (mH2*mH2)) +  (gc274L*gc274L)*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (mH2*mH2*mH2*mH2) +  (s*s) -  (t*t) -  (u*u)) +  (gc274R*gc274R)*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (mH2*mH2*mH2*mH2) +  (s*s) -  (t*t) -  (u*u))) + (s* (gc49L*gc49L) + s*\
 
   (gc49R*gc49R) - 4*gc49L*gc49R* (MD*MD))* ((RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)) +  (MD*MD)*(2* (gc212*gc212)*(\
 
   (gc274L*gc274L) +  (gc274R*gc274R))*(-s + 2* (mH1*mH1) + 2* (mH2*mH2)) -\
 
   2*( (gc49L*gc49L) +  (gc49R*gc49R))* ((RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)))))/( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))) + (6*gc50*(-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(2*gc212*(gc274L + gc274R)*MD*(t - u) - (gc49L +\
 
   gc49R)*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal +\
 
   RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(-s + 4*\
 
   (MD*MD)))*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) + mHsm*WHsm*(s -  (MZ*MZ))))/((\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H1H2Ss(double cos_t, double s){
double t = (-s +  (mH1*mH1) +  (mH2*mH2) + 2* (MS*MS) + cos_t*sqrt(s - 4*\
 
   (MS*MS))*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mH2*mH2)) +  ((\
 
   (mH2*mH2) - s)*( (mH2*mH2) - s)))/s))/2.;
double u = -s - t + mH1*mH1 + mH2*mH2 + MS*MS + MS*MS;
return (6* (gc52*gc52)*(s - 4* (MS*MS))* ((-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (3*(-2*gc212*MS*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(gc275L*gc51L*(-t + u +  (mH1*mH1) - \
 
   (mH2*mH2)) + gc275R*gc51R*(-t + u +  (mH1*mH1) -  (mH2*mH2)) +\
 
   gc275R*gc51L*(-t + u -  (mH1*mH1) +  (mH2*mH2)) + gc275L*gc51R*(-t + u - \
 
   (mH1*mH1) +  (mH2*mH2))) +  (gc212*gc212)*(4*gc275L*gc275R*(s - 2*\
 
   (mH1*mH1) - 2* (mH2*mH2))* (MS*MS) +  (gc275L*gc275L)*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (mH2*mH2*mH2*mH2) +  (s*s) -  (t*t) -  (u*u)) +  (gc275R*gc275R)*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (mH2*mH2*mH2*mH2) +  (s*s) -  (t*t) -  (u*u))) + (s* (gc51L*gc51L) + s*\
 
   (gc51R*gc51R) - 4*gc51L*gc51R* (MS*MS))* ((RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)) +  (MS*MS)*(2* (gc212*gc212)*(\
 
   (gc275L*gc275L) +  (gc275R*gc275R))*(-s + 2* (mH1*mH1) + 2* (mH2*mH2)) -\
 
   2*( (gc51L*gc51L) +  (gc51R*gc51R))* ((RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)))))/( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))) + (6*gc52*(-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(2*gc212*(gc275L + gc275R)*MS*(t - u) - (gc51L +\
 
   gc51R)*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal +\
 
   RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(-s + 4*\
 
   (MS*MS)))*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) + mHsm*WHsm*(s -  (MZ*MZ))))/((\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::H1H2Bb(double cos_t, double s){
double t = (-s + 2* (MB*MB) +  (mH1*mH1) +  (mH2*mH2) + cos_t*sqrt(s - 4*\
 
   (MB*MB))*sqrt(( (mH1*mH1*mH1*mH1) - 2* (mH1*mH1)*(s +  (mH2*mH2)) +  ((\
 
   (mH2*mH2) - s)*( (mH2*mH2) - s)))/s))/2.;
double u = -s - t + mH1*mH1 + mH2*mH2 + MB*MB + MB*MB;
return (6* (gc48*gc48)*(s - 4* (MB*MB))* ((-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))))/( (mHsm*mHsm*mHsm*mHsm) +  (s*s) + \
 
   (mHsm*mHsm)*(-2*s +  (WHsm*WHsm))) + (3*(-2*gc212*MB*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(gc273L*gc47L*(-t + u +  (mH1*mH1) - \
 
   (mH2*mH2)) + gc273R*gc47R*(-t + u +  (mH1*mH1) -  (mH2*mH2)) +\
 
   gc273R*gc47L*(-t + u -  (mH1*mH1) +  (mH2*mH2)) + gc273L*gc47R*(-t + u - \
 
   (mH1*mH1) +  (mH2*mH2))) +  (gc212*gc212)*(4*gc273L*gc273R* (MB*MB)*(s -\
 
   2* (mH1*mH1) - 2* (mH2*mH2)) +  (gc273L*gc273L)*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (mH2*mH2*mH2*mH2) +  (s*s) -  (t*t) -  (u*u)) +  (gc273R*gc273R)*(2*t*u + \
 
   (mH1*mH1*mH1*mH1) - 2*s* (mH2*mH2) - 2* (mH1*mH1)*(s +  (mH2*mH2)) + \
 
   (mH2*mH2*mH2*mH2) +  (s*s) -  (t*t) -  (u*u))) + (s* (gc47L*gc47L) + s*\
 
   (gc47R*gc47R) - 4*gc47L*gc47R* (MB*MB))* ((RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)) +  (MB*MB)*(2* (gc212*gc212)*(\
 
   (gc273L*gc273L) +  (gc273R*gc273R))*(-s + 2* (mH1*mH1) + 2* (mH2*mH2)) -\
 
   2*( (gc47L*gc47L) +  (gc47R*gc47R))* ((RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(RR1x3*RR2x1*Timag +\
 
   RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal + RR1x2*RR2x3*Treal +\
 
   L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)))))/( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))) + (6*gc48*(-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(2*gc212*(gc273L + gc273R)*MB*(t - u) - (gc47L +\
 
   gc47R)*(RR1x3*RR2x1*Timag + RR1x1*RR2x3*Timag + RR1x3*RR2x2*Treal +\
 
   RR1x2*RR2x3*Treal + L5*RR1x2*RR2x1*v + L5*RR1x1*RR2x2*v)*(-s + 4*\
 
   (MB*MB)))*(-(MZ*s*WZ) + MZ*WZ* (mHsm*mHsm) + mHsm*WHsm*(s -  (MZ*MZ))))/((\
 
   (mHsm*mHsm*mHsm*mHsm) +  (s*s) +  (mHsm*mHsm)*(-2*s +  (WHsm*WHsm)))*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
