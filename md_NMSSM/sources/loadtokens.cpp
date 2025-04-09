///////////////////CODE GENERATED VIA MATHEMATICA///////////////////

#include "../model.hpp"
#include "general_model.hpp"

namespace DT {
void ModelInfo::load_tokens() {
    using namespace PAR;
    for (size_t i = 0; i < 6; i++) {
        coup1[i] =
            (std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (I * ZH[1][2] + ZH[1][5]) *
                      (2 * vS * (ZH[1][1] + I * ZH[1][4]) +
                       vu * (ZH[1][2] - I * ZH[1][5])) +
                  2 * std::exp(2 * etaS * I) * std::conj(lam) *
                      (-2 * std::exp(eta * I) * I * lam *
                           (vd *
                                ((ZH[1][1] * ZH[1][1]) + (ZH[1][2] * ZH[1][2]) +
                                 (ZH[1][4] * ZH[1][4]) +
                                 (ZH[1][5] * ZH[1][5])) +
                            2 * vu * ZH[1][0] * ZH[1][1] +
                            2 * vS * ZH[1][0] * ZH[1][2]) +
                       std::exp(2 * etaS * I) * kap *
                           (ZH[1][2] + I * ZH[1][5]) *
                           (2 * I * vS * ZH[1][1] + I * vu * ZH[1][2] +
                            2 * vS * ZH[1][4] - vu * ZH[1][5])) +
                  std::exp(etaS * I) *
                      (2 * sqrt(2) * std::conj(Tlam) *
                           (I * ZH[1][1] + ZH[1][4]) *
                           (ZH[1][2] - I * ZH[1][5]) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vd * (-3 * (ZH[1][0] * ZH[1][0]) +
                                               (ZH[1][1] * ZH[1][1]) -
                                               (ZH[1][3] * ZH[1][3]) +
                                               (ZH[1][4] * ZH[1][4])) +
                                         2 * vu * ZH[1][0] * ZH[1][1]) +
                            (g2 * g2) * (vd * (-3 * (ZH[1][0] * ZH[1][0]) +
                                               (ZH[1][1] * ZH[1][1]) -
                                               (ZH[1][3] * ZH[1][3]) +
                                               (ZH[1][4] * ZH[1][4])) +
                                         2 * vu * ZH[1][0] * ZH[1][1]) +
                            2 * sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[1][1] + I * ZH[1][4]) *
                                (ZH[1][2] + I * ZH[1][5])))) *
                 ZH[i][0] +
             std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (I * ZH[1][2] + ZH[1][5]) *
                      (2 * vS * (ZH[1][0] + I * ZH[1][3]) +
                       vd * (ZH[1][2] - I * ZH[1][5])) +
                  2 * std::exp(2 * etaS * I) * std::conj(lam) *
                      (-2 * std::exp(eta * I) * I * lam *
                           (vu *
                                ((ZH[1][0] * ZH[1][0]) + (ZH[1][2] * ZH[1][2]) +
                                 (ZH[1][3] * ZH[1][3]) +
                                 (ZH[1][5] * ZH[1][5])) +
                            2 * ZH[1][1] * (vd * ZH[1][0] + vS * ZH[1][2])) +
                       std::exp(2 * etaS * I) * kap *
                           (ZH[1][2] + I * ZH[1][5]) *
                           (2 * I * vS * ZH[1][0] + I * vd * ZH[1][2] +
                            2 * vS * ZH[1][3] - vd * ZH[1][5])) +
                  std::exp(etaS * I) *
                      (2 * sqrt(2) * std::conj(Tlam) *
                           (I * ZH[1][0] + ZH[1][3]) *
                           (ZH[1][2] - I * ZH[1][5]) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vu * ((ZH[1][0] * ZH[1][0]) -
                                               3 * (ZH[1][1] * ZH[1][1]) +
                                               (ZH[1][3] * ZH[1][3]) -
                                               (ZH[1][4] * ZH[1][4])) +
                                         2 * vd * ZH[1][0] * ZH[1][1]) +
                            (g2 * g2) * (vu * ((ZH[1][0] * ZH[1][0]) -
                                               3 * (ZH[1][1] * ZH[1][1]) +
                                               (ZH[1][3] * ZH[1][3]) -
                                               (ZH[1][4] * ZH[1][4])) +
                                         2 * vd * ZH[1][0] * ZH[1][1]) +
                            2 * sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[1][0] + I * ZH[1][3]) *
                                (ZH[1][2] + I * ZH[1][5])))) *
                 ZH[i][1] +
             2 * ((sqrt(2) *
                       (std::exp(2 * etaS * I) * std::conj(Tlam) *
                            (ZH[1][0] - I * ZH[1][3]) *
                            (I * ZH[1][1] + ZH[1][4]) +
                        std::exp(eta * I) * I *
                            (-(std::conj(Tk) * ((ZH[1][2] - I * ZH[1][5]) *
                                                (ZH[1][2] - I * ZH[1][5]))) -
                             std::exp(6 * etaS * I) * Tk *
                                 ((ZH[1][2] + I * ZH[1][5]) *
                                  (ZH[1][2] + I * ZH[1][5])) +
                             std::exp((eta + 4 * etaS) * I) * Tlam *
                                 (ZH[1][0] + I * ZH[1][3]) *
                                 (ZH[1][1] + I * ZH[1][4]))) +
                   2 * std::exp((eta + etaS) * I) * I * std::conj(kap) *
                       (-2 * std::exp(2 * etaS * I) * kap * vS *
                            (3 * (ZH[1][2] * ZH[1][2]) +
                             (ZH[1][5] * ZH[1][5])) +
                        std::exp(eta * I) * lam *
                            (vS * (ZH[1][0] + I * ZH[1][3]) *
                                 (ZH[1][1] + I * ZH[1][4]) +
                             (vu * (ZH[1][0] + I * ZH[1][3]) +
                              vd * (ZH[1][1] + I * ZH[1][4])) *
                                 (ZH[1][2] - I * ZH[1][5])))) *
                      ZH[i][2] -
                  std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                      (ZH[1][2] * ZH[1][2]) * ZH[i][3] +
                  std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                      (ZH[1][5] * ZH[1][5]) * ZH[i][3] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[1][1] * ZH[1][2] * ZH[i][3] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[1][1] * ZH[1][2] * ZH[i][3] +
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[1][1] * ZH[1][2] * ZH[i][3] -
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) *
                      ZH[1][0] * ZH[1][3] * ZH[i][3] -
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) *
                      ZH[1][0] * ZH[1][3] * ZH[i][3] +
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) *
                      ZH[1][1] * ZH[1][3] * ZH[i][3] +
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) *
                      ZH[1][1] * ZH[1][3] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[1][2] * ZH[1][4] * ZH[i][3] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[1][2] * ZH[1][4] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[1][2] * ZH[1][4] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[1][1] * ZH[1][5] * ZH[i][3] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[1][1] * ZH[1][5] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[1][1] * ZH[1][5] * ZH[i][3] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                      std::conj(kap) * ZH[1][2] * ZH[1][5] * ZH[i][3] +
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[1][4] * ZH[1][5] * ZH[i][3] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[1][4] * ZH[1][5] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[1][4] * ZH[1][5] * ZH[i][3] -
                  std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                      (ZH[1][2] * ZH[1][2]) * ZH[i][4] +
                  std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                      (ZH[1][5] * ZH[1][5]) * ZH[i][4] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[1][0] * ZH[1][2] * ZH[i][4] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[1][0] * ZH[1][2] * ZH[i][4] +
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[1][0] * ZH[1][2] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[1][2] * ZH[1][3] * ZH[i][4] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[1][2] * ZH[1][3] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[1][2] * ZH[1][3] * ZH[i][4] +
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) *
                      ZH[1][0] * ZH[1][4] * ZH[i][4] +
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) *
                      ZH[1][0] * ZH[1][4] * ZH[i][4] -
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) *
                      ZH[1][1] * ZH[1][4] * ZH[i][4] -
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) *
                      ZH[1][1] * ZH[1][4] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[1][0] * ZH[1][5] * ZH[i][4] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[1][0] * ZH[1][5] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[1][0] * ZH[1][5] * ZH[i][4] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                      std::conj(kap) * ZH[1][2] * ZH[1][5] * ZH[i][4] +
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[1][3] * ZH[1][5] * ZH[i][4] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[1][3] * ZH[1][5] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[1][3] * ZH[1][5] * ZH[i][4] +
                  sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk *
                      (ZH[1][2] * ZH[1][2]) * ZH[i][5] -
                  sqrt(2) * std::exp(eta * I) * std::conj(Tk) *
                      (ZH[1][2] * ZH[1][2]) * ZH[i][5] -
                  sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk *
                      (ZH[1][5] * ZH[1][5]) * ZH[i][5] +
                  sqrt(2) * std::exp(eta * I) * std::conj(Tk) *
                      (ZH[1][5] * ZH[1][5]) * ZH[i][5] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[1][0] * ZH[1][1] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[1][0] * ZH[1][1] * ZH[i][5] +
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[1][0] * ZH[1][1] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vu *
                      std::conj(kap) * ZH[1][0] * ZH[1][2] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vd *
                      std::conj(kap) * ZH[1][1] * ZH[1][2] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[1][1] * ZH[1][3] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[1][1] * ZH[1][3] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[1][1] * ZH[1][3] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                      std::conj(kap) * ZH[1][2] * ZH[1][3] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[1][0] * ZH[1][4] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[1][0] * ZH[1][4] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[1][0] * ZH[1][4] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                      std::conj(kap) * ZH[1][2] * ZH[1][4] * ZH[i][5] +
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[1][3] * ZH[1][4] * ZH[i][5] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[1][3] * ZH[1][4] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[1][3] * ZH[1][4] * ZH[i][5] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                      std::conj(kap) * ZH[1][0] * ZH[1][5] * ZH[i][5] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                      std::conj(kap) * ZH[1][1] * ZH[1][5] * ZH[i][5] +
                  2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk *
                      ZH[1][2] * ZH[1][5] * ZH[i][5] -
                  8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                      std::conj(kap) * ZH[1][2] * ZH[1][5] * ZH[i][5] +
                  2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) *
                      ZH[1][2] * ZH[1][5] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vu *
                      std::conj(kap) * ZH[1][3] * ZH[1][5] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vd *
                      std::conj(kap) * ZH[1][4] * ZH[1][5] * ZH[i][5] +
                  std::exp(3 * etaS * I) * std::conj(lam) *
                      (2 *
                           (-(std::exp(eta * I) * I * lam *
                              (vS * ((ZH[1][0] * ZH[1][0]) +
                                     (ZH[1][1] * ZH[1][1]) +
                                     (ZH[1][3] * ZH[1][3]) +
                                     (ZH[1][4] * ZH[1][4])) +
                               2 * (vd * ZH[1][0] + vu * ZH[1][1]) *
                                   ZH[1][2])) +
                            std::exp(2 * etaS * I) * kap *
                                (vS * (I * ZH[1][0] + ZH[1][3]) *
                                     (ZH[1][1] - I * ZH[1][4]) +
                                 (I * vu * ZH[1][0] + I * vd * ZH[1][1] +
                                  vu * ZH[1][3] + vd * ZH[1][4]) *
                                     (ZH[1][2] + I * ZH[1][5]))) *
                           ZH[i][2] +
                       (-4 * std::exp(eta * I) * I * lam *
                            (vu * ZH[1][1] + vS * ZH[1][2]) * ZH[1][3] +
                        std::exp(2 * etaS * I) * kap *
                            (ZH[1][2] + I * ZH[1][5]) *
                            (2 * vS * (ZH[1][1] - I * ZH[1][4]) +
                             vu * (ZH[1][2] + I * ZH[1][5]))) *
                           ZH[i][3] +
                       std::exp(2 * etaS * I) * kap * vd *
                           (ZH[1][2] * ZH[1][2]) * ZH[i][4] -
                       std::exp(2 * etaS * I) * kap * vd *
                           (ZH[1][5] * ZH[1][5]) * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[1][0] *
                           ZH[1][2] * ZH[i][4] -
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[1][2] *
                           ZH[1][3] * ZH[i][4] -
                       4 * std::exp(eta * I) * I * lam * vd * ZH[1][0] *
                           ZH[1][4] * ZH[i][4] -
                       4 * std::exp(eta * I) * I * lam * vS * ZH[1][2] *
                           ZH[1][4] * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[1][0] *
                           ZH[1][5] * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * I * kap * vd * ZH[1][2] *
                           ZH[1][5] * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[1][3] *
                           ZH[1][5] * ZH[i][4] -
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[1][0] *
                           ZH[1][1] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vu * ZH[1][0] *
                           ZH[1][2] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vd * ZH[1][1] *
                           ZH[1][2] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[1][1] *
                           ZH[1][3] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vu * ZH[1][2] *
                           ZH[1][3] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[1][0] *
                           ZH[1][4] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vd * ZH[1][2] *
                           ZH[1][4] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[1][3] *
                           ZH[1][4] * ZH[i][5] -
                       4 * std::exp(eta * I) * I * lam * vd * ZH[1][0] *
                           ZH[1][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * I * kap * vu * ZH[1][0] *
                           ZH[1][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * I * kap * vd * ZH[1][1] *
                           ZH[1][5] * ZH[i][5] -
                       4 * std::exp(eta * I) * I * lam * vu * ZH[1][1] *
                           ZH[1][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vu * ZH[1][3] *
                           ZH[1][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vd * ZH[1][4] *
                           ZH[1][5] * ZH[i][5]))) /
            (4. * std::exp((eta + 3 * etaS) * I));
    }
    for (size_t i = 0; i < 6; i++) {
        coup2[i] =
            (g1 * std::conj(ZN[0][0]) *
                 (std::exp(eta * I) * std::conj(ZN[0][2]) *
                      (I * ZH[i][0] + ZH[i][3]) +
                  std::conj(ZN[0][3]) * (-(I * ZH[i][1]) - ZH[i][4])) +
             g2 * std::conj(ZN[0][1]) *
                 (-(std::exp(eta * I) * I * std::conj(ZN[0][2]) *
                    (ZH[i][0] - I * ZH[i][3])) +
                  std::conj(ZN[0][3]) * (I * ZH[i][1] + ZH[i][4])) +
             sqrt(2) * std::exp(eta * I) *
                 (std::conj(ZN[0][4]) *
                      (std::exp(eta * I) * I * lam * std::conj(ZN[0][2]) *
                           (ZH[i][1] + I * ZH[i][4]) +
                       std::exp(etaS * I) * kap * std::conj(ZN[0][4]) *
                           (-(I * ZH[i][2]) + ZH[i][5])) +
                  I * lam * std::conj(ZN[0][3]) *
                      (std::conj(ZN[0][4]) * (ZH[i][0] + I * ZH[i][3]) +
                       std::exp(etaS * I) * std::conj(ZN[0][2]) *
                           (ZH[i][2] + I * ZH[i][5])))) /
            std::exp(eta * I);
    }
    for (size_t i = 0; i < 6; i++) {
        coup3[i] =
            -((sqrt(2) * I * std::conj(kap) * (ZN[0][4] * ZN[0][4]) *
               ZH[i][2]) /
              std::exp(etaS * I)) -
            (sqrt(2) * std::conj(kap) * (ZN[0][4] * ZN[0][4]) * ZH[i][5]) /
                std::exp(etaS * I) -
            std::exp(eta * I) * g1 * I * ZH[i][1] * ZN[0][0] * ZN[0][3] +
            std::exp(eta * I) * g1 * ZH[i][4] * ZN[0][0] * ZN[0][3] +
            std::exp(eta * I) * g2 * I * ZH[i][1] * ZN[0][1] * ZN[0][3] -
            std::exp(eta * I) * g2 * ZH[i][4] * ZN[0][1] * ZN[0][3] +
            (sqrt(2) * I * std::conj(lam) * ZH[i][2] * ZN[0][2] * ZN[0][3]) /
                std::exp(etaS * I) +
            (sqrt(2) * std::conj(lam) * ZH[i][5] * ZN[0][2] * ZN[0][3]) /
                std::exp(etaS * I) +
            (sqrt(2) * I * std::conj(lam) * ZH[i][1] * ZN[0][2] * ZN[0][4]) /
                std::exp(eta * I) +
            (sqrt(2) * std::conj(lam) * ZH[i][4] * ZN[0][2] * ZN[0][4]) /
                std::exp(eta * I) +
            I * ZH[i][0] *
                ((g1 * ZN[0][0] - g2 * ZN[0][1]) * ZN[0][2] +
                 sqrt(2) * std::conj(lam) * ZN[0][3] * ZN[0][4]) +
            ZH[i][3] * ((-(g1 * ZN[0][0]) + g2 * ZN[0][1]) * ZN[0][2] +
                        sqrt(2) * std::conj(lam) * ZN[0][3] * ZN[0][4]);
    }
    for (size_t i = 0; i < 5; i++) {
        coup4[i] =
            (-(std::exp(eta * I) * g2 * I * std::conj(ZN[0][1]) *
               std::conj(ZN[i][2]) * ZH[1][0]) +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][3]) * ZH[1][0] +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[i][4]) * ZH[1][0] -
             g1 * I * std::conj(ZN[0][3]) * std::conj(ZN[i][0]) * ZH[1][1] +
             g2 * I * std::conj(ZN[0][3]) * std::conj(ZN[i][1]) * ZH[1][1] +
             sqrt(2) * std::exp(2 * eta * I) * I * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][2]) * ZH[1][1] +
             g2 * I * std::conj(ZN[0][1]) * std::conj(ZN[i][3]) * ZH[1][1] +
             sqrt(2) * std::exp((eta + etaS) * I) * I * lam *
                 std::conj(ZN[0][3]) * std::conj(ZN[i][2]) * ZH[1][2] -
             2 * sqrt(2) * std::exp((eta + etaS) * I) * I * kap *
                 std::conj(ZN[0][4]) * std::conj(ZN[i][4]) * ZH[1][2] -
             std::exp(eta * I) * g2 * std::conj(ZN[0][1]) *
                 std::conj(ZN[i][2]) * ZH[1][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][3]) * ZH[1][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[i][4]) * ZH[1][3] +
             g1 * std::conj(ZN[0][0]) *
                 (std::exp(eta * I) * std::conj(ZN[i][2]) *
                      (I * ZH[1][0] + ZH[1][3]) +
                  std::conj(ZN[i][3]) * (-(I * ZH[1][1]) - ZH[1][4])) -
             g1 * std::conj(ZN[0][3]) * std::conj(ZN[i][0]) * ZH[1][4] +
             g2 * std::conj(ZN[0][3]) * std::conj(ZN[i][1]) * ZH[1][4] -
             sqrt(2) * std::exp(2 * eta * I) * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][2]) * ZH[1][4] +
             g2 * std::conj(ZN[0][1]) * std::conj(ZN[i][3]) * ZH[1][4] -
             sqrt(2) * std::exp((eta + etaS) * I) * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[i][2]) * ZH[1][5] +
             2 * sqrt(2) * std::exp((eta + etaS) * I) * kap *
                 std::conj(ZN[0][4]) * std::conj(ZN[i][4]) * ZH[1][5] +
             std::exp(eta * I) * std::conj(ZN[0][2]) *
                 (g2 * std::conj(ZN[i][1]) * (-(I * ZH[1][0]) - ZH[1][3]) +
                  g1 * std::conj(ZN[i][0]) * (I * ZH[1][0] + ZH[1][3]) +
                  sqrt(2) * I * lam *
                      (std::exp(eta * I) * std::conj(ZN[i][4]) *
                           (ZH[1][1] + I * ZH[1][4]) +
                       std::exp(etaS * I) * std::conj(ZN[i][3]) *
                           (ZH[1][2] + I * ZH[1][5])))) /
            (2. * std::exp(eta * I));
    }
    for (size_t i = 0; i < 5; i++) {
        coup5[i] =
            (g1 *
                 (I * ZH[1][0] * ZN[0][2] - ZH[1][3] * ZN[0][2] +
                  std::exp(eta * I) * (-(I * ZH[1][1]) + ZH[1][4]) * ZN[0][3]) *
                 ZN[i][0] +
             g2 *
                 (-(I * ZH[1][0] * ZN[0][2]) + ZH[1][3] * ZN[0][2] +
                  std::exp(eta * I) * I * (ZH[1][1] + I * ZH[1][4]) *
                      ZN[0][3]) *
                 ZN[i][1] +
             g1 * I * ZH[1][0] * ZN[0][0] * ZN[i][2] -
             g1 * ZH[1][3] * ZN[0][0] * ZN[i][2] -
             g2 * I * ZH[1][0] * ZN[0][1] * ZN[i][2] +
             g2 * ZH[1][3] * ZN[0][1] * ZN[i][2] +
             (sqrt(2) * I * std::conj(lam) * ZH[1][2] * ZN[0][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[1][5] * ZN[0][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * I * std::conj(lam) * ZH[1][1] * ZN[0][4] * ZN[i][2]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[1][4] * ZN[0][4] * ZN[i][2]) /
                 std::exp(eta * I) -
             std::exp(eta * I) * g1 * I * ZH[1][1] * ZN[0][0] * ZN[i][3] +
             std::exp(eta * I) * g1 * ZH[1][4] * ZN[0][0] * ZN[i][3] +
             std::exp(eta * I) * g2 * I * ZH[1][1] * ZN[0][1] * ZN[i][3] -
             std::exp(eta * I) * g2 * ZH[1][4] * ZN[0][1] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[1][2] * ZN[0][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[1][5] * ZN[0][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             sqrt(2) * I * std::conj(lam) * ZH[1][0] * ZN[0][4] * ZN[i][3] +
             sqrt(2) * std::conj(lam) * ZH[1][3] * ZN[0][4] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[1][1] * ZN[0][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[1][4] * ZN[0][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             sqrt(2) * I * std::conj(lam) * ZH[1][0] * ZN[0][3] * ZN[i][4] +
             sqrt(2) * std::conj(lam) * ZH[1][3] * ZN[0][3] * ZN[i][4] -
             (2 * sqrt(2) * I * std::conj(kap) * ZH[1][2] * ZN[0][4] *
              ZN[i][4]) /
                 std::exp(etaS * I) -
             (2 * sqrt(2) * std::conj(kap) * ZH[1][5] * ZN[0][4] * ZN[i][4]) /
                 std::exp(etaS * I)) /
            2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup6[i] =
            (std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vu * (I * ZH[1][2] + ZH[1][5]) *
                           (ZH[2][2] - I * ZH[2][5]) +
                       vS * (I * ZH[1][2] * (ZH[2][1] + I * ZH[2][4]) +
                             ZH[1][5] * (ZH[2][1] + I * ZH[2][4]) +
                             (ZH[1][1] + I * ZH[1][4]) *
                                 (I * ZH[2][2] + ZH[2][5]))) +
                  2 * std::conj(lam) *
                      (-2 * std::exp((eta + 2 * etaS) * I) * I * lam *
                           (vu * ZH[1][1] * ZH[2][0] +
                            vS * ZH[1][2] * ZH[2][0] +
                            vu * ZH[1][0] * ZH[2][1] +
                            vd * ZH[1][1] * ZH[2][1] +
                            vS * ZH[1][0] * ZH[2][2] +
                            vd * ZH[1][2] * ZH[2][2] +
                            vd * ZH[1][4] * ZH[2][4] +
                            vd * ZH[1][5] * ZH[2][5]) +
                       std::exp(4 * etaS * I) * I * kap *
                           (vu * (ZH[1][2] + I * ZH[1][5]) *
                                (ZH[2][2] + I * ZH[2][5]) +
                            vS * (ZH[1][5] * (I * ZH[2][1] + ZH[2][4]) +
                                  ZH[1][2] * (ZH[2][1] - I * ZH[2][4]) +
                                  (ZH[1][1] - I * ZH[1][4]) *
                                      (ZH[2][2] + I * ZH[2][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[1][2] * (I * ZH[2][1] + ZH[2][4]) +
                            ZH[1][5] * (ZH[2][1] - I * ZH[2][4]) +
                            (I * ZH[1][1] + ZH[1][4]) *
                                (ZH[2][2] - I * ZH[2][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vu * (ZH[1][1] * ZH[2][0] +
                                               ZH[1][0] * ZH[2][1]) +
                                         vd * (-3 * ZH[1][0] * ZH[2][0] +
                                               ZH[1][1] * ZH[2][1] -
                                               ZH[1][3] * ZH[2][3] +
                                               ZH[1][4] * ZH[2][4])) +
                            (g2 * g2) * (vu * (ZH[1][1] * ZH[2][0] +
                                               ZH[1][0] * ZH[2][1]) +
                                         vd * (-3 * ZH[1][0] * ZH[2][0] +
                                               ZH[1][1] * ZH[2][1] -
                                               ZH[1][3] * ZH[2][3] +
                                               ZH[1][4] * ZH[2][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[1][2] * (ZH[2][1] + I * ZH[2][4]) +
                                 I * ZH[1][5] * (ZH[2][1] + I * ZH[2][4]) +
                                 (ZH[1][1] + I * ZH[1][4]) *
                                     (ZH[2][2] + I * ZH[2][5]))))) *
                 ZH[i][0] +
             std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vd * (I * ZH[1][2] + ZH[1][5]) *
                           (ZH[2][2] - I * ZH[2][5]) +
                       vS * (I * ZH[1][2] * (ZH[2][0] + I * ZH[2][3]) +
                             ZH[1][5] * (ZH[2][0] + I * ZH[2][3]) +
                             (ZH[1][0] + I * ZH[1][3]) *
                                 (I * ZH[2][2] + ZH[2][5]))) +
                  2 * std::exp(2 * etaS * I) * I * std::conj(lam) *
                      (-2 * std::exp(eta * I) * lam *
                           (vd * ZH[1][1] * ZH[2][0] +
                            vd * ZH[1][0] * ZH[2][1] +
                            vS * ZH[1][2] * ZH[2][1] +
                            vS * ZH[1][1] * ZH[2][2] +
                            vu * (ZH[1][0] * ZH[2][0] + ZH[1][2] * ZH[2][2] +
                                  ZH[1][3] * ZH[2][3] + ZH[1][5] * ZH[2][5])) +
                       std::exp(2 * etaS * I) * kap *
                           (vd * (ZH[1][2] + I * ZH[1][5]) *
                                (ZH[2][2] + I * ZH[2][5]) +
                            vS * (ZH[1][5] * (I * ZH[2][0] + ZH[2][3]) +
                                  ZH[1][2] * (ZH[2][0] - I * ZH[2][3]) +
                                  (ZH[1][0] - I * ZH[1][3]) *
                                      (ZH[2][2] + I * ZH[2][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[1][2] * (I * ZH[2][0] + ZH[2][3]) +
                            ZH[1][5] * (ZH[2][0] - I * ZH[2][3]) +
                            (I * ZH[1][0] + ZH[1][3]) *
                                (ZH[2][2] - I * ZH[2][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vd * (ZH[1][1] * ZH[2][0] +
                                               ZH[1][0] * ZH[2][1]) +
                                         vu * (ZH[1][0] * ZH[2][0] -
                                               3 * ZH[1][1] * ZH[2][1] +
                                               ZH[1][3] * ZH[2][3] -
                                               ZH[1][4] * ZH[2][4])) +
                            (g2 * g2) * (vd * (ZH[1][1] * ZH[2][0] +
                                               ZH[1][0] * ZH[2][1]) +
                                         vu * (ZH[1][0] * ZH[2][0] -
                                               3 * ZH[1][1] * ZH[2][1] +
                                               ZH[1][3] * ZH[2][3] -
                                               ZH[1][4] * ZH[2][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[1][2] * (ZH[2][0] + I * ZH[2][3]) +
                                 I * ZH[1][5] * (ZH[2][0] + I * ZH[2][3]) +
                                 (ZH[1][0] + I * ZH[1][3]) *
                                     (ZH[2][2] + I * ZH[2][5]))))) *
                 ZH[i][1] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][0] * ZH[2][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][1] * ZH[2][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][1] * ZH[2][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][1] * ZH[2][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][1] *
                 ZH[2][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][2] * ZH[2][0] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][2] * ZH[2][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][2] * ZH[2][0] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][4] *
                 ZH[2][0] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][4] * ZH[2][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][4] *
                 ZH[2][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][4] *
                 ZH[2][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][5] * ZH[2][0] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][5] *
                 ZH[2][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][0] * ZH[2][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][0] * ZH[2][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][0] * ZH[2][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][0] *
                 ZH[2][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][1] * ZH[2][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][2] * ZH[2][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][2] * ZH[2][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][2] * ZH[2][1] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][3] *
                 ZH[2][1] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][3] * ZH[2][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][3] *
                 ZH[2][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][3] *
                 ZH[2][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][5] * ZH[2][1] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][5] *
                 ZH[2][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][0] * ZH[2][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][0] * ZH[2][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][0] * ZH[2][2] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][1] * ZH[2][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][1] * ZH[2][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][1] * ZH[2][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[1][2] *
                 ZH[2][2] * ZH[i][2] -
             24 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[1][2] * ZH[2][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[1][2] *
                 ZH[2][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][3] * ZH[2][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][3] *
                 ZH[2][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][4] * ZH[2][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][4] *
                 ZH[2][2] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[1][5] *
                 ZH[2][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[1][5] *
                 ZH[2][2] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][1] *
                 ZH[2][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][1] * ZH[2][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][1] *
                 ZH[2][3] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][1] *
                 ZH[2][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][2] * ZH[2][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][2] *
                 ZH[2][3] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][3] * ZH[2][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][4] * ZH[2][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][4] * ZH[2][3] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][4] * ZH[2][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][4] *
                 ZH[2][3] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][5] * ZH[2][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][5] * ZH[2][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][0] *
                 ZH[2][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][0] * ZH[2][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][0] *
                 ZH[2][4] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][0] *
                 ZH[2][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][2] * ZH[2][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][2] *
                 ZH[2][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][3] * ZH[2][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][3] * ZH[2][4] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][3] * ZH[2][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][3] *
                 ZH[2][4] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][4] * ZH[2][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][5] * ZH[2][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][5] * ZH[2][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][0] * ZH[2][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][0] *
                 ZH[2][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][1] * ZH[2][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][1] *
                 ZH[2][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[1][2] *
                 ZH[2][5] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[1][2] *
                 ZH[2][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][3] * ZH[2][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][3] * ZH[2][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][4] * ZH[2][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][4] * ZH[2][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[1][5] *
                 ZH[2][5] * ZH[i][2] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[1][5] * ZH[2][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[1][5] *
                 ZH[2][5] * ZH[i][2] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[1][3] *
                 ZH[2][0] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[1][3] *
                 ZH[2][0] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][2] *
                 ZH[2][1] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][2] * ZH[2][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][2] *
                 ZH[2][1] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][2] *
                 ZH[2][1] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][3] * ZH[2][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[1][3] *
                 ZH[2][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[1][3] *
                 ZH[2][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][5] * ZH[2][1] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][5] * ZH[2][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][5] * ZH[2][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][5] *
                 ZH[2][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][1] *
                 ZH[2][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][1] * ZH[2][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][1] *
                 ZH[2][2] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][1] *
                 ZH[2][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][2] * ZH[2][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][2] *
                 ZH[2][2] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][3] * ZH[2][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][4] * ZH[2][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][4] * ZH[2][2] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][4] * ZH[2][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][4] *
                 ZH[2][2] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][5] * ZH[2][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][5] * ZH[2][2] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[1][0] *
                 ZH[2][3] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[1][0] *
                 ZH[2][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][1] * ZH[2][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[1][1] *
                 ZH[2][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[1][1] *
                 ZH[2][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][2] * ZH[2][3] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][2] * ZH[2][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][2] * ZH[2][4] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][2] * ZH[2][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][2] *
                 ZH[2][4] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][5] *
                 ZH[2][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][5] * ZH[2][4] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][5] *
                 ZH[2][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][5] *
                 ZH[2][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][1] * ZH[2][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][1] * ZH[2][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][1] * ZH[2][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][1] *
                 ZH[2][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][2] * ZH[2][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][2] * ZH[2][5] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][4] *
                 ZH[2][5] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][4] * ZH[2][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][4] *
                 ZH[2][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][4] *
                 ZH[2][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][5] * ZH[2][5] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][5] *
                 ZH[2][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][2] *
                 ZH[2][0] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][2] * ZH[2][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][2] *
                 ZH[2][0] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][2] *
                 ZH[2][0] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][4] * ZH[2][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[1][4] *
                 ZH[2][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[1][4] *
                 ZH[2][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][5] * ZH[2][0] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][5] * ZH[2][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][5] * ZH[2][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][5] *
                 ZH[2][0] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[1][4] *
                 ZH[2][1] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[1][4] *
                 ZH[2][1] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][0] *
                 ZH[2][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][0] * ZH[2][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][0] *
                 ZH[2][2] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][0] *
                 ZH[2][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][2] * ZH[2][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][2] *
                 ZH[2][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][3] * ZH[2][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][3] * ZH[2][2] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][3] * ZH[2][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][3] *
                 ZH[2][2] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][4] * ZH[2][2] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][5] * ZH[2][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][5] * ZH[2][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][2] * ZH[2][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][2] * ZH[2][3] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][2] * ZH[2][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][2] *
                 ZH[2][3] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][5] *
                 ZH[2][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][5] * ZH[2][3] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][5] *
                 ZH[2][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][5] *
                 ZH[2][3] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][0] * ZH[2][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[1][0] *
                 ZH[2][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[1][0] *
                 ZH[2][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[1][1] *
                 ZH[2][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[1][1] *
                 ZH[2][4] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][2] * ZH[2][4] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][0] * ZH[2][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][0] * ZH[2][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][0] * ZH[2][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][0] *
                 ZH[2][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][2] * ZH[2][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][2] * ZH[2][5] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][3] *
                 ZH[2][5] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][3] * ZH[2][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][3] *
                 ZH[2][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][3] *
                 ZH[2][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][5] * ZH[2][5] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][5] *
                 ZH[2][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][1] *
                 ZH[2][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][1] * ZH[2][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][1] *
                 ZH[2][0] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][1] *
                 ZH[2][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][2] * ZH[2][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][2] *
                 ZH[2][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][4] * ZH[2][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][4] * ZH[2][0] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][4] * ZH[2][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][4] *
                 ZH[2][0] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][5] * ZH[2][0] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][5] * ZH[2][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][5] * ZH[2][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][0] *
                 ZH[2][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][0] * ZH[2][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][0] *
                 ZH[2][1] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][0] *
                 ZH[2][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][2] * ZH[2][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][2] *
                 ZH[2][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][3] * ZH[2][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][3] * ZH[2][1] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][3] * ZH[2][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][3] *
                 ZH[2][1] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][5] * ZH[2][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][5] * ZH[2][1] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][5] * ZH[2][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][0] * ZH[2][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][0] *
                 ZH[2][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][1] * ZH[2][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][1] *
                 ZH[2][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[1][2] *
                 ZH[2][2] * ZH[i][5] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[1][2] *
                 ZH[2][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][3] * ZH[2][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][3] * ZH[2][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][4] * ZH[2][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][4] * ZH[2][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[1][5] *
                 ZH[2][2] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[1][5] * ZH[2][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[1][5] *
                 ZH[2][2] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][1] * ZH[2][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][1] * ZH[2][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][1] * ZH[2][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][1] *
                 ZH[2][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][2] * ZH[2][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][2] * ZH[2][3] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][4] *
                 ZH[2][3] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][4] * ZH[2][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][4] *
                 ZH[2][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][4] *
                 ZH[2][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][5] * ZH[2][3] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][5] *
                 ZH[2][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][0] * ZH[2][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][0] * ZH[2][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][0] * ZH[2][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][0] *
                 ZH[2][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][2] * ZH[2][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][2] * ZH[2][4] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][3] *
                 ZH[2][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][3] * ZH[2][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][3] *
                 ZH[2][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][3] *
                 ZH[2][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][5] * ZH[2][4] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][5] *
                 ZH[2][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][0] * ZH[2][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][0] * ZH[2][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][0] * ZH[2][5] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][1] * ZH[2][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][1] * ZH[2][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][1] * ZH[2][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[1][2] *
                 ZH[2][5] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[1][2] * ZH[2][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[1][2] *
                 ZH[2][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][3] * ZH[2][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][3] *
                 ZH[2][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][4] * ZH[2][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][4] *
                 ZH[2][5] * ZH[i][5] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[1][5] *
                 ZH[2][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[1][5] *
                 ZH[2][5] * ZH[i][5]) /
            (4. * std::exp((eta + 3 * etaS) * I));
    }
    coup7 =
        ((CTW * g2 + g1 * STW) * (ZH[1][3] * ZH[2][0] - ZH[1][4] * ZH[2][1] -
                                  ZH[1][0] * ZH[2][3] + ZH[1][1] * ZH[2][4])) /
        2.;
    coup8 =
        (I * (CTW * g2 + g1 * STW) *
         (std::conj(ZN[0][2]) * ZN[0][2] - std::conj(ZN[0][3]) * ZN[0][3])) /
        2.;
    coup9 = -0.5 *
            (I * (CTW * g2 + g1 * STW) *
             (std::conj(ZN[0][2]) * ZN[0][2] - std::conj(ZN[0][3]) * ZN[0][3]));
    for (size_t i = 0; i < 5; i++) {
        coup10[i] =
            (-(std::exp(eta * I) * g2 * I * std::conj(ZN[0][1]) *
               std::conj(ZN[i][2]) * ZH[2][0]) +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][3]) * ZH[2][0] +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[i][4]) * ZH[2][0] -
             g1 * I * std::conj(ZN[0][3]) * std::conj(ZN[i][0]) * ZH[2][1] +
             g2 * I * std::conj(ZN[0][3]) * std::conj(ZN[i][1]) * ZH[2][1] +
             sqrt(2) * std::exp(2 * eta * I) * I * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][2]) * ZH[2][1] +
             g2 * I * std::conj(ZN[0][1]) * std::conj(ZN[i][3]) * ZH[2][1] +
             sqrt(2) * std::exp((eta + etaS) * I) * I * lam *
                 std::conj(ZN[0][3]) * std::conj(ZN[i][2]) * ZH[2][2] -
             2 * sqrt(2) * std::exp((eta + etaS) * I) * I * kap *
                 std::conj(ZN[0][4]) * std::conj(ZN[i][4]) * ZH[2][2] -
             std::exp(eta * I) * g2 * std::conj(ZN[0][1]) *
                 std::conj(ZN[i][2]) * ZH[2][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][3]) * ZH[2][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[i][4]) * ZH[2][3] +
             g1 * std::conj(ZN[0][0]) *
                 (std::exp(eta * I) * std::conj(ZN[i][2]) *
                      (I * ZH[2][0] + ZH[2][3]) +
                  std::conj(ZN[i][3]) * (-(I * ZH[2][1]) - ZH[2][4])) -
             g1 * std::conj(ZN[0][3]) * std::conj(ZN[i][0]) * ZH[2][4] +
             g2 * std::conj(ZN[0][3]) * std::conj(ZN[i][1]) * ZH[2][4] -
             sqrt(2) * std::exp(2 * eta * I) * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][2]) * ZH[2][4] +
             g2 * std::conj(ZN[0][1]) * std::conj(ZN[i][3]) * ZH[2][4] -
             sqrt(2) * std::exp((eta + etaS) * I) * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[i][2]) * ZH[2][5] +
             2 * sqrt(2) * std::exp((eta + etaS) * I) * kap *
                 std::conj(ZN[0][4]) * std::conj(ZN[i][4]) * ZH[2][5] +
             std::exp(eta * I) * std::conj(ZN[0][2]) *
                 (g2 * std::conj(ZN[i][1]) * (-(I * ZH[2][0]) - ZH[2][3]) +
                  g1 * std::conj(ZN[i][0]) * (I * ZH[2][0] + ZH[2][3]) +
                  sqrt(2) * I * lam *
                      (std::exp(eta * I) * std::conj(ZN[i][4]) *
                           (ZH[2][1] + I * ZH[2][4]) +
                       std::exp(etaS * I) * std::conj(ZN[i][3]) *
                           (ZH[2][2] + I * ZH[2][5])))) /
            (2. * std::exp(eta * I));
    }
    for (size_t i = 0; i < 5; i++) {
        coup11[i] =
            (g1 *
                 (I * ZH[2][0] * ZN[0][2] - ZH[2][3] * ZN[0][2] +
                  std::exp(eta * I) * (-(I * ZH[2][1]) + ZH[2][4]) * ZN[0][3]) *
                 ZN[i][0] +
             g2 *
                 (-(I * ZH[2][0] * ZN[0][2]) + ZH[2][3] * ZN[0][2] +
                  std::exp(eta * I) * I * (ZH[2][1] + I * ZH[2][4]) *
                      ZN[0][3]) *
                 ZN[i][1] +
             g1 * I * ZH[2][0] * ZN[0][0] * ZN[i][2] -
             g1 * ZH[2][3] * ZN[0][0] * ZN[i][2] -
             g2 * I * ZH[2][0] * ZN[0][1] * ZN[i][2] +
             g2 * ZH[2][3] * ZN[0][1] * ZN[i][2] +
             (sqrt(2) * I * std::conj(lam) * ZH[2][2] * ZN[0][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[2][5] * ZN[0][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * I * std::conj(lam) * ZH[2][1] * ZN[0][4] * ZN[i][2]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[2][4] * ZN[0][4] * ZN[i][2]) /
                 std::exp(eta * I) -
             std::exp(eta * I) * g1 * I * ZH[2][1] * ZN[0][0] * ZN[i][3] +
             std::exp(eta * I) * g1 * ZH[2][4] * ZN[0][0] * ZN[i][3] +
             std::exp(eta * I) * g2 * I * ZH[2][1] * ZN[0][1] * ZN[i][3] -
             std::exp(eta * I) * g2 * ZH[2][4] * ZN[0][1] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[2][2] * ZN[0][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[2][5] * ZN[0][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             sqrt(2) * I * std::conj(lam) * ZH[2][0] * ZN[0][4] * ZN[i][3] +
             sqrt(2) * std::conj(lam) * ZH[2][3] * ZN[0][4] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[2][1] * ZN[0][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[2][4] * ZN[0][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             sqrt(2) * I * std::conj(lam) * ZH[2][0] * ZN[0][3] * ZN[i][4] +
             sqrt(2) * std::conj(lam) * ZH[2][3] * ZN[0][3] * ZN[i][4] -
             (2 * sqrt(2) * I * std::conj(kap) * ZH[2][2] * ZN[0][4] *
              ZN[i][4]) /
                 std::exp(etaS * I) -
             (2 * sqrt(2) * std::conj(kap) * ZH[2][5] * ZN[0][4] * ZN[i][4]) /
                 std::exp(etaS * I)) /
            2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup12[i] =
            (std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vu * (I * ZH[1][2] + ZH[1][5]) *
                           (ZH[3][2] - I * ZH[3][5]) +
                       vS * (I * ZH[1][2] * (ZH[3][1] + I * ZH[3][4]) +
                             ZH[1][5] * (ZH[3][1] + I * ZH[3][4]) +
                             (ZH[1][1] + I * ZH[1][4]) *
                                 (I * ZH[3][2] + ZH[3][5]))) +
                  2 * std::conj(lam) *
                      (-2 * std::exp((eta + 2 * etaS) * I) * I * lam *
                           (vu * ZH[1][1] * ZH[3][0] +
                            vS * ZH[1][2] * ZH[3][0] +
                            vu * ZH[1][0] * ZH[3][1] +
                            vd * ZH[1][1] * ZH[3][1] +
                            vS * ZH[1][0] * ZH[3][2] +
                            vd * ZH[1][2] * ZH[3][2] +
                            vd * ZH[1][4] * ZH[3][4] +
                            vd * ZH[1][5] * ZH[3][5]) +
                       std::exp(4 * etaS * I) * I * kap *
                           (vu * (ZH[1][2] + I * ZH[1][5]) *
                                (ZH[3][2] + I * ZH[3][5]) +
                            vS * (ZH[1][5] * (I * ZH[3][1] + ZH[3][4]) +
                                  ZH[1][2] * (ZH[3][1] - I * ZH[3][4]) +
                                  (ZH[1][1] - I * ZH[1][4]) *
                                      (ZH[3][2] + I * ZH[3][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[1][2] * (I * ZH[3][1] + ZH[3][4]) +
                            ZH[1][5] * (ZH[3][1] - I * ZH[3][4]) +
                            (I * ZH[1][1] + ZH[1][4]) *
                                (ZH[3][2] - I * ZH[3][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vu * (ZH[1][1] * ZH[3][0] +
                                               ZH[1][0] * ZH[3][1]) +
                                         vd * (-3 * ZH[1][0] * ZH[3][0] +
                                               ZH[1][1] * ZH[3][1] -
                                               ZH[1][3] * ZH[3][3] +
                                               ZH[1][4] * ZH[3][4])) +
                            (g2 * g2) * (vu * (ZH[1][1] * ZH[3][0] +
                                               ZH[1][0] * ZH[3][1]) +
                                         vd * (-3 * ZH[1][0] * ZH[3][0] +
                                               ZH[1][1] * ZH[3][1] -
                                               ZH[1][3] * ZH[3][3] +
                                               ZH[1][4] * ZH[3][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[1][2] * (ZH[3][1] + I * ZH[3][4]) +
                                 I * ZH[1][5] * (ZH[3][1] + I * ZH[3][4]) +
                                 (ZH[1][1] + I * ZH[1][4]) *
                                     (ZH[3][2] + I * ZH[3][5]))))) *
                 ZH[i][0] +
             std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vd * (I * ZH[1][2] + ZH[1][5]) *
                           (ZH[3][2] - I * ZH[3][5]) +
                       vS * (I * ZH[1][2] * (ZH[3][0] + I * ZH[3][3]) +
                             ZH[1][5] * (ZH[3][0] + I * ZH[3][3]) +
                             (ZH[1][0] + I * ZH[1][3]) *
                                 (I * ZH[3][2] + ZH[3][5]))) +
                  2 * std::exp(2 * etaS * I) * I * std::conj(lam) *
                      (-2 * std::exp(eta * I) * lam *
                           (vd * ZH[1][1] * ZH[3][0] +
                            vd * ZH[1][0] * ZH[3][1] +
                            vS * ZH[1][2] * ZH[3][1] +
                            vS * ZH[1][1] * ZH[3][2] +
                            vu * (ZH[1][0] * ZH[3][0] + ZH[1][2] * ZH[3][2] +
                                  ZH[1][3] * ZH[3][3] + ZH[1][5] * ZH[3][5])) +
                       std::exp(2 * etaS * I) * kap *
                           (vd * (ZH[1][2] + I * ZH[1][5]) *
                                (ZH[3][2] + I * ZH[3][5]) +
                            vS * (ZH[1][5] * (I * ZH[3][0] + ZH[3][3]) +
                                  ZH[1][2] * (ZH[3][0] - I * ZH[3][3]) +
                                  (ZH[1][0] - I * ZH[1][3]) *
                                      (ZH[3][2] + I * ZH[3][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[1][2] * (I * ZH[3][0] + ZH[3][3]) +
                            ZH[1][5] * (ZH[3][0] - I * ZH[3][3]) +
                            (I * ZH[1][0] + ZH[1][3]) *
                                (ZH[3][2] - I * ZH[3][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vd * (ZH[1][1] * ZH[3][0] +
                                               ZH[1][0] * ZH[3][1]) +
                                         vu * (ZH[1][0] * ZH[3][0] -
                                               3 * ZH[1][1] * ZH[3][1] +
                                               ZH[1][3] * ZH[3][3] -
                                               ZH[1][4] * ZH[3][4])) +
                            (g2 * g2) * (vd * (ZH[1][1] * ZH[3][0] +
                                               ZH[1][0] * ZH[3][1]) +
                                         vu * (ZH[1][0] * ZH[3][0] -
                                               3 * ZH[1][1] * ZH[3][1] +
                                               ZH[1][3] * ZH[3][3] -
                                               ZH[1][4] * ZH[3][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[1][2] * (ZH[3][0] + I * ZH[3][3]) +
                                 I * ZH[1][5] * (ZH[3][0] + I * ZH[3][3]) +
                                 (ZH[1][0] + I * ZH[1][3]) *
                                     (ZH[3][2] + I * ZH[3][5]))))) *
                 ZH[i][1] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][0] * ZH[3][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][1] * ZH[3][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][1] * ZH[3][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][1] * ZH[3][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][1] *
                 ZH[3][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][2] * ZH[3][0] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][2] * ZH[3][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][2] * ZH[3][0] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][4] *
                 ZH[3][0] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][4] * ZH[3][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][4] *
                 ZH[3][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][4] *
                 ZH[3][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][5] * ZH[3][0] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][5] *
                 ZH[3][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][0] * ZH[3][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][0] * ZH[3][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][0] * ZH[3][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][0] *
                 ZH[3][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][1] * ZH[3][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][2] * ZH[3][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][2] * ZH[3][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][2] * ZH[3][1] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][3] *
                 ZH[3][1] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][3] * ZH[3][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][3] *
                 ZH[3][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][3] *
                 ZH[3][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][5] * ZH[3][1] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][5] *
                 ZH[3][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][0] * ZH[3][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][0] * ZH[3][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][0] * ZH[3][2] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][1] * ZH[3][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][1] * ZH[3][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][1] * ZH[3][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[1][2] *
                 ZH[3][2] * ZH[i][2] -
             24 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[1][2] * ZH[3][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[1][2] *
                 ZH[3][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][3] * ZH[3][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][3] *
                 ZH[3][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][4] * ZH[3][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][4] *
                 ZH[3][2] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[1][5] *
                 ZH[3][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[1][5] *
                 ZH[3][2] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][1] *
                 ZH[3][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][1] * ZH[3][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][1] *
                 ZH[3][3] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][1] *
                 ZH[3][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][2] * ZH[3][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][2] *
                 ZH[3][3] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][3] * ZH[3][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][4] * ZH[3][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][4] * ZH[3][3] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][4] * ZH[3][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][4] *
                 ZH[3][3] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][5] * ZH[3][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][5] * ZH[3][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][0] *
                 ZH[3][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][0] * ZH[3][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][0] *
                 ZH[3][4] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][0] *
                 ZH[3][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][2] * ZH[3][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][2] *
                 ZH[3][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][3] * ZH[3][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][3] * ZH[3][4] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][3] * ZH[3][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][3] *
                 ZH[3][4] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][4] * ZH[3][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][5] * ZH[3][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][5] * ZH[3][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][0] * ZH[3][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][0] *
                 ZH[3][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][1] * ZH[3][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][1] *
                 ZH[3][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[1][2] *
                 ZH[3][5] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[1][2] *
                 ZH[3][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][3] * ZH[3][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][3] * ZH[3][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][4] * ZH[3][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][4] * ZH[3][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[1][5] *
                 ZH[3][5] * ZH[i][2] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[1][5] * ZH[3][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[1][5] *
                 ZH[3][5] * ZH[i][2] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[1][3] *
                 ZH[3][0] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[1][3] *
                 ZH[3][0] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][2] *
                 ZH[3][1] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][2] * ZH[3][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][2] *
                 ZH[3][1] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][2] *
                 ZH[3][1] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][3] * ZH[3][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[1][3] *
                 ZH[3][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[1][3] *
                 ZH[3][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][5] * ZH[3][1] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][5] * ZH[3][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][5] * ZH[3][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][5] *
                 ZH[3][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][1] *
                 ZH[3][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][1] * ZH[3][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][1] *
                 ZH[3][2] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][1] *
                 ZH[3][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][2] * ZH[3][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][2] *
                 ZH[3][2] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][3] * ZH[3][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][4] * ZH[3][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][4] * ZH[3][2] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][4] * ZH[3][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][4] *
                 ZH[3][2] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][5] * ZH[3][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][5] * ZH[3][2] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[1][0] *
                 ZH[3][3] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[1][0] *
                 ZH[3][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][1] * ZH[3][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[1][1] *
                 ZH[3][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[1][1] *
                 ZH[3][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][2] * ZH[3][3] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][2] * ZH[3][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][2] * ZH[3][4] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][2] * ZH[3][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][2] *
                 ZH[3][4] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][5] *
                 ZH[3][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][5] * ZH[3][4] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][5] *
                 ZH[3][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][5] *
                 ZH[3][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][1] * ZH[3][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][1] * ZH[3][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][1] * ZH[3][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][1] *
                 ZH[3][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][2] * ZH[3][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][2] * ZH[3][5] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][4] *
                 ZH[3][5] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][4] * ZH[3][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][4] *
                 ZH[3][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][4] *
                 ZH[3][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][5] * ZH[3][5] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][5] *
                 ZH[3][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][2] *
                 ZH[3][0] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][2] * ZH[3][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][2] *
                 ZH[3][0] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][2] *
                 ZH[3][0] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][4] * ZH[3][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[1][4] *
                 ZH[3][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[1][4] *
                 ZH[3][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][5] * ZH[3][0] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][5] * ZH[3][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][5] * ZH[3][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][5] *
                 ZH[3][0] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[1][4] *
                 ZH[3][1] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[1][4] *
                 ZH[3][1] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][0] *
                 ZH[3][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][0] * ZH[3][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][0] *
                 ZH[3][2] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][0] *
                 ZH[3][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][2] * ZH[3][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][2] *
                 ZH[3][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][3] * ZH[3][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][3] * ZH[3][2] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][3] * ZH[3][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][3] *
                 ZH[3][2] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][4] * ZH[3][2] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][5] * ZH[3][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][5] * ZH[3][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][2] * ZH[3][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][2] * ZH[3][3] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][2] * ZH[3][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][2] *
                 ZH[3][3] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][5] *
                 ZH[3][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][5] * ZH[3][3] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][5] *
                 ZH[3][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][5] *
                 ZH[3][3] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][0] * ZH[3][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[1][0] *
                 ZH[3][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[1][0] *
                 ZH[3][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[1][1] *
                 ZH[3][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[1][1] *
                 ZH[3][4] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][2] * ZH[3][4] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][0] * ZH[3][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][0] * ZH[3][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][0] * ZH[3][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][0] *
                 ZH[3][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][2] * ZH[3][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][2] * ZH[3][5] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][3] *
                 ZH[3][5] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][3] * ZH[3][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][3] *
                 ZH[3][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][3] *
                 ZH[3][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][5] * ZH[3][5] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][5] *
                 ZH[3][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][1] *
                 ZH[3][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][1] * ZH[3][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][1] *
                 ZH[3][0] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][1] *
                 ZH[3][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][2] * ZH[3][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][2] *
                 ZH[3][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][4] * ZH[3][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][4] * ZH[3][0] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][4] * ZH[3][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][4] *
                 ZH[3][0] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][5] * ZH[3][0] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][5] * ZH[3][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][5] * ZH[3][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][0] *
                 ZH[3][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][0] * ZH[3][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][0] *
                 ZH[3][1] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][0] *
                 ZH[3][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][2] * ZH[3][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][2] *
                 ZH[3][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][3] * ZH[3][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][3] * ZH[3][1] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][3] * ZH[3][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][3] *
                 ZH[3][1] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][5] * ZH[3][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][5] * ZH[3][1] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][5] * ZH[3][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][0] * ZH[3][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][0] *
                 ZH[3][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][1] * ZH[3][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][1] *
                 ZH[3][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[1][2] *
                 ZH[3][2] * ZH[i][5] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[1][2] *
                 ZH[3][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][3] * ZH[3][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][3] * ZH[3][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][4] * ZH[3][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][4] * ZH[3][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[1][5] *
                 ZH[3][2] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[1][5] * ZH[3][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[1][5] *
                 ZH[3][2] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][1] * ZH[3][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][1] * ZH[3][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][1] * ZH[3][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][1] *
                 ZH[3][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][2] * ZH[3][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][2] * ZH[3][3] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][4] *
                 ZH[3][3] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][4] * ZH[3][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][4] *
                 ZH[3][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][4] *
                 ZH[3][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][5] * ZH[3][3] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][5] *
                 ZH[3][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][0] * ZH[3][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][0] * ZH[3][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][0] * ZH[3][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][0] *
                 ZH[3][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][2] * ZH[3][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][2] * ZH[3][4] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][3] *
                 ZH[3][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][3] * ZH[3][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][3] *
                 ZH[3][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][3] *
                 ZH[3][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][5] * ZH[3][4] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][5] *
                 ZH[3][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][0] * ZH[3][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][0] * ZH[3][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][0] * ZH[3][5] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][1] * ZH[3][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][1] * ZH[3][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][1] * ZH[3][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[1][2] *
                 ZH[3][5] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[1][2] * ZH[3][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[1][2] *
                 ZH[3][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][3] * ZH[3][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][3] *
                 ZH[3][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][4] * ZH[3][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][4] *
                 ZH[3][5] * ZH[i][5] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[1][5] *
                 ZH[3][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[1][5] *
                 ZH[3][5] * ZH[i][5]) /
            (4. * std::exp((eta + 3 * etaS) * I));
    }
    coup13 =
        ((CTW * g2 + g1 * STW) * (ZH[1][3] * ZH[3][0] - ZH[1][4] * ZH[3][1] -
                                  ZH[1][0] * ZH[3][3] + ZH[1][1] * ZH[3][4])) /
        2.;
    for (size_t i = 0; i < 5; i++) {
        coup14[i] =
            (-(std::exp(eta * I) * g2 * I * std::conj(ZN[0][1]) *
               std::conj(ZN[i][2]) * ZH[3][0]) +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][3]) * ZH[3][0] +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[i][4]) * ZH[3][0] -
             g1 * I * std::conj(ZN[0][3]) * std::conj(ZN[i][0]) * ZH[3][1] +
             g2 * I * std::conj(ZN[0][3]) * std::conj(ZN[i][1]) * ZH[3][1] +
             sqrt(2) * std::exp(2 * eta * I) * I * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][2]) * ZH[3][1] +
             g2 * I * std::conj(ZN[0][1]) * std::conj(ZN[i][3]) * ZH[3][1] +
             sqrt(2) * std::exp((eta + etaS) * I) * I * lam *
                 std::conj(ZN[0][3]) * std::conj(ZN[i][2]) * ZH[3][2] -
             2 * sqrt(2) * std::exp((eta + etaS) * I) * I * kap *
                 std::conj(ZN[0][4]) * std::conj(ZN[i][4]) * ZH[3][2] -
             std::exp(eta * I) * g2 * std::conj(ZN[0][1]) *
                 std::conj(ZN[i][2]) * ZH[3][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][3]) * ZH[3][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[i][4]) * ZH[3][3] +
             g1 * std::conj(ZN[0][0]) *
                 (std::exp(eta * I) * std::conj(ZN[i][2]) *
                      (I * ZH[3][0] + ZH[3][3]) +
                  std::conj(ZN[i][3]) * (-(I * ZH[3][1]) - ZH[3][4])) -
             g1 * std::conj(ZN[0][3]) * std::conj(ZN[i][0]) * ZH[3][4] +
             g2 * std::conj(ZN[0][3]) * std::conj(ZN[i][1]) * ZH[3][4] -
             sqrt(2) * std::exp(2 * eta * I) * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][2]) * ZH[3][4] +
             g2 * std::conj(ZN[0][1]) * std::conj(ZN[i][3]) * ZH[3][4] -
             sqrt(2) * std::exp((eta + etaS) * I) * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[i][2]) * ZH[3][5] +
             2 * sqrt(2) * std::exp((eta + etaS) * I) * kap *
                 std::conj(ZN[0][4]) * std::conj(ZN[i][4]) * ZH[3][5] +
             std::exp(eta * I) * std::conj(ZN[0][2]) *
                 (g2 * std::conj(ZN[i][1]) * (-(I * ZH[3][0]) - ZH[3][3]) +
                  g1 * std::conj(ZN[i][0]) * (I * ZH[3][0] + ZH[3][3]) +
                  sqrt(2) * I * lam *
                      (std::exp(eta * I) * std::conj(ZN[i][4]) *
                           (ZH[3][1] + I * ZH[3][4]) +
                       std::exp(etaS * I) * std::conj(ZN[i][3]) *
                           (ZH[3][2] + I * ZH[3][5])))) /
            (2. * std::exp(eta * I));
    }
    for (size_t i = 0; i < 5; i++) {
        coup15[i] =
            (g1 *
                 (I * ZH[3][0] * ZN[0][2] - ZH[3][3] * ZN[0][2] +
                  std::exp(eta * I) * (-(I * ZH[3][1]) + ZH[3][4]) * ZN[0][3]) *
                 ZN[i][0] +
             g2 *
                 (-(I * ZH[3][0] * ZN[0][2]) + ZH[3][3] * ZN[0][2] +
                  std::exp(eta * I) * I * (ZH[3][1] + I * ZH[3][4]) *
                      ZN[0][3]) *
                 ZN[i][1] +
             g1 * I * ZH[3][0] * ZN[0][0] * ZN[i][2] -
             g1 * ZH[3][3] * ZN[0][0] * ZN[i][2] -
             g2 * I * ZH[3][0] * ZN[0][1] * ZN[i][2] +
             g2 * ZH[3][3] * ZN[0][1] * ZN[i][2] +
             (sqrt(2) * I * std::conj(lam) * ZH[3][2] * ZN[0][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[3][5] * ZN[0][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * I * std::conj(lam) * ZH[3][1] * ZN[0][4] * ZN[i][2]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[3][4] * ZN[0][4] * ZN[i][2]) /
                 std::exp(eta * I) -
             std::exp(eta * I) * g1 * I * ZH[3][1] * ZN[0][0] * ZN[i][3] +
             std::exp(eta * I) * g1 * ZH[3][4] * ZN[0][0] * ZN[i][3] +
             std::exp(eta * I) * g2 * I * ZH[3][1] * ZN[0][1] * ZN[i][3] -
             std::exp(eta * I) * g2 * ZH[3][4] * ZN[0][1] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[3][2] * ZN[0][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[3][5] * ZN[0][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             sqrt(2) * I * std::conj(lam) * ZH[3][0] * ZN[0][4] * ZN[i][3] +
             sqrt(2) * std::conj(lam) * ZH[3][3] * ZN[0][4] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[3][1] * ZN[0][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[3][4] * ZN[0][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             sqrt(2) * I * std::conj(lam) * ZH[3][0] * ZN[0][3] * ZN[i][4] +
             sqrt(2) * std::conj(lam) * ZH[3][3] * ZN[0][3] * ZN[i][4] -
             (2 * sqrt(2) * I * std::conj(kap) * ZH[3][2] * ZN[0][4] *
              ZN[i][4]) /
                 std::exp(etaS * I) -
             (2 * sqrt(2) * std::conj(kap) * ZH[3][5] * ZN[0][4] * ZN[i][4]) /
                 std::exp(etaS * I)) /
            2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup16[i] =
            (std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vu * (I * ZH[1][2] + ZH[1][5]) *
                           (ZH[4][2] - I * ZH[4][5]) +
                       vS * (I * ZH[1][2] * (ZH[4][1] + I * ZH[4][4]) +
                             ZH[1][5] * (ZH[4][1] + I * ZH[4][4]) +
                             (ZH[1][1] + I * ZH[1][4]) *
                                 (I * ZH[4][2] + ZH[4][5]))) +
                  2 * std::conj(lam) *
                      (-2 * std::exp((eta + 2 * etaS) * I) * I * lam *
                           (vu * ZH[1][1] * ZH[4][0] +
                            vS * ZH[1][2] * ZH[4][0] +
                            vu * ZH[1][0] * ZH[4][1] +
                            vd * ZH[1][1] * ZH[4][1] +
                            vS * ZH[1][0] * ZH[4][2] +
                            vd * ZH[1][2] * ZH[4][2] +
                            vd * ZH[1][4] * ZH[4][4] +
                            vd * ZH[1][5] * ZH[4][5]) +
                       std::exp(4 * etaS * I) * I * kap *
                           (vu * (ZH[1][2] + I * ZH[1][5]) *
                                (ZH[4][2] + I * ZH[4][5]) +
                            vS * (ZH[1][5] * (I * ZH[4][1] + ZH[4][4]) +
                                  ZH[1][2] * (ZH[4][1] - I * ZH[4][4]) +
                                  (ZH[1][1] - I * ZH[1][4]) *
                                      (ZH[4][2] + I * ZH[4][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[1][2] * (I * ZH[4][1] + ZH[4][4]) +
                            ZH[1][5] * (ZH[4][1] - I * ZH[4][4]) +
                            (I * ZH[1][1] + ZH[1][4]) *
                                (ZH[4][2] - I * ZH[4][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vu * (ZH[1][1] * ZH[4][0] +
                                               ZH[1][0] * ZH[4][1]) +
                                         vd * (-3 * ZH[1][0] * ZH[4][0] +
                                               ZH[1][1] * ZH[4][1] -
                                               ZH[1][3] * ZH[4][3] +
                                               ZH[1][4] * ZH[4][4])) +
                            (g2 * g2) * (vu * (ZH[1][1] * ZH[4][0] +
                                               ZH[1][0] * ZH[4][1]) +
                                         vd * (-3 * ZH[1][0] * ZH[4][0] +
                                               ZH[1][1] * ZH[4][1] -
                                               ZH[1][3] * ZH[4][3] +
                                               ZH[1][4] * ZH[4][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[1][2] * (ZH[4][1] + I * ZH[4][4]) +
                                 I * ZH[1][5] * (ZH[4][1] + I * ZH[4][4]) +
                                 (ZH[1][1] + I * ZH[1][4]) *
                                     (ZH[4][2] + I * ZH[4][5]))))) *
                 ZH[i][0] +
             std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vd * (I * ZH[1][2] + ZH[1][5]) *
                           (ZH[4][2] - I * ZH[4][5]) +
                       vS * (I * ZH[1][2] * (ZH[4][0] + I * ZH[4][3]) +
                             ZH[1][5] * (ZH[4][0] + I * ZH[4][3]) +
                             (ZH[1][0] + I * ZH[1][3]) *
                                 (I * ZH[4][2] + ZH[4][5]))) +
                  2 * std::exp(2 * etaS * I) * I * std::conj(lam) *
                      (-2 * std::exp(eta * I) * lam *
                           (vd * ZH[1][1] * ZH[4][0] +
                            vd * ZH[1][0] * ZH[4][1] +
                            vS * ZH[1][2] * ZH[4][1] +
                            vS * ZH[1][1] * ZH[4][2] +
                            vu * (ZH[1][0] * ZH[4][0] + ZH[1][2] * ZH[4][2] +
                                  ZH[1][3] * ZH[4][3] + ZH[1][5] * ZH[4][5])) +
                       std::exp(2 * etaS * I) * kap *
                           (vd * (ZH[1][2] + I * ZH[1][5]) *
                                (ZH[4][2] + I * ZH[4][5]) +
                            vS * (ZH[1][5] * (I * ZH[4][0] + ZH[4][3]) +
                                  ZH[1][2] * (ZH[4][0] - I * ZH[4][3]) +
                                  (ZH[1][0] - I * ZH[1][3]) *
                                      (ZH[4][2] + I * ZH[4][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[1][2] * (I * ZH[4][0] + ZH[4][3]) +
                            ZH[1][5] * (ZH[4][0] - I * ZH[4][3]) +
                            (I * ZH[1][0] + ZH[1][3]) *
                                (ZH[4][2] - I * ZH[4][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vd * (ZH[1][1] * ZH[4][0] +
                                               ZH[1][0] * ZH[4][1]) +
                                         vu * (ZH[1][0] * ZH[4][0] -
                                               3 * ZH[1][1] * ZH[4][1] +
                                               ZH[1][3] * ZH[4][3] -
                                               ZH[1][4] * ZH[4][4])) +
                            (g2 * g2) * (vd * (ZH[1][1] * ZH[4][0] +
                                               ZH[1][0] * ZH[4][1]) +
                                         vu * (ZH[1][0] * ZH[4][0] -
                                               3 * ZH[1][1] * ZH[4][1] +
                                               ZH[1][3] * ZH[4][3] -
                                               ZH[1][4] * ZH[4][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[1][2] * (ZH[4][0] + I * ZH[4][3]) +
                                 I * ZH[1][5] * (ZH[4][0] + I * ZH[4][3]) +
                                 (ZH[1][0] + I * ZH[1][3]) *
                                     (ZH[4][2] + I * ZH[4][5]))))) *
                 ZH[i][1] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][0] * ZH[4][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][1] * ZH[4][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][1] * ZH[4][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][1] * ZH[4][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][1] *
                 ZH[4][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][2] * ZH[4][0] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][2] * ZH[4][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][2] * ZH[4][0] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][4] *
                 ZH[4][0] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][4] * ZH[4][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][4] *
                 ZH[4][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][4] *
                 ZH[4][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][5] * ZH[4][0] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][5] *
                 ZH[4][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][0] * ZH[4][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][0] * ZH[4][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][0] * ZH[4][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][0] *
                 ZH[4][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][1] * ZH[4][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][2] * ZH[4][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][2] * ZH[4][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][2] * ZH[4][1] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][3] *
                 ZH[4][1] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][3] * ZH[4][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][3] *
                 ZH[4][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][3] *
                 ZH[4][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][5] * ZH[4][1] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][5] *
                 ZH[4][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][0] * ZH[4][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][0] * ZH[4][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][0] * ZH[4][2] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][1] * ZH[4][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][1] * ZH[4][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][1] * ZH[4][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[1][2] *
                 ZH[4][2] * ZH[i][2] -
             24 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[1][2] * ZH[4][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[1][2] *
                 ZH[4][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][3] * ZH[4][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][3] *
                 ZH[4][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][4] * ZH[4][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][4] *
                 ZH[4][2] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[1][5] *
                 ZH[4][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[1][5] *
                 ZH[4][2] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][1] *
                 ZH[4][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][1] * ZH[4][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][1] *
                 ZH[4][3] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][1] *
                 ZH[4][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][2] * ZH[4][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][2] *
                 ZH[4][3] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][3] * ZH[4][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][4] * ZH[4][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][4] * ZH[4][3] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][4] * ZH[4][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][4] *
                 ZH[4][3] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][5] * ZH[4][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][5] * ZH[4][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][0] *
                 ZH[4][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][0] * ZH[4][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][0] *
                 ZH[4][4] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][0] *
                 ZH[4][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][2] * ZH[4][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][2] *
                 ZH[4][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][3] * ZH[4][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][3] * ZH[4][4] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][3] * ZH[4][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][3] *
                 ZH[4][4] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][4] * ZH[4][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][5] * ZH[4][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][5] * ZH[4][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][0] * ZH[4][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][0] *
                 ZH[4][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][1] * ZH[4][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][1] *
                 ZH[4][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[1][2] *
                 ZH[4][5] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[1][2] *
                 ZH[4][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][3] * ZH[4][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][3] * ZH[4][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][4] * ZH[4][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][4] * ZH[4][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[1][5] *
                 ZH[4][5] * ZH[i][2] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[1][5] * ZH[4][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[1][5] *
                 ZH[4][5] * ZH[i][2] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[1][3] *
                 ZH[4][0] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[1][3] *
                 ZH[4][0] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][2] *
                 ZH[4][1] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][2] * ZH[4][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][2] *
                 ZH[4][1] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][2] *
                 ZH[4][1] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][3] * ZH[4][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[1][3] *
                 ZH[4][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[1][3] *
                 ZH[4][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][5] * ZH[4][1] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][5] * ZH[4][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][5] * ZH[4][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][5] *
                 ZH[4][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][1] *
                 ZH[4][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][1] * ZH[4][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][1] *
                 ZH[4][2] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][1] *
                 ZH[4][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][2] * ZH[4][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][2] *
                 ZH[4][2] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][3] * ZH[4][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][4] * ZH[4][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][4] * ZH[4][2] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][4] * ZH[4][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][4] *
                 ZH[4][2] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][5] * ZH[4][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][5] * ZH[4][2] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[1][0] *
                 ZH[4][3] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[1][0] *
                 ZH[4][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][1] * ZH[4][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[1][1] *
                 ZH[4][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[1][1] *
                 ZH[4][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][2] * ZH[4][3] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][2] * ZH[4][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][2] * ZH[4][4] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][2] * ZH[4][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][2] *
                 ZH[4][4] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][5] *
                 ZH[4][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][5] * ZH[4][4] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][5] *
                 ZH[4][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][5] *
                 ZH[4][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][1] * ZH[4][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][1] * ZH[4][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][1] * ZH[4][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][1] *
                 ZH[4][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][2] * ZH[4][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][2] * ZH[4][5] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][4] *
                 ZH[4][5] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][4] * ZH[4][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][4] *
                 ZH[4][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][4] *
                 ZH[4][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][5] * ZH[4][5] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][5] *
                 ZH[4][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][2] *
                 ZH[4][0] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][2] * ZH[4][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][2] *
                 ZH[4][0] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][2] *
                 ZH[4][0] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][4] * ZH[4][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[1][4] *
                 ZH[4][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[1][4] *
                 ZH[4][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][5] * ZH[4][0] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][5] * ZH[4][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][5] * ZH[4][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][5] *
                 ZH[4][0] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[1][4] *
                 ZH[4][1] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[1][4] *
                 ZH[4][1] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][0] *
                 ZH[4][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][0] * ZH[4][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][0] *
                 ZH[4][2] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][0] *
                 ZH[4][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][2] * ZH[4][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][2] *
                 ZH[4][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][3] * ZH[4][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][3] * ZH[4][2] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][3] * ZH[4][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][3] *
                 ZH[4][2] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][4] * ZH[4][2] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][5] * ZH[4][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][5] * ZH[4][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][2] * ZH[4][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][2] * ZH[4][3] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][2] * ZH[4][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][2] *
                 ZH[4][3] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][5] *
                 ZH[4][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][5] * ZH[4][3] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][5] *
                 ZH[4][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][5] *
                 ZH[4][3] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][0] * ZH[4][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[1][0] *
                 ZH[4][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[1][0] *
                 ZH[4][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[1][1] *
                 ZH[4][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[1][1] *
                 ZH[4][4] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][2] * ZH[4][4] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][0] * ZH[4][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][0] * ZH[4][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][0] * ZH[4][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][0] *
                 ZH[4][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][2] * ZH[4][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][2] * ZH[4][5] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][3] *
                 ZH[4][5] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][3] * ZH[4][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][3] *
                 ZH[4][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][3] *
                 ZH[4][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][5] * ZH[4][5] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][5] *
                 ZH[4][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][1] *
                 ZH[4][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][1] * ZH[4][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][1] *
                 ZH[4][0] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][1] *
                 ZH[4][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][2] * ZH[4][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][2] *
                 ZH[4][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][4] * ZH[4][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][4] * ZH[4][0] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][4] * ZH[4][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][4] *
                 ZH[4][0] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][5] * ZH[4][0] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][5] * ZH[4][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][5] * ZH[4][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][0] *
                 ZH[4][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][0] * ZH[4][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][0] *
                 ZH[4][1] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][0] *
                 ZH[4][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][2] * ZH[4][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][2] *
                 ZH[4][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][3] * ZH[4][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][3] * ZH[4][1] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][3] * ZH[4][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][3] *
                 ZH[4][1] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][5] * ZH[4][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][5] * ZH[4][1] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][5] * ZH[4][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][0] * ZH[4][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][0] *
                 ZH[4][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][1] * ZH[4][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][1] *
                 ZH[4][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[1][2] *
                 ZH[4][2] * ZH[i][5] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[1][2] *
                 ZH[4][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][3] * ZH[4][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][3] * ZH[4][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][4] * ZH[4][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][4] * ZH[4][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[1][5] *
                 ZH[4][2] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[1][5] * ZH[4][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[1][5] *
                 ZH[4][2] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][1] * ZH[4][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][1] * ZH[4][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][1] * ZH[4][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][1] *
                 ZH[4][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][2] * ZH[4][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][2] * ZH[4][3] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][4] *
                 ZH[4][3] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][4] * ZH[4][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][4] *
                 ZH[4][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][4] *
                 ZH[4][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][5] * ZH[4][3] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][5] *
                 ZH[4][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][0] * ZH[4][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][0] * ZH[4][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][0] * ZH[4][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][0] *
                 ZH[4][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][2] * ZH[4][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][2] * ZH[4][4] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][3] *
                 ZH[4][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][3] * ZH[4][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][3] *
                 ZH[4][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][3] *
                 ZH[4][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][5] * ZH[4][4] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][5] *
                 ZH[4][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][0] * ZH[4][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][0] * ZH[4][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][0] * ZH[4][5] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][1] * ZH[4][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][1] * ZH[4][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][1] * ZH[4][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[1][2] *
                 ZH[4][5] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[1][2] * ZH[4][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[1][2] *
                 ZH[4][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][3] * ZH[4][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][3] *
                 ZH[4][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][4] * ZH[4][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][4] *
                 ZH[4][5] * ZH[i][5] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[1][5] *
                 ZH[4][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[1][5] *
                 ZH[4][5] * ZH[i][5]) /
            (4. * std::exp((eta + 3 * etaS) * I));
    }
    coup17 =
        ((CTW * g2 + g1 * STW) * (ZH[1][3] * ZH[4][0] - ZH[1][4] * ZH[4][1] -
                                  ZH[1][0] * ZH[4][3] + ZH[1][1] * ZH[4][4])) /
        2.;
    for (size_t i = 0; i < 5; i++) {
        coup18[i] =
            (-(std::exp(eta * I) * g2 * I * std::conj(ZN[0][1]) *
               std::conj(ZN[i][2]) * ZH[4][0]) +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][3]) * ZH[4][0] +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[i][4]) * ZH[4][0] -
             g1 * I * std::conj(ZN[0][3]) * std::conj(ZN[i][0]) * ZH[4][1] +
             g2 * I * std::conj(ZN[0][3]) * std::conj(ZN[i][1]) * ZH[4][1] +
             sqrt(2) * std::exp(2 * eta * I) * I * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][2]) * ZH[4][1] +
             g2 * I * std::conj(ZN[0][1]) * std::conj(ZN[i][3]) * ZH[4][1] +
             sqrt(2) * std::exp((eta + etaS) * I) * I * lam *
                 std::conj(ZN[0][3]) * std::conj(ZN[i][2]) * ZH[4][2] -
             2 * sqrt(2) * std::exp((eta + etaS) * I) * I * kap *
                 std::conj(ZN[0][4]) * std::conj(ZN[i][4]) * ZH[4][2] -
             std::exp(eta * I) * g2 * std::conj(ZN[0][1]) *
                 std::conj(ZN[i][2]) * ZH[4][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][3]) * ZH[4][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[i][4]) * ZH[4][3] +
             g1 * std::conj(ZN[0][0]) *
                 (std::exp(eta * I) * std::conj(ZN[i][2]) *
                      (I * ZH[4][0] + ZH[4][3]) +
                  std::conj(ZN[i][3]) * (-(I * ZH[4][1]) - ZH[4][4])) -
             g1 * std::conj(ZN[0][3]) * std::conj(ZN[i][0]) * ZH[4][4] +
             g2 * std::conj(ZN[0][3]) * std::conj(ZN[i][1]) * ZH[4][4] -
             sqrt(2) * std::exp(2 * eta * I) * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][2]) * ZH[4][4] +
             g2 * std::conj(ZN[0][1]) * std::conj(ZN[i][3]) * ZH[4][4] -
             sqrt(2) * std::exp((eta + etaS) * I) * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[i][2]) * ZH[4][5] +
             2 * sqrt(2) * std::exp((eta + etaS) * I) * kap *
                 std::conj(ZN[0][4]) * std::conj(ZN[i][4]) * ZH[4][5] +
             std::exp(eta * I) * std::conj(ZN[0][2]) *
                 (g2 * std::conj(ZN[i][1]) * (-(I * ZH[4][0]) - ZH[4][3]) +
                  g1 * std::conj(ZN[i][0]) * (I * ZH[4][0] + ZH[4][3]) +
                  sqrt(2) * I * lam *
                      (std::exp(eta * I) * std::conj(ZN[i][4]) *
                           (ZH[4][1] + I * ZH[4][4]) +
                       std::exp(etaS * I) * std::conj(ZN[i][3]) *
                           (ZH[4][2] + I * ZH[4][5])))) /
            (2. * std::exp(eta * I));
    }
    for (size_t i = 0; i < 5; i++) {
        coup19[i] =
            (g1 *
                 (I * ZH[4][0] * ZN[0][2] - ZH[4][3] * ZN[0][2] +
                  std::exp(eta * I) * (-(I * ZH[4][1]) + ZH[4][4]) * ZN[0][3]) *
                 ZN[i][0] +
             g2 *
                 (-(I * ZH[4][0] * ZN[0][2]) + ZH[4][3] * ZN[0][2] +
                  std::exp(eta * I) * I * (ZH[4][1] + I * ZH[4][4]) *
                      ZN[0][3]) *
                 ZN[i][1] +
             g1 * I * ZH[4][0] * ZN[0][0] * ZN[i][2] -
             g1 * ZH[4][3] * ZN[0][0] * ZN[i][2] -
             g2 * I * ZH[4][0] * ZN[0][1] * ZN[i][2] +
             g2 * ZH[4][3] * ZN[0][1] * ZN[i][2] +
             (sqrt(2) * I * std::conj(lam) * ZH[4][2] * ZN[0][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[4][5] * ZN[0][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * I * std::conj(lam) * ZH[4][1] * ZN[0][4] * ZN[i][2]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[4][4] * ZN[0][4] * ZN[i][2]) /
                 std::exp(eta * I) -
             std::exp(eta * I) * g1 * I * ZH[4][1] * ZN[0][0] * ZN[i][3] +
             std::exp(eta * I) * g1 * ZH[4][4] * ZN[0][0] * ZN[i][3] +
             std::exp(eta * I) * g2 * I * ZH[4][1] * ZN[0][1] * ZN[i][3] -
             std::exp(eta * I) * g2 * ZH[4][4] * ZN[0][1] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[4][2] * ZN[0][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[4][5] * ZN[0][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             sqrt(2) * I * std::conj(lam) * ZH[4][0] * ZN[0][4] * ZN[i][3] +
             sqrt(2) * std::conj(lam) * ZH[4][3] * ZN[0][4] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[4][1] * ZN[0][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[4][4] * ZN[0][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             sqrt(2) * I * std::conj(lam) * ZH[4][0] * ZN[0][3] * ZN[i][4] +
             sqrt(2) * std::conj(lam) * ZH[4][3] * ZN[0][3] * ZN[i][4] -
             (2 * sqrt(2) * I * std::conj(kap) * ZH[4][2] * ZN[0][4] *
              ZN[i][4]) /
                 std::exp(etaS * I) -
             (2 * sqrt(2) * std::conj(kap) * ZH[4][5] * ZN[0][4] * ZN[i][4]) /
                 std::exp(etaS * I)) /
            2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup20[i] =
            (std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vu * (I * ZH[1][2] + ZH[1][5]) *
                           (ZH[5][2] - I * ZH[5][5]) +
                       vS * (I * ZH[1][2] * (ZH[5][1] + I * ZH[5][4]) +
                             ZH[1][5] * (ZH[5][1] + I * ZH[5][4]) +
                             (ZH[1][1] + I * ZH[1][4]) *
                                 (I * ZH[5][2] + ZH[5][5]))) +
                  2 * std::conj(lam) *
                      (-2 * std::exp((eta + 2 * etaS) * I) * I * lam *
                           (vu * ZH[1][1] * ZH[5][0] +
                            vS * ZH[1][2] * ZH[5][0] +
                            vu * ZH[1][0] * ZH[5][1] +
                            vd * ZH[1][1] * ZH[5][1] +
                            vS * ZH[1][0] * ZH[5][2] +
                            vd * ZH[1][2] * ZH[5][2] +
                            vd * ZH[1][4] * ZH[5][4] +
                            vd * ZH[1][5] * ZH[5][5]) +
                       std::exp(4 * etaS * I) * I * kap *
                           (vu * (ZH[1][2] + I * ZH[1][5]) *
                                (ZH[5][2] + I * ZH[5][5]) +
                            vS * (ZH[1][5] * (I * ZH[5][1] + ZH[5][4]) +
                                  ZH[1][2] * (ZH[5][1] - I * ZH[5][4]) +
                                  (ZH[1][1] - I * ZH[1][4]) *
                                      (ZH[5][2] + I * ZH[5][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[1][2] * (I * ZH[5][1] + ZH[5][4]) +
                            ZH[1][5] * (ZH[5][1] - I * ZH[5][4]) +
                            (I * ZH[1][1] + ZH[1][4]) *
                                (ZH[5][2] - I * ZH[5][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vu * (ZH[1][1] * ZH[5][0] +
                                               ZH[1][0] * ZH[5][1]) +
                                         vd * (-3 * ZH[1][0] * ZH[5][0] +
                                               ZH[1][1] * ZH[5][1] -
                                               ZH[1][3] * ZH[5][3] +
                                               ZH[1][4] * ZH[5][4])) +
                            (g2 * g2) * (vu * (ZH[1][1] * ZH[5][0] +
                                               ZH[1][0] * ZH[5][1]) +
                                         vd * (-3 * ZH[1][0] * ZH[5][0] +
                                               ZH[1][1] * ZH[5][1] -
                                               ZH[1][3] * ZH[5][3] +
                                               ZH[1][4] * ZH[5][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[1][2] * (ZH[5][1] + I * ZH[5][4]) +
                                 I * ZH[1][5] * (ZH[5][1] + I * ZH[5][4]) +
                                 (ZH[1][1] + I * ZH[1][4]) *
                                     (ZH[5][2] + I * ZH[5][5]))))) *
                 ZH[i][0] +
             std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vd * (I * ZH[1][2] + ZH[1][5]) *
                           (ZH[5][2] - I * ZH[5][5]) +
                       vS * (I * ZH[1][2] * (ZH[5][0] + I * ZH[5][3]) +
                             ZH[1][5] * (ZH[5][0] + I * ZH[5][3]) +
                             (ZH[1][0] + I * ZH[1][3]) *
                                 (I * ZH[5][2] + ZH[5][5]))) +
                  2 * std::exp(2 * etaS * I) * I * std::conj(lam) *
                      (-2 * std::exp(eta * I) * lam *
                           (vd * ZH[1][1] * ZH[5][0] +
                            vd * ZH[1][0] * ZH[5][1] +
                            vS * ZH[1][2] * ZH[5][1] +
                            vS * ZH[1][1] * ZH[5][2] +
                            vu * (ZH[1][0] * ZH[5][0] + ZH[1][2] * ZH[5][2] +
                                  ZH[1][3] * ZH[5][3] + ZH[1][5] * ZH[5][5])) +
                       std::exp(2 * etaS * I) * kap *
                           (vd * (ZH[1][2] + I * ZH[1][5]) *
                                (ZH[5][2] + I * ZH[5][5]) +
                            vS * (ZH[1][5] * (I * ZH[5][0] + ZH[5][3]) +
                                  ZH[1][2] * (ZH[5][0] - I * ZH[5][3]) +
                                  (ZH[1][0] - I * ZH[1][3]) *
                                      (ZH[5][2] + I * ZH[5][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[1][2] * (I * ZH[5][0] + ZH[5][3]) +
                            ZH[1][5] * (ZH[5][0] - I * ZH[5][3]) +
                            (I * ZH[1][0] + ZH[1][3]) *
                                (ZH[5][2] - I * ZH[5][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vd * (ZH[1][1] * ZH[5][0] +
                                               ZH[1][0] * ZH[5][1]) +
                                         vu * (ZH[1][0] * ZH[5][0] -
                                               3 * ZH[1][1] * ZH[5][1] +
                                               ZH[1][3] * ZH[5][3] -
                                               ZH[1][4] * ZH[5][4])) +
                            (g2 * g2) * (vd * (ZH[1][1] * ZH[5][0] +
                                               ZH[1][0] * ZH[5][1]) +
                                         vu * (ZH[1][0] * ZH[5][0] -
                                               3 * ZH[1][1] * ZH[5][1] +
                                               ZH[1][3] * ZH[5][3] -
                                               ZH[1][4] * ZH[5][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[1][2] * (ZH[5][0] + I * ZH[5][3]) +
                                 I * ZH[1][5] * (ZH[5][0] + I * ZH[5][3]) +
                                 (ZH[1][0] + I * ZH[1][3]) *
                                     (ZH[5][2] + I * ZH[5][5]))))) *
                 ZH[i][1] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][0] * ZH[5][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][1] * ZH[5][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][1] * ZH[5][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][1] * ZH[5][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][1] *
                 ZH[5][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][2] * ZH[5][0] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][2] * ZH[5][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][2] * ZH[5][0] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][4] *
                 ZH[5][0] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][4] * ZH[5][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][4] *
                 ZH[5][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][4] *
                 ZH[5][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][5] * ZH[5][0] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][5] *
                 ZH[5][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][0] * ZH[5][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][0] * ZH[5][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][0] * ZH[5][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][0] *
                 ZH[5][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][1] * ZH[5][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][2] * ZH[5][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][2] * ZH[5][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][2] * ZH[5][1] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][3] *
                 ZH[5][1] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][3] * ZH[5][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][3] *
                 ZH[5][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][3] *
                 ZH[5][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][5] * ZH[5][1] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][5] *
                 ZH[5][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][0] * ZH[5][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][0] * ZH[5][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][0] * ZH[5][2] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][1] * ZH[5][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][1] * ZH[5][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][1] * ZH[5][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[1][2] *
                 ZH[5][2] * ZH[i][2] -
             24 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[1][2] * ZH[5][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[1][2] *
                 ZH[5][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][3] * ZH[5][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][3] *
                 ZH[5][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][4] * ZH[5][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][4] *
                 ZH[5][2] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[1][5] *
                 ZH[5][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[1][5] *
                 ZH[5][2] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][1] *
                 ZH[5][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][1] * ZH[5][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][1] *
                 ZH[5][3] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][1] *
                 ZH[5][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][2] * ZH[5][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][2] *
                 ZH[5][3] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][3] * ZH[5][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][4] * ZH[5][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][4] * ZH[5][3] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][4] * ZH[5][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][4] *
                 ZH[5][3] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][5] * ZH[5][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][5] * ZH[5][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][0] *
                 ZH[5][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][0] * ZH[5][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][0] *
                 ZH[5][4] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][0] *
                 ZH[5][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][2] * ZH[5][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][2] *
                 ZH[5][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][3] * ZH[5][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][3] * ZH[5][4] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][3] * ZH[5][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][3] *
                 ZH[5][4] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][4] * ZH[5][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][5] * ZH[5][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][5] * ZH[5][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][0] * ZH[5][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][0] *
                 ZH[5][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][1] * ZH[5][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][1] *
                 ZH[5][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[1][2] *
                 ZH[5][5] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[1][2] *
                 ZH[5][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][3] * ZH[5][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][3] * ZH[5][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][4] * ZH[5][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][4] * ZH[5][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[1][5] *
                 ZH[5][5] * ZH[i][2] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[1][5] * ZH[5][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[1][5] *
                 ZH[5][5] * ZH[i][2] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[1][3] *
                 ZH[5][0] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[1][3] *
                 ZH[5][0] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][2] *
                 ZH[5][1] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][2] * ZH[5][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][2] *
                 ZH[5][1] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][2] *
                 ZH[5][1] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][3] * ZH[5][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[1][3] *
                 ZH[5][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[1][3] *
                 ZH[5][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][5] * ZH[5][1] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][5] * ZH[5][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][5] * ZH[5][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][5] *
                 ZH[5][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][1] *
                 ZH[5][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][1] * ZH[5][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][1] *
                 ZH[5][2] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][1] *
                 ZH[5][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][2] * ZH[5][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][2] *
                 ZH[5][2] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][3] * ZH[5][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][4] * ZH[5][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][4] * ZH[5][2] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][4] * ZH[5][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][4] *
                 ZH[5][2] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][5] * ZH[5][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][5] * ZH[5][2] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[1][0] *
                 ZH[5][3] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[1][0] *
                 ZH[5][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][1] * ZH[5][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[1][1] *
                 ZH[5][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[1][1] *
                 ZH[5][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][2] * ZH[5][3] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][2] * ZH[5][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][2] * ZH[5][4] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][2] * ZH[5][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][2] *
                 ZH[5][4] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][5] *
                 ZH[5][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][5] * ZH[5][4] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][5] *
                 ZH[5][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][5] *
                 ZH[5][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][1] * ZH[5][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][1] * ZH[5][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][1] * ZH[5][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][1] *
                 ZH[5][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][2] * ZH[5][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][2] * ZH[5][5] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][4] *
                 ZH[5][5] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][4] * ZH[5][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][4] *
                 ZH[5][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][4] *
                 ZH[5][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][5] * ZH[5][5] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][5] *
                 ZH[5][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][2] *
                 ZH[5][0] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][2] * ZH[5][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][2] *
                 ZH[5][0] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][2] *
                 ZH[5][0] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][4] * ZH[5][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[1][4] *
                 ZH[5][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[1][4] *
                 ZH[5][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][5] * ZH[5][0] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][5] * ZH[5][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][5] * ZH[5][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][5] *
                 ZH[5][0] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[1][4] *
                 ZH[5][1] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[1][4] *
                 ZH[5][1] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][0] *
                 ZH[5][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][0] * ZH[5][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][0] *
                 ZH[5][2] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][0] *
                 ZH[5][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][2] * ZH[5][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][2] *
                 ZH[5][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][3] * ZH[5][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][3] * ZH[5][2] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][3] * ZH[5][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][3] *
                 ZH[5][2] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][4] * ZH[5][2] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][5] * ZH[5][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][5] * ZH[5][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][2] * ZH[5][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][2] * ZH[5][3] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][2] * ZH[5][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][2] *
                 ZH[5][3] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][5] *
                 ZH[5][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][5] * ZH[5][3] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][5] *
                 ZH[5][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][5] *
                 ZH[5][3] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][0] * ZH[5][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[1][0] *
                 ZH[5][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[1][0] *
                 ZH[5][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[1][1] *
                 ZH[5][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[1][1] *
                 ZH[5][4] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[1][2] * ZH[5][4] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][0] * ZH[5][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][0] * ZH[5][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][0] * ZH[5][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][0] *
                 ZH[5][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][2] * ZH[5][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][2] * ZH[5][5] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][3] *
                 ZH[5][5] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][3] * ZH[5][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][3] *
                 ZH[5][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][3] *
                 ZH[5][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][5] * ZH[5][5] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][5] *
                 ZH[5][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][1] *
                 ZH[5][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][1] * ZH[5][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][1] *
                 ZH[5][0] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][1] *
                 ZH[5][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][2] * ZH[5][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][2] *
                 ZH[5][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][4] * ZH[5][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][4] * ZH[5][0] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][4] * ZH[5][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][4] *
                 ZH[5][0] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][5] * ZH[5][0] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][5] * ZH[5][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][5] * ZH[5][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][0] *
                 ZH[5][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][0] * ZH[5][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][0] *
                 ZH[5][1] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][0] *
                 ZH[5][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][2] * ZH[5][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][2] *
                 ZH[5][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][3] * ZH[5][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][3] * ZH[5][1] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][3] * ZH[5][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][3] *
                 ZH[5][1] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][5] * ZH[5][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][5] * ZH[5][1] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][5] * ZH[5][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][0] * ZH[5][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][0] *
                 ZH[5][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][1] * ZH[5][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][1] *
                 ZH[5][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[1][2] *
                 ZH[5][2] * ZH[i][5] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[1][2] *
                 ZH[5][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][3] * ZH[5][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][3] * ZH[5][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][4] * ZH[5][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][4] * ZH[5][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[1][5] *
                 ZH[5][2] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[1][5] * ZH[5][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[1][5] *
                 ZH[5][2] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][1] * ZH[5][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][1] * ZH[5][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][1] * ZH[5][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][1] *
                 ZH[5][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][2] * ZH[5][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][2] * ZH[5][3] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][4] *
                 ZH[5][3] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][4] * ZH[5][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][4] *
                 ZH[5][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][4] *
                 ZH[5][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][5] * ZH[5][3] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][5] *
                 ZH[5][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[1][0] * ZH[5][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[1][0] * ZH[5][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[1][0] * ZH[5][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[1][0] *
                 ZH[5][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][2] * ZH[5][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][2] * ZH[5][4] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[1][3] *
                 ZH[5][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[1][3] * ZH[5][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[1][3] *
                 ZH[5][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[1][3] *
                 ZH[5][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][5] * ZH[5][4] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][5] *
                 ZH[5][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[1][0] * ZH[5][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[1][0] * ZH[5][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[1][0] * ZH[5][5] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[1][1] * ZH[5][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[1][1] * ZH[5][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[1][1] * ZH[5][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[1][2] *
                 ZH[5][5] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[1][2] * ZH[5][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[1][2] *
                 ZH[5][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[1][3] * ZH[5][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[1][3] *
                 ZH[5][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[1][4] * ZH[5][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[1][4] *
                 ZH[5][5] * ZH[i][5] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[1][5] *
                 ZH[5][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[1][5] *
                 ZH[5][5] * ZH[i][5]) /
            (4. * std::exp((eta + 3 * etaS) * I));
    }
    coup21 =
        ((CTW * g2 + g1 * STW) * (ZH[1][3] * ZH[5][0] - ZH[1][4] * ZH[5][1] -
                                  ZH[1][0] * ZH[5][3] + ZH[1][1] * ZH[5][4])) /
        2.;
    for (size_t i = 0; i < 5; i++) {
        coup22[i] =
            (-(std::exp(eta * I) * g2 * I * std::conj(ZN[0][1]) *
               std::conj(ZN[i][2]) * ZH[5][0]) +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][3]) * ZH[5][0] +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[i][4]) * ZH[5][0] -
             g1 * I * std::conj(ZN[0][3]) * std::conj(ZN[i][0]) * ZH[5][1] +
             g2 * I * std::conj(ZN[0][3]) * std::conj(ZN[i][1]) * ZH[5][1] +
             sqrt(2) * std::exp(2 * eta * I) * I * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][2]) * ZH[5][1] +
             g2 * I * std::conj(ZN[0][1]) * std::conj(ZN[i][3]) * ZH[5][1] +
             sqrt(2) * std::exp((eta + etaS) * I) * I * lam *
                 std::conj(ZN[0][3]) * std::conj(ZN[i][2]) * ZH[5][2] -
             2 * sqrt(2) * std::exp((eta + etaS) * I) * I * kap *
                 std::conj(ZN[0][4]) * std::conj(ZN[i][4]) * ZH[5][2] -
             std::exp(eta * I) * g2 * std::conj(ZN[0][1]) *
                 std::conj(ZN[i][2]) * ZH[5][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][3]) * ZH[5][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[i][4]) * ZH[5][3] +
             g1 * std::conj(ZN[0][0]) *
                 (std::exp(eta * I) * std::conj(ZN[i][2]) *
                      (I * ZH[5][0] + ZH[5][3]) +
                  std::conj(ZN[i][3]) * (-(I * ZH[5][1]) - ZH[5][4])) -
             g1 * std::conj(ZN[0][3]) * std::conj(ZN[i][0]) * ZH[5][4] +
             g2 * std::conj(ZN[0][3]) * std::conj(ZN[i][1]) * ZH[5][4] -
             sqrt(2) * std::exp(2 * eta * I) * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][2]) * ZH[5][4] +
             g2 * std::conj(ZN[0][1]) * std::conj(ZN[i][3]) * ZH[5][4] -
             sqrt(2) * std::exp((eta + etaS) * I) * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[i][2]) * ZH[5][5] +
             2 * sqrt(2) * std::exp((eta + etaS) * I) * kap *
                 std::conj(ZN[0][4]) * std::conj(ZN[i][4]) * ZH[5][5] +
             std::exp(eta * I) * std::conj(ZN[0][2]) *
                 (g2 * std::conj(ZN[i][1]) * (-(I * ZH[5][0]) - ZH[5][3]) +
                  g1 * std::conj(ZN[i][0]) * (I * ZH[5][0] + ZH[5][3]) +
                  sqrt(2) * I * lam *
                      (std::exp(eta * I) * std::conj(ZN[i][4]) *
                           (ZH[5][1] + I * ZH[5][4]) +
                       std::exp(etaS * I) * std::conj(ZN[i][3]) *
                           (ZH[5][2] + I * ZH[5][5])))) /
            (2. * std::exp(eta * I));
    }
    for (size_t i = 0; i < 5; i++) {
        coup23[i] =
            (g1 *
                 (I * ZH[5][0] * ZN[0][2] - ZH[5][3] * ZN[0][2] +
                  std::exp(eta * I) * (-(I * ZH[5][1]) + ZH[5][4]) * ZN[0][3]) *
                 ZN[i][0] +
             g2 *
                 (-(I * ZH[5][0] * ZN[0][2]) + ZH[5][3] * ZN[0][2] +
                  std::exp(eta * I) * I * (ZH[5][1] + I * ZH[5][4]) *
                      ZN[0][3]) *
                 ZN[i][1] +
             g1 * I * ZH[5][0] * ZN[0][0] * ZN[i][2] -
             g1 * ZH[5][3] * ZN[0][0] * ZN[i][2] -
             g2 * I * ZH[5][0] * ZN[0][1] * ZN[i][2] +
             g2 * ZH[5][3] * ZN[0][1] * ZN[i][2] +
             (sqrt(2) * I * std::conj(lam) * ZH[5][2] * ZN[0][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[5][5] * ZN[0][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * I * std::conj(lam) * ZH[5][1] * ZN[0][4] * ZN[i][2]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[5][4] * ZN[0][4] * ZN[i][2]) /
                 std::exp(eta * I) -
             std::exp(eta * I) * g1 * I * ZH[5][1] * ZN[0][0] * ZN[i][3] +
             std::exp(eta * I) * g1 * ZH[5][4] * ZN[0][0] * ZN[i][3] +
             std::exp(eta * I) * g2 * I * ZH[5][1] * ZN[0][1] * ZN[i][3] -
             std::exp(eta * I) * g2 * ZH[5][4] * ZN[0][1] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[5][2] * ZN[0][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[5][5] * ZN[0][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             sqrt(2) * I * std::conj(lam) * ZH[5][0] * ZN[0][4] * ZN[i][3] +
             sqrt(2) * std::conj(lam) * ZH[5][3] * ZN[0][4] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[5][1] * ZN[0][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[5][4] * ZN[0][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             sqrt(2) * I * std::conj(lam) * ZH[5][0] * ZN[0][3] * ZN[i][4] +
             sqrt(2) * std::conj(lam) * ZH[5][3] * ZN[0][3] * ZN[i][4] -
             (2 * sqrt(2) * I * std::conj(kap) * ZH[5][2] * ZN[0][4] *
              ZN[i][4]) /
                 std::exp(etaS * I) -
             (2 * sqrt(2) * std::conj(kap) * ZH[5][5] * ZN[0][4] * ZN[i][4]) /
                 std::exp(etaS * I)) /
            2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup24[i] =
            (std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (I * ZH[2][2] + ZH[2][5]) *
                      (2 * vS * (ZH[2][1] + I * ZH[2][4]) +
                       vu * (ZH[2][2] - I * ZH[2][5])) +
                  2 * std::exp(2 * etaS * I) * std::conj(lam) *
                      (-2 * std::exp(eta * I) * I * lam *
                           (vd *
                                ((ZH[2][1] * ZH[2][1]) + (ZH[2][2] * ZH[2][2]) +
                                 (ZH[2][4] * ZH[2][4]) +
                                 (ZH[2][5] * ZH[2][5])) +
                            2 * vu * ZH[2][0] * ZH[2][1] +
                            2 * vS * ZH[2][0] * ZH[2][2]) +
                       std::exp(2 * etaS * I) * kap *
                           (ZH[2][2] + I * ZH[2][5]) *
                           (2 * I * vS * ZH[2][1] + I * vu * ZH[2][2] +
                            2 * vS * ZH[2][4] - vu * ZH[2][5])) +
                  std::exp(etaS * I) *
                      (2 * sqrt(2) * std::conj(Tlam) *
                           (I * ZH[2][1] + ZH[2][4]) *
                           (ZH[2][2] - I * ZH[2][5]) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vd * (-3 * (ZH[2][0] * ZH[2][0]) +
                                               (ZH[2][1] * ZH[2][1]) -
                                               (ZH[2][3] * ZH[2][3]) +
                                               (ZH[2][4] * ZH[2][4])) +
                                         2 * vu * ZH[2][0] * ZH[2][1]) +
                            (g2 * g2) * (vd * (-3 * (ZH[2][0] * ZH[2][0]) +
                                               (ZH[2][1] * ZH[2][1]) -
                                               (ZH[2][3] * ZH[2][3]) +
                                               (ZH[2][4] * ZH[2][4])) +
                                         2 * vu * ZH[2][0] * ZH[2][1]) +
                            2 * sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[2][1] + I * ZH[2][4]) *
                                (ZH[2][2] + I * ZH[2][5])))) *
                 ZH[i][0] +
             std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (I * ZH[2][2] + ZH[2][5]) *
                      (2 * vS * (ZH[2][0] + I * ZH[2][3]) +
                       vd * (ZH[2][2] - I * ZH[2][5])) +
                  2 * std::exp(2 * etaS * I) * std::conj(lam) *
                      (-2 * std::exp(eta * I) * I * lam *
                           (vu *
                                ((ZH[2][0] * ZH[2][0]) + (ZH[2][2] * ZH[2][2]) +
                                 (ZH[2][3] * ZH[2][3]) +
                                 (ZH[2][5] * ZH[2][5])) +
                            2 * ZH[2][1] * (vd * ZH[2][0] + vS * ZH[2][2])) +
                       std::exp(2 * etaS * I) * kap *
                           (ZH[2][2] + I * ZH[2][5]) *
                           (2 * I * vS * ZH[2][0] + I * vd * ZH[2][2] +
                            2 * vS * ZH[2][3] - vd * ZH[2][5])) +
                  std::exp(etaS * I) *
                      (2 * sqrt(2) * std::conj(Tlam) *
                           (I * ZH[2][0] + ZH[2][3]) *
                           (ZH[2][2] - I * ZH[2][5]) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vu * ((ZH[2][0] * ZH[2][0]) -
                                               3 * (ZH[2][1] * ZH[2][1]) +
                                               (ZH[2][3] * ZH[2][3]) -
                                               (ZH[2][4] * ZH[2][4])) +
                                         2 * vd * ZH[2][0] * ZH[2][1]) +
                            (g2 * g2) * (vu * ((ZH[2][0] * ZH[2][0]) -
                                               3 * (ZH[2][1] * ZH[2][1]) +
                                               (ZH[2][3] * ZH[2][3]) -
                                               (ZH[2][4] * ZH[2][4])) +
                                         2 * vd * ZH[2][0] * ZH[2][1]) +
                            2 * sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[2][0] + I * ZH[2][3]) *
                                (ZH[2][2] + I * ZH[2][5])))) *
                 ZH[i][1] +
             2 * ((sqrt(2) *
                       (std::exp(2 * etaS * I) * std::conj(Tlam) *
                            (ZH[2][0] - I * ZH[2][3]) *
                            (I * ZH[2][1] + ZH[2][4]) +
                        std::exp(eta * I) * I *
                            (-(std::conj(Tk) * ((ZH[2][2] - I * ZH[2][5]) *
                                                (ZH[2][2] - I * ZH[2][5]))) -
                             std::exp(6 * etaS * I) * Tk *
                                 ((ZH[2][2] + I * ZH[2][5]) *
                                  (ZH[2][2] + I * ZH[2][5])) +
                             std::exp((eta + 4 * etaS) * I) * Tlam *
                                 (ZH[2][0] + I * ZH[2][3]) *
                                 (ZH[2][1] + I * ZH[2][4]))) +
                   2 * std::exp((eta + etaS) * I) * I * std::conj(kap) *
                       (-2 * std::exp(2 * etaS * I) * kap * vS *
                            (3 * (ZH[2][2] * ZH[2][2]) +
                             (ZH[2][5] * ZH[2][5])) +
                        std::exp(eta * I) * lam *
                            (vS * (ZH[2][0] + I * ZH[2][3]) *
                                 (ZH[2][1] + I * ZH[2][4]) +
                             (vu * (ZH[2][0] + I * ZH[2][3]) +
                              vd * (ZH[2][1] + I * ZH[2][4])) *
                                 (ZH[2][2] - I * ZH[2][5])))) *
                      ZH[i][2] -
                  std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                      (ZH[2][2] * ZH[2][2]) * ZH[i][3] +
                  std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                      (ZH[2][5] * ZH[2][5]) * ZH[i][3] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[2][1] * ZH[2][2] * ZH[i][3] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[2][1] * ZH[2][2] * ZH[i][3] +
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[2][1] * ZH[2][2] * ZH[i][3] -
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) *
                      ZH[2][0] * ZH[2][3] * ZH[i][3] -
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) *
                      ZH[2][0] * ZH[2][3] * ZH[i][3] +
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) *
                      ZH[2][1] * ZH[2][3] * ZH[i][3] +
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) *
                      ZH[2][1] * ZH[2][3] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[2][2] * ZH[2][4] * ZH[i][3] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[2][2] * ZH[2][4] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[2][2] * ZH[2][4] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[2][1] * ZH[2][5] * ZH[i][3] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[2][1] * ZH[2][5] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[2][1] * ZH[2][5] * ZH[i][3] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                      std::conj(kap) * ZH[2][2] * ZH[2][5] * ZH[i][3] +
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[2][4] * ZH[2][5] * ZH[i][3] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[2][4] * ZH[2][5] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[2][4] * ZH[2][5] * ZH[i][3] -
                  std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                      (ZH[2][2] * ZH[2][2]) * ZH[i][4] +
                  std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                      (ZH[2][5] * ZH[2][5]) * ZH[i][4] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[2][0] * ZH[2][2] * ZH[i][4] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[2][0] * ZH[2][2] * ZH[i][4] +
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[2][0] * ZH[2][2] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[2][2] * ZH[2][3] * ZH[i][4] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[2][2] * ZH[2][3] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[2][2] * ZH[2][3] * ZH[i][4] +
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) *
                      ZH[2][0] * ZH[2][4] * ZH[i][4] +
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) *
                      ZH[2][0] * ZH[2][4] * ZH[i][4] -
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) *
                      ZH[2][1] * ZH[2][4] * ZH[i][4] -
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) *
                      ZH[2][1] * ZH[2][4] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[2][0] * ZH[2][5] * ZH[i][4] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[2][0] * ZH[2][5] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[2][0] * ZH[2][5] * ZH[i][4] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                      std::conj(kap) * ZH[2][2] * ZH[2][5] * ZH[i][4] +
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[2][3] * ZH[2][5] * ZH[i][4] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[2][3] * ZH[2][5] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[2][3] * ZH[2][5] * ZH[i][4] +
                  sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk *
                      (ZH[2][2] * ZH[2][2]) * ZH[i][5] -
                  sqrt(2) * std::exp(eta * I) * std::conj(Tk) *
                      (ZH[2][2] * ZH[2][2]) * ZH[i][5] -
                  sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk *
                      (ZH[2][5] * ZH[2][5]) * ZH[i][5] +
                  sqrt(2) * std::exp(eta * I) * std::conj(Tk) *
                      (ZH[2][5] * ZH[2][5]) * ZH[i][5] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[2][0] * ZH[2][1] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[2][0] * ZH[2][1] * ZH[i][5] +
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[2][0] * ZH[2][1] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vu *
                      std::conj(kap) * ZH[2][0] * ZH[2][2] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vd *
                      std::conj(kap) * ZH[2][1] * ZH[2][2] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[2][1] * ZH[2][3] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[2][1] * ZH[2][3] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[2][1] * ZH[2][3] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                      std::conj(kap) * ZH[2][2] * ZH[2][3] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[2][0] * ZH[2][4] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[2][0] * ZH[2][4] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[2][0] * ZH[2][4] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                      std::conj(kap) * ZH[2][2] * ZH[2][4] * ZH[i][5] +
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[2][3] * ZH[2][4] * ZH[i][5] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[2][3] * ZH[2][4] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[2][3] * ZH[2][4] * ZH[i][5] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                      std::conj(kap) * ZH[2][0] * ZH[2][5] * ZH[i][5] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                      std::conj(kap) * ZH[2][1] * ZH[2][5] * ZH[i][5] +
                  2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk *
                      ZH[2][2] * ZH[2][5] * ZH[i][5] -
                  8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                      std::conj(kap) * ZH[2][2] * ZH[2][5] * ZH[i][5] +
                  2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) *
                      ZH[2][2] * ZH[2][5] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vu *
                      std::conj(kap) * ZH[2][3] * ZH[2][5] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vd *
                      std::conj(kap) * ZH[2][4] * ZH[2][5] * ZH[i][5] +
                  std::exp(3 * etaS * I) * std::conj(lam) *
                      (2 *
                           (-(std::exp(eta * I) * I * lam *
                              (vS * ((ZH[2][0] * ZH[2][0]) +
                                     (ZH[2][1] * ZH[2][1]) +
                                     (ZH[2][3] * ZH[2][3]) +
                                     (ZH[2][4] * ZH[2][4])) +
                               2 * (vd * ZH[2][0] + vu * ZH[2][1]) *
                                   ZH[2][2])) +
                            std::exp(2 * etaS * I) * kap *
                                (vS * (I * ZH[2][0] + ZH[2][3]) *
                                     (ZH[2][1] - I * ZH[2][4]) +
                                 (I * vu * ZH[2][0] + I * vd * ZH[2][1] +
                                  vu * ZH[2][3] + vd * ZH[2][4]) *
                                     (ZH[2][2] + I * ZH[2][5]))) *
                           ZH[i][2] +
                       (-4 * std::exp(eta * I) * I * lam *
                            (vu * ZH[2][1] + vS * ZH[2][2]) * ZH[2][3] +
                        std::exp(2 * etaS * I) * kap *
                            (ZH[2][2] + I * ZH[2][5]) *
                            (2 * vS * (ZH[2][1] - I * ZH[2][4]) +
                             vu * (ZH[2][2] + I * ZH[2][5]))) *
                           ZH[i][3] +
                       std::exp(2 * etaS * I) * kap * vd *
                           (ZH[2][2] * ZH[2][2]) * ZH[i][4] -
                       std::exp(2 * etaS * I) * kap * vd *
                           (ZH[2][5] * ZH[2][5]) * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[2][0] *
                           ZH[2][2] * ZH[i][4] -
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[2][2] *
                           ZH[2][3] * ZH[i][4] -
                       4 * std::exp(eta * I) * I * lam * vd * ZH[2][0] *
                           ZH[2][4] * ZH[i][4] -
                       4 * std::exp(eta * I) * I * lam * vS * ZH[2][2] *
                           ZH[2][4] * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[2][0] *
                           ZH[2][5] * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * I * kap * vd * ZH[2][2] *
                           ZH[2][5] * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[2][3] *
                           ZH[2][5] * ZH[i][4] -
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[2][0] *
                           ZH[2][1] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vu * ZH[2][0] *
                           ZH[2][2] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vd * ZH[2][1] *
                           ZH[2][2] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[2][1] *
                           ZH[2][3] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vu * ZH[2][2] *
                           ZH[2][3] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[2][0] *
                           ZH[2][4] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vd * ZH[2][2] *
                           ZH[2][4] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[2][3] *
                           ZH[2][4] * ZH[i][5] -
                       4 * std::exp(eta * I) * I * lam * vd * ZH[2][0] *
                           ZH[2][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * I * kap * vu * ZH[2][0] *
                           ZH[2][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * I * kap * vd * ZH[2][1] *
                           ZH[2][5] * ZH[i][5] -
                       4 * std::exp(eta * I) * I * lam * vu * ZH[2][1] *
                           ZH[2][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vu * ZH[2][3] *
                           ZH[2][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vd * ZH[2][4] *
                           ZH[2][5] * ZH[i][5]))) /
            (4. * std::exp((eta + 3 * etaS) * I));
    }
    for (size_t i = 0; i < 6; i++) {
        coup25[i] =
            (std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vu * (I * ZH[2][2] + ZH[2][5]) *
                           (ZH[3][2] - I * ZH[3][5]) +
                       vS * (I * ZH[2][2] * (ZH[3][1] + I * ZH[3][4]) +
                             ZH[2][5] * (ZH[3][1] + I * ZH[3][4]) +
                             (ZH[2][1] + I * ZH[2][4]) *
                                 (I * ZH[3][2] + ZH[3][5]))) +
                  2 * std::conj(lam) *
                      (-2 * std::exp((eta + 2 * etaS) * I) * I * lam *
                           (vu * ZH[2][1] * ZH[3][0] +
                            vS * ZH[2][2] * ZH[3][0] +
                            vu * ZH[2][0] * ZH[3][1] +
                            vd * ZH[2][1] * ZH[3][1] +
                            vS * ZH[2][0] * ZH[3][2] +
                            vd * ZH[2][2] * ZH[3][2] +
                            vd * ZH[2][4] * ZH[3][4] +
                            vd * ZH[2][5] * ZH[3][5]) +
                       std::exp(4 * etaS * I) * I * kap *
                           (vu * (ZH[2][2] + I * ZH[2][5]) *
                                (ZH[3][2] + I * ZH[3][5]) +
                            vS * (ZH[2][5] * (I * ZH[3][1] + ZH[3][4]) +
                                  ZH[2][2] * (ZH[3][1] - I * ZH[3][4]) +
                                  (ZH[2][1] - I * ZH[2][4]) *
                                      (ZH[3][2] + I * ZH[3][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[2][2] * (I * ZH[3][1] + ZH[3][4]) +
                            ZH[2][5] * (ZH[3][1] - I * ZH[3][4]) +
                            (I * ZH[2][1] + ZH[2][4]) *
                                (ZH[3][2] - I * ZH[3][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vu * (ZH[2][1] * ZH[3][0] +
                                               ZH[2][0] * ZH[3][1]) +
                                         vd * (-3 * ZH[2][0] * ZH[3][0] +
                                               ZH[2][1] * ZH[3][1] -
                                               ZH[2][3] * ZH[3][3] +
                                               ZH[2][4] * ZH[3][4])) +
                            (g2 * g2) * (vu * (ZH[2][1] * ZH[3][0] +
                                               ZH[2][0] * ZH[3][1]) +
                                         vd * (-3 * ZH[2][0] * ZH[3][0] +
                                               ZH[2][1] * ZH[3][1] -
                                               ZH[2][3] * ZH[3][3] +
                                               ZH[2][4] * ZH[3][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[2][2] * (ZH[3][1] + I * ZH[3][4]) +
                                 I * ZH[2][5] * (ZH[3][1] + I * ZH[3][4]) +
                                 (ZH[2][1] + I * ZH[2][4]) *
                                     (ZH[3][2] + I * ZH[3][5]))))) *
                 ZH[i][0] +
             std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vd * (I * ZH[2][2] + ZH[2][5]) *
                           (ZH[3][2] - I * ZH[3][5]) +
                       vS * (I * ZH[2][2] * (ZH[3][0] + I * ZH[3][3]) +
                             ZH[2][5] * (ZH[3][0] + I * ZH[3][3]) +
                             (ZH[2][0] + I * ZH[2][3]) *
                                 (I * ZH[3][2] + ZH[3][5]))) +
                  2 * std::exp(2 * etaS * I) * I * std::conj(lam) *
                      (-2 * std::exp(eta * I) * lam *
                           (vd * ZH[2][1] * ZH[3][0] +
                            vd * ZH[2][0] * ZH[3][1] +
                            vS * ZH[2][2] * ZH[3][1] +
                            vS * ZH[2][1] * ZH[3][2] +
                            vu * (ZH[2][0] * ZH[3][0] + ZH[2][2] * ZH[3][2] +
                                  ZH[2][3] * ZH[3][3] + ZH[2][5] * ZH[3][5])) +
                       std::exp(2 * etaS * I) * kap *
                           (vd * (ZH[2][2] + I * ZH[2][5]) *
                                (ZH[3][2] + I * ZH[3][5]) +
                            vS * (ZH[2][5] * (I * ZH[3][0] + ZH[3][3]) +
                                  ZH[2][2] * (ZH[3][0] - I * ZH[3][3]) +
                                  (ZH[2][0] - I * ZH[2][3]) *
                                      (ZH[3][2] + I * ZH[3][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[2][2] * (I * ZH[3][0] + ZH[3][3]) +
                            ZH[2][5] * (ZH[3][0] - I * ZH[3][3]) +
                            (I * ZH[2][0] + ZH[2][3]) *
                                (ZH[3][2] - I * ZH[3][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vd * (ZH[2][1] * ZH[3][0] +
                                               ZH[2][0] * ZH[3][1]) +
                                         vu * (ZH[2][0] * ZH[3][0] -
                                               3 * ZH[2][1] * ZH[3][1] +
                                               ZH[2][3] * ZH[3][3] -
                                               ZH[2][4] * ZH[3][4])) +
                            (g2 * g2) * (vd * (ZH[2][1] * ZH[3][0] +
                                               ZH[2][0] * ZH[3][1]) +
                                         vu * (ZH[2][0] * ZH[3][0] -
                                               3 * ZH[2][1] * ZH[3][1] +
                                               ZH[2][3] * ZH[3][3] -
                                               ZH[2][4] * ZH[3][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[2][2] * (ZH[3][0] + I * ZH[3][3]) +
                                 I * ZH[2][5] * (ZH[3][0] + I * ZH[3][3]) +
                                 (ZH[2][0] + I * ZH[2][3]) *
                                     (ZH[3][2] + I * ZH[3][5]))))) *
                 ZH[i][1] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][0] * ZH[3][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][1] * ZH[3][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][1] * ZH[3][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][1] * ZH[3][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][1] *
                 ZH[3][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][2] * ZH[3][0] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][2] * ZH[3][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][2] * ZH[3][0] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][4] *
                 ZH[3][0] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][4] * ZH[3][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][4] *
                 ZH[3][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][4] *
                 ZH[3][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][5] * ZH[3][0] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][5] *
                 ZH[3][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][0] * ZH[3][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][0] * ZH[3][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][0] * ZH[3][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][0] *
                 ZH[3][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][1] * ZH[3][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][2] * ZH[3][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][2] * ZH[3][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][2] * ZH[3][1] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][3] *
                 ZH[3][1] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][3] * ZH[3][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][3] *
                 ZH[3][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][3] *
                 ZH[3][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][5] * ZH[3][1] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][5] *
                 ZH[3][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][0] * ZH[3][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][0] * ZH[3][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][0] * ZH[3][2] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][1] * ZH[3][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][1] * ZH[3][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][1] * ZH[3][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[2][2] *
                 ZH[3][2] * ZH[i][2] -
             24 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[2][2] * ZH[3][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[2][2] *
                 ZH[3][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][3] * ZH[3][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][3] *
                 ZH[3][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][4] * ZH[3][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][4] *
                 ZH[3][2] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[2][5] *
                 ZH[3][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[2][5] *
                 ZH[3][2] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][1] *
                 ZH[3][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][1] * ZH[3][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][1] *
                 ZH[3][3] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][1] *
                 ZH[3][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][2] * ZH[3][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][2] *
                 ZH[3][3] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][3] * ZH[3][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][4] * ZH[3][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][4] * ZH[3][3] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][4] * ZH[3][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][4] *
                 ZH[3][3] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][5] * ZH[3][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][5] * ZH[3][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][0] *
                 ZH[3][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][0] * ZH[3][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][0] *
                 ZH[3][4] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][0] *
                 ZH[3][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][2] * ZH[3][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][2] *
                 ZH[3][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][3] * ZH[3][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][3] * ZH[3][4] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][3] * ZH[3][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][3] *
                 ZH[3][4] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][4] * ZH[3][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][5] * ZH[3][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][5] * ZH[3][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][0] * ZH[3][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][0] *
                 ZH[3][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][1] * ZH[3][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][1] *
                 ZH[3][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[2][2] *
                 ZH[3][5] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[2][2] *
                 ZH[3][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][3] * ZH[3][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][3] * ZH[3][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][4] * ZH[3][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][4] * ZH[3][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[2][5] *
                 ZH[3][5] * ZH[i][2] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[2][5] * ZH[3][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[2][5] *
                 ZH[3][5] * ZH[i][2] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[2][3] *
                 ZH[3][0] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[2][3] *
                 ZH[3][0] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][2] *
                 ZH[3][1] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][2] * ZH[3][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][2] *
                 ZH[3][1] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][2] *
                 ZH[3][1] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][3] * ZH[3][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[2][3] *
                 ZH[3][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[2][3] *
                 ZH[3][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][5] * ZH[3][1] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][5] * ZH[3][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][5] * ZH[3][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][5] *
                 ZH[3][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][1] *
                 ZH[3][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][1] * ZH[3][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][1] *
                 ZH[3][2] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][1] *
                 ZH[3][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][2] * ZH[3][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][2] *
                 ZH[3][2] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][3] * ZH[3][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][4] * ZH[3][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][4] * ZH[3][2] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][4] * ZH[3][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][4] *
                 ZH[3][2] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][5] * ZH[3][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][5] * ZH[3][2] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[2][0] *
                 ZH[3][3] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[2][0] *
                 ZH[3][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][1] * ZH[3][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[2][1] *
                 ZH[3][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[2][1] *
                 ZH[3][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][2] * ZH[3][3] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][2] * ZH[3][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][2] * ZH[3][4] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][2] * ZH[3][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][2] *
                 ZH[3][4] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][5] *
                 ZH[3][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][5] * ZH[3][4] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][5] *
                 ZH[3][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][5] *
                 ZH[3][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][1] * ZH[3][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][1] * ZH[3][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][1] * ZH[3][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][1] *
                 ZH[3][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][2] * ZH[3][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][2] * ZH[3][5] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][4] *
                 ZH[3][5] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][4] * ZH[3][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][4] *
                 ZH[3][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][4] *
                 ZH[3][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][5] * ZH[3][5] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][5] *
                 ZH[3][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][2] *
                 ZH[3][0] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][2] * ZH[3][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][2] *
                 ZH[3][0] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][2] *
                 ZH[3][0] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][4] * ZH[3][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[2][4] *
                 ZH[3][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[2][4] *
                 ZH[3][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][5] * ZH[3][0] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][5] * ZH[3][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][5] * ZH[3][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][5] *
                 ZH[3][0] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[2][4] *
                 ZH[3][1] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[2][4] *
                 ZH[3][1] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][0] *
                 ZH[3][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][0] * ZH[3][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][0] *
                 ZH[3][2] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][0] *
                 ZH[3][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][2] * ZH[3][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][2] *
                 ZH[3][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][3] * ZH[3][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][3] * ZH[3][2] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][3] * ZH[3][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][3] *
                 ZH[3][2] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][4] * ZH[3][2] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][5] * ZH[3][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][5] * ZH[3][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][2] * ZH[3][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][2] * ZH[3][3] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][2] * ZH[3][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][2] *
                 ZH[3][3] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][5] *
                 ZH[3][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][5] * ZH[3][3] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][5] *
                 ZH[3][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][5] *
                 ZH[3][3] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][0] * ZH[3][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[2][0] *
                 ZH[3][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[2][0] *
                 ZH[3][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[2][1] *
                 ZH[3][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[2][1] *
                 ZH[3][4] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][2] * ZH[3][4] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][0] * ZH[3][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][0] * ZH[3][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][0] * ZH[3][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][0] *
                 ZH[3][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][2] * ZH[3][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][2] * ZH[3][5] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][3] *
                 ZH[3][5] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][3] * ZH[3][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][3] *
                 ZH[3][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][3] *
                 ZH[3][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][5] * ZH[3][5] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][5] *
                 ZH[3][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][1] *
                 ZH[3][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][1] * ZH[3][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][1] *
                 ZH[3][0] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][1] *
                 ZH[3][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][2] * ZH[3][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][2] *
                 ZH[3][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][4] * ZH[3][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][4] * ZH[3][0] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][4] * ZH[3][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][4] *
                 ZH[3][0] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][5] * ZH[3][0] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][5] * ZH[3][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][5] * ZH[3][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][0] *
                 ZH[3][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][0] * ZH[3][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][0] *
                 ZH[3][1] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][0] *
                 ZH[3][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][2] * ZH[3][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][2] *
                 ZH[3][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][3] * ZH[3][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][3] * ZH[3][1] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][3] * ZH[3][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][3] *
                 ZH[3][1] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][5] * ZH[3][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][5] * ZH[3][1] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][5] * ZH[3][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][0] * ZH[3][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][0] *
                 ZH[3][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][1] * ZH[3][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][1] *
                 ZH[3][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[2][2] *
                 ZH[3][2] * ZH[i][5] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[2][2] *
                 ZH[3][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][3] * ZH[3][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][3] * ZH[3][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][4] * ZH[3][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][4] * ZH[3][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[2][5] *
                 ZH[3][2] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[2][5] * ZH[3][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[2][5] *
                 ZH[3][2] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][1] * ZH[3][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][1] * ZH[3][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][1] * ZH[3][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][1] *
                 ZH[3][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][2] * ZH[3][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][2] * ZH[3][3] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][4] *
                 ZH[3][3] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][4] * ZH[3][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][4] *
                 ZH[3][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][4] *
                 ZH[3][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][5] * ZH[3][3] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][5] *
                 ZH[3][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][0] * ZH[3][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][0] * ZH[3][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][0] * ZH[3][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][0] *
                 ZH[3][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][2] * ZH[3][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][2] * ZH[3][4] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][3] *
                 ZH[3][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][3] * ZH[3][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][3] *
                 ZH[3][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][3] *
                 ZH[3][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][5] * ZH[3][4] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][5] *
                 ZH[3][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][0] * ZH[3][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][0] * ZH[3][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][0] * ZH[3][5] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][1] * ZH[3][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][1] * ZH[3][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][1] * ZH[3][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[2][2] *
                 ZH[3][5] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[2][2] * ZH[3][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[2][2] *
                 ZH[3][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][3] * ZH[3][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][3] *
                 ZH[3][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][4] * ZH[3][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][4] *
                 ZH[3][5] * ZH[i][5] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[2][5] *
                 ZH[3][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[2][5] *
                 ZH[3][5] * ZH[i][5]) /
            (4. * std::exp((eta + 3 * etaS) * I));
    }
    coup26 =
        ((CTW * g2 + g1 * STW) * (ZH[2][3] * ZH[3][0] - ZH[2][4] * ZH[3][1] -
                                  ZH[2][0] * ZH[3][3] + ZH[2][1] * ZH[3][4])) /
        2.;
    for (size_t i = 0; i < 6; i++) {
        coup27[i] =
            (std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vu * (I * ZH[2][2] + ZH[2][5]) *
                           (ZH[4][2] - I * ZH[4][5]) +
                       vS * (I * ZH[2][2] * (ZH[4][1] + I * ZH[4][4]) +
                             ZH[2][5] * (ZH[4][1] + I * ZH[4][4]) +
                             (ZH[2][1] + I * ZH[2][4]) *
                                 (I * ZH[4][2] + ZH[4][5]))) +
                  2 * std::conj(lam) *
                      (-2 * std::exp((eta + 2 * etaS) * I) * I * lam *
                           (vu * ZH[2][1] * ZH[4][0] +
                            vS * ZH[2][2] * ZH[4][0] +
                            vu * ZH[2][0] * ZH[4][1] +
                            vd * ZH[2][1] * ZH[4][1] +
                            vS * ZH[2][0] * ZH[4][2] +
                            vd * ZH[2][2] * ZH[4][2] +
                            vd * ZH[2][4] * ZH[4][4] +
                            vd * ZH[2][5] * ZH[4][5]) +
                       std::exp(4 * etaS * I) * I * kap *
                           (vu * (ZH[2][2] + I * ZH[2][5]) *
                                (ZH[4][2] + I * ZH[4][5]) +
                            vS * (ZH[2][5] * (I * ZH[4][1] + ZH[4][4]) +
                                  ZH[2][2] * (ZH[4][1] - I * ZH[4][4]) +
                                  (ZH[2][1] - I * ZH[2][4]) *
                                      (ZH[4][2] + I * ZH[4][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[2][2] * (I * ZH[4][1] + ZH[4][4]) +
                            ZH[2][5] * (ZH[4][1] - I * ZH[4][4]) +
                            (I * ZH[2][1] + ZH[2][4]) *
                                (ZH[4][2] - I * ZH[4][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vu * (ZH[2][1] * ZH[4][0] +
                                               ZH[2][0] * ZH[4][1]) +
                                         vd * (-3 * ZH[2][0] * ZH[4][0] +
                                               ZH[2][1] * ZH[4][1] -
                                               ZH[2][3] * ZH[4][3] +
                                               ZH[2][4] * ZH[4][4])) +
                            (g2 * g2) * (vu * (ZH[2][1] * ZH[4][0] +
                                               ZH[2][0] * ZH[4][1]) +
                                         vd * (-3 * ZH[2][0] * ZH[4][0] +
                                               ZH[2][1] * ZH[4][1] -
                                               ZH[2][3] * ZH[4][3] +
                                               ZH[2][4] * ZH[4][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[2][2] * (ZH[4][1] + I * ZH[4][4]) +
                                 I * ZH[2][5] * (ZH[4][1] + I * ZH[4][4]) +
                                 (ZH[2][1] + I * ZH[2][4]) *
                                     (ZH[4][2] + I * ZH[4][5]))))) *
                 ZH[i][0] +
             std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vd * (I * ZH[2][2] + ZH[2][5]) *
                           (ZH[4][2] - I * ZH[4][5]) +
                       vS * (I * ZH[2][2] * (ZH[4][0] + I * ZH[4][3]) +
                             ZH[2][5] * (ZH[4][0] + I * ZH[4][3]) +
                             (ZH[2][0] + I * ZH[2][3]) *
                                 (I * ZH[4][2] + ZH[4][5]))) +
                  2 * std::exp(2 * etaS * I) * I * std::conj(lam) *
                      (-2 * std::exp(eta * I) * lam *
                           (vd * ZH[2][1] * ZH[4][0] +
                            vd * ZH[2][0] * ZH[4][1] +
                            vS * ZH[2][2] * ZH[4][1] +
                            vS * ZH[2][1] * ZH[4][2] +
                            vu * (ZH[2][0] * ZH[4][0] + ZH[2][2] * ZH[4][2] +
                                  ZH[2][3] * ZH[4][3] + ZH[2][5] * ZH[4][5])) +
                       std::exp(2 * etaS * I) * kap *
                           (vd * (ZH[2][2] + I * ZH[2][5]) *
                                (ZH[4][2] + I * ZH[4][5]) +
                            vS * (ZH[2][5] * (I * ZH[4][0] + ZH[4][3]) +
                                  ZH[2][2] * (ZH[4][0] - I * ZH[4][3]) +
                                  (ZH[2][0] - I * ZH[2][3]) *
                                      (ZH[4][2] + I * ZH[4][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[2][2] * (I * ZH[4][0] + ZH[4][3]) +
                            ZH[2][5] * (ZH[4][0] - I * ZH[4][3]) +
                            (I * ZH[2][0] + ZH[2][3]) *
                                (ZH[4][2] - I * ZH[4][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vd * (ZH[2][1] * ZH[4][0] +
                                               ZH[2][0] * ZH[4][1]) +
                                         vu * (ZH[2][0] * ZH[4][0] -
                                               3 * ZH[2][1] * ZH[4][1] +
                                               ZH[2][3] * ZH[4][3] -
                                               ZH[2][4] * ZH[4][4])) +
                            (g2 * g2) * (vd * (ZH[2][1] * ZH[4][0] +
                                               ZH[2][0] * ZH[4][1]) +
                                         vu * (ZH[2][0] * ZH[4][0] -
                                               3 * ZH[2][1] * ZH[4][1] +
                                               ZH[2][3] * ZH[4][3] -
                                               ZH[2][4] * ZH[4][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[2][2] * (ZH[4][0] + I * ZH[4][3]) +
                                 I * ZH[2][5] * (ZH[4][0] + I * ZH[4][3]) +
                                 (ZH[2][0] + I * ZH[2][3]) *
                                     (ZH[4][2] + I * ZH[4][5]))))) *
                 ZH[i][1] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][0] * ZH[4][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][1] * ZH[4][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][1] * ZH[4][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][1] * ZH[4][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][1] *
                 ZH[4][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][2] * ZH[4][0] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][2] * ZH[4][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][2] * ZH[4][0] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][4] *
                 ZH[4][0] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][4] * ZH[4][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][4] *
                 ZH[4][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][4] *
                 ZH[4][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][5] * ZH[4][0] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][5] *
                 ZH[4][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][0] * ZH[4][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][0] * ZH[4][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][0] * ZH[4][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][0] *
                 ZH[4][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][1] * ZH[4][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][2] * ZH[4][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][2] * ZH[4][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][2] * ZH[4][1] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][3] *
                 ZH[4][1] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][3] * ZH[4][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][3] *
                 ZH[4][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][3] *
                 ZH[4][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][5] * ZH[4][1] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][5] *
                 ZH[4][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][0] * ZH[4][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][0] * ZH[4][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][0] * ZH[4][2] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][1] * ZH[4][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][1] * ZH[4][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][1] * ZH[4][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[2][2] *
                 ZH[4][2] * ZH[i][2] -
             24 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[2][2] * ZH[4][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[2][2] *
                 ZH[4][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][3] * ZH[4][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][3] *
                 ZH[4][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][4] * ZH[4][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][4] *
                 ZH[4][2] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[2][5] *
                 ZH[4][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[2][5] *
                 ZH[4][2] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][1] *
                 ZH[4][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][1] * ZH[4][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][1] *
                 ZH[4][3] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][1] *
                 ZH[4][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][2] * ZH[4][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][2] *
                 ZH[4][3] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][3] * ZH[4][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][4] * ZH[4][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][4] * ZH[4][3] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][4] * ZH[4][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][4] *
                 ZH[4][3] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][5] * ZH[4][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][5] * ZH[4][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][0] *
                 ZH[4][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][0] * ZH[4][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][0] *
                 ZH[4][4] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][0] *
                 ZH[4][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][2] * ZH[4][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][2] *
                 ZH[4][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][3] * ZH[4][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][3] * ZH[4][4] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][3] * ZH[4][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][3] *
                 ZH[4][4] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][4] * ZH[4][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][5] * ZH[4][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][5] * ZH[4][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][0] * ZH[4][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][0] *
                 ZH[4][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][1] * ZH[4][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][1] *
                 ZH[4][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[2][2] *
                 ZH[4][5] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[2][2] *
                 ZH[4][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][3] * ZH[4][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][3] * ZH[4][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][4] * ZH[4][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][4] * ZH[4][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[2][5] *
                 ZH[4][5] * ZH[i][2] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[2][5] * ZH[4][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[2][5] *
                 ZH[4][5] * ZH[i][2] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[2][3] *
                 ZH[4][0] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[2][3] *
                 ZH[4][0] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][2] *
                 ZH[4][1] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][2] * ZH[4][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][2] *
                 ZH[4][1] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][2] *
                 ZH[4][1] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][3] * ZH[4][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[2][3] *
                 ZH[4][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[2][3] *
                 ZH[4][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][5] * ZH[4][1] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][5] * ZH[4][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][5] * ZH[4][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][5] *
                 ZH[4][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][1] *
                 ZH[4][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][1] * ZH[4][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][1] *
                 ZH[4][2] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][1] *
                 ZH[4][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][2] * ZH[4][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][2] *
                 ZH[4][2] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][3] * ZH[4][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][4] * ZH[4][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][4] * ZH[4][2] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][4] * ZH[4][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][4] *
                 ZH[4][2] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][5] * ZH[4][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][5] * ZH[4][2] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[2][0] *
                 ZH[4][3] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[2][0] *
                 ZH[4][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][1] * ZH[4][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[2][1] *
                 ZH[4][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[2][1] *
                 ZH[4][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][2] * ZH[4][3] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][2] * ZH[4][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][2] * ZH[4][4] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][2] * ZH[4][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][2] *
                 ZH[4][4] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][5] *
                 ZH[4][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][5] * ZH[4][4] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][5] *
                 ZH[4][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][5] *
                 ZH[4][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][1] * ZH[4][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][1] * ZH[4][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][1] * ZH[4][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][1] *
                 ZH[4][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][2] * ZH[4][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][2] * ZH[4][5] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][4] *
                 ZH[4][5] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][4] * ZH[4][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][4] *
                 ZH[4][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][4] *
                 ZH[4][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][5] * ZH[4][5] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][5] *
                 ZH[4][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][2] *
                 ZH[4][0] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][2] * ZH[4][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][2] *
                 ZH[4][0] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][2] *
                 ZH[4][0] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][4] * ZH[4][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[2][4] *
                 ZH[4][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[2][4] *
                 ZH[4][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][5] * ZH[4][0] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][5] * ZH[4][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][5] * ZH[4][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][5] *
                 ZH[4][0] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[2][4] *
                 ZH[4][1] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[2][4] *
                 ZH[4][1] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][0] *
                 ZH[4][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][0] * ZH[4][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][0] *
                 ZH[4][2] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][0] *
                 ZH[4][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][2] * ZH[4][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][2] *
                 ZH[4][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][3] * ZH[4][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][3] * ZH[4][2] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][3] * ZH[4][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][3] *
                 ZH[4][2] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][4] * ZH[4][2] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][5] * ZH[4][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][5] * ZH[4][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][2] * ZH[4][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][2] * ZH[4][3] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][2] * ZH[4][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][2] *
                 ZH[4][3] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][5] *
                 ZH[4][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][5] * ZH[4][3] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][5] *
                 ZH[4][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][5] *
                 ZH[4][3] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][0] * ZH[4][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[2][0] *
                 ZH[4][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[2][0] *
                 ZH[4][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[2][1] *
                 ZH[4][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[2][1] *
                 ZH[4][4] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][2] * ZH[4][4] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][0] * ZH[4][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][0] * ZH[4][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][0] * ZH[4][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][0] *
                 ZH[4][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][2] * ZH[4][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][2] * ZH[4][5] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][3] *
                 ZH[4][5] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][3] * ZH[4][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][3] *
                 ZH[4][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][3] *
                 ZH[4][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][5] * ZH[4][5] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][5] *
                 ZH[4][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][1] *
                 ZH[4][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][1] * ZH[4][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][1] *
                 ZH[4][0] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][1] *
                 ZH[4][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][2] * ZH[4][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][2] *
                 ZH[4][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][4] * ZH[4][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][4] * ZH[4][0] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][4] * ZH[4][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][4] *
                 ZH[4][0] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][5] * ZH[4][0] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][5] * ZH[4][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][5] * ZH[4][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][0] *
                 ZH[4][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][0] * ZH[4][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][0] *
                 ZH[4][1] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][0] *
                 ZH[4][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][2] * ZH[4][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][2] *
                 ZH[4][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][3] * ZH[4][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][3] * ZH[4][1] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][3] * ZH[4][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][3] *
                 ZH[4][1] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][5] * ZH[4][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][5] * ZH[4][1] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][5] * ZH[4][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][0] * ZH[4][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][0] *
                 ZH[4][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][1] * ZH[4][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][1] *
                 ZH[4][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[2][2] *
                 ZH[4][2] * ZH[i][5] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[2][2] *
                 ZH[4][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][3] * ZH[4][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][3] * ZH[4][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][4] * ZH[4][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][4] * ZH[4][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[2][5] *
                 ZH[4][2] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[2][5] * ZH[4][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[2][5] *
                 ZH[4][2] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][1] * ZH[4][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][1] * ZH[4][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][1] * ZH[4][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][1] *
                 ZH[4][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][2] * ZH[4][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][2] * ZH[4][3] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][4] *
                 ZH[4][3] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][4] * ZH[4][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][4] *
                 ZH[4][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][4] *
                 ZH[4][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][5] * ZH[4][3] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][5] *
                 ZH[4][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][0] * ZH[4][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][0] * ZH[4][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][0] * ZH[4][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][0] *
                 ZH[4][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][2] * ZH[4][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][2] * ZH[4][4] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][3] *
                 ZH[4][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][3] * ZH[4][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][3] *
                 ZH[4][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][3] *
                 ZH[4][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][5] * ZH[4][4] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][5] *
                 ZH[4][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][0] * ZH[4][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][0] * ZH[4][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][0] * ZH[4][5] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][1] * ZH[4][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][1] * ZH[4][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][1] * ZH[4][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[2][2] *
                 ZH[4][5] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[2][2] * ZH[4][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[2][2] *
                 ZH[4][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][3] * ZH[4][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][3] *
                 ZH[4][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][4] * ZH[4][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][4] *
                 ZH[4][5] * ZH[i][5] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[2][5] *
                 ZH[4][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[2][5] *
                 ZH[4][5] * ZH[i][5]) /
            (4. * std::exp((eta + 3 * etaS) * I));
    }
    coup28 =
        ((CTW * g2 + g1 * STW) * (ZH[2][3] * ZH[4][0] - ZH[2][4] * ZH[4][1] -
                                  ZH[2][0] * ZH[4][3] + ZH[2][1] * ZH[4][4])) /
        2.;
    for (size_t i = 0; i < 6; i++) {
        coup29[i] =
            (std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vu * (I * ZH[2][2] + ZH[2][5]) *
                           (ZH[5][2] - I * ZH[5][5]) +
                       vS * (I * ZH[2][2] * (ZH[5][1] + I * ZH[5][4]) +
                             ZH[2][5] * (ZH[5][1] + I * ZH[5][4]) +
                             (ZH[2][1] + I * ZH[2][4]) *
                                 (I * ZH[5][2] + ZH[5][5]))) +
                  2 * std::conj(lam) *
                      (-2 * std::exp((eta + 2 * etaS) * I) * I * lam *
                           (vu * ZH[2][1] * ZH[5][0] +
                            vS * ZH[2][2] * ZH[5][0] +
                            vu * ZH[2][0] * ZH[5][1] +
                            vd * ZH[2][1] * ZH[5][1] +
                            vS * ZH[2][0] * ZH[5][2] +
                            vd * ZH[2][2] * ZH[5][2] +
                            vd * ZH[2][4] * ZH[5][4] +
                            vd * ZH[2][5] * ZH[5][5]) +
                       std::exp(4 * etaS * I) * I * kap *
                           (vu * (ZH[2][2] + I * ZH[2][5]) *
                                (ZH[5][2] + I * ZH[5][5]) +
                            vS * (ZH[2][5] * (I * ZH[5][1] + ZH[5][4]) +
                                  ZH[2][2] * (ZH[5][1] - I * ZH[5][4]) +
                                  (ZH[2][1] - I * ZH[2][4]) *
                                      (ZH[5][2] + I * ZH[5][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[2][2] * (I * ZH[5][1] + ZH[5][4]) +
                            ZH[2][5] * (ZH[5][1] - I * ZH[5][4]) +
                            (I * ZH[2][1] + ZH[2][4]) *
                                (ZH[5][2] - I * ZH[5][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vu * (ZH[2][1] * ZH[5][0] +
                                               ZH[2][0] * ZH[5][1]) +
                                         vd * (-3 * ZH[2][0] * ZH[5][0] +
                                               ZH[2][1] * ZH[5][1] -
                                               ZH[2][3] * ZH[5][3] +
                                               ZH[2][4] * ZH[5][4])) +
                            (g2 * g2) * (vu * (ZH[2][1] * ZH[5][0] +
                                               ZH[2][0] * ZH[5][1]) +
                                         vd * (-3 * ZH[2][0] * ZH[5][0] +
                                               ZH[2][1] * ZH[5][1] -
                                               ZH[2][3] * ZH[5][3] +
                                               ZH[2][4] * ZH[5][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[2][2] * (ZH[5][1] + I * ZH[5][4]) +
                                 I * ZH[2][5] * (ZH[5][1] + I * ZH[5][4]) +
                                 (ZH[2][1] + I * ZH[2][4]) *
                                     (ZH[5][2] + I * ZH[5][5]))))) *
                 ZH[i][0] +
             std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vd * (I * ZH[2][2] + ZH[2][5]) *
                           (ZH[5][2] - I * ZH[5][5]) +
                       vS * (I * ZH[2][2] * (ZH[5][0] + I * ZH[5][3]) +
                             ZH[2][5] * (ZH[5][0] + I * ZH[5][3]) +
                             (ZH[2][0] + I * ZH[2][3]) *
                                 (I * ZH[5][2] + ZH[5][5]))) +
                  2 * std::exp(2 * etaS * I) * I * std::conj(lam) *
                      (-2 * std::exp(eta * I) * lam *
                           (vd * ZH[2][1] * ZH[5][0] +
                            vd * ZH[2][0] * ZH[5][1] +
                            vS * ZH[2][2] * ZH[5][1] +
                            vS * ZH[2][1] * ZH[5][2] +
                            vu * (ZH[2][0] * ZH[5][0] + ZH[2][2] * ZH[5][2] +
                                  ZH[2][3] * ZH[5][3] + ZH[2][5] * ZH[5][5])) +
                       std::exp(2 * etaS * I) * kap *
                           (vd * (ZH[2][2] + I * ZH[2][5]) *
                                (ZH[5][2] + I * ZH[5][5]) +
                            vS * (ZH[2][5] * (I * ZH[5][0] + ZH[5][3]) +
                                  ZH[2][2] * (ZH[5][0] - I * ZH[5][3]) +
                                  (ZH[2][0] - I * ZH[2][3]) *
                                      (ZH[5][2] + I * ZH[5][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[2][2] * (I * ZH[5][0] + ZH[5][3]) +
                            ZH[2][5] * (ZH[5][0] - I * ZH[5][3]) +
                            (I * ZH[2][0] + ZH[2][3]) *
                                (ZH[5][2] - I * ZH[5][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vd * (ZH[2][1] * ZH[5][0] +
                                               ZH[2][0] * ZH[5][1]) +
                                         vu * (ZH[2][0] * ZH[5][0] -
                                               3 * ZH[2][1] * ZH[5][1] +
                                               ZH[2][3] * ZH[5][3] -
                                               ZH[2][4] * ZH[5][4])) +
                            (g2 * g2) * (vd * (ZH[2][1] * ZH[5][0] +
                                               ZH[2][0] * ZH[5][1]) +
                                         vu * (ZH[2][0] * ZH[5][0] -
                                               3 * ZH[2][1] * ZH[5][1] +
                                               ZH[2][3] * ZH[5][3] -
                                               ZH[2][4] * ZH[5][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[2][2] * (ZH[5][0] + I * ZH[5][3]) +
                                 I * ZH[2][5] * (ZH[5][0] + I * ZH[5][3]) +
                                 (ZH[2][0] + I * ZH[2][3]) *
                                     (ZH[5][2] + I * ZH[5][5]))))) *
                 ZH[i][1] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][0] * ZH[5][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][1] * ZH[5][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][1] * ZH[5][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][1] * ZH[5][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][1] *
                 ZH[5][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][2] * ZH[5][0] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][2] * ZH[5][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][2] * ZH[5][0] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][4] *
                 ZH[5][0] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][4] * ZH[5][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][4] *
                 ZH[5][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][4] *
                 ZH[5][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][5] * ZH[5][0] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][5] *
                 ZH[5][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][0] * ZH[5][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][0] * ZH[5][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][0] * ZH[5][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][0] *
                 ZH[5][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][1] * ZH[5][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][2] * ZH[5][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][2] * ZH[5][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][2] * ZH[5][1] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][3] *
                 ZH[5][1] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][3] * ZH[5][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][3] *
                 ZH[5][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][3] *
                 ZH[5][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][5] * ZH[5][1] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][5] *
                 ZH[5][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][0] * ZH[5][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][0] * ZH[5][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][0] * ZH[5][2] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][1] * ZH[5][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][1] * ZH[5][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][1] * ZH[5][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[2][2] *
                 ZH[5][2] * ZH[i][2] -
             24 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[2][2] * ZH[5][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[2][2] *
                 ZH[5][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][3] * ZH[5][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][3] *
                 ZH[5][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][4] * ZH[5][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][4] *
                 ZH[5][2] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[2][5] *
                 ZH[5][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[2][5] *
                 ZH[5][2] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][1] *
                 ZH[5][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][1] * ZH[5][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][1] *
                 ZH[5][3] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][1] *
                 ZH[5][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][2] * ZH[5][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][2] *
                 ZH[5][3] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][3] * ZH[5][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][4] * ZH[5][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][4] * ZH[5][3] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][4] * ZH[5][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][4] *
                 ZH[5][3] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][5] * ZH[5][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][5] * ZH[5][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][0] *
                 ZH[5][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][0] * ZH[5][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][0] *
                 ZH[5][4] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][0] *
                 ZH[5][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][2] * ZH[5][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][2] *
                 ZH[5][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][3] * ZH[5][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][3] * ZH[5][4] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][3] * ZH[5][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][3] *
                 ZH[5][4] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][4] * ZH[5][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][5] * ZH[5][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][5] * ZH[5][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][0] * ZH[5][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][0] *
                 ZH[5][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][1] * ZH[5][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][1] *
                 ZH[5][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[2][2] *
                 ZH[5][5] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[2][2] *
                 ZH[5][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][3] * ZH[5][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][3] * ZH[5][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][4] * ZH[5][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][4] * ZH[5][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[2][5] *
                 ZH[5][5] * ZH[i][2] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[2][5] * ZH[5][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[2][5] *
                 ZH[5][5] * ZH[i][2] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[2][3] *
                 ZH[5][0] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[2][3] *
                 ZH[5][0] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][2] *
                 ZH[5][1] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][2] * ZH[5][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][2] *
                 ZH[5][1] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][2] *
                 ZH[5][1] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][3] * ZH[5][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[2][3] *
                 ZH[5][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[2][3] *
                 ZH[5][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][5] * ZH[5][1] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][5] * ZH[5][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][5] * ZH[5][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][5] *
                 ZH[5][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][1] *
                 ZH[5][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][1] * ZH[5][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][1] *
                 ZH[5][2] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][1] *
                 ZH[5][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][2] * ZH[5][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][2] *
                 ZH[5][2] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][3] * ZH[5][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][4] * ZH[5][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][4] * ZH[5][2] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][4] * ZH[5][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][4] *
                 ZH[5][2] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][5] * ZH[5][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][5] * ZH[5][2] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[2][0] *
                 ZH[5][3] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[2][0] *
                 ZH[5][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][1] * ZH[5][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[2][1] *
                 ZH[5][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[2][1] *
                 ZH[5][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][2] * ZH[5][3] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][2] * ZH[5][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][2] * ZH[5][4] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][2] * ZH[5][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][2] *
                 ZH[5][4] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][5] *
                 ZH[5][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][5] * ZH[5][4] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][5] *
                 ZH[5][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][5] *
                 ZH[5][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][1] * ZH[5][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][1] * ZH[5][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][1] * ZH[5][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][1] *
                 ZH[5][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][2] * ZH[5][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][2] * ZH[5][5] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][4] *
                 ZH[5][5] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][4] * ZH[5][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][4] *
                 ZH[5][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][4] *
                 ZH[5][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][5] * ZH[5][5] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][5] *
                 ZH[5][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][2] *
                 ZH[5][0] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][2] * ZH[5][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][2] *
                 ZH[5][0] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][2] *
                 ZH[5][0] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][4] * ZH[5][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[2][4] *
                 ZH[5][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[2][4] *
                 ZH[5][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][5] * ZH[5][0] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][5] * ZH[5][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][5] * ZH[5][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][5] *
                 ZH[5][0] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[2][4] *
                 ZH[5][1] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[2][4] *
                 ZH[5][1] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][0] *
                 ZH[5][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][0] * ZH[5][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][0] *
                 ZH[5][2] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][0] *
                 ZH[5][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][2] * ZH[5][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][2] *
                 ZH[5][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][3] * ZH[5][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][3] * ZH[5][2] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][3] * ZH[5][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][3] *
                 ZH[5][2] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][4] * ZH[5][2] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][5] * ZH[5][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][5] * ZH[5][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][2] * ZH[5][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][2] * ZH[5][3] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][2] * ZH[5][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][2] *
                 ZH[5][3] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][5] *
                 ZH[5][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][5] * ZH[5][3] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][5] *
                 ZH[5][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][5] *
                 ZH[5][3] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][0] * ZH[5][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[2][0] *
                 ZH[5][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[2][0] *
                 ZH[5][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[2][1] *
                 ZH[5][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[2][1] *
                 ZH[5][4] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[2][2] * ZH[5][4] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][0] * ZH[5][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][0] * ZH[5][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][0] * ZH[5][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][0] *
                 ZH[5][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][2] * ZH[5][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][2] * ZH[5][5] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][3] *
                 ZH[5][5] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][3] * ZH[5][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][3] *
                 ZH[5][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][3] *
                 ZH[5][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][5] * ZH[5][5] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][5] *
                 ZH[5][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][1] *
                 ZH[5][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][1] * ZH[5][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][1] *
                 ZH[5][0] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][1] *
                 ZH[5][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][2] * ZH[5][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][2] *
                 ZH[5][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][4] * ZH[5][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][4] * ZH[5][0] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][4] * ZH[5][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][4] *
                 ZH[5][0] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][5] * ZH[5][0] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][5] * ZH[5][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][5] * ZH[5][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][0] *
                 ZH[5][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][0] * ZH[5][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][0] *
                 ZH[5][1] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][0] *
                 ZH[5][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][2] * ZH[5][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][2] *
                 ZH[5][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][3] * ZH[5][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][3] * ZH[5][1] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][3] * ZH[5][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][3] *
                 ZH[5][1] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][5] * ZH[5][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][5] * ZH[5][1] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][5] * ZH[5][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][0] * ZH[5][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][0] *
                 ZH[5][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][1] * ZH[5][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][1] *
                 ZH[5][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[2][2] *
                 ZH[5][2] * ZH[i][5] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[2][2] *
                 ZH[5][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][3] * ZH[5][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][3] * ZH[5][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][4] * ZH[5][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][4] * ZH[5][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[2][5] *
                 ZH[5][2] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[2][5] * ZH[5][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[2][5] *
                 ZH[5][2] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][1] * ZH[5][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][1] * ZH[5][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][1] * ZH[5][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][1] *
                 ZH[5][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][2] * ZH[5][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][2] * ZH[5][3] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][4] *
                 ZH[5][3] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][4] * ZH[5][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][4] *
                 ZH[5][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][4] *
                 ZH[5][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][5] * ZH[5][3] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][5] *
                 ZH[5][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[2][0] * ZH[5][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[2][0] * ZH[5][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[2][0] * ZH[5][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[2][0] *
                 ZH[5][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][2] * ZH[5][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][2] * ZH[5][4] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[2][3] *
                 ZH[5][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[2][3] * ZH[5][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[2][3] *
                 ZH[5][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[2][3] *
                 ZH[5][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][5] * ZH[5][4] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][5] *
                 ZH[5][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[2][0] * ZH[5][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[2][0] * ZH[5][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[2][0] * ZH[5][5] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[2][1] * ZH[5][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[2][1] * ZH[5][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[2][1] * ZH[5][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[2][2] *
                 ZH[5][5] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[2][2] * ZH[5][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[2][2] *
                 ZH[5][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[2][3] * ZH[5][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[2][3] *
                 ZH[5][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[2][4] * ZH[5][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[2][4] *
                 ZH[5][5] * ZH[i][5] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[2][5] *
                 ZH[5][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[2][5] *
                 ZH[5][5] * ZH[i][5]) /
            (4. * std::exp((eta + 3 * etaS) * I));
    }
    coup30 =
        ((CTW * g2 + g1 * STW) * (ZH[2][3] * ZH[5][0] - ZH[2][4] * ZH[5][1] -
                                  ZH[2][0] * ZH[5][3] + ZH[2][1] * ZH[5][4])) /
        2.;
    for (size_t i = 0; i < 6; i++) {
        coup31[i] =
            (std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (I * ZH[3][2] + ZH[3][5]) *
                      (2 * vS * (ZH[3][1] + I * ZH[3][4]) +
                       vu * (ZH[3][2] - I * ZH[3][5])) +
                  2 * std::exp(2 * etaS * I) * std::conj(lam) *
                      (-2 * std::exp(eta * I) * I * lam *
                           (vd *
                                ((ZH[3][1] * ZH[3][1]) + (ZH[3][2] * ZH[3][2]) +
                                 (ZH[3][4] * ZH[3][4]) +
                                 (ZH[3][5] * ZH[3][5])) +
                            2 * vu * ZH[3][0] * ZH[3][1] +
                            2 * vS * ZH[3][0] * ZH[3][2]) +
                       std::exp(2 * etaS * I) * kap *
                           (ZH[3][2] + I * ZH[3][5]) *
                           (2 * I * vS * ZH[3][1] + I * vu * ZH[3][2] +
                            2 * vS * ZH[3][4] - vu * ZH[3][5])) +
                  std::exp(etaS * I) *
                      (2 * sqrt(2) * std::conj(Tlam) *
                           (I * ZH[3][1] + ZH[3][4]) *
                           (ZH[3][2] - I * ZH[3][5]) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vd * (-3 * (ZH[3][0] * ZH[3][0]) +
                                               (ZH[3][1] * ZH[3][1]) -
                                               (ZH[3][3] * ZH[3][3]) +
                                               (ZH[3][4] * ZH[3][4])) +
                                         2 * vu * ZH[3][0] * ZH[3][1]) +
                            (g2 * g2) * (vd * (-3 * (ZH[3][0] * ZH[3][0]) +
                                               (ZH[3][1] * ZH[3][1]) -
                                               (ZH[3][3] * ZH[3][3]) +
                                               (ZH[3][4] * ZH[3][4])) +
                                         2 * vu * ZH[3][0] * ZH[3][1]) +
                            2 * sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[3][1] + I * ZH[3][4]) *
                                (ZH[3][2] + I * ZH[3][5])))) *
                 ZH[i][0] +
             std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (I * ZH[3][2] + ZH[3][5]) *
                      (2 * vS * (ZH[3][0] + I * ZH[3][3]) +
                       vd * (ZH[3][2] - I * ZH[3][5])) +
                  2 * std::exp(2 * etaS * I) * std::conj(lam) *
                      (-2 * std::exp(eta * I) * I * lam *
                           (vu *
                                ((ZH[3][0] * ZH[3][0]) + (ZH[3][2] * ZH[3][2]) +
                                 (ZH[3][3] * ZH[3][3]) +
                                 (ZH[3][5] * ZH[3][5])) +
                            2 * ZH[3][1] * (vd * ZH[3][0] + vS * ZH[3][2])) +
                       std::exp(2 * etaS * I) * kap *
                           (ZH[3][2] + I * ZH[3][5]) *
                           (2 * I * vS * ZH[3][0] + I * vd * ZH[3][2] +
                            2 * vS * ZH[3][3] - vd * ZH[3][5])) +
                  std::exp(etaS * I) *
                      (2 * sqrt(2) * std::conj(Tlam) *
                           (I * ZH[3][0] + ZH[3][3]) *
                           (ZH[3][2] - I * ZH[3][5]) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vu * ((ZH[3][0] * ZH[3][0]) -
                                               3 * (ZH[3][1] * ZH[3][1]) +
                                               (ZH[3][3] * ZH[3][3]) -
                                               (ZH[3][4] * ZH[3][4])) +
                                         2 * vd * ZH[3][0] * ZH[3][1]) +
                            (g2 * g2) * (vu * ((ZH[3][0] * ZH[3][0]) -
                                               3 * (ZH[3][1] * ZH[3][1]) +
                                               (ZH[3][3] * ZH[3][3]) -
                                               (ZH[3][4] * ZH[3][4])) +
                                         2 * vd * ZH[3][0] * ZH[3][1]) +
                            2 * sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[3][0] + I * ZH[3][3]) *
                                (ZH[3][2] + I * ZH[3][5])))) *
                 ZH[i][1] +
             2 * ((sqrt(2) *
                       (std::exp(2 * etaS * I) * std::conj(Tlam) *
                            (ZH[3][0] - I * ZH[3][3]) *
                            (I * ZH[3][1] + ZH[3][4]) +
                        std::exp(eta * I) * I *
                            (-(std::conj(Tk) * ((ZH[3][2] - I * ZH[3][5]) *
                                                (ZH[3][2] - I * ZH[3][5]))) -
                             std::exp(6 * etaS * I) * Tk *
                                 ((ZH[3][2] + I * ZH[3][5]) *
                                  (ZH[3][2] + I * ZH[3][5])) +
                             std::exp((eta + 4 * etaS) * I) * Tlam *
                                 (ZH[3][0] + I * ZH[3][3]) *
                                 (ZH[3][1] + I * ZH[3][4]))) +
                   2 * std::exp((eta + etaS) * I) * I * std::conj(kap) *
                       (-2 * std::exp(2 * etaS * I) * kap * vS *
                            (3 * (ZH[3][2] * ZH[3][2]) +
                             (ZH[3][5] * ZH[3][5])) +
                        std::exp(eta * I) * lam *
                            (vS * (ZH[3][0] + I * ZH[3][3]) *
                                 (ZH[3][1] + I * ZH[3][4]) +
                             (vu * (ZH[3][0] + I * ZH[3][3]) +
                              vd * (ZH[3][1] + I * ZH[3][4])) *
                                 (ZH[3][2] - I * ZH[3][5])))) *
                      ZH[i][2] -
                  std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                      (ZH[3][2] * ZH[3][2]) * ZH[i][3] +
                  std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                      (ZH[3][5] * ZH[3][5]) * ZH[i][3] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[3][1] * ZH[3][2] * ZH[i][3] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[3][1] * ZH[3][2] * ZH[i][3] +
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[3][1] * ZH[3][2] * ZH[i][3] -
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) *
                      ZH[3][0] * ZH[3][3] * ZH[i][3] -
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) *
                      ZH[3][0] * ZH[3][3] * ZH[i][3] +
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) *
                      ZH[3][1] * ZH[3][3] * ZH[i][3] +
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) *
                      ZH[3][1] * ZH[3][3] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[3][2] * ZH[3][4] * ZH[i][3] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[3][2] * ZH[3][4] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[3][2] * ZH[3][4] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[3][1] * ZH[3][5] * ZH[i][3] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[3][1] * ZH[3][5] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[3][1] * ZH[3][5] * ZH[i][3] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                      std::conj(kap) * ZH[3][2] * ZH[3][5] * ZH[i][3] +
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[3][4] * ZH[3][5] * ZH[i][3] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[3][4] * ZH[3][5] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[3][4] * ZH[3][5] * ZH[i][3] -
                  std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                      (ZH[3][2] * ZH[3][2]) * ZH[i][4] +
                  std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                      (ZH[3][5] * ZH[3][5]) * ZH[i][4] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[3][0] * ZH[3][2] * ZH[i][4] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[3][0] * ZH[3][2] * ZH[i][4] +
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[3][0] * ZH[3][2] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[3][2] * ZH[3][3] * ZH[i][4] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[3][2] * ZH[3][3] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[3][2] * ZH[3][3] * ZH[i][4] +
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) *
                      ZH[3][0] * ZH[3][4] * ZH[i][4] +
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) *
                      ZH[3][0] * ZH[3][4] * ZH[i][4] -
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) *
                      ZH[3][1] * ZH[3][4] * ZH[i][4] -
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) *
                      ZH[3][1] * ZH[3][4] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[3][0] * ZH[3][5] * ZH[i][4] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[3][0] * ZH[3][5] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[3][0] * ZH[3][5] * ZH[i][4] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                      std::conj(kap) * ZH[3][2] * ZH[3][5] * ZH[i][4] +
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[3][3] * ZH[3][5] * ZH[i][4] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[3][3] * ZH[3][5] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[3][3] * ZH[3][5] * ZH[i][4] +
                  sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk *
                      (ZH[3][2] * ZH[3][2]) * ZH[i][5] -
                  sqrt(2) * std::exp(eta * I) * std::conj(Tk) *
                      (ZH[3][2] * ZH[3][2]) * ZH[i][5] -
                  sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk *
                      (ZH[3][5] * ZH[3][5]) * ZH[i][5] +
                  sqrt(2) * std::exp(eta * I) * std::conj(Tk) *
                      (ZH[3][5] * ZH[3][5]) * ZH[i][5] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[3][0] * ZH[3][1] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[3][0] * ZH[3][1] * ZH[i][5] +
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[3][0] * ZH[3][1] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vu *
                      std::conj(kap) * ZH[3][0] * ZH[3][2] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vd *
                      std::conj(kap) * ZH[3][1] * ZH[3][2] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[3][1] * ZH[3][3] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[3][1] * ZH[3][3] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[3][1] * ZH[3][3] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                      std::conj(kap) * ZH[3][2] * ZH[3][3] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[3][0] * ZH[3][4] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[3][0] * ZH[3][4] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[3][0] * ZH[3][4] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                      std::conj(kap) * ZH[3][2] * ZH[3][4] * ZH[i][5] +
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[3][3] * ZH[3][4] * ZH[i][5] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[3][3] * ZH[3][4] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[3][3] * ZH[3][4] * ZH[i][5] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                      std::conj(kap) * ZH[3][0] * ZH[3][5] * ZH[i][5] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                      std::conj(kap) * ZH[3][1] * ZH[3][5] * ZH[i][5] +
                  2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk *
                      ZH[3][2] * ZH[3][5] * ZH[i][5] -
                  8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                      std::conj(kap) * ZH[3][2] * ZH[3][5] * ZH[i][5] +
                  2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) *
                      ZH[3][2] * ZH[3][5] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vu *
                      std::conj(kap) * ZH[3][3] * ZH[3][5] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vd *
                      std::conj(kap) * ZH[3][4] * ZH[3][5] * ZH[i][5] +
                  std::exp(3 * etaS * I) * std::conj(lam) *
                      (2 *
                           (-(std::exp(eta * I) * I * lam *
                              (vS * ((ZH[3][0] * ZH[3][0]) +
                                     (ZH[3][1] * ZH[3][1]) +
                                     (ZH[3][3] * ZH[3][3]) +
                                     (ZH[3][4] * ZH[3][4])) +
                               2 * (vd * ZH[3][0] + vu * ZH[3][1]) *
                                   ZH[3][2])) +
                            std::exp(2 * etaS * I) * kap *
                                (vS * (I * ZH[3][0] + ZH[3][3]) *
                                     (ZH[3][1] - I * ZH[3][4]) +
                                 (I * vu * ZH[3][0] + I * vd * ZH[3][1] +
                                  vu * ZH[3][3] + vd * ZH[3][4]) *
                                     (ZH[3][2] + I * ZH[3][5]))) *
                           ZH[i][2] +
                       (-4 * std::exp(eta * I) * I * lam *
                            (vu * ZH[3][1] + vS * ZH[3][2]) * ZH[3][3] +
                        std::exp(2 * etaS * I) * kap *
                            (ZH[3][2] + I * ZH[3][5]) *
                            (2 * vS * (ZH[3][1] - I * ZH[3][4]) +
                             vu * (ZH[3][2] + I * ZH[3][5]))) *
                           ZH[i][3] +
                       std::exp(2 * etaS * I) * kap * vd *
                           (ZH[3][2] * ZH[3][2]) * ZH[i][4] -
                       std::exp(2 * etaS * I) * kap * vd *
                           (ZH[3][5] * ZH[3][5]) * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[3][0] *
                           ZH[3][2] * ZH[i][4] -
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[3][2] *
                           ZH[3][3] * ZH[i][4] -
                       4 * std::exp(eta * I) * I * lam * vd * ZH[3][0] *
                           ZH[3][4] * ZH[i][4] -
                       4 * std::exp(eta * I) * I * lam * vS * ZH[3][2] *
                           ZH[3][4] * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[3][0] *
                           ZH[3][5] * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * I * kap * vd * ZH[3][2] *
                           ZH[3][5] * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[3][3] *
                           ZH[3][5] * ZH[i][4] -
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[3][0] *
                           ZH[3][1] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vu * ZH[3][0] *
                           ZH[3][2] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vd * ZH[3][1] *
                           ZH[3][2] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[3][1] *
                           ZH[3][3] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vu * ZH[3][2] *
                           ZH[3][3] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[3][0] *
                           ZH[3][4] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vd * ZH[3][2] *
                           ZH[3][4] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[3][3] *
                           ZH[3][4] * ZH[i][5] -
                       4 * std::exp(eta * I) * I * lam * vd * ZH[3][0] *
                           ZH[3][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * I * kap * vu * ZH[3][0] *
                           ZH[3][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * I * kap * vd * ZH[3][1] *
                           ZH[3][5] * ZH[i][5] -
                       4 * std::exp(eta * I) * I * lam * vu * ZH[3][1] *
                           ZH[3][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vu * ZH[3][3] *
                           ZH[3][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vd * ZH[3][4] *
                           ZH[3][5] * ZH[i][5]))) /
            (4. * std::exp((eta + 3 * etaS) * I));
    }
    for (size_t i = 0; i < 6; i++) {
        coup32[i] =
            (std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vu * (I * ZH[3][2] + ZH[3][5]) *
                           (ZH[4][2] - I * ZH[4][5]) +
                       vS * (I * ZH[3][2] * (ZH[4][1] + I * ZH[4][4]) +
                             ZH[3][5] * (ZH[4][1] + I * ZH[4][4]) +
                             (ZH[3][1] + I * ZH[3][4]) *
                                 (I * ZH[4][2] + ZH[4][5]))) +
                  2 * std::conj(lam) *
                      (-2 * std::exp((eta + 2 * etaS) * I) * I * lam *
                           (vu * ZH[3][1] * ZH[4][0] +
                            vS * ZH[3][2] * ZH[4][0] +
                            vu * ZH[3][0] * ZH[4][1] +
                            vd * ZH[3][1] * ZH[4][1] +
                            vS * ZH[3][0] * ZH[4][2] +
                            vd * ZH[3][2] * ZH[4][2] +
                            vd * ZH[3][4] * ZH[4][4] +
                            vd * ZH[3][5] * ZH[4][5]) +
                       std::exp(4 * etaS * I) * I * kap *
                           (vu * (ZH[3][2] + I * ZH[3][5]) *
                                (ZH[4][2] + I * ZH[4][5]) +
                            vS * (ZH[3][5] * (I * ZH[4][1] + ZH[4][4]) +
                                  ZH[3][2] * (ZH[4][1] - I * ZH[4][4]) +
                                  (ZH[3][1] - I * ZH[3][4]) *
                                      (ZH[4][2] + I * ZH[4][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[3][2] * (I * ZH[4][1] + ZH[4][4]) +
                            ZH[3][5] * (ZH[4][1] - I * ZH[4][4]) +
                            (I * ZH[3][1] + ZH[3][4]) *
                                (ZH[4][2] - I * ZH[4][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vu * (ZH[3][1] * ZH[4][0] +
                                               ZH[3][0] * ZH[4][1]) +
                                         vd * (-3 * ZH[3][0] * ZH[4][0] +
                                               ZH[3][1] * ZH[4][1] -
                                               ZH[3][3] * ZH[4][3] +
                                               ZH[3][4] * ZH[4][4])) +
                            (g2 * g2) * (vu * (ZH[3][1] * ZH[4][0] +
                                               ZH[3][0] * ZH[4][1]) +
                                         vd * (-3 * ZH[3][0] * ZH[4][0] +
                                               ZH[3][1] * ZH[4][1] -
                                               ZH[3][3] * ZH[4][3] +
                                               ZH[3][4] * ZH[4][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[3][2] * (ZH[4][1] + I * ZH[4][4]) +
                                 I * ZH[3][5] * (ZH[4][1] + I * ZH[4][4]) +
                                 (ZH[3][1] + I * ZH[3][4]) *
                                     (ZH[4][2] + I * ZH[4][5]))))) *
                 ZH[i][0] +
             std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vd * (I * ZH[3][2] + ZH[3][5]) *
                           (ZH[4][2] - I * ZH[4][5]) +
                       vS * (I * ZH[3][2] * (ZH[4][0] + I * ZH[4][3]) +
                             ZH[3][5] * (ZH[4][0] + I * ZH[4][3]) +
                             (ZH[3][0] + I * ZH[3][3]) *
                                 (I * ZH[4][2] + ZH[4][5]))) +
                  2 * std::exp(2 * etaS * I) * I * std::conj(lam) *
                      (-2 * std::exp(eta * I) * lam *
                           (vd * ZH[3][1] * ZH[4][0] +
                            vd * ZH[3][0] * ZH[4][1] +
                            vS * ZH[3][2] * ZH[4][1] +
                            vS * ZH[3][1] * ZH[4][2] +
                            vu * (ZH[3][0] * ZH[4][0] + ZH[3][2] * ZH[4][2] +
                                  ZH[3][3] * ZH[4][3] + ZH[3][5] * ZH[4][5])) +
                       std::exp(2 * etaS * I) * kap *
                           (vd * (ZH[3][2] + I * ZH[3][5]) *
                                (ZH[4][2] + I * ZH[4][5]) +
                            vS * (ZH[3][5] * (I * ZH[4][0] + ZH[4][3]) +
                                  ZH[3][2] * (ZH[4][0] - I * ZH[4][3]) +
                                  (ZH[3][0] - I * ZH[3][3]) *
                                      (ZH[4][2] + I * ZH[4][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[3][2] * (I * ZH[4][0] + ZH[4][3]) +
                            ZH[3][5] * (ZH[4][0] - I * ZH[4][3]) +
                            (I * ZH[3][0] + ZH[3][3]) *
                                (ZH[4][2] - I * ZH[4][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vd * (ZH[3][1] * ZH[4][0] +
                                               ZH[3][0] * ZH[4][1]) +
                                         vu * (ZH[3][0] * ZH[4][0] -
                                               3 * ZH[3][1] * ZH[4][1] +
                                               ZH[3][3] * ZH[4][3] -
                                               ZH[3][4] * ZH[4][4])) +
                            (g2 * g2) * (vd * (ZH[3][1] * ZH[4][0] +
                                               ZH[3][0] * ZH[4][1]) +
                                         vu * (ZH[3][0] * ZH[4][0] -
                                               3 * ZH[3][1] * ZH[4][1] +
                                               ZH[3][3] * ZH[4][3] -
                                               ZH[3][4] * ZH[4][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[3][2] * (ZH[4][0] + I * ZH[4][3]) +
                                 I * ZH[3][5] * (ZH[4][0] + I * ZH[4][3]) +
                                 (ZH[3][0] + I * ZH[3][3]) *
                                     (ZH[4][2] + I * ZH[4][5]))))) *
                 ZH[i][1] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[3][0] * ZH[4][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][1] * ZH[4][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][1] * ZH[4][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][1] * ZH[4][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][1] *
                 ZH[4][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][2] * ZH[4][0] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[3][2] * ZH[4][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][2] * ZH[4][0] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][4] *
                 ZH[4][0] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][4] * ZH[4][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][4] *
                 ZH[4][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][4] *
                 ZH[4][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][5] * ZH[4][0] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][5] *
                 ZH[4][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][0] * ZH[4][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][0] * ZH[4][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][0] * ZH[4][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][0] *
                 ZH[4][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[3][1] * ZH[4][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][2] * ZH[4][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][2] * ZH[4][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[3][2] * ZH[4][1] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][3] *
                 ZH[4][1] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][3] * ZH[4][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][3] *
                 ZH[4][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][3] *
                 ZH[4][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][5] * ZH[4][1] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][5] *
                 ZH[4][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][0] * ZH[4][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[3][0] * ZH[4][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][0] * ZH[4][2] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][1] * ZH[4][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][1] * ZH[4][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[3][1] * ZH[4][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[3][2] *
                 ZH[4][2] * ZH[i][2] -
             24 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[3][2] * ZH[4][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[3][2] *
                 ZH[4][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][3] * ZH[4][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][3] *
                 ZH[4][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][4] * ZH[4][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][4] *
                 ZH[4][2] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[3][5] *
                 ZH[4][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[3][5] *
                 ZH[4][2] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][1] *
                 ZH[4][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][1] * ZH[4][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][1] *
                 ZH[4][3] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][1] *
                 ZH[4][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][2] * ZH[4][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][2] *
                 ZH[4][3] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[3][3] * ZH[4][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][4] * ZH[4][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][4] * ZH[4][3] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][4] * ZH[4][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][4] *
                 ZH[4][3] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][5] * ZH[4][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][5] * ZH[4][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][0] *
                 ZH[4][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][0] * ZH[4][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][0] *
                 ZH[4][4] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][0] *
                 ZH[4][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][2] * ZH[4][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][2] *
                 ZH[4][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][3] * ZH[4][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][3] * ZH[4][4] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][3] * ZH[4][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][3] *
                 ZH[4][4] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[3][4] * ZH[4][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][5] * ZH[4][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][5] * ZH[4][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][0] * ZH[4][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][0] *
                 ZH[4][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][1] * ZH[4][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][1] *
                 ZH[4][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[3][2] *
                 ZH[4][5] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[3][2] *
                 ZH[4][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][3] * ZH[4][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][3] * ZH[4][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][4] * ZH[4][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][4] * ZH[4][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[3][5] *
                 ZH[4][5] * ZH[i][2] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[3][5] * ZH[4][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[3][5] *
                 ZH[4][5] * ZH[i][2] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[3][3] *
                 ZH[4][0] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[3][3] *
                 ZH[4][0] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][2] *
                 ZH[4][1] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][2] * ZH[4][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][2] *
                 ZH[4][1] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][2] *
                 ZH[4][1] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[3][3] * ZH[4][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[3][3] *
                 ZH[4][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[3][3] *
                 ZH[4][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][5] * ZH[4][1] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][5] * ZH[4][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][5] * ZH[4][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][5] *
                 ZH[4][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][1] *
                 ZH[4][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][1] * ZH[4][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][1] *
                 ZH[4][2] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][1] *
                 ZH[4][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][2] * ZH[4][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][2] *
                 ZH[4][2] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[3][3] * ZH[4][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][4] * ZH[4][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][4] * ZH[4][2] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][4] * ZH[4][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][4] *
                 ZH[4][2] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][5] * ZH[4][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][5] * ZH[4][2] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[3][0] *
                 ZH[4][3] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[3][0] *
                 ZH[4][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[3][1] * ZH[4][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[3][1] *
                 ZH[4][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[3][1] *
                 ZH[4][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[3][2] * ZH[4][3] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][2] * ZH[4][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][2] * ZH[4][4] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][2] * ZH[4][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][2] *
                 ZH[4][4] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][5] *
                 ZH[4][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][5] * ZH[4][4] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][5] *
                 ZH[4][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][5] *
                 ZH[4][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][1] * ZH[4][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][1] * ZH[4][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][1] * ZH[4][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][1] *
                 ZH[4][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][2] * ZH[4][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][2] * ZH[4][5] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][4] *
                 ZH[4][5] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][4] * ZH[4][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][4] *
                 ZH[4][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][4] *
                 ZH[4][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][5] * ZH[4][5] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][5] *
                 ZH[4][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][2] *
                 ZH[4][0] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][2] * ZH[4][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][2] *
                 ZH[4][0] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][2] *
                 ZH[4][0] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[3][4] * ZH[4][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[3][4] *
                 ZH[4][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[3][4] *
                 ZH[4][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][5] * ZH[4][0] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][5] * ZH[4][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][5] * ZH[4][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][5] *
                 ZH[4][0] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[3][4] *
                 ZH[4][1] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[3][4] *
                 ZH[4][1] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][0] *
                 ZH[4][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][0] * ZH[4][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][0] *
                 ZH[4][2] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][0] *
                 ZH[4][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][2] * ZH[4][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][2] *
                 ZH[4][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][3] * ZH[4][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][3] * ZH[4][2] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][3] * ZH[4][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][3] *
                 ZH[4][2] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[3][4] * ZH[4][2] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][5] * ZH[4][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][5] * ZH[4][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][2] * ZH[4][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][2] * ZH[4][3] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][2] * ZH[4][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][2] *
                 ZH[4][3] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][5] *
                 ZH[4][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][5] * ZH[4][3] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][5] *
                 ZH[4][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][5] *
                 ZH[4][3] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[3][0] * ZH[4][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[3][0] *
                 ZH[4][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[3][0] *
                 ZH[4][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[3][1] *
                 ZH[4][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[3][1] *
                 ZH[4][4] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[3][2] * ZH[4][4] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][0] * ZH[4][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][0] * ZH[4][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][0] * ZH[4][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][0] *
                 ZH[4][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][2] * ZH[4][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][2] * ZH[4][5] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][3] *
                 ZH[4][5] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][3] * ZH[4][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][3] *
                 ZH[4][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][3] *
                 ZH[4][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][5] * ZH[4][5] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][5] *
                 ZH[4][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][1] *
                 ZH[4][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][1] * ZH[4][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][1] *
                 ZH[4][0] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][1] *
                 ZH[4][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][2] * ZH[4][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][2] *
                 ZH[4][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][4] * ZH[4][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][4] * ZH[4][0] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][4] * ZH[4][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][4] *
                 ZH[4][0] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][5] * ZH[4][0] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[3][5] * ZH[4][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][5] * ZH[4][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][0] *
                 ZH[4][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][0] * ZH[4][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][0] *
                 ZH[4][1] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][0] *
                 ZH[4][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][2] * ZH[4][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][2] *
                 ZH[4][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][3] * ZH[4][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][3] * ZH[4][1] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][3] * ZH[4][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][3] *
                 ZH[4][1] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][5] * ZH[4][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][5] * ZH[4][1] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[3][5] * ZH[4][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][0] * ZH[4][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][0] *
                 ZH[4][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][1] * ZH[4][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][1] *
                 ZH[4][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[3][2] *
                 ZH[4][2] * ZH[i][5] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[3][2] *
                 ZH[4][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][3] * ZH[4][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][3] * ZH[4][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][4] * ZH[4][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][4] * ZH[4][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[3][5] *
                 ZH[4][2] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[3][5] * ZH[4][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[3][5] *
                 ZH[4][2] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][1] * ZH[4][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][1] * ZH[4][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][1] * ZH[4][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][1] *
                 ZH[4][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][2] * ZH[4][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][2] * ZH[4][3] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][4] *
                 ZH[4][3] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][4] * ZH[4][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][4] *
                 ZH[4][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][4] *
                 ZH[4][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][5] * ZH[4][3] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][5] *
                 ZH[4][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][0] * ZH[4][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][0] * ZH[4][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][0] * ZH[4][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][0] *
                 ZH[4][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][2] * ZH[4][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][2] * ZH[4][4] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][3] *
                 ZH[4][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][3] * ZH[4][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][3] *
                 ZH[4][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][3] *
                 ZH[4][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][5] * ZH[4][4] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][5] *
                 ZH[4][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][0] * ZH[4][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[3][0] * ZH[4][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][0] * ZH[4][5] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][1] * ZH[4][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][1] * ZH[4][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[3][1] * ZH[4][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[3][2] *
                 ZH[4][5] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[3][2] * ZH[4][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[3][2] *
                 ZH[4][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][3] * ZH[4][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][3] *
                 ZH[4][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][4] * ZH[4][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][4] *
                 ZH[4][5] * ZH[i][5] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[3][5] *
                 ZH[4][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[3][5] *
                 ZH[4][5] * ZH[i][5]) /
            (4. * std::exp((eta + 3 * etaS) * I));
    }
    coup33 =
        ((CTW * g2 + g1 * STW) * (ZH[3][3] * ZH[4][0] - ZH[3][4] * ZH[4][1] -
                                  ZH[3][0] * ZH[4][3] + ZH[3][1] * ZH[4][4])) /
        2.;
    for (size_t i = 0; i < 6; i++) {
        coup34[i] =
            (std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vu * (I * ZH[3][2] + ZH[3][5]) *
                           (ZH[5][2] - I * ZH[5][5]) +
                       vS * (I * ZH[3][2] * (ZH[5][1] + I * ZH[5][4]) +
                             ZH[3][5] * (ZH[5][1] + I * ZH[5][4]) +
                             (ZH[3][1] + I * ZH[3][4]) *
                                 (I * ZH[5][2] + ZH[5][5]))) +
                  2 * std::conj(lam) *
                      (-2 * std::exp((eta + 2 * etaS) * I) * I * lam *
                           (vu * ZH[3][1] * ZH[5][0] +
                            vS * ZH[3][2] * ZH[5][0] +
                            vu * ZH[3][0] * ZH[5][1] +
                            vd * ZH[3][1] * ZH[5][1] +
                            vS * ZH[3][0] * ZH[5][2] +
                            vd * ZH[3][2] * ZH[5][2] +
                            vd * ZH[3][4] * ZH[5][4] +
                            vd * ZH[3][5] * ZH[5][5]) +
                       std::exp(4 * etaS * I) * I * kap *
                           (vu * (ZH[3][2] + I * ZH[3][5]) *
                                (ZH[5][2] + I * ZH[5][5]) +
                            vS * (ZH[3][5] * (I * ZH[5][1] + ZH[5][4]) +
                                  ZH[3][2] * (ZH[5][1] - I * ZH[5][4]) +
                                  (ZH[3][1] - I * ZH[3][4]) *
                                      (ZH[5][2] + I * ZH[5][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[3][2] * (I * ZH[5][1] + ZH[5][4]) +
                            ZH[3][5] * (ZH[5][1] - I * ZH[5][4]) +
                            (I * ZH[3][1] + ZH[3][4]) *
                                (ZH[5][2] - I * ZH[5][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vu * (ZH[3][1] * ZH[5][0] +
                                               ZH[3][0] * ZH[5][1]) +
                                         vd * (-3 * ZH[3][0] * ZH[5][0] +
                                               ZH[3][1] * ZH[5][1] -
                                               ZH[3][3] * ZH[5][3] +
                                               ZH[3][4] * ZH[5][4])) +
                            (g2 * g2) * (vu * (ZH[3][1] * ZH[5][0] +
                                               ZH[3][0] * ZH[5][1]) +
                                         vd * (-3 * ZH[3][0] * ZH[5][0] +
                                               ZH[3][1] * ZH[5][1] -
                                               ZH[3][3] * ZH[5][3] +
                                               ZH[3][4] * ZH[5][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[3][2] * (ZH[5][1] + I * ZH[5][4]) +
                                 I * ZH[3][5] * (ZH[5][1] + I * ZH[5][4]) +
                                 (ZH[3][1] + I * ZH[3][4]) *
                                     (ZH[5][2] + I * ZH[5][5]))))) *
                 ZH[i][0] +
             std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vd * (I * ZH[3][2] + ZH[3][5]) *
                           (ZH[5][2] - I * ZH[5][5]) +
                       vS * (I * ZH[3][2] * (ZH[5][0] + I * ZH[5][3]) +
                             ZH[3][5] * (ZH[5][0] + I * ZH[5][3]) +
                             (ZH[3][0] + I * ZH[3][3]) *
                                 (I * ZH[5][2] + ZH[5][5]))) +
                  2 * std::exp(2 * etaS * I) * I * std::conj(lam) *
                      (-2 * std::exp(eta * I) * lam *
                           (vd * ZH[3][1] * ZH[5][0] +
                            vd * ZH[3][0] * ZH[5][1] +
                            vS * ZH[3][2] * ZH[5][1] +
                            vS * ZH[3][1] * ZH[5][2] +
                            vu * (ZH[3][0] * ZH[5][0] + ZH[3][2] * ZH[5][2] +
                                  ZH[3][3] * ZH[5][3] + ZH[3][5] * ZH[5][5])) +
                       std::exp(2 * etaS * I) * kap *
                           (vd * (ZH[3][2] + I * ZH[3][5]) *
                                (ZH[5][2] + I * ZH[5][5]) +
                            vS * (ZH[3][5] * (I * ZH[5][0] + ZH[5][3]) +
                                  ZH[3][2] * (ZH[5][0] - I * ZH[5][3]) +
                                  (ZH[3][0] - I * ZH[3][3]) *
                                      (ZH[5][2] + I * ZH[5][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[3][2] * (I * ZH[5][0] + ZH[5][3]) +
                            ZH[3][5] * (ZH[5][0] - I * ZH[5][3]) +
                            (I * ZH[3][0] + ZH[3][3]) *
                                (ZH[5][2] - I * ZH[5][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vd * (ZH[3][1] * ZH[5][0] +
                                               ZH[3][0] * ZH[5][1]) +
                                         vu * (ZH[3][0] * ZH[5][0] -
                                               3 * ZH[3][1] * ZH[5][1] +
                                               ZH[3][3] * ZH[5][3] -
                                               ZH[3][4] * ZH[5][4])) +
                            (g2 * g2) * (vd * (ZH[3][1] * ZH[5][0] +
                                               ZH[3][0] * ZH[5][1]) +
                                         vu * (ZH[3][0] * ZH[5][0] -
                                               3 * ZH[3][1] * ZH[5][1] +
                                               ZH[3][3] * ZH[5][3] -
                                               ZH[3][4] * ZH[5][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[3][2] * (ZH[5][0] + I * ZH[5][3]) +
                                 I * ZH[3][5] * (ZH[5][0] + I * ZH[5][3]) +
                                 (ZH[3][0] + I * ZH[3][3]) *
                                     (ZH[5][2] + I * ZH[5][5]))))) *
                 ZH[i][1] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[3][0] * ZH[5][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][1] * ZH[5][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][1] * ZH[5][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][1] * ZH[5][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][1] *
                 ZH[5][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][2] * ZH[5][0] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[3][2] * ZH[5][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][2] * ZH[5][0] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][4] *
                 ZH[5][0] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][4] * ZH[5][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][4] *
                 ZH[5][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][4] *
                 ZH[5][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][5] * ZH[5][0] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][5] *
                 ZH[5][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][0] * ZH[5][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][0] * ZH[5][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][0] * ZH[5][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][0] *
                 ZH[5][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[3][1] * ZH[5][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][2] * ZH[5][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][2] * ZH[5][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[3][2] * ZH[5][1] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][3] *
                 ZH[5][1] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][3] * ZH[5][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][3] *
                 ZH[5][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][3] *
                 ZH[5][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][5] * ZH[5][1] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][5] *
                 ZH[5][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][0] * ZH[5][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[3][0] * ZH[5][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][0] * ZH[5][2] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][1] * ZH[5][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][1] * ZH[5][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[3][1] * ZH[5][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[3][2] *
                 ZH[5][2] * ZH[i][2] -
             24 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[3][2] * ZH[5][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[3][2] *
                 ZH[5][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][3] * ZH[5][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][3] *
                 ZH[5][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][4] * ZH[5][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][4] *
                 ZH[5][2] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[3][5] *
                 ZH[5][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[3][5] *
                 ZH[5][2] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][1] *
                 ZH[5][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][1] * ZH[5][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][1] *
                 ZH[5][3] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][1] *
                 ZH[5][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][2] * ZH[5][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][2] *
                 ZH[5][3] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[3][3] * ZH[5][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][4] * ZH[5][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][4] * ZH[5][3] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][4] * ZH[5][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][4] *
                 ZH[5][3] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][5] * ZH[5][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][5] * ZH[5][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][0] *
                 ZH[5][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][0] * ZH[5][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][0] *
                 ZH[5][4] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][0] *
                 ZH[5][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][2] * ZH[5][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][2] *
                 ZH[5][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][3] * ZH[5][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][3] * ZH[5][4] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][3] * ZH[5][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][3] *
                 ZH[5][4] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[3][4] * ZH[5][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][5] * ZH[5][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][5] * ZH[5][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][0] * ZH[5][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][0] *
                 ZH[5][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][1] * ZH[5][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][1] *
                 ZH[5][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[3][2] *
                 ZH[5][5] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[3][2] *
                 ZH[5][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][3] * ZH[5][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][3] * ZH[5][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][4] * ZH[5][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][4] * ZH[5][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[3][5] *
                 ZH[5][5] * ZH[i][2] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[3][5] * ZH[5][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[3][5] *
                 ZH[5][5] * ZH[i][2] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[3][3] *
                 ZH[5][0] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[3][3] *
                 ZH[5][0] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][2] *
                 ZH[5][1] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][2] * ZH[5][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][2] *
                 ZH[5][1] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][2] *
                 ZH[5][1] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[3][3] * ZH[5][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[3][3] *
                 ZH[5][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[3][3] *
                 ZH[5][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][5] * ZH[5][1] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][5] * ZH[5][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][5] * ZH[5][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][5] *
                 ZH[5][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][1] *
                 ZH[5][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][1] * ZH[5][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][1] *
                 ZH[5][2] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][1] *
                 ZH[5][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][2] * ZH[5][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][2] *
                 ZH[5][2] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[3][3] * ZH[5][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][4] * ZH[5][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][4] * ZH[5][2] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][4] * ZH[5][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][4] *
                 ZH[5][2] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][5] * ZH[5][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][5] * ZH[5][2] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[3][0] *
                 ZH[5][3] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[3][0] *
                 ZH[5][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[3][1] * ZH[5][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[3][1] *
                 ZH[5][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[3][1] *
                 ZH[5][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[3][2] * ZH[5][3] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][2] * ZH[5][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][2] * ZH[5][4] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][2] * ZH[5][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][2] *
                 ZH[5][4] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][5] *
                 ZH[5][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][5] * ZH[5][4] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][5] *
                 ZH[5][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][5] *
                 ZH[5][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][1] * ZH[5][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][1] * ZH[5][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][1] * ZH[5][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][1] *
                 ZH[5][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][2] * ZH[5][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][2] * ZH[5][5] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][4] *
                 ZH[5][5] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][4] * ZH[5][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][4] *
                 ZH[5][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][4] *
                 ZH[5][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][5] * ZH[5][5] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][5] *
                 ZH[5][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][2] *
                 ZH[5][0] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][2] * ZH[5][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][2] *
                 ZH[5][0] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][2] *
                 ZH[5][0] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[3][4] * ZH[5][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[3][4] *
                 ZH[5][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[3][4] *
                 ZH[5][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][5] * ZH[5][0] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][5] * ZH[5][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][5] * ZH[5][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][5] *
                 ZH[5][0] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[3][4] *
                 ZH[5][1] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[3][4] *
                 ZH[5][1] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][0] *
                 ZH[5][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][0] * ZH[5][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][0] *
                 ZH[5][2] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][0] *
                 ZH[5][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][2] * ZH[5][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][2] *
                 ZH[5][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][3] * ZH[5][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][3] * ZH[5][2] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][3] * ZH[5][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][3] *
                 ZH[5][2] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[3][4] * ZH[5][2] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][5] * ZH[5][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][5] * ZH[5][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][2] * ZH[5][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][2] * ZH[5][3] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][2] * ZH[5][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][2] *
                 ZH[5][3] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][5] *
                 ZH[5][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][5] * ZH[5][3] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][5] *
                 ZH[5][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][5] *
                 ZH[5][3] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[3][0] * ZH[5][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[3][0] *
                 ZH[5][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[3][0] *
                 ZH[5][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[3][1] *
                 ZH[5][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[3][1] *
                 ZH[5][4] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[3][2] * ZH[5][4] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][0] * ZH[5][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][0] * ZH[5][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][0] * ZH[5][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][0] *
                 ZH[5][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][2] * ZH[5][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][2] * ZH[5][5] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][3] *
                 ZH[5][5] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][3] * ZH[5][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][3] *
                 ZH[5][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][3] *
                 ZH[5][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][5] * ZH[5][5] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][5] *
                 ZH[5][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][1] *
                 ZH[5][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][1] * ZH[5][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][1] *
                 ZH[5][0] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][1] *
                 ZH[5][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][2] * ZH[5][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][2] *
                 ZH[5][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][4] * ZH[5][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][4] * ZH[5][0] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][4] * ZH[5][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][4] *
                 ZH[5][0] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][5] * ZH[5][0] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[3][5] * ZH[5][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][5] * ZH[5][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][0] *
                 ZH[5][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][0] * ZH[5][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][0] *
                 ZH[5][1] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][0] *
                 ZH[5][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][2] * ZH[5][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][2] *
                 ZH[5][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][3] * ZH[5][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][3] * ZH[5][1] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][3] * ZH[5][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][3] *
                 ZH[5][1] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][5] * ZH[5][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][5] * ZH[5][1] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[3][5] * ZH[5][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][0] * ZH[5][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][0] *
                 ZH[5][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][1] * ZH[5][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][1] *
                 ZH[5][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[3][2] *
                 ZH[5][2] * ZH[i][5] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[3][2] *
                 ZH[5][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][3] * ZH[5][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][3] * ZH[5][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][4] * ZH[5][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][4] * ZH[5][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[3][5] *
                 ZH[5][2] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[3][5] * ZH[5][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[3][5] *
                 ZH[5][2] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][1] * ZH[5][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][1] * ZH[5][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][1] * ZH[5][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][1] *
                 ZH[5][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][2] * ZH[5][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][2] * ZH[5][3] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][4] *
                 ZH[5][3] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][4] * ZH[5][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][4] *
                 ZH[5][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][4] *
                 ZH[5][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][5] * ZH[5][3] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][5] *
                 ZH[5][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[3][0] * ZH[5][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[3][0] * ZH[5][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[3][0] * ZH[5][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[3][0] *
                 ZH[5][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][2] * ZH[5][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][2] * ZH[5][4] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[3][3] *
                 ZH[5][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[3][3] * ZH[5][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[3][3] *
                 ZH[5][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[3][3] *
                 ZH[5][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][5] * ZH[5][4] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][5] *
                 ZH[5][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[3][0] * ZH[5][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[3][0] * ZH[5][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[3][0] * ZH[5][5] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[3][1] * ZH[5][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[3][1] * ZH[5][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[3][1] * ZH[5][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[3][2] *
                 ZH[5][5] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[3][2] * ZH[5][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[3][2] *
                 ZH[5][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[3][3] * ZH[5][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[3][3] *
                 ZH[5][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[3][4] * ZH[5][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[3][4] *
                 ZH[5][5] * ZH[i][5] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[3][5] *
                 ZH[5][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[3][5] *
                 ZH[5][5] * ZH[i][5]) /
            (4. * std::exp((eta + 3 * etaS) * I));
    }
    coup35 =
        ((CTW * g2 + g1 * STW) * (ZH[3][3] * ZH[5][0] - ZH[3][4] * ZH[5][1] -
                                  ZH[3][0] * ZH[5][3] + ZH[3][1] * ZH[5][4])) /
        2.;
    for (size_t i = 0; i < 6; i++) {
        coup36[i] =
            (std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (I * ZH[4][2] + ZH[4][5]) *
                      (2 * vS * (ZH[4][1] + I * ZH[4][4]) +
                       vu * (ZH[4][2] - I * ZH[4][5])) +
                  2 * std::exp(2 * etaS * I) * std::conj(lam) *
                      (-2 * std::exp(eta * I) * I * lam *
                           (vd *
                                ((ZH[4][1] * ZH[4][1]) + (ZH[4][2] * ZH[4][2]) +
                                 (ZH[4][4] * ZH[4][4]) +
                                 (ZH[4][5] * ZH[4][5])) +
                            2 * vu * ZH[4][0] * ZH[4][1] +
                            2 * vS * ZH[4][0] * ZH[4][2]) +
                       std::exp(2 * etaS * I) * kap *
                           (ZH[4][2] + I * ZH[4][5]) *
                           (2 * I * vS * ZH[4][1] + I * vu * ZH[4][2] +
                            2 * vS * ZH[4][4] - vu * ZH[4][5])) +
                  std::exp(etaS * I) *
                      (2 * sqrt(2) * std::conj(Tlam) *
                           (I * ZH[4][1] + ZH[4][4]) *
                           (ZH[4][2] - I * ZH[4][5]) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vd * (-3 * (ZH[4][0] * ZH[4][0]) +
                                               (ZH[4][1] * ZH[4][1]) -
                                               (ZH[4][3] * ZH[4][3]) +
                                               (ZH[4][4] * ZH[4][4])) +
                                         2 * vu * ZH[4][0] * ZH[4][1]) +
                            (g2 * g2) * (vd * (-3 * (ZH[4][0] * ZH[4][0]) +
                                               (ZH[4][1] * ZH[4][1]) -
                                               (ZH[4][3] * ZH[4][3]) +
                                               (ZH[4][4] * ZH[4][4])) +
                                         2 * vu * ZH[4][0] * ZH[4][1]) +
                            2 * sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[4][1] + I * ZH[4][4]) *
                                (ZH[4][2] + I * ZH[4][5])))) *
                 ZH[i][0] +
             std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (I * ZH[4][2] + ZH[4][5]) *
                      (2 * vS * (ZH[4][0] + I * ZH[4][3]) +
                       vd * (ZH[4][2] - I * ZH[4][5])) +
                  2 * std::exp(2 * etaS * I) * std::conj(lam) *
                      (-2 * std::exp(eta * I) * I * lam *
                           (vu *
                                ((ZH[4][0] * ZH[4][0]) + (ZH[4][2] * ZH[4][2]) +
                                 (ZH[4][3] * ZH[4][3]) +
                                 (ZH[4][5] * ZH[4][5])) +
                            2 * ZH[4][1] * (vd * ZH[4][0] + vS * ZH[4][2])) +
                       std::exp(2 * etaS * I) * kap *
                           (ZH[4][2] + I * ZH[4][5]) *
                           (2 * I * vS * ZH[4][0] + I * vd * ZH[4][2] +
                            2 * vS * ZH[4][3] - vd * ZH[4][5])) +
                  std::exp(etaS * I) *
                      (2 * sqrt(2) * std::conj(Tlam) *
                           (I * ZH[4][0] + ZH[4][3]) *
                           (ZH[4][2] - I * ZH[4][5]) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vu * ((ZH[4][0] * ZH[4][0]) -
                                               3 * (ZH[4][1] * ZH[4][1]) +
                                               (ZH[4][3] * ZH[4][3]) -
                                               (ZH[4][4] * ZH[4][4])) +
                                         2 * vd * ZH[4][0] * ZH[4][1]) +
                            (g2 * g2) * (vu * ((ZH[4][0] * ZH[4][0]) -
                                               3 * (ZH[4][1] * ZH[4][1]) +
                                               (ZH[4][3] * ZH[4][3]) -
                                               (ZH[4][4] * ZH[4][4])) +
                                         2 * vd * ZH[4][0] * ZH[4][1]) +
                            2 * sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[4][0] + I * ZH[4][3]) *
                                (ZH[4][2] + I * ZH[4][5])))) *
                 ZH[i][1] +
             2 * ((sqrt(2) *
                       (std::exp(2 * etaS * I) * std::conj(Tlam) *
                            (ZH[4][0] - I * ZH[4][3]) *
                            (I * ZH[4][1] + ZH[4][4]) +
                        std::exp(eta * I) * I *
                            (-(std::conj(Tk) * ((ZH[4][2] - I * ZH[4][5]) *
                                                (ZH[4][2] - I * ZH[4][5]))) -
                             std::exp(6 * etaS * I) * Tk *
                                 ((ZH[4][2] + I * ZH[4][5]) *
                                  (ZH[4][2] + I * ZH[4][5])) +
                             std::exp((eta + 4 * etaS) * I) * Tlam *
                                 (ZH[4][0] + I * ZH[4][3]) *
                                 (ZH[4][1] + I * ZH[4][4]))) +
                   2 * std::exp((eta + etaS) * I) * I * std::conj(kap) *
                       (-2 * std::exp(2 * etaS * I) * kap * vS *
                            (3 * (ZH[4][2] * ZH[4][2]) +
                             (ZH[4][5] * ZH[4][5])) +
                        std::exp(eta * I) * lam *
                            (vS * (ZH[4][0] + I * ZH[4][3]) *
                                 (ZH[4][1] + I * ZH[4][4]) +
                             (vu * (ZH[4][0] + I * ZH[4][3]) +
                              vd * (ZH[4][1] + I * ZH[4][4])) *
                                 (ZH[4][2] - I * ZH[4][5])))) *
                      ZH[i][2] -
                  std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                      (ZH[4][2] * ZH[4][2]) * ZH[i][3] +
                  std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                      (ZH[4][5] * ZH[4][5]) * ZH[i][3] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[4][1] * ZH[4][2] * ZH[i][3] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[4][1] * ZH[4][2] * ZH[i][3] +
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[4][1] * ZH[4][2] * ZH[i][3] -
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) *
                      ZH[4][0] * ZH[4][3] * ZH[i][3] -
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) *
                      ZH[4][0] * ZH[4][3] * ZH[i][3] +
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) *
                      ZH[4][1] * ZH[4][3] * ZH[i][3] +
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) *
                      ZH[4][1] * ZH[4][3] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[4][2] * ZH[4][4] * ZH[i][3] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[4][2] * ZH[4][4] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[4][2] * ZH[4][4] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[4][1] * ZH[4][5] * ZH[i][3] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[4][1] * ZH[4][5] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[4][1] * ZH[4][5] * ZH[i][3] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                      std::conj(kap) * ZH[4][2] * ZH[4][5] * ZH[i][3] +
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[4][4] * ZH[4][5] * ZH[i][3] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[4][4] * ZH[4][5] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[4][4] * ZH[4][5] * ZH[i][3] -
                  std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                      (ZH[4][2] * ZH[4][2]) * ZH[i][4] +
                  std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                      (ZH[4][5] * ZH[4][5]) * ZH[i][4] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[4][0] * ZH[4][2] * ZH[i][4] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[4][0] * ZH[4][2] * ZH[i][4] +
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[4][0] * ZH[4][2] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[4][2] * ZH[4][3] * ZH[i][4] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[4][2] * ZH[4][3] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[4][2] * ZH[4][3] * ZH[i][4] +
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) *
                      ZH[4][0] * ZH[4][4] * ZH[i][4] +
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) *
                      ZH[4][0] * ZH[4][4] * ZH[i][4] -
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) *
                      ZH[4][1] * ZH[4][4] * ZH[i][4] -
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) *
                      ZH[4][1] * ZH[4][4] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[4][0] * ZH[4][5] * ZH[i][4] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[4][0] * ZH[4][5] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[4][0] * ZH[4][5] * ZH[i][4] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                      std::conj(kap) * ZH[4][2] * ZH[4][5] * ZH[i][4] +
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[4][3] * ZH[4][5] * ZH[i][4] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[4][3] * ZH[4][5] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[4][3] * ZH[4][5] * ZH[i][4] +
                  sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk *
                      (ZH[4][2] * ZH[4][2]) * ZH[i][5] -
                  sqrt(2) * std::exp(eta * I) * std::conj(Tk) *
                      (ZH[4][2] * ZH[4][2]) * ZH[i][5] -
                  sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk *
                      (ZH[4][5] * ZH[4][5]) * ZH[i][5] +
                  sqrt(2) * std::exp(eta * I) * std::conj(Tk) *
                      (ZH[4][5] * ZH[4][5]) * ZH[i][5] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[4][0] * ZH[4][1] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[4][0] * ZH[4][1] * ZH[i][5] +
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[4][0] * ZH[4][1] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vu *
                      std::conj(kap) * ZH[4][0] * ZH[4][2] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vd *
                      std::conj(kap) * ZH[4][1] * ZH[4][2] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[4][1] * ZH[4][3] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[4][1] * ZH[4][3] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[4][1] * ZH[4][3] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                      std::conj(kap) * ZH[4][2] * ZH[4][3] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[4][0] * ZH[4][4] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[4][0] * ZH[4][4] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[4][0] * ZH[4][4] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                      std::conj(kap) * ZH[4][2] * ZH[4][4] * ZH[i][5] +
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[4][3] * ZH[4][4] * ZH[i][5] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[4][3] * ZH[4][4] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[4][3] * ZH[4][4] * ZH[i][5] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                      std::conj(kap) * ZH[4][0] * ZH[4][5] * ZH[i][5] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                      std::conj(kap) * ZH[4][1] * ZH[4][5] * ZH[i][5] +
                  2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk *
                      ZH[4][2] * ZH[4][5] * ZH[i][5] -
                  8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                      std::conj(kap) * ZH[4][2] * ZH[4][5] * ZH[i][5] +
                  2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) *
                      ZH[4][2] * ZH[4][5] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vu *
                      std::conj(kap) * ZH[4][3] * ZH[4][5] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vd *
                      std::conj(kap) * ZH[4][4] * ZH[4][5] * ZH[i][5] +
                  std::exp(3 * etaS * I) * std::conj(lam) *
                      (2 *
                           (-(std::exp(eta * I) * I * lam *
                              (vS * ((ZH[4][0] * ZH[4][0]) +
                                     (ZH[4][1] * ZH[4][1]) +
                                     (ZH[4][3] * ZH[4][3]) +
                                     (ZH[4][4] * ZH[4][4])) +
                               2 * (vd * ZH[4][0] + vu * ZH[4][1]) *
                                   ZH[4][2])) +
                            std::exp(2 * etaS * I) * kap *
                                (vS * (I * ZH[4][0] + ZH[4][3]) *
                                     (ZH[4][1] - I * ZH[4][4]) +
                                 (I * vu * ZH[4][0] + I * vd * ZH[4][1] +
                                  vu * ZH[4][3] + vd * ZH[4][4]) *
                                     (ZH[4][2] + I * ZH[4][5]))) *
                           ZH[i][2] +
                       (-4 * std::exp(eta * I) * I * lam *
                            (vu * ZH[4][1] + vS * ZH[4][2]) * ZH[4][3] +
                        std::exp(2 * etaS * I) * kap *
                            (ZH[4][2] + I * ZH[4][5]) *
                            (2 * vS * (ZH[4][1] - I * ZH[4][4]) +
                             vu * (ZH[4][2] + I * ZH[4][5]))) *
                           ZH[i][3] +
                       std::exp(2 * etaS * I) * kap * vd *
                           (ZH[4][2] * ZH[4][2]) * ZH[i][4] -
                       std::exp(2 * etaS * I) * kap * vd *
                           (ZH[4][5] * ZH[4][5]) * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[4][0] *
                           ZH[4][2] * ZH[i][4] -
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[4][2] *
                           ZH[4][3] * ZH[i][4] -
                       4 * std::exp(eta * I) * I * lam * vd * ZH[4][0] *
                           ZH[4][4] * ZH[i][4] -
                       4 * std::exp(eta * I) * I * lam * vS * ZH[4][2] *
                           ZH[4][4] * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[4][0] *
                           ZH[4][5] * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * I * kap * vd * ZH[4][2] *
                           ZH[4][5] * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[4][3] *
                           ZH[4][5] * ZH[i][4] -
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[4][0] *
                           ZH[4][1] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vu * ZH[4][0] *
                           ZH[4][2] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vd * ZH[4][1] *
                           ZH[4][2] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[4][1] *
                           ZH[4][3] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vu * ZH[4][2] *
                           ZH[4][3] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[4][0] *
                           ZH[4][4] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vd * ZH[4][2] *
                           ZH[4][4] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[4][3] *
                           ZH[4][4] * ZH[i][5] -
                       4 * std::exp(eta * I) * I * lam * vd * ZH[4][0] *
                           ZH[4][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * I * kap * vu * ZH[4][0] *
                           ZH[4][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * I * kap * vd * ZH[4][1] *
                           ZH[4][5] * ZH[i][5] -
                       4 * std::exp(eta * I) * I * lam * vu * ZH[4][1] *
                           ZH[4][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vu * ZH[4][3] *
                           ZH[4][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vd * ZH[4][4] *
                           ZH[4][5] * ZH[i][5]))) /
            (4. * std::exp((eta + 3 * etaS) * I));
    }
    for (size_t i = 0; i < 6; i++) {
        coup37[i] =
            (std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vu * (I * ZH[4][2] + ZH[4][5]) *
                           (ZH[5][2] - I * ZH[5][5]) +
                       vS * (I * ZH[4][2] * (ZH[5][1] + I * ZH[5][4]) +
                             ZH[4][5] * (ZH[5][1] + I * ZH[5][4]) +
                             (ZH[4][1] + I * ZH[4][4]) *
                                 (I * ZH[5][2] + ZH[5][5]))) +
                  2 * std::conj(lam) *
                      (-2 * std::exp((eta + 2 * etaS) * I) * I * lam *
                           (vu * ZH[4][1] * ZH[5][0] +
                            vS * ZH[4][2] * ZH[5][0] +
                            vu * ZH[4][0] * ZH[5][1] +
                            vd * ZH[4][1] * ZH[5][1] +
                            vS * ZH[4][0] * ZH[5][2] +
                            vd * ZH[4][2] * ZH[5][2] +
                            vd * ZH[4][4] * ZH[5][4] +
                            vd * ZH[4][5] * ZH[5][5]) +
                       std::exp(4 * etaS * I) * I * kap *
                           (vu * (ZH[4][2] + I * ZH[4][5]) *
                                (ZH[5][2] + I * ZH[5][5]) +
                            vS * (ZH[4][5] * (I * ZH[5][1] + ZH[5][4]) +
                                  ZH[4][2] * (ZH[5][1] - I * ZH[5][4]) +
                                  (ZH[4][1] - I * ZH[4][4]) *
                                      (ZH[5][2] + I * ZH[5][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[4][2] * (I * ZH[5][1] + ZH[5][4]) +
                            ZH[4][5] * (ZH[5][1] - I * ZH[5][4]) +
                            (I * ZH[4][1] + ZH[4][4]) *
                                (ZH[5][2] - I * ZH[5][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vu * (ZH[4][1] * ZH[5][0] +
                                               ZH[4][0] * ZH[5][1]) +
                                         vd * (-3 * ZH[4][0] * ZH[5][0] +
                                               ZH[4][1] * ZH[5][1] -
                                               ZH[4][3] * ZH[5][3] +
                                               ZH[4][4] * ZH[5][4])) +
                            (g2 * g2) * (vu * (ZH[4][1] * ZH[5][0] +
                                               ZH[4][0] * ZH[5][1]) +
                                         vd * (-3 * ZH[4][0] * ZH[5][0] +
                                               ZH[4][1] * ZH[5][1] -
                                               ZH[4][3] * ZH[5][3] +
                                               ZH[4][4] * ZH[5][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[4][2] * (ZH[5][1] + I * ZH[5][4]) +
                                 I * ZH[4][5] * (ZH[5][1] + I * ZH[5][4]) +
                                 (ZH[4][1] + I * ZH[4][4]) *
                                     (ZH[5][2] + I * ZH[5][5]))))) *
                 ZH[i][0] +
             std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (vd * (I * ZH[4][2] + ZH[4][5]) *
                           (ZH[5][2] - I * ZH[5][5]) +
                       vS * (I * ZH[4][2] * (ZH[5][0] + I * ZH[5][3]) +
                             ZH[4][5] * (ZH[5][0] + I * ZH[5][3]) +
                             (ZH[4][0] + I * ZH[4][3]) *
                                 (I * ZH[5][2] + ZH[5][5]))) +
                  2 * std::exp(2 * etaS * I) * I * std::conj(lam) *
                      (-2 * std::exp(eta * I) * lam *
                           (vd * ZH[4][1] * ZH[5][0] +
                            vd * ZH[4][0] * ZH[5][1] +
                            vS * ZH[4][2] * ZH[5][1] +
                            vS * ZH[4][1] * ZH[5][2] +
                            vu * (ZH[4][0] * ZH[5][0] + ZH[4][2] * ZH[5][2] +
                                  ZH[4][3] * ZH[5][3] + ZH[4][5] * ZH[5][5])) +
                       std::exp(2 * etaS * I) * kap *
                           (vd * (ZH[4][2] + I * ZH[4][5]) *
                                (ZH[5][2] + I * ZH[5][5]) +
                            vS * (ZH[4][5] * (I * ZH[5][0] + ZH[5][3]) +
                                  ZH[4][2] * (ZH[5][0] - I * ZH[5][3]) +
                                  (ZH[4][0] - I * ZH[4][3]) *
                                      (ZH[5][2] + I * ZH[5][5])))) +
                  std::exp(etaS * I) *
                      (sqrt(2) * std::conj(Tlam) *
                           (ZH[4][2] * (I * ZH[5][0] + ZH[5][3]) +
                            ZH[4][5] * (ZH[5][0] - I * ZH[5][3]) +
                            (I * ZH[4][0] + ZH[4][3]) *
                                (ZH[5][2] - I * ZH[5][5])) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vd * (ZH[4][1] * ZH[5][0] +
                                               ZH[4][0] * ZH[5][1]) +
                                         vu * (ZH[4][0] * ZH[5][0] -
                                               3 * ZH[4][1] * ZH[5][1] +
                                               ZH[4][3] * ZH[5][3] -
                                               ZH[4][4] * ZH[5][4])) +
                            (g2 * g2) * (vd * (ZH[4][1] * ZH[5][0] +
                                               ZH[4][0] * ZH[5][1]) +
                                         vu * (ZH[4][0] * ZH[5][0] -
                                               3 * ZH[4][1] * ZH[5][1] +
                                               ZH[4][3] * ZH[5][3] -
                                               ZH[4][4] * ZH[5][4])) +
                            sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[4][2] * (ZH[5][0] + I * ZH[5][3]) +
                                 I * ZH[4][5] * (ZH[5][0] + I * ZH[5][3]) +
                                 (ZH[4][0] + I * ZH[4][3]) *
                                     (ZH[5][2] + I * ZH[5][5]))))) *
                 ZH[i][1] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[4][0] * ZH[5][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[4][1] * ZH[5][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[4][1] * ZH[5][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[4][1] * ZH[5][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[4][1] *
                 ZH[5][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[4][2] * ZH[5][0] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[4][2] * ZH[5][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[4][2] * ZH[5][0] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[4][4] *
                 ZH[5][0] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[4][4] * ZH[5][0] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[4][4] *
                 ZH[5][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[4][4] *
                 ZH[5][0] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[4][5] * ZH[5][0] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[4][5] *
                 ZH[5][0] * ZH[i][2] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[4][0] * ZH[5][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[4][0] * ZH[5][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[4][0] * ZH[5][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[4][0] *
                 ZH[5][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[4][1] * ZH[5][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[4][2] * ZH[5][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[4][2] * ZH[5][1] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[4][2] * ZH[5][1] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[4][3] *
                 ZH[5][1] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[4][3] * ZH[5][1] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[4][3] *
                 ZH[5][1] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[4][3] *
                 ZH[5][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[4][5] * ZH[5][1] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[4][5] *
                 ZH[5][1] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[4][0] * ZH[5][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[4][0] * ZH[5][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[4][0] * ZH[5][2] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[4][1] * ZH[5][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[4][1] * ZH[5][2] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[4][1] * ZH[5][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[4][2] *
                 ZH[5][2] * ZH[i][2] -
             24 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[4][2] * ZH[5][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[4][2] *
                 ZH[5][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[4][3] * ZH[5][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[4][3] *
                 ZH[5][2] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[4][4] * ZH[5][2] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[4][4] *
                 ZH[5][2] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[4][5] *
                 ZH[5][2] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[4][5] *
                 ZH[5][2] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[4][1] *
                 ZH[5][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[4][1] * ZH[5][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[4][1] *
                 ZH[5][3] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[4][1] *
                 ZH[5][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[4][2] * ZH[5][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[4][2] *
                 ZH[5][3] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[4][3] * ZH[5][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[4][4] * ZH[5][3] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[4][4] * ZH[5][3] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[4][4] * ZH[5][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[4][4] *
                 ZH[5][3] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[4][5] * ZH[5][3] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[4][5] * ZH[5][3] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[4][0] *
                 ZH[5][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[4][0] * ZH[5][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[4][0] *
                 ZH[5][4] * ZH[i][2] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[4][0] *
                 ZH[5][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[4][2] * ZH[5][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[4][2] *
                 ZH[5][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[4][3] * ZH[5][4] * ZH[i][2] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[4][3] * ZH[5][4] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[4][3] * ZH[5][4] * ZH[i][2] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[4][3] *
                 ZH[5][4] * ZH[i][2] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[4][4] * ZH[5][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[4][5] * ZH[5][4] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[4][5] * ZH[5][4] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[4][0] * ZH[5][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[4][0] *
                 ZH[5][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[4][1] * ZH[5][5] * ZH[i][2] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[4][1] *
                 ZH[5][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[4][2] *
                 ZH[5][5] * ZH[i][2] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[4][2] *
                 ZH[5][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[4][3] * ZH[5][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[4][3] * ZH[5][5] * ZH[i][2] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[4][4] * ZH[5][5] * ZH[i][2] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[4][4] * ZH[5][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[4][5] *
                 ZH[5][5] * ZH[i][2] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[4][5] * ZH[5][5] * ZH[i][2] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[4][5] *
                 ZH[5][5] * ZH[i][2] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[4][3] *
                 ZH[5][0] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[4][3] *
                 ZH[5][0] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[4][2] *
                 ZH[5][1] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[4][2] * ZH[5][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[4][2] *
                 ZH[5][1] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[4][2] *
                 ZH[5][1] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[4][3] * ZH[5][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[4][3] *
                 ZH[5][1] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[4][3] *
                 ZH[5][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[4][5] * ZH[5][1] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[4][5] * ZH[5][1] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[4][5] * ZH[5][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[4][5] *
                 ZH[5][1] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[4][1] *
                 ZH[5][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[4][1] * ZH[5][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[4][1] *
                 ZH[5][2] * ZH[i][3] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[4][1] *
                 ZH[5][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[4][2] * ZH[5][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[4][2] *
                 ZH[5][2] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[4][3] * ZH[5][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[4][4] * ZH[5][2] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[4][4] * ZH[5][2] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[4][4] * ZH[5][2] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[4][4] *
                 ZH[5][2] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[4][5] * ZH[5][2] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[4][5] * ZH[5][2] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[4][0] *
                 ZH[5][3] * ZH[i][3] -
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[4][0] *
                 ZH[5][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[4][1] * ZH[5][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[4][1] *
                 ZH[5][3] * ZH[i][3] +
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[4][1] *
                 ZH[5][3] * ZH[i][3] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[4][2] * ZH[5][3] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[4][2] * ZH[5][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[4][2] * ZH[5][4] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[4][2] * ZH[5][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[4][2] *
                 ZH[5][4] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[4][5] *
                 ZH[5][4] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[4][5] * ZH[5][4] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[4][5] *
                 ZH[5][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[4][5] *
                 ZH[5][4] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[4][1] * ZH[5][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[4][1] * ZH[5][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[4][1] * ZH[5][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[4][1] *
                 ZH[5][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[4][2] * ZH[5][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[4][2] * ZH[5][5] * ZH[i][3] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[4][4] *
                 ZH[5][5] * ZH[i][3] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[4][4] * ZH[5][5] * ZH[i][3] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[4][4] *
                 ZH[5][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[4][4] *
                 ZH[5][5] * ZH[i][3] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[4][5] * ZH[5][5] * ZH[i][3] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[4][5] *
                 ZH[5][5] * ZH[i][3] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[4][2] *
                 ZH[5][0] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[4][2] * ZH[5][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[4][2] *
                 ZH[5][0] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[4][2] *
                 ZH[5][0] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[4][4] * ZH[5][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[4][4] *
                 ZH[5][0] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[4][4] *
                 ZH[5][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[4][5] * ZH[5][0] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[4][5] * ZH[5][0] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[4][5] * ZH[5][0] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[4][5] *
                 ZH[5][0] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[4][4] *
                 ZH[5][1] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[4][4] *
                 ZH[5][1] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[4][0] *
                 ZH[5][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[4][0] * ZH[5][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[4][0] *
                 ZH[5][2] * ZH[i][4] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[4][0] *
                 ZH[5][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[4][2] * ZH[5][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[4][2] *
                 ZH[5][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[4][3] * ZH[5][2] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[4][3] * ZH[5][2] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[4][3] * ZH[5][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[4][3] *
                 ZH[5][2] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[4][4] * ZH[5][2] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[4][5] * ZH[5][2] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[4][5] * ZH[5][2] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[4][2] * ZH[5][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[4][2] * ZH[5][3] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[4][2] * ZH[5][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[4][2] *
                 ZH[5][3] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[4][5] *
                 ZH[5][3] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[4][5] * ZH[5][3] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[4][5] *
                 ZH[5][3] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[4][5] *
                 ZH[5][3] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[4][0] * ZH[5][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) * ZH[4][0] *
                 ZH[5][4] * ZH[i][4] +
             std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) * ZH[4][0] *
                 ZH[5][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) * ZH[4][1] *
                 ZH[5][4] * ZH[i][4] -
             std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) * ZH[4][1] *
                 ZH[5][4] * ZH[i][4] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vS *
                 std::conj(lam) * ZH[4][2] * ZH[5][4] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[4][0] * ZH[5][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[4][0] * ZH[5][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[4][0] * ZH[5][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[4][0] *
                 ZH[5][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[4][2] * ZH[5][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[4][2] * ZH[5][5] * ZH[i][4] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[4][3] *
                 ZH[5][5] * ZH[i][4] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[4][3] * ZH[5][5] * ZH[i][4] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[4][3] *
                 ZH[5][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[4][3] *
                 ZH[5][5] * ZH[i][4] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[4][5] * ZH[5][5] * ZH[i][4] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[4][5] *
                 ZH[5][5] * ZH[i][4] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[4][1] *
                 ZH[5][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[4][1] * ZH[5][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[4][1] *
                 ZH[5][0] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[4][1] *
                 ZH[5][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[4][2] * ZH[5][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[4][2] *
                 ZH[5][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[4][4] * ZH[5][0] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[4][4] * ZH[5][0] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[4][4] * ZH[5][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[4][4] *
                 ZH[5][0] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[4][5] * ZH[5][0] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[4][5] * ZH[5][0] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[4][5] * ZH[5][0] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[4][0] *
                 ZH[5][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[4][0] * ZH[5][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[4][0] *
                 ZH[5][1] * ZH[i][5] +
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[4][0] *
                 ZH[5][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[4][2] * ZH[5][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[4][2] *
                 ZH[5][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[4][3] * ZH[5][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[4][3] * ZH[5][1] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[4][3] * ZH[5][1] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[4][3] *
                 ZH[5][1] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[4][5] * ZH[5][1] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[4][5] * ZH[5][1] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[4][5] * ZH[5][1] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[4][0] * ZH[5][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[4][0] *
                 ZH[5][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[4][1] * ZH[5][2] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[4][1] *
                 ZH[5][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[4][2] *
                 ZH[5][2] * ZH[i][5] -
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[4][2] *
                 ZH[5][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[4][3] * ZH[5][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[4][3] * ZH[5][2] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[4][4] * ZH[5][2] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[4][4] * ZH[5][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[4][5] *
                 ZH[5][2] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[4][5] * ZH[5][2] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[4][5] *
                 ZH[5][2] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[4][1] * ZH[5][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[4][1] * ZH[5][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[4][1] * ZH[5][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[4][1] *
                 ZH[5][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[4][2] * ZH[5][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[4][2] * ZH[5][3] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[4][4] *
                 ZH[5][3] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[4][4] * ZH[5][3] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[4][4] *
                 ZH[5][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[4][4] *
                 ZH[5][3] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[4][5] * ZH[5][3] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[4][5] *
                 ZH[5][3] * ZH[i][5] -
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                 ZH[4][0] * ZH[5][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                 std::conj(kap) * ZH[4][0] * ZH[5][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vS * std::conj(lam) *
                 ZH[4][0] * ZH[5][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) * ZH[4][0] *
                 ZH[5][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[4][2] * ZH[5][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[4][2] * ZH[5][4] * ZH[i][5] +
             sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam * ZH[4][3] *
                 ZH[5][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * lam * vS * std::conj(kap) *
                 ZH[4][3] * ZH[5][4] * ZH[i][5] +
             2 * std::exp(5 * etaS * I) * kap * vS * std::conj(lam) * ZH[4][3] *
                 ZH[5][4] * ZH[i][5] -
             sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) * ZH[4][3] *
                 ZH[5][4] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[4][5] * ZH[5][4] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[4][5] *
                 ZH[5][4] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                 std::conj(kap) * ZH[4][0] * ZH[5][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vd *
                 std::conj(lam) * ZH[4][0] * ZH[5][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vu * std::conj(lam) *
                 ZH[4][0] * ZH[5][5] * ZH[i][5] -
             2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                 std::conj(kap) * ZH[4][1] * ZH[5][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * I * kap * vd * std::conj(lam) *
                 ZH[4][1] * ZH[5][5] * ZH[i][5] -
             4 * std::exp((eta + 3 * etaS) * I) * I * lam * vu *
                 std::conj(lam) * ZH[4][1] * ZH[5][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk * ZH[4][2] *
                 ZH[5][5] * ZH[i][5] -
             8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                 std::conj(kap) * ZH[4][2] * ZH[5][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) * ZH[4][2] *
                 ZH[5][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                 ZH[4][3] * ZH[5][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vu * std::conj(lam) * ZH[4][3] *
                 ZH[5][5] * ZH[i][5] +
             2 * std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                 ZH[4][4] * ZH[5][5] * ZH[i][5] -
             2 * std::exp(5 * etaS * I) * kap * vd * std::conj(lam) * ZH[4][4] *
                 ZH[5][5] * ZH[i][5] -
             2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk * ZH[4][5] *
                 ZH[5][5] * ZH[i][5] +
             2 * sqrt(2) * std::exp(eta * I) * std::conj(Tk) * ZH[4][5] *
                 ZH[5][5] * ZH[i][5]) /
            (4. * std::exp((eta + 3 * etaS) * I));
    }
    coup38 =
        ((CTW * g2 + g1 * STW) * (ZH[4][3] * ZH[5][0] - ZH[4][4] * ZH[5][1] -
                                  ZH[4][0] * ZH[5][3] + ZH[4][1] * ZH[5][4])) /
        2.;
    for (size_t i = 0; i < 6; i++) {
        coup39[i] =
            (std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (I * ZH[5][2] + ZH[5][5]) *
                      (2 * vS * (ZH[5][1] + I * ZH[5][4]) +
                       vu * (ZH[5][2] - I * ZH[5][5])) +
                  2 * std::exp(2 * etaS * I) * std::conj(lam) *
                      (-2 * std::exp(eta * I) * I * lam *
                           (vd *
                                ((ZH[5][1] * ZH[5][1]) + (ZH[5][2] * ZH[5][2]) +
                                 (ZH[5][4] * ZH[5][4]) +
                                 (ZH[5][5] * ZH[5][5])) +
                            2 * vu * ZH[5][0] * ZH[5][1] +
                            2 * vS * ZH[5][0] * ZH[5][2]) +
                       std::exp(2 * etaS * I) * kap *
                           (ZH[5][2] + I * ZH[5][5]) *
                           (2 * I * vS * ZH[5][1] + I * vu * ZH[5][2] +
                            2 * vS * ZH[5][4] - vu * ZH[5][5])) +
                  std::exp(etaS * I) *
                      (2 * sqrt(2) * std::conj(Tlam) *
                           (I * ZH[5][1] + ZH[5][4]) *
                           (ZH[5][2] - I * ZH[5][5]) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vd * (-3 * (ZH[5][0] * ZH[5][0]) +
                                               (ZH[5][1] * ZH[5][1]) -
                                               (ZH[5][3] * ZH[5][3]) +
                                               (ZH[5][4] * ZH[5][4])) +
                                         2 * vu * ZH[5][0] * ZH[5][1]) +
                            (g2 * g2) * (vd * (-3 * (ZH[5][0] * ZH[5][0]) +
                                               (ZH[5][1] * ZH[5][1]) -
                                               (ZH[5][3] * ZH[5][3]) +
                                               (ZH[5][4] * ZH[5][4])) +
                                         2 * vu * ZH[5][0] * ZH[5][1]) +
                            2 * sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[5][1] + I * ZH[5][4]) *
                                (ZH[5][2] + I * ZH[5][5])))) *
                 ZH[i][0] +
             std::exp(etaS * I) *
                 (2 * std::exp(2 * eta * I) * lam * std::conj(kap) *
                      (I * ZH[5][2] + ZH[5][5]) *
                      (2 * vS * (ZH[5][0] + I * ZH[5][3]) +
                       vd * (ZH[5][2] - I * ZH[5][5])) +
                  2 * std::exp(2 * etaS * I) * std::conj(lam) *
                      (-2 * std::exp(eta * I) * I * lam *
                           (vu *
                                ((ZH[5][0] * ZH[5][0]) + (ZH[5][2] * ZH[5][2]) +
                                 (ZH[5][3] * ZH[5][3]) +
                                 (ZH[5][5] * ZH[5][5])) +
                            2 * ZH[5][1] * (vd * ZH[5][0] + vS * ZH[5][2])) +
                       std::exp(2 * etaS * I) * kap *
                           (ZH[5][2] + I * ZH[5][5]) *
                           (2 * I * vS * ZH[5][0] + I * vd * ZH[5][2] +
                            2 * vS * ZH[5][3] - vd * ZH[5][5])) +
                  std::exp(etaS * I) *
                      (2 * sqrt(2) * std::conj(Tlam) *
                           (I * ZH[5][0] + ZH[5][3]) *
                           (ZH[5][2] - I * ZH[5][5]) +
                       std::exp((eta + etaS) * I) * I *
                           ((g1 * g1) * (vu * ((ZH[5][0] * ZH[5][0]) -
                                               3 * (ZH[5][1] * ZH[5][1]) +
                                               (ZH[5][3] * ZH[5][3]) -
                                               (ZH[5][4] * ZH[5][4])) +
                                         2 * vd * ZH[5][0] * ZH[5][1]) +
                            (g2 * g2) * (vu * ((ZH[5][0] * ZH[5][0]) -
                                               3 * (ZH[5][1] * ZH[5][1]) +
                                               (ZH[5][3] * ZH[5][3]) -
                                               (ZH[5][4] * ZH[5][4])) +
                                         2 * vd * ZH[5][0] * ZH[5][1]) +
                            2 * sqrt(2) * std::exp((eta + etaS) * I) * Tlam *
                                (ZH[5][0] + I * ZH[5][3]) *
                                (ZH[5][2] + I * ZH[5][5])))) *
                 ZH[i][1] +
             2 * ((sqrt(2) *
                       (std::exp(2 * etaS * I) * std::conj(Tlam) *
                            (ZH[5][0] - I * ZH[5][3]) *
                            (I * ZH[5][1] + ZH[5][4]) +
                        std::exp(eta * I) * I *
                            (-(std::conj(Tk) * ((ZH[5][2] - I * ZH[5][5]) *
                                                (ZH[5][2] - I * ZH[5][5]))) -
                             std::exp(6 * etaS * I) * Tk *
                                 ((ZH[5][2] + I * ZH[5][5]) *
                                  (ZH[5][2] + I * ZH[5][5])) +
                             std::exp((eta + 4 * etaS) * I) * Tlam *
                                 (ZH[5][0] + I * ZH[5][3]) *
                                 (ZH[5][1] + I * ZH[5][4]))) +
                   2 * std::exp((eta + etaS) * I) * I * std::conj(kap) *
                       (-2 * std::exp(2 * etaS * I) * kap * vS *
                            (3 * (ZH[5][2] * ZH[5][2]) +
                             (ZH[5][5] * ZH[5][5])) +
                        std::exp(eta * I) * lam *
                            (vS * (ZH[5][0] + I * ZH[5][3]) *
                                 (ZH[5][1] + I * ZH[5][4]) +
                             (vu * (ZH[5][0] + I * ZH[5][3]) +
                              vd * (ZH[5][1] + I * ZH[5][4])) *
                                 (ZH[5][2] - I * ZH[5][5])))) *
                      ZH[i][2] -
                  std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                      (ZH[5][2] * ZH[5][2]) * ZH[i][3] +
                  std::exp((2 * eta + etaS) * I) * lam * vu * std::conj(kap) *
                      (ZH[5][5] * ZH[5][5]) * ZH[i][3] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[5][1] * ZH[5][2] * ZH[i][3] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[5][1] * ZH[5][2] * ZH[i][3] +
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[5][1] * ZH[5][2] * ZH[i][3] -
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) *
                      ZH[5][0] * ZH[5][3] * ZH[i][3] -
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) *
                      ZH[5][0] * ZH[5][3] * ZH[i][3] +
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) *
                      ZH[5][1] * ZH[5][3] * ZH[i][3] +
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) *
                      ZH[5][1] * ZH[5][3] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[5][2] * ZH[5][4] * ZH[i][3] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[5][2] * ZH[5][4] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[5][2] * ZH[5][4] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[5][1] * ZH[5][5] * ZH[i][3] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[5][1] * ZH[5][5] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[5][1] * ZH[5][5] * ZH[i][3] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                      std::conj(kap) * ZH[5][2] * ZH[5][5] * ZH[i][3] +
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[5][4] * ZH[5][5] * ZH[i][3] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[5][4] * ZH[5][5] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[5][4] * ZH[5][5] * ZH[i][3] -
                  std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                      (ZH[5][2] * ZH[5][2]) * ZH[i][4] +
                  std::exp((2 * eta + etaS) * I) * lam * vd * std::conj(kap) *
                      (ZH[5][5] * ZH[5][5]) * ZH[i][4] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[5][0] * ZH[5][2] * ZH[i][4] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[5][0] * ZH[5][2] * ZH[i][4] +
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[5][0] * ZH[5][2] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[5][2] * ZH[5][3] * ZH[i][4] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[5][2] * ZH[5][3] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[5][2] * ZH[5][3] * ZH[i][4] +
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g1 * g1) *
                      ZH[5][0] * ZH[5][4] * ZH[i][4] +
                  std::exp((eta + 3 * etaS) * I) * I * vd * (g2 * g2) *
                      ZH[5][0] * ZH[5][4] * ZH[i][4] -
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g1 * g1) *
                      ZH[5][1] * ZH[5][4] * ZH[i][4] -
                  std::exp((eta + 3 * etaS) * I) * I * vu * (g2 * g2) *
                      ZH[5][1] * ZH[5][4] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[5][0] * ZH[5][5] * ZH[i][4] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[5][0] * ZH[5][5] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[5][0] * ZH[5][5] * ZH[i][4] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                      std::conj(kap) * ZH[5][2] * ZH[5][5] * ZH[i][4] +
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[5][3] * ZH[5][5] * ZH[i][4] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[5][3] * ZH[5][5] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[5][3] * ZH[5][5] * ZH[i][4] +
                  sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk *
                      (ZH[5][2] * ZH[5][2]) * ZH[i][5] -
                  sqrt(2) * std::exp(eta * I) * std::conj(Tk) *
                      (ZH[5][2] * ZH[5][2]) * ZH[i][5] -
                  sqrt(2) * std::exp((eta + 6 * etaS) * I) * Tk *
                      (ZH[5][5] * ZH[5][5]) * ZH[i][5] +
                  sqrt(2) * std::exp(eta * I) * std::conj(Tk) *
                      (ZH[5][5] * ZH[5][5]) * ZH[i][5] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[5][0] * ZH[5][1] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[5][0] * ZH[5][1] * ZH[i][5] +
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[5][0] * ZH[5][1] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vu *
                      std::conj(kap) * ZH[5][0] * ZH[5][2] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vd *
                      std::conj(kap) * ZH[5][1] * ZH[5][2] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[5][1] * ZH[5][3] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[5][1] * ZH[5][3] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[5][1] * ZH[5][3] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                      std::conj(kap) * ZH[5][2] * ZH[5][3] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * I * Tlam *
                      ZH[5][0] * ZH[5][4] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vS *
                      std::conj(kap) * ZH[5][0] * ZH[5][4] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * etaS * I) * I * std::conj(Tlam) *
                      ZH[5][0] * ZH[5][4] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                      std::conj(kap) * ZH[5][2] * ZH[5][4] * ZH[i][5] +
                  sqrt(2) * std::exp(2 * (eta + 2 * etaS) * I) * Tlam *
                      ZH[5][3] * ZH[5][4] * ZH[i][5] -
                  2 * std::exp((2 * eta + etaS) * I) * lam * vS *
                      std::conj(kap) * ZH[5][3] * ZH[5][4] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * etaS * I) * std::conj(Tlam) *
                      ZH[5][3] * ZH[5][4] * ZH[i][5] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vu *
                      std::conj(kap) * ZH[5][0] * ZH[5][5] * ZH[i][5] -
                  2 * std::exp((2 * eta + etaS) * I) * I * lam * vd *
                      std::conj(kap) * ZH[5][1] * ZH[5][5] * ZH[i][5] +
                  2 * sqrt(2) * std::exp((eta + 6 * etaS) * I) * I * Tk *
                      ZH[5][2] * ZH[5][5] * ZH[i][5] -
                  8 * std::exp((eta + 3 * etaS) * I) * I * kap * vS *
                      std::conj(kap) * ZH[5][2] * ZH[5][5] * ZH[i][5] +
                  2 * sqrt(2) * std::exp(eta * I) * I * std::conj(Tk) *
                      ZH[5][2] * ZH[5][5] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vu *
                      std::conj(kap) * ZH[5][3] * ZH[5][5] * ZH[i][5] +
                  2 * std::exp((2 * eta + etaS) * I) * lam * vd *
                      std::conj(kap) * ZH[5][4] * ZH[5][5] * ZH[i][5] +
                  std::exp(3 * etaS * I) * std::conj(lam) *
                      (2 *
                           (-(std::exp(eta * I) * I * lam *
                              (vS * ((ZH[5][0] * ZH[5][0]) +
                                     (ZH[5][1] * ZH[5][1]) +
                                     (ZH[5][3] * ZH[5][3]) +
                                     (ZH[5][4] * ZH[5][4])) +
                               2 * (vd * ZH[5][0] + vu * ZH[5][1]) *
                                   ZH[5][2])) +
                            std::exp(2 * etaS * I) * kap *
                                (vS * (I * ZH[5][0] + ZH[5][3]) *
                                     (ZH[5][1] - I * ZH[5][4]) +
                                 (I * vu * ZH[5][0] + I * vd * ZH[5][1] +
                                  vu * ZH[5][3] + vd * ZH[5][4]) *
                                     (ZH[5][2] + I * ZH[5][5]))) *
                           ZH[i][2] +
                       (-4 * std::exp(eta * I) * I * lam *
                            (vu * ZH[5][1] + vS * ZH[5][2]) * ZH[5][3] +
                        std::exp(2 * etaS * I) * kap *
                            (ZH[5][2] + I * ZH[5][5]) *
                            (2 * vS * (ZH[5][1] - I * ZH[5][4]) +
                             vu * (ZH[5][2] + I * ZH[5][5]))) *
                           ZH[i][3] +
                       std::exp(2 * etaS * I) * kap * vd *
                           (ZH[5][2] * ZH[5][2]) * ZH[i][4] -
                       std::exp(2 * etaS * I) * kap * vd *
                           (ZH[5][5] * ZH[5][5]) * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[5][0] *
                           ZH[5][2] * ZH[i][4] -
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[5][2] *
                           ZH[5][3] * ZH[i][4] -
                       4 * std::exp(eta * I) * I * lam * vd * ZH[5][0] *
                           ZH[5][4] * ZH[i][4] -
                       4 * std::exp(eta * I) * I * lam * vS * ZH[5][2] *
                           ZH[5][4] * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[5][0] *
                           ZH[5][5] * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * I * kap * vd * ZH[5][2] *
                           ZH[5][5] * ZH[i][4] +
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[5][3] *
                           ZH[5][5] * ZH[i][4] -
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[5][0] *
                           ZH[5][1] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vu * ZH[5][0] *
                           ZH[5][2] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vd * ZH[5][1] *
                           ZH[5][2] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[5][1] *
                           ZH[5][3] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vu * ZH[5][2] *
                           ZH[5][3] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vS * ZH[5][0] *
                           ZH[5][4] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * I * kap * vd * ZH[5][2] *
                           ZH[5][4] * ZH[i][5] +
                       2 * std::exp(2 * etaS * I) * kap * vS * ZH[5][3] *
                           ZH[5][4] * ZH[i][5] -
                       4 * std::exp(eta * I) * I * lam * vd * ZH[5][0] *
                           ZH[5][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * I * kap * vu * ZH[5][0] *
                           ZH[5][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * I * kap * vd * ZH[5][1] *
                           ZH[5][5] * ZH[i][5] -
                       4 * std::exp(eta * I) * I * lam * vu * ZH[5][1] *
                           ZH[5][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vu * ZH[5][3] *
                           ZH[5][5] * ZH[i][5] -
                       2 * std::exp(2 * etaS * I) * kap * vd * ZH[5][4] *
                           ZH[5][5] * ZH[i][5]))) /
            (4. * std::exp((eta + 3 * etaS) * I));
    }
}
}  // namespace DT
