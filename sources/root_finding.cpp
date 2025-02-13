#include "../include/numerical/root_finding.hpp"

namespace DT {

void FindRoot::update_mode(const double step, const double y) {
    if (std::signbit(yold) != std::signbit(y)) {
        searchmode = bisect;
        std::cout << "Switch to bisect mode.\n";
        return;
    }
    if (first_step) {
        first_step = false;
        return;
    }
    if (std::signbit(stepold) != std::signbit(step)) {
        if (!(searchmode == descent)) {
            std::cout << "Switch to descent mode.\n";
            searchmode = descent;
        }
    }
}

void RandomWalk::random_step(VecDoub &x) {
    int sign;
    double rate;
    for (size_t i = 0; i < x.size(); i++) {
        sign = (int)generate_random(0, 2);
        sign = (sign == 0) ? 1 : -1;
        rate = generate_random(0, gammax);
        cur_step[i] = (double)sign * std::abs(x[i]) * rate;
        x[i] = x[i] + cur_step[i];
        if (x[i] < x1[i]) x[i] = x1[i] * (1 - 0.01);
        if (x[i] > x2[i]) x[i] = x2[i] * (1 - 0.01);
    }
}

void RandomWalk::same_step(VecDoub &x) {
    for(size_t i = 0; i < x.size(); i++){
        x[i] = x[i] + cur_step[i];
        if (x[i] < x1[i]) x[i] = x1[i] * (1 - 0.01);
        if (x[i] > x2[i]) x[i] = x2[i] * (1 - 0.01);
    }
}
}  // namespace DT
