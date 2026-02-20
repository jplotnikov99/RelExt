#include "../include/montecarlo.hpp"

namespace DT {

std::vector<int> MonteCarlo::get_bins(const VecDoub &pars) {
    std::vector<int> res;
    // index = ceil((xi-x0)*Nb/(xf-xi)) - 1
    for (size_t i = 0; i < N_pars; i++) {
        res.push_back(ceil((pars[i] - lbounds[i]) * (double)N_bins /
                           (ubounds[i] - lbounds[i])) -
                      1);
    }
    return res;
}

std::string MonteCarlo::bins_to_ID(const std::vector<int> &bins) {
    std::string res = "";
    std::string temp;
    for (size_t i = 0; i < bins.size() - 1; i++) {
        res += std::to_string(bins[i]) + ",";
    }
    res += std::to_string((int)bins[bins.size() - 1]);
    return res;
}

std::vector<int> MonteCarlo::ID_to_bins(const std::string &ID) {
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

void MonteCarlo::set_weight(const VecDoub &pars, const double &relic) {
    double weight = relic > target ? pow(target / relic, 2) : pow(relic / target, 2);
    std::vector<int> bins = get_bins(pars);
    std::string ID = bins_to_ID(bins);
    if (best_cells.count(ID) != 0) {
        best_cells[ID] = (best_cells[ID] > weight) ? best_cells[ID] : weight;
    } else if (best_cells.size() < N_best) {
        best_cells[ID] = weight;
        if (worst_cell > weight) {
            worst_cell = weight;
            worst_cell_ID = ID;
        }
    } else if (weight > worst_cell) {
        best_cells.erase(worst_cell_ID);
        best_cells[ID] = weight;
        double new_worst = 2.;
        std::string new_worst_ID = "";
        for (auto it : best_cells) {
            if (it.second < new_worst) {
                new_worst = it.second;
                new_worst_ID = it.first;
            }
        }
        worst_cell = new_worst;
        worst_cell_ID = new_worst_ID;
    }
}

std::string MonteCarlo::select_random_cell_ID() {
    std::string res;
    dvec1 p;
    VecString IDs;
    for (auto it : best_cells) {
        IDs.push_back(it.first);
    }
    int rand = (int)generate_random(0., (double)N_best);
    res = IDs[rand];
    return res;
}

VecDoub MonteCarlo::generate_new_pars() {
    VecDoub res(N_pars);
    double rand = generate_random(0., 1.);
    if ((best_cells.size() == N_best) && (rand > p_random)) {
        std::string cell_ID = select_random_cell_ID();
        std::vector<int> bins = ID_to_bins(cell_ID);
        for (size_t i = 0; i < lbounds.size(); i++) {
            double dx = (ubounds[i] - lbounds[i]) / (double)N_bins;
            res[i] = generate_random(lbounds[i] + dx * (double)bins[i],
                                     lbounds[i] + dx * ((double)bins[i] + 1.));
        }
    } else {
        for (size_t i = 0; i < N_pars; i++) 
            res[i] = generate_random(lbounds[i], ubounds[i]);
    }
    return res;
}

void MonteCarlo::print_best_cells() {
    for (auto it : best_cells)
        std::cout << it.first << "\t" << it.second << "\n";
}

void MonteCarlo::save_best_cells(const VecString &par_names,
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
    for (auto it : best_cells) {
        outfile << it.first << "|";
        outfile << it.second << "\n";
    }
}
}  // namespace DT
