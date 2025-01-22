#include <iostream>

#include "hyper_parameters.hpp"
#include "maincl.hpp"

using namespace DT;
/* Change to desired settings starting from here
 ***********************************************
 */
static constexpr int MODE = 3;
static const std::string INPUTFILE = "micro_ddp.csv";
static const std::string OUTPUTFILE = "our_ddp.csv";
static constexpr int START = 1;
static constexpr int END = 1;
static const VecString SAVEPARS = {"mmH3"};
static const VecString CONSIDERCHANNELS = {};
VecString NEGLECTCHANNELS = {};
static const VecString NEGLECTPARTICLES = {};
static constexpr double BEPS = 1e-6;
static constexpr double XTODAY = 1e6;
static constexpr bool FAST = true;
static constexpr bool SAVECONTRIBS = false;
/*
 ***********************************************
 Until here */

int main() {
    Main M(MODE, INPUTFILE, OUTPUTFILE, BEPS, XTODAY, FAST, SAVECONTRIBS,
           START);
    M.set_channels(CONSIDERCHANNELS, NEGLECTCHANNELS, NEGLECTPARTICLES);

    clock_t begin_time = clock();
    for (size_t i = M.start_point; i < M.end_point; i++) {
        M.LoadParameters(i);
        M.CalcRelic();
        M.SaveData(SAVEPARS);
    }

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << std::endl;
}