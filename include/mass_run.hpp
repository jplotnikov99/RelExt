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
        double alsmz = 0.118;
        double amz = 91.1876;
        double ams = 0.095;
        double amt = 172.5;
        double amt0 = 3.0e8;
        double amc = 1.4203295370482341;
        double amb = 4.8303295370482342;
        double lambda = 0.;
        std::vector<double> vxlb3 = {0,0,0,0,0,0};
        int LOOP = 3; 
        int LOOP2 = 1; 
        int LOOP3 = 1;
        const int NN = 6;
        const double ZETA3 = 1.202056903159594;
        int NNLO = 1;
        double amcb = 0.986; 

    public:
        Mrun();
        double B(size_t order, int NF);
        double als(int NF, double X, double XLB);
        double XX(size_t order, int NF);
        double xit2(double a, double b, double c, double x);
        double xitla(double alp, int isc, double scale);
        double xiter3(double q, double xlb1, int NF1, double xlb, int NF2);
        void alsini();
        double alphaS(double Q);
        double TRAN(double X, double XK, double XK2);
        double NB(size_t order, int NF);
        double G(size_t order, int NF);
        double C(size_t order, int NF);
        double CQ(double X, int NF);
        double RunM(double q, int NF0, int iif);
        void calc_quark_masses(const double q, double *masses[], double &aS);
    };

}