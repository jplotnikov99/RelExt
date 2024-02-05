///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::A1A1HH(double cos_t, double s){
double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4* (MA1*MA1))*sqrt(s - 4*\
 
      (MH*MH)))/2. +  (MH*MH);
double u = -s - t + MA1*MA1 + MA1*MA1 + MH*MH + MH*MH;
return (9* (MH*MH*MH*MH)* (( (MH*MH) +  (WH*WH))*( (MH*MH) +  (WH*WH)))*\
 
      ((3*svev*cos( alpha) + svev*cos( 3*alpha) + 4*vev*\
 
      (sin(alpha)*sin(alpha)*sin(alpha)))*(3*svev*cos( alpha) + svev*cos(\
 
      3*alpha) + 4*vev* (sin(alpha)*sin(alpha)*sin(alpha))))*\
 
      (sin(alpha)*sin(alpha)))/(16.* (svev*svev*svev*svev)* (vev*vev)*(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (3*(-s + \
 
      (MH*MH))* (MH*MH*MH*MH)* (( (MH*MH) +  (WH*WH))*( (MH*MH) +  (WH*WH)))*\
 
      (sin(alpha)*sin(alpha)*sin(alpha))*(3*svev*cos( alpha) + svev*cos(\
 
      3*alpha) + 4*vev* (sin(alpha)*sin(alpha)*sin(alpha))))/(2.*vev*(-t + \
 
      (MA1*MA1))* (svev*svev*svev*svev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))) + (3*(-s +  (MH*MH))* (MH*MH*MH*MH)* ((\
 
      (MH*MH) +  (WH*WH))*( (MH*MH) +  (WH*WH)))*\
 
      (sin(alpha)*sin(alpha)*sin(alpha))*(3*svev*cos( alpha) + svev*cos(\
 
      3*alpha) + 4*vev* (sin(alpha)*sin(alpha)*sin(alpha))))/(2.*vev*(-u + \
 
      (MA1*MA1))* (svev*svev*svev*svev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))) + (2* (MH*MH*MH*MH)* (( (MH*MH) + \
 
      (WH*WH))*( (MH*MH) +  (WH*WH)))*\
 
      (sin(alpha)*sin(alpha)*sin(alpha)*sin(alpha)))/((-t +  (MA1*MA1))*(-u +\
 
       (MA1*MA1))* (svev*svev*svev*svev)) + ( (MH*MH*MH*MH)* (( (MH*MH) + \
 
      (WH*WH))*( (MH*MH) +  (WH*WH)))*\
 
      (sin(alpha)*sin(alpha)*sin(alpha)*sin(alpha)))/( (svev*svev*svev*svev)*\
 
      (( (MA1*MA1) - t)*( (MA1*MA1) - t))) + ( (MH*MH*MH*MH)* (( (MH*MH) + \
 
      (WH*WH))*( (MH*MH) +  (WH*WH)))*\
 
      (sin(alpha)*sin(alpha)*sin(alpha)*sin(alpha)))/( (svev*svev*svev*svev)*\
 
      (( (MA1*MA1) - u)*( (MA1*MA1) - u))) + ( (MS1*MS1)*( (MS1*MS1) + \
 
      (WS1*WS1))*(4*MH*MS1*WH*WS1 + 4* (MH*MH*MH*MH) + 4* (MH*MH)*( (MS1*MS1)\
 
      +  (WH*WH)) +  (MS1*MS1)*( (MS1*MS1) +  (WS1*WS1)))* (cos( alpha)*cos(\
 
      alpha)*cos( alpha)*cos( alpha))* (sin(alpha)*sin(alpha))* ((svev*cos(\
 
      alpha) - vev*sin(alpha))*(svev*cos( alpha) - vev*sin(alpha))))/(\
 
      (svev*svev*svev*svev)* (vev*vev)*( (MS1*MS1*MS1*MS1) +  (s*s) + \
 
      (MS1*MS1)*(-2*s +  (WS1*WS1)))) - (2*MS1* (MH*MH)*(-2*s*WH*WS1*\
 
      (MH*MH*MH) + 2*MS1* (MH*MH*MH*MH)*(-s +  (MS1*MS1) +  (WS1*WS1)) +\
 
      2*MH*WH*WS1*( (MS1*MS1*MS1*MS1) - s* (WH*WH) +  (MS1*MS1)*(-2*s + \
 
      (WS1*WS1))) - MS1* (WH*WH)*( (MS1*MS1*MS1*MS1) + s* (WS1*WS1) + \
 
      (MS1*MS1)*(-s +  (WS1*WS1))) + MS1* (MH*MH)*( (MS1*MS1*MS1*MS1) - 2*s*\
 
      (WH*WH) + s* (WS1*WS1) + 2* (WH*WH)* (WS1*WS1) +  (MS1*MS1)*(-s + 2*\
 
      (WH*WH) +  (WS1*WS1))))* (cos( alpha)*cos( alpha))*\
 
      (sin(alpha)*sin(alpha)*sin(alpha))*(svev*cos( alpha) -\
 
      vev*sin(alpha)))/(vev*(-t +  (MA1*MA1))* (svev*svev*svev*svev)*(\
 
      (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) - (2*MS1*\
 
      (MH*MH)*(-2*s*WH*WS1* (MH*MH*MH) + 2*MS1* (MH*MH*MH*MH)*(-s + \
 
      (MS1*MS1) +  (WS1*WS1)) + 2*MH*WH*WS1*( (MS1*MS1*MS1*MS1) - s* (WH*WH)\
 
      +  (MS1*MS1)*(-2*s +  (WS1*WS1))) - MS1* (WH*WH)*( (MS1*MS1*MS1*MS1) +\
 
      s* (WS1*WS1) +  (MS1*MS1)*(-s +  (WS1*WS1))) + MS1* (MH*MH)*(\
 
      (MS1*MS1*MS1*MS1) - 2*s* (WH*WH) + s* (WS1*WS1) + 2* (WH*WH)* (WS1*WS1)\
 
      +  (MS1*MS1)*(-s + 2* (WH*WH) +  (WS1*WS1))))* (cos( alpha)*cos(\
 
      alpha))* (sin(alpha)*sin(alpha)*sin(alpha))*(svev*cos( alpha) -\
 
      vev*sin(alpha)))/(vev*(-u +  (MA1*MA1))* (svev*svev*svev*svev)*(\
 
      (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) - (3*\
 
      (MH*MH)* (sin(alpha)*sin(alpha))*(3*svev*cos( alpha) + svev*cos(\
 
      3*alpha) + 4*vev* (sin(alpha)*sin(alpha)*sin(alpha)))*(3*svev*cos(\
 
      alpha)*(-(MS1*WH*WS1* (MH*MH*MH)) +  (MH*MH*MH*MH*MH*MH) - \
 
      (MH*MH*MH*MH)*(s +  (MS1*MS1) - 2* (WH*WH)) +  (MH*MH)*(s -  (WH*WH))*(\
 
      (MS1*MS1) -  (WH*WH)) - s* (MS1*MS1)* (WH*WH) - MH*MS1*WH*WS1*(-2*s + \
 
      (WH*WH))) + svev*cos( 3*alpha)*(-(MS1*WH*WS1* (MH*MH*MH)) + \
 
      (MH*MH*MH*MH*MH*MH) -  (MH*MH*MH*MH)*(s +  (MS1*MS1) - 2* (WH*WH)) + \
 
      (MH*MH)*(s -  (WH*WH))*( (MS1*MS1) -  (WH*WH)) - s* (MS1*MS1)* (WH*WH)\
 
      - MH*MS1*WH*WS1*(-2*s +  (WH*WH))) - 2*vev*(-(MS1*WH*WS1* (MH*MH*MH)) -\
 
       (MH*MH*MH*MH*MH*MH) +  (MH*MH*MH*MH)*(s -  (MS1*MS1) - 2* (WH*WH)) -\
 
      s* (MS1*MS1)* (WH*WH) - MH*MS1*WH*WS1*(-2*s +  (WH*WH)) +  (MH*MH)*(s -\
 
       (WH*WH))*( (MS1*MS1) +  (WH*WH)) + cos( 2*alpha)*(-(MS1*WH*WS1*\
 
      (MH*MH*MH)) +  (MH*MH*MH*MH*MH*MH) -  (MH*MH*MH*MH)*(s +  (MS1*MS1) -\
 
      2* (WH*WH)) +  (MH*MH)*(s -  (WH*WH))*( (MS1*MS1) -  (WH*WH)) - s*\
 
      (MS1*MS1)* (WH*WH) - MH*MS1*WH*WS1*(-2*s + \
 
      (WH*WH))))*sin(alpha)))/(8.* (svev*svev*svev*svev)* (vev*vev)*(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) - ( (MH*MH)*\
 
      (sin(alpha)*sin(alpha)*sin(alpha))*(2*svev*(-2*MH*MS1*WH*WS1 + \
 
      (MH*MH*MH*MH) +  (MS1*MS1)* (WH*WH) +  (MH*MH)*(- (MS1*MS1) + \
 
      (WH*WH)))* (cos( alpha)*cos( alpha)*cos( alpha)) + vev*(2*MH*MS1*WH*WS1\
 
      +  (MH*MH*MH*MH) -  (MS1*MS1)* (WH*WH) +  (MH*MH)*( (MS1*MS1) + \
 
      (WH*WH)) - cos( 2*alpha)*(-2*MH*MS1*WH*WS1 +  (MH*MH*MH*MH) + \
 
      (MS1*MS1)* (WH*WH) +  (MH*MH)*(- (MS1*MS1) + \
 
      (WH*WH))))*sin(alpha)))/(vev*(-t +  (MA1*MA1))* (svev*svev*svev*svev))\
 
      - ( (MH*MH)*\
 
      (sin(alpha)*sin(alpha)*sin(alpha))*(2*svev*(-2*MH*MS1*WH*WS1 + \
 
      (MH*MH*MH*MH) +  (MS1*MS1)* (WH*WH) +  (MH*MH)*(- (MS1*MS1) + \
 
      (WH*WH)))* (cos( alpha)*cos( alpha)*cos( alpha)) + vev*(2*MH*MS1*WH*WS1\
 
      +  (MH*MH*MH*MH) -  (MS1*MS1)* (WH*WH) +  (MH*MH)*( (MS1*MS1) + \
 
      (WH*WH)) - cos( 2*alpha)*(-2*MH*MS1*WH*WS1 +  (MH*MH*MH*MH) + \
 
      (MS1*MS1)* (WH*WH) +  (MH*MH)*(- (MS1*MS1) + \
 
      (WH*WH))))*sin(alpha)))/(vev*(-u +  (MA1*MA1))* (svev*svev*svev*svev))\
 
      - ( (MS1*MS1)* (cos( alpha)*cos( alpha))*\
 
      (sin(alpha)*sin(alpha))*(svev*cos( alpha) -\
 
      vev*sin(alpha))*(-3*svev*cos( alpha)*(2* (MH*MH*MH*MH)*(-s +  (MS1*MS1)\
 
      +  (WS1*WS1)) -  (MS1*MS1)*( (MS1*MS1) +  (WS1*WS1))*(-s +  (MS1*MS1) +\
 
       (WS1*WS1)) - MH*MS1*WH*WS1*(2*s +  (MS1*MS1) +  (WS1*WS1)) + \
 
      (MH*MH)*(- (MS1*MS1*MS1*MS1) - 2*s* (WH*WH) +  (MS1*MS1)*(s + 2*\
 
      (WH*WH) -  (WS1*WS1)) + 3*s* (WS1*WS1) + 2* (WH*WH)* (WS1*WS1))) -\
 
      svev*cos( 3*alpha)*(2* (MH*MH*MH*MH)*(-s +  (MS1*MS1) +  (WS1*WS1)) - \
 
      (MS1*MS1)*( (MS1*MS1) +  (WS1*WS1))*(-s +  (MS1*MS1) +  (WS1*WS1)) -\
 
      MH*MS1*WH*WS1*(2*s +  (MS1*MS1) +  (WS1*WS1)) +  (MH*MH)*(-\
 
      (MS1*MS1*MS1*MS1) - 2*s* (WH*WH) +  (MS1*MS1)*(s + 2* (WH*WH) - \
 
      (WS1*WS1)) + 3*s* (WS1*WS1) + 2* (WH*WH)* (WS1*WS1))) +\
 
      2*vev*(MH*MS1*WH*WS1*(2*s - 3* (MS1*MS1) - 3* (WS1*WS1)) - 2*\
 
      (MH*MH*MH*MH)*(-s +  (MS1*MS1) +  (WS1*WS1)) -  (MS1*MS1)*( (MS1*MS1) +\
 
       (WS1*WS1))*(-s +  (MS1*MS1) +  (WS1*WS1)) +  (MH*MH)*(-3*\
 
      (MS1*MS1*MS1*MS1) + 2*s* (WH*WH) +  (MS1*MS1)*(3*s - 2* (WH*WH) - 3*\
 
      (WS1*WS1)) + s* (WS1*WS1) - 2* (WH*WH)* (WS1*WS1)) + cos( 2*alpha)*(2*\
 
      (MH*MH*MH*MH)*(-s +  (MS1*MS1) +  (WS1*WS1)) -  (MS1*MS1)*( (MS1*MS1) +\
 
       (WS1*WS1))*(-s +  (MS1*MS1) +  (WS1*WS1)) - MH*MS1*WH*WS1*(2*s + \
 
      (MS1*MS1) +  (WS1*WS1)) +  (MH*MH)*(- (MS1*MS1*MS1*MS1) - 2*s* (WH*WH)\
 
      +  (MS1*MS1)*(s + 2* (WH*WH) -  (WS1*WS1)) + 3*s* (WS1*WS1) + 2*\
 
      (WH*WH)* (WS1*WS1))))*sin(alpha)))/(2.* (svev*svev*svev*svev)*\
 
      (vev*vev)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s + \
 
      (WS1*WS1)))) + ( (sin(alpha)*sin(alpha))*(4*\
 
      (svev*svev)*(-2*MH*MS1*WH*WS1 +  (MH*MH*MH*MH) +  (MH*MH)*(-2*\
 
      (MS1*MS1) +  (WH*WH)) +  (MS1*MS1)*( (MS1*MS1) +  (WS1*WS1)))* (cos(\
 
      alpha)*cos( alpha)*cos( alpha)*cos( alpha)*cos( alpha)*cos( alpha)) + (\
 
      (vev*vev)*(2*MH*MS1*WH*WS1 + 3* (MH*MH*MH*MH) + 2* (MH*MH)* (MS1*MS1) +\
 
      3* (MS1*MS1*MS1*MS1) + 3* (MH*MH)* (WH*WH) + 3* (MS1*MS1)* (WS1*WS1) -\
 
      4*cos( 2*alpha)*( (MH*MH*MH*MH) +  (MH*MH)* (WH*WH) -  (MS1*MS1)*(\
 
      (MS1*MS1) +  (WS1*WS1))) + cos( 4*alpha)*(-2*MH*MS1*WH*WS1 + \
 
      (MH*MH*MH*MH) +  (MH*MH)*(-2* (MS1*MS1) +  (WH*WH)) +  (MS1*MS1)*(\
 
      (MS1*MS1) +  (WS1*WS1))))* (sin(alpha)*sin(alpha)))/2. - 4*svev*vev*(-\
 
      (MH*MH*MH*MH) +  (MS1*MS1*MS1*MS1) -  (MH*MH)* (WH*WH) +  (MS1*MS1)*\
 
      (WS1*WS1) + cos( 2*alpha)*(-2*MH*MS1*WH*WS1 +  (MH*MH*MH*MH) + \
 
      (MH*MH)*(-2* (MS1*MS1) +  (WH*WH)) +  (MS1*MS1)*( (MS1*MS1) + \
 
      (WS1*WS1))))* (cos( alpha)*cos( alpha)*cos( alpha))*sin(alpha)))/(4.*\
 
      (svev*svev*svev*svev)* (vev*vev)) - (3*MS1* (MH*MH)*(MH*WH*WS1*(2*\
 
      (s*s)* (WH*WH) +  (MS1*MS1*MS1*MS1)*(-2*s +  (WH*WH)) +  (MS1*MS1)*(2*s\
 
      -  (WH*WH))*(2*s -  (WS1*WS1))) + 2*MS1* (MH*MH*MH*MH*MH*MH)*(-s + \
 
      (MS1*MS1) +  (WS1*WS1)) + WH*WS1* (MH*MH*MH)*( (MS1*MS1*MS1*MS1) + 2*\
 
      (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1))) + MS1*s* (WH*WH)*(\
 
      (MS1*MS1*MS1*MS1) + s* (WS1*WS1) +  (MS1*MS1)*(-s +  (WS1*WS1))) - MS1*\
 
      (MH*MH)*(s -  (WH*WH))*( (MS1*MS1*MS1*MS1) + 2* (WH*WH)* (WS1*WS1) +\
 
      s*(-2* (WH*WH) +  (WS1*WS1)) +  (MS1*MS1)*(-s + 2* (WH*WH) + \
 
      (WS1*WS1))) + MS1* (MH*MH*MH*MH)*( (MS1*MS1*MS1*MS1) + 2* (s*s) + 4*\
 
      (WH*WH)* (WS1*WS1) - s*(4* (WH*WH) +  (WS1*WS1)) +  (MS1*MS1)*(-3*s +\
 
      4* (WH*WH) +  (WS1*WS1))))* (sin(2*alpha)*sin(2*alpha))*(3* (svev*svev)\
 
      + cos( 4*alpha)*( (svev*svev) -  (vev*vev)) - 3* (vev*vev) + 4*cos(\
 
      2*alpha)*( (svev*svev) +  (vev*vev)) - 2*svev*vev*sin(4*alpha)))/(16.*\
 
      (svev*svev*svev*svev)* (vev*vev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) + \
 
      (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1HS1(double cos_t, double s){
double t = (-s + 2* (MA1*MA1) +  (MH*MH) +  (MS1*MS1) + cos_t*sqrt(s - 4*\
 
      (MA1*MA1))*sqrt(( (MH*MH*MH*MH) - 2* (MH*MH)*(s +  (MS1*MS1)) +  ((\
 
      (MS1*MS1) - s)*( (MS1*MS1) - s)))/s))/2.;
double u = -s - t + MA1*MA1 + MA1*MA1 + MH*MH + MS1*MS1;
return ( (MH*MH)* (MS1*MS1)*( (MH*MH) +  (WH*WH))*( (MS1*MS1) +  (WS1*WS1))*\
 
      (cos( alpha)*cos( alpha))* (sin(alpha)*sin(alpha)))/(\
 
      (svev*svev*svev*svev)* (( (MA1*MA1) - t)*( (MA1*MA1) - t))) + (\
 
      (MH*MH)* (MS1*MS1)*( (MH*MH) +  (WH*WH))*( (MS1*MS1) +  (WS1*WS1))*\
 
      (cos( alpha)*cos( alpha))* (sin(alpha)*sin(alpha)))/(\
 
      (svev*svev*svev*svev)* (( (MA1*MA1) - u)*( (MA1*MA1) - u))) + (\
 
      (MS1*MS1)*( (MS1*MS1) +  (WS1*WS1))*(4*MH*MS1*WH*WS1 +  (MH*MH*MH*MH) +\
 
       (MH*MH)*(4* (MS1*MS1) +  (WH*WH)) + 4* (MS1*MS1)*( (MS1*MS1) + \
 
      (WS1*WS1)))* (cos( alpha)*cos( alpha)*cos( alpha)*cos( alpha))*\
 
      (sin(alpha)*sin(alpha))* ((vev*cos( alpha) + svev*sin(alpha))*(vev*cos(\
 
      alpha) + svev*sin(alpha))))/( (svev*svev*svev*svev)* (vev*vev)*(\
 
      (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (\
 
      (MH*MH)*( (MH*MH) +  (WH*WH))*(4*MH*MS1*WH*WS1 + 4* (MH*MH*MH*MH) + 4*\
 
      (MH*MH)*( (MS1*MS1) +  (WH*WH)) +  (MS1*MS1)*( (MS1*MS1) + \
 
      (WS1*WS1)))* (cos( alpha)*cos( alpha))*\
 
      (sin(alpha)*sin(alpha)*sin(alpha)*sin(alpha))* ((svev*cos( alpha) -\
 
      vev*sin(alpha))*(svev*cos( alpha) - vev*sin(alpha))))/(\
 
      (svev*svev*svev*svev)* (vev*vev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))) + ( (MH*MH)* (MS1*MS1)*( (MH*MH) + \
 
      (WH*WH))*( (MS1*MS1) +  (WS1*WS1))*\
 
      (sin(2*alpha)*sin(2*alpha)))/(2.*(-t +  (MA1*MA1))*(-u +  (MA1*MA1))*\
 
      (svev*svev*svev*svev)) + (2*MH* (MS1*MS1)*( (MS1*MS1) + \
 
      (WS1*WS1))*(-2*MS1*s*WH*WS1 +  (MH*MH*MH)*(-s +  (MS1*MS1)) + MH*(2*\
 
      (MS1*MS1*MS1*MS1) - s* (WH*WH) +  (MS1*MS1)*(-2*s +  (WH*WH) + 2*\
 
      (WS1*WS1))))* (cos( alpha)*cos( alpha)*cos( alpha))*\
 
      (sin(alpha)*sin(alpha))*(vev*cos( alpha) + svev*sin(alpha)))/(vev*(-t +\
 
       (MA1*MA1))* (svev*svev*svev*svev)*( (MS1*MS1*MS1*MS1) +  (s*s) + \
 
      (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (2*MH* (MS1*MS1)*( (MS1*MS1) + \
 
      (WS1*WS1))*(-2*MS1*s*WH*WS1 +  (MH*MH*MH)*(-s +  (MS1*MS1)) + MH*(2*\
 
      (MS1*MS1*MS1*MS1) - s* (WH*WH) +  (MS1*MS1)*(-2*s +  (WH*WH) + 2*\
 
      (WS1*WS1))))* (cos( alpha)*cos( alpha)*cos( alpha))*\
 
      (sin(alpha)*sin(alpha))*(vev*cos( alpha) + svev*sin(alpha)))/(vev*(-u +\
 
       (MA1*MA1))* (svev*svev*svev*svev)*( (MS1*MS1*MS1*MS1) +  (s*s) + \
 
      (MS1*MS1)*(-2*s +  (WS1*WS1)))) - (2*MS1* (MH*MH)*( (MH*MH) + \
 
      (WH*WH))*(-2*MH*s*WH*WS1 + 2*MS1* (MH*MH*MH*MH) - MS1*s*( (MS1*MS1) + \
 
      (WS1*WS1)) + MS1* (MH*MH)*(-2*s +  (MS1*MS1) + 2* (WH*WH) + \
 
      (WS1*WS1)))* (cos( alpha)*cos( alpha))*\
 
      (sin(alpha)*sin(alpha)*sin(alpha))*(svev*cos( alpha) -\
 
      vev*sin(alpha)))/(vev*(-t +  (MA1*MA1))* (svev*svev*svev*svev)*(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) - (2*MS1*\
 
      (MH*MH)*( (MH*MH) +  (WH*WH))*(-2*MH*s*WH*WS1 + 2*MS1* (MH*MH*MH*MH) -\
 
      MS1*s*( (MS1*MS1) +  (WS1*WS1)) + MS1* (MH*MH)*(-2*s +  (MS1*MS1) + 2*\
 
      (WH*WH) +  (WS1*WS1)))* (cos( alpha)*cos( alpha))*\
 
      (sin(alpha)*sin(alpha)*sin(alpha))*(svev*cos( alpha) -\
 
      vev*sin(alpha)))/(vev*(-u +  (MA1*MA1))* (svev*svev*svev*svev)*(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) -\
 
      (MH*MS1*(2*WH*WS1* (MS1*MS1)* (s*s)*( (MS1*MS1) +  (WS1*WS1)) + 2*MS1*\
 
      (MH*MH*MH*MH*MH*MH*MH)*(-s +  (MS1*MS1) +  (WS1*WS1)) + WH*WS1*\
 
      (MH*MH*MH*MH)*(5* (MS1*MS1*MS1*MS1) + 2* (s*s) +  (MS1*MS1)*(-8*s + 5*\
 
      (WS1*WS1))) + MS1* (MH*MH*MH*MH*MH)*(5* (MS1*MS1*MS1*MS1) + 2* (s*s) -\
 
      4*s* (WH*WH) + s* (WS1*WS1) + 4* (WH*WH)* (WS1*WS1) +  (MS1*MS1)*(-7*s\
 
      + 4* (WH*WH) + 5* (WS1*WS1))) + MH*(-2*\
 
      (MS1*MS1*MS1*MS1*MS1*MS1*MS1)*(s -  (WH*WH)) + 5*MS1* (s*s)* (WH*WH)*\
 
      (WS1*WS1) +  (MS1*MS1*MS1)*(s -  (WS1*WS1))*(-3*s* (WH*WH) + 2*s*\
 
      (WS1*WS1) - 2* (WH*WH)* (WS1*WS1)) +  (MS1*MS1*MS1*MS1*MS1)*(2* (s*s) +\
 
      s* (WH*WH) - 4*s* (WS1*WS1) + 4* (WH*WH)* (WS1*WS1))) + WH*WS1*\
 
      (MH*MH)*(2* (s*s)* (WH*WH) +  (MS1*MS1*MS1*MS1)*(-8*s + 5* (WH*WH)) + \
 
      (MS1*MS1)*(16* (s*s) + 5* (WH*WH)* (WS1*WS1) - 8*s*( (WH*WH) + \
 
      (WS1*WS1)))) +  (MH*MH*MH)*(2* (MS1*MS1*MS1*MS1*MS1*MS1*MS1) + \
 
      (MS1*MS1*MS1*MS1*MS1)*(-7*s + 5* (WH*WH) + 4* (WS1*WS1)) + MS1*(s - \
 
      (WH*WH))*(2*s* (WH*WH) - 3*s* (WS1*WS1) - 2* (WH*WH)* (WS1*WS1)) + \
 
      (MS1*MS1*MS1)*(5* (s*s) + 2* (WH*WH*WH*WH) + 5* (WH*WH)* (WS1*WS1) -\
 
      7*s*( (WH*WH) +  (WS1*WS1)) + 2* (WS1*WS1*WS1*WS1))))*\
 
      (sin(2*alpha)*sin(2*alpha)*sin(2*alpha))*(2*svev*vev*cos( 2*alpha) + (\
 
      (svev*svev) -  (vev*vev))*sin(2*alpha)))/(8.* (svev*svev*svev*svev)*\
 
      (vev*vev)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*(\
 
      (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (\
 
      (MH*MH)* (MS1*MS1)* (cos( alpha)*cos( alpha))*\
 
      (sin(alpha)*sin(alpha))*(vev*cos( 2*alpha)*( (MH*MH) -  (MS1*MS1) + \
 
      (WH*WH) -  (WS1*WS1)) - vev*( (MH*MH) +  (MS1*MS1) +  (WH*WH) + \
 
      (WS1*WS1)) + svev*( (MH*MH) -  (MS1*MS1) +  (WH*WH) - \
 
      (WS1*WS1))*sin(2*alpha)))/(vev*(-t +  (MA1*MA1))*\
 
      (svev*svev*svev*svev)) + ( (MH*MH)* (MS1*MS1)* (cos( alpha)*cos(\
 
      alpha))* (sin(alpha)*sin(alpha))*(vev*cos( 2*alpha)*( (MH*MH) - \
 
      (MS1*MS1) +  (WH*WH) -  (WS1*WS1)) - vev*( (MH*MH) +  (MS1*MS1) + \
 
      (WH*WH) +  (WS1*WS1)) + svev*( (MH*MH) -  (MS1*MS1) +  (WH*WH) - \
 
      (WS1*WS1))*sin(2*alpha)))/(vev*(-u +  (MA1*MA1))*\
 
      (svev*svev*svev*svev)) - ( (MH*MH)* (cos( alpha)*cos( alpha))*\
 
      (sin(alpha)*sin(alpha)*sin(alpha))*(svev*cos( alpha) -\
 
      vev*sin(alpha))*(vev*cos( 2*alpha)*(-(MS1*WH*WS1* (MH*MH*MH)) + 2*\
 
      (MH*MH*MH*MH*MH*MH) -  (MH*MH*MH*MH)*(2*s +  (MS1*MS1) - 4* (WH*WH)) -\
 
      MH*MS1*WH*WS1*(-4*s +  (WH*WH)) +  (MS1*MS1)*( (MS1*MS1)*(s -  (WH*WH))\
 
      - 3*s* (WH*WH) + s* (WS1*WS1) -  (WH*WH)* (WS1*WS1)) -  (MH*MH)*(\
 
      (MS1*MS1*MS1*MS1) + 2*(s -  (WH*WH))* (WH*WH) +  (MS1*MS1)*(-s + \
 
      (WH*WH) +  (WS1*WS1)))) - vev*(3*MS1*WH*WS1* (MH*MH*MH) + 2*\
 
      (MH*MH*MH*MH*MH*MH) + MH*MS1*WH*WS1*(-4*s + 3* (WH*WH)) + \
 
      (MH*MH*MH*MH)*(-2*s + 3* (MS1*MS1) + 4* (WH*WH)) +  (MS1*MS1)*(s*\
 
      (WH*WH) +  (MS1*MS1)*(-s +  (WH*WH)) - s* (WS1*WS1) +  (WH*WH)*\
 
      (WS1*WS1)) +  (MH*MH)*( (MS1*MS1*MS1*MS1) - 2*s* (WH*WH) + 2*\
 
      (WH*WH*WH*WH) +  (MS1*MS1)*(-3*s + 3* (WH*WH) +  (WS1*WS1)))) +\
 
      svev*(-(MS1*WH*WS1* (MH*MH*MH)) + 2* (MH*MH*MH*MH*MH*MH) - \
 
      (MH*MH*MH*MH)*(2*s +  (MS1*MS1) - 4* (WH*WH)) - MH*MS1*WH*WS1*(-4*s + \
 
      (WH*WH)) +  (MS1*MS1)*( (MS1*MS1)*(s -  (WH*WH)) - 3*s* (WH*WH) + s*\
 
      (WS1*WS1) -  (WH*WH)* (WS1*WS1)) -  (MH*MH)*( (MS1*MS1*MS1*MS1) + 2*(s\
 
      -  (WH*WH))* (WH*WH) +  (MS1*MS1)*(-s +  (WH*WH) + \
 
      (WS1*WS1))))*sin(2*alpha)))/( (svev*svev*svev*svev)* (vev*vev)*(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) - ( (MS1*MS1)*\
 
      (cos( alpha)*cos( alpha)*cos( alpha))*\
 
      (sin(alpha)*sin(alpha))*(vev*cos( alpha) + svev*sin(alpha))*(-(vev*cos(\
 
      2*alpha)*(MH*MS1*WH*WS1*(-4*s +  (MS1*MS1) +  (WS1*WS1)) + \
 
      (MH*MH*MH*MH)*(-s +  (MS1*MS1) +  (WS1*WS1)) - 2* (MS1*MS1)*( (MS1*MS1)\
 
      +  (WS1*WS1))*(-s +  (MS1*MS1) +  (WS1*WS1)) +  (MH*MH)*(\
 
      (MS1*MS1*MS1*MS1) - s* (WH*WH) + 3*s* (WS1*WS1) +  (WH*WH)* (WS1*WS1) +\
 
       (MS1*MS1)*(-s +  (WH*WH) +  (WS1*WS1))))) + vev*( (MH*MH*MH*MH)*(-s + \
 
      (MS1*MS1) +  (WS1*WS1)) + 2* (MS1*MS1)*( (MS1*MS1) +  (WS1*WS1))*(-s + \
 
      (MS1*MS1) +  (WS1*WS1)) + MH*MS1*WH*WS1*(-4*s + 3* (MS1*MS1) + 3*\
 
      (WS1*WS1)) +  (MH*MH)*(3* (MS1*MS1*MS1*MS1) - s* (WH*WH) + s* (WS1*WS1)\
 
      +  (WH*WH)* (WS1*WS1) +  (MS1*MS1)*(-3*s +  (WH*WH) + 3* (WS1*WS1)))) -\
 
      svev*(MH*MS1*WH*WS1*(-4*s +  (MS1*MS1) +  (WS1*WS1)) + \
 
      (MH*MH*MH*MH)*(-s +  (MS1*MS1) +  (WS1*WS1)) - 2* (MS1*MS1)*( (MS1*MS1)\
 
      +  (WS1*WS1))*(-s +  (MS1*MS1) +  (WS1*WS1)) +  (MH*MH)*(\
 
      (MS1*MS1*MS1*MS1) - s* (WH*WH) + 3*s* (WS1*WS1) +  (WH*WH)* (WS1*WS1) +\
 
       (MS1*MS1)*(-s +  (WH*WH) +  (WS1*WS1))))*sin(2*alpha)))/(\
 
      (svev*svev*svev*svev)* (vev*vev)*( (MS1*MS1*MS1*MS1) +  (s*s) + \
 
      (MS1*MS1)*(-2*s +  (WS1*WS1)))) + ( (cos( alpha)*cos( alpha))*\
 
      (sin(alpha)*sin(alpha))*(-2*cos( 2*alpha)* (vev*vev)*( (MH*MH*MH*MH) + \
 
      (MH*MH)* (WH*WH) -  (MS1*MS1)*( (MS1*MS1) +  (WS1*WS1))) + \
 
      (vev*vev)*(-2*MH*MS1*WH*WS1 +  (MH*MH*MH*MH) +  (MH*MH)*(-2* (MS1*MS1)\
 
      +  (WH*WH)) +  (MS1*MS1)*( (MS1*MS1) +  (WS1*WS1)))* (cos(\
 
      2*alpha)*cos( 2*alpha)) +  (svev*svev)*(-2*MH*MS1*WH*WS1 + \
 
      (MH*MH*MH*MH) +  (MH*MH)*(-2* (MS1*MS1) +  (WH*WH)) +  (MS1*MS1)*(\
 
      (MS1*MS1) +  (WS1*WS1)))* (sin(2*alpha)*sin(2*alpha)) - 2*svev*vev*(\
 
      (MH*MH*MH*MH) +  (MH*MH)* (WH*WH) -  (MS1*MS1)*( (MS1*MS1) + \
 
      (WS1*WS1)))*sin(2*alpha) + vev*(vev*(2*MH*MS1*WH*WS1 +  (MH*MH*MH*MH) +\
 
       (MH*MH)*(2* (MS1*MS1) +  (WH*WH)) +  (MS1*MS1)*( (MS1*MS1) + \
 
      (WS1*WS1))) + svev*(-2*MH*MS1*WH*WS1 +  (MH*MH*MH*MH) +  (MH*MH)*(-2*\
 
      (MS1*MS1) +  (WH*WH)) +  (MS1*MS1)*( (MS1*MS1) + \
 
      (WS1*WS1)))*sin(4*alpha))))/(4.* (svev*svev*svev*svev)* (vev*vev));
}
double DT::A1A1S1S1(double cos_t, double s){
double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4* (MA1*MA1))*sqrt(s - 4*\
 
      (MS1*MS1)))/2. +  (MS1*MS1);
double u = -s - t + MA1*MA1 + MA1*MA1 + MS1*MS1 + MS1*MS1;
return (2* (MS1*MS1*MS1*MS1)* (cos( alpha)*cos( alpha)*cos( alpha)*cos(\
 
      alpha))* (( (MS1*MS1) +  (WS1*WS1))*( (MS1*MS1) +  (WS1*WS1))))/((-t + \
 
      (MA1*MA1))*(-u +  (MA1*MA1))* (svev*svev*svev*svev)) + (\
 
      (MS1*MS1*MS1*MS1)* (cos( alpha)*cos( alpha)*cos( alpha)*cos( alpha))*\
 
      (( (MS1*MS1) +  (WS1*WS1))*( (MS1*MS1) +  (WS1*WS1))))/(\
 
      (svev*svev*svev*svev)* (( (MA1*MA1) - t)*( (MA1*MA1) - t))) + (\
 
      (MS1*MS1*MS1*MS1)* (cos( alpha)*cos( alpha)*cos( alpha)*cos( alpha))*\
 
      (( (MS1*MS1) +  (WS1*WS1))*( (MS1*MS1) +  (WS1*WS1))))/(\
 
      (svev*svev*svev*svev)* (( (MA1*MA1) - u)*( (MA1*MA1) - u))) + (9*\
 
      (MS1*MS1*MS1*MS1)* (cos( alpha)*cos( alpha))* (( (MS1*MS1) + \
 
      (WS1*WS1))*( (MS1*MS1) +  (WS1*WS1)))* ((3*vev*cos( alpha) + vev*cos(\
 
      3*alpha) - 4*svev* (sin(alpha)*sin(alpha)*sin(alpha)))*(3*vev*cos(\
 
      alpha) + vev*cos( 3*alpha) - 4*svev*\
 
      (sin(alpha)*sin(alpha)*sin(alpha)))))/(16.* (svev*svev*svev*svev)*\
 
      (vev*vev)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s + \
 
      (WS1*WS1)))) + (3*(-s +  (MS1*MS1))* (MS1*MS1*MS1*MS1)* (cos(\
 
      alpha)*cos( alpha)*cos( alpha))* (( (MS1*MS1) +  (WS1*WS1))*( (MS1*MS1)\
 
      +  (WS1*WS1)))*(3*vev*cos( alpha) + vev*cos( 3*alpha) - 4*svev*\
 
      (sin(alpha)*sin(alpha)*sin(alpha))))/(2.*vev*(-t +  (MA1*MA1))*\
 
      (svev*svev*svev*svev)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +\
 
       (WS1*WS1)))) + (3*(-s +  (MS1*MS1))* (MS1*MS1*MS1*MS1)* (cos(\
 
      alpha)*cos( alpha)*cos( alpha))* (( (MS1*MS1) +  (WS1*WS1))*( (MS1*MS1)\
 
      +  (WS1*WS1)))*(3*vev*cos( alpha) + vev*cos( 3*alpha) - 4*svev*\
 
      (sin(alpha)*sin(alpha)*sin(alpha))))/(2.*vev*(-u +  (MA1*MA1))*\
 
      (svev*svev*svev*svev)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +\
 
       (WS1*WS1)))) - ( (MS1*MS1)* (cos( alpha)*cos( alpha)*cos(\
 
      alpha))*(vev*cos( alpha)*(2*MH*MS1*WH*WS1 +  (MH*MH)*( (MS1*MS1) - \
 
      (WS1*WS1)) +  (MS1*MS1)*( (MS1*MS1) +  (WS1*WS1)) + cos(\
 
      2*alpha)*(-2*MH*MS1*WH*WS1 +  (MH*MH)*(- (MS1*MS1) +  (WS1*WS1)) + \
 
      (MS1*MS1)*( (MS1*MS1) +  (WS1*WS1)))) + 2*svev*(2*MH*MS1*WH*WS1 + \
 
      (MH*MH)*( (MS1*MS1) -  (WS1*WS1)) -  (MS1*MS1)*( (MS1*MS1) + \
 
      (WS1*WS1)))* (sin(alpha)*sin(alpha)*sin(alpha))))/(vev*(-t + \
 
      (MA1*MA1))* (svev*svev*svev*svev)) - ( (MS1*MS1)* (cos( alpha)*cos(\
 
      alpha)*cos( alpha))*(vev*cos( alpha)*(2*MH*MS1*WH*WS1 +  (MH*MH)*(\
 
      (MS1*MS1) -  (WS1*WS1)) +  (MS1*MS1)*( (MS1*MS1) +  (WS1*WS1)) + cos(\
 
      2*alpha)*(-2*MH*MS1*WH*WS1 +  (MH*MH)*(- (MS1*MS1) +  (WS1*WS1)) + \
 
      (MS1*MS1)*( (MS1*MS1) +  (WS1*WS1)))) + 2*svev*(2*MH*MS1*WH*WS1 + \
 
      (MH*MH)*( (MS1*MS1) -  (WS1*WS1)) -  (MS1*MS1)*( (MS1*MS1) + \
 
      (WS1*WS1)))* (sin(alpha)*sin(alpha)*sin(alpha))))/(vev*(-u + \
 
      (MA1*MA1))* (svev*svev*svev*svev)) + (3* (MS1*MS1)* (cos( alpha)*cos(\
 
      alpha))*(3*vev*cos( alpha) + vev*cos( 3*alpha) - 4*svev*\
 
      (sin(alpha)*sin(alpha)*sin(alpha)))*(-(vev*cos(\
 
      alpha)*(MH*MS1*WH*WS1*(-2*s +  (MS1*MS1) +  (WS1*WS1)) + 3* (MS1*MS1)*(\
 
      (MS1*MS1) +  (WS1*WS1))*(-s +  (MS1*MS1) +  (WS1*WS1)) +  (MH*MH)*(\
 
      (MS1*MS1*MS1*MS1) + s* (WS1*WS1) +  (MS1*MS1)*(-s +  (WS1*WS1))))) +\
 
      (MH*MS1*WH*WS1*(-2*s +  (MS1*MS1) +  (WS1*WS1)) -  (MS1*MS1)*(\
 
      (MS1*MS1) +  (WS1*WS1))*(-s +  (MS1*MS1) +  (WS1*WS1)) +  (MH*MH)*(\
 
      (MS1*MS1*MS1*MS1) + s* (WS1*WS1) +  (MS1*MS1)*(-s + \
 
      (WS1*WS1))))*(vev*cos( 3*alpha) - 4*svev*\
 
      (sin(alpha)*sin(alpha)*sin(alpha)))))/(8.* (svev*svev*svev*svev)*\
 
      (vev*vev)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s + \
 
      (WS1*WS1)))) + ( (cos( alpha)*cos( alpha))*((\
 
      (vev*vev)*(2*MH*MS1*WH*WS1 + 3* (MH*MH*MH*MH) + 2* (MH*MH)* (MS1*MS1) +\
 
      3* (MS1*MS1*MS1*MS1) + 3* (MH*MH)* (WH*WH) + 3* (MS1*MS1)* (WS1*WS1) -\
 
      4*cos( 2*alpha)*( (MH*MH*MH*MH) +  (MH*MH)* (WH*WH) -  (MS1*MS1)*(\
 
      (MS1*MS1) +  (WS1*WS1))) + cos( 4*alpha)*(-2*MH*MS1*WH*WS1 + \
 
      (MH*MH*MH*MH) +  (MH*MH)*(-2* (MS1*MS1) +  (WH*WH)) +  (MS1*MS1)*(\
 
      (MS1*MS1) +  (WS1*WS1))))* (cos( alpha)*cos( alpha)))/2. +\
 
      4*svev*vev*cos( alpha)*( (MH*MH*MH*MH) +  (MH*MH)* (WH*WH) - \
 
      (MS1*MS1)*( (MS1*MS1) +  (WS1*WS1)))*\
 
      (sin(alpha)*sin(alpha)*sin(alpha)) - 2*svev*(-2*MH*MS1*WH*WS1 + \
 
      (MH*MH*MH*MH) +  (MH*MH)*(-2* (MS1*MS1) +  (WH*WH)) +  (MS1*MS1)*(\
 
      (MS1*MS1) +  (WS1*WS1)))* (sin(alpha)*sin(alpha)*sin(alpha))*(vev*cos(\
 
      alpha) + vev*cos( 3*alpha) - 2*svev*\
 
      (sin(alpha)*sin(alpha)*sin(alpha)))))/(4.* (svev*svev*svev*svev)*\
 
      (vev*vev)) + ( (MH*MH)*( (MH*MH) +  (WH*WH))*(4*MH*MS1*WH*WS1 + \
 
      (MH*MH*MH*MH) +  (MH*MH)*(4* (MS1*MS1) +  (WH*WH)) + 4* (MS1*MS1)*(\
 
      (MS1*MS1) +  (WS1*WS1)))* (cos( alpha)*cos( alpha))*\
 
      (sin(alpha)*sin(alpha)*sin(alpha)*sin(alpha))* ((vev*cos( alpha) +\
 
      svev*sin(alpha))*(vev*cos( alpha) + svev*sin(alpha))))/(\
 
      (svev*svev*svev*svev)* (vev*vev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))) + (2*MH* (MS1*MS1)*(2*MS1*WH*WS1*\
 
      (MH*MH*MH*MH) + 2*MS1*WH*WS1* (MH*MH)*(-2*s +  (WH*WH)) + \
 
      (MH*MH*MH*MH*MH)*( (MS1*MS1) -  (WS1*WS1)) - 2*MS1*s*WH*WS1*( (MS1*MS1)\
 
      +  (WS1*WS1)) +  (MH*MH*MH)*(2* (MS1*MS1*MS1*MS1) + (s -  (WH*WH))*\
 
      (WS1*WS1) +  (MS1*MS1)*(-s +  (WH*WH) + 2* (WS1*WS1))) + MH*(-2*\
 
      (MS1*MS1*MS1*MS1)*(s -  (WH*WH)) - s* (WH*WH)* (WS1*WS1) + \
 
      (MS1*MS1)*(s* (WH*WH) - 2*s* (WS1*WS1) + 2* (WH*WH)* (WS1*WS1))))*\
 
      (cos( alpha)*cos( alpha)*cos( alpha))*\
 
      (sin(alpha)*sin(alpha))*(vev*cos( alpha) + svev*sin(alpha)))/(vev*(-t +\
 
       (MA1*MA1))* (svev*svev*svev*svev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))) + (2*MH* (MS1*MS1)*(2*MS1*WH*WS1*\
 
      (MH*MH*MH*MH) + 2*MS1*WH*WS1* (MH*MH)*(-2*s +  (WH*WH)) + \
 
      (MH*MH*MH*MH*MH)*( (MS1*MS1) -  (WS1*WS1)) - 2*MS1*s*WH*WS1*( (MS1*MS1)\
 
      +  (WS1*WS1)) +  (MH*MH*MH)*(2* (MS1*MS1*MS1*MS1) + (s -  (WH*WH))*\
 
      (WS1*WS1) +  (MS1*MS1)*(-s +  (WH*WH) + 2* (WS1*WS1))) + MH*(-2*\
 
      (MS1*MS1*MS1*MS1)*(s -  (WH*WH)) - s* (WH*WH)* (WS1*WS1) + \
 
      (MS1*MS1)*(s* (WH*WH) - 2*s* (WS1*WS1) + 2* (WH*WH)* (WS1*WS1))))*\
 
      (cos( alpha)*cos( alpha)*cos( alpha))*\
 
      (sin(alpha)*sin(alpha))*(vev*cos( alpha) + svev*sin(alpha)))/(vev*(-u +\
 
       (MA1*MA1))* (svev*svev*svev*svev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))) + ( (MH*MH)* (cos( alpha)*cos( alpha))*\
 
      (sin(alpha)*sin(alpha))*(-(vev*cos( alpha)*(5*MS1*WH*WS1* (MH*MH*MH) + \
 
      (MH*MH*MH*MH*MH*MH) +  (MH*MH*MH*MH)*(-s + 5* (MS1*MS1) + 2* (WH*WH)) +\
 
      MH*MS1*WH*WS1*(-6*s + 5* (WH*WH)) +  (MS1*MS1)*(-6* (MS1*MS1)*(s - \
 
      (WH*WH)) + s* (WH*WH) - 6*s* (WS1*WS1) + 6* (WH*WH)* (WS1*WS1)) + \
 
      (MH*MH)*(6* (MS1*MS1*MS1*MS1) - s* (WH*WH) +  (WH*WH*WH*WH) + \
 
      (MS1*MS1)*(-5*s + 5* (WH*WH) + 6* (WS1*WS1))))) + (MS1*WH*WS1*\
 
      (MH*MH*MH) +  (MH*MH*MH*MH*MH*MH) + MH*MS1*WH*WS1*(2*s +  (WH*WH)) + \
 
      (MH*MH*MH*MH)*(-s +  (MS1*MS1) + 2* (WH*WH)) +  (MH*MH)*(-2*\
 
      (MS1*MS1*MS1*MS1) - s* (WH*WH) +  (WH*WH*WH*WH) +  (MS1*MS1)*(-s + \
 
      (WH*WH) - 2* (WS1*WS1))) +  (MS1*MS1)*(2* (MS1*MS1)*(s -  (WH*WH)) -\
 
      3*s* (WH*WH) + 2*s* (WS1*WS1) - 2* (WH*WH)* (WS1*WS1)))*(vev*cos(\
 
      3*alpha) - 4*svev* (sin(alpha)*sin(alpha)*sin(alpha))))*(vev*cos(\
 
      alpha) + svev*sin(alpha)))/(2.* (svev*svev*svev*svev)* (vev*vev)*(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (3*MH*\
 
      (MS1*MS1)*(2*MS1*WH*WS1* (s*s)*( (MS1*MS1) +  (WS1*WS1)) + MS1*WH*WS1*\
 
      (MH*MH*MH*MH)*(-2*s +  (MS1*MS1) +  (WS1*WS1)) + MS1*WH*WS1*\
 
      (MH*MH)*(-2*s +  (WH*WH))*(-2*s +  (MS1*MS1) +  (WS1*WS1)) + \
 
      (MH*MH*MH*MH*MH)*( (MS1*MS1*MS1*MS1) + s* (WS1*WS1) +  (MS1*MS1)*(-s + \
 
      (WS1*WS1))) +  (MH*MH*MH)*(2* (MS1*MS1*MS1*MS1*MS1*MS1) +  (MS1*MS1)*(s\
 
      -  (WH*WH) - 2* (WS1*WS1))*(s -  (WS1*WS1)) + s*(-s +  (WH*WH))*\
 
      (WS1*WS1) +  (MS1*MS1*MS1*MS1)*(-3*s +  (WH*WH) + 4* (WS1*WS1))) -\
 
      MH*(2* (MS1*MS1*MS1*MS1*MS1*MS1)*(s -  (WH*WH)) -  (s*s)* (WH*WH)*\
 
      (WS1*WS1) +  (MS1*MS1*MS1*MS1)*(-2* (s*s) + s* (WH*WH) + 4*s* (WS1*WS1)\
 
      - 4* (WH*WH)* (WS1*WS1)) +  (MS1*MS1)*(s -  (WS1*WS1))*(s* (WH*WH) -\
 
      2*s* (WS1*WS1) + 2* (WH*WH)* (WS1*WS1))))*\
 
      (sin(2*alpha)*sin(2*alpha))*(-3* (svev*svev) + 3* (vev*vev) + cos(\
 
      4*alpha)*(- (svev*svev) +  (vev*vev)) + 4*cos( 2*alpha)*( (svev*svev) +\
 
       (vev*vev)) + 2*svev*vev*sin(4*alpha)))/(16.* (svev*svev*svev*svev)*\
 
      (vev*vev)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*(\
 
      (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1ZZ(double cos_t, double s){
return ( (EL*EL*EL*EL)* (MH*MH)*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))*\
 
      (vev*vev)*( (MH*MH) +  (WH*WH))* (( (cw*cw) +  (sw*sw))*( (cw*cw) + \
 
      (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw)))*\
 
      (sin(2*alpha)*sin(2*alpha)))/(64.* (cw*cw*cw*cw)* (MZ*MZ*MZ*MZ)*\
 
      (svev*svev)* (sw*sw*sw*sw)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s + \
 
      (WH*WH)))) + ( (EL*EL*EL*EL)* (MS1*MS1)*(-4*s* (MZ*MZ) + 12*\
 
      (MZ*MZ*MZ*MZ) +  (s*s))* (vev*vev)*( (MS1*MS1) +  (WS1*WS1))* ((\
 
      (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*(\
 
      (cw*cw) +  (sw*sw)))* (sin(2*alpha)*sin(2*alpha)))/(64.* (cw*cw*cw*cw)*\
 
      (MZ*MZ*MZ*MZ)* (svev*svev)* (sw*sw*sw*sw)*( (MS1*MS1*MS1*MS1) +  (s*s)\
 
      +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) - (MH*MS1* (EL*EL*EL*EL)*(-4*s*\
 
      (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (vev*vev)*(WH*WS1* (s*s) + MS1*\
 
      (MH*MH*MH)*(-s +  (MS1*MS1) +  (WS1*WS1)) - MH*MS1*(s -  (WH*WH))*(-s +\
 
       (MS1*MS1) +  (WS1*WS1)))* (( (cw*cw) +  (sw*sw))*( (cw*cw) + \
 
      (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw)))*\
 
      (sin(2*alpha)*sin(2*alpha)))/(32.* (cw*cw*cw*cw)* (MZ*MZ*MZ*MZ)*\
 
      (svev*svev)* (sw*sw*sw*sw)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s + \
 
      (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s + \
 
      (WS1*WS1))));
}
double DT::A1A1wW(double cos_t, double s){
return ( (EL*EL*EL*EL)* (MH*MH)*(-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s))*\
 
      (vev*vev)*( (MH*MH) +  (WH*WH))* (sin(2*alpha)*sin(2*alpha)))/(64.*\
 
      (MW*MW*MW*MW)* (svev*svev)* (sw*sw*sw*sw)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))) + ( (EL*EL*EL*EL)* (MS1*MS1)*(-4*s* (MW*MW)\
 
      + 12* (MW*MW*MW*MW) +  (s*s))* (vev*vev)*( (MS1*MS1) +  (WS1*WS1))*\
 
      (sin(2*alpha)*sin(2*alpha)))/(64.* (MW*MW*MW*MW)* (svev*svev)*\
 
      (sw*sw*sw*sw)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s + \
 
      (WS1*WS1)))) - (MH*MS1* (EL*EL*EL*EL)*(-4*s* (MW*MW) + 12*\
 
      (MW*MW*MW*MW) +  (s*s))* (vev*vev)*(WH*WS1* (s*s) + MS1* (MH*MH*MH)*(-s\
 
      +  (MS1*MS1) +  (WS1*WS1)) - MH*MS1*(s -  (WH*WH))*(-s +  (MS1*MS1) + \
 
      (WS1*WS1)))* (sin(2*alpha)*sin(2*alpha)))/(32.* (MW*MW*MW*MW)*\
 
      (svev*svev)* (sw*sw*sw*sw)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s + \
 
      (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s + \
 
      (WS1*WS1))));
}
double DT::A1A1Ee(double cos_t, double s){
return (-2* (gc98*gc98)*(-s + 4* (Me*Me))* (MS1*MS1)*( (MS1*MS1) + \
 
      (WS1*WS1))* (cos( alpha)*cos( alpha)))/( (svev*svev)*(\
 
      (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) - (2*\
 
      (gc64*gc64)*(-s + 4* (Me*Me))* (MH*MH)*( (MH*MH) +  (WH*WH))*\
 
      (sin(alpha)*sin(alpha)))/( (svev*svev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))) - (2*gc64*gc98*MH*MS1*(-s + 4*\
 
      (Me*Me))*(WH*WS1* (s*s) + MS1* (MH*MH*MH)*(-s +  (MS1*MS1) + \
 
      (WS1*WS1)) - MH*MS1*(s -  (WH*WH))*(-s +  (MS1*MS1) + \
 
      (WS1*WS1)))*sin(2*alpha))/( (svev*svev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) + \
 
      (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1MUmu(double cos_t, double s){
return (-2* (gc99*gc99)*(-s + 4* (MMU*MMU))* (MS1*MS1)*( (MS1*MS1) + \
 
      (WS1*WS1))* (cos( alpha)*cos( alpha)))/( (svev*svev)*(\
 
      (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) - (2*\
 
      (gc65*gc65)* (MH*MH)*(-s + 4* (MMU*MMU))*( (MH*MH) +  (WH*WH))*\
 
      (sin(alpha)*sin(alpha)))/( (svev*svev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))) - (2*gc65*gc99*MH*MS1*(-s + 4*\
 
      (MMU*MMU))*(WH*WS1* (s*s) + MS1* (MH*MH*MH)*(-s +  (MS1*MS1) + \
 
      (WS1*WS1)) - MH*MS1*(s -  (WH*WH))*(-s +  (MS1*MS1) + \
 
      (WS1*WS1)))*sin(2*alpha))/( (svev*svev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) + \
 
      (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1TAta(double cos_t, double s){
return (-2* (gc100*gc100)* (MS1*MS1)*(-s + 4* (MTA*MTA))*( (MS1*MS1) + \
 
      (WS1*WS1))* (cos( alpha)*cos( alpha)))/( (svev*svev)*(\
 
      (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) - (2*\
 
      (gc66*gc66)* (MH*MH)*(-s + 4* (MTA*MTA))*( (MH*MH) +  (WH*WH))*\
 
      (sin(alpha)*sin(alpha)))/( (svev*svev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))) - (2*gc100*gc66*MH*MS1*(-s + 4*\
 
      (MTA*MTA))*(WH*WS1* (s*s) + MS1* (MH*MH*MH)*(-s +  (MS1*MS1) + \
 
      (WS1*WS1)) - MH*MS1*(s -  (WH*WH))*(-s +  (MS1*MS1) + \
 
      (WS1*WS1)))*sin(2*alpha))/( (svev*svev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) + \
 
      (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1Uu(double cos_t, double s){
return (6* (gc103*gc103)* (MS1*MS1)*(s - 4* (MU*MU))*( (MS1*MS1) + \
 
      (WS1*WS1))* (cos( alpha)*cos( alpha)))/( (svev*svev)*(\
 
      (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (6*\
 
      (gc81*gc81)* (MH*MH)*(s - 4* (MU*MU))*( (MH*MH) +  (WH*WH))*\
 
      (sin(alpha)*sin(alpha)))/( (svev*svev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))) + (6*gc103*gc81*MH*MS1*(s - 4*\
 
      (MU*MU))*(WH*WS1* (s*s) + MS1* (MH*MH*MH)*(-s +  (MS1*MS1) + \
 
      (WS1*WS1)) - MH*MS1*(s -  (WH*WH))*(-s +  (MS1*MS1) + \
 
      (WS1*WS1)))*sin(2*alpha))/( (svev*svev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) + \
 
      (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1Cc(double cos_t, double s){
return (6* (gc101*gc101)*(s - 4* (MC*MC))* (MS1*MS1)*( (MS1*MS1) + \
 
      (WS1*WS1))* (cos( alpha)*cos( alpha)))/( (svev*svev)*(\
 
      (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (6*\
 
      (gc79*gc79)*(s - 4* (MC*MC))* (MH*MH)*( (MH*MH) +  (WH*WH))*\
 
      (sin(alpha)*sin(alpha)))/( (svev*svev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))) + (6*gc101*gc79*MH*MS1*(s - 4*\
 
      (MC*MC))*(WH*WS1* (s*s) + MS1* (MH*MH*MH)*(-s +  (MS1*MS1) + \
 
      (WS1*WS1)) - MH*MS1*(s -  (WH*WH))*(-s +  (MS1*MS1) + \
 
      (WS1*WS1)))*sin(2*alpha))/( (svev*svev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) + \
 
      (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1Tt(double cos_t, double s){
return (6* (gc102*gc102)* (MS1*MS1)*(s - 4* (MT*MT))*( (MS1*MS1) + \
 
      (WS1*WS1))* (cos( alpha)*cos( alpha)))/( (svev*svev)*(\
 
      (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (6*\
 
      (gc80*gc80)* (MH*MH)*(s - 4* (MT*MT))*( (MH*MH) +  (WH*WH))*\
 
      (sin(alpha)*sin(alpha)))/( (svev*svev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))) + (6*gc102*gc80*MH*MS1*(s - 4*\
 
      (MT*MT))*(WH*WS1* (s*s) + MS1* (MH*MH*MH)*(-s +  (MS1*MS1) + \
 
      (WS1*WS1)) - MH*MS1*(s -  (WH*WH))*(-s +  (MS1*MS1) + \
 
      (WS1*WS1)))*sin(2*alpha))/( (svev*svev)*( (MH*MH*MH*MH) +  (s*s) + \
 
      (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) + \
 
      (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1Dd(double cos_t, double s){
return (6* (gc96*gc96)*(s - 4* (MD*MD))* (MS1*MS1)*( (MS1*MS1) +  (WS1*WS1))*\
 
      (cos( alpha)*cos( alpha)))/( (svev*svev)*( (MS1*MS1*MS1*MS1) +  (s*s) +\
 
       (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (6* (gc56*gc56)*(s - 4* (MD*MD))*\
 
      (MH*MH)*( (MH*MH) +  (WH*WH))* (sin(alpha)*sin(alpha)))/( (svev*svev)*(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) +\
 
      (6*gc56*gc96*MH*MS1*(s - 4* (MD*MD))*(WH*WS1* (s*s) + MS1*\
 
      (MH*MH*MH)*(-s +  (MS1*MS1) +  (WS1*WS1)) - MH*MS1*(s -  (WH*WH))*(-s +\
 
       (MS1*MS1) +  (WS1*WS1)))*sin(2*alpha))/( (svev*svev)*( (MH*MH*MH*MH) +\
 
       (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) + \
 
      (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1Ss(double cos_t, double s){
return (6* (gc97*gc97)*(s - 4* (MS*MS))* (MS1*MS1)*( (MS1*MS1) +  (WS1*WS1))*\
 
      (cos( alpha)*cos( alpha)))/( (svev*svev)*( (MS1*MS1*MS1*MS1) +  (s*s) +\
 
       (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (6* (gc57*gc57)* (MH*MH)*(s - 4*\
 
      (MS*MS))*( (MH*MH) +  (WH*WH))* (sin(alpha)*sin(alpha)))/(\
 
      (svev*svev)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) +\
 
      (6*gc57*gc97*MH*MS1*(s - 4* (MS*MS))*(WH*WS1* (s*s) + MS1*\
 
      (MH*MH*MH)*(-s +  (MS1*MS1) +  (WS1*WS1)) - MH*MS1*(s -  (WH*WH))*(-s +\
 
       (MS1*MS1) +  (WS1*WS1)))*sin(2*alpha))/( (svev*svev)*( (MH*MH*MH*MH) +\
 
       (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) + \
 
      (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1Bb(double cos_t, double s){
return (6* (gc95*gc95)*(s - 4* (MB*MB))* (MS1*MS1)*( (MS1*MS1) +  (WS1*WS1))*\
 
      (cos( alpha)*cos( alpha)))/( (svev*svev)*( (MS1*MS1*MS1*MS1) +  (s*s) +\
 
       (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (6* (gc55*gc55)*(s - 4* (MB*MB))*\
 
      (MH*MH)*( (MH*MH) +  (WH*WH))* (sin(alpha)*sin(alpha)))/( (svev*svev)*(\
 
      (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) +\
 
      (6*gc55*gc95*MH*MS1*(s - 4* (MB*MB))*(WH*WS1* (s*s) + MS1*\
 
      (MH*MH*MH)*(-s +  (MS1*MS1) +  (WS1*WS1)) - MH*MS1*(s -  (WH*WH))*(-s +\
 
       (MS1*MS1) +  (WS1*WS1)))*sin(2*alpha))/( (svev*svev)*( (MH*MH*MH*MH) +\
 
       (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) + \
 
      (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
