#include "../include/maincl.hpp"

namespace DT {
Main::Main(char *argv[], const int modee, double beps, const double xtoday,
           const bool fast, const bool calcwidths, const bool savecontribs)
    : AA(*new AnnihilationAmps(calc_widths)),
      mode(modee),
      output_file(std::string(argv[2])),
      calc_widths(calcwidths),
      save_contribs(savecontribs),
      FO(AA, fast) {
    srand((unsigned)time(NULL));
    std::string inputfile = std::string(argv[1]);
    if (beps >= 1.) beps = 0.99;
    if (beps == 0.) beps = 1e-100;
    beps_eps = std::log(beps);
    FO.set_xtoday(xtoday);
    if (inputfile != "") {
        rdr = std::make_unique<DataReader>(inputfile, 1);
        switch (mode) {
            case 1:
                load_generation_file();
                break;
            case 2:
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
        AA.check_par_existence(it.at(0));
    }
}

void Main::load_read_file() {
    size_t N_par_points = rdr->datalines();
    rdr->scanpars = rdr->assignHeaders(AA.parmap);
}

void Main::PrintParticles() { AA.print_prtcls(); }

void Main::PrintChannels() { AA.print_channels(); }

void Main::PrintDM() { AA.print_DM(); }

void Main::LoadParameters(const size_t i) {
    do {
        switch (mode) {
            case 1:
                for (auto it : generator_list) {
                    *AA.parmap[it.at(0)] = std::stod(it.at(3));
                }
                break;
            case 2: {
                if (MC) {
                    VecDoub new_pars = MC->generate_new_pars();
                    for (size_t j = 0; j < generator_list.size(); j++) {
                        AA.change_parameter(generator_list[j][0], new_pars[j],
                                            false);
                    }
                } else {
                    double a;
                    for (auto it : generator_list) {
                        a = generate_random(std::stod(it[1]), std::stod(it[2]));
                        AA.change_parameter(it[0], a, false);
                    }
                }
            } break;
            case 3:
                rdr->read_parameter(i);
                break;
            default:
                break;
        }
    } while (!AA.load_everything());
}

double Main::GetParameter(const std::string &par) {
    AA.check_par_existence(par);
    return *AA.parmap[par];
}

void Main::ChangeParameter(const std::string &par, const double newval) {
    AA.check_par_existence(par);
    double temp = *AA.parmap[par];
    if (!AA.change_parameter(par, newval))
        std::cout << "Warning in: " << __func__ << ". " << par
                  << " does not fulfill the imposed CONDITIONS.\n";
}

VecString Main::def_thermal_bath(const VecString bath_particles) {
    AA.assign_bath_masses(bath_particles);
    return AA.find_thermal_procs(bath_particles);
}

void Main::set_channels(const VecString &consider, VecString &subtract,
                        const VecString &neglect) {
    // search channels which include the neglected particles
    if (neglect.size() != 0) {
        VecString temp;
        for (auto it : neglect) {
            temp = AA.find_channels_by_particle(it);
            append_to_VecString(subtract, temp);
        }
    }
    // remove all channels that need to be neglected
    if (subtract.size() != 0) {
        for (auto it : subtract) {
            ASSERT(AA.check_channel_existence(it),
                   "Error in NEGLECTCHANNELS: " << it
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

    AA.assigndm();
    AA.calc_widths_and_scale();
    AA.load_parameters();
    AA.load_tokens();
}

void Main::CalcAmp(const double s, const double cos_t, VecString channels) {
    if (channels.size() == 0)
        channels = AA.get_all_channels();
    else
        for (auto &it : channels)
            ASSERT(AA.check_channel_existence(it),
                   "Error in NEGLECTCHANNELS: " << it
                                                << " is not a valid channel.")
    AA.set_s(s);
    for (auto it : channels) {
        AA.set_channel({it}, false);
        std::cout << std::setprecision(16) << it << ": " << AA(cos_t) << "\n";
    }
}

void Main::CalcXsec(double sqsmin, double sqsmax, const size_t points,
                    const std::string outfile, VecString channels) {
    AnnihilationAmps AA(calc_widths);
    for (auto &it : channels)
        ASSERT(AA.check_channel_existence(it),
               "Error in NEGLECTCHANNELS: " << it << " is not a valid channel.")
    std::unique_ptr<SigvInt> sigv = std::make_unique<SigvInt>(AA);
    std::unique_ptr<DataReader> xsr = std::make_unique<DataReader>(outfile, 2);

    ASSERT((sqsmin > 0) && (sqsmax > 0),
           "Boundaries in " << __func__ << "can not have negative values.")
    if (sqsmin > sqsmax) {
        double temp = sqsmax;
        sqsmax = sqsmin;
        sqsmin = temp;
    }

    double step = (sqsmax - sqsmin) / ((double)points);
    double res;
    VecString prs;
    double dof1, dof2;
    // for (double sqs = sqsmin; sqs <= sqsmax; sqs += step) {
    res = 0;
    for (auto it : channels) {
        prs = AA.get_channel_prtcls(it);
        dof1 = AA.DSdof[prs[0]];
        dof2 = AA.DSdof[prs[1]];
        res += sigv->xsec(sqsmin * sqsmin, it) / (dof1 * dof2);
    }
    xsr->save_data({"sqrts", "xsec"}, {sqsmin, res});
    //}
}

void Main::CalcTac(double xmin, double xmax, const size_t points,
                   const std::string outfile, VecString channels) {
    for (auto &it : channels)
        ASSERT(AA.check_channel_existence(it),
               "Error in NEGLECTCHANNELS: " << it << " is not a valid channel.")
    Tac tac(AA);
    std::unique_ptr<DataReader> TAR = std::make_unique<DataReader>(outfile, 2);
    ASSERT((xmin > 0) && (xmax > 0),
           "Boundaries in " << __func__ << "can not have negative values.")
    if (xmin > xmax) {
        double temp = xmax;
        xmax = xmin;
        xmin = temp;
    }
    if (channels.size() == 0) channels = AA.get_all_channels();
    double step = (xmax - xmin) / ((double)points);
    double res;
    double beps_save = beps_eps;
    beps_eps = log(1e-100);
    tac.sort_inimasses(channels);
    if (xmin == xmax) {
        res = tac(xmin);
        std::cout << xmin << " " << res << "\n";
        TAR->save_data({"x", "tac"}, {xmin, res});
    } else
        for (double i = xmin; i <= xmax; i += step) {
            res = tac(i);
            TAR->save_data({"x", "tac"}, {i, res});
        }
    beps_eps = beps_save;
}

void Main::InitMonteCarlo(size_t Nbins, const size_t Nbest,
                          const double prandom, const double target) {
    ASSERT(mode == 1 || mode == 2, "Monte Carlo works only in mode 1 and 2")
    std::unordered_map<std::string, double> best;
    if (rdr->is_binned) {
        best = rdr->get_best_bins();
        Nbins = (size_t)rdr->get_val_of("Bins");
    }
    size_t Npars = generator_list.size();
    VecDoub lower(Npars);
    VecDoub upper(Npars);
    for (size_t i = 0; i < Npars; i++) {
        lower[i] = std::stod(generator_list[i][1]);
        upper[i] = std::stod(generator_list[i][2]);
    }
    MC = std::make_unique<MonteCarlo>(Npars, lower, upper, Nbins, Nbest,
                                      prandom, target, best);
}

void Main::SetWeight() {
    VecDoub pars(generator_list.size());
    for (size_t i = 0; i < generator_list.size(); i++)
        pars[i] = *AA.parmap[generator_list[i][0]];
    MC->set_weight(pars, omega);
}

double Main::CalcRelic(const int mechanism) {
    switch (mechanism) {
        case 0:
            omega = FO(bath_procs);
            break;
        default:
            std::cout << "This mechanism ID is not valid. Please set the "
                         "mechanism to 0 or 1.\n ";
            break;
    }
    std::cout << "Omega full:\n" << omega << "\n\n";
    if (save_contribs) {
        VecDoub temp(FO.calc_contributions(bath_procs));
        channel_frac = temp;
    }
    return omega;
}

void Main::FindParameter(const std::string &par, const double target,
                         const double eps) {
    ASSERT(mode == 1 || mode == 2, "FindParameter works only in mode 1 and 2")
    AA.check_par_existence(par);
    double a, b;
    for (auto it : generator_list)
        if (it.at(0) == par) {
            a = std::stod(it[1]);
            b = std::stod(it[2]);
            break;
        }
    OmegaGoal OMG(AA, FO, {par}, bath_procs, target);
    FindRoot fr(a, b, eps, target);
    fr.find(OMG, *AA.parmap[par]);
    omega = OMG.get_omega();
    std::cout << "Omega full:\n" << omega << "\n\n";
    if (save_contribs) {
        VecDoub temp(FO.calc_contributions(bath_procs));
        channel_frac = temp;
    }
}

void Main::RWalk(const double target, const double eps, const double gam,
                 const size_t maxit) {
    ASSERT(mode == 1 || mode == 2, "RWalk works only in mode 1 and 2")
    VecDoub lower(generator_list.size()), upper(generator_list.size());
    VecString pars(generator_list.size());
    for (size_t i = 0; i < generator_list.size(); i++) {
        pars[i] = generator_list[i][0];
        lower[i] = std::stod(generator_list[i][1]);
        upper[i] = std::stod(generator_list[i][2]);
    }
    OmegaGoal OMG(AA, FO, pars, bath_procs, target);
    RandomWalk RW(lower, upper, eps, gam, maxit);
    VecDoub xnew(RW.walk(OMG));
    OMG(xnew);
    omega = OMG.get_omega();
    std::cout << "Omega full:\n" << omega << "\n\n";
    if (save_contribs) {
        VecDoub temp(FO.calc_contributions(bath_procs));
        channel_frac = temp;
    }
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
            AA.check_par_existence(it);
            outfile << "\t" << it;
        }
        if (save_contribs) {
            for (auto it : bath_procs) {
                outfile << "\t" << it;
            }
        }
        outfile << "\n";
    }
    outfile << omega;
    for (auto it : save_pars) {
        outfile << "\t" << *AA.parmap[it];
    }
    for (size_t i = 0; i < channel_frac.size(); i++) {
        outfile << "\t" << channel_frac[i];
    }
    outfile << "\n";

    outfile.close();
}

Main::~Main() {
    if (MC) {
        VecString par_names(generator_list.size());
        for (size_t i = 0; i < generator_list.size(); i++) {
            par_names[i] = generator_list[i][0];
        }
        MC->save_best_bins(par_names, output_file);
    }
    delete &AA;
}
}  // namespace DT
