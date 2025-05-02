#include <iostream>

#include "maincl.hpp"
#include "model.hpp"

using namespace DT;
/* Change to desired settings starting from here
 ***********************************************
 */
static constexpr int MODE = 1;
static const VecString SAVEPARS = {};
static const VecString CONSIDERCHANNELS = {};
VecString NEGLECTCHANNELS = {};
static const VecString NEGLECTPARTICLES = {};
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
    M.LoadParameters();
    /* M.CalcAmp(4000. * 4000., 0.1,
              {"N1,N1,v1,v1", "N1,N1,v2,v2", "N1,N1,v3,v3", "N1,N1,e1,e1",
               "N1,N1,e2,e2", "N1,N1,e3,e3", "N1,N1,u1,u1", "N1,N1,u2,u2",
               "N1,N1,u3,u3", "N1,N1,d1,d1", "N1,N1,d2,d2", "N1,N1,d3,d3",
               "N1,N1,h2,h2", "N1,N1,h2,h3", "N1,N1,h2,h4", "N1,N1,h2,h5",
               "N1,N1,h2,h6", "N1,N1,h3,h3", "N1,N1,h3,h4", "N1,N1,h3,h5",
               "N1,N1,h3,h6", "N1,N1,h4,h4", "N1,N1,h4,h5", "N1,N1,h4,h6",
               "N1,N1,h5,h5", "N1,N1,h5,h6", "N1,N1,h6,h6", "N1,N1,Hpm2,Hpm2",
               "N1,N1,Z,Z",   "N1,N1,W,W",   "N1,N1,h2,Z",  "N1,N1,h3,Z",
               "N1,N1,h4,Z",  "N1,N1,h5,Z",  "N1,N1,h6,Z",  "N1,N1,Hpm2,W"}); */
    M.CalcXsec(1000,1000,1,"test.dat",{"N1,N3,h2,h4"});
    M.CalcTac(10, 10, 1, "test.dat",
              {/* "N1,N3,v1,v1", "N1,N3,v2,v2", "N1,N3,v3,v3", "N1,N3,e1,e1",
               "N1,N3,e2,e2", "N1,N3,e3,e3", "N1,N3,u1,u1", "N1,N3,u2,u2",
               "N1,N3,u3,u3", "N1,N3,d1,d1", "N1,N3,d2,d2", "N1,N3,d3,d3",
               "N1,N3,h2,h2", "N1,N3,h2,h3", */ "N1,N3,h2,h4"/*, "N1,N3,h2,h5",
               "N1,N3,h2,h6", "N1,N3,h3,h3" , "N1,N3,h3,h4", "N1,N3,h3,h5",
               "N1,N3,h3,h6", "N1,N3,h4,h4", "N1,N3,h4,h5", "N1,N3,h4,h6",
               "N1,N3,h5,h5", "N1,N3,h5,h6", "N1,N3,h6,h6", "N1,N3,Hpm2,Hpm2",
               "N1,N3,Z,Z",   "N1,N3,W,W",   "N1,N3,h2,Z",  "N1,N3,h3,Z",
               "N1,N3,h4,Z",  "N1,N3,h5,Z",  "N1,N3,h6,Z",  "N1,N3,Hpm2,W" */});
    M.SaveData(SAVEPARS);

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << std::endl;
}