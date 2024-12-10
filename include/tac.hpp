#pragma once
#include <cmath>
#include <functional>
#include <memory>
#include <unordered_map>

#include "data_structures.hpp"
#include "general_model.hpp"
#include "hyper_parameters.hpp"
#include "integration_methods.hpp"
#include "result_error_pair.hpp"
#include "utils.hpp"

namespace DT {

class SigvInt {
   private:
    Model &mod;
    double x;

   public:
    VecDoub polK2s;
    std::vector<double> dsmasses;
    std::unordered_map<double, ResError> sig_s;
    double lower_bound;
    SigvInt(Model &model) : mod(model) {};

    void set_x(const double new_x);

    void set_lower_bound(const double new_lower);

    void set_dsmasses(const std::vector<double> &masses);

    ResError xsec(const double &s, const std::string &channel);

    ResError wij(const double &s);

    void calc_polK2();

    double lipsv(const double &s);

    ResError operator()(const double &u);

    ~SigvInt() {};
};

class Tac {
   private:
    Model &mod;
    double m1, m2;
    size_t N_relevant_peaks;
    bool tac_error_reached = false;
    VecDoub boundaries;
    std::map<double, vstring> inimap;
    std::map<double, vstring>::iterator ini_it;

   public:
    SigvInt sigv;
    Tac(Model &model);

    // sorts different channels by their total initial state masses
    bool sort_inimasses(const vstring &ch_str = {});

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
    ResError integrate_peaks(const double &x);

    // estimate s integral
    void estimate_integrate_s(const double &x, ResError &res,
                              ResError &estimate);

    // integral over s of the whole interval
    void integrate_s(const double &x, ResError &res, double &estimate);

    // the one. the only. the THERMALLY AVERAGED CROSS SECTION!! at a certain x
    // value
    ResError tac(const double &x);

    double get_error();

    void clear_state(const bool full);

    ~Tac() {};
};

}  // namespace DT
