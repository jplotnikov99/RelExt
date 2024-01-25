#pragma once

#include <cmath>
#include <functional>
#include <string>
#include "vars.hpp"


namespace DT{


	// linear interpolation (x data must be sorted for this to work)
	double linint(double x, double x1, double x2, double y1, double y2); 

    // 3/8 simpson rule
    double simpson38(double l, double r, double s, std::function<double(double, double)> f);

    // adaptive simpson
    double adaptive_simpson38(double l, double r, double s, double ans, std::function<double(double, double)> f, int depth = 0);

    // trapezoidal method for the calculation of sigv
    double trap(double lower, double upper, double xf, std::function<double(double, double)> f);

    // adaptive trapezoidal method for the calculation of sigv 
    double adap_trap(double lower, double upper, double xf, double ans, std::function<double(double, double)> f, double eps, int depth = 0);

    // gauss kronrod 31 point method to be used as quick estimation of tac
    double gauss_kronrod_31(double lower, double upper, double xf, std::function<double(double, double)> f);

    // adaptive gauss kronrod 13 point method
    double h_adap_gauss_kronrod(double lower, double upper, double xf, std::function<double(double, double)> f, double est, int depth = 0);

    // secant method implementation to find a root between x1 and x2
    double secant_method(double x0, double x1, double tolerance, int maxiter, procinfos *proc, std::string ch_str = "");

	//four point runge kutta method needed to solve Boltzmann Eq.
    void rk4(double& x, double& y, double h, procinfos *proc, std::string ch_str = "");
}