#include "general_model.hpp"
#include <iostream>
#include "maincl.hpp"

using namespace DT;

int main(int argc, char **argv)
{
    Main main(argc, argv);

    clock_t begin_time = clock();

    for (size_t i = main.start_point; i < main.end_point; i++)
    {
        main.load_parameters(i);
        main.do_user_operations();
    }

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << std::endl;
}