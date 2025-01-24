#include <iostream>

#include "hyper_parameters.hpp"
#include "maincl.hpp"

using namespace DT;
/* Change to desired settings starting from here
 ***********************************************
 */
static constexpr int MODE = 1;
static const std::string INPUTFILE = "examples/cxsm_example.dat";
static const std::string OUTPUTFILE = "cxsm_scan.dat";
static const VecString SAVEPARS = {"MA1", "MS1", "alpha", "svev"};
static const VecString CONSIDERCHANNELS = {};
VecString NEGLECTCHANNELS = {};
static const VecString NEGLECTPARTICLES = {"u", "d", "e", "mu"};
static constexpr double BEPS = 1e-6;
static constexpr double XTODAY = 1e6;
static constexpr bool FAST = true;
static constexpr bool SAVECONTRIBS = false;
/*
 ***********************************************
 Until here */

int main() {
    clock_t begin_time = clock();
    Main M(MODE, INPUTFILE, OUTPUTFILE, BEPS, XTODAY, FAST, SAVECONTRIBS);
    M.set_channels(CONSIDERCHANNELS, NEGLECTCHANNELS, NEGLECTPARTICLES);

    M.LoadParameters();
    double sav = M.GetParameter("MA1");
    for (size_t i = 0; i < 150; i++) {
        M.FindParameter("svev", 0.12, 0.001);
        M.SaveData(SAVEPARS);
        M.ChangeParameter("MA1", ++sav);
    }

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << "\n";
}