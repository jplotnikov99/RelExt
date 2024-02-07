#include "maincl.hpp"

namespace DT
{
    Main::Main(int argc, char **argv)
    {
        rdr = std::make_unique<DataReader>(argv);
        dof = std::make_shared<Dof>();
        mod = std::make_shared<Model>(dof);

        mod->init();
        mod->load_parameter_map();

        N_par_points = rdr->datalines();
        rdr->scanpars = rdr->assignHeaders(mod->parmap);

        bsol = std::make_unique<BeqSolver>(dof, mod);
    }

    void Main::load_parameters(const size_t i)
    {
        std::cout << "Parameter point: " << i << std::endl;
        rdr->read_parameter(i);
        mod->load_parameters();
        mod->assigndm();
    }

    double Main::calc_Omega_FO(const std::vector<std::string> &ch_str, const double ch_contrib)
    {
        double x, y;
        double omegaF;

        if (ch_str.size() != 0)
            bsol->sort_inimasses(ch_str);
        x = bsol->secant_method(15., 15.1, ch_str);
        y = 1.5 * mod->yeq(x);

        printf("Initial x: %.5e\n", x);

        bsol->adap_rk4(xtoday_FO, x, y, ch_str);

        omegaF = 2.742e8 * mod->MDM * y;
        std::cout << "Omega full:\n"
                  << omegaF << "\n\n";

        // if (ch_contrib != 1)
        //{
        //     saveChannelContr(omegaF, xtoday, chcontrib, proc);
        // }
        return omegaF;
    }
} // namespace DT
