#pragma once

#include <iostream>
#include <cmath>
#include <vector>

namespace DT
{
    class Mrun
    {
    private:
        /*const*/ int nloop = 3;
        /*const*/ double acc = 1e-10;
        /*const*/ double alsmz = 0.118;
        /*const*/ double amz = 91.1876;
        /*const*/ double ams = 0.095;
        /*const*/ double amt = 172.5;
        /*const*/ double amc = 1.4314129666239026;
        /*const*/ double amb = 4.8414129744097592;
        double lambda = 0.;
        std::vector<double> vxlb1 = {0,0,0,0,0,0};
        std::vector<double> vxlb2 = {0,0,0,0,0,0};
        std::vector<double> vxlb3 = {0,0,0,0,0,0};
        //rodrigo
        int LOOP  = 0;
        int LOOP2 = 0;
        int LOOP3 = 0;
        const int NN = 8;
        const double ZETA3 = 1.202056903159594;
        int NNLO = 0; // hdecay flag
        double amsb, amcb, ambb;
        //int N0, NalphaS;


    public:
        int N0, NalphaS;
        Mrun();
        double B(size_t order, int NF);
        double als(size_t order, int NF, double X, double XLB);
        double XX(size_t order, int NF);
        double xit(double a, double b, double x);
        double xit2(double a, double b, double c, double x);
        double xitla(int no, double alp);
        double xiter(double q, double xlb1, int NF1, double xlb, int NF2);
        double xiter3(double q, double xlb1, int NF1, double xlb, int NF2);
        void alsini(size_t no);
        //rodrigo
        double alphaS(double Q, int N);
        double TRAN(double X, double XK, double XK2);
        double NB(size_t order, int NF);
        double G(size_t order, int NF);
        double C(size_t order, int NF);
        double CQ(double X, int NF);
        double RunM(double q, int NF0, size_t no);
    };

}