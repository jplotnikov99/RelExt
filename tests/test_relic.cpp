#include "maincl.hpp"

#include <cmath>
#include <exception>
#include <iostream>

#ifndef TEST_MODE
#define TEST_MODE 1
#endif

int main(int argc, char* argv[])
{
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0]
                  << " INPUT_FILE OUTPUT_FILE\n";
        return 1;
    }

    try {
        constexpr int mode = TEST_MODE;
        constexpr double beps = 1e-6;
        constexpr double xtoday = 1e6;
        constexpr bool fast = true;
        constexpr bool calc_widths = true;
        constexpr bool save_contribs = false;

        std::cout << "Testing relic density with MODE = "
                  << mode << '\n';

        DT::Main model(
            argv,
            mode,
            beps,
            xtoday,
            fast,
            calc_widths,
            save_contribs
        );

        const DT::VecString consider_channels = {};
        DT::VecString neglect_channels = {};
        const DT::VecString neglect_particles = {
            "u", "d", "e", "mu"
        };

        model.set_channels(
            consider_channels,
            neglect_channels,
            neglect_particles
        );

        // Mode 1: load the configured initial parameter values.
        // Mode 3: load the first parameter point from the table.
        model.LoadParameters(0);

        const double omega = model.CalcRelic();

        if (!std::isfinite(omega) || omega <= 0.0) {
            std::cerr << "FAIL: Invalid relic density: "
                      << omega << '\n';
            return 1;
        }

        std::cout << "PASS: Relic density calculated: "
                  << omega << '\n';

        return 0;
    }
    catch (const std::exception& error) {
        std::cerr << "FAIL: " << error.what() << '\n';
        return 1;
    }
}