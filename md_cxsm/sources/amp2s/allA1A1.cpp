///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::A1A1HH(const double &cos_t, const double &s){
	double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4* (MA1*MA1))*sqrt(s - 4* (MH*MH)))/2. +  (MH*MH);
	double u = -s - t + MA1*MA1 + MA1*MA1 + MH*MH + MH*MH;
	return (-2*token11*token2*token3*token5* (token1*token1))/(-(t*token12*token14* (token13*token13)) + token12*token14* (MA1*MA1)* (token13*token13)) - (2*token11*token2*token3*token5* (token1*token1))/(-(token12*token14*u* (token13*token13)) + token12*token14* (MA1*MA1)* (token13*token13)) + ( (token1*token1)* (token2*token2)* (token3*token3))/( (token12*token12)* (token13*token13)* (token14*token14)) + (2* (token1*token1)* (token11*token11)* (token5*token5))/((-t +  (MA1*MA1))*(-u +  (MA1*MA1))* (token13*token13)) + ( (token1*token1)* (token11*token11)* (token5*token5))/( (( (MA1*MA1) - t)*( (MA1*MA1) - t))* (token13*token13)) + ( (token1*token1)* (token11*token11)* (token5*token5))/( (token13*token13)* (( (MA1*MA1) - u)*( (MA1*MA1) - u))) + (2*token1*token3*token4*token5*token6*(s -  (MH*MH))* (token2*token2))/(token12*token15* (token13*token13)* (token14*token14)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token1*token11*token2*token4*token6*(-s +  (MH*MH))* (token5*token5))/(token14*token15*(-t +  (MA1*MA1))* (token13*token13)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token1*token11*token2*token4*token6*(-s +  (MH*MH))* (token5*token5))/(token14*token15*(-u +  (MA1*MA1))* (token13*token13)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + ( (token2*token2)* (token4*token4)* (token5*token5)* (token6*token6))/( (token13*token13)* (token14*token14)* (token15*token15)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token1*token10*token11*token2*token5*token7*token8*token9*(-s +  (MS1*MS1)))/(token14*(-t +  (MA1*MA1))* (token13*token13)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (2*token1*token10*token11*token2*token5*token7*token8*token9*(-s +  (MS1*MS1)))/(token14*(-u +  (MA1*MA1))* (token13*token13)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (2*token1*token10*token3*token7*token8*token9*(s -  (MS1*MS1))* (token2*token2))/(token12* (token13*token13)* (token14*token14)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + ( (token10*token10)* (token2*token2)* (token7*token7)* (token8*token8)* (token9*token9))/( (token13*token13)* (token14*token14)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (2*token10*token4*token5*token6*token7*token8*token9*(MH*MS1*WH*WS1 + s*(s -  (MS1*MS1)) +  (MH*MH)*(-s +  (MS1*MS1)))* (token2*token2))/(token15* (token13*token13)* (token14*token14)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1HS1(const double &cos_t, const double &s){
	double t = (-s + 2* (MA1*MA1) +  (MH*MH) +  (MS1*MS1) + cos_t*sqrt(s - 4* (MA1*MA1))*sqrt(( (MH*MH*MH*MH) - 2* (MH*MH)*(s +  (MS1*MS1)) +  (( (MS1*MS1) - s)*( (MS1*MS1) - s)))/s))/2.;
	double u = -s - t + MA1*MA1 + MA1*MA1 + MH*MH + MS1*MS1;
	return (-2*token1*token17*token18*token7* (token16*token16)* (token2*token2))/(-(t*token12*token14* (token13*token13)) + token12*token14* (MA1*MA1)* (token13*token13)) - (2*token1*token17*token18*token7* (token16*token16)* (token2*token2))/(-(token12*token14*u* (token13*token13)) + token12*token14* (MA1*MA1)* (token13*token13)) + ( (token16*token16)* (token17*token17)* (token2*token2))/( (token12*token12)* (token13*token13)* (token14*token14)) + (2* (token1*token1)* (token16*token16)* (token18*token18)* (token2*token2)* (token7*token7))/((-t +  (MA1*MA1))*(-u +  (MA1*MA1))* (token13*token13)) + ( (token1*token1)* (token16*token16)* (token18*token18)* (token2*token2)* (token7*token7))/( (( (MA1*MA1) - t)*( (MA1*MA1) - t))* (token13*token13)) + ( (token1*token1)* (token16*token16)* (token18*token18)* (token2*token2)* (token7*token7))/( (token13*token13)* (( (MA1*MA1) - u)*( (MA1*MA1) - u))) + (2*token10*token11*token17*token18*token2*token8*(s -  (MH*MH))* (token16*token16))/(token12* (token13*token13)* (token14*token14)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token1*token10*token11*token2*token7*token8*(-s +  (MH*MH))* (token16*token16)* (token18*token18))/(token14*(-t +  (MA1*MA1))* (token13*token13)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token1*token10*token11*token2*token7*token8*(-s +  (MH*MH))* (token16*token16)* (token18*token18))/(token14*(-u +  (MA1*MA1))* (token13*token13)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + ( (token10*token10)* (token11*token11)* (token16*token16)* (token18*token18)* (token8*token8))/( (token13*token13)* (token14*token14)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token1*token16*token17*token19*token20*token7*token9*(s -  (MS1*MS1))* (token2*token2))/(token12* (token13*token13)* (token14*token14)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (2*token16*token18*token19*token20*token9*(-s +  (MS1*MS1))* (token1*token1)* (token2*token2)* (token7*token7))/(token14*(-t +  (MA1*MA1))* (token13*token13)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (2*token16*token18*token19*token20*token9*(-s +  (MS1*MS1))* (token1*token1)* (token2*token2)* (token7*token7))/(token14*(-u +  (MA1*MA1))* (token13*token13)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + ( (token1*token1)* (token19*token19)* (token2*token2)* (token20*token20)* (token7*token7)* (token9*token9))/( (token13*token13)* (token14*token14)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (2*token1*token10*token11*token16*token18*token19*token2*token20*token7*token8*token9*(MH*MS1*WH*WS1 + s*(s -  (MS1*MS1)) +  (MH*MH)*(-s +  (MS1*MS1))))/( (token13*token13)* (token14*token14)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1S1S1(const double &cos_t, const double &s){
	double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4* (MA1*MA1))*sqrt(s - 4* (MS1*MS1)))/2. +  (MS1*MS1);
	double u = -s - t + MA1*MA1 + MA1*MA1 + MS1*MS1 + MS1*MS1;
	return (-2*token16*token21*token23*token9* (token1*token1))/(-(t*token12*token14* (token13*token13)) + token12*token14* (MA1*MA1)* (token13*token13)) - (2*token16*token21*token23*token9* (token1*token1))/(-(token12*token14*u* (token13*token13)) + token12*token14* (MA1*MA1)* (token13*token13)) + ( (token1*token1)* (token16*token16)* (token21*token21))/( (token12*token12)* (token13*token13)* (token14*token14)) + (2* (token1*token1)* (token23*token23)* (token9*token9))/((-t +  (MA1*MA1))*(-u +  (MA1*MA1))* (token13*token13)) + ( (token1*token1)* (token23*token23)* (token9*token9))/( (( (MA1*MA1) - t)*( (MA1*MA1) - t))* (token13*token13)) + ( (token1*token1)* (token23*token23)* (token9*token9))/( (token13*token13)* (( (MA1*MA1) - u)*( (MA1*MA1) - u))) + (2*token11*token16*token18*token19*token20*token23*token9*(-s +  (MH*MH))* (token1*token1))/(token14*(-t +  (MA1*MA1))* (token13*token13)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token11*token16*token18*token19*token20*token23*token9*(-s +  (MH*MH))* (token1*token1))/(token14*(-u +  (MA1*MA1))* (token13*token13)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token11*token18*token19*token20*token21*(s -  (MH*MH))* (token1*token1)* (token16*token16))/(token12* (token13*token13)* (token14*token14)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + ( (token1*token1)* (token11*token11)* (token16*token16)* (token18*token18)* (token19*token19)* (token20*token20))/( (token13*token13)* (token14*token14)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*token1*token21*token22*token23*token24*(s -  (MS1*MS1))* (token16*token16))/(token12*token15* (token13*token13)* (token14*token14)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (2*token1*token16*token22*token24*token9*(-s +  (MS1*MS1))* (token23*token23))/(token14*token15*(-t +  (MA1*MA1))* (token13*token13)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (2*token1*token16*token22*token24*token9*(-s +  (MS1*MS1))* (token23*token23))/(token14*token15*(-u +  (MA1*MA1))* (token13*token13)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + ( (token16*token16)* (token22*token22)* (token23*token23)* (token24*token24))/( (token13*token13)* (token14*token14)* (token15*token15)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (2*token1*token11*token18*token19*token20*token22*token23*token24*(MH*MS1*WH*WS1 + s*(s -  (MS1*MS1)) +  (MH*MH)*(-s +  (MS1*MS1)))* (token16*token16))/(token15* (token13*token13)* (token14*token14)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1ZZ(const double &cos_t, const double &s){
	return ((-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (token14*token14)* (token16*token16)* (token18*token18)* (token2*token2)* (token25*token25)* (token26*token26))/(4.* (MZ*MZ*MZ*MZ)* (token12*token12)* (token27*token27)* (token28*token28)* (token29*token29)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + ((-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (token1*token1)* (token14*token14)* (token16*token16)* (token2*token2)* (token25*token25)* (token26*token26)* (token7*token7))/(4.* (MZ*MZ*MZ*MZ)* (token12*token12)* (token27*token27)* (token28*token28)* (token29*token29)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (token1*token18*token7*(MH*MS1*WH*WS1 + s*(s -  (MS1*MS1)) +  (MH*MH)*(-s +  (MS1*MS1)))*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (token14*token14)* (token16*token16)* (token2*token2)* (token25*token25)* (token26*token26))/(2.* (MZ*MZ*MZ*MZ)* (token12*token12)* (token27*token27)* (token28*token28)* (token29*token29)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1wW(const double &cos_t, const double &s){
	return ((-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s))* (token14*token14)* (token16*token16)* (token18*token18)* (token2*token2)* (token25*token25))/(4.* (MW*MW*MW*MW)* (token12*token12)* (token28*token28)* (token29*token29)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + ((-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s))* (token1*token1)* (token14*token14)* (token16*token16)* (token2*token2)* (token25*token25)* (token7*token7))/(4.* (MW*MW*MW*MW)* (token12*token12)* (token28*token28)* (token29*token29)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (token1*token18*token7*(MH*MS1*WH*WS1 + s*(s -  (MS1*MS1)) +  (MH*MH)*(-s +  (MS1*MS1)))*(-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s))* (token14*token14)* (token16*token16)* (token2*token2)* (token25*token25))/(2.* (MW*MW*MW*MW)* (token12*token12)* (token28*token28)* (token29*token29)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1Ee(const double &cos_t, const double &s){
	return (2*(s - 4* (Me*Me))* (token1*token1)* (token16*token16)* (token18*token18)* (token2*token2)* (token30*token30))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*(s - 4* (Me*Me))* (token16*token16)* (token2*token2)* (token30*token30)* (token7*token7))/( (token28*token28)* (token31*token31)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) - (4*token1*token18*token7*(-s + 4* (Me*Me))*(MH*MS1*WH*WS1 + s*(s -  (MS1*MS1)) +  (MH*MH)*(-s +  (MS1*MS1)))* (token16*token16)* (token2*token2)* (token30*token30))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1MUmu(const double &cos_t, const double &s){
	return (2*(s - 4* (MMU*MMU))* (token1*token1)* (token16*token16)* (token18*token18)* (token2*token2)* (token32*token32))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*(s - 4* (MMU*MMU))* (token16*token16)* (token2*token2)* (token32*token32)* (token7*token7))/( (token28*token28)* (token31*token31)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) - (4*token1*token18*token7*(-s + 4* (MMU*MMU))*(MH*MS1*WH*WS1 + s*(s -  (MS1*MS1)) +  (MH*MH)*(-s +  (MS1*MS1)))* (token16*token16)* (token2*token2)* (token32*token32))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1TAta(const double &cos_t, const double &s){
	return (2*(s - 4* (MTA*MTA))* (token1*token1)* (token16*token16)* (token18*token18)* (token2*token2)* (token33*token33))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (2*(s - 4* (MTA*MTA))* (token16*token16)* (token2*token2)* (token33*token33)* (token7*token7))/( (token28*token28)* (token31*token31)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) - (4*token1*token18*token7*(MH*MS1*WH*WS1 + s*(s -  (MS1*MS1)) +  (MH*MH)*(-s +  (MS1*MS1)))*(-s + 4* (MTA*MTA))* (token16*token16)* (token2*token2)* (token33*token33))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1Uu(const double &cos_t, const double &s){
	return (6*(s - 4* (MU*MU))* (token1*token1)* (token16*token16)* (token18*token18)* (token2*token2)* (token34*token34))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (6*(s - 4* (MU*MU))* (token16*token16)* (token2*token2)* (token34*token34)* (token7*token7))/( (token28*token28)* (token31*token31)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (12*token1*token18*token7*(MH*MS1*WH*WS1 + s*(s -  (MS1*MS1)) +  (MH*MH)*(-s +  (MS1*MS1)))*(s - 4* (MU*MU))* (token16*token16)* (token2*token2)* (token34*token34))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1Cc(const double &cos_t, const double &s){
	return (6*(s - 4* (MC*MC))* (token1*token1)* (token16*token16)* (token18*token18)* (token2*token2)* (token35*token35))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (6*(s - 4* (MC*MC))* (token16*token16)* (token2*token2)* (token35*token35)* (token7*token7))/( (token28*token28)* (token31*token31)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (12*token1*token18*token7*(s - 4* (MC*MC))*(MH*MS1*WH*WS1 + s*(s -  (MS1*MS1)) +  (MH*MH)*(-s +  (MS1*MS1)))* (token16*token16)* (token2*token2)* (token35*token35))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1Tt(const double &cos_t, const double &s){
	return (6*(s - 4* (MT*MT))* (token1*token1)* (token16*token16)* (token18*token18)* (token2*token2)* (token36*token36))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (6*(s - 4* (MT*MT))* (token16*token16)* (token2*token2)* (token36*token36)* (token7*token7))/( (token28*token28)* (token31*token31)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (12*token1*token18*token7*(MH*MS1*WH*WS1 + s*(s -  (MS1*MS1)) +  (MH*MH)*(-s +  (MS1*MS1)))*(s - 4* (MT*MT))* (token16*token16)* (token2*token2)* (token36*token36))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1Dd(const double &cos_t, const double &s){
	return (6*(s - 4* (MD*MD))* (token1*token1)* (token16*token16)* (token18*token18)* (token2*token2)* (token37*token37))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (6*(s - 4* (MD*MD))* (token16*token16)* (token2*token2)* (token37*token37)* (token7*token7))/( (token28*token28)* (token31*token31)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (12*token1*token18*token7*(s - 4* (MD*MD))*(MH*MS1*WH*WS1 + s*(s -  (MS1*MS1)) +  (MH*MH)*(-s +  (MS1*MS1)))* (token16*token16)* (token2*token2)* (token37*token37))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1Ss(const double &cos_t, const double &s){
	return (6*(s - 4* (MS*MS))* (token1*token1)* (token16*token16)* (token18*token18)* (token2*token2)* (token38*token38))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (6*(s - 4* (MS*MS))* (token16*token16)* (token2*token2)* (token38*token38)* (token7*token7))/( (token28*token28)* (token31*token31)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (12*token1*token18*token7*(s - 4* (MS*MS))*(MH*MS1*WH*WS1 + s*(s -  (MS1*MS1)) +  (MH*MH)*(-s +  (MS1*MS1)))* (token16*token16)* (token2*token2)* (token38*token38))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
double DT::A1A1Bb(const double &cos_t, const double &s){
	return (6*(s - 4* (MB*MB))* (token1*token1)* (token16*token16)* (token18*token18)* (token2*token2)* (token39*token39))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))) + (6*(s - 4* (MB*MB))* (token16*token16)* (token2*token2)* (token39*token39)* (token7*token7))/( (token28*token28)* (token31*token31)*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1)))) + (12*token1*token18*token7*(s - 4* (MB*MB))*(MH*MS1*WH*WS1 + s*(s -  (MS1*MS1)) +  (MH*MH)*(-s +  (MS1*MS1)))* (token16*token16)* (token2*token2)* (token39*token39))/( (token28*token28)* (token31*token31)*( (MH*MH*MH*MH) +  (s*s) +  (MH*MH)*(-2*s +  (WH*WH)))*( (MS1*MS1*MS1*MS1) +  (s*s) +  (MS1*MS1)*(-2*s +  (WS1*WS1))));
}
