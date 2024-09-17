#include "maincl.hpp"

namespace DT {
Main::Main(int argc, char **argv) {
    srand((unsigned)time(NULL));

    operations_map["Set"] = [this](const vstring a) { this->Set(a); };
    operations_map["Def"] = [this](const vstring a) { this->Def(a); };
    operations_map["Add"] = [this](const vstring a) { this->Add(a); };
    operations_map["Sub"] = [this](const vstring a) { this->Sub(a); };
    operations_map["Mult"] = [this](const vstring a) { this->Mult(a); };
    operations_map["Div"] = [this](const vstring a) { this->Div(a); };
    operations_map["ChangeThermalBath"] = [this](const vstring a) {
        this->ChangeThermalBath(a);
    };
    operations_map["CalcXsec"] = [this](const vstring a) { this->CalcXsec(a); };
    operations_map["CalcTac"] = [this](const vstring a) { this->CalcTac(a); };
    operations_map["CalcRelic"] = [this](const vstring a) {
        this->CalcRelic(a);
    };
    operations_map["FindParameter"] = [this](const vstring a) {
        this->FindParameter(a);
    };
    operations_map["RandomWalk"] = [this](const vstring a) {
        this->RandomWalk(a);
    };
    operations_map["SaveData"] = [this](const vstring a) { this->SaveData(a); };

    setting_file = std::string(argv[1]);
    sgr = std::make_unique<DataReader>(setting_file, 0);
    load_setting();

    mod = std::make_shared<Model>();
    relops = std::make_unique<RelicOps>(mod);
    relops->set_fast((bool)sgr->get_val_of("Fast"));

    if (input_file != "") {
        rdr = std::make_unique<DataReader>(input_file, 1);
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
    vstring bath_procs;
    bath_procs = def_thermal_bath();
    set_channels(bath_procs);
}

void Main::load_setting() {
    // Standard settings
    mode = (size_t)sgr->get_val_of("Mode");
    input_file = sgr->get_name_of("InputFile");
    output_file = sgr->get_name_of("OutputFile");
    start_point = (size_t)sgr->get_val_of("StartPoint");
    end_point = (size_t)sgr->get_val_of("EndPoint") + 1;
    saved_pars = sgr->get_slist_of("SavedParameters");
    channel_contrib = sgr->get_val_of("ChannelContributions");

    // Advanced settings
    beps_eps = log(sgr->get_val_of("BepsEps"));
    xtoday_FO = sgr->get_val_of("xTodayFO");
    theta_eps = sgr->get_val_of("ThetaIntEps");
    peak_eps = sgr->get_val_of("PeakIntEps");
    gauss_kronrod_eps = sgr->get_val_of("sIntEps");
    dopr_eps = sgr->get_val_of("DoPrEps");

    user_operations = sgr->get_operation_slist();
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
        ASSERT(mod->check_par_existence(it.at(0)),
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

    rdr->scanpars = rdr->assignHeaders(mod->parmap);
}
void Main::load_parameters(const size_t i) {
    if (mode == 2 && first_run) {
        N_bins = (size_t)sgr->get_val_of("Bins");
        N_best = (size_t)sgr->get_val_of("BestBins");
        p_random = sgr->get_val_of("Prandom");
        std::vector<double> lower, upper;
        double a, b;
        for (auto it : generator_list) {
            a = get_number(it.at(1), __func__);
            b = get_number(it.at(2), __func__);
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
                        *mod->parmap[it.at(0)] = get_number(it.at(3), __func__);
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
    } while (!mod->load_everything());
    std::cout << "Parameter point: " << i << std::endl;
}

vstring Main::def_thermal_bath(const vstring bath_particles) {
    mod->assign_bath_masses(bath_particles);
    return mod->find_thermal_procs(bath_particles);
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

void Main::set_channels(vstring bath_procs) {
    vstring neglected_particles = sgr->get_slist_of("NeglectParticles");
    vstring subtracted_channels = sgr->get_slist_of("SubtractChannels");
    vstring considered_channels = sgr->get_slist_of("ConsideredChannels");
    if (neglected_particles.size() != 0) {
        vstring temp;
        for (auto it : neglected_particles) {
            temp = mod->find_channels_by_particle(it);
            append_to_vstring(subtracted_channels, temp);
        }
    }
    if (subtracted_channels.size() != 0) {
        for (auto it : subtracted_channels) {
            ASSERT(mod->check_channel_existence(it),
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

int Main::check_var_existence(const std::string &var, const std::string func) {
    if (variable_map.find(var) == variable_map.end()) {
        if (!mod->check_par_existence(var)) {
            ASSERT(func == "",
                   "Error in " << func << ": " << var << " is not defined")
            return 0;
        }
        return 1;
    }
    return 2;
}

double Main::get_number(const std::string &arg, const std::string &func) {
    int var_type = check_var_existence(arg);
    if (var_type == 1) {
        return mod->get_parameter_val(arg);
    } else if (var_type == 2) {
        return variable_map[arg].res;
    } else {
        double val;
        try {
            val = std::stod(arg);
        } catch (const std::invalid_argument &) {
            std::cout << "Error in " << func << ": " << arg
                      << " is neither a declared variable, nor a number.\n";
            exit(1);
        }
        return val;
    }
}

void Main::Def(const vstring &args) {
    if (first_run) {
        check_arguments_number(true, 2, args.size(), __func__);
        double a = get_number(args.at(2), __func__);
        variable_map[args.at(1)] = {a, 0.};
    }
}

void Main::Set(const vstring &args) {
    check_arguments_number(true, 2, args.size(), __func__);
    int type = check_var_existence(args.at(1), __func__);
    double a = get_number(args.at(2), __func__);
    if (type == 1) {
        mod->change_parameter(args.at(1), a);
    } else {
        variable_map.at(args.at(1)).res = a;
    }
}

void Main::Add(const vstring &args) {
    check_arguments_number(true, 2, args.size(), __func__);
    int type = check_var_existence(args.at(1), __func__);
    double a = get_number(args.at(2), __func__);
    if (type == 1) {
        double b = mod->get_parameter_val(args.at(1));
        b += a;
        mod->change_parameter(args.at(1), b);
    } else {
        variable_map.at(args.at(1)).res += a;
    }
}

void Main::Sub(const vstring &args) {
    check_arguments_number(true, 2, args.size(), __func__);
    int type = check_var_existence(args.at(1), __func__);
    double a = get_number(args.at(2), __func__);
    if (type == 1) {
        double b = mod->get_parameter_val(args.at(1));
        b -= a;
        mod->change_parameter(args.at(1), b);
    } else {
        variable_map.at(args.at(1)).res -= a;
    }
}

void Main::Mult(const vstring &args) {
    check_arguments_number(true, 2, args.size(), __func__);
    int type = check_var_existence(args.at(1), __func__);
    double a = get_number(args.at(2), __func__);
    if (type == 1) {
        double b = mod->get_parameter_val(args.at(1));
        b *= a;
        mod->change_parameter(args.at(1), b);
    } else {
        variable_map.at(args.at(1)).res *= a;
    }
}

void Main::Div(const vstring &args) {
    check_arguments_number(true, 2, args.size(), __func__);
    int type = check_var_existence(args.at(1), __func__);
    double a = get_number(args.at(2), __func__);
    if (type == 1) {
        double b = mod->get_parameter_val(args.at(1));
        b /= a;
        mod->change_parameter(args.at(1), b);
    } else {
        variable_map.at(args.at(1)).res /= a;
    }
}

void Main::ChangeThermalBath(const vstring &args) {
    check_arguments_number(false, 1, args.size(), __func__);
    vstring bath_particles;
    vstring bath_procs;
    bath_procs.clear();
    for (size_t i = 1; i < args.size(); i++) {
        bath_particles.push_back(args.at(i));
    }

    bath_procs = def_thermal_bath(bath_particles);
    set_channels(bath_procs);

    mod->assigndm();
    mod->calc_widths_and_scale();
    mod->load_parameters();
    mod->load_tokens();
}

void Main::CalcXsec(const vstring &args) {
    check_arguments_number(false, 4, args.size(), __func__);
    ASSERT(start_point == (end_point - 1),
           "CalcXsec can only be called for one point, not a range. "
               << "Please choose the same StartPoint and EndPoint")

    std::unique_ptr<Tac> tac = std::make_unique<Tac>(mod);
    std::unique_ptr<DataReader> xsr =
        std::make_unique<DataReader>(output_file, 2);

    double min_sqs = get_number(args.at(1), __func__);
    double max_sqs = get_number(args.at(2), __func__);
    ASSERT((min_sqs > 0) && (max_sqs > 0),
           "Boundaries in " << __func__ << "can not have negative values.")
    if (min_sqs > max_sqs) {
        double temp = max_sqs;
        max_sqs = min_sqs;
        min_sqs = max_sqs;
    }

    size_t points = get_number(args.at(3), __func__);
    vstring channel;
    for (size_t i = 4; i < args.size(); i++) {
        channel.push_back(args.at(i));
    }

    double step = (max_sqs - min_sqs) / ((double)points);
    double res;
    for (double sqs = min_sqs; sqs <= max_sqs; sqs += step) {
        res = 0;
        for (auto it : channel) {
            res += tac->xsec(sqs * sqs, it).res;
        }
        xsr->save_data({"sqrts", "xsec"}, {sqs, res});
    }
}

void Main::CalcTac(const vstring &args) {
    check_arguments_number(false, 3, args.size(), __func__);
    ASSERT(start_point == (end_point - 1),
           "CalcTac can only be called for one point, not a range. "
               << "Please choose the same StartPoint and EndPoint")

    std::unique_ptr<Tac> tac = std::make_unique<Tac>(mod);
    std::unique_ptr<DataReader> tar =
        std::make_unique<DataReader>(output_file, 2);

    double min_x = get_number(args.at(1), __func__);
    double max_x = get_number(args.at(2), __func__);
    ASSERT((min_x > 0) && (max_x > 0),
           "Boundaries in " << __func__ << "can not have negative values.")
    if (min_x > max_x) {
        double temp = max_x;
        max_x = min_x;
        min_x = max_x;
    }

    size_t points = get_number(args.at(3), __func__);

    vstring channel;
    for (size_t i = 4; i < args.size(); i++) {
        channel.push_back(args.at(i));
    }

    if (args.size() == 4) channel = mod->get_all_channels();

    double step = (max_x - min_x) / ((double)points);
    ResError res;

    tac->sort_inimasses(channel);
    for (double i = min_x; i <= max_x; i += step) {
        res = tac->tac(i);
        tar->save_data({"x", "tac", "uncertainty"}, {i, res.res, res.err});
    }
}

void Main::CalcRelic(const vstring &args) {
    check_arguments_number(false, 1, args.size(), __func__);

    size_t mechanism = get_number(args.at(1), __func__);
    relops->set_mechanism(mechanism);
    omega = relops->CalcRelic();
    std::cout << "Omega full:\n" << omega << "\n\n";
    if (args.size() > 2) {
        check_var_existence(args.at(2), __func__);
        variable_map.at(args.at(2)) = omega;
    }
    if (channel_contrib != 1.)
        channel_percent = relops->calc_channel_contributions(channel_contrib);
}

void Main::FindParameter(const vstring &args) {
    if (first_run) {
        vanguard_step_size = sgr->get_val_of("VanguardStep");
        descent_learning_rate = sgr->get_val_of("DescentRate");
        max_N_bisections = sgr->get_val_of("MaxBisections");
    }
    check_arguments_number(false, 4, args.size(), (std::string) __func__);
    check_var_existence(args.at(1), __func__);
    size_t mechanism = get_number(args.at(2), __func__);
    double om_target = get_number(args.at(3), __func__);
    double om_err = get_number(args.at(4), __func__);

    relops->set_mechanism(mechanism);
    relops->set_omega_target(om_target);
    relops->set_omega_err(om_err);
    for (auto it : generator_list) {
        if (it.at(0) == args.at(1)) {
            double a = get_number(it.at(1));
            double b = get_number(it.at(2));
            relops->set_par_bounds(a, b);
            break;
        }
    }
    omega = relops->find_par(args.at(1));
    std::cout << "Omega full:\n" << omega << "\n\n";

    if (args.size() > 5) {
        check_var_existence(args.at(5), __func__);
        variable_map.at(args.at(5)) = omega;
    }
    if (channel_contrib != 1.)
        channel_percent = relops->calc_channel_contributions(channel_contrib);
}

void Main::RandomWalk(const vstring &args) {
    if (first_run) random_walk_rate = sgr->get_val_of("RandomWalkRate");
    check_arguments_number(false, 3, args.size(), (std::string) __func__);
    size_t mechanism = get_number(args.at(1), __func__);
    double om_target = get_number(args.at(2), __func__);
    double om_err = get_number(args.at(3), __func__);

    if (args.size() == 4) {
    } else {
        for (size_t i = 4; i < args.size(); i++) {
            double found = false;
            for (auto it : generator_list) {
                if (args.at(i) == it.at(0)) {
                    found = true;
                    double a = get_number(it.at(1), __func__);
                    double b = get_number(it.at(2), __func__);
                    relops->set_par_bounds(it.at(0), a, b);
                    break;
                }
                ASSERT(!found, "Error in "
                                   << __func__ << ": " << args.at(i)
                                   << " is not defined in the InputFile")
            }
        }
    }

    relops->set_mechanism(mechanism);
    relops->set_omega_target(om_target);
    relops->set_omega_err(om_err);

    omega = relops->random_walk();
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
        outfile << "Omega\tOmega_uncer";

        for (auto it : saved_pars) {
            ASSERT(mod->check_par_existence(it),
                   "Error in SaveData: "
                       << it << " is not a valid parameter of the model")
            outfile << "\t" << it;
        }
        for (size_t i = 1; i < args.size(); i++) {
            get_number(args.at(i), __func__);
            outfile << "\t" << args.at(i);
        }
        if (channel_contrib != 1.) {
            for (auto it : relops->get_bath_procs()) {
                outfile << "\t" << it;
            }
        }
        outfile << "\n";
    }

    outfile << omega.res << "\t" << omega.err;

    for (auto it : saved_pars) {
        outfile << "\t" << mod->get_parameter_val(it);
    }
    for (size_t i = 1; i < args.size(); i++) {
        outfile << "\t" << variable_map.at(args.at(i)).res;
    }
    for (auto it : channel_percent) {
        outfile << "\t" << it;
    }
    outfile << "\n";

    outfile.close();
}

void Main::do_user_operations() {
    omega = {0., 0.};
    if (first_run) {
        for (auto it : user_operations) {
            if (operations_map.find(it.at(0)) == operations_map.end()) {
                std::cout << it.at(0) << " is not a valid operation.\n";
                exit(1);
            }
        }
    }
    for (auto it : user_operations) {
        operations_map[it.at(0)](it);
    }
    if (first_run) {
        sgr.reset();
        setting_file.clear();
        first_run = false;
    }
}

Main::~Main() {
    if (mode == 2) relops->save_best_bins(output_file);
}
}  // namespace DT
