#include <iostream>

#include "maincl.hpp"
#include "model.hpp"

using namespace DT;
/* Change to desired settings starting from here
 ***********************************************
 */
static constexpr int MODE = 1;
static const std::string INPUTFILE = "examples/trsm_example.dat";
static const std::string OUTPUTFILE = "trsm_scan.dat";
static constexpr int START = 1;
static constexpr int END = 1;
static const VecString SAVEPARS = {"mMChi", "mMPsi", "lam12", "lam13",
                                   "lam123"};
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

    double target = 0.12, eps = 0.001;
    M.LoadParameters();
    M.FindParameter("lam12", target, eps);
    M.SaveData(SAVEPARS);
    double save13, save123 = PAR::lam123;
    double temp = save123;
    for (size_t i = 0; i < 30; i++) {
        PAR::lam12 *= 0.9;
        M.FindParameter("lam13", target, eps);
        save13 = PAR::lam13;
        PAR::lam123 = save123;
        for (size_t j = 0; j < 30; j++) {
            PAR::lam13 *= 0.9;
            M.FindParameter("lam123", target, eps);
            M.SaveData(SAVEPARS);
        }
        save123 = PAR::lam123;
        PAR::lam13 = save13;
        PAR::lam123 = temp;
    }

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << "\n";
}