///////////////////CODE GENERATED VIA MATHEMATICA///////////////////

#include "../../model.hpp"
#include "utils.hpp"

double DT::N1N1h2h2(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t = -0.5 * s + (Mh[1] * Mh[1]) +
                             (cos_t * sqrt(s - 4 * (Mh[1] * Mh[1])) *
                              sqrt(s - 4 * (MN[0] * MN[0]))) /
                                 2. +
                             (MN[0] * MN[0]);
    std::complex<double> u = -s - t + 2 * (Mh[1] * Mh[1]) + 2 * (MN[0] * MN[0]);
    SUM2((std::conj(coup1[j1]) * coup1[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2((2 * coup1[i1] *
          (std::conj(coup4[j1]) * std::conj(coup5[j1]) *
               (coup2[i1] + coup3[i1]) * (s + t - u - 4 * (MN[0] * MN[0])) *
               MN[0] +
           (std::conj(coup5[j1]) * std::conj(coup5[j1])) *
               (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                2 * coup2[i1] * (MN[0] * MN[0])) *
               MN[j1] +
           (std::conj(coup4[j1]) * std::conj(coup4[j1])) *
               (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                2 * coup3[i1] * (MN[0] * MN[0])) *
               MN[j1])) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (MN[j1] * MN[j1]))) +
             (2 * coup1[i1] *
              (std::conj(coup4[j1]) * std::conj(coup5[j1]) *
                   (coup2[i1] + coup3[i1]) * (s - t + u - 4 * (MN[0] * MN[0])) *
                   MN[0] +
               (std::conj(coup5[j1]) * std::conj(coup5[j1])) *
                   (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                    2 * coup2[i1] * (MN[0] * MN[0])) *
                   MN[j1] +
               (std::conj(coup4[j1]) * std::conj(coup4[j1])) *
                   (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                    2 * coup3[i1] * (MN[0] * MN[0])) *
                   MN[j1])) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))),
         i1, 6, j1, 5)

    SUM2(
        (std::conj(coup4[j1]) * std::conj(coup5[j1]) *
             (2 * coup4[i1] * coup5[i1] *
                  (s * (-(Mh[1] * Mh[1]) + (MN[0] * MN[0])) +
                   t * (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) -
                   (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                       ((Mh[1] * Mh[1]) + 3 * (MN[0] * MN[0]))) +
              (coup4[i1] * coup4[i1]) * (s + t - u - 4 * (MN[0] * MN[0])) *
                  MN[0] * MN[i1] +
              (coup5[i1] * coup5[i1]) * (s + t - u - 4 * (MN[0] * MN[0])) *
                  MN[0] * MN[i1]) +
         (std::conj(coup5[j1]) * std::conj(coup5[j1])) *
             (coup4[i1] * coup5[i1] * (s + t - u - 4 * (MN[0] * MN[0])) *
                  MN[0] +
              (coup5[i1] * coup5[i1]) * (s - 2 * (MN[0] * MN[0])) * MN[i1] -
              2 * (coup4[i1] * coup4[i1]) * (MN[0] * MN[0]) * MN[i1]) *
             MN[j1] +
         (std::conj(coup4[j1]) * std::conj(coup4[j1])) *
             (coup4[i1] * coup5[i1] * (s + t - u - 4 * (MN[0] * MN[0])) *
                  MN[0] +
              (coup4[i1] * coup4[i1]) * (s - 2 * (MN[0] * MN[0])) * MN[i1] -
              2 * (coup5[i1] * coup5[i1]) * (MN[0] * MN[0]) * MN[i1]) *
             MN[j1]) /
                ((u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))) +
            (2 *
             (std::conj(coup4[j1]) * std::conj(coup5[j1]) *
                  (coup4[i1] * coup5[i1] *
                       (-(s * s) + (t * t) + (u * u) - 2 * u * (Mh[1] * Mh[1]) +
                        2 * (Mh[1] * Mh[1] * Mh[1] * Mh[1]) -
                        2 * u * (MN[0] * MN[0]) +
                        4 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                        2 * s * ((Mh[1] * Mh[1]) + (MN[0] * MN[0])) -
                        2 * t * ((Mh[1] * Mh[1]) + (MN[0] * MN[0])) -
                        6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                   (coup4[i1] * coup4[i1]) * (s + t - u - 4 * (MN[0] * MN[0])) *
                       MN[0] * MN[i1] +
                   (coup5[i1] * coup5[i1]) * (s + t - u - 4 * (MN[0] * MN[0])) *
                       MN[0] * MN[i1]) +
              (std::conj(coup5[j1]) * std::conj(coup5[j1])) *
                  (coup4[i1] * coup5[i1] * (s - t + u - 4 * (MN[0] * MN[0])) *
                       MN[0] +
                   (coup5[i1] * coup5[i1]) * (s - 2 * (MN[0] * MN[0])) *
                       MN[i1] -
                   2 * (coup4[i1] * coup4[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                  MN[j1] +
              (std::conj(coup4[j1]) * std::conj(coup4[j1])) *
                  (coup4[i1] * coup5[i1] * (s - t + u - 4 * (MN[0] * MN[0])) *
                       MN[0] +
                   (coup4[i1] * coup4[i1]) * (s - 2 * (MN[0] * MN[0])) *
                       MN[i1] -
                   2 * (coup5[i1] * coup5[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                  MN[j1])) /
                ((t - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))) +
            (std::conj(coup4[j1]) * std::conj(coup5[j1]) *
                 (2 * coup4[i1] * coup5[i1] *
                      (t * (u - (Mh[1] * Mh[1]) - 3 * (MN[0] * MN[0])) -
                       (s + u - (Mh[1] * Mh[1]) - 3 * (MN[0] * MN[0])) *
                           ((Mh[1] * Mh[1]) - (MN[0] * MN[0]))) +
                  (coup4[i1] * coup4[i1]) * (s - t + u - 4 * (MN[0] * MN[0])) *
                      MN[0] * MN[i1] +
                  (coup5[i1] * coup5[i1]) * (s - t + u - 4 * (MN[0] * MN[0])) *
                      MN[0] * MN[i1]) +
             (std::conj(coup5[j1]) * std::conj(coup5[j1])) *
                 (coup4[i1] * coup5[i1] * (s - t + u - 4 * (MN[0] * MN[0])) *
                      MN[0] +
                  (coup5[i1] * coup5[i1]) * (s - 2 * (MN[0] * MN[0])) * MN[i1] -
                  2 * (coup4[i1] * coup4[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                 MN[j1] +
             (std::conj(coup4[j1]) * std::conj(coup4[j1])) *
                 (coup4[i1] * coup5[i1] * (s - t + u - 4 * (MN[0] * MN[0])) *
                      MN[0] +
                  (coup4[i1] * coup4[i1]) * (s - 2 * (MN[0] * MN[0])) * MN[i1] -
                  2 * (coup5[i1] * coup5[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                 MN[j1]) /
                ((t - (MN[i1] * MN[i1])) * (t - (MN[j1] * MN[j1]))),
        j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1h2h3(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (Mh[1] * Mh[1]) + (Mh[2] * Mh[2]) +
         cos_t *
             sqrt(s +
                  (((Mh[1] * Mh[1]) - (Mh[2] * Mh[2])) *
                   ((Mh[1] * Mh[1]) - (Mh[2] * Mh[2]))) /
                      s -
                  2 * ((Mh[1] * Mh[1]) + (Mh[2] * Mh[2]))) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (Mh[1] * Mh[1]) + (Mh[2] * Mh[2]) + 2 * (MN[0] * MN[0]);
    res += (coup7 * std::conj(coup7) *
            (std::conj(coup8) *
                 (2 * coup9 * (s - 2 * ((Mh[1] * Mh[1]) + (Mh[2] * Mh[2]))) *
                      (MN[0] * MN[0]) +
                  coup8 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[1] * Mh[1] * Mh[1] * Mh[1]) -
                           2 * (Mh[1] * Mh[1]) * (Mh[2] * Mh[2]) +
                           (Mh[2] * Mh[2] * Mh[2] * Mh[2]) +
                           4 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                           4 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[1] * Mh[1]) + (Mh[2] * Mh[2]) +
                                (MN[0] * MN[0])))) +
             std::conj(coup9) *
                 (2 * coup8 * (s - 2 * ((Mh[1] * Mh[1]) + (Mh[2] * Mh[2]))) *
                      (MN[0] * MN[0]) +
                  coup9 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[1] * Mh[1] * Mh[1] * Mh[1]) -
                           2 * (Mh[1] * Mh[1]) * (Mh[2] * Mh[2]) +
                           (Mh[2] * Mh[2] * Mh[2] * Mh[2]) +
                           4 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                           4 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[1] * Mh[1]) + (Mh[2] * Mh[2]) +
                                (MN[0] * MN[0])))))) /
           (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((-2 * std::conj(coup7) * coup6[i1] *
          (std::conj(coup9) *
               (coup3[i1] * (t - u + (Mh[1] * Mh[1]) - (Mh[2] * Mh[2])) +
                coup2[i1] * (t - u - (Mh[1] * Mh[1]) + (Mh[2] * Mh[2]))) +
           std::conj(coup8) *
               (coup2[i1] * (t - u + (Mh[1] * Mh[1]) - (Mh[2] * Mh[2])) +
                coup3[i1] * (t - u - (Mh[1] * Mh[1]) + (Mh[2] * Mh[2])))) *
          MN[0]) /
             ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((coup7 *
          (std::conj(coup11[j1]) *
               (std::conj(coup4[j1]) *
                    (2 * coup8 *
                         (s - t + u - 2 * (Mh[1] * Mh[1]) -
                          2 * (Mh[2] * Mh[2])) *
                         (MN[0] * MN[0]) +
                     coup9 * ((s * s) - (t * t) - (u * u) +
                              u * (Mh[1] * Mh[1]) - u * (Mh[2] * Mh[2]) -
                              2 * (Mh[1] * Mh[1]) * (Mh[2] * Mh[2]) +
                              2 * (Mh[2] * Mh[2] * Mh[2] * Mh[2]) +
                              t * (2 * u + (Mh[1] * Mh[1]) - (Mh[2] * Mh[2]) -
                                   2 * (MN[0] * MN[0])) +
                              2 * u * (MN[0] * MN[0]) +
                              2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                              6 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                              s * ((Mh[1] * Mh[1]) + 3 * (Mh[2] * Mh[2]) +
                                   2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup5[j1]) *
                    (coup9 * (t - u + (Mh[1] * Mh[1]) - (Mh[2] * Mh[2])) +
                     coup8 * (t - u - (Mh[1] * Mh[1]) + (Mh[2] * Mh[2]))) *
                    MN[0] * MN[j1]) +
           std::conj(coup10[j1]) *
               (std::conj(coup5[j1]) *
                    (2 * coup9 *
                         (s - t + u - 2 * (Mh[1] * Mh[1]) -
                          2 * (Mh[2] * Mh[2])) *
                         (MN[0] * MN[0]) +
                     coup8 * ((s * s) - (t * t) - (u * u) +
                              u * (Mh[1] * Mh[1]) - u * (Mh[2] * Mh[2]) -
                              2 * (Mh[1] * Mh[1]) * (Mh[2] * Mh[2]) +
                              2 * (Mh[2] * Mh[2] * Mh[2] * Mh[2]) +
                              t * (2 * u + (Mh[1] * Mh[1]) - (Mh[2] * Mh[2]) -
                                   2 * (MN[0] * MN[0])) +
                              2 * u * (MN[0] * MN[0]) +
                              2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                              6 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                              s * ((Mh[1] * Mh[1]) + 3 * (Mh[2] * Mh[2]) +
                                   2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup4[j1]) *
                    (coup8 * (t - u + (Mh[1] * Mh[1]) - (Mh[2] * Mh[2])) +
                     coup9 * (t - u - (Mh[1] * Mh[1]) + (Mh[2] * Mh[2]))) *
                    MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (t - (MN[j1] * MN[j1]))) -
             (coup7 *
              (std::conj(coup11[j1]) *
                   (std::conj(coup4[j1]) *
                        (2 * coup9 *
                             (s + t - u - 2 * (Mh[1] * Mh[1]) -
                              2 * (Mh[2] * Mh[2])) *
                             (MN[0] * MN[0]) +
                         coup8 * ((s * s) - (t * t) - (u * u) -
                                  u * (Mh[1] * Mh[1]) +
                                  2 * (Mh[1] * Mh[1] * Mh[1] * Mh[1]) +
                                  u * (Mh[2] * Mh[2]) -
                                  2 * (Mh[1] * Mh[1]) * (Mh[2] * Mh[2]) -
                                  2 * u * (MN[0] * MN[0]) +
                                  6 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                  t * (2 * u - (Mh[1] * Mh[1]) +
                                       (Mh[2] * Mh[2]) + 2 * (MN[0] * MN[0])) -
                                  s * (3 * (Mh[1] * Mh[1]) + (Mh[2] * Mh[2]) +
                                       2 * (MN[0] * MN[0])))) +
                    2 * std::conj(coup5[j1]) *
                        (coup9 * (t - u + (Mh[1] * Mh[1]) - (Mh[2] * Mh[2])) +
                         coup8 * (t - u - (Mh[1] * Mh[1]) + (Mh[2] * Mh[2]))) *
                        MN[0] * MN[j1]) +
               std::conj(coup10[j1]) *
                   (std::conj(coup5[j1]) *
                        (2 * coup8 *
                             (s + t - u - 2 * (Mh[1] * Mh[1]) -
                              2 * (Mh[2] * Mh[2])) *
                             (MN[0] * MN[0]) +
                         coup9 * ((s * s) - (t * t) - (u * u) -
                                  u * (Mh[1] * Mh[1]) +
                                  2 * (Mh[1] * Mh[1] * Mh[1] * Mh[1]) +
                                  u * (Mh[2] * Mh[2]) -
                                  2 * (Mh[1] * Mh[1]) * (Mh[2] * Mh[2]) -
                                  2 * u * (MN[0] * MN[0]) +
                                  6 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                  t * (2 * u - (Mh[1] * Mh[1]) +
                                       (Mh[2] * Mh[2]) + 2 * (MN[0] * MN[0])) -
                                  s * (3 * (Mh[1] * Mh[1]) + (Mh[2] * Mh[2]) +
                                       2 * (MN[0] * MN[0])))) +
                    2 * std::conj(coup4[j1]) *
                        (coup8 * (t - u + (Mh[1] * Mh[1]) - (Mh[2] * Mh[2])) +
                         coup9 * (t - u - (Mh[1] * Mh[1]) + (Mh[2] * Mh[2]))) *
                        MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (u - (MN[j1] * MN[j1]))),
         j1, 5)

    SUM2((std::conj(coup6[j1]) * coup6[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2((2 * coup6[i1] *
          (std::conj(coup11[j1]) *
               (std::conj(coup4[j1]) *
                    (coup2[i1] *
                         (s + u - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) -
                     coup3[i1] * (t - (Mh[2] * Mh[2]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup5[j1]) *
                    (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup2[i1] * (MN[0] * MN[0])) *
                    MN[j1]) +
           std::conj(coup10[j1]) *
               (std::conj(coup5[j1]) *
                    (coup3[i1] *
                         (s + u - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) -
                     coup2[i1] * (t - (Mh[2] * Mh[2]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup4[j1]) *
                    (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup3[i1] * (MN[0] * MN[0])) *
                    MN[j1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))) -
             (2 * coup6[i1] *
              (std::conj(coup11[j1]) *
                   (std::conj(coup4[j1]) *
                        (-(coup3[i1] *
                           (s + t - (Mh[1] * Mh[1]) - 3 * (MN[0] * MN[0]))) +
                         coup2[i1] * (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup5[j1]) *
                        (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                         2 * coup2[i1] * (MN[0] * MN[0])) *
                        MN[j1]) +
               std::conj(coup10[j1]) *
                   (std::conj(coup5[j1]) *
                        (-(coup2[i1] *
                           (s + t - (Mh[1] * Mh[1]) - 3 * (MN[0] * MN[0]))) +
                         coup3[i1] * (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup4[j1]) *
                        (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                         2 * coup3[i1] * (MN[0] * MN[0])) *
                        MN[j1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (MN[j1] * MN[j1]))),
         i1, 6, j1, 5)

    SUM2((std::conj(coup11[j1]) *
              (std::conj(coup4[j1]) *
                   (coup10[i1] * MN[0] *
                        (-2 * t * coup5[i1] * MN[0] +
                         coup4[i1] *
                             (s + u - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) *
                             MN[i1]) +
                    coup11[i1] *
                        (coup4[i1] *
                             (t * (u - (Mh[2] * Mh[2]) - (MN[0] * MN[0])) -
                              (s + u - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) *
                                  ((Mh[2] * Mh[2]) - (MN[0] * MN[0]))) -
                         coup5[i1] * (t - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                             MN[0] * MN[i1])) +
               std::conj(coup5[j1]) *
                   (coup11[i1] *
                        (-(coup4[i1] * (t - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                           MN[0]) +
                         coup5[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                    coup10[i1] * MN[0] *
                        (coup5[i1] *
                             (s + u - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) -
                         2 * coup4[i1] * MN[0] * MN[i1])) *
                   MN[j1]) +
          std::conj(coup10[j1]) *
              (std::conj(coup5[j1]) *
                   (coup11[i1] * MN[0] *
                        (-2 * t * coup4[i1] * MN[0] +
                         coup5[i1] *
                             (s + u - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) *
                             MN[i1]) +
                    coup10[i1] *
                        (coup5[i1] *
                             (t * (u - (Mh[2] * Mh[2]) - (MN[0] * MN[0])) -
                              (s + u - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) *
                                  ((Mh[2] * Mh[2]) - (MN[0] * MN[0]))) -
                         coup4[i1] * (t - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                             MN[0] * MN[i1])) +
               std::conj(coup4[j1]) *
                   (coup10[i1] *
                        (-(coup5[i1] * (t - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                           MN[0]) +
                         coup4[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                    coup11[i1] * MN[0] *
                        (coup4[i1] *
                             (s + u - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) -
                         2 * coup5[i1] * MN[0] * MN[i1])) *
                   MN[j1])) /
                 ((t - (MN[i1] * MN[i1])) * (t - (MN[j1] * MN[j1]))) -
             (std::conj(coup11[j1]) *
                  (std::conj(coup4[j1]) *
                       (2 * coup11[i1] * MN[0] *
                            (coup4[i1] *
                                 (s + t + u - 2 * (Mh[1] * Mh[1]) -
                                  2 * (Mh[2] * Mh[2])) *
                                 MN[0] -
                             coup5[i1] *
                                 (s + t - (Mh[1] * Mh[1]) -
                                  3 * (MN[0] * MN[0])) *
                                 MN[i1]) +
                        coup10[i1] *
                            (coup5[i1] *
                                 ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[1] * Mh[1]) + u * (Mh[2] * Mh[2]) -
                                  2 * (Mh[1] * Mh[1]) * (Mh[2] * Mh[2]) +
                                  t * ((Mh[1] * Mh[1]) + (Mh[2] * Mh[2])) +
                                  2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                                  s * ((Mh[1] * Mh[1]) + (Mh[2] * Mh[2]) +
                                       4 * (MN[0] * MN[0])) +
                                  6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                             2 * coup4[i1] *
                                 (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                                 MN[0] * MN[i1])) +
                   2 * std::conj(coup5[j1]) *
                       (coup11[i1] *
                            (coup4[i1] *
                                 (t - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                                 MN[0] -
                             coup5[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                        coup10[i1] * MN[0] *
                            (-(coup5[i1] * (s + u - (Mh[2] * Mh[2]) -
                                            3 * (MN[0] * MN[0]))) +
                             2 * coup4[i1] * MN[0] * MN[i1])) *
                       MN[j1]) +
              std::conj(coup10[j1]) *
                  (std::conj(coup5[j1]) *
                       (2 * coup10[i1] * MN[0] *
                            (coup5[i1] *
                                 (s + t + u - 2 * (Mh[1] * Mh[1]) -
                                  2 * (Mh[2] * Mh[2])) *
                                 MN[0] -
                             coup4[i1] *
                                 (s + t - (Mh[1] * Mh[1]) -
                                  3 * (MN[0] * MN[0])) *
                                 MN[i1]) +
                        coup11[i1] *
                            (coup4[i1] *
                                 ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[1] * Mh[1]) + u * (Mh[2] * Mh[2]) -
                                  2 * (Mh[1] * Mh[1]) * (Mh[2] * Mh[2]) +
                                  t * ((Mh[1] * Mh[1]) + (Mh[2] * Mh[2])) +
                                  2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                                  s * ((Mh[1] * Mh[1]) + (Mh[2] * Mh[2]) +
                                       4 * (MN[0] * MN[0])) +
                                  6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                             2 * coup5[i1] *
                                 (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                                 MN[0] * MN[i1])) +
                   2 * std::conj(coup4[j1]) *
                       (coup10[i1] *
                            (coup5[i1] *
                                 (t - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                                 MN[0] -
                             coup4[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                        coup11[i1] * MN[0] *
                            (-(coup4[i1] * (s + u - (Mh[2] * Mh[2]) -
                                            3 * (MN[0] * MN[0]))) +
                             2 * coup5[i1] * MN[0] * MN[i1])) *
                       MN[j1])) /
                 ((t - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))) +
             (std::conj(coup11[j1]) *
                  (std::conj(coup4[j1]) *
                       (-(coup10[i1] * MN[0] *
                          (2 * u * coup5[i1] * MN[0] +
                           coup4[i1] * (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                               MN[i1])) +
                        coup11[i1] *
                            (coup4[i1] *
                                 (-(s * (Mh[1] * Mh[1])) - u * (Mh[1] * Mh[1]) +
                                  (Mh[1] * Mh[1] * Mh[1] * Mh[1]) +
                                  s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                                  2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  t * (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) -
                                  3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                             coup5[i1] *
                                 (s + t - (Mh[1] * Mh[1]) -
                                  3 * (MN[0] * MN[0])) *
                                 MN[0] * MN[i1])) +
                   std::conj(coup5[j1]) *
                       (coup11[i1] *
                            (coup4[i1] *
                                 (s + t - (Mh[1] * Mh[1]) -
                                  3 * (MN[0] * MN[0])) *
                                 MN[0] +
                             coup5[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                        coup10[i1] * MN[0] *
                            (coup5[i1] *
                                 (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) +
                             2 * coup4[i1] * MN[0] * MN[i1])) *
                       MN[j1]) +
              std::conj(coup10[j1]) *
                  (std::conj(coup5[j1]) *
                       (-(coup11[i1] * MN[0] *
                          (2 * u * coup4[i1] * MN[0] +
                           coup5[i1] * (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                               MN[i1])) +
                        coup10[i1] *
                            (coup5[i1] *
                                 (-(s * (Mh[1] * Mh[1])) - u * (Mh[1] * Mh[1]) +
                                  (Mh[1] * Mh[1] * Mh[1] * Mh[1]) +
                                  s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                                  2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  t * (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) -
                                  3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                             coup4[i1] *
                                 (s + t - (Mh[1] * Mh[1]) -
                                  3 * (MN[0] * MN[0])) *
                                 MN[0] * MN[i1])) +
                   std::conj(coup4[j1]) *
                       (coup10[i1] *
                            (coup5[i1] *
                                 (s + t - (Mh[1] * Mh[1]) -
                                  3 * (MN[0] * MN[0])) *
                                 MN[0] +
                             coup4[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                        coup11[i1] * MN[0] *
                            (coup4[i1] *
                                 (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) +
                             2 * coup5[i1] * MN[0] * MN[i1])) *
                       MN[j1])) /
                 ((u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
         j1, 5, i1, 5)

    return res.real();
}
