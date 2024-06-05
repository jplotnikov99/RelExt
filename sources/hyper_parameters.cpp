#include "hyper_parameters.hpp"

namespace DT
{
    // SM parameters
    double ms_pole = 0.095;
    double mc_pole = 1.4203295370482341;
    double mb_pole = 4.8303295370482342;
    double mt_pole = 172.5;

    double simpson_eps = 1e-5;
    double beps_eps = 1e-6;
    double trapezoidal_eps = 1e-4;
    double gauss_kronrod_eps = 1e-7;

    double xtoday_FO = 1e6;
    double xtoday_FI = 100;
    double x_reheating = 0.0001;
    double secant_eps = 0.01;
    double rk4_eps = 1e-6;
    size_t secant_maxiter = 100;

    double vanguard_step_size = 0.5;
    double descent_learning_rate = 0.1;
    size_t max_N_bisections = 50;
    double random_walk_rate = 0.01;
}