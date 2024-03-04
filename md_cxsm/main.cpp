#include <iostream>
#include "maincl.hpp"

using namespace DT;

int main(int argc, char **argv)
{
    Main main(argc, argv);

    clock_t begin_time = clock();

    vstring bath = {};
    main.def_thermal_bath(bath);
    vstring channels = {};
    main.set_channels(channels);
    main.set_mechanism(0);
    std::vector<std::string> par = {"MA1"};

    double om;

    for (size_t i = 1; i < main.N_par_points; i++)
    {
        std::vector<std::string> channels = {};
        main.load_parameters(i);
        om = main.calc_Omega();

        std::cout << "Omega full:\n"
                  << om << "\n\n";

        main.save_data(argv, par);
    }

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << std::endl;
}