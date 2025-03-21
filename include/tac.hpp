#pragma once
#include <cmath>
#include <functional>
#include <memory>

#include "data_structures.hpp"
#include "general_model.hpp"
#include "hyper_parameters.hpp"
#include "numerical/integration_methods.hpp"
#include "utils.hpp"

namespace DT {

static const double G = 6.7e-39;

class SigvInt {
   private:
    AnnihilationAmps &AA;
    double x;

   public:
    VecDoub polK2s;
    std::vector<double> dsmasses;
    std::unordered_map<double, double> sig_s;
    double lower_bound;
    SigvInt(AnnihilationAmps &AnAmps) : AA(AnAmps) {};

    void set_x(const double new_x);

    void set_lower_bound(const double new_lower);

    void set_dsmasses(const std::vector<double> &masses);

    double xsec(const double &s, const std::string &channel);

    double wij(const double &s);

    void calc_polK2();

    double lipsv(const double &s);

    double operator()(const double &u);

    ~SigvInt() {};
};

class Tac {
   private:
    AnnihilationAmps &AA;
    double m1, m2;
    size_t N_relevant_peaks;
    VecDoub boundaries;
    std::map<double, VecString> inimap;
    std::map<double, VecString>::iterator ini_it;

   public:
    SigvInt sigv;
    Tac(AnnihilationAmps &AnAmps);

    // sorts different channels by their total initial/final state masses
    bool sort_inimasses(const VecString &ch_str = {});

    bool beps(const double &x);

    // checks if the peak is suppressed enough by the boltzmann factor to not
    // matter for seperate integration
    double peak_relevance(const double &peakpos);

    // defines a triplet with the boundaries of a resonance peak and the width
    // in terms of the variable u
    double *peak_bounds(const double &peakpos, const double &width);

    // sorts the boundaries triplets in descending order
    void i_sort_boundaries();

    // checks if the boundaries are in descending order
    void check_boundaries();

    // sets all the relevant peak boundaries (sorted) and the number of relevant
    // peaks dl
    void set_boundaries(const double &x);

    // integral of the peaks over s
    double integrate_peaks(const double &x);

    // estimate s integral
    void estimate_integrate_s(const double &x, double &res, double &estimate);

    // integral over s of the whole interval
    void integrate_s(const double &x, double &res, double &estimate);

    double prefac(const double &x);

    // the one. the only. the THERMALLY AVERAGED CROSS SECTION!! at a certain x
    // value
    double operator()(const double &x);

    void clear_state(const bool full);

    ~Tac() {};
};

}  // namespace DT
