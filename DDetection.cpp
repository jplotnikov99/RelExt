#include "DDetection.hpp"
#include <iostream>
using namespace std;



namespace DT{
    DDetection::DDetection(double m_chi, double Z, double A)
        : mu_chi(computeMu(m_chi)), Z(Z),A(A){}

    double DDetection::computeMu(double m_chi) {
    constexpr double m_N = 0.939; // durchschnittliche Nukleonmasse in GeV (Xenon)
    return (m_N) / (m_chi + m_N);
}
    void DDetection::setLambda(const std::string& key, double value){
        lambda[key] = value;
    }
    void DDetection::setNqP(const std::string& q, double value){
        nq_p[q] = value;
    }
    void DDetection::setNqN(const std::string& q, double value){
        nq_n[q] = value;
    }
    double DDetection::computePart(bool isProton){
        const auto& fq = isProton ? fq_p : fq_n;
        double m = 0.9382720813;
        double coeff = isProton ? Z*m : (A-Z)*m;
        auto& nq = isProton ? nq_p : nq_n;

        std::vector<std::string> lq = {"u", "d", "s"};
        std::vector<std::string> hq = {"c", "b", "t"};
        std::vector<std::string> hadContent = {"u","d"};
        double sum_lq = 0.;
        for (const auto&q : lq){
            sum_lq += safeAt(fq, q, "fq")*lambda["lambda_"+ q+ "_e"]/getMass(q);
        }
        double sum_hq = 0.;
        for (const auto&q : hq){
            sum_hq += lambda["lambda_"+ q+ "_e"]/getMass(q);
        }

        double sum_fq = 0.;
        for(const auto& q: lq){
            sum_fq += safeAt(fq, q, "fq");
        }
        double odd_sum = 0.;
        for(const auto& q: hadContent){
            odd_sum += safeAt(nq, q, isProton ? "nq_p" : "nq_n") * lambda["lambda_" + q +"_o"]/(m*getMass(q));
        }

        double sum_heavy = (2/27.0) * (1. - sum_fq)*sum_hq;
        std::cout << (sum_lq + sum_heavy + odd_sum)/(8*600*m) << std::endl;
        return coeff * (sum_lq + sum_heavy + odd_sum);

    }
    double DDetection::DDxSec(){
        double prefactor = mu_chi*mu_chi/M_PI;
        double Sig_pr = computePart(true);
        std::cout << "sig_pr: " <<Sig_pr*Sig_pr << std::endl;
        double Sig_neu= computePart(false);
        std::cout << "sig_neu: " << Sig_neu*Sig_neu << std::endl;
        double total = Sig_pr; //+ Sig_neu;
        return prefactor * total*total;
    }
    double DDetection::getMass(const std::string& q) const {
        static std::map<std::string, double> qmass = {
            {"u", 0.0026}, {"d", 0.0042}, {"s", 0.9},
            {"c", 1.27}, {"b", 4.8}, {"t", 172.5}
        };
        return qmass.at(q);
    }
    void DDetection::checkRequiredInputs() const {
    // Erwartete Keys
    std::vector<std::string> required_lambdas = {
        "lambda_u_e", "lambda_d_e", "lambda_s_e",
        "lambda_c_e", "lambda_b_e", "lambda_t_e",
        "lambda_u_o", "lambda_d_o"
    };

    std::vector<std::string> required_nq = {"u", "d"};

    // Lambda-Check
    for (const auto& key : required_lambdas) {
        if (lambda.find(key) == lambda.end()) {
            throw std::runtime_error("Missing lambda coupling: " + key);
        }
    }

    // Parton-Inhalt (Proton)
    for (const auto& q : required_nq) {
        if (nq_p.find(q) == nq_p.end()) {
            throw std::runtime_error("Missing nq_p entry for quark: " + q);
        }
    }

    // Parton-Inhalt (Neutron)
    for (const auto& q : required_nq) {
        if (nq_n.find(q) == nq_n.end()) {
            throw std::runtime_error("Missing nq_n entry for quark: " + q);
        }
    }
}
template<typename K, typename V>
V DDetection::safeAt(const std::map<K, V>& m, const K& key, const std::string& context) const {
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
}

int main(){
    // 1. Dark Matter Masse (GeV)
    double m_chi = 600;
    // 2. Xenon-Kern: Z = 54, A = 131
    double Z = 1;
    double A = 2;


    // 5. DDetection-Instanz erstellen
    DT::DDetection det(m_chi, Z, A);

    // 6. Lambda-Kopplungen setzen (Beispielwerte)
    det.setLambda("lambda_u_e", -3.78487e-6);
    det.setLambda("lambda_d_e", -6.11402e-6);
    det.setLambda("lambda_s_e", -0.00131015);
    det.setLambda("lambda_c_e", -0.00184876);
    det.setLambda("lambda_b_e", -0.00698745);
    det.setLambda("lambda_t_e", -0.251112);
    det.setLambda("lambda_u_o",0);
    det.setLambda("lambda_d_o", 0);

    // 7. Parton-Inhalte setzen
    det.setNqP("u", 2.0); // Proton: 2 up
    det.setNqP("d", 1.0); // Proton: 1 down
    det.setNqN("u", 1.0); // Neutron: 1 up
    det.setNqN("d", 2.0); // Neutron: 2 down
    // 8. Cross-Section berechnen

    // 9. Ausgabe
   double sigma_gev2 = det.DDxSec();
double sigma_pb = DT::DDetection::convertGeV2ToPicobarn(sigma_gev2);
std::cout << "Cross-Section: " << sigma_gev2 << " GeV^(-2)" << std::endl;
std::cout << "Cross-Section: " << sigma_pb << " pb" << std::endl;

    return 0;

}