///////////////////CODE GENERATED VIA MATHEMATICA///////////////////

#include "../model.hpp"
#include "general_model.hpp"
namespace DT {
void ModelInfo::load_parameters() {
    using namespace PAR;
    // QCDok = initQCD(alfSMZ + I * Mu2 + I * Md3 + I * Mu3);
    // g3 = sqrt(alphaQCD(Q) * 4 * 3.1415927) * one(QCDok);
    MWm = 80.358391499999996;
    TW = asin(sqrt(1. - MWm * MWm / (MZ * MZ)));
    STW = sin(TW);
    CTW = cos(TW);
    TTW = tan(TW);
    Tlam = lam*Al;
    Tk = kap*Ak;
    vS = mueff*sqrt(2)/lam;
    g1 = 0.35561563905519322;
    g2 = 0.66301513441420956;
    PhiUL = std::exp(I / 2. * eta);
    PhiUR = std::exp(-I / 2. * eta);
    v = 2. * MWm / g2;
    vd = v / sqrt(1. + TBeta * TBeta);
    vu = (TBeta * v) / sqrt(1. + TBeta * TBeta);

 
    ZP[0][0] = -0.21961578041644098;
    ZP[0][1] = 0.97558644362869129;
    ZP[1][0] = 0.97558644362869129;
    ZP[1][1] = 0.21961578041644098;

    ZV[0][0] = 1.;
    ZV[0][1] = 0.;
    ZV[0][2] = 0.;
    ZV[1][0] = 0.;
    ZV[1][1] = 1.;
    ZV[1][2] = 0.;
    ZV[2][0] = 0.;
    ZV[2][1] = 0.;
    ZV[2][2] = 1.;

    ZEL[0][0] = 1.;
    ZEL[0][1] = 0.;
    ZEL[0][2] = 0.;
    ZEL[1][0] = 0.;
    ZEL[1][1] = 1.;
    ZEL[1][2] = 0.;
    ZEL[2][0] = 0.;
    ZEL[2][1] = 0.;
    ZEL[2][2] = 1.;

    ZER[0][0] = 1.;
    ZER[0][1] = 0.;
    ZER[0][2] = 0.;
    ZER[1][0] = 0.;
    ZER[1][1] = 1.;
    ZER[1][2] = 0.;
    ZER[2][0] = 0.;
    ZER[2][1] = 0.;
    ZER[2][2] = 1.;

    ZUL[0][0] = 1.;
    ZUL[0][1] = 0.;
    ZUL[0][2] = 0.;
    ZUL[1][0] = 0.;
    ZUL[1][1] = 1.;
    ZUL[1][2] = 0.;
    ZUL[2][0] = 0.;
    ZUL[2][1] = 0.;
    ZUL[2][2] = 1.;

    ZUR[0][0] = 1.;
    ZUR[0][1] = 0.;
    ZUR[1][0] = 0.;
    ZUR[1][1] = 1.;
    ZUR[1][2] = 0.;
    ZUR[2][0] = 0.;
    ZUR[2][1] = 0.;
    ZUR[2][2] = 1.;

    ZDL[0][0] = 1.;
    ZDL[0][1] = 0.;
    ZDL[0][2] = 0.;
    ZDL[1][0] = 0.;
    ZDL[1][1] = 1.;
    ZDL[1][2] = 0.;
    ZDL[2][0] = 0.;
    ZDL[2][1] = 0.;
    ZDL[2][2] = 1.;

    ZDR[0][0] = 1.;
    ZDR[0][1] = 0.;
    ZDR[0][2] = 0.;
    ZDR[1][0] = 0.;
    ZDR[1][1] = 1.;
    ZDR[1][2] = 0.;
    ZDR[2][0] = 0.;
    ZDR[2][1] = 0.;
    ZDR[2][2] = 1.;

  

    Ye[0][0] = Me[0] * sqrt(2) / vd;
    Ye[0][1] = 0.;
    Ye[0][2] = 0.;
    Ye[1][0] = 0.;
    Ye[1][1] = Me[1] * sqrt(2) / vd;
    Ye[1][2] = 0.;
    Ye[2][0] = 0.;
    Ye[2][1] = 0.;
    Ye[2][2] = Me[2] * sqrt(2) / vd;

    Yu[0][0] = Mu[0] * sqrt(2) / vu;
    Yu[0][1] = 0.;
    Yu[0][2] = 0.;
    Yu[1][0] = 0.;
    Yu[1][1] = Mu[1] * sqrt(2) / vu;
    Yu[1][2] = 0.;
    Yu[2][0] = 0.;
    Yu[2][1] = 0.;
    Yu[2][2] = Mu[2] * sqrt(2) / vu;

    Yd[0][0] = Md[0] * sqrt(2) / vd;
    Yd[0][1] = 0.;
    Yd[0][2] = 0.;
    Yd[1][0] = 0.;
    Yd[1][1] = Md[1] * sqrt(2) / vd;
    Yd[1][2] = 0.;
    Yd[2][0] = 0.;
    Yd[2][1] = 0.;
    Yd[2][2] = Md[2] * sqrt(2) / vd;
}
}  // namespace DT
