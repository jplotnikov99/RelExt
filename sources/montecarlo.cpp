#include "../include/montecarlo.hpp"

namespace DT {

ivec1 MonteCarlo::get_bins(const VecDoub &pars) {
    ivec1 res;
    // index = ceil((xi-x0)*Nb/(xf-xi)) - 1
    for (size_t i = 0; i < N_pars; i++) {
        res.push_back(ceil((pars[i] - lbounds[i]) * (double)N_bins /
                           (ubounds[i] - lbounds[i])) -
                      1);
    }
    return res;
}

std::string MonteCarlo::bins_to_ID(const ivec1 &bins) {
    std::string res = "";
    std::string temp;
    for (size_t i = 0; i < bins.size() - 1; i++) {
        res += std::to_string(bins[i]) + ",";
    }
    res += std::to_string((int)bins[bins.size() - 1]);
    return res;
}

ivec1 MonteCarlo::ID_to_bins(const std::string &ID) {
    ivec1 res;
    std::string temp;
    std::stringstream ss(ID);

    while (getline(ss, temp, ',')) {
        temp.erase(std::remove_if(temp.begin(), temp.end(), isspace),
                   temp.end());
        if (temp.size() != 0) res.push_back(std::stoi(temp));
    }
    return res;
}

void MonteCarlo::set_weight(const VecDoub &pars, double x) {
    x = x > target ? pow(target / x, 2) : pow(x / target, 2);
    ivec1 bins = get_bins(pars);
    std::string ID = bins_to_ID(bins);
    if (best_bins.count(ID) != 0) {
        best_bins[ID] = (best_bins[ID] > x) ? best_bins[ID] : x;
    } else if (best_bins.size() < N_best) {
        best_bins[ID] = x;
        if (worst_bin > x) {
            worst_bin = x;
            worst_bin_ID = ID;
        }
    } else if (x > worst_bin) {
        best_bins.erase(worst_bin_ID);
        best_bins[ID] = x;
        double new_worst = 2.;
        std::string new_worst_ID = "";
        for (auto it : best_bins) {
            if (it.second < new_worst) {
                new_worst = it.second;
                new_worst_ID = it.first;
            }
        }
        worst_bin = new_worst;
        worst_bin_ID = new_worst_ID;
    }
    points++;
}

std::string MonteCarlo::get_random_bin_ID() {
    std::string res;
    dvec1 p;
    VecString IDs;
    for (auto it : best_bins) {
        IDs.push_back(it.first);
    }
    int rand = (int)generate_random(0., (double)N_best);
    res = IDs[rand];
    return res;
}

VecDoub MonteCarlo::generate_new_pars() {
    VecDoub res(N_pars);
    double rand = generate_random(0., 1.);
    if ((best_bins.size() == N_best) && (rand > p_random)) {
        std::string bin_ID = get_random_bin_ID();
        ivec1 bins = ID_to_bins(bin_ID);
        for (size_t i = 0; i < lbounds.size(); i++) {
            double dx = (ubounds[i] - lbounds[i]) / (double)N_bins;
            double a =
                generate_random(lbounds[i] + dx * (double)bins[i],
                                lbounds[i] + dx * ((double)bins[i] + 1.));
            res[i] = a;
        }
    } else {
        ivec1 bins;
        for (size_t i = 0; i < N_pars; i++) {
            res[i] = generate_random(lbounds[i], ubounds[i]);
        }
        bins = get_bins(res);
    }
    return res;
}

void MonteCarlo::print_best_bins() {
    for (auto it : best_bins)
        std::cout << it.first << "\t" << it.second << "\n";
}

void MonteCarlo::save_best_bins(const VecString &par_names,
                                const std::string &filename) {
    assert(par_names.size() == lbounds.size());
    std::string filesave = "../dataOutput/cells_" + filename;
    std::ofstream outfile(filesave);
    outfile << "--- Bin Info ---\n";
    outfile << "Bins    |" << N_bins << "\n";
    outfile << "--- Parameter Info ---\n";
    for (size_t i = 0; i < par_names.size(); i++) {
        outfile << par_names[i] << "\t|" << lbounds[i] << "\t,\t" << ubounds[i]
                << "\n";
    }
    outfile << "--- Best Bins ---\n";
    for (auto it : best_bins) {
        outfile << it.first << "|";
        outfile << it.second << "\n";
    }
}
}  // namespace DT
