#include "montecarlo.hpp"

namespace DT {

Average operator+(const Average &a, const double b) {
    Average res;
    res.val = (a.val * a.N + b) / (a.N + 1);
    res.N = a.N + 1;
    return res;
}

std::string MC::bins_to_ID(const std::vector<int> &bins) {
    std::string res = "";
    std::string temp;
    for (size_t i = 0; i < bins.size() - 1; i++) {
        res += std::to_string(bins[i]) + ",";
    }
    res += std::to_string((int)bins[bins.size() - 1]);
    return res;
}

std::vector<int> MC::ID_to_bins(const std::string &ID) {
    std::vector<int> res;
    std::string temp;
    std::stringstream ss(ID);

    while (getline(ss, temp, ',')) {
        temp.erase(std::remove_if(temp.begin(), temp.end(), isspace),
                   temp.end());
        if (temp.size() != 0) res.push_back(std::stoi(temp));
    }
    return res;
}

void MC::add_to_best(const std::string &ID, const double x) {
    best_bins[ID] = best_bins[ID] + x;
    if (best_bins[ID].val < worst_bin) {
        worst_bin = best_bins[ID].val;
        worst_bin_ID = ID;
    }
}

void MC::set_weight(const dvec1 &pars, const double x) {
    std::vector<int> bins;
    std::string ID;

    // index = ceil((xi-x0)*Nb/(xf-xi)) - 1
    for (size_t i = 0; i < N_pars; i++) {
        bins.push_back(ceil((pars.at(i) - lbounds[i]) * (double)N_bins /
                            (ubounds[i] - lbounds[i])) -
                       1);
    }
    ID = bins_to_ID(bins);
    if (best_bins.size() < N_best) {
        add_to_best(ID, x);
    } else if (best_bins.count(ID) != 0) {
        add_to_best(ID, x);
    } else if (x > worst_bin) {
        best_bins.erase(worst_bin_ID);
        best_bins[ID] = {x, 1.};
        double new_worst = 2.;
        std::string new_worst_ID = "";
        for (auto it : best_bins) {
            if (it.second.val < new_worst) {
                new_worst = it.second.val;
                new_worst_ID = it.first;
            }
        }
        worst_bin = new_worst;
        worst_bin_ID = new_worst_ID;
    }
    points++;
}

std::string MC::get_random_bin_ID() {
    std::string res;
    double tot = 0., rand = 0.;
    avec1 p;
    vstring IDs;
    for (auto it : best_bins) {
        tot += it.second.val;
        p.push_back(it.second);
        IDs.push_back(it.first);
    }
    for (auto &it : p) it.val /= tot;
    for (size_t j = 1; j < p.size(); j++) p[j].val += p[j - 1].val;
    rand = generate_random(0., 1.);
    for (size_t j = 0; j < p.size(); j++) {
        if (rand < p[j].val) {
            res = IDs[j];
            break;
        }
    }
    return res;
}

dvec1 MC::generate_new_pars() {
    dvec1 res;
    if (points >= begin) {
        std::string bin_ID = get_random_bin_ID();
        std::vector<int> bins = ID_to_bins(bin_ID);
        for (size_t i = 0; i < lbounds.size(); i++) {
            double dx = (ubounds[i] - lbounds[i]) / (double)N_bins;
            double a =
                generate_random(lbounds[i] + dx * (double)bins[i],
                                lbounds[i] + dx * ((double)bins[i] + 1.));
            res.push_back(a);
        }
    } else {
        for (size_t i = 0; i < N_pars; i++) {
            res.push_back(generate_random(lbounds[i], ubounds[i]));
        }
    }
    if (points == 10000) print_best();

    return res;
}

void MC::print_best() {
    for (auto it : best_bins)
        std::cout << it.first << "\t" << it.second.val << "\n";
}
}  // namespace DT
