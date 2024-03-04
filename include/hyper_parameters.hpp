#pragma once

namespace DT
{
    //TAC parameters
    const double simpson_eps = 1e-5;
    const double beps_eps = 1e-6;
    const double trapezoidal_eps = 1e-4;
    const double gauss_kronrod_eps = 1e-7;

    // Beq solver parameters
    const double secant_eps = 0.01;
    const double rk4_eps = 1e-6;
    const size_t secant_maxiter = 100;
} // namespace DT
