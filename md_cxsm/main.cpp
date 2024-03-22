#include <iostream>
#include "maincl.hpp"

using namespace DT;

int main(int argc, char **argv)
{
    Main main(argc, argv);

    clock_t begin_time = clock();

    ResError om;

    for (size_t i = 1; i < 2; i++)
    {
        main.load_parameters(i);
        main.calc_relic();
        main.find_pars({"MA1"},0.119,0.01);
        main.save_data();
        main.calc_relic();
    }

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << std::endl;
}