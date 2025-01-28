#include <iostream>

#include "hyper_parameters.hpp"
#include "maincl.hpp"

using namespace DT;
/* Change to desired settings starting from here
 ***********************************************
 */
static constexpr int MODE = 2;
static const std::string INPUTFILE = "examples/cpvdm_example.dat";
static const std::string OUTPUTFILE = "cpvdm_h_neglect.dat";
static const VecString SAVEPARS = {"mH1", "mH2", "mHc"};
static const VecString CONSIDERCHANNELS = {};
VecString NEGLECTCHANNELS = {};
static const VecString NEGLECTPARTICLES = {"u", "d", "e", "mu", "h"};
static constexpr double BEPS = 1e-6;
static constexpr double XTODAY = 1e6;
static constexpr bool FAST = true;
static constexpr bool SAVECONTRIBS = false;
/*
 ***********************************************
 Until here */

int main() {
    Main M(MODE, INPUTFILE, OUTPUTFILE, BEPS, XTODAY, FAST, SAVECONTRIBS);
    M.set_channels(CONSIDERCHANNELS, NEGLECTCHANNELS, NEGLECTPARTICLES);

    clock_t begin_time = clock();
    M.InitMonteCarlo(100, 2000, 0, 0.12);
    for (size_t i = 0; i < 1e5; i++) {
        std::cout << i << "\n";
        M.LoadParameters();
        M.CalcRelic();
        M.SetWeight();
        M.SaveData(SAVEPARS);
    }

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << std::endl;
}