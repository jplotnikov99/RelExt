#pragma once
#include <cmath>
#include <iostream>

namespace DT {
typedef struct {
    double res;
    double err;
} ResError;
std::ostream &operator<<(std::ostream &os, const ResError &a);

/**
 * @brief Overload + operator for ResultErrorPair
 */
ResError operator+(const ResError &a, const ResError &b);
ResError operator+(const double &a, const ResError &b);
ResError operator+(const ResError &a, const double &b);

/**
 * @brief Overload - operator for ResultErrorPair
 */
ResError operator-(const ResError &a, const ResError &b);
ResError operator-(const double &a, const ResError &b);
ResError operator-(const ResError &a, const double &b);

/**
 * @brief Overload * operator for ResultErrorPair
 */
ResError operator*(const ResError &a, const ResError &b);
ResError operator*(const double &a, const ResError &b);
ResError operator*(const ResError &a, const double &b);

/**
 * @brief Overload / operator for ResultErrorPair
 */
ResError operator/(const ResError &a, const ResError &b);
ResError operator/(const double &a, const ResError &b);
ResError operator/(const ResError &a, const double &b);
}  // namespace DT
