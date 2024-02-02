#pragma once
#include <functional>
#include <cmath>
#include <unordered_map>
#include <memory>
#include "general_model.hpp"

namespace DT
{
    class Tac
    {
    private:
        double simpson_eps = 1e-5;
        double beps_eps = 1e-6;
        double trapezoidal_eps = 1e-4;
        double gauss_kronrod_eps = 1e-7;
        double m1;
        double m2;
        size_t N_relevant_peaks;
        std::vector<bool> iniswitches;
        std::vector<double> boundaries;
        std::shared_ptr<Model> mod;

    public:
        std::unordered_map<double, double> sig_s;
        std::unordered_map<double, double> tac_x;

        // 3/8 simpson rule
        double simpson38(const double l, const double r, const double &s);

        // adaptive simpson
        double adaptive_simpson38(const double l, const double r, const double &s, const double ans, int depth = 0);

        double wij(const double &s);

        double sigv(const double &u, const double &x);

        bool beps(const double &x, const double &MDM);

        void flickswitches(const double &x);

        // checks if the peak is suppressed enough by the boltzmann factor to not matter for seperate integration
        double peak_relevance(const double &peakpos);

        // defines a triplet with the boundaries of a resonance peak and the width in terms of the variable u
        double *peak_bounds(const double &peakpos, const double &width);

        // sorts the boundaries triplets in descending order
        void i_sort_boundaries();

        // sets all the relevant peak boundaries (sorted) and the number of relevant peaks dl
        void set_boundaries(const double &x);

        // trapezoidal method for the calculation of the peaks for TAC
        double trapezoidal(const double l, const double r, const double &x);

        // adaptive trapezoidal method for the calculation of the peaks for TAC
        double adap_trapezoidal(const double l, const double r, const double &x, const double &ans, size_t depth = 0);

        // gauss kronrod 31 point method to be used as quick estimation of TAC between peaks
        double gauss_kronrod_31(const double l, const double r, const double &x);

        // adaptive gauss kronrod 13 point method for TAC between peaks
        double adap_gauss_kronrod(const double l, const double r, const double &x, const double &est, int depth = 0);

        // integral of the peaks over s
        double integrate_peaks(const double &x);

        // integral over s of the whole interval
        double integrate_s(const double &x);

        // the one. the only. the THERMALLY AVERAGED CROSS SECTION!! at a certain x value
        double tac(const double &x, const std::vector<std::string> &ch_str = {});

        Tac(std::shared_ptr<Model> model);
        ~Tac(){};
    };

} // namespace DT
