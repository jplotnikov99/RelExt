#include "../include/result_error_pair.hpp"

namespace DT {
std::ostream &operator<<(std::ostream &os, const ResError &a) {
    os << a.res << " +/- " << a.err;
    return os;
}

/**
 * @brief Overload + operator for ResultErrorPair
 */
ResError operator+(const ResError &a, const ResError &b) {
    ResError res;
    res.res = a.res + b.res;
    res.err = sqrt(a.err * a.err + b.err * b.err);
    return res;
}
ResError operator+(const ResError &a, const double &b) {
    ResError res;
    res.res = a.res + b;
    res.err = a.err;
    return res;
}
ResError operator+(const double &a, const ResError &b) {
    ResError res;
    res.res = a + b.res;
    res.err = b.err;
    return res;
}

/**
 * @brief Overload - operator for ResultErrorPair
 */
ResError operator-(const ResError &a, const ResError &b) {
    ResError res;
    res.res = a.res - b.res;
    res.err = sqrt(a.err * a.err + b.err * b.err);
    return res;
}
ResError operator-(const ResError &a, const double &b) {
    ResError res;
    res.res = a.res - b;
    res.err = a.err;
    return res;
}
ResError operator-(const double &a, const ResError &b) {
    ResError res;
    res.res = a - b.res;
    res.err = b.err;
    return res;
}

/**
 * @brief Overload * operator for ResultErrorPair
 */
ResError operator*(const ResError &a, const ResError &b) {
    ResError res;
    res.res = a.res * b.res;
    res.err =
        sqrt(a.err * a.err * b.res * b.res + a.res * a.res * b.err * b.err);
    return res;
}
ResError operator*(const double &a, const ResError &b) {
    ResError res;
    res.res = a * b.res;
    res.err = fabs(a * b.err);
    return res;
}
ResError operator*(const ResError &a, const double &b) {
    ResError res;
    res.res = a.res * b;
    res.err = fabs(a.err * b);
    return res;
}

/**
 * @brief Overload / operator for ResultErrorPair
 */
ResError operator/(const ResError &a, const ResError &b) {
    ResError res;
    res.res = a.res / b.res;
    res.err = sqrt(a.err * a.err / (b.res * b.res) +
                   b.err * b.err * res.res * res.res / (b.res * b.res));
    return res;
}
ResError operator/(const double &a, const ResError &b) {
    ResError res;
    res.res = a / b.res;
    res.err = fabs(b.err * res.res / b.res);
    return res;
}
ResError operator/(const ResError &a, const double &b) {
    ResError res;
    res.res = a.res / b;
    res.err = fabs(a.err / b);
    return res;
}

}  // namespace DT
