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


std::complex<double> DT::A1A1BbCTZ2(const double &cos_t, const double &s){


    double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4.* (MA1*MA1))*sqrt(s - 4.* (MB*MB)))/2. +  (MB*MB);
    double u = -s - t + MA1*MA1 + MA1*MA1 + MB*MB + MB*MB;
    std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);
    double v=vev;
    double vs=svev;
    double vevsing = svev;
    CT_alpha = CT_alpha_OS;
    CT_vs = CT_svev_ZEM_H2_OS;
    
	return (2*CT_alpha*MB*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB)))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_b_b_L*MB*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MB*MB))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_Z_b_b_R*MB*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MB*MB))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_M_b*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_AD_AD*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_M_H1*MB*s*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(((MHSqcomp) - s)*((MHSqcomp) - s))) + (CT_M_H2*MB*s*(-s + 4*(MB*MB))*sin(2*alpha))/(svev*vev*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) - (CT_vs*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(svev*svev)) - (CT_v*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(vev*vev));


    
}
std::complex<double> DT::A1A1BbCTOS12(const double &cos_t, const double &s){
    double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4.* (MA1*MA1))*sqrt(s - 4.* (MB*MB)))/2. +  (MB*MB);
    double u = -s - t + MA1*MA1 + MA1*MA1 + MB*MB + MB*MB;
    std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);
    std::complex<double> MH1 = sqrt(MH*MH - std::complex<double>(0,MH*WH));
    std::complex<double> MH2 = sqrt(MS1*MS1 - std::complex<double>(0,MS1*WS1));
    std::complex<double> MH1c = sqrt(MH*MH + std::complex<double>(0,MH*WH));
    std::complex<double> MH2c = sqrt(MS1*MS1 + std::complex<double>(0,MS1*WS1));
    double v=vev;
    double vs=svev;
    double vevsing = svev;
    CT_alpha = CT_alpha_pstr;
    CT_vs = CT_svev_OS_H1_pstr;
    // Amplitude terms without PV functions
  
	return (2*CT_alpha*MB*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB)))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_b_b_L*MB*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MB*MB))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_Z_b_b_R*MB*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MB*MB))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_M_b*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_AD_AD*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_M_H1*MB*s*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(((MHSqcomp) - s)*((MHSqcomp) - s))) + (CT_M_H2*MB*s*(-s + 4*(MB*MB))*sin(2*alpha))/(svev*vev*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) - (CT_vs*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(svev*svev)) - (CT_v*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(vev*vev));

}
std::complex<double> DT::A1A1BbCTZ12(const double &cos_t, const double &s){
    double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4.* (MA1*MA1))*sqrt(s - 4.* (MB*MB)))/2. +  (MB*MB);
    double u = -s - t + MA1*MA1 + MA1*MA1 + MB*MB + MB*MB;
    std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);
    std::complex<double> MH1 = sqrt(MH*MH - std::complex<double>(0,MH*WH));
    std::complex<double> MH2 = sqrt(MS1*MS1 - std::complex<double>(0,MS1*WS1));
    std::complex<double> MH1c = sqrt(MH*MH + std::complex<double>(0,MH*WH));
    std::complex<double> MH2c = sqrt(MS1*MS1 + std::complex<double>(0,MS1*WS1));
    double v=vev;
    double vs=svev;
    double vevsing = svev;
    CT_alpha = CT_alpha_pstr;
    CT_vs = CT_svev_ZEM_H1_pstr;
    return (2*CT_alpha*MB*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB)))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_b_b_L*MB*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MB*MB))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_Z_b_b_R*MB*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MB*MB))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_M_b*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_AD_AD*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_M_H1*MB*s*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(((MHSqcomp) - s)*((MHSqcomp) - s))) + (CT_M_H2*MB*s*(-s + 4*(MB*MB))*sin(2*alpha))/(svev*vev*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) - (CT_vs*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(svev*svev)) - (CT_v*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(vev*vev));

}
std::complex<double> DT::A1A1BbCTZ22(const double &cos_t, const double &s){
    double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4.* (MA1*MA1))*sqrt(s - 4.* (MB*MB)))/2. +  (MB*MB);
    double u = -s - t + MA1*MA1 + MA1*MA1 + MB*MB + MB*MB;
    std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);
    std::complex<double> MH1 = sqrt(MH*MH - std::complex<double>(0,MH*WH));
    std::complex<double> MH2 = sqrt(MS1*MS1 - std::complex<double>(0,MS1*WS1));
    std::complex<double> MH1c = sqrt(MH*MH + std::complex<double>(0,MH*WH));
    std::complex<double> MH2c = sqrt(MS1*MS1 + std::complex<double>(0,MS1*WS1));
    double v=vev;
    double vs=svev;
    double vevsing = svev;
    CT_alpha = CT_alpha_pstr;
    CT_vs = CT_svev_ZEM_H2_pstr;
    return (2*CT_alpha*MB*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB)))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_b_b_L*MB*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MB*MB))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_Z_b_b_R*MB*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MB*MB))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_M_b*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_AD_AD*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_M_H1*MB*s*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(((MHSqcomp) - s)*((MHSqcomp) - s))) + (CT_M_H2*MB*s*(-s + 4*(MB*MB))*sin(2*alpha))/(svev*vev*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) - (CT_vs*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(svev*svev)) - (CT_v*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(vev*vev));

}


std::complex<double> DT::A1A1BbCTZ1(const double &cos_t, const double &s){
    double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4.* (MA1*MA1))*sqrt(s - 4.* (MB*MB)))/2. +  (MB*MB);
    double u = -s - t + MA1*MA1 + MA1*MA1 + MB*MB + MB*MB;
    std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);
    std::complex<double> MH1 = sqrt(MH*MH - std::complex<double>(0,MH*WH));
    std::complex<double> MH2 = sqrt(MS1*MS1 - std::complex<double>(0,MS1*WS1));
    std::complex<double> MH1c = sqrt(MH*MH + std::complex<double>(0,MH*WH));
    std::complex<double> MH2c = sqrt(MS1*MS1 + std::complex<double>(0,MS1*WS1));
    double v=vev;
    double vs=svev;
    double vevsing = svev;
    CT_alpha = CT_alpha_OS;
    CT_vs = CT_svev_ZEM_H1_OS;
    return (2*CT_alpha*MB*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB)))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_b_b_L*MB*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MB*MB))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_Z_b_b_R*MB*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MB*MB))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_M_b*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_AD_AD*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_M_H1*MB*s*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(((MHSqcomp) - s)*((MHSqcomp) - s))) + (CT_M_H2*MB*s*(-s + 4*(MB*MB))*sin(2*alpha))/(svev*vev*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) - (CT_vs*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(svev*svev)) - (CT_v*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(vev*vev));

}
std::complex<double> DT::A1A1BbCTOS1(const double &cos_t, const double &s){
    double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4.* (MA1*MA1))*sqrt(s - 4.* (MB*MB)))/2. +  (MB*MB);
    double u = -s - t + MA1*MA1 + MA1*MA1 + MB*MB + MB*MB;
    std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);
    std::complex<double> MH1 = sqrt(MH*MH - std::complex<double>(0,MH*WH));
    std::complex<double> MH2 = sqrt(MS1*MS1 - std::complex<double>(0,MS1*WS1));
    std::complex<double> MH1c = sqrt(MH*MH + std::complex<double>(0,MH*WH));
    std::complex<double> MH2c = sqrt(MS1*MS1 + std::complex<double>(0,MS1*WS1));
    double v=vev;
    double vs=svev;
    double vevsing = svev;
    CT_alpha = CT_alpha_OS;
    CT_vs = CT_svev_OS_H1_OS;
    return (2*CT_alpha*MB*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB)))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_b_b_L*MB*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MB*MB))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_Z_b_b_R*MB*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MB*MB))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_M_b*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_AD_AD*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_M_H1*MB*s*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(((MHSqcomp) - s)*((MHSqcomp) - s))) + (CT_M_H2*MB*s*(-s + 4*(MB*MB))*sin(2*alpha))/(svev*vev*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) - (CT_vs*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(svev*svev)) - (CT_v*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(vev*vev));

}
std::complex<double> DT::A1A1BbCTOS2(const double &cos_t, const double &s){
    double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4.* (MA1*MA1))*sqrt(s - 4.* (MB*MB)))/2. +  (MB*MB);
    double u = -s - t + MA1*MA1 + MA1*MA1 + MB*MB + MB*MB;
    std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);
    std::complex<double> MH1 = sqrt(MH*MH - std::complex<double>(0,MH*WH));
    std::complex<double> MH2 = sqrt(MS1*MS1 - std::complex<double>(0,MS1*WS1));
    std::complex<double> MH1c = sqrt(MH*MH + std::complex<double>(0,MH*WH));
    std::complex<double> MH2c = sqrt(MS1*MS1 + std::complex<double>(0,MS1*WS1));
    double v=vev;
    double vs=svev;
    double vevsing = svev;
    CT_alpha = CT_alpha_OS;
    CT_vs = CT_svev_OS_H2_OS;
    return (2*CT_alpha*MB*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB)))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_b_b_L*MB*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MB*MB))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_Z_b_b_R*MB*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MB*MB))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_M_b*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_AD_AD*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_M_H1*MB*s*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(((MHSqcomp) - s)*((MHSqcomp) - s))) + (CT_M_H2*MB*s*(-s + 4*(MB*MB))*sin(2*alpha))/(svev*vev*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) - (CT_vs*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(svev*svev)) - (CT_v*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(vev*vev));

}
std::complex<double> DT::A1A1BbCTOS22(const double &cos_t, const double &s){
    double t =  (MA1*MA1) + (-s + cos_t*sqrt(s - 4.* (MA1*MA1))*sqrt(s - 4.* (MB*MB)))/2. +  (MB*MB);
    double u = -s - t + MA1*MA1 + MA1*MA1 + MB*MB + MB*MB;
    std::complex<double> MHSqcomp = std::complex<double>(MH*MH,-MH*WH);
    std::complex<double> MS1Sqcomp = std::complex<double>(MS1*MS1,-MS1*WS1);
    std::complex<double> MH1 = sqrt(MH*MH - std::complex<double>(0,MH*WH));
    std::complex<double> MH2 = sqrt(MS1*MS1 - std::complex<double>(0,MS1*WS1));
    std::complex<double> MH1c = sqrt(MH*MH + std::complex<double>(0,MH*WH));
    std::complex<double> MH2c = sqrt(MS1*MS1 + std::complex<double>(0,MS1*WS1));
    double v=vev;
    double vs=svev;
    double vevsing = svev;
    CT_alpha = CT_alpha_pstr;
    CT_vs = CT_svev_OS_H2_pstr;
    return (2*CT_alpha*MB*s*cos(2*alpha)*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB)))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_b_b_L*MB*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MB*MB))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_Z_b_b_R*MB*s*cos(alpha)*((MHSqcomp) - (MS1Sqcomp))*(-s + 4*(MB*MB))*sin(alpha))/(svev*vev*(-s + (MHSqcomp))*(s - (MS1Sqcomp))) + (CT_M_b*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_Z_AD_AD*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))) + (CT_M_H1*MB*s*(s - 4*(MB*MB))*sin(2*alpha))/(svev*vev*(((MHSqcomp) - s)*((MHSqcomp) - s))) + (CT_M_H2*MB*s*(-s + 4*(MB*MB))*sin(2*alpha))/(svev*vev*(((MS1Sqcomp) - s)*((MS1Sqcomp) - s))) - (CT_vs*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(vev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(svev*svev)) - (CT_v*MB*s*((MHSqcomp) - (MS1Sqcomp))*(s - 4*(MB*MB))*sin(2*alpha))/(svev*(-s + (MHSqcomp))*(-s + (MS1Sqcomp))*(vev*vev));

}