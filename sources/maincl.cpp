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
        mod->assign_bath_masses();

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

    void Main::def_thermal_bath(const vstring &prtcls)
    {
        mod->assign_bath_masses(prtcls);
        if (prtcls.size() != 0)
            bath_procs = mod->find_thermal_procs(prtcls);
    }

    void Main::check_procs(const vstring &ch_str)
    {
        // TO DO
    }

    void Main::calc_initial_strength(const vstring &ch_str)
    {
        Tac temptac(mod);
        double ma, mb;
        double tacFull = temptac.tac(xinitial);
        vstring cur_channel_name = {""};
        if (ch_str.size() == 0)
        {
            size_t N = mod->get_N_all_channels();
            for (size_t i = 0; i < N; i++)
            {
                temptac.clear_state();
                cur_channel_name.at(0) = mod->get_channel_name(i);
                temptac.sort_inimasses(cur_channel_name);

                channel_strength[cur_channel_name.at(0)] = temptac.tac(xinitial) / tacFull;
            }
        }
    }

    void Main::calc_relic_frac(const double ch_contrib, const vstring &ch_str)
    {
        calc_initial_strength(ch_str);
        std::unordered_map<std::string, double>::iterator it;
        vstring stronk_channels = {""};
        vstring channels;
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
                x = bsol->secant_method(15., 15.1);
                y = 1.5 * mod->yeq(x);
                bsol->adap_rk4(xtoday_FO, x, y);

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

    double Main::calc_Omega_FO(const double ch_contrib, const vstring &ch_str)
    {
        double x, y;

        bsol->set_mechanism(0);

        if (ch_str.size() != 0)
        {
            bath_procs = ch_str;
        }

        if (bath_procs.size() != 0)
            bsol->sort_inimasses(bath_procs);
        x = bsol->secant_method(15., 15.1);
        y = 1.5 * mod->yeq(x);
        xinitial = x;

        printf("Initial x: %.5e\n", x);

        bsol->adap_rk4(xtoday_FO, x, y);

        omega = 2.742e8 * mod->MDM * y;
        std::cout << "Omega full:\n"
                  << omega << "\n\n";

        if (ch_contrib != 1)
        {
            calc_relic_frac(ch_contrib, bath_procs);
        }
        return omega;
    }

    double Main::calc_Omega_FI(const double ch_contrib, const vstring &ch_str)
    {
        bsol->set_mechanism(0);

        double x = xR;
        double y = 0;
        if (ch_str.size() != 0)
        {
            bath_procs = ch_str;
        }

        if (bath_procs.size() != 0)
            bsol->sort_inimasses(bath_procs);
        bsol->adap_rk4(xtoday_FI, x, y);

        omega = 2.742e8 * mod->MDM * y;
        std::cout << "Omega full:\n"
                  << omega << "\n\n";

        return omega;
    }


    void Main::save_data(char **argv, const vstring save_pars, bool channels)
    {
        std::string filesave = "../dataOutput/" + std::string(argv[2]);

        std::ofstream outfile(filesave, std::ios::out | std::ios::app);

        outfile.seekp(0, std::ios::end);

        if (outfile.tellp() == 0)
        {
            outfile << "Omega";

            for (int k = 0; k < save_pars.size(); k++)
            {
                outfile << "\t" << save_pars.at(k);
            }
            outfile << "\n";
        }

        outfile << omega;

        for (auto it : save_pars)
        {
            outfile << "\t" << mod->get_parmater_val(it);
        }
        outfile << "\n";

        outfile.close();
    }
} // namespace DT
