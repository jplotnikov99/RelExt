#include <iostream>
#include "maincl.hpp"
#include "utils.hpp"

using namespace DT;

int main(int argc, char **argv)
{
    Main main(argc, argv);
    clock_t begin_time = clock();


    //std::vector<std::string> bath = {};
    //main.def_thermal_bath(bath);

    for (size_t i = 1; i < 2; i++)
    {

        std::vector<std::string> ch = {};
        main.load_parameters(i);

        main.calc_Omega_FO();

        std::vector<std::string> par = {"mH1"};
        main.save_data(argv, par);
    }

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << "\n";
}