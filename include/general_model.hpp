#pragma once

#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <functional>
#include <iostream>
#include <map>
#include <memory>
#include <vector>

#include "EffDof.hpp"
#include "utils.hpp"

namespace DT {

#define ADDCHANNEL(name, amp, ampfl) \
    amp2s[name] = amp;               \
    amp2fls[name] = ampfl;

#define CHECKCONDITION(condition) \
    if (!(condition)) return false;

typedef std::function<double(const double &, const double &)> f;
typedef std::vector<f> vamp2;
typedef std::unordered_map<std::string, f> fmap;
typedef std::unordered_map<std::string, std::complex<double> *> sMapDp;
class SLHAReader;
struct ModelInfo {
    sMapDp DSmasses;
    sMapDp prtcls;
    sMapDp aprtcls;
    std::vector<double *> neutraldsmasses;
    std::unordered_map<std::string, double> DSdof;
    std::map<std::string, std::complex<double> *> parmapc;
    std::map<std::string, double *> parmap;
    std::vector<std::complex<double> *> denstructures;
    size_t N_widths;
    VecString bath_masses;
    const bool calc_widths;
    std::complex<double> CZERO = 0.;
    double ZERO = 0;
    double MDM = 0.;

    void init();
    void calc_widths_and_scale();
    void load_prtcls();
    void load_parameters();
    void load_parameter_map();
    void load_tokens();
    bool check_conditions();
    void print_prtcls();
    void print_DM();
    bool load_everything();
    double get_prtcl_mass(const std::string &prtcl);
    bool check_par_existence(const std::string &par);
    bool change_parameter(const std::string &par, const double newval,
                          const bool load = true);

    void assign_bath_masses(const VecString &prtcls = {});
    void assigndm();
    void updateFromSLHA(const SLHAReader& slha);

    ModelInfo(const bool calcwidths);
};

class AnnihilationAmps : public ModelInfo {
   private:
    double s;
    fmap amp2s;
    fmap amp2fls;
    vamp2 cur_channel;

   public:
    AnnihilationAmps(const bool calcwidths);

    void init();
    void print_channels();
    VecString get_all_channels();
    void channel_parity(int &p1, int &p2, const std::string &channel);
    bool check_channel_existence(std::string &channel);
    VecString get_channel_prtcls(const std::string &channel);
    void get_channel_masses(double &m1, double &m2, double &m3, double &m4,
                            const std::string &channel);
    VecString find_channels_by_particle(const std::string &particle);
    void assign_masses(double &m1, double &m2, const std::string &channel);
    VecString find_thermal_procs(const VecString &prtcls = {});
    void set_s(const double new_s);
    void set_channel(const VecString &ch_str, const bool flux = true);
    double operator()(const double cos_t);

    ~AnnihilationAmps() {};
};
class DDetection {
   public:
    DDetection(double m_chi, double Z, double A);
    void setLambda(const std::string &key, double value);
    void setNqP(const std::string &q, double value);
    void setNqN(const std::string &q, double value);
    double DDxSecp();
    double DDxSecn();
    static double computeMu(double m_chi);
    void checkRequiredInputs() const;
    template <typename K, typename V>
    V safeAt(const std::map<K, V> &m, const K &key,
             const std::string &context = "") const;
    static double convertGeV2ToPicobarn(double sigma_gev2);
    ~DDetection() {};

   private:
    double mu_chi, Z, A;
    std::map<std::string, double> lambda;
    std::map<std::string, double> nq_p;
    std::map<std::string, double> nq_n;
    std::map<std::string, double> fq_p = {
        {"u", 0.01513}, {"d", 0.0191}, {"s", 0.0447}};
    std::map<std::string, double> fq_n = {
        {"u", 0.011}, {"d", 0.0273}, {"s", 0.0447}};
    double computePart(bool isProton);
    double getMass(const std::string &q) const;
};


class SLHAReader{
    public:
        SLHAReader(const std::string& filename);
        double getValue(const std::string& block, const std::vector<int>) const;
        std::vector<std::vector<double>> getMatrix(const std::string& block, int dim) const; 
    private: 
        std::map<std::string, std::map<std::vector<int>,double>> blocks;
        void parseFile(const std::string& filename); 
};


}  // namespace DT
