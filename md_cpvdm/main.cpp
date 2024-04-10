#include <iostream>
#include "maincl.hpp"
#include "utils.hpp"

using namespace DT;

int main(int argc, char **argv)
{
    Main main(argc, argv);
    clock_t begin_time = clock();

    for (size_t i = 7396; i < 7397; i++)
    {
        main.load_parameters(i);
        main.do_user_operations();
        //main.calc_tac();
    }

    std::cout << "Computation time:\n"
              << float(clock() - begin_time) / CLOCKS_PER_SEC << "\n";
}