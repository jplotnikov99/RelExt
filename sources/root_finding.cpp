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

}  // namespace DT
