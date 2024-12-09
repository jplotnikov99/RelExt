#pragma once
#include <cmath>
#include <functional>
#include <memory>
#include <unordered_map>

#include "general_model.hpp"
#include "integration_methods.hpp"
#include "data_structures.hpp"
#include "hyper_parameters.hpp"
#include "result_error_pair.hpp"
#include "utils.hpp"

namespace DT {
class Tac {
   private:
    Model &mod;
    double m1, m2;
    double lower_bound;
    size_t N_relevant_peaks;
    bool tac_error_reached = false;
    VecDoub boundaries;
    VecDoub polK2s;
    std::unordered_map<double, ResError> sig_s;
    std::map<double, vstring> inimap;
    std::map<double, vstring>::iterator ini_it;

   public:
    std::vector<double> dsmasses;

    Tac(Model &model);

    // sorts different channels by their total initial state masses
    bool sort_inimasses(const vstring &ch_str = {});

    ResError eval(const double cos_t, const double s);

    // adaptive simpson
    ResError simpson38_adap_cos_t(const double l, const double r,
                                  const double &s, ResError *f,
                                  const double &est, const size_t depth = 0);

    ResError xsec(const double &s, const std::string &channel);

    ResError wij(const double &s);

    void calc_polK2(const double &x);

    double lipsv(const double &s, const double &x);

    ResError sigv(const double &u, const double &x);

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

    // simpson method for the calculation of the peaks for TAC
    ResError simpson38_peak(const double l, const double r, const double &x);

    // adaptive simpson method for the calculation of the peaks for TAC
    ResError simpson38_adap_peak(const double l, const double r,
                                 const double &x, const ResError &ans,
                                 size_t depth = 0);

    // gauss kronrod 31 point method to be used as quick estimation of TAC
    // between peaks
    double kronrod_61(const double l, const double r, const double &x);

    // adaptive gauss kronrod 13 point method for TAC between peaks
    ResError adap_gauss_kronrod(const double l, const double r, const double &x,
                                const double &est, size_t depth = 0);

    // integral of the peaks over s
    ResError integrate_peaks(const double &x);

    // estimate s integral
    void estimate_integrate_s(const double &x, ResError &res, double &estimate);

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
