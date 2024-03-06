#include "hyper_parameters.hpp"

namespace DT
{
    double simpson_eps = 1e-5;
    double beps_eps = 1e-6;
    double trapezoidal_eps = 1e-4;
    double gauss_kronrod_eps = 1e-7;

    double secant_eps = 0.01;
    double rk4_eps = 1e-6;
    size_t secant_maxiter = 100;

    bool iserror = false;
}