#include "utils.hpp"

namespace DT {

bool heaviDecays(const double &m1, const double &m2, const double &m3) {
    return (m1 > m2 + m3);
}

double kaellen(const double x, const double y, const double z) {
    return (x - y - z) * (x - y - z) - 4 * y * z;
}

double flux(const double &s, const double &m1, const double &m2,
            const double &m3, const double &m4) {
    const double a = m1 + m2, b = m1 - m2, c = m3 + m4, d = m3 - m4;
    return sqrt((s - a * a) * (s - b * b) * (s - c * c) * (s - d * d));
}

double besselK2(const double &x) {
    static const double c0 = 1.984;
    double y = 1. / x;
    if (x > 5.) {
        return 1.2533141373155 * exp(-x) / sqrt(x) *
               (1. +
                1.875 * y *
                    (1. +
                     0.4375 * y *
                         (1. - 0.375 * y *
                                   (1. - 1.03125 * y *
                                             (1. - 1.625 * y *
                                                       (1. - 2.1875 * y))))));
    } else {
        return exp(-x) * (1. + 2.627 * y + 2. * y * y) /
               pow(0.033 * pow(x, c0 / 5) - 0.102 * pow(x, c0 / 4) +
                       0.113 * pow(x, c0 / 3) + 1.162 * pow(x, c0 / 2) +
                       pow(2. * x / M_PI, c0) + 1.,
                   1. / (2. * c0));
    }
}

double polK1(const double &x) {
    double y = 1 / x;
    return 1.2533141373155 / sqrt(x) *
           (1 + 0.375 * y *
                    (1 - 0.31250 * y *
                             (1 - 0.875 * y *
                                      (1 - 1.40625 * y *
                                               (1 - 1.925 * y *
                                                        (1 - 2.4375 * y))))));
}

double polK2(const double &x) {
    double y = 1 / x;
    return 1.2533141373155 / sqrt(x) *
           (1 + 1.875 * y *
                    (1 + 0.4375 * y *
                             (1 - 0.375 * y *
                                      (1 - 1.03125 * y *
                                               (1 - 1.625 * y *
                                                        (1 - 2.1875 * y))))));
}

double Li2(const double x)
{
  const double PI  = 3.1415926535897932;
  const double P[] = {0.9999999999999999502e+0,
                      -2.6883926818565423430e+0,
                      2.6477222699473109692e+0,
                      -1.1538559607887416355e+0,
                      2.0886077795020607837e-1,
                      -1.0859777134152463084e-2};
  const double Q[] = {1.0000000000000000000e+0,
                      -2.9383926818565635485e+0,
                      3.2712093293018635389e+0,
                      -1.7076702173954289421e+0,
                      4.1596017228400603836e-1,
                      -3.9801343754084482956e-2,
                      8.2743668974466659035e-4};

  double y = 0, r = 0, s = 1;

  // transform to [0, 1/2]
  if (x < -1)
  {
    const double l = std::log(1 - x);
    y              = 1 / (1 - x);
    r              = -PI * PI / 6 + l * (0.5 * l - std::log(-x));
    s              = 1;
  }
  else if (x == -1)
  {
    return -PI * PI / 12;
  }
  else if (x < 0)
  {
    const double l = std::log1p(-x);
    y              = x / (x - 1);
    r              = -0.5 * l * l;
    s              = -1;
  }
  else if (x == 0)
  {
    return 0;
  }
  else if (x < 0.5)
  {
    y = x;
    r = 0;
    s = 1;
  }
  else if (x < 1)
  {
    y = 1 - x;
    r = PI * PI / 6 - std::log(x) * std::log1p(-x);
    s = -1;
  }
  else if (x == 1)
  {
    return PI * PI / 6;
  }
  else if (x < 2)
  {
    const double l = std::log(x);
    y              = 1 - 1 / x;
    r              = PI * PI / 6 - l * (std::log(y) + 0.5 * l);
    s              = 1;
  }
  else
  {
    const double l = std::log(x);
    y              = 1 / x;
    r              = PI * PI / 3 - 0.5 * l * l;
    s              = -1;
  }

  const double y2 = y * y;
  const double y4 = y2 * y2;
  const double p =
      P[0] + y * P[1] + y2 * (P[2] + y * P[3]) + y4 * (P[4] + y * P[5]);
  const double q = Q[0] + y * Q[1] + y2 * (Q[2] + y * Q[3]) +
                   y4 * (Q[4] + y * Q[5] + y2 * Q[6]);

  return r + s * y * p / q;
}

void append_to_vstring(vstring &a, const vstring &b) {
    for (auto it : b) {
        a.push_back(it);
    }
}

void check_arguments_number(const bool exact, const size_t needs,
                            const size_t has, const std::string &func) {
    if (exact) {
        if ((needs + 1) != has) {
            std::cout << func << " has the wrong number of arguments.\n";
            exit(1);
        }
    } else {
        if ((needs + 1) > has) {
            std::cout << func << " has the wrong number of arguments.\n";
            exit(1);
        }
    }
}

double linint(const double x, const double x1, const double x2, const double y1,
              const double y2) {
    return ((y2 - y1) / (x2 - x1)) * (x - x1) + y1;
}

double simpson_est(const double l, const double r, double *f) {
    return (r - l) / 24 *
           (f[0] + f[9] + 3 * (f[1] + f[2] + f[4] + f[5] + f[7] + f[8]) +
            2 * (f[3] * f[6]));
}

double generate_random(const double a, const double b) {
    double random = rand();
    random /= (double)RAND_MAX;
    return a + (b - a) * random;
}

}  // namespace DT