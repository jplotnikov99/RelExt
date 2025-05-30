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
static const VecString NEGLECTPARTICLES = {"u", "d", "c", "s", "e", "mu"};
static constexpr double BEPS = 1e-6;
static constexpr double XTODAY = 1e6;
static constexpr bool FAST = true;
static constexpr bool CALCWIDTHS = false;
static constexpr bool SAVECONTRIBS = false;
static constexpr bool NLO = true;
/*
 ***********************************************
 Until here */

int main(int argc, char **argv) {
    clock_t begin_time = clock();

    std::cout << std::setprecision(16);

    // User-defined options are parsed and ready to use
    OptionParser parser;
    parser.parse(argc, argv);

    int parampoint = std::stoi(parser.get("line"));

    // nlo = (parser.get("nlo") == "1" ? true : false);
    // qcd = (parser.get("qcd") == "1" ? true : false);

    std::cout << "Parameter point: " << parampoint << std::endl;

    Main M_nlo(argv, MODE, BEPS, XTODAY, FAST, CALCWIDTHS, SAVECONTRIBS, 1);
    M_nlo.set_channels(CONSIDERCHANNELS, NEGLECTCHANNELS, NEGLECTPARTICLES);
    M_nlo.LoadParameters(parampoint);
    // M_nlo.CalcRelic();
    M_nlo.CalcTac(5, 200, 20, "cxsm_out_tac_nlo_" + parser.get("line") + "_HH.dat");
    // M_nlo.CalcXsec(1600, 16000, 10, "cxsm_out_xsec_nlo_" + parser.get("line") + ".dat", {});
    M_nlo.SaveData(SAVEPARS);
    
    Main M_lo(argv, MODE, BEPS, XTODAY, FAST, CALCWIDTHS, SAVECONTRIBS, 1);
    M_lo.set_channels(CONSIDERCHANNELS, NEGLECTCHANNELS, NEGLECTPARTICLES);
    M_lo.LoadParameters(parampoint);
    // M_lo.CalcRelic();
    M_lo.CalcTac(5, 200, 20, "cxsm_out_tac_lo_" + parser.get("line") + "_HH.dat", {"A1,A1,H,H"});
    // M_lo.CalcXsec(1600, 16000, 20, "cxsm_out_xsec_lo_" + parser.get("line") + "_WW_20pts_testCT.dat", {"A1,A1,w,W"});
    M_lo.SaveData(SAVEPARS);   

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << "\n";
}