///////////////////CODE GENERATED VIA MATHEMATICA///////////////////

#include "../model.hpp"
#include "general_model.hpp"

namespace DT {
void ModelInfo::load_tokens() {
    using namespace PAR;
    for (size_t i = 0; i < 6; i++) {
        coup1[i] =
            (g1 * std::conj(ZN[0][0]) *
                 (std::exp(I * eta) * std::conj(ZN[0][2]) *
                      (cplx(0, 1) * ZH[i][0] + ZH[i][3]) +
                  std::conj(ZN[0][3]) * (cplx(0, -1) * ZH[i][1] - ZH[i][4])) +
             g2 * std::conj(ZN[0][1]) *
                 (cplx(0, -1) * std::exp(I * eta) * std::conj(ZN[0][2]) *
                      (ZH[i][0] - cplx(0, 1) * ZH[i][3]) +
                  std::conj(ZN[0][3]) * (cplx(0, 1) * ZH[i][1] + ZH[i][4])) +
             sqrt(2) * std::exp(I * eta) *
                 (cplx(0, 1) * lam * std::conj(ZN[0][3]) *
                      (std::conj(ZN[0][4]) *
                           (ZH[i][0] + cplx(0, 1) * ZH[i][3]) +
                       std::exp(I * etaS) * std::conj(ZN[0][2]) *
                           (ZH[i][2] + cplx(0, 1) * ZH[i][5])) +
                  std::conj(ZN[0][4]) *
                      (cplx(0, 1) * std::exp(I * eta) * lam *
                           std::conj(ZN[0][2]) *
                           (ZH[i][1] + cplx(0, 1) * ZH[i][4]) +
                       std::exp(I * etaS) * kap * std::conj(ZN[0][4]) *
                           (cplx(0, -1) * ZH[i][2] + ZH[i][5])))) /
            std::exp(I * eta);
    }
    for (size_t i = 0; i < 6; i++) {
        coup2[i] =
            (cplx(0, -1) * sqrt(2) * std::conj(kap) * (ZN[0][4] * ZN[0][4]) *
             ZH[i][2]) /
                std::exp(I * etaS) -
            (sqrt(2) * std::conj(kap) * (ZN[0][4] * ZN[0][4]) * ZH[i][5]) /
                std::exp(I * etaS) -
            cplx(0, 1) * std::exp(I * eta) * g1 * ZH[i][1] * ZN[0][0] *
                ZN[0][3] +
            std::exp(I * eta) * g1 * ZH[i][4] * ZN[0][0] * ZN[0][3] +
            cplx(0, 1) * std::exp(I * eta) * g2 * ZH[i][1] * ZN[0][1] *
                ZN[0][3] -
            std::exp(I * eta) * g2 * ZH[i][4] * ZN[0][1] * ZN[0][3] +
            (cplx(0, 1) * sqrt(2) * std::conj(lam) * ZH[i][2] * ZN[0][2] *
             ZN[0][3]) /
                std::exp(I * etaS) +
            (sqrt(2) * std::conj(lam) * ZH[i][5] * ZN[0][2] * ZN[0][3]) /
                std::exp(I * etaS) +
            (cplx(0, 1) * sqrt(2) * std::conj(lam) * ZH[i][1] * ZN[0][2] *
             ZN[0][4]) /
                std::exp(I * eta) +
            (sqrt(2) * std::conj(lam) * ZH[i][4] * ZN[0][2] * ZN[0][4]) /
                std::exp(I * eta) +
            cplx(0, 1) * ZH[i][0] *
                ((g1 * ZN[0][0] - g2 * ZN[0][1]) * ZN[0][2] +
                 sqrt(2) * std::conj(lam) * ZN[0][3] * ZN[0][4]) +
            ZH[i][3] * ((-(g1 * ZN[0][0]) + g2 * ZN[0][1]) * ZN[0][2] +
                        sqrt(2) * std::conj(lam) * ZN[0][3] * ZN[0][4]);
    }
    for (size_t i = 0; i < 6; i++) {
        coup3[i] =
            (std::exp(I * etaS) *
                 (std::exp(I * etaS) *
                      (cplx(0, 1) * std::exp(I * (eta + etaS)) *
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
                            2 * sqrt(2) * std::exp(I * (eta + etaS)) * Tlam *
                                (ZH[1][1] + cplx(0, 1) * ZH[1][4]) *
                                (ZH[1][2] + cplx(0, 1) * ZH[1][5])) +
                       2 * sqrt(2) * std::conj(Tlam) *
                           (cplx(0, 1) * ZH[1][1] + ZH[1][4]) *
                           (ZH[1][2] - cplx(0, 1) * ZH[1][5])) +
                  2 * std::exp(2 * I * eta) * lam * std::conj(kap) *
                      (2 * vS * (ZH[1][1] + cplx(0, 1) * ZH[1][4]) +
                       vu * (ZH[1][2] - cplx(0, 1) * ZH[1][5])) *
                      (cplx(0, 1) * ZH[1][2] + ZH[1][5]) +
                  2 * std::exp(2 * I * etaS) * std::conj(lam) *
                      (cplx(0, -2) * std::exp(I * eta) * lam *
                           (vd *
                                ((ZH[1][1] * ZH[1][1]) + (ZH[1][2] * ZH[1][2]) +
                                 (ZH[1][4] * ZH[1][4]) +
                                 (ZH[1][5] * ZH[1][5])) +
                            2 * vu * ZH[1][0] * ZH[1][1] +
                            2 * vS * ZH[1][0] * ZH[1][2]) +
                       std::exp(2 * I * etaS) * kap *
                           (ZH[1][2] + cplx(0, 1) * ZH[1][5]) *
                           (cplx(0, 2) * vS * ZH[1][1] +
                            cplx(0, 1) * vu * ZH[1][2] + 2 * vS * ZH[1][4] -
                            vu * ZH[1][5]))) *
                 ZH[i][0] +
             std::exp(I * etaS) *
                 (std::exp(I * etaS) *
                      (cplx(0, 1) * std::exp(I * (eta + etaS)) *
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
                            2 * sqrt(2) * std::exp(I * (eta + etaS)) * Tlam *
                                (ZH[1][0] + cplx(0, 1) * ZH[1][3]) *
                                (ZH[1][2] + cplx(0, 1) * ZH[1][5])) +
                       2 * sqrt(2) * std::conj(Tlam) *
                           (cplx(0, 1) * ZH[1][0] + ZH[1][3]) *
                           (ZH[1][2] - cplx(0, 1) * ZH[1][5])) +
                  2 * std::exp(2 * I * eta) * lam * std::conj(kap) *
                      (2 * vS * (ZH[1][0] + cplx(0, 1) * ZH[1][3]) +
                       vd * (ZH[1][2] - cplx(0, 1) * ZH[1][5])) *
                      (cplx(0, 1) * ZH[1][2] + ZH[1][5]) +
                  2 * std::exp(2 * I * etaS) * std::conj(lam) *
                      (cplx(0, -2) * std::exp(I * eta) * lam *
                           (vu *
                                ((ZH[1][0] * ZH[1][0]) + (ZH[1][2] * ZH[1][2]) +
                                 (ZH[1][3] * ZH[1][3]) +
                                 (ZH[1][5] * ZH[1][5])) +
                            2 * ZH[1][1] * (vd * ZH[1][0] + vS * ZH[1][2])) +
                       std::exp(2 * I * etaS) * kap *
                           (ZH[1][2] + cplx(0, 1) * ZH[1][5]) *
                           (cplx(0, 2) * vS * ZH[1][0] +
                            cplx(0, 1) * vd * ZH[1][2] + 2 * vS * ZH[1][3] -
                            vd * ZH[1][5]))) *
                 ZH[i][1] +
             2 * ((sqrt(2) * (cplx(0, 1) * std::exp(I * eta) *
                                  (-(std::conj(Tk) *
                                     ((ZH[1][2] - cplx(0, 1) * ZH[1][5]) *
                                      (ZH[1][2] - cplx(0, 1) * ZH[1][5]))) -
                                   std::exp(6 * I * etaS) * Tk *
                                       ((ZH[1][2] + cplx(0, 1) * ZH[1][5]) *
                                        (ZH[1][2] + cplx(0, 1) * ZH[1][5])) +
                                   std::exp(I * (eta + 4 * etaS)) * Tlam *
                                       (ZH[1][0] + cplx(0, 1) * ZH[1][3]) *
                                       (ZH[1][1] + cplx(0, 1) * ZH[1][4])) +
                              std::exp(2 * I * etaS) * std::conj(Tlam) *
                                  (ZH[1][0] - cplx(0, 1) * ZH[1][3]) *
                                  (cplx(0, 1) * ZH[1][1] + ZH[1][4])) +
                   cplx(0, 2) * std::exp(I * (eta + etaS)) * std::conj(kap) *
                       (-2 * std::exp(2 * I * etaS) * kap * vS *
                            (3 * (ZH[1][2] * ZH[1][2]) +
                             (ZH[1][5] * ZH[1][5])) +
                        std::exp(I * eta) * lam *
                            (vS * (ZH[1][0] + cplx(0, 1) * ZH[1][3]) *
                                 (ZH[1][1] + cplx(0, 1) * ZH[1][4]) +
                             (vu * (ZH[1][0] + cplx(0, 1) * ZH[1][3]) +
                              vd * (ZH[1][1] + cplx(0, 1) * ZH[1][4])) *
                                 (ZH[1][2] - cplx(0, 1) * ZH[1][5])))) *
                      ZH[i][2] -
                  std::exp(I * (2 * eta + etaS)) * lam * vu * std::conj(kap) *
                      (ZH[1][2] * ZH[1][2]) * ZH[i][3] +
                  std::exp(I * (2 * eta + etaS)) * lam * vu * std::conj(kap) *
                      (ZH[1][5] * ZH[1][5]) * ZH[i][3] -
                  sqrt(2) * std::exp(2 * I * (eta + 2 * etaS)) * Tlam *
                      ZH[1][1] * ZH[1][2] * ZH[i][3] -
                  2 * std::exp(I * (2 * eta + etaS)) * lam * vS *
                      std::conj(kap) * ZH[1][1] * ZH[1][2] * ZH[i][3] +
                  sqrt(2) * std::exp(2 * I * etaS) * std::conj(Tlam) *
                      ZH[1][1] * ZH[1][2] * ZH[i][3] -
                  cplx(0, 1) * std::exp(I * (eta + 3 * etaS)) * vd * (g1 * g1) *
                      ZH[1][0] * ZH[1][3] * ZH[i][3] -
                  cplx(0, 1) * std::exp(I * (eta + 3 * etaS)) * vd * (g2 * g2) *
                      ZH[1][0] * ZH[1][3] * ZH[i][3] +
                  cplx(0, 1) * std::exp(I * (eta + 3 * etaS)) * vu * (g1 * g1) *
                      ZH[1][1] * ZH[1][3] * ZH[i][3] +
                  cplx(0, 1) * std::exp(I * (eta + 3 * etaS)) * vu * (g2 * g2) *
                      ZH[1][1] * ZH[1][3] * ZH[i][3] -
                  cplx(0, 1) * sqrt(2) * std::exp(2 * I * (eta + 2 * etaS)) *
                      Tlam * ZH[1][2] * ZH[1][4] * ZH[i][3] -
                  cplx(0, 2) * std::exp(I * (2 * eta + etaS)) * lam * vS *
                      std::conj(kap) * ZH[1][2] * ZH[1][4] * ZH[i][3] -
                  cplx(0, 1) * sqrt(2) * std::exp(2 * I * etaS) *
                      std::conj(Tlam) * ZH[1][2] * ZH[1][4] * ZH[i][3] -
                  cplx(0, 1) * sqrt(2) * std::exp(2 * I * (eta + 2 * etaS)) *
                      Tlam * ZH[1][1] * ZH[1][5] * ZH[i][3] +
                  cplx(0, 2) * std::exp(I * (2 * eta + etaS)) * lam * vS *
                      std::conj(kap) * ZH[1][1] * ZH[1][5] * ZH[i][3] -
                  cplx(0, 1) * sqrt(2) * std::exp(2 * I * etaS) *
                      std::conj(Tlam) * ZH[1][1] * ZH[1][5] * ZH[i][3] +
                  cplx(0, 2) * std::exp(I * (2 * eta + etaS)) * lam * vu *
                      std::conj(kap) * ZH[1][2] * ZH[1][5] * ZH[i][3] +
                  sqrt(2) * std::exp(2 * I * (eta + 2 * etaS)) * Tlam *
                      ZH[1][4] * ZH[1][5] * ZH[i][3] -
                  2 * std::exp(I * (2 * eta + etaS)) * lam * vS *
                      std::conj(kap) * ZH[1][4] * ZH[1][5] * ZH[i][3] -
                  sqrt(2) * std::exp(2 * I * etaS) * std::conj(Tlam) *
                      ZH[1][4] * ZH[1][5] * ZH[i][3] -
                  std::exp(I * (2 * eta + etaS)) * lam * vd * std::conj(kap) *
                      (ZH[1][2] * ZH[1][2]) * ZH[i][4] +
                  std::exp(I * (2 * eta + etaS)) * lam * vd * std::conj(kap) *
                      (ZH[1][5] * ZH[1][5]) * ZH[i][4] -
                  sqrt(2) * std::exp(2 * I * (eta + 2 * etaS)) * Tlam *
                      ZH[1][0] * ZH[1][2] * ZH[i][4] -
                  2 * std::exp(I * (2 * eta + etaS)) * lam * vS *
                      std::conj(kap) * ZH[1][0] * ZH[1][2] * ZH[i][4] +
                  sqrt(2) * std::exp(2 * I * etaS) * std::conj(Tlam) *
                      ZH[1][0] * ZH[1][2] * ZH[i][4] -
                  cplx(0, 1) * sqrt(2) * std::exp(2 * I * (eta + 2 * etaS)) *
                      Tlam * ZH[1][2] * ZH[1][3] * ZH[i][4] -
                  cplx(0, 2) * std::exp(I * (2 * eta + etaS)) * lam * vS *
                      std::conj(kap) * ZH[1][2] * ZH[1][3] * ZH[i][4] -
                  cplx(0, 1) * sqrt(2) * std::exp(2 * I * etaS) *
                      std::conj(Tlam) * ZH[1][2] * ZH[1][3] * ZH[i][4] +
                  cplx(0, 1) * std::exp(I * (eta + 3 * etaS)) * vd * (g1 * g1) *
                      ZH[1][0] * ZH[1][4] * ZH[i][4] +
                  cplx(0, 1) * std::exp(I * (eta + 3 * etaS)) * vd * (g2 * g2) *
                      ZH[1][0] * ZH[1][4] * ZH[i][4] -
                  cplx(0, 1) * std::exp(I * (eta + 3 * etaS)) * vu * (g1 * g1) *
                      ZH[1][1] * ZH[1][4] * ZH[i][4] -
                  cplx(0, 1) * std::exp(I * (eta + 3 * etaS)) * vu * (g2 * g2) *
                      ZH[1][1] * ZH[1][4] * ZH[i][4] -
                  cplx(0, 1) * sqrt(2) * std::exp(2 * I * (eta + 2 * etaS)) *
                      Tlam * ZH[1][0] * ZH[1][5] * ZH[i][4] +
                  cplx(0, 2) * std::exp(I * (2 * eta + etaS)) * lam * vS *
                      std::conj(kap) * ZH[1][0] * ZH[1][5] * ZH[i][4] -
                  cplx(0, 1) * sqrt(2) * std::exp(2 * I * etaS) *
                      std::conj(Tlam) * ZH[1][0] * ZH[1][5] * ZH[i][4] +
                  cplx(0, 2) * std::exp(I * (2 * eta + etaS)) * lam * vd *
                      std::conj(kap) * ZH[1][2] * ZH[1][5] * ZH[i][4] +
                  sqrt(2) * std::exp(2 * I * (eta + 2 * etaS)) * Tlam *
                      ZH[1][3] * ZH[1][5] * ZH[i][4] -
                  2 * std::exp(I * (2 * eta + etaS)) * lam * vS *
                      std::conj(kap) * ZH[1][3] * ZH[1][5] * ZH[i][4] -
                  sqrt(2) * std::exp(2 * I * etaS) * std::conj(Tlam) *
                      ZH[1][3] * ZH[1][5] * ZH[i][4] +
                  sqrt(2) * std::exp(I * (eta + 6 * etaS)) * Tk *
                      (ZH[1][2] * ZH[1][2]) * ZH[i][5] -
                  sqrt(2) * std::exp(I * eta) * std::conj(Tk) *
                      (ZH[1][2] * ZH[1][2]) * ZH[i][5] -
                  sqrt(2) * std::exp(I * (eta + 6 * etaS)) * Tk *
                      (ZH[1][5] * ZH[1][5]) * ZH[i][5] +
                  sqrt(2) * std::exp(I * eta) * std::conj(Tk) *
                      (ZH[1][5] * ZH[1][5]) * ZH[i][5] -
                  sqrt(2) * std::exp(2 * I * (eta + 2 * etaS)) * Tlam *
                      ZH[1][0] * ZH[1][1] * ZH[i][5] +
                  2 * std::exp(I * (2 * eta + etaS)) * lam * vS *
                      std::conj(kap) * ZH[1][0] * ZH[1][1] * ZH[i][5] +
                  sqrt(2) * std::exp(2 * I * etaS) * std::conj(Tlam) *
                      ZH[1][0] * ZH[1][1] * ZH[i][5] +
                  2 * std::exp(I * (2 * eta + etaS)) * lam * vu *
                      std::conj(kap) * ZH[1][0] * ZH[1][2] * ZH[i][5] +
                  2 * std::exp(I * (2 * eta + etaS)) * lam * vd *
                      std::conj(kap) * ZH[1][1] * ZH[1][2] * ZH[i][5] -
                  cplx(0, 1) * sqrt(2) * std::exp(2 * I * (eta + 2 * etaS)) *
                      Tlam * ZH[1][1] * ZH[1][3] * ZH[i][5] +
                  cplx(0, 2) * std::exp(I * (2 * eta + etaS)) * lam * vS *
                      std::conj(kap) * ZH[1][1] * ZH[1][3] * ZH[i][5] -
                  cplx(0, 1) * sqrt(2) * std::exp(2 * I * etaS) *
                      std::conj(Tlam) * ZH[1][1] * ZH[1][3] * ZH[i][5] +
                  cplx(0, 2) * std::exp(I * (2 * eta + etaS)) * lam * vu *
                      std::conj(kap) * ZH[1][2] * ZH[1][3] * ZH[i][5] -
                  cplx(0, 1) * sqrt(2) * std::exp(2 * I * (eta + 2 * etaS)) *
                      Tlam * ZH[1][0] * ZH[1][4] * ZH[i][5] +
                  cplx(0, 2) * std::exp(I * (2 * eta + etaS)) * lam * vS *
                      std::conj(kap) * ZH[1][0] * ZH[1][4] * ZH[i][5] -
                  cplx(0, 1) * sqrt(2) * std::exp(2 * I * etaS) *
                      std::conj(Tlam) * ZH[1][0] * ZH[1][4] * ZH[i][5] +
                  cplx(0, 2) * std::exp(I * (2 * eta + etaS)) * lam * vd *
                      std::conj(kap) * ZH[1][2] * ZH[1][4] * ZH[i][5] +
                  sqrt(2) * std::exp(2 * I * (eta + 2 * etaS)) * Tlam *
                      ZH[1][3] * ZH[1][4] * ZH[i][5] -
                  2 * std::exp(I * (2 * eta + etaS)) * lam * vS *
                      std::conj(kap) * ZH[1][3] * ZH[1][4] * ZH[i][5] -
                  sqrt(2) * std::exp(2 * I * etaS) * std::conj(Tlam) *
                      ZH[1][3] * ZH[1][4] * ZH[i][5] -
                  cplx(0, 2) * std::exp(I * (2 * eta + etaS)) * lam * vu *
                      std::conj(kap) * ZH[1][0] * ZH[1][5] * ZH[i][5] -
                  cplx(0, 2) * std::exp(I * (2 * eta + etaS)) * lam * vd *
                      std::conj(kap) * ZH[1][1] * ZH[1][5] * ZH[i][5] +
                  cplx(0, 2) * sqrt(2) * std::exp(I * (eta + 6 * etaS)) * Tk *
                      ZH[1][2] * ZH[1][5] * ZH[i][5] -
                  cplx(0, 8) * std::exp(I * (eta + 3 * etaS)) * kap * vS *
                      std::conj(kap) * ZH[1][2] * ZH[1][5] * ZH[i][5] +
                  cplx(0, 2) * sqrt(2) * std::exp(I * eta) * std::conj(Tk) *
                      ZH[1][2] * ZH[1][5] * ZH[i][5] +
                  2 * std::exp(I * (2 * eta + etaS)) * lam * vu *
                      std::conj(kap) * ZH[1][3] * ZH[1][5] * ZH[i][5] +
                  2 * std::exp(I * (2 * eta + etaS)) * lam * vd *
                      std::conj(kap) * ZH[1][4] * ZH[1][5] * ZH[i][5] +
                  std::exp(3 * I * etaS) * std::conj(lam) *
                      (2 *
                           (cplx(0, -1) * std::exp(I * eta) * lam *
                                (vS * ((ZH[1][0] * ZH[1][0]) +
                                       (ZH[1][1] * ZH[1][1]) +
                                       (ZH[1][3] * ZH[1][3]) +
                                       (ZH[1][4] * ZH[1][4])) +
                                 2 * (vd * ZH[1][0] + vu * ZH[1][1]) *
                                     ZH[1][2]) +
                            std::exp(2 * I * etaS) * kap *
                                (vS * (cplx(0, 1) * ZH[1][0] + ZH[1][3]) *
                                     (ZH[1][1] - cplx(0, 1) * ZH[1][4]) +
                                 (cplx(0, 1) * vu * ZH[1][0] +
                                  cplx(0, 1) * vd * ZH[1][1] + vu * ZH[1][3] +
                                  vd * ZH[1][4]) *
                                     (ZH[1][2] + cplx(0, 1) * ZH[1][5]))) *
                           ZH[i][2] +
                       (cplx(0, -4) * std::exp(I * eta) * lam *
                            (vu * ZH[1][1] + vS * ZH[1][2]) * ZH[1][3] +
                        std::exp(2 * I * etaS) * kap *
                            (2 * vS * (ZH[1][1] - cplx(0, 1) * ZH[1][4]) +
                             vu * (ZH[1][2] + cplx(0, 1) * ZH[1][5])) *
                            (ZH[1][2] + cplx(0, 1) * ZH[1][5])) *
                           ZH[i][3] +
                       std::exp(2 * I * etaS) * kap * vd *
                           (ZH[1][2] * ZH[1][2]) * ZH[i][4] -
                       std::exp(2 * I * etaS) * kap * vd *
                           (ZH[1][5] * ZH[1][5]) * ZH[i][4] +
                       2 * std::exp(2 * I * etaS) * kap * vS * ZH[1][0] *
                           ZH[1][2] * ZH[i][4] -
                       cplx(0, 2) * std::exp(2 * I * etaS) * kap * vS *
                           ZH[1][2] * ZH[1][3] * ZH[i][4] -
                       cplx(0, 4) * std::exp(I * eta) * lam * vd * ZH[1][0] *
                           ZH[1][4] * ZH[i][4] -
                       cplx(0, 4) * std::exp(I * eta) * lam * vS * ZH[1][2] *
                           ZH[1][4] * ZH[i][4] +
                       cplx(0, 2) * std::exp(2 * I * etaS) * kap * vS *
                           ZH[1][0] * ZH[1][5] * ZH[i][4] +
                       cplx(0, 2) * std::exp(2 * I * etaS) * kap * vd *
                           ZH[1][2] * ZH[1][5] * ZH[i][4] +
                       2 * std::exp(2 * I * etaS) * kap * vS * ZH[1][3] *
                           ZH[1][5] * ZH[i][4] -
                       2 * std::exp(2 * I * etaS) * kap * vS * ZH[1][0] *
                           ZH[1][1] * ZH[i][5] -
                       2 * std::exp(2 * I * etaS) * kap * vu * ZH[1][0] *
                           ZH[1][2] * ZH[i][5] -
                       2 * std::exp(2 * I * etaS) * kap * vd * ZH[1][1] *
                           ZH[1][2] * ZH[i][5] +
                       cplx(0, 2) * std::exp(2 * I * etaS) * kap * vS *
                           ZH[1][1] * ZH[1][3] * ZH[i][5] +
                       cplx(0, 2) * std::exp(2 * I * etaS) * kap * vu *
                           ZH[1][2] * ZH[1][3] * ZH[i][5] +
                       cplx(0, 2) * std::exp(2 * I * etaS) * kap * vS *
                           ZH[1][0] * ZH[1][4] * ZH[i][5] +
                       cplx(0, 2) * std::exp(2 * I * etaS) * kap * vd *
                           ZH[1][2] * ZH[1][4] * ZH[i][5] +
                       2 * std::exp(2 * I * etaS) * kap * vS * ZH[1][3] *
                           ZH[1][4] * ZH[i][5] -
                       cplx(0, 4) * std::exp(I * eta) * lam * vd * ZH[1][0] *
                           ZH[1][5] * ZH[i][5] -
                       cplx(0, 2) * std::exp(2 * I * etaS) * kap * vu *
                           ZH[1][0] * ZH[1][5] * ZH[i][5] -
                       cplx(0, 2) * std::exp(2 * I * etaS) * kap * vd *
                           ZH[1][1] * ZH[1][5] * ZH[i][5] -
                       cplx(0, 4) * std::exp(I * eta) * lam * vu * ZH[1][1] *
                           ZH[1][5] * ZH[i][5] -
                       2 * std::exp(2 * I * etaS) * kap * vu * ZH[1][3] *
                           ZH[1][5] * ZH[i][5] -
                       2 * std::exp(2 * I * etaS) * kap * vd * ZH[1][4] *
                           ZH[1][5] * ZH[i][5]))) /
            (4. * std::exp(I * (eta + 3 * etaS)));
    }
    for (size_t i = 0; i < 5; i++) {
        coup4[i] =
            (cplx(0, -1) * std::exp(I * eta) * g2 * std::conj(ZN[0][1]) *
                 std::conj(ZN[i][2]) * ZH[1][0] +
             cplx(0, 1) * sqrt(2) * std::exp(I * eta) * lam *
                 std::conj(ZN[0][4]) * std::conj(ZN[i][3]) * ZH[1][0] +
             cplx(0, 1) * sqrt(2) * std::exp(I * eta) * lam *
                 std::conj(ZN[0][3]) * std::conj(ZN[i][4]) * ZH[1][0] -
             cplx(0, 1) * g1 * std::conj(ZN[0][3]) * std::conj(ZN[i][0]) *
                 ZH[1][1] +
             cplx(0, 1) * g2 * std::conj(ZN[0][3]) * std::conj(ZN[i][1]) *
                 ZH[1][1] +
             cplx(0, 1) * sqrt(2) * std::exp(2 * I * eta) * lam *
                 std::conj(ZN[0][4]) * std::conj(ZN[i][2]) * ZH[1][1] +
             cplx(0, 1) * g2 * std::conj(ZN[0][1]) * std::conj(ZN[i][3]) *
                 ZH[1][1] +
             cplx(0, 1) * sqrt(2) * std::exp(I * (eta + etaS)) * lam *
                 std::conj(ZN[0][3]) * std::conj(ZN[i][2]) * ZH[1][2] -
             cplx(0, 2) * sqrt(2) * std::exp(I * (eta + etaS)) * kap *
                 std::conj(ZN[0][4]) * std::conj(ZN[i][4]) * ZH[1][2] -
             std::exp(I * eta) * g2 * std::conj(ZN[0][1]) *
                 std::conj(ZN[i][2]) * ZH[1][3] -
             sqrt(2) * std::exp(I * eta) * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][3]) * ZH[1][3] -
             sqrt(2) * std::exp(I * eta) * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[i][4]) * ZH[1][3] +
             g1 * std::conj(ZN[0][0]) *
                 (std::exp(I * eta) * std::conj(ZN[i][2]) *
                      (cplx(0, 1) * ZH[1][0] + ZH[1][3]) +
                  std::conj(ZN[i][3]) * (cplx(0, -1) * ZH[1][1] - ZH[1][4])) -
             g1 * std::conj(ZN[0][3]) * std::conj(ZN[i][0]) * ZH[1][4] +
             g2 * std::conj(ZN[0][3]) * std::conj(ZN[i][1]) * ZH[1][4] -
             sqrt(2) * std::exp(2 * I * eta) * lam * std::conj(ZN[0][4]) *
                 std::conj(ZN[i][2]) * ZH[1][4] +
             g2 * std::conj(ZN[0][1]) * std::conj(ZN[i][3]) * ZH[1][4] +
             std::exp(I * eta) * std::conj(ZN[0][2]) *
                 (g2 * std::conj(ZN[i][1]) *
                      (cplx(0, -1) * ZH[1][0] - ZH[1][3]) +
                  g1 * std::conj(ZN[i][0]) *
                      (cplx(0, 1) * ZH[1][0] + ZH[1][3]) +
                  cplx(0, 1) * sqrt(2) * lam *
                      (std::exp(I * eta) * std::conj(ZN[i][4]) *
                           (ZH[1][1] + cplx(0, 1) * ZH[1][4]) +
                       std::exp(I * etaS) * std::conj(ZN[i][3]) *
                           (ZH[1][2] + cplx(0, 1) * ZH[1][5]))) -
             sqrt(2) * std::exp(I * (eta + etaS)) * lam * std::conj(ZN[0][3]) *
                 std::conj(ZN[i][2]) * ZH[1][5] +
             2 * sqrt(2) * std::exp(I * (eta + etaS)) * kap *
                 std::conj(ZN[0][4]) * std::conj(ZN[i][4]) * ZH[1][5]) /
            (2. * std::exp(I * eta));
    }
    for (size_t i = 0; i < 5; i++) {
        coup5[i] =
            (g1 *
                 (cplx(0, 1) * ZH[1][0] * ZN[0][2] - ZH[1][3] * ZN[0][2] +
                  std::exp(I * eta) * (cplx(0, -1) * ZH[1][1] + ZH[1][4]) *
                      ZN[0][3]) *
                 ZN[i][0] +
             g2 *
                 (cplx(0, -1) * ZH[1][0] * ZN[0][2] + ZH[1][3] * ZN[0][2] +
                  cplx(0, 1) * std::exp(I * eta) *
                      (ZH[1][1] + cplx(0, 1) * ZH[1][4]) * ZN[0][3]) *
                 ZN[i][1] +
             cplx(0, 1) * g1 * ZH[1][0] * ZN[0][0] * ZN[i][2] -
             g1 * ZH[1][3] * ZN[0][0] * ZN[i][2] -
             cplx(0, 1) * g2 * ZH[1][0] * ZN[0][1] * ZN[i][2] +
             g2 * ZH[1][3] * ZN[0][1] * ZN[i][2] +
             (cplx(0, 1) * sqrt(2) * std::conj(lam) * ZH[1][2] * ZN[0][3] *
              ZN[i][2]) /
                 std::exp(I * etaS) +
             (sqrt(2) * std::conj(lam) * ZH[1][5] * ZN[0][3] * ZN[i][2]) /
                 std::exp(I * etaS) +
             (cplx(0, 1) * sqrt(2) * std::conj(lam) * ZH[1][1] * ZN[0][4] *
              ZN[i][2]) /
                 std::exp(I * eta) +
             (sqrt(2) * std::conj(lam) * ZH[1][4] * ZN[0][4] * ZN[i][2]) /
                 std::exp(I * eta) -
             cplx(0, 1) * std::exp(I * eta) * g1 * ZH[1][1] * ZN[0][0] *
                 ZN[i][3] +
             std::exp(I * eta) * g1 * ZH[1][4] * ZN[0][0] * ZN[i][3] +
             cplx(0, 1) * std::exp(I * eta) * g2 * ZH[1][1] * ZN[0][1] *
                 ZN[i][3] -
             std::exp(I * eta) * g2 * ZH[1][4] * ZN[0][1] * ZN[i][3] +
             (cplx(0, 1) * sqrt(2) * std::conj(lam) * ZH[1][2] * ZN[0][2] *
              ZN[i][3]) /
                 std::exp(I * etaS) +
             (sqrt(2) * std::conj(lam) * ZH[1][5] * ZN[0][2] * ZN[i][3]) /
                 std::exp(I * etaS) +
             cplx(0, 1) * sqrt(2) * std::conj(lam) * ZH[1][0] * ZN[0][4] *
                 ZN[i][3] +
             sqrt(2) * std::conj(lam) * ZH[1][3] * ZN[0][4] * ZN[i][3] +
             (cplx(0, 1) * sqrt(2) * std::conj(lam) * ZH[1][1] * ZN[0][2] *
              ZN[i][4]) /
                 std::exp(I * eta) +
             (sqrt(2) * std::conj(lam) * ZH[1][4] * ZN[0][2] * ZN[i][4]) /
                 std::exp(I * eta) +
             cplx(0, 1) * sqrt(2) * std::conj(lam) * ZH[1][0] * ZN[0][3] *
                 ZN[i][4] +
             sqrt(2) * std::conj(lam) * ZH[1][3] * ZN[0][3] * ZN[i][4] -
             (cplx(0, 2) * sqrt(2) * std::conj(kap) * ZH[1][2] * ZN[0][4] *
              ZN[i][4]) /
                 std::exp(I * etaS) -
             (2 * sqrt(2) * std::conj(kap) * ZH[1][5] * ZN[0][4] * ZN[i][4]) /
                 std::exp(I * etaS)) /
            2.;
    }
}
}  // namespace DT
