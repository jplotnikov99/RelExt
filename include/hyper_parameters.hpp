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
    extern double secant_eps;
    extern double rk4_eps;
    extern size_t secant_maxiter;

    // Options
    extern bool iserror;
} // namespace DT
