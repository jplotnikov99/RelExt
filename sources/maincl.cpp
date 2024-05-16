#include "maincl.hpp"

namespace DT
{
    Main::Main(int argc, char **argv)
    {
        operations_map["ChangeThermalBath"] = [this](const vstring a)
        { this->ChangeThermalBath(a); };
        operations_map["CalcXsec"] = [this](const vstring a)
        { this->CalcXsec(a); };
        operations_map["CalcTac"] = [this](const vstring a)
        { this->CalcTac(a); };
        operations_map["CalcRelic"] = [this](const vstring a)
        { this->CalcRelic(a); };
        operations_map["FindParameter"] = [this](const vstring a)
        { this->FindParameter(a); };
        operations_map["SaveData"] = [this](const vstring a)
        { this->save_data(); };

        load_setting(std::string(argv[1]));

        mod = std::make_shared<Model>();
        mod->init();
        mod->load_parameter_map();
        relops = std::make_unique<RelicOps>(mod);

        if (input_file != "")
        {
            rdr = std::make_unique<DataReader>(input_file, 1);
            size_t N_par_points = rdr->datalines();
            if (start_point < 1)
            {
                std::cout << "StartPoint is out of range and was set to 1.\n";
                start_point = 1;
            }
            if ((end_point - 1) == 0)
                end_point = N_par_points;
            if (end_point > N_par_points)
            {
                std::cout << "EndPoint is out of range and is set to" << N_par_points - 1 << ".\n";
                end_point = N_par_points;
            }
            rdr->scanpars = rdr->assignHeaders(mod->parmap);
        }

        def_thermal_bath();
        set_channels();
    }

    void Main::load_setting(const std::string sg_file)
    {
        std::unique_ptr<DataReader> sgr = std::make_unique<DataReader>(sg_file, 0);
        // Standard settings
        input_file = sgr->get_name_of("InputFile");
        output_file = sgr->get_name_of("OutputFile");
        start_point = (size_t)sgr->get_val_of("StartPoint");
        end_point = (size_t)sgr->get_val_of("EndPoint") + 1;
        considered_procs = sgr->get_slist_of("ConsideredChannels");
        subtracted_procs = sgr->get_slist_of("SubtractChannels");
        neglected_particles = sgr->get_slist_of("NeglectParticles");
        saved_pars = sgr->get_slist_of("SavedParameters");
        beps_eps = log(sgr->get_val_of("BepsEps"));
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
        if (input_file != "")
        {
            rdr->read_parameter(i);
        }
        mod->load_parameters();
        mod->assigndm();
        mod->calc_widths_and_scale();
        mod->load_parameters();
        mod->load_tokens();
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
            if (bath_procs.size() == 0)
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

    void Main::ChangeThermalBath(const vstring &args)
    {
        check_arguments_number(false, 1, args.size(), __func__);

        bath_particles.clear();
        bath_procs.clear();
        for (size_t i = 1; i < args.size(); i++)
        {
            bath_particles.push_back(args.at(i));
        }

        def_thermal_bath();
        set_channels();

        mod->assigndm();
        mod->calc_widths_and_scale();
        mod->load_parameters();
        mod->load_tokens();
    }

    void Main::CalcXsec(const vstring &args)
    {
        check_arguments_number(false, 4, args.size(), __func__);
        check_if_number(args.at(1), __func__);
        check_if_number(args.at(2), __func__);
        check_if_number(args.at(3), __func__);

        if (start_point != (end_point - 1))
        {
            std::cout << "CalcXsec can only be called for one point, not a range. "
                      << "Please choose the same StartPoint and EndPoint.\n";
            exit(1);
        }

        std::unique_ptr<Tac> tac = std::make_unique<Tac>(mod);
        std::unique_ptr<DataReader> xsr = std::make_unique<DataReader>(output_file, 2);

        double min_sqs = std::stod(args.at(1));
        double max_sqs = std::stod(args.at(2));
        ASSERT((min_sqs < 0) || (max_sqs < 0), "Boundaries in " << __func__ << "can not have negative values.")
        if (min_sqs > max_sqs)
        {
            double temp = max_sqs;
            max_sqs = min_sqs;
            min_sqs = max_sqs;
        }

        size_t points = std::stoi(args.at(3));
        vstring channel;
        for (size_t i = 4; i < args.size(); i++)
        {
            channel.push_back(args.at(i));
        }

        double step = (max_sqs - min_sqs) / ((double)points);
        double res;
        for (double sqs = min_sqs; sqs <= max_sqs; sqs += step)
        {
            res = 0;
            for (auto it : channel)
            {
                res += tac->xsec(sqs * sqs, it).res;
            }
            xsr->save_data({"sqrts", "xsec"}, {sqs, res});
        }
    }

    void Main::CalcTac(const vstring &args)
    {
        check_arguments_number(false, 4, args.size(), __func__);
        check_if_number(args.at(1), __func__);
        check_if_number(args.at(2), __func__);
        check_if_number(args.at(3), __func__);

        if (start_point != (end_point - 1))
        {
            std::cout << "CalcTac can only be called for one point, not a range. "
                      << "Please choose the same StartPoint and EndPoint.\n";
            exit(1);
        }

        std::unique_ptr<Tac> tac = std::make_unique<Tac>(mod);
        std::unique_ptr<DataReader> tar = std::make_unique<DataReader>(output_file, 2);

        double min_x = std::stod(args.at(1));
        double max_x = std::stod(args.at(2));
        ASSERT((min_x < 0) || (max_x < 0), "Boundaries in " << __func__ << "can not have negative values.")
        if (min_x > max_x)
        {
            double temp = max_x;
            max_x = min_x;
            min_x = max_x;
        }

        size_t points = std::stoi(args.at(3));
        vstring channel;
        for (size_t i = 4; i < args.size(); i++)
        {
            channel.push_back(args.at(i));
        }

        double step = (max_x - min_x) / ((double)points);
        ResError res;

        tac->sort_inimasses(channel);
        for (double i = min_x; i <= max_x; i += step)
        {
            res = tac->tac(i);
            tar->save_data({"x", "tac", "error"}, {i, res.res, res.err});
        }
    }

    void Main::CalcRelic(const vstring &args)
    {
        check_arguments_number(true, 1, args.size(), __func__);
        check_if_number(args.at(1), __func__);

        size_t mechanism = std::stoi(args.at(1));
        relops->set_mechanism(mechanism);
        omega = omega + relops->CalcRelic();
        std::cout << "Omega full:\n"
                  << omega << "\n\n";
    }

    void Main::FindParameter(const vstring &args)
    {
        check_arguments_number(true, 4, args.size(), (std::string) __func__);
        check_if_number(args.at(2), __func__);
        check_if_number(args.at(3), __func__);
        check_if_number(args.at(4), __func__);

        size_t mechanism = std::stoi(args.at(2));
        relops->set_mechanism(mechanism);
        relops->set_omega_target(std::stod(args.at(3)));
        relops->set_omega_err(std::stod(args.at(4)));
        relops->find_pars(args.at(1));

        omega = omega + relops->get_last_relic();
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
        omega = {0.,0.};
        for (auto it : user_operations)
        {
            operations_map[it.at(0)](it);
        }
    }
} // namespace DT
