#include "../include/montecarlo.hpp"

namespace DT {

ivec1 MC::get_bins(const dvec1 &pars) {
    ivec1 res;

    // index = ceil((xi-x0)*Nb/(xf-xi)) - 1
    for (size_t i = 0; i < N_pars; i++) {
        res.push_back(ceil((pars.at(i) - lbounds[i]) * (double)N_bins /
                           (ubounds[i] - lbounds[i])) -
                      1);
    }

    return res;
}

std::string MC::bins_to_ID(const ivec1 &bins) {
    std::string res = "";
    std::string temp;
    for (size_t i = 0; i < bins.size() - 1; i++) {
        res += std::to_string(bins[i]) + ",";
    }
    res += std::to_string((int)bins[bins.size() - 1]);
    return res;
}

ivec1 MC::ID_to_bins(const std::string &ID) {
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

int MC::get_bin_distance(const ivec1 &a, const ivec1 &b) {
    assert(a.size() == b.size());
    int temp = 0, res = 0;
    for (size_t i = 0; i < a.size(); i++) {
        temp = std::abs(a[i] - b[i]);
        if (temp > res) res = temp;
    }
    return res;
}

int MC::get_bin_distance(const std::string &a, const std::string &b) {
    ivec1 a1 = ID_to_bins(a), b1 = ID_to_bins(b);
    assert(b1.size() == b1.size());
    int temp = 0, res = 0;
    for (size_t i = 0; i < a.size(); i++) {
        temp = std::abs(a1[i] - b1[i]);
        if (temp > res) res = temp;
    }
    return res;
}

bool MC::is_excluded(const ivec1 &bins) {
    bool res;
    ivec1 current;
    for (auto it : excluded_bins) {
        res = false;
        current = ID_to_bins(it.first);
        for (size_t i = 0; i < bins.size(); i++) {
            if (std::abs(bins[i] - current[i]) > it.second) {
                res = true;
            }
        }
        if (!res) {
            return true;
        }
    }
    return false;
}

void MC::set_weight(const dvec1 &pars, const double x) {
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
    } /* else if (excluded_bins.count(ID) == 0) {
        double dev = std::abs(0.5 * log10(x));
        if (dev > 1) {
            int dis = 4 * dev;
            excluded_bins[ID] = dis;
        }
    }
 */
    points++;
}

std::string MC::get_random_bin_ID() {
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

dvec1 MC::generate_new_pars() {
    dvec1 res;
    double rand = generate_random(0., 1.);
    if ((best_bins.size() == N_best) && (rand > p_random)) {
        std::string bin_ID = get_random_bin_ID();
        ivec1 bins = ID_to_bins(bin_ID);
        for (size_t i = 0; i < lbounds.size(); i++) {
            double dx = (ubounds[i] - lbounds[i]) / (double)N_bins;
            double a =
                generate_random(lbounds[i] + dx * (double)bins[i],
                                lbounds[i] + dx * ((double)bins[i] + 1.));
            res.push_back(a);
        }
    } else {
        ivec1 bins;
        do {
            res.clear();
            for (size_t i = 0; i < N_pars; i++) {
                res.push_back(generate_random(lbounds[i], ubounds[i]));
            }
            bins = get_bins(res);
        } while (is_excluded(bins));
    }
    return res;
}

void MC::print_best_bins() {
    for (auto it : best_bins)
        std::cout << it.first << "\t" << it.second << "\n";
}

void MC::save_best_bins(const VecString &par_names, const std::string &filename) {
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
