#include "../include/maincl.hpp"

namespace DT {
Main::Main(const int modee, const std::string &inputfile,
           const std::string &outputfile, double beps, const double xtoday,
           const bool fast, const int start, const int end)
    : MI(*new ModelInfo),
      mode(modee),
      output_file(outputfile),
      start_point(start),
      end_point(end + 1),
      FO(MI, fast) {
    srand((unsigned)time(NULL));

    if (beps >= 1.) beps = 0.99;
    if (beps == 0.) beps = 1e-100;
    beps_eps = std::log(beps);
    FO.set_xtoday(xtoday);

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

void Main::check_start_end_points() {
    ASSERT((end_point - 1) >= 1,
           "StartPoint and/or EndPoint cannot be smaller than 1")
    ASSERT((end_point - 1) >= start_point,
           "StartPoint cannot be larger than EndPoint")
}

void Main::load_generation_file() {
    generator_list = rdr->get_generation_slist();
    ASSERT(generator_list.size() != 0, "Error in Inputfile: It is empty")
    for (auto it : generator_list) {
        if (mode == 1) {
            ASSERT(it.size() == 4,
                   "Error in InputFile: "
                       << it.at(0) << " is missing a boundary or initial value")
        } else {
            ASSERT(it.size() >= 3,
                   "Error in InputFile: " << it.at(0)
                                          << " is missing a boundary value")
        }
        MI.check_par_existence(it.at(0));
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
        std::vector<double> lower, upper;
        double a, b;
        for (auto it : generator_list) {
            a = std::stod(it.at(1));
            b = std::stod(it.at(2));
            lower.push_back(a);
            upper.push_back(b);
        }
        std::unordered_map<std::string, double> best;
        if (rdr->is_binned) {
            best = rdr->get_best_bins();
        }
        Mc = std::make_unique<MC>(generator_list.size(), lower, upper, best);
    }
    do {
        switch (mode) {
            case 1:
                if (first_run)
                    for (auto it : generator_list) {
                        *MI.parmap[it.at(0)] = std::stod(it.at(3));
                    }
                break;
            case 2: {
                dvec1 new_pars = Mc->generate_new_pars();
                for (size_t j = 0; j < generator_list.size(); j++) {
                    MI.change_parameter(generator_list[j][0], new_pars[j],
                                        false);
                }
                MI.load_everything();
            } break;
            case 3:
                rdr->read_parameter(i);
                break;
            default:
                break;
        }
    } while (!MI.load_everything());
    std::cout << "Parameter point: " << i << std::endl;
}

double Main::get_parameter(const std::string &par) {
    MI.check_par_existence(par);
    return *MI.parmap[par];
}

void Main::change_parameter(const std::string &par, const double newval) {
    MI.check_par_existence(par);
    MI.change_parameter(par, newval);
}

VecString Main::def_thermal_bath(const VecString bath_particles) {
    MI.assign_bath_masses(bath_particles);
    return MI.find_thermal_procs(bath_particles);
}

void Main::set_channels(const VecString &consider, VecString &subtract,
                        const VecString &neglect) {
    // search channels which include the neglected particles
    if (neglect.size() != 0) {
        VecString temp;
        for (auto it : neglect) {
            temp = MI.find_channels_by_particle(it);
            append_to_VecString(subtract, temp);
        }
    }
    // remove all channels that need to be neglected
    if (subtract.size() != 0) {
        for (auto it : subtract) {
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
    // with the remaining channels only consider the ones which the user wants
    if (consider.size() != 0) {
        bool found;
        for (auto it : consider) {
            found = false;
            for (auto jt : bath_procs) {
                if (it == jt) {
                    found = true;
                    break;
                }
            }
            ASSERT(
                found == true,
                "The channel " << it << " does not exist in this thermal bath");
        }
        bath_procs = consider;
    }
}

void Main::ChangeThermalBath(const VecString &args) {
    check_arguments_number(false, 1, args.size(), __func__);
    VecString bath_particles;
    bath_procs.clear();
    for (size_t i = 1; i < args.size(); i++) {
        bath_particles.push_back(args.at(i));
    }

    bath_procs = def_thermal_bath(bath_particles);
    // set_channels();

    MI.assigndm();
    MI.calc_widths_and_scale();
    MI.load_parameters();
    MI.load_tokens();
}

void Main::CalcXsec(double sqsmin, double sqsmax, const size_t points,
                    const std::string outfile, const VecString channels) {
    AnnihilationAmps AA;
    std::unique_ptr<SigvInt> sigv = std::make_unique<SigvInt>(MI, AA);
    std::unique_ptr<DataReader> xsr =
        std::make_unique<DataReader>(output_file, 2);

    ASSERT((sqsmin > 0) && (sqsmax > 0),
           "Boundaries in " << __func__ << "can not have negative values.")
    if (sqsmin > sqsmax) {
        double temp = sqsmax;
        sqsmax = sqsmin;
        sqsmin = temp;
    }

    double step = (sqsmax - sqsmin) / ((double)points);
    double res;
    for (double sqs = sqsmin; sqs <= sqsmax; sqs += step) {
        res = 0;
        for (auto it : channels) {
            res += sigv->xsec(sqs * sqs, it);
        }
        xsr->save_data({"sqrts", "xsec"}, {sqs, res});
    }
}

void Main::CalcTac(double xmin, double xmax, const size_t points,
                   const std::string outfile, VecString channels) {
    Tac tac(MI);
    std::unique_ptr<DataReader> TAR = std::make_unique<DataReader>(outfile, 2);
    ASSERT((xmin > 0) && (xmax > 0),
           "Boundaries in " << __func__ << "can not have negative values.")
    if (xmin > xmax) {
        double temp = xmax;
        xmax = xmin;
        xmin = temp;
    }
    if (channels.size() == 0) channels = MI.channelnames;
    double step = (xmax - xmin) / ((double)points);
    double res;
    double beps_save = beps_eps;
    beps_eps = log(1e-100);
    tac.sort_inimasses(channels);
    for (double i = xmin; i <= xmax; i += step) {
        res = tac(i);
        TAR->save_data({"x", "tac"}, {i, res});
    }
    beps_eps = beps_save;
}

double Main::CalcRelic(const int mechanism) {
    switch (mechanism) {
        case 0:
            omega = FO(bath_procs);
            break;
        default:
            std::cout << "This mechanism ID is not valid. Please set the "
                         "mechanism to 0 or 1.\n";
            break;
    }
    std::cout << "Omega full:\n" << omega << "\n\n";
    return omega;
}

void Main::FindParameter(const std::string &par, const double target,
                         const double eps) {
    MI.check_par_existence(par);
    double a, b;
    for (auto it : generator_list)
        if (it.at(0) == par) {
            a = std::stod(it.at(1));
            b = std::stod(it.at(2));
            break;
        }
    OmegaGoal OMG(MI, FO, {par}, bath_procs, target);
    FindRoot fr(a, b, eps, target);
    fr.find(OMG, *MI.parmap[par]);
    omega = OMG.get_omega();
    std::cout << "Omega full:\n" << omega << "\n\n";
    if (channel_contrib != 1.)
        channel_percent = relops->calc_channel_contributions(channel_contrib);
}

void Main::RandomWalk(const double target, const double eps) {
    VecDoub lower(generator_list.size()), upper(generator_list.size());
    VecString pars(generator_list.size());
    double a, b;
    for (size_t i = 0; i < generator_list.size(); i++) {
        pars[i] = generator_list[i][0];
        a = std::stod(generator_list[i][1]);
        b = std::stod(generator_list[i][2]);
        lower[i] = a;
        upper[i] = b;
    }
    omega = relops->random_walk(pars, lower, upper);
    std::cout << "Omega full:\n" << omega << "\n\n";
    if (channel_contrib != 1.)
        channel_percent = relops->calc_channel_contributions(channel_contrib);
}

void Main::SaveData(const VecString &save_pars) {
    std::string filesave = "../dataOutput/" + output_file;

    if (first_run) {
        std::ofstream reset;
        reset.open(filesave, std::ofstream::out | std::ofstream::trunc);
        reset.close();
        first_run = false;
    }

    std::ofstream outfile(filesave, std::ios::out | std::ios::app);

    outfile.seekp(0, std::ios::end);

    if (outfile.tellp() == 0) {
        outfile << "Omega";

        for (auto it : save_pars) {
            MI.check_par_existence(it);
            outfile << "\t" << it;
        }
        if (channel_contrib != 1.) {
            for (auto it : relops->get_bath_procs()) {
                outfile << "\t" << it;
            }
        }
        outfile << "\n";
    }

    outfile << omega;

    for (auto it : save_pars) {
        outfile << "\t" << *MI.parmap[it];
    }
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
