#pragma once
#include "result_error_pair.hpp"
namespace DT
{
#define SIMPSON(a, b, c, d)                               \
    ResError I1, I2, I3, f1[4];                           \
    double m = (r - l) / 2.;                              \
    double h = (r - l) / 8.;                              \
    ResError I = h * (f[0] + 3 * f[1] + 3 * f[2] + f[3]); \
    y1[0] = a;                                            \
    y1[1] = y[2];                                         \
    y1[2] = b;                                            \
    y1[3] = y[3];                                         \
    y[3] = y1[0];                                         \
    y[2] = y[1];                                          \
    y[1] = c;                                             \
    I1 = h / 2 * (y[0] + 3 * y[1] + 3 * y[2] + y[3]);     \
    I2 = h / 2 * (y1[0] + 3 * y1[1] + 3 * y1[2] + y1[3]); \
    I3 = I1 + I2;\


} // namespace DT
