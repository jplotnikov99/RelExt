#include <iostream>

#include "hyper_parameters.hpp"
#include "maincl.hpp"

using namespace DT;
/* Change to desired settings starting from here
 ***********************************************
 */
static constexpr int MODE = 1;
static const std::string INPUTFILE = "examples/cxsm_example1.dat";
static const std::string OUTPUTFILE = "cxsm_fast.csv";
static constexpr int START = 1;
static constexpr int END = 300;
static const VecString SAVEPARS = {"MA1", "MS1", "alpha", "svev"};
static const VecString CONSIDERCHANNELS = {};
VecString NEGLECTCHANNELS = {};
static const VecString NEGLECTPARTICLES = {"u", "d", "e", "mu"};
static constexpr double BEPS = 1e-6;
static constexpr double XTODAY = 1e6;
static constexpr bool FAST = true;
static constexpr bool SAVECONTIRIBS = false;
/*
 ***********************************************
 Until here */

int main() {
    Main M(MODE, INPUTFILE, OUTPUTFILE, BEPS, XTODAY, FAST, SAVECONTIRIBS,
           START, END);
    M.set_channels(CONSIDERCHANNELS, NEGLECTCHANNELS, NEGLECTPARTICLES);

    clock_t begin_time = clock();
    double sav;
    for (size_t i = M.start_point; i < M.end_point; i++) {
        M.load_parameters(i);
        sav = M.get_parameter("MA1");
        M.FindParameter("svev", 0.12, 0.001);
        M.SaveData(SAVEPARS);
        M.change_parameter("MA1", sav + 1.);
    }

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << std::endl;
}