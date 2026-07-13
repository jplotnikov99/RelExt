#include "numerical/vegas.hpp"
#include <cstdio>
#include <iostream>
#include <array>
#include <cmath>
#include "../md_cxsm/model.hpp"

namespace DT {

double kall(double x, double y, double z) {
    return sqrt(pow(x,4) + pow(y,4) + pow(z,4)
              - 2*pow(x,2)*pow(y,2)
              - 2*pow(x,2)*pow(z,2)
              - 2*pow(y,2)*pow(z,2));
}

double Emax(const double &s, const double m) {
    using namespace PAR;
    double lam = s*s - 4.*m*m*s;
    if (lam <= 0.) return 0.;
    return sqrt(lam / (4.*s));
}

int integrand_AAwW(const int *, const cubareal *x, const int *, cubareal ff[], void *params) {
    using namespace PAR;
    double s        = *(double*)params;
    double Emax_val = Emax(s, MW);
    if (Emax_val <= 0.) { ff[0] = 0.; return 0; }
    double E3     = Emax_val * x[0];
    double theta2 = M_PI     * x[1];
    double val = 4.*M_PI*M_PI * Emax_val * A1A1WwReal(E3, theta2, M_PI_2, 0., s);
    ff[0] = std::isfinite(val) ? val : 0.;   
    return 0;
}

int integrand_AAtaTA(const int *, const cubareal *x, const int *, cubareal ff[], void *params) {
    using namespace PAR;
    double s        = *(double*)params;
    double Emax_val = Emax(s, MTA);
    if (Emax_val <= 0.) { ff[0] = 0.; return 0; }
    double E3     = Emax_val * x[0];
    double theta2 = M_PI     * x[1];
    double val = 4.*M_PI*M_PI * Emax_val * A1A1TataReal(E3, theta2, M_PI_2, 0., s);
    ff[0] = std::isfinite(val) ? val : 0.;
    return 0;
}

int integrand_AAbB(const int*, const cubareal *x, const int*, cubareal ff[], void *params) {
    using namespace PAR;
    double s        = *(double*)params;
    double Emax_val = Emax(s, MB);
    if (Emax_val <= 0.) { ff[0] = 0.; return 0; }
    double E3     = Emax_val * x[0];
    double theta2 = M_PI     * x[1];
    double val = 4.*M_PI*M_PI * Emax_val * A1A1BbReal(E3, theta2, M_PI_2, 0., s);
    ff[0] = std::isfinite(val) ? val : 0.;
    return 0;
}

int integrand_AAbBQCD(const int*, const cubareal *x, const int*, cubareal ff[], void *params) {
    using namespace PAR;
    double s        = *(double*)params;
    double Emax_val = Emax(s, MB);
    if (Emax_val <= 0.) { ff[0] = 0.; return 0; }
    double E3     = Emax_val * x[0];
    double theta2 = M_PI     * x[1];
    double val = 4.*M_PI*M_PI * Emax_val * A1A1BbRealQCD(E3, theta2, M_PI_2, 0., s);
    ff[0] = std::isfinite(val) ? val : 0.;
    return 0;
}

int integrand_AAtT(const int *, const cubareal *x, const int *, cubareal ff[], void *params) {
    using namespace PAR;
    double s        = *(double*)params;
    double Emax_val = Emax(s, MT);
    if (Emax_val <= 0.) { ff[0] = 0.; return 0; }
    double E3     = Emax_val * x[0];
    double theta2 = M_PI     * x[1];
    double val = 4.*M_PI*M_PI * Emax_val * A1A1TtReal(E3, theta2, M_PI_2, 0., s);
    ff[0] = std::isfinite(val) ? val : 0.;
    return 0;
}

int integrand_AAtTQCD(const int *, const cubareal *x, const int *, cubareal ff[], void *params) {
    using namespace PAR;
    double s        = *(double*)params;
    double Emax_val = Emax(s, MT);
    if (Emax_val <= 0.) { ff[0] = 0.; return 0; }
    double E3     = Emax_val * x[0];
    double theta2 = M_PI     * x[1];
    double val = 4.*M_PI*M_PI * Emax_val * A1A1TtRealQCD(E3, theta2, M_PI_2, 0., s);
    ff[0] = std::isfinite(val) ? val : 0.;
    return 0;
}

double vegas_real(CubaIntegrand integrand, double s_value) {
    const int ndim      = 2;
    const int minpoints = 50;     
    const int maxpoints = 500;    
    const int verbose   = 0;

    setenv("CUBACORES", "1", 1);

    int neval, fail;
    double real_result[NCOMP], real_error[NCOMP], real_prob[NCOMP];

    {
        const int cuba_flags = verbose
                             | (0 << 2) | (0 << 3) | (1 << 4) | (0 << 5);
        Vegas(ndim, NCOMP,
              integrand, &s_value, NVEC,
              EPSREL, EPSABS, cuba_flags, SEED,
              minpoints, 2 * minpoints,
              minpoints / 2, minpoints / 4,
              NBATCHREAL, 0, nullptr, nullptr,
              &neval, &fail,
              real_result, real_error, real_prob);
    }

    {
        const int cuba_flags = verbose
                             | (1 << 2) | (0 << 3) | (1 << 4) | (1 << 5);
        Vegas(ndim, NCOMP,
              integrand, &s_value, NVEC,
              EPSREL, EPSABS, cuba_flags, SEED,
              minpoints, 3 * maxpoints,
              maxpoints, maxpoints / 4,
              NBATCHREAL, 1, nullptr, nullptr,
              &neval, &fail,
              real_result, real_error, real_prob);
    }

    return real_result[0];
}

} // namespace DT