#include "general_model.hpp"
#include <iostream>
#include "maincl.hpp"

using namespace DT;

int main(int argc, char **argv)
{
    Main main(argc, argv);

    clock_t begin_time = clock();

    for (size_t i = 1; i < main.N_par_points; i++)
    {
        main.load_parameters(i);
        main.set_mechanism(1);
        main.calc_relic();
    }

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << std::endl;
}