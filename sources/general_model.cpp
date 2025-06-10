#include "../include/general_model.hpp"
#include "../md_NMSSM/model.hpp"

namespace DT {

ModelInfo::ModelInfo(const bool calcwidths) : calc_widths(calcwidths) {
    ModelInfo::init();
    load_prtcls();
    load_parameter_map();
}


void ModelInfo::updateFromSLHA(const SLHAReader& slha){
    using namespace PAR;
    try { el  = slha.getValue("SMINPUTS", {1}); }              catch(...) {}
    try { MWm = slha.getValue("MASS", {24}); }                catch(...) {}
    try { MZ  = slha.getValue("SMINPUTS", {4}); }             catch(...) {}
    try { g1  = slha.getValue("GAUGE", {1}); }                catch(...) {}
    try { g2  = slha.getValue("GAUGE", {2}); }                catch(...) {}
    try { g3  = slha.getValue("SMINPUTS", {3}); }                catch(...) {}
    try { TBeta = slha.getValue("EXTPAR", {25}); }            catch(...) {}
    try { lam   = slha.getValue("EXTPAR", {61}); }            catch(...) {}
    try { kap   = slha.getValue("EXTPAR", {62}); }            catch(...) {}
    try { mueff = slha.getValue("EXTPAR", {65}); }            catch(...) {}
    try { eta   = slha.getValue("CMPLX", {3}); }              catch(...) {}
    try { Al    = std::complex<double>(slha.getValue("EXTPAR", {63}), slha.getValue("IMEXTPAR", {63})); } catch(...) {}
    try { Ak    = std::complex<double>(slha.getValue("EXTPAR", {64}), slha.getValue("IMEXTPAR", {64})); } catch(...) {}

    // (e, mu, tau) USEDPARAS:  2, 3, 4
for(int i = 0; i < 3; ++i) {
    try { Me[i] = slha.getValue("USEDPARAS", {i + 2}); } catch(...) {}
}


// u = 5, c = 7, t = 10
int pdg_u[3] = {5, 7, 10};
for(int i = 0; i < 3; ++i) {
    try { Mu[i] = slha.getValue("USEDPARAS", {pdg_u[i]}); } catch(...) {}
}

//d=6, s=8, b=9
int pdg_d[3] = {6, 8, 9};
for(int i = 0; i < 3; ++i) {
    try { Md[i] = slha.getValue("USEDPARAS", {pdg_d[i]}); } catch(...) {}
}


    // Beispiel: Mehrdimensionale Arrays
    // Higgs-Massen (falls in MASS mit 25, 35, 45, ...)
    try { Mh[0] = slha.getValue("SMINPUTS", {4}); }  catch(...) {}
    try { Mh[1] = slha.getValue("MASS", {25}); }  catch(...) {}
    try { Mh[2] = slha.getValue("MASS", {35}); }  catch(...) {}
    try { Mh[3] = slha.getValue("MASS", {36}); }  catch(...) {}
    try { Mh[4] = slha.getValue("MASS", {45}); }  catch(...) {}
    try { Mh[5] = slha.getValue("MASS", {46}); }  catch(...) {}
    try { MHm[0] = slha.getValue("MASS", {24}); }  catch(...) {}
    try { MHm[1] = slha.getValue("MASS", {37}); }  catch(...) {}

    try { MC[0] = slha.getValue("MASS", {1000024}); }  catch(...) {}
    try { MC[1] = slha.getValue("MASS", {1000037}); }  catch(...) {}

    try { Wh[1] = slha.getValue("DECAY", {25}); }  catch(...) {}
    try { Wh[2] = slha.getValue("DECAY", {35}); }  catch(...) {}
    try { Wh[3] = slha.getValue("DECAY", {36}); }  catch(...) {}
    try { Wh[4] = slha.getValue("DECAY", {45}); }  catch(...) {}
    try { Wh[5] = slha.getValue("DECAY", {36}); }  catch(...) {}

    try { MN[0] = slha.getValue("MASS", {1000022}); }  catch(...) {}
    try { MN[1] = slha.getValue("MASS", {1000023}); }  catch(...) {}
    try { MN[2] = slha.getValue("MASS", {1000025}); }  catch(...) {}
    try { MN[3] = slha.getValue("MASS", {1000035}); }  catch(...) {}
    try { MN[4] = slha.getValue("MASS", {1000045}); }  catch(...) {}


    try { Msv[0] = slha.getValue("MASS", {1000012}); }  catch(...) {}
    try { Msv[1] = slha.getValue("MASS", {1000014}); }  catch(...) {}
    try { Msv[2] = slha.getValue("MASS", {1000016}); }  catch(...) {}


    try { Msu[0] = slha.getValue("MASS", {1000002}); }  catch(...) {}
    try { Msu[1] = slha.getValue("MASS", {1000004}); }  catch(...) {}
    try { Msu[2] = slha.getValue("MASS", {1000006}); }  catch(...) {}
    try { Msu[3] = slha.getValue("MASS", {2000002}); }  catch(...) {}
    try { Msu[4] = slha.getValue("MASS", {2000004}); }  catch(...) {}
    try { Msu[5] = slha.getValue("MASS", {2000006}); }  catch(...) {}


    try { Msd[0] = slha.getValue("MASS", {1000001}); }  catch(...) {}
    try { Msd[1] = slha.getValue("MASS", {1000003}); }  catch(...) {}
    try { Msd[2] = slha.getValue("MASS", {1000005}); }  catch(...) {}
    try { Msd[3] = slha.getValue("MASS", {2000001}); }  catch(...) {}
    try { Msd[4] = slha.getValue("MASS", {2000003}); }  catch(...) {}
    try { Msd[5] = slha.getValue("MASS", {2000005}); }  catch(...) {}

    try { Wh[1] = slha.getValue("DECAY", {25}); }  catch(...) {}
    try { Wh[2] = slha.getValue("DECAY", {35}); }  catch(...) {}
    try { Wh[3] = slha.getValue("DECAY", {36}); }  catch(...) {}
    try { Wh[4] = slha.getValue("DECAY", {45}); }  catch(...) {}
    try { Wh[5] = slha.getValue("DECAY", {36}); }  catch(...) {}

    try { Wsd[0] = slha.getValue("DECAY", {1000001}); }  catch(...) {}
    try { Wsd[1] = slha.getValue("DECAY", {1000003}); }  catch(...) {}
    try { Wsd[2] = slha.getValue("DECAY", {1000005}); }  catch(...) {}
    try { Wsd[3] = slha.getValue("DECAY", {2000001}); }  catch(...) {}
    try { Wsd[4] = slha.getValue("DECAY", {2000003}); }  catch(...) {}
    try { Wsd[5] = slha.getValue("DECAY", {2000005}); }  catch(...) {}

    try { Wsu[0] = slha.getValue("DECAY", {1000002}); }  catch(...) {}
    try { Wsu[1] = slha.getValue("DECAY", {1000004}); }  catch(...) {}
    try { Wsu[2] = slha.getValue("DECAY", {1000006}); }  catch(...) {}
    try { Wsu[3] = slha.getValue("DECAY", {2000002}); }  catch(...) {}
    try { Wsu[4] = slha.getValue("DECAY", {2000004}); }  catch(...) {}
    try { Wsu[5] = slha.getValue("DECAY", {2000006}); }  catch(...) {}

    try { WN[0] = slha.getValue("DECAY", {1000022}); }  catch(...) {}
    try { WN[1] = slha.getValue("DECAY", {1000023}); }  catch(...) {}
    try { WN[2] = slha.getValue("DECAY", {1000025}); }  catch(...) {}
    try { WN[3] = slha.getValue("DECAY", {1000035}); }  catch(...) {}
    try { WN[4] = slha.getValue("DECAY", {1000045}); }  catch(...) {}

    try { WC[0] = slha.getValue("DECAY", {1000024}); }  catch(...) {}
    try { WC[1] = slha.getValue("DECAY", {1000037}); }  catch(...) {}

    try { Wsv[0] = slha.getValue("DECAY", {1000012}); }  catch(...) {}
    try { Wsv[1] = slha.getValue("DECAY", {1000014}); }  catch(...) {}
    try { Wsv[2] = slha.getValue("DECAY", {1000016}); }  catch(...) {}
    try { WHm[1] = slha.getValue("DECAY", {37}); }  catch(...) {}


    // Beispiel: Matrizen wie ZH (6x6)
    try {
        double beta =atan(TBeta.real());
        double sB = sin(beta);
        double cB = cos(beta);
    
        auto ZH_slha = slha.getMatrix("NMHMIXC", 5); // 5x5 Matrix aus SLHA
    
        double ZH_tmp[6][6];
    
        // Explizite erste Zeile wie im Bild:
        ZH_tmp[0][0] = 0.;
        ZH_tmp[0][1] = 0.;
        ZH_tmp[0][2] = 0.;
        ZH_tmp[0][3] = cB;
        ZH_tmp[0][4] = -sB;
        ZH_tmp[0][5] = 0.;
    
        // Die restlichen 5 Zeilen explizit füllen aus der SLHA-Matrix
        for (int i = 0; i < 5; ++i) {
            ZH_tmp[i+1][0] = ZH_slha[i][2];
            ZH_tmp[i+1][1] = ZH_slha[i][3];
            ZH_tmp[i+1][2] = ZH_slha[i][4];
            ZH_tmp[i+1][3] = ZH_slha[i][0]*sB;
            ZH_tmp[i+1][4] = ZH_slha[i][0]*cB;
            ZH_tmp[i+1][5] = ZH_slha[i][1];
        }
    
        // Schreibe zurück in die originale ZH-Matrix
        for(int i = 0; i < 6; ++i)
            for(int j = 0; j < 6; ++j)
                ZH[i][j] = ZH_tmp[i][j];
    }
    catch(...) {}

    try {
        auto ReZN = slha.getMatrix("NMNMIX", 5);
        auto ImZN = slha.getMatrix("IMNMNMIX", 5);
    
        for(int i = 0; i < 5; ++i) {
            for(int j = 0; j < 5; ++j) {
                ZN[i][j] = std::complex<double>(ReZN[i][j], ImZN[i][j]);
            }
        }
    }
    catch(...) {}
try {
    auto ReSE = slha.getMatrix("SELECTRONMIX", 2);
    auto ImSE = slha.getMatrix("IMSELECTRONMIX", 2);
    auto ReSM = slha.getMatrix("SMUONMIX", 2);
    auto ImSM = slha.getMatrix("IMSMUONMIX", 2);
    auto ReST = slha.getMatrix("STAUMIX", 2);
    auto ImST = slha.getMatrix("IMSTAUMIX", 2);

    // SELECTRON entries
    ZE[0][0] = ReSE[0][0]+I* ImSE[0][0];
    ZE[0][1] = 0.;
    ZE[0][2] = 0.;
    ZE[0][3] = ReSE[0][1] +I*ImSE[0][1];
    ZE[0][4] = 0.;
    ZE[0][5] = 0.;
    ZE[1][0] = ReSE[1][0]+I*ImSE[1][0];
    ZE[1][1] = 0.;
    ZE[1][2] = 0.;
    ZE[1][3] = ReSE[1][1]+I*ImSE[1][1];
    ZE[1][4] = 0.;
    ZE[1][5] = 0.;

    ZE[2][0] = 0.;
    ZE[2][1] = ReSM[0][0]+I*ImSM[0][0];
    ZE[2][2] = 0.;
    ZE[2][3] = 0.;
    ZE[2][4] = ReSM[0][1]+I*ImSM[0][1];
    ZE[2][5] = 0.;

    ZE[3][0] = 0.;
    ZE[3][1] = ReSM[1][0]+I*ImSM[1][0];
    ZE[3][2] = 0.;
    ZE[3][3] = 0.;
    ZE[3][4] = ReSM[1][1]+I*ImSM[1][1];
    ZE[3][5] = 0.;

    ZE[4][0] = 0.;
    ZE[4][1] = 0.;
    ZE[4][2] = ReST[0][0]+I*ImST[0][0];
    ZE[4][3] = 0.;
    ZE[4][4] = 0.;
    ZE[4][5] = ReST[0][1]+I*ImST[0][1];

    ZE[5][0] = 0.;
    ZE[5][1] = 0.;
    ZE[5][2] = ReST[1][0]+I*ImST[1][0];
    ZE[5][3] = 0.;
    ZE[5][4] = 0.;
    ZE[5][5] = ReST[1][1]+I*ImST[1][1];
}
catch(...) {}

try {
    auto ReSD = slha.getMatrix("SDOWNMIX", 2);
    auto ImSD = slha.getMatrix("IMSDOWNMIX", 2);
    auto ReSS = slha.getMatrix("SSTRANGEMIX", 2);
    auto ImSS = slha.getMatrix("IMSSTRANGEMIX", 2);
    auto ReSB = slha.getMatrix("SBOTMIX", 2);
    auto ImSB = slha.getMatrix("IMBOTMIX", 2);

    // SELECTRON entries
    ZD[0][0] = ReSD[0][0]+I* ImSD[0][0];
    ZD[0][1] = 0.;
    ZD[0][2] = 0.;
    ZD[0][3] = ReSD[0][1] +I*ImSD[0][1];
    ZD[0][4] = 0.;
    ZD[0][5] = 0.;
    ZD[1][0] = ReSD[1][0]+I*ImSD[1][0];
    ZD[1][1] = 0.;
    ZD[1][2] = 0.;
    ZD[1][3] = ReSD[1][1]+I*ImSD[1][1];
    ZD[1][4] = 0.;
    ZD[1][5] = 0.;
    ZD[2][0] = 0.;
    ZD[2][1] = ReSS[0][0]+I*ImSS[0][0];
    ZD[2][2] = 0.;
    ZD[2][3] = 0.;
    ZD[2][4] = ReSS[0][1]+I*ImSS[0][1];
    ZD[2][5] = 0.;
    ZD[3][0] = 0.;
    ZD[3][1] = ReSS[1][0]+I*ImSS[1][0];
    ZD[3][2] = 0.;
    ZD[3][3] = 0;
    ZD[3][4] = ReSS[1][1]+I*ImSS[1][1];
    ZD[3][5] = 0.;
    ZD[4][0] = 0.;
    ZD[4][1] = 0.;
    ZD[4][2] = ReSB[0][0]+I*ImSB[0][0];
    ZD[4][3] = 0.;
    ZD[4][4] = 0.;
    ZD[4][5] = ReSB[0][1]+I*ImSB[0][1];
    ZD[5][0] = 0.;
    ZD[5][1] = 0.;
    ZD[5][2] = ReSB[1][0]+I*ImSB[1][0];
    ZD[5][3] = 0.;
    ZD[5][4] = 0.;
    ZD[5][5] = ReSB[1][1]+I*ImSB[1][1];
}
catch(...) {}

try {
    auto ReSU = slha.getMatrix("SUPMIX", 2);
    auto ImSU = slha.getMatrix("IMSUPMIX", 2);
    auto ReSC = slha.getMatrix("SCHARMEMIX", 2);
    auto ImSC = slha.getMatrix("IMSCHARMEMIX", 2);
    auto ReSTo = slha.getMatrix("STOPMIX", 2);
    auto ImSTo = slha.getMatrix("IMSTOPMIX", 2);

    // SELECTRON entries
    ZU[0][0] = ReSU[0][0]+I* ImSU[0][0];
    ZU[0][1] = 0.;
    ZU[0][2] = 0.;
    ZU[0][3] = ReSU[0][1] +I*ImSU[0][1];
    ZU[0][4] = 0.;
    ZU[0][5] = 0.;
    ZU[1][0] = ReSU[1][0]+I*ImSU[1][0];
    ZU[1][1] = 0.;
    ZU[1][2] = 0.;
    ZU[1][3] = ReSU[1][1]+I*ImSU[1][1];
    ZU[1][4] = 0.;
    ZU[1][5] = 0.;
    ZU[2][0] = 0.;
    ZU[2][1] = ReSC[0][0]+I*ImSC[0][0];
    ZU[2][2] = 0.;
    ZU[2][3] = 0.;
    ZU[2][4] = ReSC[0][1]+I*ImSC[0][1];
    ZU[2][5] = 0.;
    ZU[3][0] = 0.;
    ZU[3][1] = ReSC[1][0]+I*ImSC[1][0];
    ZU[3][2] = 0.;
    ZU[3][3] = 0;
    ZU[3][4] = ReSC[1][1]+I*ImSC[1][1];
    ZU[3][5] = 0.;
    ZU[4][0] = 0.;
    ZU[4][1] = 0.;
    ZU[4][2] = ReSTo[0][0]+I*ImSTo[0][0];
    ZU[4][3] = 0.;
    ZU[4][4] = 0.;
    ZU[4][5] = ReSTo[0][1]+I*ImSTo[0][1];
    ZU[5][0] = 0.;
    ZU[5][1] = 0.;
    ZU[5][2] = ReSTo[1][0]+I*ImSTo[1][0];
    ZU[5][3] = 0.;
    ZU[5][4] = 0.;
    ZU[5][5] = ReSTo[1][1]+I*ImSTo[1][1];
}
catch(...) {}

try {
    auto ReUM = slha.getMatrix("UMIX", 2);
    auto ImUM = slha.getMatrix("IMUMIX", 2);
    auto ReUP = slha.getMatrix("VMIX", 2);
    auto ImUP = slha.getMatrix("IMVMIX", 2);

    // SELECTRON entries
    UP[0][0] = ReUP[0][0]+I* ImUP[0][0];
    UP[0][1] = ReUP[0][1]+I*ImUP[0][1];
    UP[1][0] = ReUP[1][0]+I*ImUP[1][0];
    UP[1][1] = ReUP[1][1]+I*ImUP[1][1];
    UM[0][0] = ReUM[0][0]+I*ImUM[0][0];
    UM[0][1] = ReUM[0][1]+I*ImUM[0][1];
    UM[1][0] = ReUM[1][0]+I*ImUM[1][0];
    UM[1][1] = ReUM[1][1]+I*ImUM[1][1];
}
catch(...) {}

}

void ModelInfo::print_prtcls() {
    std::string p1, p2, ptemp1, ptemp2;
    for (auto &it : prtcls) {
        p1 = it.first;
        ptemp1 = str_tolower(p1);
        bool found = false;
        std::cout << p1 << "\t";
        for (auto &jt : aprtcls) {
            p2 = jt.first;
            ptemp2 = str_tolower(p2);
            if (ptemp1 == ptemp2) {
                std::cout << p2 << "\n";
                found = true;
                break;
            }
        }
        if (!found) std::cout << p1 << "\n";
    }
}

void ModelInfo::print_DM() {
    for (auto &it : DSmasses)
        if (MDM == *it.second)
            std::cout << "Dark Matter Candidate: " << it.first << " " << MDM
                      << "\n";
}

bool ModelInfo::load_everything() {
    load_parameters();
    assigndm();
    if (calc_widths) {
        calc_widths_and_scale();
        load_parameters();
    }
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
    if (aprtcls.count(prtcl) == 0) return prtcls[prtcl]->real();
    return aprtcls[prtcl]->real();
}

bool ModelInfo::change_parameter(const std::string &par, const double newval,
                                 const bool load) {
    *parmap[par] = newval;
    if (load) return load_everything();
    return true;
}

void ModelInfo::assign_bath_masses(const VecString &prtcls) {
    bath_masses.clear();
    if (prtcls.size() == 0)
        for (auto it : DSmasses) bath_masses.push_back(it.first);
    else
        for (auto it : prtcls) bath_masses = prtcls;
}

void ModelInfo::assigndm() {
    MDM = 1e16;
    for (auto it : bath_masses)
        if (MDM > DSmasses[it]->real()) MDM = DSmasses[it]->real();
}

AnnihilationAmps::AnnihilationAmps(const bool calc_widths)
    : ModelInfo(calc_widths) {
    AnnihilationAmps::init();
}

void AnnihilationAmps::print_channels() {
    for (auto &it : amp2s) std::cout << it.first << "\n";
}

VecString AnnihilationAmps::get_all_channels() {
    VecString res(amp2s.size());
    size_t i = 0;
    for (auto &it : amp2s) {
        res[i] = it.first;
        i++;
    }
    return res;
}

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
        res = false;
        temp = get_channel_prtcls(it.first);
        if (((temp[0] == prs[0]) && (temp[1] == prs[1])) ||
            ((temp[0] == prs[1]) && (temp[1] == prs[0])))
            res = true;
        if ((((temp[2] == prs[2]) && (temp[3] == prs[3])) ||
             ((temp[2] == prs[3]) && (temp[3] == prs[2]))) &&
            res) {
            channel = it.first;
            return true;
        }
    }
    return false;
}

VecString AnnihilationAmps::get_channel_prtcls(const std::string &channel) {
    VecString res(4);
    std::string prtcl;
    std::stringstream temp(channel);
    for (size_t i = 0; i < 4; i++) std::getline(temp, res[i], ',');
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
    if (flux)
        for (auto it : ch_str) cur_channel.push_back(amp2fls[it]);
    else
        for (auto it : ch_str) cur_channel.push_back(amp2s[it]);
}

double AnnihilationAmps::operator()(const double cos_t) {
    double res = 0.;
    for (auto it : cur_channel) {
        res += it(cos_t, s);
        // std::cout << it(0.1, 4000. * 4000.) << "\n";
        // exit(1);
    }
    return res;
}
DDetection::DDetection(double m_chi, double Z, double A)
    : mu_chi(computeMu(m_chi)), Z(Z), A(A) {}

double DDetection::computeMu(double m_chi) {
    constexpr double m_N =
        0.939;  // durchschnittliche Nukleonmasse in GeV (Xenon)
    return (m_N * m_chi) / (m_chi + m_N);
}
void DDetection::setLambda(const std::string &key, double value) {
    lambda[key] = value;
}
void DDetection::setNqP(const std::string &q, double value) { nq_p[q] = value; }
void DDetection::setNqN(const std::string &q, double value) { nq_n[q] = value; }
double DDetection::computePart(bool isProton) {
    const auto &fq = isProton ? fq_p : fq_n;
    double m = 0.9382720813;
    double coeff = isProton ? Z * m : (A - Z) * m;
    auto &nq = isProton ? nq_p : nq_n;

    std::vector<std::string> lq = {"u", "d", "s"};
    std::vector<std::string> hq = {"c", "b", "t"};
    std::vector<std::string> hadContent = {"u", "d"};
    double sum_lq = 0.;
    for (const auto &q : lq) {
        sum_lq +=
            safeAt(fq, q, "fq") * lambda["lambda_" + q + "_e"] / getMass(q);
    }
    double sum_hq = 0.;
    for (const auto &q : hq) {
        sum_hq += lambda["lambda_" + q + "_e"] / getMass(q);
    }

    double sum_fq = 0.;
    for (const auto &q : lq) {
        sum_fq += safeAt(fq, q, "fq");
    }
    double odd_sum = 0.;
    for (const auto &q : hadContent) {
        odd_sum += safeAt(nq, q, isProton ? "nq_p" : "nq_n") *
                   lambda["lambda_" + q + "_o"] / (m * getMass(q));
    }

    double sum_heavy = (2 / 27.0) * (1. - sum_fq) * sum_hq;
    std::cout << pow(coeff * (sum_lq + sum_heavy + odd_sum), 2) << std::endl;
    return pow(coeff * (sum_lq + sum_heavy + odd_sum), 2);
}
double DDetection::DDxSecp() {
    double prefactor = mu_chi * mu_chi / M_PI;
    std::cout << prefactor << std::endl;
    double Sig_pr = computePart(true);
    double total = Sig_pr;
    return prefactor * total;
}
double DDetection::DDxSecn() {
    double prefactor = mu_chi * mu_chi / M_PI;
    double Sig_n = computePart(false);
    return prefactor * Sig_n;
}
double DDetection::getMass(const std::string &q) const {
    static std::map<std::string, double> qmass = {
        {"u", 2.20000000e-3},      {"d", 4.70000000e-3},
        {"s", 9.50000000e-2},      {"c", 1.274},
        {"b", 4.1799999999999997}, {"t", 172.75999999999999}};
    return qmass.at(q);
}
void DDetection::checkRequiredInputs() const {
    // Erwartete Keys
    std::vector<std::string> required_lambdas = {
        "lambda_u_e", "lambda_d_e", "lambda_s_e", "lambda_c_e",
        "lambda_b_e", "lambda_t_e", "lambda_u_o", "lambda_d_o"};

    std::vector<std::string> required_nq = {"u", "d"};

    // Lambda-Check
    for (const auto &key : required_lambdas) {
        if (lambda.find(key) == lambda.end()) {
            throw std::runtime_error("Missing lambda coupling: " + key);
        }
    }

    // Parton-Inhalt (Proton)
    for (const auto &q : required_nq) {
        if (nq_p.find(q) == nq_p.end()) {
            throw std::runtime_error("Missing nq_p entry for quark: " + q);
        }
    }

    // Parton-Inhalt (Neutron)
    for (const auto &q : required_nq) {
        if (nq_n.find(q) == nq_n.end()) {
            throw std::runtime_error("Missing nq_n entry for quark: " + q);
        }
    }
}
template <typename K, typename V>
V DDetection::safeAt(const std::map<K, V> &m, const K &key,
                     const std::string &context) const {
    auto it = m.find(key);
    if (it == m.end()) {
        throw std::runtime_error("Missing key '" + key + "' in " + context);
    }
    return it->second;
}

double DDetection::convertGeV2ToPicobarn(double sigma_gev2) {
    constexpr double gev2_to_pb = 3.89379e8;
    return sigma_gev2 * gev2_to_pb;
}
// Constructor definition (fix typo: parsefile → parseFile)
SLHAReader::SLHAReader(const std::string& filename) {
    parseFile(filename);
}

// Correctly scoped method definitions
double SLHAReader::getValue(const std::string& block, const std::vector<int> indices) const {
    auto blockIt = blocks.find(block);
    if (blockIt == blocks.end())
        throw std::runtime_error("Block not found: " + block);

    auto entryIt = blockIt->second.find(indices);
    if (entryIt == blockIt->second.end())
        throw std::runtime_error("Indices not found in block: " + block);

    return entryIt->second;
}

std::vector<std::vector<double>> SLHAReader::getMatrix(const std::string& block, int dim) const {
    std::vector<std::vector<double>> matrix(dim, std::vector<double>(dim, 0.0));
    auto blockIt = blocks.find(block);
    if (blockIt == blocks.end())
        throw std::runtime_error("Block not found: " + block);

    for (const auto& [indices, val] : blockIt->second) {
        if (indices.size() != 2)
            throw std::runtime_error("Matrix entry must have exactly 2 indices!");

        int i = indices[0] - 1;
        int j = indices[1] - 1;
        if (i < 0 || i >= dim || j < 0 || j >= dim)
            throw std::runtime_error("Matrix index out of range!");

        matrix[i][j] = val;
    }
    return matrix;
}

// Parsing function defined correctly as a member of SLHAReader
void SLHAReader::parseFile(const std::string& filename) {
    std::ifstream infile(filename);
    if (!infile) throw std::runtime_error("SLHA file not found!");

    std::string line, currentBlock;
    while (std::getline(infile, line)) {
        // Entferne Kommentar
        auto commentPos = line.find('#');
        if (commentPos != std::string::npos) line = line.substr(0, commentPos);

        // Trim Whitespace
        line.erase(0, line.find_first_not_of(" \t\r\n"));
        line.erase(line.find_last_not_of(" \t\r\n") + 1);

        if (line.empty()) continue;

        std::istringstream iss(line);
        std::vector<std::string> tokens;
        std::string token;
        while (iss >> token) tokens.push_back(token);
        if (tokens.empty()) continue;

        // BLOCK/DECAY Detection
        if (tokens[0] == "BLOCK" || tokens[0] == "Block") {
            if (tokens.size() > 1) {
                currentBlock = tokens[1];
                std::transform(currentBlock.begin(), currentBlock.end(), currentBlock.begin(), ::toupper);
            } else {
                currentBlock.clear();
            }
            continue;
        }
        if (tokens[0] == "DECAY" || tokens[0] == "Decay") {
            currentBlock = "DECAY";
            continue;
        }

        if (!currentBlock.empty()) {
            // Die meisten Einträge sind: [idx1] [idx2] ... [value]
            std::vector<int> indices;
            double value = 0.0;
            bool parseOK = true;

            if (tokens.size() >= 2) {
                // Prüfe, dass alle außer dem letzten Token int sind
                for (size_t i = 0; i < tokens.size() - 1; ++i) {
                    try {
                        indices.push_back(std::stoi(tokens[i]));
                    } catch (...) {
                        parseOK = false;
                        break;
                    }
                }
                // Value konvertieren (nur wenn indices ok sind)
                if (parseOK) {
                    try {
                        value = std::stod(tokens.back());
                    } catch (...) {
                        parseOK = false;
                    }
                }
                if (parseOK)
                    blocks[currentBlock][indices] = value;
                // Falls es z.B. ein Textwert ist, ignoriere die Zeile
            } else if (tokens.size() == 1) {
                // Einzelwert im Block (selten)
                try {
                    value = std::stod(tokens[0]);
                    blocks[currentBlock][{}] = value;
                } catch (...) {
                    // Ignorieren, falls keine Zahl
                }
            }
        }
    }
}


}  // namespace DT
