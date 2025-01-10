#include "../include/general_model.hpp"

namespace DT {

ModelInfo::ModelInfo() {
    init();
    load_prtcls();
    load_parameter_map();
}

bool ModelInfo::load_everything() {
    load_parameters();
    assigndm();
    // calc_widths_and_scale();
    load_parameters();
    load_tokens();
    return check_conditions();
}

bool ModelInfo::check_par_existence(const std::string &par) {
    bool exists = parmap.count(par) == 0 ? false : true;
    if (!exists) {
        std::cout << par << " is not an existing model parameter.\n";
        exit(1);
    }
    return exists;
}

double ModelInfo::get_prtcl_mass(const std::string &prtcl) {
    std::string stemp;
    size_t found;
    if (aprtcls.count(prtcl) == 0) return *prtcls[prtcl];
    return *aprtcls[prtcl];
}

bool ModelInfo::change_parameter(const std::string &par, const double newval,
                                 const bool load) {
    *parmap[par] = newval;
    if (load) return load_everything();
    return true;
}

void ModelInfo::assign_bath_masses(const VecString &prtcls) {
    bath_masses.clear();
    if (prtcls.size() == 0) {
        for (auto it : DSmasses) {
            bath_masses.push_back(it.first);
        }
    } else {
        for (auto it : prtcls) {
            bath_masses = prtcls;
        }
    }
}

void ModelInfo::assigndm() {
    MDM = 1e16;

    for (auto it : bath_masses) {
        if (MDM > *DSmasses[it]) {
            MDM = *DSmasses[it];
        }
    }
}

AnnihilationAmps::AnnihilationAmps() { init(); }

void AnnihilationAmps::channel_parity(int &p1, int &p2,
                                      const std::string &channel) {
    VecString prs = get_channel_prtcls(channel);
    int p[4];
    for (size_t i = 0; i < 4; i++) {
        if (aprtcls.count(prs[i]) == 0) {
            if (prtcls.count(prs[i]) == 0) {
                std::cout << prs[i]
                          << " is not a valid particle of the model.\n";
                exit(1);
            }
            p[i] = 1;
        } else
            p[i] = -1;
    }
    p1 = p[0] * p[1];
    p2 = p[2] * p[3];
}

bool AnnihilationAmps::check_channel_existence(std::string &channel) {
    VecString prs = get_channel_prtcls(channel);
    for (size_t i = 0; i < 4; i++)
        if (aprtcls.count(prs[i]) == 0)
            if (prtcls.count(prs[i]) == 0) {
                std::cout << prs[i]
                          << " is not a valid particle of the model.\n";
                exit(1);
            }
    VecString temp(4);
    bool res;
    for (auto &it : amp2s) {
        temp = get_channel_prtcls(it.first);
        if (temp[0] == prs[0]) {
            if (temp[1] == prs[1]) res = true;
        } else if (temp[0] == prs[1]) {
            if (temp[1] == prs[0]) res = true;
        } else
            res = false;
        if (res) {
            if (temp[2] == prs[2]) {
                if (temp[3] == prs[3]) {
                    channel = it.first;
                    return true;
                }
            } else if (temp[2] == prs[3])
                if (temp[3] == prs[2]) {
                    channel = it.first;
                    return true;
                }
        }
    }
    return false;
}

VecString AnnihilationAmps::get_channel_prtcls(const std::string &channel) {
    VecString res(4);
    std::string prtcl;
    std::stringstream temp(channel);
    for (size_t i = 0; i < 4; i++) {
        std::getline(temp, res[i], ',');
    }
    return res;
}

void AnnihilationAmps::get_channel_masses(double &m1, double &m2, double &m3,
                                          double &m4,
                                          const std::string &channel) {
    VecString prs = get_channel_prtcls(channel);
    m1 = get_prtcl_mass(prs[0]);
    m2 = get_prtcl_mass(prs[1]);
    m3 = get_prtcl_mass(prs[2]);
    m4 = get_prtcl_mass(prs[3]);
}

VecString AnnihilationAmps::find_channels_by_particle(
    const std::string &prtcl) {
    VecString res = {};
    VecString temp(4);
    for (auto it : amp2s) {
        temp = get_channel_prtcls(it.first);
        for (auto &jt : temp)
            if (jt == prtcl) {
                res.push_back(it.first);
                break;
            }
    }
    return res;
}

void AnnihilationAmps::assign_masses(double &m1, double &m2,
                                     const std::string &channel) {
    double m11, m22, m33, m44;
    VecString prs = get_channel_prtcls(channel);
    get_channel_masses(m11, m22, m33, m44, channel);
    if (m11 + m22 >= m33 + m44)
        m1 = m11, m2 = m22;
    else
        m1 = m33, m2 = m44;
}

VecString AnnihilationAmps::find_thermal_procs(const VecString &prtcls) {
    bool existance = false;
    VecString res = {};
    size_t found;
    if (prtcls.size() == 0) {
        for (auto &it : amp2s) res.push_back(it.first);
        return res;
    }
    for (auto it : prtcls) {
        existance = false;
        for (auto jt : amp2s) {
            found = jt.first.find(it);
            if (found != std::string::npos) {
                for (auto kt : prtcls) {
                    if (jt.first.find(kt, found + 2) != std::string::npos) {
                        existance = true;
                        res.push_back(jt.first);
                    }
                }
            }
        }
        if (!existance) {
            std::cout << "Error in " << __func__ << ": The particle " << it
                      << " either does not exist or contribute to the relic "
                         "density calculation.\n";
            exit(1);
        }
    }
    return res;
}

void AnnihilationAmps::set_s(const double new_s) { s = new_s; }

void AnnihilationAmps::set_channel(const VecString &ch_str, const bool flux) {
    cur_channel.clear();
    if (flux) {
        for (auto it : ch_str) {
            cur_channel.push_back(amp2fls[it]);
        }
    } else {
        for (auto it : ch_str) {
            cur_channel.push_back(amp2s[it]);
        }
    }
}

double AnnihilationAmps::operator()(const double cos_t) {
    double res = 0.;
    for (auto it : cur_channel) {
        res += it(cos_t, s);
    }
    return res;
}

}  // namespace DT
