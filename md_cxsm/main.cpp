#include <iostream>

#include "maincl.hpp"
#include "model.hpp"
#include "interface/CollierLTCPP.h"

using namespace DT;
/* Change to desired settings starting from here
 ***********************************************
 */
static constexpr int MODE = 3;
static const VecString SAVEPARS = {"MA1", "MS1", "alpha", "svev"};
static const VecString CONSIDERCHANNELS = {};
VecString NEGLECTCHANNELS = {};
static const VecString NEGLECTPARTICLES = {"u", "d", "e", "mu"};
static constexpr double BEPS = 1e-6;
static constexpr double XTODAY = 1e6;
static constexpr bool FAST = true;
static constexpr bool CALCWIDTHS = true;
static constexpr bool SAVECONTRIBS = false;
/*
 ***********************************************
 Until here */

int main(int argc, char **argv) {
    clock_t begin_time = clock();

    std::cout << std::setprecision(16);

    // User-defined options are parsed and ready to use
    OptionParser parser;
    parser.parse(argc, argv);

    nlo = (parser.get("nlo") == "1" ? true : false);
    qcd = (parser.get("qcd") == "1" ? true : false);

    Main M(argv, MODE, BEPS, XTODAY, FAST, CALCWIDTHS, SAVECONTRIBS);
    M.set_channels(CONSIDERCHANNELS, NEGLECTCHANNELS, NEGLECTPARTICLES);

    M.LoadParameters(2);

    if (nlo) {
        init_CollierLTCPP(0., 125.09 * 125.09, 1.);
        load_counterterms();
    }

    M.CalcRelic();

    // double sav = M.GetParameter("MA1");
    // for (size_t i = 0; i < 150; i++) {
    //     M.FindParameter("svev", 0.12, 0.001);
    //     M.SaveData(SAVEPARS);
    //     M.ChangeParameter("MA1", ++sav);
    // }

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << "\n";
}