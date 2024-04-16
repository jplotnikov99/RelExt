#pragma once

#include <iostream>
#include <cmath>
#include <vector>

namespace DT
{
    class Mrun
    {
    private:
        double acc = 1e-10;
        const double alsmz = 0.118;
        const double amz = 91.1876;
        const double ams = 0.095;
        const double amt = 172.5;
        const double amt0 = 3.0e8;
        const double amc = 1.4203295370482341;
        const double amb = 4.8303295370482342;
        double lambda = 0.;
        std::vector<double> vxlb3 = {0, 0, 0, 0, 0, 0};
        const int LOOP = 3;
        const int LOOP2 = 1;
        const int LOOP3 = 1;
        const int NN = 6;
        const double ZETA3 = 1.202056903159594;
        int NNLO = 1;
        double amcb = 0.986;

    public:
        Mrun();
        double B(const size_t order, int NF);
        double als(const int NF, double X, const double XLB);
        double XX(const size_t order, const int NF);
        double xit2(const double a, const double b, const double c, const double x);
        double xitla(const double alp, const int isc, const double scale);
        double xiter3(const double q, const double xlb1, const int NF1, const double xlb, const int NF2);
        void alsini();
        double alphaS(const double Q);
        double TRAN(const double X, const double XK, const double XK2);
        double NB(const size_t order, const int NF);
        double G(const size_t order, const int NF);
        double C(const size_t order, const int NF);
        double CQ(const double X, const int NF);
        double RunM(const double q, const int NF0, const int iif);
        double delQCD(const double NF, const double aS);
        void calc_quark_masses(const double q, double *masses[], double &aS);
    };

}