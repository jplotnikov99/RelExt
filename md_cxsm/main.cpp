#include <iostream>
#include "maincl.hpp"

using namespace DT;

int main(int argc, char **argv)
{
    Main main(argc, argv);

    clock_t begin_time = clock();
    std::vector<std::string> par = {"MA1"};

    for (size_t i = 1383; i < 1384; i++)
    {
        std::vector<std::string> channels = {};
        main.load_parameters(i);
        main.calc_Omega_FO(0.01);
    
        main.save_data(argv, par);
    }

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << std::endl;
}