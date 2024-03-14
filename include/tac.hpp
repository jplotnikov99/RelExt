#pragma once
#include <functional>
#include <cmath>
#include <unordered_map>
#include <memory>
#include "utils.hpp"
#include "general_model.hpp"
#include "hyper_parameters.hpp"
#include "result_error_pair.hpp"

namespace DT
{
    class Tac
    {
    private:
        std::shared_ptr<Model> mod;
        double m1;
        double m2;
        size_t N_relevant_peaks;
        bool max_prec_s = false;
        std::vector<double> boundaries;
        std::unordered_map<double, ResError> sig_s;
        std::unordered_map<double, ResError> tac_x;
        std::map<double, vstring> inimap;
        std::map<double, vstring>::iterator ini_it;

    public:
        Tac(std::shared_ptr<Model> model);

        // sorts different channels by their total initial state masses
        void sort_inimasses(const vstring &ch_str = {});

        // 3/8 simpson rule
        ResError simpson38_cos_t(const double l, const double r, const double &s);

        // adaptive simpson
        ResError simpson38_adap_cos_t(const double l, const double r, const double &s, const ResError ans, size_t depth = 0);

        ResError wij(const double &s);

        double lipsv(const double &s, const double &x);

        ResError sigv(const double &u, const double &x);

        bool beps(const double &x);

        // checks if the peak is suppressed enough by the boltzmann factor to not matter for seperate integration
        double peak_relevance(const double &peakpos);

        // defines a triplet with the boundaries of a resonance peak and the width in terms of the variable u
        double *peak_bounds(const double &peakpos, const double &width);

        // sorts the boundaries triplets in descending order
        void i_sort_boundaries();

        // sets all the relevant peak boundaries (sorted) and the number of relevant peaks dl
        void set_boundaries(const double &x);

        // simpson method for the calculation of the peaks for TAC
        ResError simpson38_peak(const double l, const double r, const double &x);

        // adaptive simpson method for the calculation of the peaks for TAC
        ResError simpson38_adap_peak(const double l, const double r, const double &x, const ResError &ans, size_t depth = 0);

        // gauss kronrod 31 point method to be used as quick estimation of TAC between peaks
        double kronrod_61(const double l, const double r, const double &x);

        // adaptive gauss kronrod 13 point method for TAC between peaks
        ResError adap_gauss_kronrod(const double l, const double r, const double &x, const double &est, int depth = 0);

        // integral of the peaks over s
        ResError integrate_peaks(const double &x);

        // estimate s integral
        void estimate_integrate_s(const double &x, ResError &res, double &estimate);

        // integral over s of the whole interval
        void integrate_s(const double &x, ResError &res, double &estimate);

        // the one. the only. the THERMALLY AVERAGED CROSS SECTION!! at a certain x value
        ResError tac(const double &x);

        double get_error();

        void clear_state(const bool full);

        ~Tac(){};
    };

} // namespace DT
