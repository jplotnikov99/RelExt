#include "ntools.hpp"
#include "tactools.hpp"
#include "beq.hpp"
#include "../md_cpvdm/amp2s/allamp2s.hpp"

// linear interpolation (x data must be sorted for this to work)
double DT::linint(double x, double x1, double x2, double y1, double y2)
{
    return ((y2 - y1) / (x2 - x1)) * (x - x1) + y1;
}

// 3/8 simpson rule
double DT::simpson38(double l, double r, double s, std::function<double(double, double)> f)
{
    return (r - l) / 8 * (f(l, s) + 3 * f((2 * l + r) / 3, s) + 3 * f((l + 2 * r) / 3, s) + f(r, s));
}

// adaptive simpson
double DT::adaptive_simpson38(double l, double r, double s, double ans, std::function<double(double, double)> f, int depth)
{
    // represents how much precision you need
    double eps1 = 1e-5;
    if (depth > 8)
        eps1 = 1e-4;
    if (depth > 10)
        eps1 = 1e-3;
    if (depth > 12)
        eps1 = 1e-2;
    if (depth > 13)
        eps1 = 1e-1;
    if (depth > 14)
        return ans;
    double m = (l + r) / 2, x = simpson38(l, m, s, f), y = simpson38(m, r, s, f);
    //std::cout << x << "\n";
    if (fabs(((x + y) / ans - 1)) < eps1)
        return x + y;
    if (ans == 0)
        return 0;
    return adaptive_simpson38(l, m, s, x, f, depth + 1) + adaptive_simpson38(m, r, s, y, f, depth + 1);
}

// trapezoidal method for the calculation of sigv
double DT::trap(double lower, double upper, double xf, std::function<double(double, double)> f)
{
    return (upper - lower) / 2 * (sigv(lower, xf, f) + sigv(upper, xf, f));
}

// adaptive trapezoidal method for the calculation of sigv
double DT::adap_trap(double lower, double upper, double xf, double ans, std::function<double(double, double)> f, double eps, int depth)
{
    depth ++;
    double m = (lower + upper) / 2, x = trap(lower, m, xf, f), y = trap(m, upper, xf, f);
    if (ans == 0)
        return 0;
    if (depth == 12)
        return x + y;
    return (fabs((x + y) / ans - 1) < eps) ? (x + y) : adap_trap(lower, m, xf, x, f, eps, depth) + adap_trap(m, upper, xf, y, f, eps, depth);
}

//Kronrod abisscas [-1,1] intervall

    // 13 point gauss kronrod
    double kronx_13[13] = {
    -0.988703202612678858,
    - 0.932469514203152028,
    - 0.82137334086502794,
    - 0.661209386466264514,
    - 0.463118212475304612,
    - 0.238619186083196909,
    0,
    0.238619186083196909,
    0.463118212475304612,
    0.661209386466264514,
    0.82137334086502794,
    0.932469514203152028,
    0.988703202612678858 };


    // 31 point gauss kronrod
    double kronx_31[31] = {
    -0.9980022986934,
    -0.98799251802049,
    -0.96773907567914,
    -0.93727339240071,
    -0.89726453234408,
    -0.84820658341043,
    -0.79041850144247,
    -0.72441773136017,
    -0.6509967412974,
    -0.5709721726085,
    -0.48508186364024,
    -0.39415134707756,
    -0.29918000715317,
    -0.20119409399743,
    -0.10114206691872,
    0,
    0.10114206691872,
    0.20119409399743,
    0.29918000715317,
    0.39415134707756,
    0.48508186364024,
    0.5709721726085,
    0.65099674129742,
    0.72441773136017,
    0.79041850144247,
    0.84820658341043,
    0.89726453234408,
    0.93727339240071,
    0.96773907567914,
    0.98799251802049,
    0.9980022986934};

// gauss kronrod 31 point method to be used as quick estimation of tac
double DT::gauss_kronrod_31(double lower, double upper, double xf, std::function<double(double, double)> f)
{
    double i1, i2, h, y[31];
    h = (upper - lower) / 2;
    for (int i = 0; i < 31; i++)
    {
        y[i] = sigv((kronx_31[i] + 1) * h + lower, xf, f);
    }
    i1 = h * (0.005377479872923 * (y[0] + y[30]) + 0.01500794732932 * (y[1] + y[29]) + 0.02546084732672 * (y[2] + y[28]) + 0.03534636079138 * (y[3] + y[27]) + 0.04458975132476 * (y[4] + y[26]) + 0.05348152469093 * (y[5] + y[25]) + 0.06200956780067 * (y[6] + y[24]) + 0.06985412131873 * (y[7] + y[23]) + 0.07684968075772 * (y[8] + y[22]) + 0.08308050282313 * (y[9] + y[21]) + 0.08856444305621 * (y[10] + y[20]) + 0.093126598170825 * (y[11] + y[19]) + 0.09664272698362 * (y[12] + y[18]) + 0.0991735987218 * (y[13] + y[17]) + 0.10076984552388 * (y[14] + y[16]) + 0.10133000701479 * y[15]);
    i2 = h * (0.0307532419961 * (y[1] + y[29]) + 0.07036604748811 * (y[3] + y[27]) + 0.10715922046717 * (y[5] + y[25]) + 0.1395706779262 * (y[7] + y[23]) + 0.16626920581699 * (y[9] + y[21]) + 0.18616100001556 * (y[11] + y[19]) + 0.19843148532711 * (y[13] + y[17]) + 0.2025782419256 * y[15]);
    return (i1 + i2) / 2.;
}

// adaptive gauss kronrod 13 point method
double DT::h_adap_gauss_kronrod(double lower, double upper, double xf, std::function<double(double, double)> f, double est, int depth)
{
    double i1, i2, h, y[13], eps1;
    h = (upper - lower) / 2;
    for (int i = 0; i < 13; i++)
    {
        y[i] = sigv((kronx_13[i] + 1) * h + lower, xf, f);
    }
    i1 = h * (0.030396154 * (y[0] + y[12]) + 0.0836944404 * (y[1] + y[11]) + 0.1373206046 * (y[2] + y[10]) + 0.1810719943 * (y[3] + y[9]) + 0.2132096523 * (y[4] + y[8]) + 0.2337708641 * (y[5] + y[7]) + 0.2410725802 * y[6]);
    i2 = h * (0.171324492 * (y[1] + y[11]) + 0.360761573 * (y[3] + y[9]) + 0.4679139346 * (y[5] + y[7]));
    eps1 = 1e-7 * est / i1 * pow(2, depth);
    if (i1 == 0)
        return 0.;
    if (depth > 12)
        return i1;
    if (fabs(i2 / i1 - 1) < eps1 || eps1 > 1)
        return i1;
    double m = (lower + upper) / 2;
    //std::cout << i1 << std::endl;
    return h_adap_gauss_kronrod(lower, m, xf, f, est, depth + 1) + h_adap_gauss_kronrod(m, upper, xf, f, est, depth + 1);
}

// secant method implementation to find a root between x1 and x2
double DT::secant_method(double x0, double x1, double tolerance, int maxiter, procinfos *proc, std::string ch_str)
{
    // Initialize the number of iterations
    int iterations = 0;
    double x2;
    double y1;
    double y0 = fstart(x0, proc, ch_str);
    // Loop until the tolerance is reached
    while (fabs(x1 - x0) > tolerance)
    {

        if (iterations > maxiter)
            return x2;
        // Calculate the new value of x
        y1 = fstart(x1, proc, ch_str);

        x2 = x1 - (x1 - x0) * y1 / (y1 - y0);

        // Update the values of x0, x1 and y0
        x0 = x1;
        x1 = x2;
        //std::cout << x0 << "    " << x1 << "\n";
        y0 = y1;
        // Increment the number of iterations
        iterations++;
    }

    // Return the root of the function
    return x2;
}

// four point runge kutta method needed to solve Boltzmann Eq.
void DT::rk4(double &x, double &y, double h, procinfos *proc, std::string ch_str)
{
    // x0:= Initial value of x, y0:= Initial value of y, x :=  value where y should be computed, h := stepsize
    double k1, k2, k3, k4;
    k1 = h * boltzmann_eq(y, x, proc, ch_str);
    x = x + h / 2;
    k2 = h * boltzmann_eq((y + k1 / 2), x, proc, ch_str);
    k3 = h * boltzmann_eq((y + k2 / 2), x, proc, ch_str);
    x = x + h / 2;
    k4 = h * boltzmann_eq((y + k3), x, proc, ch_str);
    y += (k1 + 2 * k2 + 2 * k3 + k4) / 6;
}