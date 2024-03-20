#include <iostream>
#include "maincl.hpp"
#include "utils.hpp"

using namespace DT;

int main(int argc, char **argv)
{
    Main main(argc, argv);
    clock_t begin_time = clock();

    ResError om;
    for (size_t i = 1; i < main.N_par_points; i++)
    {
        main.load_parameters(i);
        main.calc_relic();
        main.save_data();
    }

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << "\n";
}