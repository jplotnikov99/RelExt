#pragma once
#include <iostream>
namespace DT
{
    //TAC parameters
    extern double simpson_eps;
    extern double beps_eps;
    extern double trapezoidal_eps;
    extern double gauss_kronrod_eps;

    // Beq solver parameters
    extern double xtoday_FO;
    extern double xtoday_FI;
    extern double x_reheating;
    extern double secant_eps;
    extern double rk4_eps;
    extern size_t secant_maxiter;
    
    // parameter search parameters
    extern double vanguard_step_size;
    extern double descent_learning_rate;
    extern size_t max_N_bisections;
} // namespace DT
