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

    void Main::calc_tac_frac(const std::vector<std::string> &ch_str)
    {
        Tac temptac(mod);
        double ma, mb;
        double tacFull = temptac.tac(xinitial, ch_str);
        std::vector<std::string> cur_channel_name = {""};
        if (ch_str.size() == 0)
        {
            size_t N = mod->get_N_all_channels();
            for (size_t i = 0; i < N; i++)
            {
                temptac.clear_maps();
                cur_channel_name.at(0) = mod->get_channel_name(i);
                temptac.sort_inimasses(cur_channel_name);

                channel_strength[cur_channel_name.at(0)] = temptac.tac(xinitial, cur_channel_name) / tacFull;
            }
        }
    }

    void Main::calc_relic_frac(const double ch_contrib, const std::vector<std::string> &ch_str)
    {
        calc_tac_frac(ch_str);
        std::unordered_map<std::string, double>::iterator it;
        std::vector<std::string> stronk_channels = {""};
        std::vector<std::string> channels;
        std::vector<double> frac;
        double total = 0.;
        double x, y;
        for (it = channel_strength.begin(); it != channel_strength.end(); it++)
        {
            if (it->second > ch_contrib / 1.5)
            {
                stronk_channels.at(0) = it->first;
                channels.push_back(it->first);

                bsol->sort_inimasses(stronk_channels);
                x = bsol->secant_method(15., 15.1, stronk_channels);
                y = 1.5 * mod->yeq(x);
                bsol->adap_rk4(xtoday_FO, x, y, stronk_channels);

                x = omega / (2.742e8 * mod->MDM * y);
                it->second = x;
                total += x;
                frac.push_back(x);
            }
            else
            {
                it->second *= 0.;
            }
        }
        double max = 0;
        double maxj = 0;

        while (frac.size() > 0)
        {
            for (int j = 0; j < frac.size(); j++)
            {
                if (frac.at(j) > max)
                {
                    maxj = j;
                    max = frac.at(j);
                }
            }
            std::cout << channels.at(maxj) << ":\t" << max * 100 << "%" << std::endl;
            max = 0;
            channels.erase(channels.begin() + maxj);
            frac.erase(frac.begin() + maxj);
        }
    }

    double Main::calc_Omega_FO(const std::vector<std::string> &ch_str, const double ch_contrib)
    {
        double x, y;

        if (ch_str.size() != 0)
            bsol->sort_inimasses(ch_str);
        x = bsol->secant_method(15., 15.1, ch_str);
        y = 1.5 * mod->yeq(x);
        xinitial = x;

        printf("Initial x: %.5e\n", x);

        bsol->adap_rk4(xtoday_FO, x, y, ch_str);

        omega = 2.742e8 * mod->MDM * y;
        std::cout << "Omega full:\n"
                  << omega << "\n\n";

        if (ch_contrib != 1)
        {
            calc_relic_frac(ch_contrib, ch_str);
        }
        return omega;
    }
} // namespace DT
