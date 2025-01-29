#include <iostream>

#include "model.hpp"
#include "maincl.hpp"

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
static const VecString NEGLECTPARTICLES = {"u","d","e","mu"};
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
    double save12 = M.GetParameter("lam12");
    double save13, save123 = 1e-3;
    double temp;
    for (size_t i = 0; i < 30; i++) {
        save12 *= 0.9;
        M.ChangeParameter("lam12", save12);
        M.FindParameter("lam13", target, eps);
        save13 = M.GetParameter("lam13");
        temp = save13;
        M.ChangeParameter("lam123", save123);
        for (size_t j = 0; j < 30; j++) {
            temp *= 0.9;
            M.ChangeParameter("lam13", temp);
            M.FindParameter("lam123", target, eps);
            M.SaveData(SAVEPARS);
        }
        save123 = M.GetParameter("lam123");
        M.ChangeParameter("lam123", 1e-3);
        M.ChangeParameter("lam13", save13);
    }

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << "\n";
}