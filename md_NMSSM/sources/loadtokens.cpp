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
    for (size_t i = 0; i < 6; i++) {
        coup40[i] =
            (std::exp(eta * I) * std::conj(ZP[0][0]) *
                 (-4 * std::exp(2 * etaS * I) * I * lam * vS * std::conj(lam) *
                      ZH[i][2] * ZP[0][0] -
                  2 * sqrt(2) * std::exp((eta + 3 * etaS) * I) * I * Tlam *
                      ZH[i][2] * ZP[0][1] -
                  4 * std::exp(eta * I) * I * lam * vS * std::conj(kap) *
                      ZH[i][2] * ZP[0][1] +
                  2 * std::exp(2 * etaS * I) * lam * vu * std::conj(lam) *
                      ZH[i][3] * ZP[0][1] -
                  std::exp(2 * etaS * I) * vu * (g2 * g2) * ZH[i][3] *
                      ZP[0][1] +
                  2 * std::exp(2 * etaS * I) * lam * vd * std::conj(lam) *
                      ZH[i][4] * ZP[0][1] -
                  std::exp(2 * etaS * I) * vd * (g2 * g2) * ZH[i][4] *
                      ZP[0][1] +
                  2 * sqrt(2) * std::exp((eta + 3 * etaS) * I) * Tlam *
                      ZH[i][5] * ZP[0][1] -
                  4 * std::exp(eta * I) * lam * vS * std::conj(kap) * ZH[i][5] *
                      ZP[0][1] +
                  std::exp(2 * etaS * I) * I * ZH[i][1] *
                      (vu * (g1 * g1) * ZP[0][0] +
                       2 * lam * vd * std::conj(lam) * ZP[0][1] -
                       (g2 * g2) * (vu * ZP[0][0] + vd * ZP[0][1])) -
                  std::exp(2 * etaS * I) * I * ZH[i][0] *
                      (vd * (g1 * g1) * ZP[0][0] -
                       2 * lam * vu * std::conj(lam) * ZP[0][1] +
                       (g2 * g2) * (vd * ZP[0][0] + vu * ZP[0][1]))) +
             std::exp(etaS * I) * std::conj(ZP[0][1]) *
                 (-4 * std::exp(3 * etaS * I) * I * kap * vS * std::conj(lam) *
                      ZH[i][2] * ZP[0][0] -
                  2 * sqrt(2) * I * std::conj(Tlam) * ZH[i][2] * ZP[0][0] -
                  2 * std::exp((eta + etaS) * I) * lam * vu * std::conj(lam) *
                      ZH[i][3] * ZP[0][0] +
                  std::exp((eta + etaS) * I) * vu * (g2 * g2) * ZH[i][3] *
                      ZP[0][0] -
                  2 * std::exp((eta + etaS) * I) * lam * vd * std::conj(lam) *
                      ZH[i][4] * ZP[0][0] +
                  std::exp((eta + etaS) * I) * vd * (g2 * g2) * ZH[i][4] *
                      ZP[0][0] +
                  4 * std::exp(3 * etaS * I) * kap * vS * std::conj(lam) *
                      ZH[i][5] * ZP[0][0] -
                  2 * sqrt(2) * std::conj(Tlam) * ZH[i][5] * ZP[0][0] -
                  4 * std::exp((eta + etaS) * I) * I * lam * vS *
                      std::conj(lam) * ZH[i][2] * ZP[0][1] -
                  std::exp((eta + etaS) * I) * I * ZH[i][0] *
                      (-2 * lam * vu * std::conj(lam) * ZP[0][0] -
                       vd * (g1 * g1) * ZP[0][1] +
                       (g2 * g2) * (vu * ZP[0][0] + vd * ZP[0][1])) -
                  std::exp((eta + etaS) * I) * I * ZH[i][1] *
                      (-2 * lam * vd * std::conj(lam) * ZP[0][0] +
                       vu * (g1 * g1) * ZP[0][1] +
                       (g2 * g2) * (vd * ZP[0][0] + vu * ZP[0][1])))) /
            (4. * std::exp((eta + 2 * etaS) * I));
    }
    coup41 =
        (I * (CTW * g2 - g1 * STW) *
         (std::conj(ZP[0][0]) * ZP[0][0] + std::conj(ZP[0][1]) * ZP[0][1])) /
        2.;
    for (size_t i = 0; i < 2; i++) {
        coup42[i] = (I * (-2 * g2 * std::conj(UM[i][0]) * std::conj(ZN[0][2]) *
                              ZP[0][0] +
                          std::conj(UM[i][1]) *
                              (sqrt(2) * g1 * std::conj(ZN[0][0]) * ZP[0][0] +
                               sqrt(2) * g2 * std::conj(ZN[0][1]) * ZP[0][0] -
                               2 * std::exp(eta * I) * lam *
                                   std::conj(ZN[0][4]) * ZP[0][1]))) /
                    2.;
    }
    for (size_t i = 0; i < 2; i++) {
        coup43[i] =
            -0.5 *
            (I * (2 * std::conj(lam) * UP[i][1] * ZN[0][4] * ZP[0][0] +
                  std::exp(eta * I) *
                      (sqrt(2) * UP[i][1] * (g1 * ZN[0][0] + g2 * ZN[0][1]) +
                       2 * g2 * UP[i][0] * ZN[0][3]) *
                      ZP[0][1]));
    }
    for (size_t i = 0; i < 2; i++) {
        coup44[i] =
            -0.5 *
            (I *
             (2 * g2 * std::conj(UP[i][0]) * std::conj(ZN[0][3]) *
                  std::conj(ZP[0][1]) +
              std::conj(UP[i][1]) *
                  (2 * std::exp(eta * I) * lam * std::conj(ZN[0][4]) *
                       std::conj(ZP[0][0]) +
                   sqrt(2) *
                       (g1 * std::conj(ZN[0][0]) + g2 * std::conj(ZN[0][1])) *
                       std::conj(ZP[0][1])))) /
            std::exp(eta * I);
    }
    for (size_t i = 0; i < 2; i++) {
        coup45[i] =
            (I *
             (std::conj(ZP[0][0]) *
                  (sqrt(2) * UM[i][1] * (g1 * ZN[0][0] + g2 * ZN[0][1]) -
                   2 * g2 * UM[i][0] * ZN[0][2]) -
              (2 * std::conj(lam) * std::conj(ZP[0][1]) * UM[i][1] * ZN[0][4]) /
                  std::exp(eta * I))) /
            2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup46[i] =
            (std::exp(eta * I) * std::conj(ZP[0][0]) *
                 (-4 * std::exp(2 * etaS * I) * I * lam * vS * std::conj(lam) *
                      ZH[i][2] * ZP[1][0] -
                  2 * sqrt(2) * std::exp((eta + 3 * etaS) * I) * I * Tlam *
                      ZH[i][2] * ZP[1][1] -
                  4 * std::exp(eta * I) * I * lam * vS * std::conj(kap) *
                      ZH[i][2] * ZP[1][1] +
                  2 * std::exp(2 * etaS * I) * lam * vu * std::conj(lam) *
                      ZH[i][3] * ZP[1][1] -
                  std::exp(2 * etaS * I) * vu * (g2 * g2) * ZH[i][3] *
                      ZP[1][1] +
                  2 * std::exp(2 * etaS * I) * lam * vd * std::conj(lam) *
                      ZH[i][4] * ZP[1][1] -
                  std::exp(2 * etaS * I) * vd * (g2 * g2) * ZH[i][4] *
                      ZP[1][1] +
                  2 * sqrt(2) * std::exp((eta + 3 * etaS) * I) * Tlam *
                      ZH[i][5] * ZP[1][1] -
                  4 * std::exp(eta * I) * lam * vS * std::conj(kap) * ZH[i][5] *
                      ZP[1][1] +
                  std::exp(2 * etaS * I) * I * ZH[i][1] *
                      (vu * (g1 * g1) * ZP[1][0] +
                       2 * lam * vd * std::conj(lam) * ZP[1][1] -
                       (g2 * g2) * (vu * ZP[1][0] + vd * ZP[1][1])) -
                  std::exp(2 * etaS * I) * I * ZH[i][0] *
                      (vd * (g1 * g1) * ZP[1][0] -
                       2 * lam * vu * std::conj(lam) * ZP[1][1] +
                       (g2 * g2) * (vd * ZP[1][0] + vu * ZP[1][1]))) +
             std::exp(etaS * I) * std::conj(ZP[0][1]) *
                 (-4 * std::exp(3 * etaS * I) * I * kap * vS * std::conj(lam) *
                      ZH[i][2] * ZP[1][0] -
                  2 * sqrt(2) * I * std::conj(Tlam) * ZH[i][2] * ZP[1][0] -
                  2 * std::exp((eta + etaS) * I) * lam * vu * std::conj(lam) *
                      ZH[i][3] * ZP[1][0] +
                  std::exp((eta + etaS) * I) * vu * (g2 * g2) * ZH[i][3] *
                      ZP[1][0] -
                  2 * std::exp((eta + etaS) * I) * lam * vd * std::conj(lam) *
                      ZH[i][4] * ZP[1][0] +
                  std::exp((eta + etaS) * I) * vd * (g2 * g2) * ZH[i][4] *
                      ZP[1][0] +
                  4 * std::exp(3 * etaS * I) * kap * vS * std::conj(lam) *
                      ZH[i][5] * ZP[1][0] -
                  2 * sqrt(2) * std::conj(Tlam) * ZH[i][5] * ZP[1][0] -
                  4 * std::exp((eta + etaS) * I) * I * lam * vS *
                      std::conj(lam) * ZH[i][2] * ZP[1][1] -
                  std::exp((eta + etaS) * I) * I * ZH[i][0] *
                      (-2 * lam * vu * std::conj(lam) * ZP[1][0] -
                       vd * (g1 * g1) * ZP[1][1] +
                       (g2 * g2) * (vu * ZP[1][0] + vd * ZP[1][1])) -
                  std::exp((eta + etaS) * I) * I * ZH[i][1] *
                      (-2 * lam * vd * std::conj(lam) * ZP[1][0] +
                       vu * (g1 * g1) * ZP[1][1] +
                       (g2 * g2) * (vd * ZP[1][0] + vu * ZP[1][1])))) /
            (4. * std::exp((eta + 2 * etaS) * I));
    }
    coup47 =
        (I * (CTW * g2 - g1 * STW) *
         (std::conj(ZP[0][0]) * ZP[1][0] + std::conj(ZP[0][1]) * ZP[1][1])) /
        2.;
    for (size_t i = 0; i < 2; i++) {
        coup48[i] = (I * (-2 * g2 * std::conj(UM[i][0]) * std::conj(ZN[0][2]) *
                              ZP[1][0] +
                          std::conj(UM[i][1]) *
                              (sqrt(2) * g1 * std::conj(ZN[0][0]) * ZP[1][0] +
                               sqrt(2) * g2 * std::conj(ZN[0][1]) * ZP[1][0] -
                               2 * std::exp(eta * I) * lam *
                                   std::conj(ZN[0][4]) * ZP[1][1]))) /
                    2.;
    }
    for (size_t i = 0; i < 2; i++) {
        coup49[i] =
            -0.5 *
            (I * (2 * std::conj(lam) * UP[i][1] * ZN[0][4] * ZP[1][0] +
                  std::exp(eta * I) *
                      (sqrt(2) * UP[i][1] * (g1 * ZN[0][0] + g2 * ZN[0][1]) +
                       2 * g2 * UP[i][0] * ZN[0][3]) *
                      ZP[1][1]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup50[i] =
            (std::exp(eta * I) * std::conj(ZP[1][0]) *
                 (-4 * std::exp(2 * etaS * I) * I * lam * vS * std::conj(lam) *
                      ZH[i][2] * ZP[1][0] -
                  2 * sqrt(2) * std::exp((eta + 3 * etaS) * I) * I * Tlam *
                      ZH[i][2] * ZP[1][1] -
                  4 * std::exp(eta * I) * I * lam * vS * std::conj(kap) *
                      ZH[i][2] * ZP[1][1] +
                  2 * std::exp(2 * etaS * I) * lam * vu * std::conj(lam) *
                      ZH[i][3] * ZP[1][1] -
                  std::exp(2 * etaS * I) * vu * (g2 * g2) * ZH[i][3] *
                      ZP[1][1] +
                  2 * std::exp(2 * etaS * I) * lam * vd * std::conj(lam) *
                      ZH[i][4] * ZP[1][1] -
                  std::exp(2 * etaS * I) * vd * (g2 * g2) * ZH[i][4] *
                      ZP[1][1] +
                  2 * sqrt(2) * std::exp((eta + 3 * etaS) * I) * Tlam *
                      ZH[i][5] * ZP[1][1] -
                  4 * std::exp(eta * I) * lam * vS * std::conj(kap) * ZH[i][5] *
                      ZP[1][1] +
                  std::exp(2 * etaS * I) * I * ZH[i][1] *
                      (vu * (g1 * g1) * ZP[1][0] +
                       2 * lam * vd * std::conj(lam) * ZP[1][1] -
                       (g2 * g2) * (vu * ZP[1][0] + vd * ZP[1][1])) -
                  std::exp(2 * etaS * I) * I * ZH[i][0] *
                      (vd * (g1 * g1) * ZP[1][0] -
                       2 * lam * vu * std::conj(lam) * ZP[1][1] +
                       (g2 * g2) * (vd * ZP[1][0] + vu * ZP[1][1]))) +
             std::exp(etaS * I) * std::conj(ZP[1][1]) *
                 (-4 * std::exp(3 * etaS * I) * I * kap * vS * std::conj(lam) *
                      ZH[i][2] * ZP[1][0] -
                  2 * sqrt(2) * I * std::conj(Tlam) * ZH[i][2] * ZP[1][0] -
                  2 * std::exp((eta + etaS) * I) * lam * vu * std::conj(lam) *
                      ZH[i][3] * ZP[1][0] +
                  std::exp((eta + etaS) * I) * vu * (g2 * g2) * ZH[i][3] *
                      ZP[1][0] -
                  2 * std::exp((eta + etaS) * I) * lam * vd * std::conj(lam) *
                      ZH[i][4] * ZP[1][0] +
                  std::exp((eta + etaS) * I) * vd * (g2 * g2) * ZH[i][4] *
                      ZP[1][0] +
                  4 * std::exp(3 * etaS * I) * kap * vS * std::conj(lam) *
                      ZH[i][5] * ZP[1][0] -
                  2 * sqrt(2) * std::conj(Tlam) * ZH[i][5] * ZP[1][0] -
                  4 * std::exp((eta + etaS) * I) * I * lam * vS *
                      std::conj(lam) * ZH[i][2] * ZP[1][1] -
                  std::exp((eta + etaS) * I) * I * ZH[i][0] *
                      (-2 * lam * vu * std::conj(lam) * ZP[1][0] -
                       vd * (g1 * g1) * ZP[1][1] +
                       (g2 * g2) * (vu * ZP[1][0] + vd * ZP[1][1])) -
                  std::exp((eta + etaS) * I) * I * ZH[i][1] *
                      (-2 * lam * vd * std::conj(lam) * ZP[1][0] +
                       vu * (g1 * g1) * ZP[1][1] +
                       (g2 * g2) * (vd * ZP[1][0] + vu * ZP[1][1])))) /
            (4. * std::exp((eta + 2 * etaS) * I));
    }
    coup51 =
        (I * (CTW * g2 - g1 * STW) *
         (std::conj(ZP[1][0]) * ZP[1][0] + std::conj(ZP[1][1]) * ZP[1][1])) /
        2.;
    for (size_t i = 0; i < 2; i++) {
        coup52[i] =
            -0.5 *
            (I *
             (2 * g2 * std::conj(UP[i][0]) * std::conj(ZN[0][3]) *
                  std::conj(ZP[1][1]) +
              std::conj(UP[i][1]) *
                  (2 * std::exp(eta * I) * lam * std::conj(ZN[0][4]) *
                       std::conj(ZP[1][0]) +
                   sqrt(2) *
                       (g1 * std::conj(ZN[0][0]) + g2 * std::conj(ZN[0][1])) *
                       std::conj(ZP[1][1])))) /
            std::exp(eta * I);
    }
    for (size_t i = 0; i < 2; i++) {
        coup53[i] =
            (I *
             (std::conj(ZP[1][0]) *
                  (sqrt(2) * UM[i][1] * (g1 * ZN[0][0] + g2 * ZN[0][1]) -
                   2 * g2 * UM[i][0] * ZN[0][2]) -
              (2 * std::conj(lam) * std::conj(ZP[1][1]) * UM[i][1] * ZN[0][4]) /
                  std::exp(eta * I))) /
            2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup54[i] = ((CTW * g2 + g1 * STW) *
                     (ZH[1][3] * ZH[i][0] - ZH[1][4] * ZH[i][1] -
                      ZH[1][0] * ZH[i][3] + ZH[1][1] * ZH[i][4])) /
                    2.;
    }
    coup55 = -0.25 * (I *
                      (-4 * CTW * g1 * g2 * STW +
                       (g1 * g1) * (-1. + (CTW * CTW) - (STW * STW)) +
                       (g2 * g2) * (-1. - (CTW * CTW) + (STW * STW))) *
                      (vd * ZH[1][0] + vu * ZH[1][1]));
    for (size_t i = 0; i < 5; i++) {
        coup56[i] =
            -0.5 *
            (I * (CTW * g2 + g1 * STW) *
             (std::conj(ZN[i][2]) * ZN[0][2] - std::conj(ZN[i][3]) * ZN[0][3]));
    }
    for (size_t i = 0; i < 5; i++) {
        coup57[i] = (I * (CTW * g2 + g1 * STW) *
                     (std::conj(ZN[0][2]) * ZN[i][2] -
                      std::conj(ZN[0][3]) * ZN[i][3])) /
                    2.;
    }
    for (size_t i = 0; i < 5; i++) {
        coup58[i] = (I * (CTW * g2 + g1 * STW) *
                     (std::conj(ZN[i][2]) * ZN[0][2] -
                      std::conj(ZN[i][3]) * ZN[0][3])) /
                    2.;
    }
    for (size_t i = 0; i < 5; i++) {
        coup59[i] =
            -0.5 *
            (I * (CTW * g2 + g1 * STW) *
             (std::conj(ZN[0][2]) * ZN[i][2] - std::conj(ZN[0][3]) * ZN[i][3]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup60[i] = ((CTW * g2 + g1 * STW) *
                     (ZH[2][3] * ZH[i][0] - ZH[2][4] * ZH[i][1] -
                      ZH[2][0] * ZH[i][3] + ZH[2][1] * ZH[i][4])) /
                    2.;
    }
    coup61 = -0.25 * (I *
                      (-4 * CTW * g1 * g2 * STW +
                       (g1 * g1) * (-1. + (CTW * CTW) - (STW * STW)) +
                       (g2 * g2) * (-1. - (CTW * CTW) + (STW * STW))) *
                      (vd * ZH[2][0] + vu * ZH[2][1]));
    for (size_t i = 0; i < 6; i++) {
        coup62[i] = ((CTW * g2 + g1 * STW) *
                     (ZH[3][3] * ZH[i][0] - ZH[3][4] * ZH[i][1] -
                      ZH[3][0] * ZH[i][3] + ZH[3][1] * ZH[i][4])) /
                    2.;
    }
    coup63 = -0.25 * (I *
                      (-4 * CTW * g1 * g2 * STW +
                       (g1 * g1) * (-1. + (CTW * CTW) - (STW * STW)) +
                       (g2 * g2) * (-1. - (CTW * CTW) + (STW * STW))) *
                      (vd * ZH[3][0] + vu * ZH[3][1]));
    for (size_t i = 0; i < 6; i++) {
        coup64[i] = ((CTW * g2 + g1 * STW) *
                     (ZH[4][3] * ZH[i][0] - ZH[4][4] * ZH[i][1] -
                      ZH[4][0] * ZH[i][3] + ZH[4][1] * ZH[i][4])) /
                    2.;
    }
    coup65 = -0.25 * (I *
                      (-4 * CTW * g1 * g2 * STW +
                       (g1 * g1) * (-1. + (CTW * CTW) - (STW * STW)) +
                       (g2 * g2) * (-1. - (CTW * CTW) + (STW * STW))) *
                      (vd * ZH[4][0] + vu * ZH[4][1]));
    for (size_t i = 0; i < 6; i++) {
        coup66[i] = ((CTW * g2 + g1 * STW) *
                     (ZH[5][3] * ZH[i][0] - ZH[5][4] * ZH[i][1] -
                      ZH[5][0] * ZH[i][3] + ZH[5][1] * ZH[i][4])) /
                    2.;
    }
    coup67 = -0.25 * (I *
                      (-4 * CTW * g1 * g2 * STW +
                       (g1 * g1) * (-1. + (CTW * CTW) - (STW * STW)) +
                       (g2 * g2) * (-1. - (CTW * CTW) + (STW * STW))) *
                      (vd * ZH[5][0] + vu * ZH[5][1]));
    for (size_t i = 0; i < 6; i++) {
        coup68[i] = -0.5 * (g2 * I *
                            (std::conj(ZP[0][0]) * (ZH[i][0] - I * ZH[i][3]) -
                             std::conj(ZP[0][1]) * (ZH[i][1] + I * ZH[i][4])));
    }
    coup69 = (g1 * g2 * I * STW *
              (vd * std::conj(ZP[0][0]) - vu * std::conj(ZP[0][1]))) /
             2.;
    for (size_t i = 0; i < 2; i++) {
        coup70[i] = -(g2 * I * std::conj(ZN[0][1]) * UP[i][0]) +
                    (g2 * I * std::conj(ZN[0][3]) * UP[i][1]) / sqrt(2);
    }
    for (size_t i = 0; i < 2; i++) {
        coup71[i] = -0.5 * (g2 * I *
                            (2 * std::conj(UM[i][0]) * ZN[0][1] +
                             sqrt(2) * std::conj(UM[i][1]) * ZN[0][2]));
    }
    for (size_t i = 0; i < 2; i++) {
        coup72[i] = (g2 * I *
                     (2 * std::conj(ZN[0][1]) * UP[i][0] -
                      sqrt(2) * std::conj(ZN[0][3]) * UP[i][1])) /
                    2.;
    }
    for (size_t i = 0; i < 2; i++) {
        coup73[i] = (g2 * I *
                     (2 * std::conj(UM[i][0]) * ZN[0][1] +
                      sqrt(2) * std::conj(UM[i][1]) * ZN[0][2])) /
                    2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup74[i] = -0.5 * (g2 * I *
                            (std::conj(ZP[1][0]) * (ZH[i][0] - I * ZH[i][3]) -
                             std::conj(ZP[1][1]) * (ZH[i][1] + I * ZH[i][4])));
    }
    coup75 = (g1 * g2 * I * STW *
              (vd * std::conj(ZP[1][0]) - vu * std::conj(ZP[1][1]))) /
             2.;
    for (size_t i = 0; i < 6; i++) {
        coup76[i] = -0.25 * (I *
                             (-4 * CTW * g1 * g2 * STW +
                              (g1 * g1) * (-1. + (CTW * CTW) - (STW * STW)) +
                              (g2 * g2) * (-1. - (CTW * CTW) + (STW * STW))) *
                             (vd * ZH[i][0] + vu * ZH[i][1]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup77[i] = (I * (g2 * g2) * (vd * ZH[i][0] + vu * ZH[i][1])) / 2.;
    }
    for (size_t i = 0; i < 2; i++) {
        coup78[i] = -0.5 * (g2 * I *
                            (2 * std::conj(ZN[0][1]) * UM[i][0] +
                             sqrt(2) * std::conj(ZN[0][2]) * UM[i][1]));
    }
    for (size_t i = 0; i < 2; i++) {
        coup79[i] = -(g2 * I * std::conj(UP[i][0]) * ZN[0][1]) +
                    (g2 * I * std::conj(UP[i][1]) * ZN[0][3]) / sqrt(2);
    }
    for (size_t i = 0; i < 2; i++) {
        coup80[i] = (g2 * I *
                     (2 * std::conj(ZN[0][1]) * UM[i][0] +
                      sqrt(2) * std::conj(ZN[0][2]) * UM[i][1])) /
                    2.;
    }
    for (size_t i = 0; i < 2; i++) {
        coup81[i] = (g2 * I *
                     (2 * std::conj(UP[i][0]) * ZN[0][1] -
                      sqrt(2) * std::conj(UP[i][1]) * ZN[0][3])) /
                    2.;
    }
    coup82 = -0.5 * (I * (CTW * g2 + g1 * STW));
    for (size_t i = 0; i < 3; i++) {
        coup83[i] =
            (I * std::conj(ZV[i][0]) * (g1 * ZN[0][0] - g2 * ZN[0][1])) /
            sqrt(2);
    }
    for (size_t i = 0; i < 3; i++) {
        coup84[i] = (I * (g1 * std::conj(ZN[0][0]) - g2 * std::conj(ZN[0][1])) *
                     ZV[i][0]) /
                    sqrt(2);
    }
    for (size_t i = 0; i < 3; i++) {
        coup85[i] =
            (I * std::conj(ZV[i][1]) * (g1 * ZN[0][0] - g2 * ZN[0][1])) /
            sqrt(2);
    }
    for (size_t i = 0; i < 3; i++) {
        coup86[i] = (I * (g1 * std::conj(ZN[0][0]) - g2 * std::conj(ZN[0][1])) *
                     ZV[i][1]) /
                    sqrt(2);
    }
    for (size_t i = 0; i < 3; i++) {
        coup87[i] =
            (I * std::conj(ZV[i][2]) * (g1 * ZN[0][0] - g2 * ZN[0][1])) /
            sqrt(2);
    }
    for (size_t i = 0; i < 3; i++) {
        coup88[i] = (I * (g1 * std::conj(ZN[0][0]) - g2 * std::conj(ZN[0][1])) *
                     ZV[i][2]) /
                    sqrt(2);
    }
    for (size_t i = 0; i < 6; i++) {
        coup89[i] =
            ((std::conj(ZEL[0][0]) * (std::conj(ZER[0][0]) * Ye[0][0] +
                                      std::conj(ZER[0][1]) * Ye[1][0] +
                                      std::conj(ZER[0][2]) * Ye[2][0]) +
              std::conj(ZEL[0][1]) * (std::conj(ZER[0][0]) * Ye[0][1] +
                                      std::conj(ZER[0][1]) * Ye[1][1] +
                                      std::conj(ZER[0][2]) * Ye[2][1]) +
              std::conj(ZEL[0][2]) * (std::conj(ZER[0][0]) * Ye[0][2] +
                                      std::conj(ZER[0][1]) * Ye[1][2] +
                                      std::conj(ZER[0][2]) * Ye[2][2])) *
             (-(I * ZH[i][0]) + ZH[i][3])) /
            sqrt(2);
    }
    for (size_t i = 0; i < 6; i++) {
        coup90[i] = -((I *
                       (std::conj(Ye[0][0]) * ZEL[0][0] * ZER[0][0] +
                        std::conj(Ye[0][1]) * ZEL[0][1] * ZER[0][0] +
                        std::conj(Ye[0][2]) * ZEL[0][2] * ZER[0][0] +
                        std::conj(Ye[1][0]) * ZEL[0][0] * ZER[0][1] +
                        std::conj(Ye[1][1]) * ZEL[0][1] * ZER[0][1] +
                        std::conj(Ye[1][2]) * ZEL[0][2] * ZER[0][1] +
                        std::conj(Ye[2][0]) * ZEL[0][0] * ZER[0][2] +
                        std::conj(Ye[2][1]) * ZEL[0][1] * ZER[0][2] +
                        std::conj(Ye[2][2]) * ZEL[0][2] * ZER[0][2]) *
                       (ZH[i][0] - I * ZH[i][3])) /
                      sqrt(2));
    }
    coup91 = -(g1 * I * STW);
    coup92 = (I * (CTW * g2 - g1 * STW)) / 2.;
    for (size_t i = 0; i < 6; i++) {
        coup93[i] =
            -(I *
              (sqrt(2) * g1 *
                   (std::conj(ZE[i][3]) * std::conj(ZER[0][0]) +
                    std::conj(ZE[i][4]) * std::conj(ZER[0][1]) +
                    std::conj(ZE[i][5]) * std::conj(ZER[0][2])) *
                   std::conj(ZN[0][0]) +
               std::conj(ZN[0][2]) *
                   (std::conj(ZE[i][0]) * (std::conj(ZER[0][0]) * Ye[0][0] +
                                           std::conj(ZER[0][1]) * Ye[1][0] +
                                           std::conj(ZER[0][2]) * Ye[2][0]) +
                    std::conj(ZE[i][1]) * (std::conj(ZER[0][0]) * Ye[0][1] +
                                           std::conj(ZER[0][1]) * Ye[1][1] +
                                           std::conj(ZER[0][2]) * Ye[2][1]) +
                    std::conj(ZE[i][2]) * (std::conj(ZER[0][0]) * Ye[0][2] +
                                           std::conj(ZER[0][1]) * Ye[1][2] +
                                           std::conj(ZER[0][2]) * Ye[2][2]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup94[i] = (I * (sqrt(2) * g1 *
                              (std::conj(ZE[i][0]) * ZEL[0][0] +
                               std::conj(ZE[i][1]) * ZEL[0][1] +
                               std::conj(ZE[i][2]) * ZEL[0][2]) *
                              ZN[0][0] +
                          sqrt(2) * g2 *
                              (std::conj(ZE[i][0]) * ZEL[0][0] +
                               std::conj(ZE[i][1]) * ZEL[0][1] +
                               std::conj(ZE[i][2]) * ZEL[0][2]) *
                              ZN[0][1] -
                          2 *
                              ((std::conj(Ye[0][0]) * std::conj(ZE[i][3]) +
                                std::conj(Ye[1][0]) * std::conj(ZE[i][4]) +
                                std::conj(Ye[2][0]) * std::conj(ZE[i][5])) *
                                   ZEL[0][0] +
                               (std::conj(Ye[0][1]) * std::conj(ZE[i][3]) +
                                std::conj(Ye[1][1]) * std::conj(ZE[i][4]) +
                                std::conj(Ye[2][1]) * std::conj(ZE[i][5])) *
                                   ZEL[0][1] +
                               (std::conj(Ye[0][2]) * std::conj(ZE[i][3]) +
                                std::conj(Ye[1][2]) * std::conj(ZE[i][4]) +
                                std::conj(Ye[2][2]) * std::conj(ZE[i][5])) *
                                   ZEL[0][2]) *
                              ZN[0][2])) /
                    2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup95[i] = (I * (sqrt(2) * g1 * std::conj(ZN[0][0]) *
                              (std::conj(ZEL[0][0]) * ZE[i][0] +
                               std::conj(ZEL[0][1]) * ZE[i][1] +
                               std::conj(ZEL[0][2]) * ZE[i][2]) +
                          sqrt(2) * g2 * std::conj(ZN[0][1]) *
                              (std::conj(ZEL[0][0]) * ZE[i][0] +
                               std::conj(ZEL[0][1]) * ZE[i][1] +
                               std::conj(ZEL[0][2]) * ZE[i][2]) -
                          2 * std::conj(ZN[0][2]) *
                              (std::conj(ZEL[0][0]) *
                                   (Ye[0][0] * ZE[i][3] + Ye[1][0] * ZE[i][4] +
                                    Ye[2][0] * ZE[i][5]) +
                               std::conj(ZEL[0][1]) *
                                   (Ye[0][1] * ZE[i][3] + Ye[1][1] * ZE[i][4] +
                                    Ye[2][1] * ZE[i][5]) +
                               std::conj(ZEL[0][2]) *
                                   (Ye[0][2] * ZE[i][3] + Ye[1][2] * ZE[i][4] +
                                    Ye[2][2] * ZE[i][5])))) /
                    2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup96[i] = -(I * (sqrt(2) * g1 *
                               (ZE[i][3] * ZER[0][0] + ZE[i][4] * ZER[0][1] +
                                ZE[i][5] * ZER[0][2]) *
                               ZN[0][0] +
                           (ZE[i][0] * (std::conj(Ye[0][0]) * ZER[0][0] +
                                        std::conj(Ye[1][0]) * ZER[0][1] +
                                        std::conj(Ye[2][0]) * ZER[0][2]) +
                            ZE[i][1] * (std::conj(Ye[0][1]) * ZER[0][0] +
                                        std::conj(Ye[1][1]) * ZER[0][1] +
                                        std::conj(Ye[2][1]) * ZER[0][2]) +
                            ZE[i][2] * (std::conj(Ye[0][2]) * ZER[0][0] +
                                        std::conj(Ye[1][2]) * ZER[0][1] +
                                        std::conj(Ye[2][2]) * ZER[0][2])) *
                               ZN[0][2]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup97[i] =
            ((std::conj(ZEL[1][0]) * (std::conj(ZER[1][0]) * Ye[0][0] +
                                      std::conj(ZER[1][1]) * Ye[1][0] +
                                      std::conj(ZER[1][2]) * Ye[2][0]) +
              std::conj(ZEL[1][1]) * (std::conj(ZER[1][0]) * Ye[0][1] +
                                      std::conj(ZER[1][1]) * Ye[1][1] +
                                      std::conj(ZER[1][2]) * Ye[2][1]) +
              std::conj(ZEL[1][2]) * (std::conj(ZER[1][0]) * Ye[0][2] +
                                      std::conj(ZER[1][1]) * Ye[1][2] +
                                      std::conj(ZER[1][2]) * Ye[2][2])) *
             (-(I * ZH[i][0]) + ZH[i][3])) /
            sqrt(2);
    }
    for (size_t i = 0; i < 6; i++) {
        coup98[i] = -((I *
                       (std::conj(Ye[0][0]) * ZEL[1][0] * ZER[1][0] +
                        std::conj(Ye[0][1]) * ZEL[1][1] * ZER[1][0] +
                        std::conj(Ye[0][2]) * ZEL[1][2] * ZER[1][0] +
                        std::conj(Ye[1][0]) * ZEL[1][0] * ZER[1][1] +
                        std::conj(Ye[1][1]) * ZEL[1][1] * ZER[1][1] +
                        std::conj(Ye[1][2]) * ZEL[1][2] * ZER[1][1] +
                        std::conj(Ye[2][0]) * ZEL[1][0] * ZER[1][2] +
                        std::conj(Ye[2][1]) * ZEL[1][1] * ZER[1][2] +
                        std::conj(Ye[2][2]) * ZEL[1][2] * ZER[1][2]) *
                       (ZH[i][0] - I * ZH[i][3])) /
                      sqrt(2));
    }
    for (size_t i = 0; i < 6; i++) {
        coup99[i] =
            -(I *
              (sqrt(2) * g1 *
                   (std::conj(ZE[i][3]) * std::conj(ZER[1][0]) +
                    std::conj(ZE[i][4]) * std::conj(ZER[1][1]) +
                    std::conj(ZE[i][5]) * std::conj(ZER[1][2])) *
                   std::conj(ZN[0][0]) +
               std::conj(ZN[0][2]) *
                   (std::conj(ZE[i][0]) * (std::conj(ZER[1][0]) * Ye[0][0] +
                                           std::conj(ZER[1][1]) * Ye[1][0] +
                                           std::conj(ZER[1][2]) * Ye[2][0]) +
                    std::conj(ZE[i][1]) * (std::conj(ZER[1][0]) * Ye[0][1] +
                                           std::conj(ZER[1][1]) * Ye[1][1] +
                                           std::conj(ZER[1][2]) * Ye[2][1]) +
                    std::conj(ZE[i][2]) * (std::conj(ZER[1][0]) * Ye[0][2] +
                                           std::conj(ZER[1][1]) * Ye[1][2] +
                                           std::conj(ZER[1][2]) * Ye[2][2]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup100[i] = (I * (sqrt(2) * g1 *
                               (std::conj(ZE[i][0]) * ZEL[1][0] +
                                std::conj(ZE[i][1]) * ZEL[1][1] +
                                std::conj(ZE[i][2]) * ZEL[1][2]) *
                               ZN[0][0] +
                           sqrt(2) * g2 *
                               (std::conj(ZE[i][0]) * ZEL[1][0] +
                                std::conj(ZE[i][1]) * ZEL[1][1] +
                                std::conj(ZE[i][2]) * ZEL[1][2]) *
                               ZN[0][1] -
                           2 *
                               ((std::conj(Ye[0][0]) * std::conj(ZE[i][3]) +
                                 std::conj(Ye[1][0]) * std::conj(ZE[i][4]) +
                                 std::conj(Ye[2][0]) * std::conj(ZE[i][5])) *
                                    ZEL[1][0] +
                                (std::conj(Ye[0][1]) * std::conj(ZE[i][3]) +
                                 std::conj(Ye[1][1]) * std::conj(ZE[i][4]) +
                                 std::conj(Ye[2][1]) * std::conj(ZE[i][5])) *
                                    ZEL[1][1] +
                                (std::conj(Ye[0][2]) * std::conj(ZE[i][3]) +
                                 std::conj(Ye[1][2]) * std::conj(ZE[i][4]) +
                                 std::conj(Ye[2][2]) * std::conj(ZE[i][5])) *
                                    ZEL[1][2]) *
                               ZN[0][2])) /
                     2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup101[i] = (I * (sqrt(2) * g1 * std::conj(ZN[0][0]) *
                               (std::conj(ZEL[1][0]) * ZE[i][0] +
                                std::conj(ZEL[1][1]) * ZE[i][1] +
                                std::conj(ZEL[1][2]) * ZE[i][2]) +
                           sqrt(2) * g2 * std::conj(ZN[0][1]) *
                               (std::conj(ZEL[1][0]) * ZE[i][0] +
                                std::conj(ZEL[1][1]) * ZE[i][1] +
                                std::conj(ZEL[1][2]) * ZE[i][2]) -
                           2 * std::conj(ZN[0][2]) *
                               (std::conj(ZEL[1][0]) *
                                    (Ye[0][0] * ZE[i][3] + Ye[1][0] * ZE[i][4] +
                                     Ye[2][0] * ZE[i][5]) +
                                std::conj(ZEL[1][1]) *
                                    (Ye[0][1] * ZE[i][3] + Ye[1][1] * ZE[i][4] +
                                     Ye[2][1] * ZE[i][5]) +
                                std::conj(ZEL[1][2]) *
                                    (Ye[0][2] * ZE[i][3] + Ye[1][2] * ZE[i][4] +
                                     Ye[2][2] * ZE[i][5])))) /
                     2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup102[i] = -(I * (sqrt(2) * g1 *
                                (ZE[i][3] * ZER[1][0] + ZE[i][4] * ZER[1][1] +
                                 ZE[i][5] * ZER[1][2]) *
                                ZN[0][0] +
                            (ZE[i][0] * (std::conj(Ye[0][0]) * ZER[1][0] +
                                         std::conj(Ye[1][0]) * ZER[1][1] +
                                         std::conj(Ye[2][0]) * ZER[1][2]) +
                             ZE[i][1] * (std::conj(Ye[0][1]) * ZER[1][0] +
                                         std::conj(Ye[1][1]) * ZER[1][1] +
                                         std::conj(Ye[2][1]) * ZER[1][2]) +
                             ZE[i][2] * (std::conj(Ye[0][2]) * ZER[1][0] +
                                         std::conj(Ye[1][2]) * ZER[1][1] +
                                         std::conj(Ye[2][2]) * ZER[1][2])) *
                                ZN[0][2]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup103[i] =
            ((std::conj(ZEL[2][0]) * (std::conj(ZER[2][0]) * Ye[0][0] +
                                      std::conj(ZER[2][1]) * Ye[1][0] +
                                      std::conj(ZER[2][2]) * Ye[2][0]) +
              std::conj(ZEL[2][1]) * (std::conj(ZER[2][0]) * Ye[0][1] +
                                      std::conj(ZER[2][1]) * Ye[1][1] +
                                      std::conj(ZER[2][2]) * Ye[2][1]) +
              std::conj(ZEL[2][2]) * (std::conj(ZER[2][0]) * Ye[0][2] +
                                      std::conj(ZER[2][1]) * Ye[1][2] +
                                      std::conj(ZER[2][2]) * Ye[2][2])) *
             (-(I * ZH[i][0]) + ZH[i][3])) /
            sqrt(2);
    }
    for (size_t i = 0; i < 6; i++) {
        coup104[i] = -((I *
                        (std::conj(Ye[0][0]) * ZEL[2][0] * ZER[2][0] +
                         std::conj(Ye[0][1]) * ZEL[2][1] * ZER[2][0] +
                         std::conj(Ye[0][2]) * ZEL[2][2] * ZER[2][0] +
                         std::conj(Ye[1][0]) * ZEL[2][0] * ZER[2][1] +
                         std::conj(Ye[1][1]) * ZEL[2][1] * ZER[2][1] +
                         std::conj(Ye[1][2]) * ZEL[2][2] * ZER[2][1] +
                         std::conj(Ye[2][0]) * ZEL[2][0] * ZER[2][2] +
                         std::conj(Ye[2][1]) * ZEL[2][1] * ZER[2][2] +
                         std::conj(Ye[2][2]) * ZEL[2][2] * ZER[2][2]) *
                        (ZH[i][0] - I * ZH[i][3])) /
                       sqrt(2));
    }
    for (size_t i = 0; i < 6; i++) {
        coup105[i] =
            -(I *
              (sqrt(2) * g1 *
                   (std::conj(ZE[i][3]) * std::conj(ZER[2][0]) +
                    std::conj(ZE[i][4]) * std::conj(ZER[2][1]) +
                    std::conj(ZE[i][5]) * std::conj(ZER[2][2])) *
                   std::conj(ZN[0][0]) +
               std::conj(ZN[0][2]) *
                   (std::conj(ZE[i][0]) * (std::conj(ZER[2][0]) * Ye[0][0] +
                                           std::conj(ZER[2][1]) * Ye[1][0] +
                                           std::conj(ZER[2][2]) * Ye[2][0]) +
                    std::conj(ZE[i][1]) * (std::conj(ZER[2][0]) * Ye[0][1] +
                                           std::conj(ZER[2][1]) * Ye[1][1] +
                                           std::conj(ZER[2][2]) * Ye[2][1]) +
                    std::conj(ZE[i][2]) * (std::conj(ZER[2][0]) * Ye[0][2] +
                                           std::conj(ZER[2][1]) * Ye[1][2] +
                                           std::conj(ZER[2][2]) * Ye[2][2]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup106[i] = (I * (sqrt(2) * g1 *
                               (std::conj(ZE[i][0]) * ZEL[2][0] +
                                std::conj(ZE[i][1]) * ZEL[2][1] +
                                std::conj(ZE[i][2]) * ZEL[2][2]) *
                               ZN[0][0] +
                           sqrt(2) * g2 *
                               (std::conj(ZE[i][0]) * ZEL[2][0] +
                                std::conj(ZE[i][1]) * ZEL[2][1] +
                                std::conj(ZE[i][2]) * ZEL[2][2]) *
                               ZN[0][1] -
                           2 *
                               ((std::conj(Ye[0][0]) * std::conj(ZE[i][3]) +
                                 std::conj(Ye[1][0]) * std::conj(ZE[i][4]) +
                                 std::conj(Ye[2][0]) * std::conj(ZE[i][5])) *
                                    ZEL[2][0] +
                                (std::conj(Ye[0][1]) * std::conj(ZE[i][3]) +
                                 std::conj(Ye[1][1]) * std::conj(ZE[i][4]) +
                                 std::conj(Ye[2][1]) * std::conj(ZE[i][5])) *
                                    ZEL[2][1] +
                                (std::conj(Ye[0][2]) * std::conj(ZE[i][3]) +
                                 std::conj(Ye[1][2]) * std::conj(ZE[i][4]) +
                                 std::conj(Ye[2][2]) * std::conj(ZE[i][5])) *
                                    ZEL[2][2]) *
                               ZN[0][2])) /
                     2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup107[i] = (I * (sqrt(2) * g1 * std::conj(ZN[0][0]) *
                               (std::conj(ZEL[2][0]) * ZE[i][0] +
                                std::conj(ZEL[2][1]) * ZE[i][1] +
                                std::conj(ZEL[2][2]) * ZE[i][2]) +
                           sqrt(2) * g2 * std::conj(ZN[0][1]) *
                               (std::conj(ZEL[2][0]) * ZE[i][0] +
                                std::conj(ZEL[2][1]) * ZE[i][1] +
                                std::conj(ZEL[2][2]) * ZE[i][2]) -
                           2 * std::conj(ZN[0][2]) *
                               (std::conj(ZEL[2][0]) *
                                    (Ye[0][0] * ZE[i][3] + Ye[1][0] * ZE[i][4] +
                                     Ye[2][0] * ZE[i][5]) +
                                std::conj(ZEL[2][1]) *
                                    (Ye[0][1] * ZE[i][3] + Ye[1][1] * ZE[i][4] +
                                     Ye[2][1] * ZE[i][5]) +
                                std::conj(ZEL[2][2]) *
                                    (Ye[0][2] * ZE[i][3] + Ye[1][2] * ZE[i][4] +
                                     Ye[2][2] * ZE[i][5])))) /
                     2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup108[i] = -(I * (sqrt(2) * g1 *
                                (ZE[i][3] * ZER[2][0] + ZE[i][4] * ZER[2][1] +
                                 ZE[i][5] * ZER[2][2]) *
                                ZN[0][0] +
                            (ZE[i][0] * (std::conj(Ye[0][0]) * ZER[2][0] +
                                         std::conj(Ye[1][0]) * ZER[2][1] +
                                         std::conj(Ye[2][0]) * ZER[2][2]) +
                             ZE[i][1] * (std::conj(Ye[0][1]) * ZER[2][0] +
                                         std::conj(Ye[1][1]) * ZER[2][1] +
                                         std::conj(Ye[2][1]) * ZER[2][2]) +
                             ZE[i][2] * (std::conj(Ye[0][2]) * ZER[2][0] +
                                         std::conj(Ye[1][2]) * ZER[2][1] +
                                         std::conj(Ye[2][2]) * ZER[2][2])) *
                                ZN[0][2]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup109[i] =
            (std::exp(eta * I) * PhiUL * std::conj(PhiUR) *
             (std::conj(ZUL[0][0]) * (std::conj(ZUR[0][0]) * Yu[0][0] +
                                      std::conj(ZUR[0][1]) * Yu[1][0] +
                                      std::conj(ZUR[0][2]) * Yu[2][0]) +
              std::conj(ZUL[0][1]) * (std::conj(ZUR[0][0]) * Yu[0][1] +
                                      std::conj(ZUR[0][1]) * Yu[1][1] +
                                      std::conj(ZUR[0][2]) * Yu[2][1]) +
              std::conj(ZUL[0][2]) * (std::conj(ZUR[0][0]) * Yu[0][2] +
                                      std::conj(ZUR[0][1]) * Yu[1][2] +
                                      std::conj(ZUR[0][2]) * Yu[2][2])) *
             (-(I * ZH[i][1]) + ZH[i][4])) /
            sqrt(2);
    }
    for (size_t i = 0; i < 6; i++) {
        coup110[i] =
            -((I * PhiUR * std::conj(PhiUL) * (ZH[i][1] - I * ZH[i][4]) *
               (std::conj(Yu[0][0]) * ZUL[0][0] * ZUR[0][0] +
                std::conj(Yu[0][1]) * ZUL[0][1] * ZUR[0][0] +
                std::conj(Yu[0][2]) * ZUL[0][2] * ZUR[0][0] +
                std::conj(Yu[1][0]) * ZUL[0][0] * ZUR[0][1] +
                std::conj(Yu[1][1]) * ZUL[0][1] * ZUR[0][1] +
                std::conj(Yu[1][2]) * ZUL[0][2] * ZUR[0][1] +
                std::conj(Yu[2][0]) * ZUL[0][0] * ZUR[0][2] +
                std::conj(Yu[2][1]) * ZUL[0][1] * ZUR[0][2] +
                std::conj(Yu[2][2]) * ZUL[0][2] * ZUR[0][2])) /
              (sqrt(2) * std::exp(eta * I)));
    }
    coup111 = (2 * g1 * I * PhiUR * STW * std::conj(PhiUR)) / 3.;
    coup112 = -0.16666666666666666 *
              (I * PhiUL * (3 * CTW * g2 - g1 * STW) * std::conj(PhiUL));
    for (size_t i = 0; i < 6; i++) {
        coup113[i] =
            (I * std::conj(PhiUR) *
             (2 * sqrt(2) * g1 * std::conj(ZN[0][0]) *
                  (std::conj(ZU[i][3]) * std::conj(ZUR[0][0]) +
                   std::conj(ZU[i][4]) * std::conj(ZUR[0][1]) +
                   std::conj(ZU[i][5]) * std::conj(ZUR[0][2])) -
              3 * std::conj(ZN[0][3]) *
                  (std::conj(ZU[i][0]) * (std::conj(ZUR[0][0]) * Yu[0][0] +
                                          std::conj(ZUR[0][1]) * Yu[1][0] +
                                          std::conj(ZUR[0][2]) * Yu[2][0]) +
                   std::conj(ZU[i][1]) * (std::conj(ZUR[0][0]) * Yu[0][1] +
                                          std::conj(ZUR[0][1]) * Yu[1][1] +
                                          std::conj(ZUR[0][2]) * Yu[2][1]) +
                   std::conj(ZU[i][2]) * (std::conj(ZUR[0][0]) * Yu[0][2] +
                                          std::conj(ZUR[0][1]) * Yu[1][2] +
                                          std::conj(ZUR[0][2]) * Yu[2][2])))) /
            3.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup114[i] = -0.16666666666666666 *
                     (I * std::conj(PhiUL) *
                      (sqrt(2) * g1 * ZN[0][0] *
                           (std::conj(ZU[i][0]) * ZUL[0][0] +
                            std::conj(ZU[i][1]) * ZUL[0][1] +
                            std::conj(ZU[i][2]) * ZUL[0][2]) +
                       3 * sqrt(2) * g2 * ZN[0][1] *
                           (std::conj(ZU[i][0]) * ZUL[0][0] +
                            std::conj(ZU[i][1]) * ZUL[0][1] +
                            std::conj(ZU[i][2]) * ZUL[0][2]) +
                       6 * ZN[0][3] *
                           ((std::conj(Yu[0][0]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][0]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][0]) * std::conj(ZU[i][5])) *
                                ZUL[0][0] +
                            (std::conj(Yu[0][1]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][1]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][1]) * std::conj(ZU[i][5])) *
                                ZUL[0][1] +
                            (std::conj(Yu[0][2]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][2]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][2]) * std::conj(ZU[i][5])) *
                                ZUL[0][2])));
    }
    for (size_t i = 0; i < 6; i++) {
        coup115[i] = -0.16666666666666666 *
                     (I * PhiUL *
                      (sqrt(2) * g1 * std::conj(ZN[0][0]) *
                           (std::conj(ZUL[0][0]) * ZU[i][0] +
                            std::conj(ZUL[0][1]) * ZU[i][1] +
                            std::conj(ZUL[0][2]) * ZU[i][2]) +
                       3 * sqrt(2) * g2 * std::conj(ZN[0][1]) *
                           (std::conj(ZUL[0][0]) * ZU[i][0] +
                            std::conj(ZUL[0][1]) * ZU[i][1] +
                            std::conj(ZUL[0][2]) * ZU[i][2]) +
                       6 * std::conj(ZN[0][3]) *
                           (std::conj(ZUL[0][0]) *
                                (Yu[0][0] * ZU[i][3] + Yu[1][0] * ZU[i][4] +
                                 Yu[2][0] * ZU[i][5]) +
                            std::conj(ZUL[0][1]) *
                                (Yu[0][1] * ZU[i][3] + Yu[1][1] * ZU[i][4] +
                                 Yu[2][1] * ZU[i][5]) +
                            std::conj(ZUL[0][2]) *
                                (Yu[0][2] * ZU[i][3] + Yu[1][2] * ZU[i][4] +
                                 Yu[2][2] * ZU[i][5]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup116[i] = (I * PhiUR *
                      (2 * sqrt(2) * g1 * ZN[0][0] *
                           (ZU[i][3] * ZUR[0][0] + ZU[i][4] * ZUR[0][1] +
                            ZU[i][5] * ZUR[0][2]) -
                       3 * ZN[0][3] *
                           (ZU[i][0] * (std::conj(Yu[0][0]) * ZUR[0][0] +
                                        std::conj(Yu[1][0]) * ZUR[0][1] +
                                        std::conj(Yu[2][0]) * ZUR[0][2]) +
                            ZU[i][1] * (std::conj(Yu[0][1]) * ZUR[0][0] +
                                        std::conj(Yu[1][1]) * ZUR[0][1] +
                                        std::conj(Yu[2][1]) * ZUR[0][2]) +
                            ZU[i][2] * (std::conj(Yu[0][2]) * ZUR[0][0] +
                                        std::conj(Yu[1][2]) * ZUR[0][1] +
                                        std::conj(Yu[2][2]) * ZUR[0][2])))) /
                     3.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup117[i] =
            (std::exp(eta * I) * PhiUL * std::conj(PhiUR) *
             (std::conj(ZUL[1][0]) * (std::conj(ZUR[1][0]) * Yu[0][0] +
                                      std::conj(ZUR[1][1]) * Yu[1][0] +
                                      std::conj(ZUR[1][2]) * Yu[2][0]) +
              std::conj(ZUL[1][1]) * (std::conj(ZUR[1][0]) * Yu[0][1] +
                                      std::conj(ZUR[1][1]) * Yu[1][1] +
                                      std::conj(ZUR[1][2]) * Yu[2][1]) +
              std::conj(ZUL[1][2]) * (std::conj(ZUR[1][0]) * Yu[0][2] +
                                      std::conj(ZUR[1][1]) * Yu[1][2] +
                                      std::conj(ZUR[1][2]) * Yu[2][2])) *
             (-(I * ZH[i][1]) + ZH[i][4])) /
            sqrt(2);
    }
    for (size_t i = 0; i < 6; i++) {
        coup118[i] =
            -((I * PhiUR * std::conj(PhiUL) * (ZH[i][1] - I * ZH[i][4]) *
               (std::conj(Yu[0][0]) * ZUL[1][0] * ZUR[1][0] +
                std::conj(Yu[0][1]) * ZUL[1][1] * ZUR[1][0] +
                std::conj(Yu[0][2]) * ZUL[1][2] * ZUR[1][0] +
                std::conj(Yu[1][0]) * ZUL[1][0] * ZUR[1][1] +
                std::conj(Yu[1][1]) * ZUL[1][1] * ZUR[1][1] +
                std::conj(Yu[1][2]) * ZUL[1][2] * ZUR[1][1] +
                std::conj(Yu[2][0]) * ZUL[1][0] * ZUR[1][2] +
                std::conj(Yu[2][1]) * ZUL[1][1] * ZUR[1][2] +
                std::conj(Yu[2][2]) * ZUL[1][2] * ZUR[1][2])) /
              (sqrt(2) * std::exp(eta * I)));
    }
    for (size_t i = 0; i < 6; i++) {
        coup119[i] =
            (I * std::conj(PhiUR) *
             (2 * sqrt(2) * g1 * std::conj(ZN[0][0]) *
                  (std::conj(ZU[i][3]) * std::conj(ZUR[1][0]) +
                   std::conj(ZU[i][4]) * std::conj(ZUR[1][1]) +
                   std::conj(ZU[i][5]) * std::conj(ZUR[1][2])) -
              3 * std::conj(ZN[0][3]) *
                  (std::conj(ZU[i][0]) * (std::conj(ZUR[1][0]) * Yu[0][0] +
                                          std::conj(ZUR[1][1]) * Yu[1][0] +
                                          std::conj(ZUR[1][2]) * Yu[2][0]) +
                   std::conj(ZU[i][1]) * (std::conj(ZUR[1][0]) * Yu[0][1] +
                                          std::conj(ZUR[1][1]) * Yu[1][1] +
                                          std::conj(ZUR[1][2]) * Yu[2][1]) +
                   std::conj(ZU[i][2]) * (std::conj(ZUR[1][0]) * Yu[0][2] +
                                          std::conj(ZUR[1][1]) * Yu[1][2] +
                                          std::conj(ZUR[1][2]) * Yu[2][2])))) /
            3.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup120[i] = -0.16666666666666666 *
                     (I * std::conj(PhiUL) *
                      (sqrt(2) * g1 * ZN[0][0] *
                           (std::conj(ZU[i][0]) * ZUL[1][0] +
                            std::conj(ZU[i][1]) * ZUL[1][1] +
                            std::conj(ZU[i][2]) * ZUL[1][2]) +
                       3 * sqrt(2) * g2 * ZN[0][1] *
                           (std::conj(ZU[i][0]) * ZUL[1][0] +
                            std::conj(ZU[i][1]) * ZUL[1][1] +
                            std::conj(ZU[i][2]) * ZUL[1][2]) +
                       6 * ZN[0][3] *
                           ((std::conj(Yu[0][0]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][0]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][0]) * std::conj(ZU[i][5])) *
                                ZUL[1][0] +
                            (std::conj(Yu[0][1]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][1]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][1]) * std::conj(ZU[i][5])) *
                                ZUL[1][1] +
                            (std::conj(Yu[0][2]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][2]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][2]) * std::conj(ZU[i][5])) *
                                ZUL[1][2])));
    }
    for (size_t i = 0; i < 6; i++) {
        coup121[i] = -0.16666666666666666 *
                     (I * PhiUL *
                      (sqrt(2) * g1 * std::conj(ZN[0][0]) *
                           (std::conj(ZUL[1][0]) * ZU[i][0] +
                            std::conj(ZUL[1][1]) * ZU[i][1] +
                            std::conj(ZUL[1][2]) * ZU[i][2]) +
                       3 * sqrt(2) * g2 * std::conj(ZN[0][1]) *
                           (std::conj(ZUL[1][0]) * ZU[i][0] +
                            std::conj(ZUL[1][1]) * ZU[i][1] +
                            std::conj(ZUL[1][2]) * ZU[i][2]) +
                       6 * std::conj(ZN[0][3]) *
                           (std::conj(ZUL[1][0]) *
                                (Yu[0][0] * ZU[i][3] + Yu[1][0] * ZU[i][4] +
                                 Yu[2][0] * ZU[i][5]) +
                            std::conj(ZUL[1][1]) *
                                (Yu[0][1] * ZU[i][3] + Yu[1][1] * ZU[i][4] +
                                 Yu[2][1] * ZU[i][5]) +
                            std::conj(ZUL[1][2]) *
                                (Yu[0][2] * ZU[i][3] + Yu[1][2] * ZU[i][4] +
                                 Yu[2][2] * ZU[i][5]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup122[i] = (I * PhiUR *
                      (2 * sqrt(2) * g1 * ZN[0][0] *
                           (ZU[i][3] * ZUR[1][0] + ZU[i][4] * ZUR[1][1] +
                            ZU[i][5] * ZUR[1][2]) -
                       3 * ZN[0][3] *
                           (ZU[i][0] * (std::conj(Yu[0][0]) * ZUR[1][0] +
                                        std::conj(Yu[1][0]) * ZUR[1][1] +
                                        std::conj(Yu[2][0]) * ZUR[1][2]) +
                            ZU[i][1] * (std::conj(Yu[0][1]) * ZUR[1][0] +
                                        std::conj(Yu[1][1]) * ZUR[1][1] +
                                        std::conj(Yu[2][1]) * ZUR[1][2]) +
                            ZU[i][2] * (std::conj(Yu[0][2]) * ZUR[1][0] +
                                        std::conj(Yu[1][2]) * ZUR[1][1] +
                                        std::conj(Yu[2][2]) * ZUR[1][2])))) /
                     3.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup123[i] =
            (std::exp(eta * I) * PhiUL * std::conj(PhiUR) *
             (std::conj(ZUL[2][0]) * (std::conj(ZUR[2][0]) * Yu[0][0] +
                                      std::conj(ZUR[2][1]) * Yu[1][0] +
                                      std::conj(ZUR[2][2]) * Yu[2][0]) +
              std::conj(ZUL[2][1]) * (std::conj(ZUR[2][0]) * Yu[0][1] +
                                      std::conj(ZUR[2][1]) * Yu[1][1] +
                                      std::conj(ZUR[2][2]) * Yu[2][1]) +
              std::conj(ZUL[2][2]) * (std::conj(ZUR[2][0]) * Yu[0][2] +
                                      std::conj(ZUR[2][1]) * Yu[1][2] +
                                      std::conj(ZUR[2][2]) * Yu[2][2])) *
             (-(I * ZH[i][1]) + ZH[i][4])) /
            sqrt(2);
    }
    for (size_t i = 0; i < 6; i++) {
        coup124[i] =
            -((I * PhiUR * std::conj(PhiUL) * (ZH[i][1] - I * ZH[i][4]) *
               (std::conj(Yu[0][0]) * ZUL[2][0] * ZUR[2][0] +
                std::conj(Yu[0][1]) * ZUL[2][1] * ZUR[2][0] +
                std::conj(Yu[0][2]) * ZUL[2][2] * ZUR[2][0] +
                std::conj(Yu[1][0]) * ZUL[2][0] * ZUR[2][1] +
                std::conj(Yu[1][1]) * ZUL[2][1] * ZUR[2][1] +
                std::conj(Yu[1][2]) * ZUL[2][2] * ZUR[2][1] +
                std::conj(Yu[2][0]) * ZUL[2][0] * ZUR[2][2] +
                std::conj(Yu[2][1]) * ZUL[2][1] * ZUR[2][2] +
                std::conj(Yu[2][2]) * ZUL[2][2] * ZUR[2][2])) /
              (sqrt(2) * std::exp(eta * I)));
    }
    for (size_t i = 0; i < 6; i++) {
        coup125[i] =
            (I * std::conj(PhiUR) *
             (2 * sqrt(2) * g1 * std::conj(ZN[0][0]) *
                  (std::conj(ZU[i][3]) * std::conj(ZUR[2][0]) +
                   std::conj(ZU[i][4]) * std::conj(ZUR[2][1]) +
                   std::conj(ZU[i][5]) * std::conj(ZUR[2][2])) -
              3 * std::conj(ZN[0][3]) *
                  (std::conj(ZU[i][0]) * (std::conj(ZUR[2][0]) * Yu[0][0] +
                                          std::conj(ZUR[2][1]) * Yu[1][0] +
                                          std::conj(ZUR[2][2]) * Yu[2][0]) +
                   std::conj(ZU[i][1]) * (std::conj(ZUR[2][0]) * Yu[0][1] +
                                          std::conj(ZUR[2][1]) * Yu[1][1] +
                                          std::conj(ZUR[2][2]) * Yu[2][1]) +
                   std::conj(ZU[i][2]) * (std::conj(ZUR[2][0]) * Yu[0][2] +
                                          std::conj(ZUR[2][1]) * Yu[1][2] +
                                          std::conj(ZUR[2][2]) * Yu[2][2])))) /
            3.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup126[i] = -0.16666666666666666 *
                     (I * std::conj(PhiUL) *
                      (sqrt(2) * g1 * ZN[0][0] *
                           (std::conj(ZU[i][0]) * ZUL[2][0] +
                            std::conj(ZU[i][1]) * ZUL[2][1] +
                            std::conj(ZU[i][2]) * ZUL[2][2]) +
                       3 * sqrt(2) * g2 * ZN[0][1] *
                           (std::conj(ZU[i][0]) * ZUL[2][0] +
                            std::conj(ZU[i][1]) * ZUL[2][1] +
                            std::conj(ZU[i][2]) * ZUL[2][2]) +
                       6 * ZN[0][3] *
                           ((std::conj(Yu[0][0]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][0]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][0]) * std::conj(ZU[i][5])) *
                                ZUL[2][0] +
                            (std::conj(Yu[0][1]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][1]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][1]) * std::conj(ZU[i][5])) *
                                ZUL[2][1] +
                            (std::conj(Yu[0][2]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][2]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][2]) * std::conj(ZU[i][5])) *
                                ZUL[2][2])));
    }
    for (size_t i = 0; i < 6; i++) {
        coup127[i] = -0.16666666666666666 *
                     (I * PhiUL *
                      (sqrt(2) * g1 * std::conj(ZN[0][0]) *
                           (std::conj(ZUL[2][0]) * ZU[i][0] +
                            std::conj(ZUL[2][1]) * ZU[i][1] +
                            std::conj(ZUL[2][2]) * ZU[i][2]) +
                       3 * sqrt(2) * g2 * std::conj(ZN[0][1]) *
                           (std::conj(ZUL[2][0]) * ZU[i][0] +
                            std::conj(ZUL[2][1]) * ZU[i][1] +
                            std::conj(ZUL[2][2]) * ZU[i][2]) +
                       6 * std::conj(ZN[0][3]) *
                           (std::conj(ZUL[2][0]) *
                                (Yu[0][0] * ZU[i][3] + Yu[1][0] * ZU[i][4] +
                                 Yu[2][0] * ZU[i][5]) +
                            std::conj(ZUL[2][1]) *
                                (Yu[0][1] * ZU[i][3] + Yu[1][1] * ZU[i][4] +
                                 Yu[2][1] * ZU[i][5]) +
                            std::conj(ZUL[2][2]) *
                                (Yu[0][2] * ZU[i][3] + Yu[1][2] * ZU[i][4] +
                                 Yu[2][2] * ZU[i][5]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup128[i] = (I * PhiUR *
                      (2 * sqrt(2) * g1 * ZN[0][0] *
                           (ZU[i][3] * ZUR[2][0] + ZU[i][4] * ZUR[2][1] +
                            ZU[i][5] * ZUR[2][2]) -
                       3 * ZN[0][3] *
                           (ZU[i][0] * (std::conj(Yu[0][0]) * ZUR[2][0] +
                                        std::conj(Yu[1][0]) * ZUR[2][1] +
                                        std::conj(Yu[2][0]) * ZUR[2][2]) +
                            ZU[i][1] * (std::conj(Yu[0][1]) * ZUR[2][0] +
                                        std::conj(Yu[1][1]) * ZUR[2][1] +
                                        std::conj(Yu[2][1]) * ZUR[2][2]) +
                            ZU[i][2] * (std::conj(Yu[0][2]) * ZUR[2][0] +
                                        std::conj(Yu[1][2]) * ZUR[2][1] +
                                        std::conj(Yu[2][2]) * ZUR[2][2])))) /
                     3.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup129[i] =
            ((std::conj(ZDL[0][0]) * (std::conj(ZDR[0][0]) * Yd[0][0] +
                                      std::conj(ZDR[0][1]) * Yd[1][0] +
                                      std::conj(ZDR[0][2]) * Yd[2][0]) +
              std::conj(ZDL[0][1]) * (std::conj(ZDR[0][0]) * Yd[0][1] +
                                      std::conj(ZDR[0][1]) * Yd[1][1] +
                                      std::conj(ZDR[0][2]) * Yd[2][1]) +
              std::conj(ZDL[0][2]) * (std::conj(ZDR[0][0]) * Yd[0][2] +
                                      std::conj(ZDR[0][1]) * Yd[1][2] +
                                      std::conj(ZDR[0][2]) * Yd[2][2])) *
             (-(I * ZH[i][0]) + ZH[i][3])) /
            sqrt(2);
    }
    for (size_t i = 0; i < 6; i++) {
        coup130[i] = -((I *
                        (std::conj(Yd[0][0]) * ZDL[0][0] * ZDR[0][0] +
                         std::conj(Yd[0][1]) * ZDL[0][1] * ZDR[0][0] +
                         std::conj(Yd[0][2]) * ZDL[0][2] * ZDR[0][0] +
                         std::conj(Yd[1][0]) * ZDL[0][0] * ZDR[0][1] +
                         std::conj(Yd[1][1]) * ZDL[0][1] * ZDR[0][1] +
                         std::conj(Yd[1][2]) * ZDL[0][2] * ZDR[0][1] +
                         std::conj(Yd[2][0]) * ZDL[0][0] * ZDR[0][2] +
                         std::conj(Yd[2][1]) * ZDL[0][1] * ZDR[0][2] +
                         std::conj(Yd[2][2]) * ZDL[0][2] * ZDR[0][2]) *
                        (ZH[i][0] - I * ZH[i][3])) /
                       sqrt(2));
    }
    coup131 = -0.3333333333333333 * (g1 * I * STW);
    coup132 = (I * (3 * CTW * g2 + g1 * STW)) / 6.;
    for (size_t i = 0; i < 6; i++) {
        coup133[i] =
            -0.3333333333333333 *
            (I *
             (sqrt(2) * g1 *
                  (std::conj(ZD[i][3]) * std::conj(ZDR[0][0]) +
                   std::conj(ZD[i][4]) * std::conj(ZDR[0][1]) +
                   std::conj(ZD[i][5]) * std::conj(ZDR[0][2])) *
                  std::conj(ZN[0][0]) +
              3 * std::conj(ZN[0][2]) *
                  (std::conj(ZD[i][0]) * (std::conj(ZDR[0][0]) * Yd[0][0] +
                                          std::conj(ZDR[0][1]) * Yd[1][0] +
                                          std::conj(ZDR[0][2]) * Yd[2][0]) +
                   std::conj(ZD[i][1]) * (std::conj(ZDR[0][0]) * Yd[0][1] +
                                          std::conj(ZDR[0][1]) * Yd[1][1] +
                                          std::conj(ZDR[0][2]) * Yd[2][1]) +
                   std::conj(ZD[i][2]) * (std::conj(ZDR[0][0]) * Yd[0][2] +
                                          std::conj(ZDR[0][1]) * Yd[1][2] +
                                          std::conj(ZDR[0][2]) * Yd[2][2]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup134[i] = -0.16666666666666666 *
                     (I * (sqrt(2) * g1 *
                               (std::conj(ZD[i][0]) * ZDL[0][0] +
                                std::conj(ZD[i][1]) * ZDL[0][1] +
                                std::conj(ZD[i][2]) * ZDL[0][2]) *
                               ZN[0][0] -
                           3 * sqrt(2) * g2 *
                               (std::conj(ZD[i][0]) * ZDL[0][0] +
                                std::conj(ZD[i][1]) * ZDL[0][1] +
                                std::conj(ZD[i][2]) * ZDL[0][2]) *
                               ZN[0][1] +
                           6 *
                               ((std::conj(Yd[0][0]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][0]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][0]) * std::conj(ZD[i][5])) *
                                    ZDL[0][0] +
                                (std::conj(Yd[0][1]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][1]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][1]) * std::conj(ZD[i][5])) *
                                    ZDL[0][1] +
                                (std::conj(Yd[0][2]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][2]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][2]) * std::conj(ZD[i][5])) *
                                    ZDL[0][2]) *
                               ZN[0][2]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup135[i] = -0.16666666666666666 *
                     (I * (sqrt(2) * g1 * std::conj(ZN[0][0]) *
                               (std::conj(ZDL[0][0]) * ZD[i][0] +
                                std::conj(ZDL[0][1]) * ZD[i][1] +
                                std::conj(ZDL[0][2]) * ZD[i][2]) -
                           3 * sqrt(2) * g2 * std::conj(ZN[0][1]) *
                               (std::conj(ZDL[0][0]) * ZD[i][0] +
                                std::conj(ZDL[0][1]) * ZD[i][1] +
                                std::conj(ZDL[0][2]) * ZD[i][2]) +
                           6 * std::conj(ZN[0][2]) *
                               (std::conj(ZDL[0][0]) *
                                    (Yd[0][0] * ZD[i][3] + Yd[1][0] * ZD[i][4] +
                                     Yd[2][0] * ZD[i][5]) +
                                std::conj(ZDL[0][1]) *
                                    (Yd[0][1] * ZD[i][3] + Yd[1][1] * ZD[i][4] +
                                     Yd[2][1] * ZD[i][5]) +
                                std::conj(ZDL[0][2]) *
                                    (Yd[0][2] * ZD[i][3] + Yd[1][2] * ZD[i][4] +
                                     Yd[2][2] * ZD[i][5]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup136[i] = -0.3333333333333333 *
                     (I * (sqrt(2) * g1 *
                               (ZD[i][3] * ZDR[0][0] + ZD[i][4] * ZDR[0][1] +
                                ZD[i][5] * ZDR[0][2]) *
                               ZN[0][0] +
                           3 *
                               (ZD[i][0] * (std::conj(Yd[0][0]) * ZDR[0][0] +
                                            std::conj(Yd[1][0]) * ZDR[0][1] +
                                            std::conj(Yd[2][0]) * ZDR[0][2]) +
                                ZD[i][1] * (std::conj(Yd[0][1]) * ZDR[0][0] +
                                            std::conj(Yd[1][1]) * ZDR[0][1] +
                                            std::conj(Yd[2][1]) * ZDR[0][2]) +
                                ZD[i][2] * (std::conj(Yd[0][2]) * ZDR[0][0] +
                                            std::conj(Yd[1][2]) * ZDR[0][1] +
                                            std::conj(Yd[2][2]) * ZDR[0][2])) *
                               ZN[0][2]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup137[i] =
            ((std::conj(ZDL[1][0]) * (std::conj(ZDR[1][0]) * Yd[0][0] +
                                      std::conj(ZDR[1][1]) * Yd[1][0] +
                                      std::conj(ZDR[1][2]) * Yd[2][0]) +
              std::conj(ZDL[1][1]) * (std::conj(ZDR[1][0]) * Yd[0][1] +
                                      std::conj(ZDR[1][1]) * Yd[1][1] +
                                      std::conj(ZDR[1][2]) * Yd[2][1]) +
              std::conj(ZDL[1][2]) * (std::conj(ZDR[1][0]) * Yd[0][2] +
                                      std::conj(ZDR[1][1]) * Yd[1][2] +
                                      std::conj(ZDR[1][2]) * Yd[2][2])) *
             (-(I * ZH[i][0]) + ZH[i][3])) /
            sqrt(2);
    }
    for (size_t i = 0; i < 6; i++) {
        coup138[i] = -((I *
                        (std::conj(Yd[0][0]) * ZDL[1][0] * ZDR[1][0] +
                         std::conj(Yd[0][1]) * ZDL[1][1] * ZDR[1][0] +
                         std::conj(Yd[0][2]) * ZDL[1][2] * ZDR[1][0] +
                         std::conj(Yd[1][0]) * ZDL[1][0] * ZDR[1][1] +
                         std::conj(Yd[1][1]) * ZDL[1][1] * ZDR[1][1] +
                         std::conj(Yd[1][2]) * ZDL[1][2] * ZDR[1][1] +
                         std::conj(Yd[2][0]) * ZDL[1][0] * ZDR[1][2] +
                         std::conj(Yd[2][1]) * ZDL[1][1] * ZDR[1][2] +
                         std::conj(Yd[2][2]) * ZDL[1][2] * ZDR[1][2]) *
                        (ZH[i][0] - I * ZH[i][3])) /
                       sqrt(2));
    }
    for (size_t i = 0; i < 6; i++) {
        coup139[i] =
            -0.3333333333333333 *
            (I *
             (sqrt(2) * g1 *
                  (std::conj(ZD[i][3]) * std::conj(ZDR[1][0]) +
                   std::conj(ZD[i][4]) * std::conj(ZDR[1][1]) +
                   std::conj(ZD[i][5]) * std::conj(ZDR[1][2])) *
                  std::conj(ZN[0][0]) +
              3 * std::conj(ZN[0][2]) *
                  (std::conj(ZD[i][0]) * (std::conj(ZDR[1][0]) * Yd[0][0] +
                                          std::conj(ZDR[1][1]) * Yd[1][0] +
                                          std::conj(ZDR[1][2]) * Yd[2][0]) +
                   std::conj(ZD[i][1]) * (std::conj(ZDR[1][0]) * Yd[0][1] +
                                          std::conj(ZDR[1][1]) * Yd[1][1] +
                                          std::conj(ZDR[1][2]) * Yd[2][1]) +
                   std::conj(ZD[i][2]) * (std::conj(ZDR[1][0]) * Yd[0][2] +
                                          std::conj(ZDR[1][1]) * Yd[1][2] +
                                          std::conj(ZDR[1][2]) * Yd[2][2]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup140[i] = -0.16666666666666666 *
                     (I * (sqrt(2) * g1 *
                               (std::conj(ZD[i][0]) * ZDL[1][0] +
                                std::conj(ZD[i][1]) * ZDL[1][1] +
                                std::conj(ZD[i][2]) * ZDL[1][2]) *
                               ZN[0][0] -
                           3 * sqrt(2) * g2 *
                               (std::conj(ZD[i][0]) * ZDL[1][0] +
                                std::conj(ZD[i][1]) * ZDL[1][1] +
                                std::conj(ZD[i][2]) * ZDL[1][2]) *
                               ZN[0][1] +
                           6 *
                               ((std::conj(Yd[0][0]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][0]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][0]) * std::conj(ZD[i][5])) *
                                    ZDL[1][0] +
                                (std::conj(Yd[0][1]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][1]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][1]) * std::conj(ZD[i][5])) *
                                    ZDL[1][1] +
                                (std::conj(Yd[0][2]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][2]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][2]) * std::conj(ZD[i][5])) *
                                    ZDL[1][2]) *
                               ZN[0][2]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup141[i] = -0.16666666666666666 *
                     (I * (sqrt(2) * g1 * std::conj(ZN[0][0]) *
                               (std::conj(ZDL[1][0]) * ZD[i][0] +
                                std::conj(ZDL[1][1]) * ZD[i][1] +
                                std::conj(ZDL[1][2]) * ZD[i][2]) -
                           3 * sqrt(2) * g2 * std::conj(ZN[0][1]) *
                               (std::conj(ZDL[1][0]) * ZD[i][0] +
                                std::conj(ZDL[1][1]) * ZD[i][1] +
                                std::conj(ZDL[1][2]) * ZD[i][2]) +
                           6 * std::conj(ZN[0][2]) *
                               (std::conj(ZDL[1][0]) *
                                    (Yd[0][0] * ZD[i][3] + Yd[1][0] * ZD[i][4] +
                                     Yd[2][0] * ZD[i][5]) +
                                std::conj(ZDL[1][1]) *
                                    (Yd[0][1] * ZD[i][3] + Yd[1][1] * ZD[i][4] +
                                     Yd[2][1] * ZD[i][5]) +
                                std::conj(ZDL[1][2]) *
                                    (Yd[0][2] * ZD[i][3] + Yd[1][2] * ZD[i][4] +
                                     Yd[2][2] * ZD[i][5]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup142[i] = -0.3333333333333333 *
                     (I * (sqrt(2) * g1 *
                               (ZD[i][3] * ZDR[1][0] + ZD[i][4] * ZDR[1][1] +
                                ZD[i][5] * ZDR[1][2]) *
                               ZN[0][0] +
                           3 *
                               (ZD[i][0] * (std::conj(Yd[0][0]) * ZDR[1][0] +
                                            std::conj(Yd[1][0]) * ZDR[1][1] +
                                            std::conj(Yd[2][0]) * ZDR[1][2]) +
                                ZD[i][1] * (std::conj(Yd[0][1]) * ZDR[1][0] +
                                            std::conj(Yd[1][1]) * ZDR[1][1] +
                                            std::conj(Yd[2][1]) * ZDR[1][2]) +
                                ZD[i][2] * (std::conj(Yd[0][2]) * ZDR[1][0] +
                                            std::conj(Yd[1][2]) * ZDR[1][1] +
                                            std::conj(Yd[2][2]) * ZDR[1][2])) *
                               ZN[0][2]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup143[i] =
            ((std::conj(ZDL[2][0]) * (std::conj(ZDR[2][0]) * Yd[0][0] +
                                      std::conj(ZDR[2][1]) * Yd[1][0] +
                                      std::conj(ZDR[2][2]) * Yd[2][0]) +
              std::conj(ZDL[2][1]) * (std::conj(ZDR[2][0]) * Yd[0][1] +
                                      std::conj(ZDR[2][1]) * Yd[1][1] +
                                      std::conj(ZDR[2][2]) * Yd[2][1]) +
              std::conj(ZDL[2][2]) * (std::conj(ZDR[2][0]) * Yd[0][2] +
                                      std::conj(ZDR[2][1]) * Yd[1][2] +
                                      std::conj(ZDR[2][2]) * Yd[2][2])) *
             (-(I * ZH[i][0]) + ZH[i][3])) /
            sqrt(2);
    }
    for (size_t i = 0; i < 6; i++) {
        coup144[i] = -((I *
                        (std::conj(Yd[0][0]) * ZDL[2][0] * ZDR[2][0] +
                         std::conj(Yd[0][1]) * ZDL[2][1] * ZDR[2][0] +
                         std::conj(Yd[0][2]) * ZDL[2][2] * ZDR[2][0] +
                         std::conj(Yd[1][0]) * ZDL[2][0] * ZDR[2][1] +
                         std::conj(Yd[1][1]) * ZDL[2][1] * ZDR[2][1] +
                         std::conj(Yd[1][2]) * ZDL[2][2] * ZDR[2][1] +
                         std::conj(Yd[2][0]) * ZDL[2][0] * ZDR[2][2] +
                         std::conj(Yd[2][1]) * ZDL[2][1] * ZDR[2][2] +
                         std::conj(Yd[2][2]) * ZDL[2][2] * ZDR[2][2]) *
                        (ZH[i][0] - I * ZH[i][3])) /
                       sqrt(2));
    }
    for (size_t i = 0; i < 6; i++) {
        coup145[i] =
            -0.3333333333333333 *
            (I *
             (sqrt(2) * g1 *
                  (std::conj(ZD[i][3]) * std::conj(ZDR[2][0]) +
                   std::conj(ZD[i][4]) * std::conj(ZDR[2][1]) +
                   std::conj(ZD[i][5]) * std::conj(ZDR[2][2])) *
                  std::conj(ZN[0][0]) +
              3 * std::conj(ZN[0][2]) *
                  (std::conj(ZD[i][0]) * (std::conj(ZDR[2][0]) * Yd[0][0] +
                                          std::conj(ZDR[2][1]) * Yd[1][0] +
                                          std::conj(ZDR[2][2]) * Yd[2][0]) +
                   std::conj(ZD[i][1]) * (std::conj(ZDR[2][0]) * Yd[0][1] +
                                          std::conj(ZDR[2][1]) * Yd[1][1] +
                                          std::conj(ZDR[2][2]) * Yd[2][1]) +
                   std::conj(ZD[i][2]) * (std::conj(ZDR[2][0]) * Yd[0][2] +
                                          std::conj(ZDR[2][1]) * Yd[1][2] +
                                          std::conj(ZDR[2][2]) * Yd[2][2]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup146[i] = -0.16666666666666666 *
                     (I * (sqrt(2) * g1 *
                               (std::conj(ZD[i][0]) * ZDL[2][0] +
                                std::conj(ZD[i][1]) * ZDL[2][1] +
                                std::conj(ZD[i][2]) * ZDL[2][2]) *
                               ZN[0][0] -
                           3 * sqrt(2) * g2 *
                               (std::conj(ZD[i][0]) * ZDL[2][0] +
                                std::conj(ZD[i][1]) * ZDL[2][1] +
                                std::conj(ZD[i][2]) * ZDL[2][2]) *
                               ZN[0][1] +
                           6 *
                               ((std::conj(Yd[0][0]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][0]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][0]) * std::conj(ZD[i][5])) *
                                    ZDL[2][0] +
                                (std::conj(Yd[0][1]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][1]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][1]) * std::conj(ZD[i][5])) *
                                    ZDL[2][1] +
                                (std::conj(Yd[0][2]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][2]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][2]) * std::conj(ZD[i][5])) *
                                    ZDL[2][2]) *
                               ZN[0][2]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup147[i] = -0.16666666666666666 *
                     (I * (sqrt(2) * g1 * std::conj(ZN[0][0]) *
                               (std::conj(ZDL[2][0]) * ZD[i][0] +
                                std::conj(ZDL[2][1]) * ZD[i][1] +
                                std::conj(ZDL[2][2]) * ZD[i][2]) -
                           3 * sqrt(2) * g2 * std::conj(ZN[0][1]) *
                               (std::conj(ZDL[2][0]) * ZD[i][0] +
                                std::conj(ZDL[2][1]) * ZD[i][1] +
                                std::conj(ZDL[2][2]) * ZD[i][2]) +
                           6 * std::conj(ZN[0][2]) *
                               (std::conj(ZDL[2][0]) *
                                    (Yd[0][0] * ZD[i][3] + Yd[1][0] * ZD[i][4] +
                                     Yd[2][0] * ZD[i][5]) +
                                std::conj(ZDL[2][1]) *
                                    (Yd[0][1] * ZD[i][3] + Yd[1][1] * ZD[i][4] +
                                     Yd[2][1] * ZD[i][5]) +
                                std::conj(ZDL[2][2]) *
                                    (Yd[0][2] * ZD[i][3] + Yd[1][2] * ZD[i][4] +
                                     Yd[2][2] * ZD[i][5]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup148[i] = -0.3333333333333333 *
                     (I * (sqrt(2) * g1 *
                               (ZD[i][3] * ZDR[2][0] + ZD[i][4] * ZDR[2][1] +
                                ZD[i][5] * ZDR[2][2]) *
                               ZN[0][0] +
                           3 *
                               (ZD[i][0] * (std::conj(Yd[0][0]) * ZDR[2][0] +
                                            std::conj(Yd[1][0]) * ZDR[2][1] +
                                            std::conj(Yd[2][0]) * ZDR[2][2]) +
                                ZD[i][1] * (std::conj(Yd[0][1]) * ZDR[2][0] +
                                            std::conj(Yd[1][1]) * ZDR[2][1] +
                                            std::conj(Yd[2][1]) * ZDR[2][2]) +
                                ZD[i][2] * (std::conj(Yd[0][2]) * ZDR[2][0] +
                                            std::conj(Yd[1][2]) * ZDR[2][1] +
                                            std::conj(Yd[2][2]) * ZDR[2][2])) *
                               ZN[0][2]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup149[i] =
            (-(std::exp(eta * I) * g2 * I * std::conj(ZN[0][1]) *
               std::conj(ZN[1][2]) * ZH[i][0]) +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[1][3]) * ZH[i][0] +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[1][4]) * ZH[i][0] -
             g1 * I * std::conj(ZN[0][3]) * std::conj(ZN[1][0]) * ZH[i][1] +
             g2 * I * std::conj(ZN[0][3]) * std::conj(ZN[1][1]) * ZH[i][1] +
             sqrt(2) * std::exp(2 * eta * I) * I * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[1][2]) * ZH[i][1] +
             g2 * I * std::conj(ZN[0][1]) * std::conj(ZN[1][3]) * ZH[i][1] +
             sqrt(2) * std::exp((eta + etaS) * I) * I * lam *
                 std::conj(ZN[0][3]) * std::conj(ZN[1][2]) * ZH[i][2] -
             2 * sqrt(2) * std::exp((eta + etaS) * I) * I * kap *
                 std::conj(ZN[0][4]) * std::conj(ZN[1][4]) * ZH[i][2] -
             std::exp(eta * I) * g2 * std::conj(ZN[0][1]) *
                 std::conj(ZN[1][2]) * ZH[i][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[1][3]) * ZH[i][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[1][4]) * ZH[i][3] +
             g1 * std::conj(ZN[0][0]) *
                 (std::exp(eta * I) * std::conj(ZN[1][2]) *
                      (I * ZH[i][0] + ZH[i][3]) +
                  std::conj(ZN[1][3]) * (-(I * ZH[i][1]) - ZH[i][4])) -
             g1 * std::conj(ZN[0][3]) * std::conj(ZN[1][0]) * ZH[i][4] +
             g2 * std::conj(ZN[0][3]) * std::conj(ZN[1][1]) * ZH[i][4] -
             sqrt(2) * std::exp(2 * eta * I) * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[1][2]) * ZH[i][4] +
             g2 * std::conj(ZN[0][1]) * std::conj(ZN[1][3]) * ZH[i][4] -
             sqrt(2) * std::exp((eta + etaS) * I) * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[1][2]) * ZH[i][5] +
             2 * sqrt(2) * std::exp((eta + etaS) * I) * kap *
                 std::conj(ZN[0][4]) * std::conj(ZN[1][4]) * ZH[i][5] +
             std::exp(eta * I) * std::conj(ZN[0][2]) *
                 (g1 * std::conj(ZN[1][0]) * (I * ZH[i][0] + ZH[i][3]) +
                  std::conj(ZN[1][1]) * (-(g2 * I * ZH[i][0]) - g2 * ZH[i][3]) +
                  sqrt(2) * I * lam *
                      (std::exp(eta * I) * std::conj(ZN[1][4]) *
                           (ZH[i][1] + I * ZH[i][4]) +
                       std::exp(etaS * I) * std::conj(ZN[1][3]) *
                           (ZH[i][2] + I * ZH[i][5])))) /
            (2. * std::exp(eta * I));
    }
    for (size_t i = 0; i < 6; i++) {
        coup150[i] = (-(std::exp((2 * eta + etaS) * I) * g1 * I * ZH[i][1] *
                        ZN[0][3] * ZN[1][0]) +
                      std::exp((2 * eta + etaS) * I) * g1 * ZH[i][4] *
                          ZN[0][3] * ZN[1][0] +
                      std::exp((2 * eta + etaS) * I) * g2 * I * ZH[i][1] *
                          ZN[0][3] * ZN[1][1] -
                      std::exp((2 * eta + etaS) * I) * g2 * ZH[i][4] *
                          ZN[0][3] * ZN[1][1] +
                      sqrt(2) * std::exp(eta * I) * I * std::conj(lam) *
                          ZH[i][2] * ZN[0][3] * ZN[1][2] +
                      sqrt(2) * std::exp(eta * I) * std::conj(lam) * ZH[i][5] *
                          ZN[0][3] * ZN[1][2] +
                      sqrt(2) * std::exp(etaS * I) * I * std::conj(lam) *
                          ZH[i][1] * ZN[0][4] * ZN[1][2] +
                      sqrt(2) * std::exp(etaS * I) * std::conj(lam) * ZH[i][4] *
                          ZN[0][4] * ZN[1][2] -
                      std::exp((2 * eta + etaS) * I) * g1 * I * ZH[i][1] *
                          ZN[0][0] * ZN[1][3] +
                      std::exp((2 * eta + etaS) * I) * g1 * ZH[i][4] *
                          ZN[0][0] * ZN[1][3] +
                      std::exp((2 * eta + etaS) * I) * g2 * I * ZH[i][1] *
                          ZN[0][1] * ZN[1][3] -
                      std::exp((2 * eta + etaS) * I) * g2 * ZH[i][4] *
                          ZN[0][1] * ZN[1][3] +
                      sqrt(2) * std::exp(eta * I) * I * std::conj(lam) *
                          ZH[i][2] * ZN[0][2] * ZN[1][3] +
                      sqrt(2) * std::exp(eta * I) * std::conj(lam) * ZH[i][5] *
                          ZN[0][2] * ZN[1][3] +
                      sqrt(2) * std::exp(etaS * I) * I * std::conj(lam) *
                          ZH[i][1] * ZN[0][2] * ZN[1][4] +
                      sqrt(2) * std::exp(etaS * I) * std::conj(lam) * ZH[i][4] *
                          ZN[0][2] * ZN[1][4] -
                      2 * sqrt(2) * std::exp(eta * I) * I * std::conj(kap) *
                          ZH[i][2] * ZN[0][4] * ZN[1][4] -
                      2 * sqrt(2) * std::exp(eta * I) * std::conj(kap) *
                          ZH[i][5] * ZN[0][4] * ZN[1][4] -
                      std::exp((eta + etaS) * I) * ZH[i][3] *
                          (g1 * ZN[0][2] * ZN[1][0] - g2 * ZN[0][2] * ZN[1][1] +
                           g1 * ZN[0][0] * ZN[1][2] - g2 * ZN[0][1] * ZN[1][2] -
                           sqrt(2) * std::conj(lam) *
                               (ZN[0][4] * ZN[1][3] + ZN[0][3] * ZN[1][4])) +
                      std::exp((eta + etaS) * I) * I * ZH[i][0] *
                          (g1 * ZN[0][2] * ZN[1][0] - g2 * ZN[0][2] * ZN[1][1] +
                           g1 * ZN[0][0] * ZN[1][2] - g2 * ZN[0][1] * ZN[1][2] +
                           sqrt(2) * std::conj(lam) *
                               (ZN[0][4] * ZN[1][3] + ZN[0][3] * ZN[1][4]))) /
                     (2. * std::exp((eta + etaS) * I));
    }
    for (size_t i = 0; i < 5; i++) {
        coup151[i] =
            (-(std::exp(eta * I) * g2 * I * std::conj(ZN[1][1]) *
               std::conj(ZN[i][2]) * ZH[1][0]) +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][3]) * ZH[1][0] +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[1][3]) *
                 std::conj(ZN[i][4]) * ZH[1][0] -
             g1 * I * std::conj(ZN[1][3]) * std::conj(ZN[i][0]) * ZH[1][1] +
             g2 * I * std::conj(ZN[1][3]) * std::conj(ZN[i][1]) * ZH[1][1] +
             sqrt(2) * std::exp(2 * eta * I) * I * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][2]) * ZH[1][1] +
             g2 * I * std::conj(ZN[1][1]) * std::conj(ZN[i][3]) * ZH[1][1] +
             sqrt(2) * std::exp((eta + etaS) * I) * I * lam *
                 std::conj(ZN[1][3]) * std::conj(ZN[i][2]) * ZH[1][2] -
             2 * sqrt(2) * std::exp((eta + etaS) * I) * I * kap *
                 std::conj(ZN[1][4]) * std::conj(ZN[i][4]) * ZH[1][2] -
             std::exp(eta * I) * g2 * std::conj(ZN[1][1]) *
                 std::conj(ZN[i][2]) * ZH[1][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][3]) * ZH[1][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[1][3]) *
                 std::conj(ZN[i][4]) * ZH[1][3] +
             g1 * std::conj(ZN[1][0]) *
                 (std::exp(eta * I) * std::conj(ZN[i][2]) *
                      (I * ZH[1][0] + ZH[1][3]) +
                  std::conj(ZN[i][3]) * (-(I * ZH[1][1]) - ZH[1][4])) -
             g1 * std::conj(ZN[1][3]) * std::conj(ZN[i][0]) * ZH[1][4] +
             g2 * std::conj(ZN[1][3]) * std::conj(ZN[i][1]) * ZH[1][4] -
             sqrt(2) * std::exp(2 * eta * I) * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][2]) * ZH[1][4] +
             g2 * std::conj(ZN[1][1]) * std::conj(ZN[i][3]) * ZH[1][4] -
             sqrt(2) * std::exp((eta + etaS) * I) * lam * std::conj(ZN[1][3]) *
                 std::conj(ZN[i][2]) * ZH[1][5] +
             2 * sqrt(2) * std::exp((eta + etaS) * I) * kap *
                 std::conj(ZN[1][4]) * std::conj(ZN[i][4]) * ZH[1][5] +
             std::exp(eta * I) * std::conj(ZN[1][2]) *
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
        coup152[i] =
            (g1 *
                 (I * ZH[1][0] * ZN[1][2] - ZH[1][3] * ZN[1][2] +
                  std::exp(eta * I) * (-(I * ZH[1][1]) + ZH[1][4]) * ZN[1][3]) *
                 ZN[i][0] +
             g2 *
                 (-(I * ZH[1][0] * ZN[1][2]) + ZH[1][3] * ZN[1][2] +
                  std::exp(eta * I) * I * (ZH[1][1] + I * ZH[1][4]) *
                      ZN[1][3]) *
                 ZN[i][1] +
             g1 * I * ZH[1][0] * ZN[1][0] * ZN[i][2] -
             g1 * ZH[1][3] * ZN[1][0] * ZN[i][2] -
             g2 * I * ZH[1][0] * ZN[1][1] * ZN[i][2] +
             g2 * ZH[1][3] * ZN[1][1] * ZN[i][2] +
             (sqrt(2) * I * std::conj(lam) * ZH[1][2] * ZN[1][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[1][5] * ZN[1][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * I * std::conj(lam) * ZH[1][1] * ZN[1][4] * ZN[i][2]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[1][4] * ZN[1][4] * ZN[i][2]) /
                 std::exp(eta * I) -
             std::exp(eta * I) * g1 * I * ZH[1][1] * ZN[1][0] * ZN[i][3] +
             std::exp(eta * I) * g1 * ZH[1][4] * ZN[1][0] * ZN[i][3] +
             std::exp(eta * I) * g2 * I * ZH[1][1] * ZN[1][1] * ZN[i][3] -
             std::exp(eta * I) * g2 * ZH[1][4] * ZN[1][1] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[1][2] * ZN[1][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[1][5] * ZN[1][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             sqrt(2) * I * std::conj(lam) * ZH[1][0] * ZN[1][4] * ZN[i][3] +
             sqrt(2) * std::conj(lam) * ZH[1][3] * ZN[1][4] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[1][1] * ZN[1][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[1][4] * ZN[1][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             sqrt(2) * I * std::conj(lam) * ZH[1][0] * ZN[1][3] * ZN[i][4] +
             sqrt(2) * std::conj(lam) * ZH[1][3] * ZN[1][3] * ZN[i][4] -
             (2 * sqrt(2) * I * std::conj(kap) * ZH[1][2] * ZN[1][4] *
              ZN[i][4]) /
                 std::exp(etaS * I) -
             (2 * sqrt(2) * std::conj(kap) * ZH[1][5] * ZN[1][4] * ZN[i][4]) /
                 std::exp(etaS * I)) /
            2.;
    }
    coup153 =
        (I * (CTW * g2 + g1 * STW) *
         (std::conj(ZN[1][2]) * ZN[0][2] - std::conj(ZN[1][3]) * ZN[0][3])) /
        2.;
    coup154 =
        -0.5 *
        (I * (CTW * g2 + g1 * STW) *
         (std::conj(ZN[0][2]) * ZN[1][2] - std::conj(ZN[0][3]) * ZN[1][3]));
    for (size_t i = 0; i < 5; i++) {
        coup155[i] =
            (-(std::exp(eta * I) * g2 * I * std::conj(ZN[1][1]) *
               std::conj(ZN[i][2]) * ZH[2][0]) +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][3]) * ZH[2][0] +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[1][3]) *
                 std::conj(ZN[i][4]) * ZH[2][0] -
             g1 * I * std::conj(ZN[1][3]) * std::conj(ZN[i][0]) * ZH[2][1] +
             g2 * I * std::conj(ZN[1][3]) * std::conj(ZN[i][1]) * ZH[2][1] +
             sqrt(2) * std::exp(2 * eta * I) * I * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][2]) * ZH[2][1] +
             g2 * I * std::conj(ZN[1][1]) * std::conj(ZN[i][3]) * ZH[2][1] +
             sqrt(2) * std::exp((eta + etaS) * I) * I * lam *
                 std::conj(ZN[1][3]) * std::conj(ZN[i][2]) * ZH[2][2] -
             2 * sqrt(2) * std::exp((eta + etaS) * I) * I * kap *
                 std::conj(ZN[1][4]) * std::conj(ZN[i][4]) * ZH[2][2] -
             std::exp(eta * I) * g2 * std::conj(ZN[1][1]) *
                 std::conj(ZN[i][2]) * ZH[2][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][3]) * ZH[2][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[1][3]) *
                 std::conj(ZN[i][4]) * ZH[2][3] +
             g1 * std::conj(ZN[1][0]) *
                 (std::exp(eta * I) * std::conj(ZN[i][2]) *
                      (I * ZH[2][0] + ZH[2][3]) +
                  std::conj(ZN[i][3]) * (-(I * ZH[2][1]) - ZH[2][4])) -
             g1 * std::conj(ZN[1][3]) * std::conj(ZN[i][0]) * ZH[2][4] +
             g2 * std::conj(ZN[1][3]) * std::conj(ZN[i][1]) * ZH[2][4] -
             sqrt(2) * std::exp(2 * eta * I) * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][2]) * ZH[2][4] +
             g2 * std::conj(ZN[1][1]) * std::conj(ZN[i][3]) * ZH[2][4] -
             sqrt(2) * std::exp((eta + etaS) * I) * lam * std::conj(ZN[1][3]) *
                 std::conj(ZN[i][2]) * ZH[2][5] +
             2 * sqrt(2) * std::exp((eta + etaS) * I) * kap *
                 std::conj(ZN[1][4]) * std::conj(ZN[i][4]) * ZH[2][5] +
             std::exp(eta * I) * std::conj(ZN[1][2]) *
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
        coup156[i] =
            (g1 *
                 (I * ZH[2][0] * ZN[1][2] - ZH[2][3] * ZN[1][2] +
                  std::exp(eta * I) * (-(I * ZH[2][1]) + ZH[2][4]) * ZN[1][3]) *
                 ZN[i][0] +
             g2 *
                 (-(I * ZH[2][0] * ZN[1][2]) + ZH[2][3] * ZN[1][2] +
                  std::exp(eta * I) * I * (ZH[2][1] + I * ZH[2][4]) *
                      ZN[1][3]) *
                 ZN[i][1] +
             g1 * I * ZH[2][0] * ZN[1][0] * ZN[i][2] -
             g1 * ZH[2][3] * ZN[1][0] * ZN[i][2] -
             g2 * I * ZH[2][0] * ZN[1][1] * ZN[i][2] +
             g2 * ZH[2][3] * ZN[1][1] * ZN[i][2] +
             (sqrt(2) * I * std::conj(lam) * ZH[2][2] * ZN[1][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[2][5] * ZN[1][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * I * std::conj(lam) * ZH[2][1] * ZN[1][4] * ZN[i][2]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[2][4] * ZN[1][4] * ZN[i][2]) /
                 std::exp(eta * I) -
             std::exp(eta * I) * g1 * I * ZH[2][1] * ZN[1][0] * ZN[i][3] +
             std::exp(eta * I) * g1 * ZH[2][4] * ZN[1][0] * ZN[i][3] +
             std::exp(eta * I) * g2 * I * ZH[2][1] * ZN[1][1] * ZN[i][3] -
             std::exp(eta * I) * g2 * ZH[2][4] * ZN[1][1] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[2][2] * ZN[1][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[2][5] * ZN[1][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             sqrt(2) * I * std::conj(lam) * ZH[2][0] * ZN[1][4] * ZN[i][3] +
             sqrt(2) * std::conj(lam) * ZH[2][3] * ZN[1][4] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[2][1] * ZN[1][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[2][4] * ZN[1][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             sqrt(2) * I * std::conj(lam) * ZH[2][0] * ZN[1][3] * ZN[i][4] +
             sqrt(2) * std::conj(lam) * ZH[2][3] * ZN[1][3] * ZN[i][4] -
             (2 * sqrt(2) * I * std::conj(kap) * ZH[2][2] * ZN[1][4] *
              ZN[i][4]) /
                 std::exp(etaS * I) -
             (2 * sqrt(2) * std::conj(kap) * ZH[2][5] * ZN[1][4] * ZN[i][4]) /
                 std::exp(etaS * I)) /
            2.;
    }
    for (size_t i = 0; i < 5; i++) {
        coup157[i] =
            (-(std::exp(eta * I) * g2 * I * std::conj(ZN[1][1]) *
               std::conj(ZN[i][2]) * ZH[3][0]) +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][3]) * ZH[3][0] +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[1][3]) *
                 std::conj(ZN[i][4]) * ZH[3][0] -
             g1 * I * std::conj(ZN[1][3]) * std::conj(ZN[i][0]) * ZH[3][1] +
             g2 * I * std::conj(ZN[1][3]) * std::conj(ZN[i][1]) * ZH[3][1] +
             sqrt(2) * std::exp(2 * eta * I) * I * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][2]) * ZH[3][1] +
             g2 * I * std::conj(ZN[1][1]) * std::conj(ZN[i][3]) * ZH[3][1] +
             sqrt(2) * std::exp((eta + etaS) * I) * I * lam *
                 std::conj(ZN[1][3]) * std::conj(ZN[i][2]) * ZH[3][2] -
             2 * sqrt(2) * std::exp((eta + etaS) * I) * I * kap *
                 std::conj(ZN[1][4]) * std::conj(ZN[i][4]) * ZH[3][2] -
             std::exp(eta * I) * g2 * std::conj(ZN[1][1]) *
                 std::conj(ZN[i][2]) * ZH[3][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][3]) * ZH[3][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[1][3]) *
                 std::conj(ZN[i][4]) * ZH[3][3] +
             g1 * std::conj(ZN[1][0]) *
                 (std::exp(eta * I) * std::conj(ZN[i][2]) *
                      (I * ZH[3][0] + ZH[3][3]) +
                  std::conj(ZN[i][3]) * (-(I * ZH[3][1]) - ZH[3][4])) -
             g1 * std::conj(ZN[1][3]) * std::conj(ZN[i][0]) * ZH[3][4] +
             g2 * std::conj(ZN[1][3]) * std::conj(ZN[i][1]) * ZH[3][4] -
             sqrt(2) * std::exp(2 * eta * I) * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][2]) * ZH[3][4] +
             g2 * std::conj(ZN[1][1]) * std::conj(ZN[i][3]) * ZH[3][4] -
             sqrt(2) * std::exp((eta + etaS) * I) * lam * std::conj(ZN[1][3]) *
                 std::conj(ZN[i][2]) * ZH[3][5] +
             2 * sqrt(2) * std::exp((eta + etaS) * I) * kap *
                 std::conj(ZN[1][4]) * std::conj(ZN[i][4]) * ZH[3][5] +
             std::exp(eta * I) * std::conj(ZN[1][2]) *
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
        coup158[i] =
            (g1 *
                 (I * ZH[3][0] * ZN[1][2] - ZH[3][3] * ZN[1][2] +
                  std::exp(eta * I) * (-(I * ZH[3][1]) + ZH[3][4]) * ZN[1][3]) *
                 ZN[i][0] +
             g2 *
                 (-(I * ZH[3][0] * ZN[1][2]) + ZH[3][3] * ZN[1][2] +
                  std::exp(eta * I) * I * (ZH[3][1] + I * ZH[3][4]) *
                      ZN[1][3]) *
                 ZN[i][1] +
             g1 * I * ZH[3][0] * ZN[1][0] * ZN[i][2] -
             g1 * ZH[3][3] * ZN[1][0] * ZN[i][2] -
             g2 * I * ZH[3][0] * ZN[1][1] * ZN[i][2] +
             g2 * ZH[3][3] * ZN[1][1] * ZN[i][2] +
             (sqrt(2) * I * std::conj(lam) * ZH[3][2] * ZN[1][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[3][5] * ZN[1][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * I * std::conj(lam) * ZH[3][1] * ZN[1][4] * ZN[i][2]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[3][4] * ZN[1][4] * ZN[i][2]) /
                 std::exp(eta * I) -
             std::exp(eta * I) * g1 * I * ZH[3][1] * ZN[1][0] * ZN[i][3] +
             std::exp(eta * I) * g1 * ZH[3][4] * ZN[1][0] * ZN[i][3] +
             std::exp(eta * I) * g2 * I * ZH[3][1] * ZN[1][1] * ZN[i][3] -
             std::exp(eta * I) * g2 * ZH[3][4] * ZN[1][1] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[3][2] * ZN[1][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[3][5] * ZN[1][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             sqrt(2) * I * std::conj(lam) * ZH[3][0] * ZN[1][4] * ZN[i][3] +
             sqrt(2) * std::conj(lam) * ZH[3][3] * ZN[1][4] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[3][1] * ZN[1][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[3][4] * ZN[1][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             sqrt(2) * I * std::conj(lam) * ZH[3][0] * ZN[1][3] * ZN[i][4] +
             sqrt(2) * std::conj(lam) * ZH[3][3] * ZN[1][3] * ZN[i][4] -
             (2 * sqrt(2) * I * std::conj(kap) * ZH[3][2] * ZN[1][4] *
              ZN[i][4]) /
                 std::exp(etaS * I) -
             (2 * sqrt(2) * std::conj(kap) * ZH[3][5] * ZN[1][4] * ZN[i][4]) /
                 std::exp(etaS * I)) /
            2.;
    }
    for (size_t i = 0; i < 5; i++) {
        coup159[i] =
            (-(std::exp(eta * I) * g2 * I * std::conj(ZN[1][1]) *
               std::conj(ZN[i][2]) * ZH[4][0]) +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][3]) * ZH[4][0] +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[1][3]) *
                 std::conj(ZN[i][4]) * ZH[4][0] -
             g1 * I * std::conj(ZN[1][3]) * std::conj(ZN[i][0]) * ZH[4][1] +
             g2 * I * std::conj(ZN[1][3]) * std::conj(ZN[i][1]) * ZH[4][1] +
             sqrt(2) * std::exp(2 * eta * I) * I * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][2]) * ZH[4][1] +
             g2 * I * std::conj(ZN[1][1]) * std::conj(ZN[i][3]) * ZH[4][1] +
             sqrt(2) * std::exp((eta + etaS) * I) * I * lam *
                 std::conj(ZN[1][3]) * std::conj(ZN[i][2]) * ZH[4][2] -
             2 * sqrt(2) * std::exp((eta + etaS) * I) * I * kap *
                 std::conj(ZN[1][4]) * std::conj(ZN[i][4]) * ZH[4][2] -
             std::exp(eta * I) * g2 * std::conj(ZN[1][1]) *
                 std::conj(ZN[i][2]) * ZH[4][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][3]) * ZH[4][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[1][3]) *
                 std::conj(ZN[i][4]) * ZH[4][3] +
             g1 * std::conj(ZN[1][0]) *
                 (std::exp(eta * I) * std::conj(ZN[i][2]) *
                      (I * ZH[4][0] + ZH[4][3]) +
                  std::conj(ZN[i][3]) * (-(I * ZH[4][1]) - ZH[4][4])) -
             g1 * std::conj(ZN[1][3]) * std::conj(ZN[i][0]) * ZH[4][4] +
             g2 * std::conj(ZN[1][3]) * std::conj(ZN[i][1]) * ZH[4][4] -
             sqrt(2) * std::exp(2 * eta * I) * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][2]) * ZH[4][4] +
             g2 * std::conj(ZN[1][1]) * std::conj(ZN[i][3]) * ZH[4][4] -
             sqrt(2) * std::exp((eta + etaS) * I) * lam * std::conj(ZN[1][3]) *
                 std::conj(ZN[i][2]) * ZH[4][5] +
             2 * sqrt(2) * std::exp((eta + etaS) * I) * kap *
                 std::conj(ZN[1][4]) * std::conj(ZN[i][4]) * ZH[4][5] +
             std::exp(eta * I) * std::conj(ZN[1][2]) *
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
        coup160[i] =
            (g1 *
                 (I * ZH[4][0] * ZN[1][2] - ZH[4][3] * ZN[1][2] +
                  std::exp(eta * I) * (-(I * ZH[4][1]) + ZH[4][4]) * ZN[1][3]) *
                 ZN[i][0] +
             g2 *
                 (-(I * ZH[4][0] * ZN[1][2]) + ZH[4][3] * ZN[1][2] +
                  std::exp(eta * I) * I * (ZH[4][1] + I * ZH[4][4]) *
                      ZN[1][3]) *
                 ZN[i][1] +
             g1 * I * ZH[4][0] * ZN[1][0] * ZN[i][2] -
             g1 * ZH[4][3] * ZN[1][0] * ZN[i][2] -
             g2 * I * ZH[4][0] * ZN[1][1] * ZN[i][2] +
             g2 * ZH[4][3] * ZN[1][1] * ZN[i][2] +
             (sqrt(2) * I * std::conj(lam) * ZH[4][2] * ZN[1][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[4][5] * ZN[1][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * I * std::conj(lam) * ZH[4][1] * ZN[1][4] * ZN[i][2]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[4][4] * ZN[1][4] * ZN[i][2]) /
                 std::exp(eta * I) -
             std::exp(eta * I) * g1 * I * ZH[4][1] * ZN[1][0] * ZN[i][3] +
             std::exp(eta * I) * g1 * ZH[4][4] * ZN[1][0] * ZN[i][3] +
             std::exp(eta * I) * g2 * I * ZH[4][1] * ZN[1][1] * ZN[i][3] -
             std::exp(eta * I) * g2 * ZH[4][4] * ZN[1][1] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[4][2] * ZN[1][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[4][5] * ZN[1][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             sqrt(2) * I * std::conj(lam) * ZH[4][0] * ZN[1][4] * ZN[i][3] +
             sqrt(2) * std::conj(lam) * ZH[4][3] * ZN[1][4] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[4][1] * ZN[1][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[4][4] * ZN[1][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             sqrt(2) * I * std::conj(lam) * ZH[4][0] * ZN[1][3] * ZN[i][4] +
             sqrt(2) * std::conj(lam) * ZH[4][3] * ZN[1][3] * ZN[i][4] -
             (2 * sqrt(2) * I * std::conj(kap) * ZH[4][2] * ZN[1][4] *
              ZN[i][4]) /
                 std::exp(etaS * I) -
             (2 * sqrt(2) * std::conj(kap) * ZH[4][5] * ZN[1][4] * ZN[i][4]) /
                 std::exp(etaS * I)) /
            2.;
    }
    for (size_t i = 0; i < 5; i++) {
        coup161[i] =
            (-(std::exp(eta * I) * g2 * I * std::conj(ZN[1][1]) *
               std::conj(ZN[i][2]) * ZH[5][0]) +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][3]) * ZH[5][0] +
             sqrt(2) * std::exp(eta * I) * I * lam * std::conj(ZN[1][3]) *
                 std::conj(ZN[i][4]) * ZH[5][0] -
             g1 * I * std::conj(ZN[1][3]) * std::conj(ZN[i][0]) * ZH[5][1] +
             g2 * I * std::conj(ZN[1][3]) * std::conj(ZN[i][1]) * ZH[5][1] +
             sqrt(2) * std::exp(2 * eta * I) * I * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][2]) * ZH[5][1] +
             g2 * I * std::conj(ZN[1][1]) * std::conj(ZN[i][3]) * ZH[5][1] +
             sqrt(2) * std::exp((eta + etaS) * I) * I * lam *
                 std::conj(ZN[1][3]) * std::conj(ZN[i][2]) * ZH[5][2] -
             2 * sqrt(2) * std::exp((eta + etaS) * I) * I * kap *
                 std::conj(ZN[1][4]) * std::conj(ZN[i][4]) * ZH[5][2] -
             std::exp(eta * I) * g2 * std::conj(ZN[1][1]) *
                 std::conj(ZN[i][2]) * ZH[5][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][3]) * ZH[5][3] -
             sqrt(2) * std::exp(eta * I) * lam * std::conj(ZN[1][3]) *
                 std::conj(ZN[i][4]) * ZH[5][3] +
             g1 * std::conj(ZN[1][0]) *
                 (std::exp(eta * I) * std::conj(ZN[i][2]) *
                      (I * ZH[5][0] + ZH[5][3]) +
                  std::conj(ZN[i][3]) * (-(I * ZH[5][1]) - ZH[5][4])) -
             g1 * std::conj(ZN[1][3]) * std::conj(ZN[i][0]) * ZH[5][4] +
             g2 * std::conj(ZN[1][3]) * std::conj(ZN[i][1]) * ZH[5][4] -
             sqrt(2) * std::exp(2 * eta * I) * lam * std::conj(ZN[1][4]) *
                 std::conj(ZN[i][2]) * ZH[5][4] +
             g2 * std::conj(ZN[1][1]) * std::conj(ZN[i][3]) * ZH[5][4] -
             sqrt(2) * std::exp((eta + etaS) * I) * lam * std::conj(ZN[1][3]) *
                 std::conj(ZN[i][2]) * ZH[5][5] +
             2 * sqrt(2) * std::exp((eta + etaS) * I) * kap *
                 std::conj(ZN[1][4]) * std::conj(ZN[i][4]) * ZH[5][5] +
             std::exp(eta * I) * std::conj(ZN[1][2]) *
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
        coup162[i] =
            (g1 *
                 (I * ZH[5][0] * ZN[1][2] - ZH[5][3] * ZN[1][2] +
                  std::exp(eta * I) * (-(I * ZH[5][1]) + ZH[5][4]) * ZN[1][3]) *
                 ZN[i][0] +
             g2 *
                 (-(I * ZH[5][0] * ZN[1][2]) + ZH[5][3] * ZN[1][2] +
                  std::exp(eta * I) * I * (ZH[5][1] + I * ZH[5][4]) *
                      ZN[1][3]) *
                 ZN[i][1] +
             g1 * I * ZH[5][0] * ZN[1][0] * ZN[i][2] -
             g1 * ZH[5][3] * ZN[1][0] * ZN[i][2] -
             g2 * I * ZH[5][0] * ZN[1][1] * ZN[i][2] +
             g2 * ZH[5][3] * ZN[1][1] * ZN[i][2] +
             (sqrt(2) * I * std::conj(lam) * ZH[5][2] * ZN[1][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[5][5] * ZN[1][3] * ZN[i][2]) /
                 std::exp(etaS * I) +
             (sqrt(2) * I * std::conj(lam) * ZH[5][1] * ZN[1][4] * ZN[i][2]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[5][4] * ZN[1][4] * ZN[i][2]) /
                 std::exp(eta * I) -
             std::exp(eta * I) * g1 * I * ZH[5][1] * ZN[1][0] * ZN[i][3] +
             std::exp(eta * I) * g1 * ZH[5][4] * ZN[1][0] * ZN[i][3] +
             std::exp(eta * I) * g2 * I * ZH[5][1] * ZN[1][1] * ZN[i][3] -
             std::exp(eta * I) * g2 * ZH[5][4] * ZN[1][1] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[5][2] * ZN[1][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             (sqrt(2) * std::conj(lam) * ZH[5][5] * ZN[1][2] * ZN[i][3]) /
                 std::exp(etaS * I) +
             sqrt(2) * I * std::conj(lam) * ZH[5][0] * ZN[1][4] * ZN[i][3] +
             sqrt(2) * std::conj(lam) * ZH[5][3] * ZN[1][4] * ZN[i][3] +
             (sqrt(2) * I * std::conj(lam) * ZH[5][1] * ZN[1][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             (sqrt(2) * std::conj(lam) * ZH[5][4] * ZN[1][2] * ZN[i][4]) /
                 std::exp(eta * I) +
             sqrt(2) * I * std::conj(lam) * ZH[5][0] * ZN[1][3] * ZN[i][4] +
             sqrt(2) * std::conj(lam) * ZH[5][3] * ZN[1][3] * ZN[i][4] -
             (2 * sqrt(2) * I * std::conj(kap) * ZH[5][2] * ZN[1][4] *
              ZN[i][4]) /
                 std::exp(etaS * I) -
             (2 * sqrt(2) * std::conj(kap) * ZH[5][5] * ZN[1][4] * ZN[i][4]) /
                 std::exp(etaS * I)) /
            2.;
    }
    for (size_t i = 0; i < 2; i++) {
        coup163[i] = (I * (-2 * g2 * std::conj(UM[i][0]) * std::conj(ZN[1][2]) *
                               ZP[0][0] +
                           std::conj(UM[i][1]) *
                               (sqrt(2) * g1 * std::conj(ZN[1][0]) * ZP[0][0] +
                                sqrt(2) * g2 * std::conj(ZN[1][1]) * ZP[0][0] -
                                2 * std::exp(eta * I) * lam *
                                    std::conj(ZN[1][4]) * ZP[0][1]))) /
                     2.;
    }
    for (size_t i = 0; i < 2; i++) {
        coup164[i] =
            -0.5 *
            (I * (2 * std::conj(lam) * UP[i][1] * ZN[1][4] * ZP[0][0] +
                  std::exp(eta * I) *
                      (sqrt(2) * UP[i][1] * (g1 * ZN[1][0] + g2 * ZN[1][1]) +
                       2 * g2 * UP[i][0] * ZN[1][3]) *
                      ZP[0][1]));
    }
    for (size_t i = 0; i < 2; i++) {
        coup165[i] =
            -0.5 *
            (I *
             (2 * g2 * std::conj(UP[i][0]) * std::conj(ZN[1][3]) *
                  std::conj(ZP[0][1]) +
              std::conj(UP[i][1]) *
                  (2 * std::exp(eta * I) * lam * std::conj(ZN[1][4]) *
                       std::conj(ZP[0][0]) +
                   sqrt(2) *
                       (g1 * std::conj(ZN[1][0]) + g2 * std::conj(ZN[1][1])) *
                       std::conj(ZP[0][1])))) /
            std::exp(eta * I);
    }
    for (size_t i = 0; i < 2; i++) {
        coup166[i] =
            (I *
             (std::conj(ZP[0][0]) *
                  (sqrt(2) * UM[i][1] * (g1 * ZN[1][0] + g2 * ZN[1][1]) -
                   2 * g2 * UM[i][0] * ZN[1][2]) -
              (2 * std::conj(lam) * std::conj(ZP[0][1]) * UM[i][1] * ZN[1][4]) /
                  std::exp(eta * I))) /
            2.;
    }
    for (size_t i = 0; i < 2; i++) {
        coup167[i] = (I * (-2 * g2 * std::conj(UM[i][0]) * std::conj(ZN[1][2]) *
                               ZP[1][0] +
                           std::conj(UM[i][1]) *
                               (sqrt(2) * g1 * std::conj(ZN[1][0]) * ZP[1][0] +
                                sqrt(2) * g2 * std::conj(ZN[1][1]) * ZP[1][0] -
                                2 * std::exp(eta * I) * lam *
                                    std::conj(ZN[1][4]) * ZP[1][1]))) /
                     2.;
    }
    for (size_t i = 0; i < 2; i++) {
        coup168[i] =
            -0.5 *
            (I * (2 * std::conj(lam) * UP[i][1] * ZN[1][4] * ZP[1][0] +
                  std::exp(eta * I) *
                      (sqrt(2) * UP[i][1] * (g1 * ZN[1][0] + g2 * ZN[1][1]) +
                       2 * g2 * UP[i][0] * ZN[1][3]) *
                      ZP[1][1]));
    }
    for (size_t i = 0; i < 2; i++) {
        coup169[i] =
            -0.5 *
            (I *
             (2 * g2 * std::conj(UP[i][0]) * std::conj(ZN[1][3]) *
                  std::conj(ZP[1][1]) +
              std::conj(UP[i][1]) *
                  (2 * std::exp(eta * I) * lam * std::conj(ZN[1][4]) *
                       std::conj(ZP[1][0]) +
                   sqrt(2) *
                       (g1 * std::conj(ZN[1][0]) + g2 * std::conj(ZN[1][1])) *
                       std::conj(ZP[1][1])))) /
            std::exp(eta * I);
    }
    for (size_t i = 0; i < 2; i++) {
        coup170[i] =
            (I *
             (std::conj(ZP[1][0]) *
                  (sqrt(2) * UM[i][1] * (g1 * ZN[1][0] + g2 * ZN[1][1]) -
                   2 * g2 * UM[i][0] * ZN[1][2]) -
              (2 * std::conj(lam) * std::conj(ZP[1][1]) * UM[i][1] * ZN[1][4]) /
                  std::exp(eta * I))) /
            2.;
    }
    for (size_t i = 0; i < 5; i++) {
        coup171[i] =
            -0.5 *
            (I * (CTW * g2 + g1 * STW) *
             (std::conj(ZN[i][2]) * ZN[1][2] - std::conj(ZN[i][3]) * ZN[1][3]));
    }
    for (size_t i = 0; i < 5; i++) {
        coup172[i] = (I * (CTW * g2 + g1 * STW) *
                      (std::conj(ZN[1][2]) * ZN[i][2] -
                       std::conj(ZN[1][3]) * ZN[i][3])) /
                     2.;
    }
    for (size_t i = 0; i < 2; i++) {
        coup173[i] = -(g2 * I * std::conj(ZN[1][1]) * UP[i][0]) +
                     (g2 * I * std::conj(ZN[1][3]) * UP[i][1]) / sqrt(2);
    }
    for (size_t i = 0; i < 2; i++) {
        coup174[i] = -0.5 * (g2 * I *
                             (2 * std::conj(UM[i][0]) * ZN[1][1] +
                              sqrt(2) * std::conj(UM[i][1]) * ZN[1][2]));
    }
    for (size_t i = 0; i < 2; i++) {
        coup175[i] = (g2 * I *
                      (2 * std::conj(ZN[1][1]) * UM[i][0] +
                       sqrt(2) * std::conj(ZN[1][2]) * UM[i][1])) /
                     2.;
    }
    for (size_t i = 0; i < 2; i++) {
        coup176[i] = (g2 * I *
                      (2 * std::conj(UP[i][0]) * ZN[1][1] -
                       sqrt(2) * std::conj(UP[i][1]) * ZN[1][3])) /
                     2.;
    }
    for (size_t i = 0; i < 3; i++) {
        coup177[i] =
            (I * std::conj(ZV[i][0]) * (g1 * ZN[1][0] - g2 * ZN[1][1])) /
            sqrt(2);
    }
    for (size_t i = 0; i < 3; i++) {
        coup178[i] =
            (I * (g1 * std::conj(ZN[1][0]) - g2 * std::conj(ZN[1][1])) *
             ZV[i][0]) /
            sqrt(2);
    }
    for (size_t i = 0; i < 3; i++) {
        coup179[i] =
            (I * std::conj(ZV[i][1]) * (g1 * ZN[1][0] - g2 * ZN[1][1])) /
            sqrt(2);
    }
    for (size_t i = 0; i < 3; i++) {
        coup180[i] =
            (I * (g1 * std::conj(ZN[1][0]) - g2 * std::conj(ZN[1][1])) *
             ZV[i][1]) /
            sqrt(2);
    }
    for (size_t i = 0; i < 3; i++) {
        coup181[i] =
            (I * std::conj(ZV[i][2]) * (g1 * ZN[1][0] - g2 * ZN[1][1])) /
            sqrt(2);
    }
    for (size_t i = 0; i < 3; i++) {
        coup182[i] =
            (I * (g1 * std::conj(ZN[1][0]) - g2 * std::conj(ZN[1][1])) *
             ZV[i][2]) /
            sqrt(2);
    }
    for (size_t i = 0; i < 6; i++) {
        coup183[i] =
            -(I *
              (sqrt(2) * g1 *
                   (std::conj(ZE[i][3]) * std::conj(ZER[0][0]) +
                    std::conj(ZE[i][4]) * std::conj(ZER[0][1]) +
                    std::conj(ZE[i][5]) * std::conj(ZER[0][2])) *
                   std::conj(ZN[1][0]) +
               std::conj(ZN[1][2]) *
                   (std::conj(ZE[i][0]) * (std::conj(ZER[0][0]) * Ye[0][0] +
                                           std::conj(ZER[0][1]) * Ye[1][0] +
                                           std::conj(ZER[0][2]) * Ye[2][0]) +
                    std::conj(ZE[i][1]) * (std::conj(ZER[0][0]) * Ye[0][1] +
                                           std::conj(ZER[0][1]) * Ye[1][1] +
                                           std::conj(ZER[0][2]) * Ye[2][1]) +
                    std::conj(ZE[i][2]) * (std::conj(ZER[0][0]) * Ye[0][2] +
                                           std::conj(ZER[0][1]) * Ye[1][2] +
                                           std::conj(ZER[0][2]) * Ye[2][2]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup184[i] = (I * (sqrt(2) * g1 *
                               (std::conj(ZE[i][0]) * ZEL[0][0] +
                                std::conj(ZE[i][1]) * ZEL[0][1] +
                                std::conj(ZE[i][2]) * ZEL[0][2]) *
                               ZN[1][0] +
                           sqrt(2) * g2 *
                               (std::conj(ZE[i][0]) * ZEL[0][0] +
                                std::conj(ZE[i][1]) * ZEL[0][1] +
                                std::conj(ZE[i][2]) * ZEL[0][2]) *
                               ZN[1][1] -
                           2 *
                               ((std::conj(Ye[0][0]) * std::conj(ZE[i][3]) +
                                 std::conj(Ye[1][0]) * std::conj(ZE[i][4]) +
                                 std::conj(Ye[2][0]) * std::conj(ZE[i][5])) *
                                    ZEL[0][0] +
                                (std::conj(Ye[0][1]) * std::conj(ZE[i][3]) +
                                 std::conj(Ye[1][1]) * std::conj(ZE[i][4]) +
                                 std::conj(Ye[2][1]) * std::conj(ZE[i][5])) *
                                    ZEL[0][1] +
                                (std::conj(Ye[0][2]) * std::conj(ZE[i][3]) +
                                 std::conj(Ye[1][2]) * std::conj(ZE[i][4]) +
                                 std::conj(Ye[2][2]) * std::conj(ZE[i][5])) *
                                    ZEL[0][2]) *
                               ZN[1][2])) /
                     2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup185[i] = (I * (sqrt(2) * g1 * std::conj(ZN[1][0]) *
                               (std::conj(ZEL[0][0]) * ZE[i][0] +
                                std::conj(ZEL[0][1]) * ZE[i][1] +
                                std::conj(ZEL[0][2]) * ZE[i][2]) +
                           sqrt(2) * g2 * std::conj(ZN[1][1]) *
                               (std::conj(ZEL[0][0]) * ZE[i][0] +
                                std::conj(ZEL[0][1]) * ZE[i][1] +
                                std::conj(ZEL[0][2]) * ZE[i][2]) -
                           2 * std::conj(ZN[1][2]) *
                               (std::conj(ZEL[0][0]) *
                                    (Ye[0][0] * ZE[i][3] + Ye[1][0] * ZE[i][4] +
                                     Ye[2][0] * ZE[i][5]) +
                                std::conj(ZEL[0][1]) *
                                    (Ye[0][1] * ZE[i][3] + Ye[1][1] * ZE[i][4] +
                                     Ye[2][1] * ZE[i][5]) +
                                std::conj(ZEL[0][2]) *
                                    (Ye[0][2] * ZE[i][3] + Ye[1][2] * ZE[i][4] +
                                     Ye[2][2] * ZE[i][5])))) /
                     2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup186[i] = -(I * (sqrt(2) * g1 *
                                (ZE[i][3] * ZER[0][0] + ZE[i][4] * ZER[0][1] +
                                 ZE[i][5] * ZER[0][2]) *
                                ZN[1][0] +
                            (ZE[i][0] * (std::conj(Ye[0][0]) * ZER[0][0] +
                                         std::conj(Ye[1][0]) * ZER[0][1] +
                                         std::conj(Ye[2][0]) * ZER[0][2]) +
                             ZE[i][1] * (std::conj(Ye[0][1]) * ZER[0][0] +
                                         std::conj(Ye[1][1]) * ZER[0][1] +
                                         std::conj(Ye[2][1]) * ZER[0][2]) +
                             ZE[i][2] * (std::conj(Ye[0][2]) * ZER[0][0] +
                                         std::conj(Ye[1][2]) * ZER[0][1] +
                                         std::conj(Ye[2][2]) * ZER[0][2])) *
                                ZN[1][2]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup187[i] =
            -(I *
              (sqrt(2) * g1 *
                   (std::conj(ZE[i][3]) * std::conj(ZER[1][0]) +
                    std::conj(ZE[i][4]) * std::conj(ZER[1][1]) +
                    std::conj(ZE[i][5]) * std::conj(ZER[1][2])) *
                   std::conj(ZN[1][0]) +
               std::conj(ZN[1][2]) *
                   (std::conj(ZE[i][0]) * (std::conj(ZER[1][0]) * Ye[0][0] +
                                           std::conj(ZER[1][1]) * Ye[1][0] +
                                           std::conj(ZER[1][2]) * Ye[2][0]) +
                    std::conj(ZE[i][1]) * (std::conj(ZER[1][0]) * Ye[0][1] +
                                           std::conj(ZER[1][1]) * Ye[1][1] +
                                           std::conj(ZER[1][2]) * Ye[2][1]) +
                    std::conj(ZE[i][2]) * (std::conj(ZER[1][0]) * Ye[0][2] +
                                           std::conj(ZER[1][1]) * Ye[1][2] +
                                           std::conj(ZER[1][2]) * Ye[2][2]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup188[i] = (I * (sqrt(2) * g1 *
                               (std::conj(ZE[i][0]) * ZEL[1][0] +
                                std::conj(ZE[i][1]) * ZEL[1][1] +
                                std::conj(ZE[i][2]) * ZEL[1][2]) *
                               ZN[1][0] +
                           sqrt(2) * g2 *
                               (std::conj(ZE[i][0]) * ZEL[1][0] +
                                std::conj(ZE[i][1]) * ZEL[1][1] +
                                std::conj(ZE[i][2]) * ZEL[1][2]) *
                               ZN[1][1] -
                           2 *
                               ((std::conj(Ye[0][0]) * std::conj(ZE[i][3]) +
                                 std::conj(Ye[1][0]) * std::conj(ZE[i][4]) +
                                 std::conj(Ye[2][0]) * std::conj(ZE[i][5])) *
                                    ZEL[1][0] +
                                (std::conj(Ye[0][1]) * std::conj(ZE[i][3]) +
                                 std::conj(Ye[1][1]) * std::conj(ZE[i][4]) +
                                 std::conj(Ye[2][1]) * std::conj(ZE[i][5])) *
                                    ZEL[1][1] +
                                (std::conj(Ye[0][2]) * std::conj(ZE[i][3]) +
                                 std::conj(Ye[1][2]) * std::conj(ZE[i][4]) +
                                 std::conj(Ye[2][2]) * std::conj(ZE[i][5])) *
                                    ZEL[1][2]) *
                               ZN[1][2])) /
                     2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup189[i] = (I * (sqrt(2) * g1 * std::conj(ZN[1][0]) *
                               (std::conj(ZEL[1][0]) * ZE[i][0] +
                                std::conj(ZEL[1][1]) * ZE[i][1] +
                                std::conj(ZEL[1][2]) * ZE[i][2]) +
                           sqrt(2) * g2 * std::conj(ZN[1][1]) *
                               (std::conj(ZEL[1][0]) * ZE[i][0] +
                                std::conj(ZEL[1][1]) * ZE[i][1] +
                                std::conj(ZEL[1][2]) * ZE[i][2]) -
                           2 * std::conj(ZN[1][2]) *
                               (std::conj(ZEL[1][0]) *
                                    (Ye[0][0] * ZE[i][3] + Ye[1][0] * ZE[i][4] +
                                     Ye[2][0] * ZE[i][5]) +
                                std::conj(ZEL[1][1]) *
                                    (Ye[0][1] * ZE[i][3] + Ye[1][1] * ZE[i][4] +
                                     Ye[2][1] * ZE[i][5]) +
                                std::conj(ZEL[1][2]) *
                                    (Ye[0][2] * ZE[i][3] + Ye[1][2] * ZE[i][4] +
                                     Ye[2][2] * ZE[i][5])))) /
                     2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup190[i] = -(I * (sqrt(2) * g1 *
                                (ZE[i][3] * ZER[1][0] + ZE[i][4] * ZER[1][1] +
                                 ZE[i][5] * ZER[1][2]) *
                                ZN[1][0] +
                            (ZE[i][0] * (std::conj(Ye[0][0]) * ZER[1][0] +
                                         std::conj(Ye[1][0]) * ZER[1][1] +
                                         std::conj(Ye[2][0]) * ZER[1][2]) +
                             ZE[i][1] * (std::conj(Ye[0][1]) * ZER[1][0] +
                                         std::conj(Ye[1][1]) * ZER[1][1] +
                                         std::conj(Ye[2][1]) * ZER[1][2]) +
                             ZE[i][2] * (std::conj(Ye[0][2]) * ZER[1][0] +
                                         std::conj(Ye[1][2]) * ZER[1][1] +
                                         std::conj(Ye[2][2]) * ZER[1][2])) *
                                ZN[1][2]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup191[i] =
            -(I *
              (sqrt(2) * g1 *
                   (std::conj(ZE[i][3]) * std::conj(ZER[2][0]) +
                    std::conj(ZE[i][4]) * std::conj(ZER[2][1]) +
                    std::conj(ZE[i][5]) * std::conj(ZER[2][2])) *
                   std::conj(ZN[1][0]) +
               std::conj(ZN[1][2]) *
                   (std::conj(ZE[i][0]) * (std::conj(ZER[2][0]) * Ye[0][0] +
                                           std::conj(ZER[2][1]) * Ye[1][0] +
                                           std::conj(ZER[2][2]) * Ye[2][0]) +
                    std::conj(ZE[i][1]) * (std::conj(ZER[2][0]) * Ye[0][1] +
                                           std::conj(ZER[2][1]) * Ye[1][1] +
                                           std::conj(ZER[2][2]) * Ye[2][1]) +
                    std::conj(ZE[i][2]) * (std::conj(ZER[2][0]) * Ye[0][2] +
                                           std::conj(ZER[2][1]) * Ye[1][2] +
                                           std::conj(ZER[2][2]) * Ye[2][2]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup192[i] = (I * (sqrt(2) * g1 *
                               (std::conj(ZE[i][0]) * ZEL[2][0] +
                                std::conj(ZE[i][1]) * ZEL[2][1] +
                                std::conj(ZE[i][2]) * ZEL[2][2]) *
                               ZN[1][0] +
                           sqrt(2) * g2 *
                               (std::conj(ZE[i][0]) * ZEL[2][0] +
                                std::conj(ZE[i][1]) * ZEL[2][1] +
                                std::conj(ZE[i][2]) * ZEL[2][2]) *
                               ZN[1][1] -
                           2 *
                               ((std::conj(Ye[0][0]) * std::conj(ZE[i][3]) +
                                 std::conj(Ye[1][0]) * std::conj(ZE[i][4]) +
                                 std::conj(Ye[2][0]) * std::conj(ZE[i][5])) *
                                    ZEL[2][0] +
                                (std::conj(Ye[0][1]) * std::conj(ZE[i][3]) +
                                 std::conj(Ye[1][1]) * std::conj(ZE[i][4]) +
                                 std::conj(Ye[2][1]) * std::conj(ZE[i][5])) *
                                    ZEL[2][1] +
                                (std::conj(Ye[0][2]) * std::conj(ZE[i][3]) +
                                 std::conj(Ye[1][2]) * std::conj(ZE[i][4]) +
                                 std::conj(Ye[2][2]) * std::conj(ZE[i][5])) *
                                    ZEL[2][2]) *
                               ZN[1][2])) /
                     2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup193[i] = (I * (sqrt(2) * g1 * std::conj(ZN[1][0]) *
                               (std::conj(ZEL[2][0]) * ZE[i][0] +
                                std::conj(ZEL[2][1]) * ZE[i][1] +
                                std::conj(ZEL[2][2]) * ZE[i][2]) +
                           sqrt(2) * g2 * std::conj(ZN[1][1]) *
                               (std::conj(ZEL[2][0]) * ZE[i][0] +
                                std::conj(ZEL[2][1]) * ZE[i][1] +
                                std::conj(ZEL[2][2]) * ZE[i][2]) -
                           2 * std::conj(ZN[1][2]) *
                               (std::conj(ZEL[2][0]) *
                                    (Ye[0][0] * ZE[i][3] + Ye[1][0] * ZE[i][4] +
                                     Ye[2][0] * ZE[i][5]) +
                                std::conj(ZEL[2][1]) *
                                    (Ye[0][1] * ZE[i][3] + Ye[1][1] * ZE[i][4] +
                                     Ye[2][1] * ZE[i][5]) +
                                std::conj(ZEL[2][2]) *
                                    (Ye[0][2] * ZE[i][3] + Ye[1][2] * ZE[i][4] +
                                     Ye[2][2] * ZE[i][5])))) /
                     2.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup194[i] = -(I * (sqrt(2) * g1 *
                                (ZE[i][3] * ZER[2][0] + ZE[i][4] * ZER[2][1] +
                                 ZE[i][5] * ZER[2][2]) *
                                ZN[1][0] +
                            (ZE[i][0] * (std::conj(Ye[0][0]) * ZER[2][0] +
                                         std::conj(Ye[1][0]) * ZER[2][1] +
                                         std::conj(Ye[2][0]) * ZER[2][2]) +
                             ZE[i][1] * (std::conj(Ye[0][1]) * ZER[2][0] +
                                         std::conj(Ye[1][1]) * ZER[2][1] +
                                         std::conj(Ye[2][1]) * ZER[2][2]) +
                             ZE[i][2] * (std::conj(Ye[0][2]) * ZER[2][0] +
                                         std::conj(Ye[1][2]) * ZER[2][1] +
                                         std::conj(Ye[2][2]) * ZER[2][2])) *
                                ZN[1][2]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup195[i] =
            (I * std::conj(PhiUR) *
             (2 * sqrt(2) * g1 * std::conj(ZN[1][0]) *
                  (std::conj(ZU[i][3]) * std::conj(ZUR[0][0]) +
                   std::conj(ZU[i][4]) * std::conj(ZUR[0][1]) +
                   std::conj(ZU[i][5]) * std::conj(ZUR[0][2])) -
              3 * std::conj(ZN[1][3]) *
                  (std::conj(ZU[i][0]) * (std::conj(ZUR[0][0]) * Yu[0][0] +
                                          std::conj(ZUR[0][1]) * Yu[1][0] +
                                          std::conj(ZUR[0][2]) * Yu[2][0]) +
                   std::conj(ZU[i][1]) * (std::conj(ZUR[0][0]) * Yu[0][1] +
                                          std::conj(ZUR[0][1]) * Yu[1][1] +
                                          std::conj(ZUR[0][2]) * Yu[2][1]) +
                   std::conj(ZU[i][2]) * (std::conj(ZUR[0][0]) * Yu[0][2] +
                                          std::conj(ZUR[0][1]) * Yu[1][2] +
                                          std::conj(ZUR[0][2]) * Yu[2][2])))) /
            3.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup196[i] = -0.16666666666666666 *
                     (I * std::conj(PhiUL) *
                      (sqrt(2) * g1 * ZN[1][0] *
                           (std::conj(ZU[i][0]) * ZUL[0][0] +
                            std::conj(ZU[i][1]) * ZUL[0][1] +
                            std::conj(ZU[i][2]) * ZUL[0][2]) +
                       3 * sqrt(2) * g2 * ZN[1][1] *
                           (std::conj(ZU[i][0]) * ZUL[0][0] +
                            std::conj(ZU[i][1]) * ZUL[0][1] +
                            std::conj(ZU[i][2]) * ZUL[0][2]) +
                       6 * ZN[1][3] *
                           ((std::conj(Yu[0][0]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][0]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][0]) * std::conj(ZU[i][5])) *
                                ZUL[0][0] +
                            (std::conj(Yu[0][1]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][1]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][1]) * std::conj(ZU[i][5])) *
                                ZUL[0][1] +
                            (std::conj(Yu[0][2]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][2]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][2]) * std::conj(ZU[i][5])) *
                                ZUL[0][2])));
    }
    for (size_t i = 0; i < 6; i++) {
        coup197[i] = -0.16666666666666666 *
                     (I * PhiUL *
                      (sqrt(2) * g1 * std::conj(ZN[1][0]) *
                           (std::conj(ZUL[0][0]) * ZU[i][0] +
                            std::conj(ZUL[0][1]) * ZU[i][1] +
                            std::conj(ZUL[0][2]) * ZU[i][2]) +
                       3 * sqrt(2) * g2 * std::conj(ZN[1][1]) *
                           (std::conj(ZUL[0][0]) * ZU[i][0] +
                            std::conj(ZUL[0][1]) * ZU[i][1] +
                            std::conj(ZUL[0][2]) * ZU[i][2]) +
                       6 * std::conj(ZN[1][3]) *
                           (std::conj(ZUL[0][0]) *
                                (Yu[0][0] * ZU[i][3] + Yu[1][0] * ZU[i][4] +
                                 Yu[2][0] * ZU[i][5]) +
                            std::conj(ZUL[0][1]) *
                                (Yu[0][1] * ZU[i][3] + Yu[1][1] * ZU[i][4] +
                                 Yu[2][1] * ZU[i][5]) +
                            std::conj(ZUL[0][2]) *
                                (Yu[0][2] * ZU[i][3] + Yu[1][2] * ZU[i][4] +
                                 Yu[2][2] * ZU[i][5]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup198[i] = (I * PhiUR *
                      (2 * sqrt(2) * g1 * ZN[1][0] *
                           (ZU[i][3] * ZUR[0][0] + ZU[i][4] * ZUR[0][1] +
                            ZU[i][5] * ZUR[0][2]) -
                       3 * ZN[1][3] *
                           (ZU[i][0] * (std::conj(Yu[0][0]) * ZUR[0][0] +
                                        std::conj(Yu[1][0]) * ZUR[0][1] +
                                        std::conj(Yu[2][0]) * ZUR[0][2]) +
                            ZU[i][1] * (std::conj(Yu[0][1]) * ZUR[0][0] +
                                        std::conj(Yu[1][1]) * ZUR[0][1] +
                                        std::conj(Yu[2][1]) * ZUR[0][2]) +
                            ZU[i][2] * (std::conj(Yu[0][2]) * ZUR[0][0] +
                                        std::conj(Yu[1][2]) * ZUR[0][1] +
                                        std::conj(Yu[2][2]) * ZUR[0][2])))) /
                     3.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup199[i] =
            (I * std::conj(PhiUR) *
             (2 * sqrt(2) * g1 * std::conj(ZN[1][0]) *
                  (std::conj(ZU[i][3]) * std::conj(ZUR[1][0]) +
                   std::conj(ZU[i][4]) * std::conj(ZUR[1][1]) +
                   std::conj(ZU[i][5]) * std::conj(ZUR[1][2])) -
              3 * std::conj(ZN[1][3]) *
                  (std::conj(ZU[i][0]) * (std::conj(ZUR[1][0]) * Yu[0][0] +
                                          std::conj(ZUR[1][1]) * Yu[1][0] +
                                          std::conj(ZUR[1][2]) * Yu[2][0]) +
                   std::conj(ZU[i][1]) * (std::conj(ZUR[1][0]) * Yu[0][1] +
                                          std::conj(ZUR[1][1]) * Yu[1][1] +
                                          std::conj(ZUR[1][2]) * Yu[2][1]) +
                   std::conj(ZU[i][2]) * (std::conj(ZUR[1][0]) * Yu[0][2] +
                                          std::conj(ZUR[1][1]) * Yu[1][2] +
                                          std::conj(ZUR[1][2]) * Yu[2][2])))) /
            3.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup200[i] = -0.16666666666666666 *
                     (I * std::conj(PhiUL) *
                      (sqrt(2) * g1 * ZN[1][0] *
                           (std::conj(ZU[i][0]) * ZUL[1][0] +
                            std::conj(ZU[i][1]) * ZUL[1][1] +
                            std::conj(ZU[i][2]) * ZUL[1][2]) +
                       3 * sqrt(2) * g2 * ZN[1][1] *
                           (std::conj(ZU[i][0]) * ZUL[1][0] +
                            std::conj(ZU[i][1]) * ZUL[1][1] +
                            std::conj(ZU[i][2]) * ZUL[1][2]) +
                       6 * ZN[1][3] *
                           ((std::conj(Yu[0][0]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][0]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][0]) * std::conj(ZU[i][5])) *
                                ZUL[1][0] +
                            (std::conj(Yu[0][1]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][1]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][1]) * std::conj(ZU[i][5])) *
                                ZUL[1][1] +
                            (std::conj(Yu[0][2]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][2]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][2]) * std::conj(ZU[i][5])) *
                                ZUL[1][2])));
    }
    for (size_t i = 0; i < 6; i++) {
        coup201[i] = -0.16666666666666666 *
                     (I * PhiUL *
                      (sqrt(2) * g1 * std::conj(ZN[1][0]) *
                           (std::conj(ZUL[1][0]) * ZU[i][0] +
                            std::conj(ZUL[1][1]) * ZU[i][1] +
                            std::conj(ZUL[1][2]) * ZU[i][2]) +
                       3 * sqrt(2) * g2 * std::conj(ZN[1][1]) *
                           (std::conj(ZUL[1][0]) * ZU[i][0] +
                            std::conj(ZUL[1][1]) * ZU[i][1] +
                            std::conj(ZUL[1][2]) * ZU[i][2]) +
                       6 * std::conj(ZN[1][3]) *
                           (std::conj(ZUL[1][0]) *
                                (Yu[0][0] * ZU[i][3] + Yu[1][0] * ZU[i][4] +
                                 Yu[2][0] * ZU[i][5]) +
                            std::conj(ZUL[1][1]) *
                                (Yu[0][1] * ZU[i][3] + Yu[1][1] * ZU[i][4] +
                                 Yu[2][1] * ZU[i][5]) +
                            std::conj(ZUL[1][2]) *
                                (Yu[0][2] * ZU[i][3] + Yu[1][2] * ZU[i][4] +
                                 Yu[2][2] * ZU[i][5]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup202[i] = (I * PhiUR *
                      (2 * sqrt(2) * g1 * ZN[1][0] *
                           (ZU[i][3] * ZUR[1][0] + ZU[i][4] * ZUR[1][1] +
                            ZU[i][5] * ZUR[1][2]) -
                       3 * ZN[1][3] *
                           (ZU[i][0] * (std::conj(Yu[0][0]) * ZUR[1][0] +
                                        std::conj(Yu[1][0]) * ZUR[1][1] +
                                        std::conj(Yu[2][0]) * ZUR[1][2]) +
                            ZU[i][1] * (std::conj(Yu[0][1]) * ZUR[1][0] +
                                        std::conj(Yu[1][1]) * ZUR[1][1] +
                                        std::conj(Yu[2][1]) * ZUR[1][2]) +
                            ZU[i][2] * (std::conj(Yu[0][2]) * ZUR[1][0] +
                                        std::conj(Yu[1][2]) * ZUR[1][1] +
                                        std::conj(Yu[2][2]) * ZUR[1][2])))) /
                     3.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup203[i] =
            (I * std::conj(PhiUR) *
             (2 * sqrt(2) * g1 * std::conj(ZN[1][0]) *
                  (std::conj(ZU[i][3]) * std::conj(ZUR[2][0]) +
                   std::conj(ZU[i][4]) * std::conj(ZUR[2][1]) +
                   std::conj(ZU[i][5]) * std::conj(ZUR[2][2])) -
              3 * std::conj(ZN[1][3]) *
                  (std::conj(ZU[i][0]) * (std::conj(ZUR[2][0]) * Yu[0][0] +
                                          std::conj(ZUR[2][1]) * Yu[1][0] +
                                          std::conj(ZUR[2][2]) * Yu[2][0]) +
                   std::conj(ZU[i][1]) * (std::conj(ZUR[2][0]) * Yu[0][1] +
                                          std::conj(ZUR[2][1]) * Yu[1][1] +
                                          std::conj(ZUR[2][2]) * Yu[2][1]) +
                   std::conj(ZU[i][2]) * (std::conj(ZUR[2][0]) * Yu[0][2] +
                                          std::conj(ZUR[2][1]) * Yu[1][2] +
                                          std::conj(ZUR[2][2]) * Yu[2][2])))) /
            3.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup204[i] = -0.16666666666666666 *
                     (I * std::conj(PhiUL) *
                      (sqrt(2) * g1 * ZN[1][0] *
                           (std::conj(ZU[i][0]) * ZUL[2][0] +
                            std::conj(ZU[i][1]) * ZUL[2][1] +
                            std::conj(ZU[i][2]) * ZUL[2][2]) +
                       3 * sqrt(2) * g2 * ZN[1][1] *
                           (std::conj(ZU[i][0]) * ZUL[2][0] +
                            std::conj(ZU[i][1]) * ZUL[2][1] +
                            std::conj(ZU[i][2]) * ZUL[2][2]) +
                       6 * ZN[1][3] *
                           ((std::conj(Yu[0][0]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][0]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][0]) * std::conj(ZU[i][5])) *
                                ZUL[2][0] +
                            (std::conj(Yu[0][1]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][1]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][1]) * std::conj(ZU[i][5])) *
                                ZUL[2][1] +
                            (std::conj(Yu[0][2]) * std::conj(ZU[i][3]) +
                             std::conj(Yu[1][2]) * std::conj(ZU[i][4]) +
                             std::conj(Yu[2][2]) * std::conj(ZU[i][5])) *
                                ZUL[2][2])));
    }
    for (size_t i = 0; i < 6; i++) {
        coup205[i] = -0.16666666666666666 *
                     (I * PhiUL *
                      (sqrt(2) * g1 * std::conj(ZN[1][0]) *
                           (std::conj(ZUL[2][0]) * ZU[i][0] +
                            std::conj(ZUL[2][1]) * ZU[i][1] +
                            std::conj(ZUL[2][2]) * ZU[i][2]) +
                       3 * sqrt(2) * g2 * std::conj(ZN[1][1]) *
                           (std::conj(ZUL[2][0]) * ZU[i][0] +
                            std::conj(ZUL[2][1]) * ZU[i][1] +
                            std::conj(ZUL[2][2]) * ZU[i][2]) +
                       6 * std::conj(ZN[1][3]) *
                           (std::conj(ZUL[2][0]) *
                                (Yu[0][0] * ZU[i][3] + Yu[1][0] * ZU[i][4] +
                                 Yu[2][0] * ZU[i][5]) +
                            std::conj(ZUL[2][1]) *
                                (Yu[0][1] * ZU[i][3] + Yu[1][1] * ZU[i][4] +
                                 Yu[2][1] * ZU[i][5]) +
                            std::conj(ZUL[2][2]) *
                                (Yu[0][2] * ZU[i][3] + Yu[1][2] * ZU[i][4] +
                                 Yu[2][2] * ZU[i][5]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup206[i] = (I * PhiUR *
                      (2 * sqrt(2) * g1 * ZN[1][0] *
                           (ZU[i][3] * ZUR[2][0] + ZU[i][4] * ZUR[2][1] +
                            ZU[i][5] * ZUR[2][2]) -
                       3 * ZN[1][3] *
                           (ZU[i][0] * (std::conj(Yu[0][0]) * ZUR[2][0] +
                                        std::conj(Yu[1][0]) * ZUR[2][1] +
                                        std::conj(Yu[2][0]) * ZUR[2][2]) +
                            ZU[i][1] * (std::conj(Yu[0][1]) * ZUR[2][0] +
                                        std::conj(Yu[1][1]) * ZUR[2][1] +
                                        std::conj(Yu[2][1]) * ZUR[2][2]) +
                            ZU[i][2] * (std::conj(Yu[0][2]) * ZUR[2][0] +
                                        std::conj(Yu[1][2]) * ZUR[2][1] +
                                        std::conj(Yu[2][2]) * ZUR[2][2])))) /
                     3.;
    }
    for (size_t i = 0; i < 6; i++) {
        coup207[i] =
            -0.3333333333333333 *
            (I *
             (sqrt(2) * g1 *
                  (std::conj(ZD[i][3]) * std::conj(ZDR[0][0]) +
                   std::conj(ZD[i][4]) * std::conj(ZDR[0][1]) +
                   std::conj(ZD[i][5]) * std::conj(ZDR[0][2])) *
                  std::conj(ZN[1][0]) +
              3 * std::conj(ZN[1][2]) *
                  (std::conj(ZD[i][0]) * (std::conj(ZDR[0][0]) * Yd[0][0] +
                                          std::conj(ZDR[0][1]) * Yd[1][0] +
                                          std::conj(ZDR[0][2]) * Yd[2][0]) +
                   std::conj(ZD[i][1]) * (std::conj(ZDR[0][0]) * Yd[0][1] +
                                          std::conj(ZDR[0][1]) * Yd[1][1] +
                                          std::conj(ZDR[0][2]) * Yd[2][1]) +
                   std::conj(ZD[i][2]) * (std::conj(ZDR[0][0]) * Yd[0][2] +
                                          std::conj(ZDR[0][1]) * Yd[1][2] +
                                          std::conj(ZDR[0][2]) * Yd[2][2]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup208[i] = -0.16666666666666666 *
                     (I * (sqrt(2) * g1 *
                               (std::conj(ZD[i][0]) * ZDL[0][0] +
                                std::conj(ZD[i][1]) * ZDL[0][1] +
                                std::conj(ZD[i][2]) * ZDL[0][2]) *
                               ZN[1][0] -
                           3 * sqrt(2) * g2 *
                               (std::conj(ZD[i][0]) * ZDL[0][0] +
                                std::conj(ZD[i][1]) * ZDL[0][1] +
                                std::conj(ZD[i][2]) * ZDL[0][2]) *
                               ZN[1][1] +
                           6 *
                               ((std::conj(Yd[0][0]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][0]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][0]) * std::conj(ZD[i][5])) *
                                    ZDL[0][0] +
                                (std::conj(Yd[0][1]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][1]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][1]) * std::conj(ZD[i][5])) *
                                    ZDL[0][1] +
                                (std::conj(Yd[0][2]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][2]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][2]) * std::conj(ZD[i][5])) *
                                    ZDL[0][2]) *
                               ZN[1][2]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup209[i] = -0.16666666666666666 *
                     (I * (sqrt(2) * g1 * std::conj(ZN[1][0]) *
                               (std::conj(ZDL[0][0]) * ZD[i][0] +
                                std::conj(ZDL[0][1]) * ZD[i][1] +
                                std::conj(ZDL[0][2]) * ZD[i][2]) -
                           3 * sqrt(2) * g2 * std::conj(ZN[1][1]) *
                               (std::conj(ZDL[0][0]) * ZD[i][0] +
                                std::conj(ZDL[0][1]) * ZD[i][1] +
                                std::conj(ZDL[0][2]) * ZD[i][2]) +
                           6 * std::conj(ZN[1][2]) *
                               (std::conj(ZDL[0][0]) *
                                    (Yd[0][0] * ZD[i][3] + Yd[1][0] * ZD[i][4] +
                                     Yd[2][0] * ZD[i][5]) +
                                std::conj(ZDL[0][1]) *
                                    (Yd[0][1] * ZD[i][3] + Yd[1][1] * ZD[i][4] +
                                     Yd[2][1] * ZD[i][5]) +
                                std::conj(ZDL[0][2]) *
                                    (Yd[0][2] * ZD[i][3] + Yd[1][2] * ZD[i][4] +
                                     Yd[2][2] * ZD[i][5]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup210[i] = -0.3333333333333333 *
                     (I * (sqrt(2) * g1 *
                               (ZD[i][3] * ZDR[0][0] + ZD[i][4] * ZDR[0][1] +
                                ZD[i][5] * ZDR[0][2]) *
                               ZN[1][0] +
                           3 *
                               (ZD[i][0] * (std::conj(Yd[0][0]) * ZDR[0][0] +
                                            std::conj(Yd[1][0]) * ZDR[0][1] +
                                            std::conj(Yd[2][0]) * ZDR[0][2]) +
                                ZD[i][1] * (std::conj(Yd[0][1]) * ZDR[0][0] +
                                            std::conj(Yd[1][1]) * ZDR[0][1] +
                                            std::conj(Yd[2][1]) * ZDR[0][2]) +
                                ZD[i][2] * (std::conj(Yd[0][2]) * ZDR[0][0] +
                                            std::conj(Yd[1][2]) * ZDR[0][1] +
                                            std::conj(Yd[2][2]) * ZDR[0][2])) *
                               ZN[1][2]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup211[i] =
            -0.3333333333333333 *
            (I *
             (sqrt(2) * g1 *
                  (std::conj(ZD[i][3]) * std::conj(ZDR[1][0]) +
                   std::conj(ZD[i][4]) * std::conj(ZDR[1][1]) +
                   std::conj(ZD[i][5]) * std::conj(ZDR[1][2])) *
                  std::conj(ZN[1][0]) +
              3 * std::conj(ZN[1][2]) *
                  (std::conj(ZD[i][0]) * (std::conj(ZDR[1][0]) * Yd[0][0] +
                                          std::conj(ZDR[1][1]) * Yd[1][0] +
                                          std::conj(ZDR[1][2]) * Yd[2][0]) +
                   std::conj(ZD[i][1]) * (std::conj(ZDR[1][0]) * Yd[0][1] +
                                          std::conj(ZDR[1][1]) * Yd[1][1] +
                                          std::conj(ZDR[1][2]) * Yd[2][1]) +
                   std::conj(ZD[i][2]) * (std::conj(ZDR[1][0]) * Yd[0][2] +
                                          std::conj(ZDR[1][1]) * Yd[1][2] +
                                          std::conj(ZDR[1][2]) * Yd[2][2]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup212[i] = -0.16666666666666666 *
                     (I * (sqrt(2) * g1 *
                               (std::conj(ZD[i][0]) * ZDL[1][0] +
                                std::conj(ZD[i][1]) * ZDL[1][1] +
                                std::conj(ZD[i][2]) * ZDL[1][2]) *
                               ZN[1][0] -
                           3 * sqrt(2) * g2 *
                               (std::conj(ZD[i][0]) * ZDL[1][0] +
                                std::conj(ZD[i][1]) * ZDL[1][1] +
                                std::conj(ZD[i][2]) * ZDL[1][2]) *
                               ZN[1][1] +
                           6 *
                               ((std::conj(Yd[0][0]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][0]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][0]) * std::conj(ZD[i][5])) *
                                    ZDL[1][0] +
                                (std::conj(Yd[0][1]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][1]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][1]) * std::conj(ZD[i][5])) *
                                    ZDL[1][1] +
                                (std::conj(Yd[0][2]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][2]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][2]) * std::conj(ZD[i][5])) *
                                    ZDL[1][2]) *
                               ZN[1][2]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup213[i] = -0.16666666666666666 *
                     (I * (sqrt(2) * g1 * std::conj(ZN[1][0]) *
                               (std::conj(ZDL[1][0]) * ZD[i][0] +
                                std::conj(ZDL[1][1]) * ZD[i][1] +
                                std::conj(ZDL[1][2]) * ZD[i][2]) -
                           3 * sqrt(2) * g2 * std::conj(ZN[1][1]) *
                               (std::conj(ZDL[1][0]) * ZD[i][0] +
                                std::conj(ZDL[1][1]) * ZD[i][1] +
                                std::conj(ZDL[1][2]) * ZD[i][2]) +
                           6 * std::conj(ZN[1][2]) *
                               (std::conj(ZDL[1][0]) *
                                    (Yd[0][0] * ZD[i][3] + Yd[1][0] * ZD[i][4] +
                                     Yd[2][0] * ZD[i][5]) +
                                std::conj(ZDL[1][1]) *
                                    (Yd[0][1] * ZD[i][3] + Yd[1][1] * ZD[i][4] +
                                     Yd[2][1] * ZD[i][5]) +
                                std::conj(ZDL[1][2]) *
                                    (Yd[0][2] * ZD[i][3] + Yd[1][2] * ZD[i][4] +
                                     Yd[2][2] * ZD[i][5]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup214[i] = -0.3333333333333333 *
                     (I * (sqrt(2) * g1 *
                               (ZD[i][3] * ZDR[1][0] + ZD[i][4] * ZDR[1][1] +
                                ZD[i][5] * ZDR[1][2]) *
                               ZN[1][0] +
                           3 *
                               (ZD[i][0] * (std::conj(Yd[0][0]) * ZDR[1][0] +
                                            std::conj(Yd[1][0]) * ZDR[1][1] +
                                            std::conj(Yd[2][0]) * ZDR[1][2]) +
                                ZD[i][1] * (std::conj(Yd[0][1]) * ZDR[1][0] +
                                            std::conj(Yd[1][1]) * ZDR[1][1] +
                                            std::conj(Yd[2][1]) * ZDR[1][2]) +
                                ZD[i][2] * (std::conj(Yd[0][2]) * ZDR[1][0] +
                                            std::conj(Yd[1][2]) * ZDR[1][1] +
                                            std::conj(Yd[2][2]) * ZDR[1][2])) *
                               ZN[1][2]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup215[i] =
            -0.3333333333333333 *
            (I *
             (sqrt(2) * g1 *
                  (std::conj(ZD[i][3]) * std::conj(ZDR[2][0]) +
                   std::conj(ZD[i][4]) * std::conj(ZDR[2][1]) +
                   std::conj(ZD[i][5]) * std::conj(ZDR[2][2])) *
                  std::conj(ZN[1][0]) +
              3 * std::conj(ZN[1][2]) *
                  (std::conj(ZD[i][0]) * (std::conj(ZDR[2][0]) * Yd[0][0] +
                                          std::conj(ZDR[2][1]) * Yd[1][0] +
                                          std::conj(ZDR[2][2]) * Yd[2][0]) +
                   std::conj(ZD[i][1]) * (std::conj(ZDR[2][0]) * Yd[0][1] +
                                          std::conj(ZDR[2][1]) * Yd[1][1] +
                                          std::conj(ZDR[2][2]) * Yd[2][1]) +
                   std::conj(ZD[i][2]) * (std::conj(ZDR[2][0]) * Yd[0][2] +
                                          std::conj(ZDR[2][1]) * Yd[1][2] +
                                          std::conj(ZDR[2][2]) * Yd[2][2]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup216[i] = -0.16666666666666666 *
                     (I * (sqrt(2) * g1 *
                               (std::conj(ZD[i][0]) * ZDL[2][0] +
                                std::conj(ZD[i][1]) * ZDL[2][1] +
                                std::conj(ZD[i][2]) * ZDL[2][2]) *
                               ZN[1][0] -
                           3 * sqrt(2) * g2 *
                               (std::conj(ZD[i][0]) * ZDL[2][0] +
                                std::conj(ZD[i][1]) * ZDL[2][1] +
                                std::conj(ZD[i][2]) * ZDL[2][2]) *
                               ZN[1][1] +
                           6 *
                               ((std::conj(Yd[0][0]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][0]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][0]) * std::conj(ZD[i][5])) *
                                    ZDL[2][0] +
                                (std::conj(Yd[0][1]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][1]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][1]) * std::conj(ZD[i][5])) *
                                    ZDL[2][1] +
                                (std::conj(Yd[0][2]) * std::conj(ZD[i][3]) +
                                 std::conj(Yd[1][2]) * std::conj(ZD[i][4]) +
                                 std::conj(Yd[2][2]) * std::conj(ZD[i][5])) *
                                    ZDL[2][2]) *
                               ZN[1][2]));
    }
    for (size_t i = 0; i < 6; i++) {
        coup217[i] = -0.16666666666666666 *
                     (I * (sqrt(2) * g1 * std::conj(ZN[1][0]) *
                               (std::conj(ZDL[2][0]) * ZD[i][0] +
                                std::conj(ZDL[2][1]) * ZD[i][1] +
                                std::conj(ZDL[2][2]) * ZD[i][2]) -
                           3 * sqrt(2) * g2 * std::conj(ZN[1][1]) *
                               (std::conj(ZDL[2][0]) * ZD[i][0] +
                                std::conj(ZDL[2][1]) * ZD[i][1] +
                                std::conj(ZDL[2][2]) * ZD[i][2]) +
                           6 * std::conj(ZN[1][2]) *
                               (std::conj(ZDL[2][0]) *
                                    (Yd[0][0] * ZD[i][3] + Yd[1][0] * ZD[i][4] +
                                     Yd[2][0] * ZD[i][5]) +
                                std::conj(ZDL[2][1]) *
                                    (Yd[0][1] * ZD[i][3] + Yd[1][1] * ZD[i][4] +
                                     Yd[2][1] * ZD[i][5]) +
                                std::conj(ZDL[2][2]) *
                                    (Yd[0][2] * ZD[i][3] + Yd[1][2] * ZD[i][4] +
                                     Yd[2][2] * ZD[i][5]))));
    }
    for (size_t i = 0; i < 6; i++) {
        coup218[i] = -0.3333333333333333 *
                     (I * (sqrt(2) * g1 *
                               (ZD[i][3] * ZDR[2][0] + ZD[i][4] * ZDR[2][1] +
                                ZD[i][5] * ZDR[2][2]) *
                               ZN[1][0] +
                           3 *
                               (ZD[i][0] * (std::conj(Yd[0][0]) * ZDR[2][0] +
                                            std::conj(Yd[1][0]) * ZDR[2][1] +
                                            std::conj(Yd[2][0]) * ZDR[2][2]) +
                                ZD[i][1] * (std::conj(Yd[0][1]) * ZDR[2][0] +
                                            std::conj(Yd[1][1]) * ZDR[2][1] +
                                            std::conj(Yd[2][1]) * ZDR[2][2]) +
                                ZD[i][2] * (std::conj(Yd[0][2]) * ZDR[2][0] +
                                            std::conj(Yd[1][2]) * ZDR[2][1] +
                                            std::conj(Yd[2][2]) * ZDR[2][2])) *
                               ZN[1][2]));
    }
}
}  // namespace DT
