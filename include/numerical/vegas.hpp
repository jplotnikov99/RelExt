#include "cuba.h"
namespace DT {
#define NCOMP      1
#define NVEC       1
#define EPSREL     1e-3
#define EPSABS     1e-12
#define SEED       0
#define NBATCHREAL 1000
#define NBATCHTREE 100
#define NBATCHVIRTUAL 100
#define SPIN NULL
#define TREE false

double kall(double x, double y, double z);
double Emax(const double &s, const double m);

using CubaIntegrand = int (*)(const int*, const cubareal*,
                               const int*, cubareal*, void*);

int integrand_AAwW   (const int *, const cubareal *x, const int *, cubareal ff[], void *params);
int integrand_AAtaTA (const int *, const cubareal *x, const int *, cubareal ff[], void *params);
int integrand_AAbB   (const int *, const cubareal *x, const int *, cubareal ff[], void *params);
int integrand_AAtT   (const int *, const cubareal *x, const int *, cubareal ff[], void *params);
int integrand_AAbBQCD(const int *, const cubareal *x, const int *, cubareal ff[], void *params);
int integrand_AAtTQCD(const int *, const cubareal *x, const int *, cubareal ff[], void *params);

double vegas_real(CubaIntegrand integrand, double s_value);

} // namespace DT