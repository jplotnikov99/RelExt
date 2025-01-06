#include "../include/maincl.hpp"

namespace DT {
Main::Main(const int modee, const std::string inputfile, const int start,
           const int end)
    : MI(*new ModelInfo), mode(modee) {
    srand((unsigned)time(NULL));

    relops = std::make_unique<RelicOps>(MI, (bool)sgr->get_val_of("Fast"));

    if (inputfile != "") {
        rdr = std::make_unique<DataReader>(inputfile, 1);
        ASSERT(start_point >= 1, "StartPoint must be 1 or larger")
        switch (mode) {
            case 1:
                check_start_end_points();
                load_generation_file();
                break;
            case 2:
                check_start_end_points();
                load_generation_file();
                break;
            case 3:
                load_read_file();
                break;

            default:
                std::cout << "The mode " << mode << " does not exist.\n";
                exit(1);
                break;
        }
    }
    bath_procs = def_thermal_bath();
}

void Main::load_setting() {
    // Standard settings
    mode = (size_t)sgr->get_val_of("Mode");
    input_file = sgr->get_name_of("InputFile");
    output_file = sgr->get_name_of("OutputFile");
    start_point = (size_t)sgr->get_val_of("StartPoint");
    end_point = (size_t)sgr->get_val_of("EndPoint") + 1;
    // saved_pars = sgr->get_slist_of("SavedParameters");
    channel_contrib = sgr->get_val_of("ChannelContributions");

    // Advanced settings
    double temp = sgr->get_val_of("BepsEps");
    if (temp >= 1.) temp = 0.99;
    if (temp == 0.) temp = 1e-100;
    beps_eps = log(temp);
    xtoday_FO = sgr->get_val_of("xTodayFO");
    theta_eps = sgr->get_val_of("ThetaIntEps");
    peak_eps = sgr->get_val_of("PeakIntEps");
    gauss_kronrod_eps = sgr->get_val_of("sIntEps");
    dopr_eps = sgr->get_val_of("DoPrEps");

    // user_operations = sgr->get_operation_slist();
}

void Main::check_start_end_points() {
    ASSERT((end_point - 1) >= 1,
           "StartPoint and/or EndPoint cannot be smaller than 1")
    ASSERT(end_point - 1 >= start_point,
           "StartPoint cannot be larger than EndPoint")
}

void Main::load_generation_file() {
    generator_list = rdr->get_generation_slist();
    ASSERT(generator_list.size() != 0, "Error in Inputfile: It is empty")
    for (auto it : generator_list) {
        if (mode == 1) {
            ASSERT(it.size() == 4,
                   "Error in InputFile: "
                       << it.at(0) << " is missing a boundary/initial value")
        } else {
            ASSERT(it.size() >= 3,
                   "Error in InputFile: " << it.at(0)
                                          << " is missing a boundary value")
        }
        ASSERT(MI.check_par_existence(it.at(0)),
               "Error in InputFile: " << it.at(0)
                                      << " is not a valid external parameter")
    }
}

void Main::load_read_file() {
    size_t N_par_points = rdr->datalines();
    ASSERT(
        N_par_points > 1,
        "It appears. Your InputFile is either empty or not correctly formatted")

    if ((end_point - 1) <= 0) end_point = N_par_points;
    if (end_point > N_par_points) {
        std::cout << "EndPoint is out of range and is set to"
                  << N_par_points - 1 << ".\n";
        end_point = N_par_points;
    }
    ASSERT((end_point - 1) >= start_point,
           "StartPoint cannot be larger than EndPoint")

    rdr->scanpars = rdr->assignHeaders(MI.parmap);
}

void Main::load_parameters(const size_t i) {
    if (mode == 2 && first_run) {
        N_bins = (size_t)sgr->get_val_of("Bins");
        N_best = (size_t)sgr->get_val_of("BestBins");
        p_random = sgr->get_val_of("Prandom");
        std::vector<double> lower, upper;
        double a, b;
        for (auto it : generator_list) {
            a = std::stod(it.at(1));
            b = std::stod(it.at(2));
            lower.push_back(a);
            upper.push_back(b);
            relops->set_par_bounds(it.at(0), a, b);
        }
        std::unordered_map<std::string, double> best;
        if (rdr->is_binned) {
            best = rdr->get_best_bins();
        }
        relops->init_montecarlo(generator_list.size(), lower, upper, best);
    }
    do {
        switch (mode) {
            case 1:
                if (first_run)
                    for (auto it : generator_list) {
                        *MI.parmap[it.at(0)] = std::stod(it.at(3));
                    }
                break;
            case 2:
                relops->generate_new_pars();
                break;
            case 3:
                rdr->read_parameter(i);
                break;
            default:
                break;
        }
    } while (!MI.load_everything());
    std::cout << "Parameter point: " << i << std::endl;
}

vstring Main::def_thermal_bath(const vstring bath_particles) {
    MI.assign_bath_masses(bath_particles);
    return MI.find_thermal_procs(bath_particles);
}

void Main::check_procs(const vstring &ch_str, const vstring &bath_procs) {
    bool found;
    for (auto it : ch_str) {
        found = false;
        for (auto jt : bath_procs) {
            if (it == jt) {
                found = true;
                break;
            }
        }
        ASSERT(found == true,
               "The channel " << it << " does not exist in this thermal bath");
    }
}

void Main::set_channels() {
    vstring neglected_particles = sgr->get_slist_of("NeglectParticles");
    vstring subtracted_channels = sgr->get_slist_of("SubtractChannels");
    vstring considered_channels = sgr->get_slist_of("ConsideredChannels");
    if (neglected_particles.size() != 0) {
        vstring temp;
        for (auto it : neglected_particles) {
            temp = MI.find_channels_by_particle(it);
            append_to_vstring(subtracted_channels, temp);
        }
    }
    if (subtracted_channels.size() != 0) {
        for (auto it : subtracted_channels) {
            ASSERT(MI.check_channel_existence(it),
                   "Error in SubtractChannels: " << it
                                                 << " is not a valid channel.")
            for (size_t i = 0; i < bath_procs.size(); i++) {
                if (it == bath_procs.at(i)) {
                    bath_procs.erase(bath_procs.begin() + i);
                    break;
                }
            }
        }
    }
    if (considered_channels.size() != 0) {
        check_procs(considered_channels, bath_procs);
        bath_procs = considered_channels;
    }
    relops->set_bath_procs(bath_procs);
}

void Main::ChangeThermalBath(const vstring &args) {
    check_arguments_number(false, 1, args.size(), __func__);
    vstring bath_particles;
    bath_procs.clear();
    for (size_t i = 1; i < args.size(); i++) {
        bath_particles.push_back(args.at(i));
    }

    bath_procs = def_thermal_bath(bath_particles);
    set_channels();

    MI.assigndm();
    MI.calc_widths_and_scale();
    MI.load_parameters();
    MI.load_tokens();
}

void Main::CalcXsec(const vstring &args) {
    check_arguments_number(false, 4, args.size(), __func__);
    ASSERT(start_point == (end_point - 1),
           "CalcXsec can only be called for one point, not a range. "
               << "Please choose the same StartPoint and EndPoint")

    AnnihilationAmps AA;
    std::unique_ptr<SigvInt> sigv = std::make_unique<SigvInt>(MI, AA);
    std::unique_ptr<DataReader> xsr =
        std::make_unique<DataReader>(output_file, 2);

    double min_sqs = std::stod(args.at(1));
    double max_sqs = std::stod(args.at(2));
    ASSERT((min_sqs > 0) && (max_sqs > 0),
           "Boundaries in " << __func__ << "can not have negative values.")
    if (min_sqs > max_sqs) {
        double temp = max_sqs;
        max_sqs = min_sqs;
        min_sqs = max_sqs;
    }

    size_t points = std::stod(args.at(3));
    vstring channel;
    for (size_t i = 4; i < args.size(); i++) {
        channel.push_back(args.at(i));
    }

    double step = (max_sqs - min_sqs) / ((double)points);
    double res;
    for (double sqs = min_sqs; sqs <= max_sqs; sqs += step) {
        res = 0;
        for (auto it : channel) {
            res += sigv->xsec(sqs * sqs, it);
        }
        xsr->save_data({"sqrts", "xsec"}, {sqs, res});
    }
}

void Main::CalcTac(const vstring &args) {
    check_arguments_number(false, 3, args.size(), __func__);
    ASSERT(start_point == (end_point - 1),
           "CalcTac can only be called for one point, not a range. "
               << "Please choose the same StartPoint and EndPoint")

    Tac tac(MI);
    std::unique_ptr<DataReader> tar =
        std::make_unique<DataReader>(output_file, 2);

    double min_x = std::stod(args.at(1));
    double max_x = std::stod(args.at(2));
    ASSERT((min_x > 0) && (max_x > 0),
           "Boundaries in " << __func__ << "can not have negative values.")
    if (min_x > max_x) {
        double temp = max_x;
        max_x = min_x;
        min_x = max_x;
    }

    size_t points = std::stod(args.at(3));

    vstring channel;
    for (size_t i = 4; i < args.size(); i++) {
        channel.push_back(args.at(i));
    }

    if (args.size() == 4) channel = MI.channelnames;

    double step = (max_x - min_x) / ((double)points);
    double res;
    beps_eps = log(1e-100);

    tac.sort_inimasses(channel);
    for (double i = min_x; i <= max_x; i += step) {
        res = tac(i);
        tar->save_data({"x", "tac"}, {i, res});
    }
}

void Main::CalcRelic(const vstring &args) {
    check_arguments_number(false, 1, args.size(), __func__);

    size_t mechanism = std::stod(args.at(1));
    relops->set_mechanism(mechanism);
    omega = relops->CalcRelic();
    std::cout << "Omega full:\n" << omega << "\n\n";
    if (channel_contrib != 1.)
        channel_percent = relops->calc_channel_contributions(channel_contrib);
}

void Main::FindParameter(const vstring &args) {
    if (first_run) {
        vanguard_step_size = sgr->get_val_of("VanguardStep");
        descent_rate = sgr->get_val_of("DescentRate");
        max_N_bisections = sgr->get_val_of("MaxBisections");
    }
    check_arguments_number(false, 4, args.size(), (std::string) __func__);
    check_var_existence(args.at(1), __func__);
    size_t mechanism = std::stod(args.at(2));
    double om_target = std::stod(args.at(3));
    double om_err = std::stod(args.at(4));

    relops->set_mechanism(mechanism);
    relops->set_omega_target(om_target);
    relops->set_omega_err(om_err);
    for (auto it : generator_list) {
        if (it.at(0) == args.at(1)) {
            double a = std::stod(it.at(1));
            double b = std::stod(it.at(2));
            relops->set_par_bounds(a, b);
            break;
        }
    }
    omega = relops->find_par(args.at(1));
    std::cout << "Omega full:\n" << omega << "\n\n";

    if (channel_contrib != 1.)
        channel_percent = relops->calc_channel_contributions(channel_contrib);
}

void Main::RandomWalk(const vstring &args) {
    if (first_run) random_walk_rate = sgr->get_val_of("RandomWalkRate");
    check_arguments_number(true, 3, args.size(), (std::string) __func__);
    size_t mechanism = std::stod(args.at(1));
    double om_target = std::stod(args.at(2));
    double om_err = std::stod(args.at(3));

    VecDoub lower(generator_list.size()), upper(generator_list.size());
    vstring pars(generator_list.size());
    double a, b;
    for (size_t i = 0; i < generator_list.size(); i++) {
        pars[i] = generator_list[i][0];
        a = std::stod(generator_list[i][1]);
        b = std::stod(generator_list[i][2]);
        lower[i] = a;
        upper[i] = b;
    }
    relops->set_mechanism(mechanism);
    relops->set_omega_target(om_target);
    relops->set_omega_err(om_err);

    omega = relops->random_walk(pars, lower, upper);
    std::cout << "Omega full:\n" << omega << "\n\n";
    if (channel_contrib != 1.)
        channel_percent = relops->calc_channel_contributions(channel_contrib);
}

void Main::SaveData(const vstring &args) {
    std::string filesave = "../dataOutput/" + output_file;

    if (first_run) {
        std::ofstream reset;
        reset.open(filesave, std::ofstream::out | std::ofstream::trunc);
        reset.close();
    }

    std::ofstream outfile(filesave, std::ios::out | std::ios::app);

    outfile.seekp(0, std::ios::end);

    if (outfile.tellp() == 0) {
        outfile << "Omega";

        /* for (auto it : saved_pars) {
            ASSERT(MI.check_par_existence(it),
                   "Error in SaveData: "
                       << it << " is not a valid parameter of the model")
            outfile << "\t" << it;
        } */
        for (size_t i = 1; i < args.size(); i++) {
            std::stod(args.at(i));
            outfile << "\t" << args.at(i);
        }
        if (channel_contrib != 1.) {
            for (auto it : relops->get_bath_procs()) {
                outfile << "\t" << it;
            }
        }
        outfile << "\n";
    }

    outfile << omega;

    /* for (auto it : saved_pars) {
        outfile << "\t" << *MI.parmap[it];
    } */
    for (auto it : channel_percent) {
        outfile << "\t" << it;
    }
    outfile << "\n";

    outfile.close();
}

Main::~Main() {
    if (mode == 2) relops->save_best_bins(output_file);
    delete &MI;
}
}  // namespace DT
