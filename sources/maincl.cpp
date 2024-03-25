#include "maincl.hpp"

namespace DT
{
    Main::Main(int argc, char **argv)
    {
        operations_map["CalcRelic"] = [this](const vstring a)
        { this->calc_relic(); };
        operations_map["SaveData"] = [this](const vstring a)
        { this->save_data(); };
        operations_map["FindParameter"] = [this](const vstring a)
        { this->find_pars(a); };

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
        // Standard settings
        input_file = sgr->get_name_of("InputFile");
        output_file = sgr->get_name_of("OutputFile");
        bath_particles = sgr->get_slist_of("ThermalBath");
        considered_procs = sgr->get_slist_of("ConsideredChannels");
        subtracted_procs = sgr->get_slist_of("SubtractChannels");
        neglected_particles = sgr->get_slist_of("NeglectParticles");
        saved_pars = sgr->get_slist_of("SavedParameters");
        beps_eps = sgr->get_val_of("BepsEps");
        mechanism = (size_t)sgr->get_val_of("ProductionMechanism");
        channel_contrib = sgr->get_val_of("ChannelContributions");

        // Advanced setting
        simpson_eps = sgr->get_val_of("ThetaIntEps");
        trapezoidal_eps = sgr->get_val_of("PeakIntEps");
        gauss_kronrod_eps = sgr->get_val_of("sIntEps");
        rk4_eps = sgr->get_val_of("rk4Eps");

        user_operations = sgr->get_operation_slist();
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
        else
        {
            bath_procs = mod->get_all_channels();
            if (neglected_particles.size() != 0)
            {
                vstring temp;
                for (auto it : neglected_particles)
                {
                    temp = mod->find_channels_by_particle(it);
                    append_to_vstring(subtracted_procs, temp);
                }
            }
            if (subtracted_procs.size() != 0)
            {
                for (auto it : subtracted_procs)
                {
                    for (size_t i = 0; i < bath_procs.size(); i++)
                    {
                        if (it == bath_procs.at(i))
                        {
                            bath_procs.erase(bath_procs.begin() + i);
                        }
                    }
                }
            }
        }
        relops->set_bath_procs(bath_procs);
    }

    void Main::calc_relic()
    {
        relops->set_mechanism(mechanism);
        omega = relops->calc_relic();
        std::cout << "Omega full:\n"
                  << omega << "\n\n";
    }

    void Main::find_pars(const vstring &args)
    {
        relops->set_mechanism(mechanism);
        relops->set_omega_target(std::stod(args.at(2)));
        relops->set_omega_err(std::stod(args.at(3)));
        relops->find_pars(args.at(1));
        omega = relops->get_last_relic();
        std::cout << "Omega full:\n"
                  << omega << "\n\n";
    }

    void Main::save_data()
    {

        std::string filesave = "../dataOutput/" + output_file;

        if (first_save)
        {
            std::ofstream reset;
            reset.open(filesave, std::ofstream::out | std::ofstream::trunc);
            reset.close();
            first_save = false;
        }

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

    void Main::do_user_operations()
    {
        for (auto it : user_operations)
        {
            operations_map[it.at(0)](it);
        }
    }
} // namespace DT
