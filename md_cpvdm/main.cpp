#include <iostream>

#include "maincl.hpp"
#include "model.hpp"

using namespace DT;
/* Change to desired settings starting from here
 ***********************************************
 */
static constexpr int MODE = 2;
static const VecString SAVEPARS = {"mH1", "mH2", "mHc"};
static const VecString CONSIDERCHANNELS = {};
VecString NEGLECTCHANNELS = {};
static const VecString NEGLECTPARTICLES = {"u", "d", "e", "mu"};
static constexpr double BEPS = 1e-6;
static constexpr double XTODAY = 1e6;
static constexpr bool FAST = true;
static constexpr bool CALCWIDTHS = false;
static constexpr bool SAVECONTRIBS = false;
/*
 ***********************************************
 Until here */

int main(int argc, char **argv) {
    Main M(argv, MODE, BEPS, XTODAY, FAST, CALCWIDTHS, SAVECONTRIBS);
    M.set_channels(CONSIDERCHANNELS, NEGLECTCHANNELS, NEGLECTPARTICLES);

    clock_t begin_time = clock();
    M.InitMonteCarlo(100, 500, 1, 0.12);
    for (size_t i = 1; i <= 1e3; i++) {
        M.LoadParameters();
        M.CalcRelic();
        M.SetWeight();
        M.SaveData(SAVEPARS);
    }
    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << std::endl;
}