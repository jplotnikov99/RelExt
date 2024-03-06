#include "maincl.hpp"

namespace DT
{
    Main::Main(int argc, char **argv)
    {
        load_setting(std::string(argv[1]));
        rdr = std::make_unique<DataReader>(input_file, 1);

        mod = std::make_shared<Model>();
        mod->init();
        mod->load_parameter_map();
        bsol = std::make_unique<BeqSolver>(mod);

        N_par_points = rdr->datalines();
        rdr->scanpars = rdr->assignHeaders(mod->parmap);

        def_thermal_bath();
        set_channels();
    }

    void Main::load_setting(const std::string sg_file)
    {
        std::unique_ptr<DataReader> sgr = std::make_unique<DataReader>(sg_file, 0);
        input_file = sgr->get_name_of("InputFile");
        output_file = sgr->get_name_of("OutputFile");
        bath_particles = sgr->get_slist_of("ThermalBath");
        considered_procs = sgr->get_slist_of("ConsideredChannels");
        saved_pars = sgr->get_slist_of("SavedParameters");
        beps_eps = sgr->get_val_of("BepsEps");
        mechanism = (size_t) sgr->get_val_of("ProductionMechanism");
        simpson_eps = sgr->get_val_of("ThetaIntEps");
        trapezoidal_eps = sgr->get_val_of("PeakIntEps");
        gauss_kronrod_eps = sgr->get_val_of("sIntEps");
        rk4_eps = sgr->get_val_of("rk4Eps");
        iserror = sgr->get_name_of("CalcError") == "true";
    }
    void Main::load_parameters(const size_t i)
    {
        std::cout << "Parameter point: " << i << std::endl;
        rdr->read_parameter(i);
        mod->load_parameters();
        mod->assigndm();
    }

    void Main::change_parameter(const std::string &par, const double &newval)
    {
        mod->change_parameter(par, newval);
    }

    double Main::get_parameter_val(const std::string &par)
    {
        return mod->get_parmater_val(par);
    }

    void Main::set_mechanism(const size_t mech)
    {
        mechanism = mech;
        bsol->set_mechanism(mech);
    }

    void Main::def_thermal_bath()
    {
        if (bath_particles.size() != 0)
        {
            std::cout << "test\n";
            bath_procs = mod->find_thermal_procs(bath_particles);
        }
        mod->assign_bath_masses(bath_particles);
    }

    void Main::check_procs(const vstring &ch_str)
    {
        size_t found;
        for (auto it : ch_str)
        {
            for (auto jt : bath_procs)
            {
                found = it.find(jt);
                if (found == std::string::npos)
                {
                    std::cout << "The channel " << it << " does not exist in this thermal bath.\n";
                    exit(1);
                }
            }
        }
    }

    void Main::set_channels()
    {
        if (considered_procs.size() != 0)
        {
            if (bath_particles.size() != 0)
            {
                check_procs(considered_procs);
            }
            bath_procs = considered_procs;
        }
    }

    void Main::calc_initial_strength(const vstring &ch_str)
    {
        std::unique_ptr<Tac> temptac = std::make_unique<Tac>(mod);
        double ma, mb;
        double tacFull = temptac->tac(xinitial);
        vstring cur_channel_name = {""};
        if (ch_str.size() == 0)
        {
            size_t N = mod->get_N_all_channels();
            for (size_t i = 0; i < N; i++)
            {
                temptac->clear_state(true);
                cur_channel_name.at(0) = mod->get_channel_name(i);
                temptac->sort_inimasses(cur_channel_name);

                channel_strength[cur_channel_name.at(0)] = temptac->tac(xinitial) / tacFull;
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
                set_channels();
                x = bsol->secant_method(15., 15.1);
                y = 1.5 * bsol->yeq(x);
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

    double Main::calc_Omega(const double ch_contrib)
    {
        double x, y, xtoday;
        if (bath_procs.size() != 0)
            bsol->sort_inimasses(bath_procs);

        switch (mechanism)
        {
        case 0:
            x = bsol->secant_method(15., 15.1);
            y = 1.5 * bsol->yeq(x);
            xinitial = x;
            xtoday = xtoday_FO;
            break;
        case 1:
            x = xR;
            y = 0;
            xtoday = xtoday_FI;
            break;

        default:
            std::cout << "This mechanism ID is not valid. Please set the mechanism to 0 or 1.\n";
            exit(1);
            break;
        }

        bsol->adap_rk4(xtoday, x, y);
        omega = 2.742e8 * mod->MDM * y;

        if (ch_contrib != 1)
        {
            calc_relic_frac(ch_contrib, bath_procs);
        }
        return omega;
    }

    void Main::find_pars(const vstring &pars, const double relic, const double err)
    {
        double om1, om2;
        do
        {
            for (auto it : pars)
            {
                om1 = calc_Omega();
            }
        } while (fabs(omega - relic) > err);
    }

    void Main::save_data(bool channels)
    {
        std::string filesave = "../dataOutput/" + output_file;

        std::ofstream outfile(filesave, std::ios::out | std::ios::app);

        outfile.seekp(0, std::ios::end);

        if (outfile.tellp() == 0)
        {
            outfile << "Omega";

            for (int k = 0; k < saved_pars.size(); k++)
            {
                outfile << "\t" << saved_pars.at(k);
            }
            outfile << "\n";
        }

        outfile << omega;

        for (auto it : saved_pars)
        {
            outfile << "\t" << mod->get_parmater_val(it);
        }
        outfile << "\n";

        outfile.close();
    }
} // namespace DT
