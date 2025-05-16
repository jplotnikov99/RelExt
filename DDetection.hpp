 #pragma once
#include <iostream>
#include <memory>
#include <vector>
#include <map>
#include <string>
#include <cmath>


namespace DT{
    class DDetection{
        public: 

        DDetection(double m_chi, double Z, double A);
        void setLambda(const std::string& key, double value);
        void setNqP(const std::string& q, double value);
        void setNqN(const std::string& q, double value);
        double DDxSec();
        static double computeMu(double m_chi);
        void checkRequiredInputs() const;
        template<typename K, typename V>
V safeAt(const std::map<K, V>& m, const K& key, const std::string& context = "") const;
static double convertGeV2ToPicobarn(double sigma_gev2);
        private:
        double mu_chi, Z, A;
        std::map<std::string, double> lambda;
        std::map<std::string, double> nq_p;
        std::map<std::string, double> nq_n;
        std::map<std::string, double> fq_p = {
            {"u", 0.01513},{"d",0.0191},{"s", 0.0447}
        };
        std::map<std::string, double> fq_n = {
            {"u", 0.011},{"d",0.0273},{"s", 0.0447}
        };
        double computePart(bool isProton);
        double getMass(const std::string& q) const;
    };


}