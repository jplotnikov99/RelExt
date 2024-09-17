#include "general_model.hpp"

namespace DT {

Model::Model() {
    init();
    load_parameter_map();
}

bool Model::load_everything() {
    load_parameters();
    assigndm();
    calc_widths_and_scale();
    load_parameters();
    load_tokens();
    return check_conditions();
}

double Model::the_mass(const std::string &prtcl) { return *particles[prtcl]; }

double Model::the_dof(const std::string &prtcl) { return dsDof[prtcl]; }

bool Model::check_par_existence(const std::string par) {
    if (parmap.find(par) == parmap.end()) return false;
    return true;
}

double Model::get_parameter_val(const std::string par) {
    return (*parmap[par]);
}

bool Model::change_parameter(const std::string par, const double newval,
                             const bool load) {
    *parmap[par] = newval;
    if (load) return load_everything();
    return true;
}

vstring Model::get_all_channels() { return channelnames; }

bool Model::check_channel_existence(const std::string &channel) {
    for (auto it : channelnames) {
        if (it == channel) {
            return true;
        }
    }
    return false;
}

void Model::get_channel_masses(double &m1, double &m2, double &m3, double &m4,
                               const std::string &channel) {
    m1 = *mass1s.at(channel);
    m2 = *mass2s.at(channel);
    m3 = *mass3s.at(channel);
    m4 = *mass4s.at(channel);
}

void Model::assign_bath_masses(const vstring &prtcls) {
    bath_masses.clear();
    if (prtcls.size() == 0) {
        for (auto it : particles) {
            bath_masses.push_back(it.first);
        }
    } else {
        for (auto it : prtcls) {
            bath_masses = prtcls;
        }
    }
}

vstring Model::find_channels_by_particle(const std::string &particle) {
    vstring res = {};
    size_t found;
    for (auto it : channelnames) {
        found = it.find(particle);
        if (found != std::string::npos) {
            res.push_back(it);
        }
    }
    return res;
}

vstring Model::find_thermal_procs(const vstring &prtcls) {
    bool existance = false;
    vstring res = {};
    size_t found;
    if (prtcls.size() == 0) return get_all_channels();
    for (auto it : prtcls) {
        existance = false;
        for (auto jt : channelnames) {
            found = jt.find(it);
            if (found != std::string::npos) {
                for (auto kt : prtcls) {
                    if (jt.find(kt, found + 1) != std::string::npos) {
                        existance = true;
                        res.push_back(jt);
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

void Model::assigndm() {
    MDM = 1e16;

    for (auto it : bath_masses) {
        if (MDM > the_mass(it)) {
            MDM = the_mass(it);
        }
    }
}

void Model::assign_masses(double &m1, double &m2, const std::string &channel) {
    if (*mass1s[channel] + *mass2s[channel] >=
        *mass3s[channel] + *mass4s[channel]) {
        m1 = *mass1s[channel];
        m2 = *mass2s[channel];
    } else {
        m1 = *mass3s[channel];
        m2 = *mass4s[channel];
    }
}

void Model::set_channel(double &m1, double &m2, const vstring &ch_str,
                        const bool flux) {
    cur_channel.clear();
    assign_masses(m1, m2, ch_str.at(0));
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

ResError Model::eval(const double cos_t, const double s) {
    ResError res = {0., 0.};
    for (auto it : cur_channel) {
        res.res += it(cos_t, s);
    }
    return res;
}

}  // namespace DT
