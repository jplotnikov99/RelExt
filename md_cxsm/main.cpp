#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
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
VecString NEGLECTCHANNELS1= {};
static const VecString NEGLECTPARTICLES = {"u", "d", "c", "s", "e", "mu"};
static const VecString NEGLECTPARTICLESNLO = {};
static constexpr double BEPS = 1e-6;
static constexpr double XTODAY = 1e6;
static constexpr bool FAST = false;
static constexpr bool CALCWIDTHS = false;
static constexpr bool SAVECONTRIBS = true;
static constexpr bool NLO = true;
static constexpr bool QCD = false;
static constexpr int renormvs = 2;
static constexpr int renormalpha = 1;
/*
 ***********************************************
 Until here */

int main(int argc, char **argv) {
    
    clock_t begin_time = clock();
    std::cout << std::setprecision(16);
    printRelExtInfo(NLO);
    OptionParser parser;
    
    parser.parse(argc, argv);
    int parampoint = std::stoi(parser.get("line"));
    
    //LO 
    Main M_lo(argv, MODE, BEPS, XTODAY, FAST, CALCWIDTHS, SAVECONTRIBS, 0);
    M_lo.LoadParameters(parampoint);
    M_lo.set_channels(CONSIDERCHANNELS, NEGLECTCHANNELS, NEGLECTPARTICLES);
    
    //NLO 
    Main M_nlo(argv, MODE, BEPS, XTODAY, FAST, CALCWIDTHS, SAVECONTRIBS, NLO,QCD,renormvs,renormalpha);
    M_nlo.set_channels(CONSIDERCHANNELS, NEGLECTCHANNELS1, NEGLECTPARTICLESNLO);
    M_nlo.LoadParameters(parampoint);


    // Model Information   
    std::cout << "Model used: Complex Singlet Extension of the SM (CxSM)" << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
    std::cout << "Initial variables" << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
    std::cout << "MH = \t" << M_nlo.GetParameter("MH")<< std::endl;
    std::cout << "MS1 = \t" << M_nlo.GetParameter("MS1") << std::endl;
    std::cout << "MA1 = \t" << M_nlo.GetParameter("MA1") << std::endl;
    std::cout << "svev = \t" << M_nlo.GetParameter("svev") << std::endl;
    std::cout << "alpha = " << M_nlo.GetParameter("alpha") << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
    std::cout << "Relic Density Results Leading Order" << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
    double lo_val = M_lo.CalcRelic();
    std::cout << "Omega h^2 (LO)  = " << lo_val  << std::endl;
    double nlo_val = M_nlo.CalcRelic();
    std::cout << "-----------------------------------------------------" << std::endl;
    std::cout << "Relic Density Results Next-To-Leading Order" << std::endl;
    std::cout << " " << std::endl;
    std::cout << "Omega h^2 (NLO) = " << nlo_val << std::endl;
    double rel_corr = (nlo_val / lo_val - 1.0) * 100.0;
    std::cout << "Delta[%]  = \t" << rel_corr << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
      /* ---------- CSV-Output ---------- */
    
    std::string csvname = "../dataOutput/" + std::string(argv[2]);
    M_nlo.SaveToCSV(csvname, M_nlo, lo_val, nlo_val, rel_corr);


    float seconds = float(clock() - begin_time) / CLOCKS_PER_SEC;
    int minutes = int(seconds) / 60;
    float remaining_seconds = seconds - minutes * 60;

    std::cout << "Time: " << minutes << " min "
          << remaining_seconds << " s\n";

    return 0;
}
