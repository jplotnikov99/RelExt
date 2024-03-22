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
        relops = std::make_unique<RelicOps>(mod);

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
        relops->set_bath_procs(bath_procs);
    }

    void Main::calc_relic()
    {
        relops->set_mechanism(mechanism);
        ResError om = relops->calc_relic();
        std::cout << "Omega full:\n"
                  << om << "\n\n";
        omega = om;
    }

    void Main::find_pars(const vstring &pars, const double relic, const double err)
    {
        relops->set_mechanism(mechanism);
        relops->set_omega_target(relic);
        relops->set_omega_err(err);
        relops->find_pars(pars);
        omega = relops->get_last_relic();
        std::cout << "Omega full:\n"
                  << omega << "\n\n";
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
            outfile << "\t" << mod->get_parameter_val(it);
        }
        outfile << "\n";

        outfile.close();
    }
} // namespace DT
