#include "hyper_parameters.hpp"

namespace DT
{
    double simpson_eps = 1e-5;
    double beps_eps = 1e-6;
    double trapezoidal_eps = 1e-4;
    double gauss_kronrod_eps = 1e-7;

    double xtoday_FO = 1e7;
    double xtoday_FI = 100;
    double x_reheating = 0.0001;
    double secant_eps = 0.01;
    double rk4_eps = 1e-6;
    size_t secant_maxiter = 100;

    double vanguard_step_size = 0.5;
    double descent_learning_rate = 0.1;
    size_t max_N_bisections = 50;
}