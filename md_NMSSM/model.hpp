///////////////////CODE GENERATED VIA MATHEMATICA///////////////////

#pragma once

#include <cmath>
#include <complex>

#define SUM1(arg, i, ni) \
    for (size_t i = 0; i < ni; i++) res += arg;
#define SUM2(arg, i, ni, j, nj)     \
    for (size_t i = 0; i < ni; i++) \
        for (size_t j = 0; j < nj; j++) res += arg;

namespace DT {
namespace PAR {
extern std::complex<double> I;
extern std::complex<double> We1;
extern std::complex<double> We2;
extern std::complex<double> We3;
extern std::complex<double> Wd1;
extern std::complex<double> Wd2;
extern std::complex<double> Wd3;
extern std::complex<double> Wu1;
extern std::complex<double> Wu2;
extern std::complex<double> Wu3;
extern std::complex<double> Maux;
extern std::complex<double> sqrt2;
extern std::complex<double> Pi;
extern std::complex<double> Q;
extern std::complex<double> alfSMZ;
extern std::complex<double> aS;
extern std::complex<double> aEWinv;
extern std::complex<double> Gf;
extern std::complex<double> rd;
extern std::complex<double> Msd[6];
extern std::complex<double> Msu[6];
extern std::complex<double> Msv[3];
extern std::complex<double> Mse[5];
extern std::complex<double> Mh[6];
extern std::complex<double> MHm2;
extern std::complex<double> MZ;
extern std::complex<double> Mgo;
extern std::complex<double> MN[5];
extern std::complex<double> MC[2];
extern std::complex<double> Me[3];
extern std::complex<double> Md[3];
extern std::complex<double> Mu[3];
extern std::complex<double> Yd[3][3];
extern std::complex<double> Td[3][3];
extern std::complex<double> Ye[3][3];
extern std::complex<double> Te[3][3];
extern std::complex<double> lam;
extern std::complex<double> Tlam;
extern std::complex<double> kap;
extern std::complex<double> Tk;
extern std::complex<double> Yu[3][3];
extern std::complex<double> Tu[3][3];
extern std::complex<double> eta;
extern std::complex<double> etaS;
extern std::complex<double> PhiUL;
extern std::complex<double> PhiUR;
extern std::complex<double> vS;
extern std::complex<double> pG;
extern std::complex<double> ZD[6][6];
extern std::complex<double> ZU[6][6];
extern std::complex<double> ZV[3][3];
extern std::complex<double> ZE[6][6];
extern std::complex<double> ZH[6][6];
extern std::complex<double> ZP[2][2];
extern std::complex<double> ZN[5][5];
extern std::complex<double> UM[2][2];
extern std::complex<double> UP[2][2];
extern std::complex<double> ZEL[3][4];
extern std::complex<double> ZER[3][3];
extern std::complex<double> ZDL[3][3];
extern std::complex<double> ZDR[3][3];
extern std::complex<double> ZUL[3][3];
extern std::complex<double> ZUR[3][3];
extern std::complex<double> TBeta;
extern std::complex<double> HPP1;
extern std::complex<double> HGG1;
extern std::complex<double> HPP2;
extern std::complex<double> HGG2;
extern std::complex<double> HPP3;
extern std::complex<double> HGG3;
extern std::complex<double> HPP4;
extern std::complex<double> HGG4;
extern std::complex<double> HPP5;
extern std::complex<double> HGG5;
extern std::complex<double> HPP6;
extern std::complex<double> HGG6;
extern std::complex<double> QCDok;
extern std::complex<double> g3;
extern std::complex<double> el;
extern std::complex<double> MWm;
extern std::complex<double> TW;
extern std::complex<double> STW;
extern std::complex<double> CTW;
extern std::complex<double> TTW;
extern std::complex<double> g1;
extern std::complex<double> g2;
extern std::complex<double> v;
extern std::complex<double> vd;
extern std::complex<double> vu;
extern std::complex<double> coup1[6];
extern std::complex<double> coup2[6];
extern std::complex<double> coup3[6];
extern std::complex<double> coup4[5];
extern std::complex<double> coup5[5];
extern std::complex<double> coup6[6];
extern std::complex<double> coup7;
extern std::complex<double> coup8;
extern std::complex<double> coup9;
extern std::complex<double> coup10[5];
extern std::complex<double> coup11[5];

}  // namespace PAR
double N1N1h2h2(const double &cos_t, const double &s);
double N1N1h2h2fl(const double &cos_t, const double &s);
double N1N1h2h3(const double &cos_t, const double &s);
double N1N1h2h3fl(const double &cos_t, const double &s);
}  // namespace DT
