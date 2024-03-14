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
        mechanism = (size_t)sgr->get_val_of("ProductionMechanism");
        channel_contrib = sgr->get_val_of("ChannelContributions");
        simpson_eps = sgr->get_val_of("ThetaIntEps");
        trapezoidal_eps = sgr->get_val_of("PeakIntEps");
        gauss_kronrod_eps = sgr->get_val_of("sIntEps");
        rk4_eps = sgr->get_val_of("rk4Eps");
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

    ResError Main::calc_Omega()
    {
        double x, xtoday;
        ResError y{0., 0.};
        bsol->sort_inimasses(bath_procs);

        switch (mechanism)
        {
        case 0:
            x = bsol->secant_method(15., 15.1);
            y.res = 1.1 * bsol->yeq(x);
            xinitial = x;
            xtoday = xtoday_FO;
            break;
        case 1:
            x = xR;
            y.res = 0;
            xtoday = xtoday_FI;
            break;

        default:
            std::cout << "This mechanism ID is not valid. Please set the mechanism to 0 or 1.\n";
            exit(1);
            break;
        }

        bsol->adap_rk4(xtoday, x, y);
        omega = 2.742e8 * mod->MDM * y;

        return omega;
    }

    void Main::find_strong_channels()
    {
        strong_channels.clear();
        std::unique_ptr<Tac> temptac = std::make_unique<Tac>(mod);
        size_t N = mod->get_N_all_channels();
        vstring temp_channel = {" "};
        ResError tac_frac{0., 0.};
        ResError full_tac = temptac->tac(xinitial);

        vstring relevant_initial_states = {};
        for (size_t i = 0; i < mod->get_N_initial_states(); i++)
        {
            temp_channel.at(0) = mod->get_channel_name(N + i);
            temptac->clear_state(true);
            temptac->sort_inimasses(temp_channel);
            tac_frac = temptac->tac(xinitial) / full_tac;
            if (tac_frac.res > channel_contrib / 2)
            {
                relevant_initial_states.push_back(temp_channel.at(0));
            }
        }

        for (auto it : relevant_initial_states)
        {
            temp_channel = mod->get_subchannels(it);
            for (auto jt : temp_channel)
            {
                temptac->clear_state(true);
                temptac->sort_inimasses({jt});
                tac_frac = temptac->tac(xinitial) / full_tac;
                if (tac_frac.res > channel_contrib / 2)
                {
                    strong_channels.push_back(jt);
                }
            }
        }
    }

    void Main::calc_relic_frac()
    {
        find_strong_channels();
        vstring bath_save = bath_procs;
        ResError om_save = omega;

        bath_procs = strong_channels;

        bath_procs = bath_save;
        omega = om_save;
    }

    void Main::find_pars(const vstring &pars, const double relic, const double err)
    {
        ResError om1, om2;
        do
        {
            for (auto it : pars)
            {
                om1 = calc_Omega();
            }
        } while (fabs(omega.res - relic) > err);
    }

    void Main::save_data(bool channels)
    {
        std::string filesave = "../dataOutput/" + output_file;

        std::ofstream outfile(filesave, std::ios::out | std::ios::app);

        outfile.seekp(0, std::ios::end);

        if (outfile.tellp() == 0)
        {
            outfile << "Omega\tOmega_err";

            for (int k = 0; k < saved_pars.size(); k++)
            {
                outfile << "\t" << saved_pars.at(k);
            }
            outfile << "\n";
        }

        outfile << omega.res << "\t" << omega.err;

        for (auto it : saved_pars)
        {
            outfile << "\t" << mod->get_parmater_val(it);
        }
        outfile << "\n";

        outfile.close();
    }
} // namespace DT
