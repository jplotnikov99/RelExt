#include <iostream>

#include "hyper_parameters.hpp"
#include "maincl.hpp"

using namespace DT;
/* Change to desired settings starting from here
 ***********************************************
 */
static constexpr int MODE = 3;
static const std::string INPUTFILE = "test";
static const std::string OUTPUTFILE = "test";
static constexpr int START = 1;
static constexpr int END = 1000;
static const std::string SAVEPARS = {""};
static constexpr double BEPSEPS = 1e-6;
static constexpr double XTODAY = 1e6;
static constexpr bool FAST = true;
/*
 ***********************************************
 Until here */

int main() {
    Main M(MODE, INPUTFILE, START);

    clock_t begin_time = clock();
    for (size_t i = M.start_point; i < M.end_point; i++) {
        M.load_parameters(i);
    }

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << std::endl;
}