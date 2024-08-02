#include "utils.hpp"

namespace DT {

bool heaviDecays(const double &m1, const double &m2, const double &m3) {
    return (m1 > m2 + m3);
}

bool heavi(const double &s, const double &m1, const double &m2) {
    return ((m1 + m2) * (m1 + m2) - s <= 0);
}

double kaellen(const double x, const double y, const double z) {
    return (x - y - z) * (x - y - z) - 4 * y * z;
}

double flux(const double &s, const double &m1, const double &m2,
            const double &m3, const double &m4) {
    return sqrt((s - (m1 + m2) * (m1 + m2)) * (s - (m1 - m2) * (m1 - m2)) *
                (s - (m3 + m4) * (m3 + m4)) * (s - (m3 - m4) * (m3 - m4)));
}

double polK(const int n, const double &x) {
    return 1.2533141373155 * 1 / sqrt(x) *
           (1 + (4 * n * n - 1) / (8 * x) +
            (4 * n * n - 1) * (4 * n * n - 9) / (128 * x * x) +
            (4 * n * n - 1) * (4 * n * n - 9) * (4 * n * n - 25) /
                (3072 * x * x * x));
}

double besselK2(const double &x) {
    double y = 1 / x;
    return 1.2533141373155 * exp(-x) / sqrt(x) *
           (1 + 1.875 * y *
                    (1 + 0.4375 * y *
                             (1 - 0.375 * y *
                                      (1 - 1.03125 * y *
                                               (1 - 1.625 * y *
                                                        (1 - 2.1875 * y))))));
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