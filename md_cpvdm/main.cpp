#include "general_model.hpp"
#include <iostream>
#include "maincl.hpp"

using namespace DT;

int main(int argc, char **argv)
{
    Main main(argc, argv);
    clock_t begin_time = clock();

    for (size_t i = 1; i < 10; i++)
    {

        std::vector<std::string> ch = {};
        main.load_parameters(i);
        main.calc_Omega_FO(ch);
    }

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << "\n";
}