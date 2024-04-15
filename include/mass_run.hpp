#pragma once

#include <iostream>
#include <cmath>
#include <vector>

namespace DT
{
    class Mrun
    {
    private:
        int nloop = 3;
        double acc = 1e-10;
        double alsmz = 0.118;
        double amz = 91.1876;
        double ams = 0.095;
        double amt = 172.5;
        double amt0 = 3.0e8;
        double amc = 1.4203295370482341;
        double amb = 4.8303295370482342;
        double lambda = 0.;
        std::vector<double> vxlb1 = {0,0,0,0,0,0};
        std::vector<double> vxlb2 = {0,0,0,0,0,0};
        std::vector<double> vxlb3 = {0,0,0,0,0,0};
        int LOOP = 3; 
        int LOOP2 = 1; 
        int LOOP3 = 1;
        const int NN = 8;
        const double ZETA3 = 1.202056903159594;
        int NNLO = 1;
        double amsb;
        double amcb = 0.986; 
        //double ambb = 4.18;

    public:
        int N0, NalphaS;
        Mrun();
        double B(size_t order, int NF);
        double als(size_t order, int NF, double X, double XLB);
        double XX(size_t order, int NF);
        double xit(double a, double b, double x);
        double xit2(double a, double b, double c, double x);
        double xitla(int no, double alp, int isc, double scale);
        double xiter(double q, double xlb1, int NF1, double xlb, int NF2);
        double xiter3(double q, double xlb1, int NF1, double xlb, int NF2);
        void alsini(size_t no);
        double alphaS(double Q, int N);
        double TRAN(double X, double XK, double XK2);
        double NB(size_t order, int NF);
        double G(size_t order, int NF);
        double C(size_t order, int NF);
        double CQ(double X, int NF);
        double RunM(double q, int NF0, size_t no, int iif);
        void calc_quark_masses(const double q, double *masses[], double &aS);
    };

}