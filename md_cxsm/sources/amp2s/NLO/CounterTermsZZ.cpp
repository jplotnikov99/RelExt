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



std::complex<double> DT::A1A1ZZCTZ1(const double &cos_t, const double &s){
        std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);
	double t = -0.5*s + (MA1*MA1) + (MZ*MZ) + (cos_t*sqrt((s - 4*(MA1*MA1))*(s - 4*(MZ*MZ))*(s*s)))/(2.*s);
	double u = -s - t + 2*(MA1*MA1) + 2*(MZ*MZ);
        CT_vs = CT_svev_ZEM_H1_OS;
    CT_alpha = CT_alpha_OS;
	return  (CT_alpha*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s)))/(2.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) - (CT_M_W*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(2*(MW*MW) - (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))*(MW*MW)*(MZ*MZ*MZ*MZ)) + (CT_Z_AD_AD*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) + (CT_Z_Z_Z*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) + (CT_Ze*s*((MHSqcomp) - (MS1Sqcomp))*(-(MW*MW) + (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ)) + (CT_M_Z*s*((MHSqcomp) - (MS1Sqcomp))*(-2*(MW*MW) + (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ*MZ*MZ)) + (CT_M_H1*s*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(MZ*MZ)*(((MHSqcomp) - s)*((MHSqcomp) - s))) - (CT_M_H2*s*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(MZ*MZ)*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) + (CT_vs*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))*(MZ*MZ)*(svev*svev)) + (CT_v*s*((MHSqcomp) - (MS1Sqcomp))*(-4*(MW*MW) + 3*(MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ)*(vev*vev));

}
std::complex<double> DT::A1A1ZZCTZ2(const double &cos_t, const double &s){
      std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);
	double t = -0.5*s + (MA1*MA1) + (MZ*MZ) + (cos_t*sqrt((s - 4*(MA1*MA1))*(s - 4*(MZ*MZ))*(s*s)))/(2.*s);
	double u = -s - t + 2*(MA1*MA1) + 2*(MZ*MZ);
        CT_vs = CT_svev_ZEM_H2_OS;
    CT_alpha = CT_alpha_OS;
	return (CT_alpha*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s)))/(2.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) - (CT_M_W*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(2*(MW*MW) - (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))*(MW*MW)*(MZ*MZ*MZ*MZ)) + (CT_Z_AD_AD*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) + (CT_Z_Z_Z*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) + (CT_Ze*s*((MHSqcomp) - (MS1Sqcomp))*(-(MW*MW) + (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ)) + (CT_M_Z*s*((MHSqcomp) - (MS1Sqcomp))*(-2*(MW*MW) + (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ*MZ*MZ)) + (CT_M_H1*s*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(MZ*MZ)*(((MHSqcomp) - s)*((MHSqcomp) - s))) - (CT_M_H2*s*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(MZ*MZ)*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) + (CT_vs*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))*(MZ*MZ)*(svev*svev)) + (CT_v*s*((MHSqcomp) - (MS1Sqcomp))*(-4*(MW*MW) + 3*(MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ)*(vev*vev));
}
std::complex<double> DT::A1A1ZZCTOS1(const double &cos_t, const double &s){
      std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);
	double t = -0.5*s + (MA1*MA1) + (MZ*MZ) + (cos_t*sqrt((s - 4*(MA1*MA1))*(s - 4*(MZ*MZ))*(s*s)))/(2.*s);
	double u = -s - t + 2*(MA1*MA1) + 2*(MZ*MZ);
        CT_vs = CT_svev_OS_H1_OS;
    CT_alpha = CT_alpha_OS;
	return (CT_alpha*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s)))/(2.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) - (CT_M_W*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(2*(MW*MW) - (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))*(MW*MW)*(MZ*MZ*MZ*MZ)) + (CT_Z_AD_AD*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) + (CT_Z_Z_Z*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) + (CT_Ze*s*((MHSqcomp) - (MS1Sqcomp))*(-(MW*MW) + (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ)) + (CT_M_Z*s*((MHSqcomp) - (MS1Sqcomp))*(-2*(MW*MW) + (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ*MZ*MZ)) + (CT_M_H1*s*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(MZ*MZ)*(((MHSqcomp) - s)*((MHSqcomp) - s))) - (CT_M_H2*s*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(MZ*MZ)*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) + (CT_vs*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))*(MZ*MZ)*(svev*svev)) + (CT_v*s*((MHSqcomp) - (MS1Sqcomp))*(-4*(MW*MW) + 3*(MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ)*(vev*vev));
   
}
std::complex<double> DT::A1A1ZZCTOS2(const double &cos_t, const double &s){
      std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);
	double t = -0.5*s + (MA1*MA1) + (MZ*MZ) + (cos_t*sqrt((s - 4*(MA1*MA1))*(s - 4*(MZ*MZ))*(s*s)))/(2.*s);
	double u = -s - t + 2*(MA1*MA1) + 2*(MZ*MZ);
    CT_vs = CT_svev_ZEM_H2_OS;
    CT_alpha = CT_alpha_OS;
	return (CT_alpha*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s)))/(2.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) - (CT_M_W*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(2*(MW*MW) - (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))*(MW*MW)*(MZ*MZ*MZ*MZ)) + (CT_Z_AD_AD*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) + (CT_Z_Z_Z*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) + (CT_Ze*s*((MHSqcomp) - (MS1Sqcomp))*(-(MW*MW) + (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ)) + (CT_M_Z*s*((MHSqcomp) - (MS1Sqcomp))*(-2*(MW*MW) + (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ*MZ*MZ)) + (CT_M_H1*s*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(MZ*MZ)*(((MHSqcomp) - s)*((MHSqcomp) - s))) - (CT_M_H2*s*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(MZ*MZ)*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) + (CT_vs*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))*(MZ*MZ)*(svev*svev)) + (CT_v*s*((MHSqcomp) - (MS1Sqcomp))*(-4*(MW*MW) + 3*(MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ)*(vev*vev));
}
std::complex<double> DT::A1A1ZZCTZ12(const double &cos_t, const double &s){
      std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);
	double t = -0.5*s + (MA1*MA1) + (MZ*MZ) + (cos_t*sqrt((s - 4*(MA1*MA1))*(s - 4*(MZ*MZ))*(s*s)))/(2.*s);
	double u = -s - t + 2*(MA1*MA1) + 2*(MZ*MZ);
       CT_vs = CT_svev_ZEM_H1_pstr;
    CT_alpha = CT_alpha_pstr;
	return (CT_alpha*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s)))/(2.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) - (CT_M_W*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(2*(MW*MW) - (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))*(MW*MW)*(MZ*MZ*MZ*MZ)) + (CT_Z_AD_AD*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) + (CT_Z_Z_Z*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) + (CT_Ze*s*((MHSqcomp) - (MS1Sqcomp))*(-(MW*MW) + (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ)) + (CT_M_Z*s*((MHSqcomp) - (MS1Sqcomp))*(-2*(MW*MW) + (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ*MZ*MZ)) + (CT_M_H1*s*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(MZ*MZ)*(((MHSqcomp) - s)*((MHSqcomp) - s))) - (CT_M_H2*s*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(MZ*MZ)*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) + (CT_vs*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))*(MZ*MZ)*(svev*svev)) + (CT_v*s*((MHSqcomp) - (MS1Sqcomp))*(-4*(MW*MW) + 3*(MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ)*(vev*vev));
   
}
std::complex<double> DT::A1A1ZZCTZ22(const double &cos_t, const double &s){
      std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);
	double t = -0.5*s + (MA1*MA1) + (MZ*MZ) + (cos_t*sqrt((s - 4*(MA1*MA1))*(s - 4*(MZ*MZ))*(s*s)))/(2.*s);
	double u = -s - t + 2*(MA1*MA1) + 2*(MZ*MZ);
        CT_vs = CT_svev_ZEM_H2_pstr;
    CT_alpha = CT_alpha_pstr;
	return (CT_alpha*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s)))/(2.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) - (CT_M_W*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(2*(MW*MW) - (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))*(MW*MW)*(MZ*MZ*MZ*MZ)) + (CT_Z_AD_AD*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) + (CT_Z_Z_Z*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) + (CT_Ze*s*((MHSqcomp) - (MS1Sqcomp))*(-(MW*MW) + (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ)) + (CT_M_Z*s*((MHSqcomp) - (MS1Sqcomp))*(-2*(MW*MW) + (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ*MZ*MZ)) + (CT_M_H1*s*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(MZ*MZ)*(((MHSqcomp) - s)*((MHSqcomp) - s))) - (CT_M_H2*s*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(MZ*MZ)*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) + (CT_vs*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))*(MZ*MZ)*(svev*svev)) + (CT_v*s*((MHSqcomp) - (MS1Sqcomp))*(-4*(MW*MW) + 3*(MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ)*(vev*vev));
   
}
std::complex<double> DT::A1A1ZZCTOS12(const double &cos_t, const double &s){
      std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);
	double t = -0.5*s + (MA1*MA1) + (MZ*MZ) + (cos_t*sqrt((s - 4*(MA1*MA1))*(s - 4*(MZ*MZ))*(s*s)))/(2.*s);
	double u = -s - t + 2*(MA1*MA1) + 2*(MZ*MZ);
        CT_vs = CT_svev_OS_H1_pstr;
    CT_alpha = CT_alpha_pstr;
	return (CT_alpha*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s)))/(2.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) - (CT_M_W*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(2*(MW*MW) - (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))*(MW*MW)*(MZ*MZ*MZ*MZ)) + (CT_Z_AD_AD*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) + (CT_Z_Z_Z*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) + (CT_Ze*s*((MHSqcomp) - (MS1Sqcomp))*(-(MW*MW) + (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ)) + (CT_M_Z*s*((MHSqcomp) - (MS1Sqcomp))*(-2*(MW*MW) + (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ*MZ*MZ)) + (CT_M_H1*s*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(MZ*MZ)*(((MHSqcomp) - s)*((MHSqcomp) - s))) - (CT_M_H2*s*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(MZ*MZ)*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) + (CT_vs*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))*(MZ*MZ)*(svev*svev)) + (CT_v*s*((MHSqcomp) - (MS1Sqcomp))*(-4*(MW*MW) + 3*(MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ)*(vev*vev));
   
}
std::complex<double> DT::A1A1ZZCTOS22(const double &cos_t, const double &s){
      std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);
	double t = -0.5*s + (MA1*MA1) + (MZ*MZ) + (cos_t*sqrt((s - 4*(MA1*MA1))*(s - 4*(MZ*MZ))*(s*s)))/(2.*s);
	double u = -s - t + 2*(MA1*MA1) + 2*(MZ*MZ);
        CT_vs = CT_svev_OS_H2_pstr;
    CT_alpha = CT_alpha_pstr;
	return (CT_alpha*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s)))/(2.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) - (CT_M_W*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(2*(MW*MW) - (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))*(MW*MW)*(MZ*MZ*MZ*MZ)) + (CT_Z_AD_AD*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) + (CT_Z_Z_Z*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ)) + (CT_Ze*s*((MHSqcomp) - (MS1Sqcomp))*(-(MW*MW) + (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ)) + (CT_M_Z*s*((MHSqcomp) - (MS1Sqcomp))*(-2*(MW*MW) + (MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ*MZ*MZ)) + (CT_M_H1*s*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(MZ*MZ)*(((MHSqcomp) - s)*((MHSqcomp) - s))) - (CT_M_H2*s*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*vev*(MZ*MZ)*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) + (CT_vs*s*((MHSqcomp) - (MS1Sqcomp))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))*(MZ*MZ)*(svev*svev)) + (CT_v*s*((MHSqcomp) - (MS1Sqcomp))*(-4*(MW*MW) + 3*(MZ*MZ))*(-4*s*(MZ*MZ) + 12*(MZ*MZ*MZ*MZ) + (s*s))*sin(2*alpha))/(4.*svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(MZ*MZ*MZ*MZ)*(vev*vev));
   
}