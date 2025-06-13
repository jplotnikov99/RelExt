#include <iostream>

#include "maincl.hpp"
#include "model.hpp"

using namespace DT;
/* Change to desired settings starting from here
 ***********************************************
 */
static constexpr int MODE = 4;
static const VecString SAVEPARS = {};
static const VecString CONSIDERCHANNELS = {};
VecString NEGLECTCHANNELS = {};
static const VecString NEGLECTPARTICLES = { "N4", "N5", "c2", "C2"};
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
    M.CalcDDT();
    M.CalcRelic();


    /* std::unique_ptr<DataReader> xsr =
        std::make_unique<DataReader>("amps.dat", 2);
    double res, cost;
    for (cost = -1.; cost < 1.; cost += 0.01) {
        res = M.CalcAmp(SQR(900.), cost, {"N1,N3,h2,h4"});
        xsr->save_data({"sqrts", "xsec"}, {cost, res});
    } */
    // M.CalcXsec(792, 1001, 100, "xsec.dat", {"N1,N3,h2,h4"});
    /* M.CalcTac(25, 25, 1, "test.dat",
              {"N1,N1,v1,v1", "N1,N1,v2,v2", "N1,N1,v3,v3", "N1,N1,e1,e1",
               "N1,N1,e2,e2", "N1,N1,e3,e3", "N1,N1,u1,u1", "N1,N1,u2,u2",
               "N1,N1,u3,u3", "N1,N1,d1,d1", "N1,N1,d2,d2", "N1,N1,d3,d3",
               "N1,N1,h2,h2", "N1,N1,h2,h3", "N1,N1,h2,h4", "N1,N1,h2,h5",
               "N1,N1,h2,h6", "N1,N1,h3,h3", "N1,N1,h3,h4", "N1,N1,h3,h5",
               "N1,N1,h3,h6", "N1,N1,h4,h4", "N1,N1,h4,h5", "N1,N1,h4,h6",
               "N1,N1,h5,h5", "N1,N1,h5,h6", "N1,N1,h6,h6", "N1,N1,Hpm2,Hpm2",
               "N1,N1,Z,Z",   "N1,N1,W,W",   "N1,N1,h2,Z",  "N1,N1,h3,Z",
               "N1,N1,h4,Z",  "N1,N1,h5,Z",  "N1,N1,h6,Z",  "N1,N1,Hpm2,W"}); */
    M.SaveData(SAVEPARS);

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << std::endl;
}