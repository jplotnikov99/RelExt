#include "../../../model.hpp"
#include "utils.hpp"
#include "interface/CollierLTCPP.h"
#include <iostream>
#include <gsl/gsl_sf_dilog.h>
#include <gsl/gsl_sf_log.h>
#include <cmath>

using namespace DT::PAR;
using namespace std;
inline std::complex<double>
operator+(int lhs, const std::complex<double>& rhs)
{
    return std::complex<double>(static_cast<double>(lhs), 0.0) + rhs;
}
   template <typename T>
std::complex<T> operator*(int lhs, const std::complex<T>& rhs) {
   return static_cast<T>(lhs) * rhs;
}


inline double Csc(double x) {
    return 1.0 / sin(x);
}

inline double Sec(double x) {
    return 1.0 / cos(x);
}

inline double Cot(double x) {
    return std::tan(M_PI_2 - x);
}



std::complex<double> DT::A1A1TAtaCTZ1(const double &cos_t, const double &s){
   std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);

    double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4.* (MA1*MA1))*sqrt(s - 4.* (MTA*MTA)))/2. +  (MTA*MTA);
	double u = -s - t + MA1*MA1 + MA1*MA1 + MTA*MTA + MTA*MTA;
    
        CT_vs = CT_svev_ZEM_H1_OS;
    CT_alpha = CT_alpha_OS;
	return (2*CT_alpha*MTA*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA)))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_ta_ta_L*MTA*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MTA*MTA))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_Z_ta_ta_R*MTA*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MTA*MTA))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_M_ta*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_AD_AD*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_M_H1*MTA*s*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(((MHSqcomp) - s)*((MHSqcomp) - s))) + (CT_M_H2*MTA*s*(-s + 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) - (CT_vs*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(svev*svev)) - (CT_v*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(vev*vev));
}
std::complex<double> DT::A1A1TAtaCTZ2(const double &cos_t, const double &s){
     std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);

    double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4.* (MA1*MA1))*sqrt(s - 4.* (MTA*MTA)))/2. +  (MTA*MTA);
	double u = -s - t + MA1*MA1 + MA1*MA1 + MTA*MTA + MTA*MTA;
        CT_vs = CT_svev_ZEM_H2_OS;
    CT_alpha = CT_alpha_OS;
	return (2*CT_alpha*MTA*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA)))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_ta_ta_L*MTA*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MTA*MTA))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_Z_ta_ta_R*MTA*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MTA*MTA))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_M_ta*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_AD_AD*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_M_H1*MTA*s*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(((MHSqcomp) - s)*((MHSqcomp) - s))) + (CT_M_H2*MTA*s*(-s + 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) - (CT_vs*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(svev*svev)) - (CT_v*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(vev*vev));
}
std::complex<double> DT::A1A1TAtaCTOS1(const double &cos_t, const double &s){
    std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);

    double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4.* (MA1*MA1))*sqrt(s - 4.* (MTA*MTA)))/2. +  (MTA*MTA);
	double u = -s - t + MA1*MA1 + MA1*MA1 + MTA*MTA + MTA*MTA;
        CT_vs = CT_svev_OS_H1_OS;
    CT_alpha = CT_alpha_OS;
	return (2*CT_alpha*MTA*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA)))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_ta_ta_L*MTA*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MTA*MTA))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_Z_ta_ta_R*MTA*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MTA*MTA))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_M_ta*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_AD_AD*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_M_H1*MTA*s*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(((MHSqcomp) - s)*((MHSqcomp) - s))) + (CT_M_H2*MTA*s*(-s + 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) - (CT_vs*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(svev*svev)) - (CT_v*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(vev*vev));
    
}
std::complex<double> DT::A1A1TAtaCTOS2(const double &cos_t, const double &s){
          std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);

    double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4.* (MA1*MA1))*sqrt(s - 4.* (MTA*MTA)))/2. +  (MTA*MTA);
	double u = -s - t + MA1*MA1 + MA1*MA1 + MTA*MTA + MTA*MTA;
       CT_vs = CT_svev_ZEM_H2_OS;
    CT_alpha = CT_alpha_OS;
	return (2*CT_alpha*MTA*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA)))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_ta_ta_L*MTA*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MTA*MTA))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_Z_ta_ta_R*MTA*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MTA*MTA))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_M_ta*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_AD_AD*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_M_H1*MTA*s*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(((MHSqcomp) - s)*((MHSqcomp) - s))) + (CT_M_H2*MTA*s*(-s + 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) - (CT_vs*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(svev*svev)) - (CT_v*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(vev*vev));

}
std::complex<double> DT::A1A1TAtaCTZ12(const double &cos_t, const double &s){
         std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);

    double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4.* (MA1*MA1))*sqrt(s - 4.* (MTA*MTA)))/2. +  (MTA*MTA);
	double u = -s - t + MA1*MA1 + MA1*MA1 + MTA*MTA + MTA*MTA;
      CT_vs = CT_svev_ZEM_H1_pstr;
    CT_alpha = CT_alpha_pstr;
	return (2*CT_alpha*MTA*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA)))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_ta_ta_L*MTA*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MTA*MTA))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_Z_ta_ta_R*MTA*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MTA*MTA))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_M_ta*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_AD_AD*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_M_H1*MTA*s*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(((MHSqcomp) - s)*((MHSqcomp) - s))) + (CT_M_H2*MTA*s*(-s + 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) - (CT_vs*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(svev*svev)) - (CT_v*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(vev*vev));
    
}
std::complex<double> DT::A1A1TAtaCTZ22(const double &cos_t, const double &s){
         std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);

    double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4.* (MA1*MA1))*sqrt(s - 4.* (MTA*MTA)))/2. +  (MTA*MTA);
	double u = -s - t + MA1*MA1 + MA1*MA1 + MTA*MTA + MTA*MTA;

        CT_vs = CT_svev_ZEM_H2_pstr;
    CT_alpha = CT_alpha_pstr;
	return (2*CT_alpha*MTA*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA)))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_ta_ta_L*MTA*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MTA*MTA))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_Z_ta_ta_R*MTA*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MTA*MTA))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_M_ta*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_AD_AD*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_M_H1*MTA*s*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(((MHSqcomp) - s)*((MHSqcomp) - s))) + (CT_M_H2*MTA*s*(-s + 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) - (CT_vs*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(svev*svev)) - (CT_v*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(vev*vev));
}
std::complex<double> DT::A1A1TAtaCTOS12(const double &cos_t, const double &s){
         std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);

    double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4.* (MA1*MA1))*sqrt(s - 4.* (MTA*MTA)))/2. +  (MTA*MTA);
	double u = -s - t + MA1*MA1 + MA1*MA1 + MTA*MTA + MTA*MTA;
        CT_vs = CT_svev_OS_H1_pstr;
    CT_alpha = CT_alpha_pstr;
	return (2*CT_alpha*MTA*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA)))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_ta_ta_L*MTA*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MTA*MTA))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_Z_ta_ta_R*MTA*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MTA*MTA))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_M_ta*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_AD_AD*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_M_H1*MTA*s*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(((MHSqcomp) - s)*((MHSqcomp) - s))) + (CT_M_H2*MTA*s*(-s + 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) - (CT_vs*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(svev*svev)) - (CT_v*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(vev*vev));
    
}
std::complex<double> DT::A1A1TAtaCTOS22(const double &cos_t, const double &s){
         std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);

    double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4.* (MA1*MA1))*sqrt(s - 4.* (MTA*MTA)))/2. +  (MTA*MTA);
	double u = -s - t + MA1*MA1 + MA1*MA1 + MTA*MTA + MTA*MTA;
        CT_vs = CT_svev_OS_H2_pstr;
    CT_alpha = CT_alpha_pstr;
	return (2*CT_alpha*MTA*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA)))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_ta_ta_L*MTA*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MTA*MTA))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_Z_ta_ta_R*MTA*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MTA*MTA))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_M_ta*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_AD_AD*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_M_H1*MTA*s*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(((MHSqcomp) - s)*((MHSqcomp) - s))) + (CT_M_H2*MTA*s*(-s + 4*(MTA*MTA))*sin(2*alpha))/(svev*vev*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) - (CT_vs*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(svev*svev)) - (CT_v*MTA*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MTA*MTA))*sin(2*alpha))/(svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(vev*vev));
}
