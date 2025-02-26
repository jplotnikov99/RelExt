#pragma once
#include <memory>
#include <vector>
#include <iostream>
#include "beqs.h"
#include "parameters.h"

class BeqSolver
    {
    private:
        std::unique_ptr<Beqs> beq;
        bool FOapprox = true;
        bool reject = false;
        double errold = 1e-4;

    public:
        BeqSolver();
        double yeq(const double &x);

        // secant method implementation to find a root between x1 and x2
        double secant_method(double x0, double x1);

        double dopr5(double &x, double &y, const double &h);

        // step size controller for the next dopr5 iteration
        double controller(const double &hnow, const double &err);

        // solves 1D boltzmann-eq using the Dormand-Prince-Method
        void adap_dopr5(const double &xtoday, double &x, double &y, double h = 1e-3);

        double adap_simpson38(const double l, const double r, double *y, const double &est);

        double icoll(const double xf, const double x0);

        // Solution for freeze-out approximation
        double calc_yield(const double &xtoday, double &x, double &y, const bool appr = true);

        ~BeqSolver(){};
    };