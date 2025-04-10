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
                ((t - (MN[i1] * MN[i1])) * (t - (MN[j1] * MN[j1]))) -
            (2 *
             (std::conj(coup4[j1]) * std::conj(coup5[j1]) *
                  (coup4[i1] * coup5[i1] *
                       ((s * s) - (t * t) - (u * u) + 2 * u * (Mh[1] * Mh[1]) -
                        2 * (Mh[1] * Mh[1] * Mh[1] * Mh[1]) +
                        2 * u * (MN[0] * MN[0]) -
                        4 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) -
                        2 * s * ((Mh[1] * Mh[1]) + (MN[0] * MN[0])) +
                        2 * t * ((Mh[1] * Mh[1]) + (MN[0] * MN[0])) +
                        6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                   (coup4[i1] * coup4[i1]) *
                       (-s - t + u + 4 * (MN[0] * MN[0])) * MN[0] * MN[i1] +
                   (coup5[i1] * coup5[i1]) *
                       (-s - t + u + 4 * (MN[0] * MN[0])) * MN[0] * MN[i1]) +
              (std::conj(coup5[j1]) * std::conj(coup5[j1])) *
                  (coup4[i1] * coup5[i1] * (-s + t - u + 4 * (MN[0] * MN[0])) *
                       MN[0] -
                   (coup5[i1] * coup5[i1]) * (s - 2 * (MN[0] * MN[0])) *
                       MN[i1] +
                   2 * (coup4[i1] * coup4[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                  MN[j1] +
              (std::conj(coup4[j1]) * std::conj(coup4[j1])) *
                  (coup4[i1] * coup5[i1] * (-s + t - u + 4 * (MN[0] * MN[0])) *
                       MN[0] -
                   (coup4[i1] * coup4[i1]) * (s - 2 * (MN[0] * MN[0])) *
                       MN[i1] +
                   2 * (coup5[i1] * coup5[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                  MN[j1])) /
                ((t - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
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
                    (-2 * coup9 *
                         (s + t - u - 2 * (Mh[1] * Mh[1]) -
                          2 * (Mh[2] * Mh[2])) *
                         (MN[0] * MN[0]) +
                     coup8 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[1] * Mh[1]) -
                          2 * (Mh[1] * Mh[1] * Mh[1] * Mh[1]) -
                          u * (Mh[2] * Mh[2]) +
                          2 * (Mh[1] * Mh[1]) * (Mh[2] * Mh[2]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) -
                          2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[1] * Mh[1]) + (Mh[2] * Mh[2]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[1] * Mh[1]) + (Mh[2] * Mh[2]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup5[j1]) *
                    (coup9 * (t - u + (Mh[1] * Mh[1]) - (Mh[2] * Mh[2])) +
                     coup8 * (t - u - (Mh[1] * Mh[1]) + (Mh[2] * Mh[2]))) *
                    MN[0] * MN[j1]) +
           std::conj(coup10[j1]) *
               (std::conj(coup5[j1]) *
                    (-2 * coup8 *
                         (s + t - u - 2 * (Mh[1] * Mh[1]) -
                          2 * (Mh[2] * Mh[2])) *
                         (MN[0] * MN[0]) +
                     coup9 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[1] * Mh[1]) -
                          2 * (Mh[1] * Mh[1] * Mh[1] * Mh[1]) -
                          u * (Mh[2] * Mh[2]) +
                          2 * (Mh[1] * Mh[1]) * (Mh[2] * Mh[2]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) -
                          2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[1] * Mh[1]) + (Mh[2] * Mh[2]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[1] * Mh[1]) + (Mh[2] * Mh[2]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup4[j1]) *
                    (coup8 * (t - u + (Mh[1] * Mh[1]) - (Mh[2] * Mh[2])) +
                     coup9 * (t - u - (Mh[1] * Mh[1]) + (Mh[2] * Mh[2]))) *
                    MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (u - (MN[j1] * MN[j1]))) +
             (coup7 *
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
                                  t * (2 * u + (Mh[1] * Mh[1]) -
                                       (Mh[2] * Mh[2]) - 2 * (MN[0] * MN[0])) +
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
                                  t * (2 * u + (Mh[1] * Mh[1]) -
                                       (Mh[2] * Mh[2]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  6 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                                  s * ((Mh[1] * Mh[1]) + 3 * (Mh[2] * Mh[2]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup4[j1]) *
                        (coup8 * (t - u + (Mh[1] * Mh[1]) - (Mh[2] * Mh[2])) +
                         coup9 * (t - u - (Mh[1] * Mh[1]) + (Mh[2] * Mh[2]))) *
                        MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (t - (MN[j1] * MN[j1]))),
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
                 ((t - (MN[i1] * MN[i1])) * (t - (MN[j1] * MN[j1]))) +
             (-(std::conj(coup11[j1]) *
                (std::conj(coup4[j1]) *
                     (2 * coup11[i1] * MN[0] *
                          (coup4[i1] *
                               (s + t + u - 2 * (Mh[1] * Mh[1]) -
                                2 * (Mh[2] * Mh[2])) *
                               MN[0] -
                           coup5[i1] *
                               (s + t - (Mh[1] * Mh[1]) - 3 * (MN[0] * MN[0])) *
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
                               (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) * MN[0] *
                               MN[i1])) +
                 2 * std::conj(coup5[j1]) *
                     (coup11[i1] *
                          (coup4[i1] * (t - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                               MN[0] -
                           coup5[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                      coup10[i1] * MN[0] *
                          (-(coup5[i1] *
                             (s + u - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0]))) +
                           2 * coup4[i1] * MN[0] * MN[i1])) *
                     MN[j1])) -
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
double DT::N1N1h2h4(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (Mh[1] * Mh[1]) + (Mh[3] * Mh[3]) +
         cos_t *
             sqrt(s +
                  (((Mh[1] * Mh[1]) - (Mh[3] * Mh[3])) *
                   ((Mh[1] * Mh[1]) - (Mh[3] * Mh[3]))) /
                      s -
                  2 * ((Mh[1] * Mh[1]) + (Mh[3] * Mh[3]))) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (Mh[1] * Mh[1]) + (Mh[3] * Mh[3]) + 2 * (MN[0] * MN[0]);
    res += (coup13 * std::conj(coup13) *
            (std::conj(coup8) *
                 (2 * coup9 * (s - 2 * ((Mh[1] * Mh[1]) + (Mh[3] * Mh[3]))) *
                      (MN[0] * MN[0]) +
                  coup8 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[1] * Mh[1] * Mh[1] * Mh[1]) -
                           2 * (Mh[1] * Mh[1]) * (Mh[3] * Mh[3]) +
                           (Mh[3] * Mh[3] * Mh[3] * Mh[3]) +
                           4 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                           4 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[1] * Mh[1]) + (Mh[3] * Mh[3]) +
                                (MN[0] * MN[0])))) +
             std::conj(coup9) *
                 (2 * coup8 * (s - 2 * ((Mh[1] * Mh[1]) + (Mh[3] * Mh[3]))) *
                      (MN[0] * MN[0]) +
                  coup9 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[1] * Mh[1] * Mh[1] * Mh[1]) -
                           2 * (Mh[1] * Mh[1]) * (Mh[3] * Mh[3]) +
                           (Mh[3] * Mh[3] * Mh[3] * Mh[3]) +
                           4 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                           4 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[1] * Mh[1]) + (Mh[3] * Mh[3]) +
                                (MN[0] * MN[0])))))) /
           (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((-2 * std::conj(coup13) * coup12[i1] *
          (std::conj(coup9) *
               (coup3[i1] * (t - u + (Mh[1] * Mh[1]) - (Mh[3] * Mh[3])) +
                coup2[i1] * (t - u - (Mh[1] * Mh[1]) + (Mh[3] * Mh[3]))) +
           std::conj(coup8) *
               (coup2[i1] * (t - u + (Mh[1] * Mh[1]) - (Mh[3] * Mh[3])) +
                coup3[i1] * (t - u - (Mh[1] * Mh[1]) + (Mh[3] * Mh[3])))) *
          MN[0]) /
             ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((coup13 *
          (std::conj(coup15[j1]) *
               (std::conj(coup4[j1]) *
                    (-2 * coup9 *
                         (s + t - u - 2 * (Mh[1] * Mh[1]) -
                          2 * (Mh[3] * Mh[3])) *
                         (MN[0] * MN[0]) +
                     coup8 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[1] * Mh[1]) -
                          2 * (Mh[1] * Mh[1] * Mh[1] * Mh[1]) -
                          u * (Mh[3] * Mh[3]) +
                          2 * (Mh[1] * Mh[1]) * (Mh[3] * Mh[3]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) -
                          2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[1] * Mh[1]) + (Mh[3] * Mh[3]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[1] * Mh[1]) + (Mh[3] * Mh[3]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup5[j1]) *
                    (coup9 * (t - u + (Mh[1] * Mh[1]) - (Mh[3] * Mh[3])) +
                     coup8 * (t - u - (Mh[1] * Mh[1]) + (Mh[3] * Mh[3]))) *
                    MN[0] * MN[j1]) +
           std::conj(coup14[j1]) *
               (std::conj(coup5[j1]) *
                    (-2 * coup8 *
                         (s + t - u - 2 * (Mh[1] * Mh[1]) -
                          2 * (Mh[3] * Mh[3])) *
                         (MN[0] * MN[0]) +
                     coup9 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[1] * Mh[1]) -
                          2 * (Mh[1] * Mh[1] * Mh[1] * Mh[1]) -
                          u * (Mh[3] * Mh[3]) +
                          2 * (Mh[1] * Mh[1]) * (Mh[3] * Mh[3]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) -
                          2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[1] * Mh[1]) + (Mh[3] * Mh[3]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[1] * Mh[1]) + (Mh[3] * Mh[3]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup4[j1]) *
                    (coup8 * (t - u + (Mh[1] * Mh[1]) - (Mh[3] * Mh[3])) +
                     coup9 * (t - u - (Mh[1] * Mh[1]) + (Mh[3] * Mh[3]))) *
                    MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (u - (MN[j1] * MN[j1]))) +
             (coup13 *
              (std::conj(coup15[j1]) *
                   (std::conj(coup4[j1]) *
                        (2 * coup8 *
                             (s - t + u - 2 * (Mh[1] * Mh[1]) -
                              2 * (Mh[3] * Mh[3])) *
                             (MN[0] * MN[0]) +
                         coup9 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[1] * Mh[1]) - u * (Mh[3] * Mh[3]) -
                                  2 * (Mh[1] * Mh[1]) * (Mh[3] * Mh[3]) +
                                  2 * (Mh[3] * Mh[3] * Mh[3] * Mh[3]) +
                                  t * (2 * u + (Mh[1] * Mh[1]) -
                                       (Mh[3] * Mh[3]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  6 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                                  s * ((Mh[1] * Mh[1]) + 3 * (Mh[3] * Mh[3]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup5[j1]) *
                        (coup9 * (t - u + (Mh[1] * Mh[1]) - (Mh[3] * Mh[3])) +
                         coup8 * (t - u - (Mh[1] * Mh[1]) + (Mh[3] * Mh[3]))) *
                        MN[0] * MN[j1]) +
               std::conj(coup14[j1]) *
                   (std::conj(coup5[j1]) *
                        (2 * coup9 *
                             (s - t + u - 2 * (Mh[1] * Mh[1]) -
                              2 * (Mh[3] * Mh[3])) *
                             (MN[0] * MN[0]) +
                         coup8 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[1] * Mh[1]) - u * (Mh[3] * Mh[3]) -
                                  2 * (Mh[1] * Mh[1]) * (Mh[3] * Mh[3]) +
                                  2 * (Mh[3] * Mh[3] * Mh[3] * Mh[3]) +
                                  t * (2 * u + (Mh[1] * Mh[1]) -
                                       (Mh[3] * Mh[3]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  6 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                                  s * ((Mh[1] * Mh[1]) + 3 * (Mh[3] * Mh[3]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup4[j1]) *
                        (coup8 * (t - u + (Mh[1] * Mh[1]) - (Mh[3] * Mh[3])) +
                         coup9 * (t - u - (Mh[1] * Mh[1]) + (Mh[3] * Mh[3]))) *
                        MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (t - (MN[j1] * MN[j1]))),
         j1, 5)

    SUM2((std::conj(coup12[j1]) * coup12[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2((2 * coup12[i1] *
          (std::conj(coup15[j1]) *
               (std::conj(coup4[j1]) *
                    (coup2[i1] *
                         (s + u - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) -
                     coup3[i1] * (t - (Mh[3] * Mh[3]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup5[j1]) *
                    (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup2[i1] * (MN[0] * MN[0])) *
                    MN[j1]) +
           std::conj(coup14[j1]) *
               (std::conj(coup5[j1]) *
                    (coup3[i1] *
                         (s + u - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) -
                     coup2[i1] * (t - (Mh[3] * Mh[3]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup4[j1]) *
                    (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup3[i1] * (MN[0] * MN[0])) *
                    MN[j1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))) -
             (2 * coup12[i1] *
              (std::conj(coup15[j1]) *
                   (std::conj(coup4[j1]) *
                        (-(coup3[i1] *
                           (s + t - (Mh[1] * Mh[1]) - 3 * (MN[0] * MN[0]))) +
                         coup2[i1] * (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup5[j1]) *
                        (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                         2 * coup2[i1] * (MN[0] * MN[0])) *
                        MN[j1]) +
               std::conj(coup14[j1]) *
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

    SUM2((std::conj(coup15[j1]) *
              (std::conj(coup4[j1]) *
                   (coup14[i1] * MN[0] *
                        (-2 * t * coup5[i1] * MN[0] +
                         coup4[i1] *
                             (s + u - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) *
                             MN[i1]) +
                    coup15[i1] *
                        (coup4[i1] *
                             (t * (u - (Mh[3] * Mh[3]) - (MN[0] * MN[0])) -
                              (s + u - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) *
                                  ((Mh[3] * Mh[3]) - (MN[0] * MN[0]))) -
                         coup5[i1] * (t - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                             MN[0] * MN[i1])) +
               std::conj(coup5[j1]) *
                   (coup15[i1] *
                        (-(coup4[i1] * (t - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                           MN[0]) +
                         coup5[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                    coup14[i1] * MN[0] *
                        (coup5[i1] *
                             (s + u - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) -
                         2 * coup4[i1] * MN[0] * MN[i1])) *
                   MN[j1]) +
          std::conj(coup14[j1]) *
              (std::conj(coup5[j1]) *
                   (coup15[i1] * MN[0] *
                        (-2 * t * coup4[i1] * MN[0] +
                         coup5[i1] *
                             (s + u - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) *
                             MN[i1]) +
                    coup14[i1] *
                        (coup5[i1] *
                             (t * (u - (Mh[3] * Mh[3]) - (MN[0] * MN[0])) -
                              (s + u - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) *
                                  ((Mh[3] * Mh[3]) - (MN[0] * MN[0]))) -
                         coup4[i1] * (t - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                             MN[0] * MN[i1])) +
               std::conj(coup4[j1]) *
                   (coup14[i1] *
                        (-(coup5[i1] * (t - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                           MN[0]) +
                         coup4[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                    coup15[i1] * MN[0] *
                        (coup4[i1] *
                             (s + u - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) -
                         2 * coup5[i1] * MN[0] * MN[i1])) *
                   MN[j1])) /
                 ((t - (MN[i1] * MN[i1])) * (t - (MN[j1] * MN[j1]))) +
             (-(std::conj(coup15[j1]) *
                (std::conj(coup4[j1]) *
                     (2 * coup15[i1] * MN[0] *
                          (coup4[i1] *
                               (s + t + u - 2 * (Mh[1] * Mh[1]) -
                                2 * (Mh[3] * Mh[3])) *
                               MN[0] -
                           coup5[i1] *
                               (s + t - (Mh[1] * Mh[1]) - 3 * (MN[0] * MN[0])) *
                               MN[i1]) +
                      coup14[i1] *
                          (coup5[i1] *
                               ((s * s) - (t * t) - (u * u) +
                                u * (Mh[1] * Mh[1]) + u * (Mh[3] * Mh[3]) -
                                2 * (Mh[1] * Mh[1]) * (Mh[3] * Mh[3]) +
                                t * ((Mh[1] * Mh[1]) + (Mh[3] * Mh[3])) +
                                2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                                s * ((Mh[1] * Mh[1]) + (Mh[3] * Mh[3]) +
                                     4 * (MN[0] * MN[0])) +
                                6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                           2 * coup4[i1] *
                               (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) * MN[0] *
                               MN[i1])) +
                 2 * std::conj(coup5[j1]) *
                     (coup15[i1] *
                          (coup4[i1] * (t - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                               MN[0] -
                           coup5[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                      coup14[i1] * MN[0] *
                          (-(coup5[i1] *
                             (s + u - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0]))) +
                           2 * coup4[i1] * MN[0] * MN[i1])) *
                     MN[j1])) -
              std::conj(coup14[j1]) *
                  (std::conj(coup5[j1]) *
                       (2 * coup14[i1] * MN[0] *
                            (coup5[i1] *
                                 (s + t + u - 2 * (Mh[1] * Mh[1]) -
                                  2 * (Mh[3] * Mh[3])) *
                                 MN[0] -
                             coup4[i1] *
                                 (s + t - (Mh[1] * Mh[1]) -
                                  3 * (MN[0] * MN[0])) *
                                 MN[i1]) +
                        coup15[i1] *
                            (coup4[i1] *
                                 ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[1] * Mh[1]) + u * (Mh[3] * Mh[3]) -
                                  2 * (Mh[1] * Mh[1]) * (Mh[3] * Mh[3]) +
                                  t * ((Mh[1] * Mh[1]) + (Mh[3] * Mh[3])) +
                                  2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                                  s * ((Mh[1] * Mh[1]) + (Mh[3] * Mh[3]) +
                                       4 * (MN[0] * MN[0])) +
                                  6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                             2 * coup5[i1] *
                                 (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                                 MN[0] * MN[i1])) +
                   2 * std::conj(coup4[j1]) *
                       (coup14[i1] *
                            (coup5[i1] *
                                 (t - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                                 MN[0] -
                             coup4[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                        coup15[i1] * MN[0] *
                            (-(coup4[i1] * (s + u - (Mh[3] * Mh[3]) -
                                            3 * (MN[0] * MN[0]))) +
                             2 * coup5[i1] * MN[0] * MN[i1])) *
                       MN[j1])) /
                 ((t - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))) +
             (std::conj(coup15[j1]) *
                  (std::conj(coup4[j1]) *
                       (-(coup14[i1] * MN[0] *
                          (2 * u * coup5[i1] * MN[0] +
                           coup4[i1] * (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                               MN[i1])) +
                        coup15[i1] *
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
                       (coup15[i1] *
                            (coup4[i1] *
                                 (s + t - (Mh[1] * Mh[1]) -
                                  3 * (MN[0] * MN[0])) *
                                 MN[0] +
                             coup5[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                        coup14[i1] * MN[0] *
                            (coup5[i1] *
                                 (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) +
                             2 * coup4[i1] * MN[0] * MN[i1])) *
                       MN[j1]) +
              std::conj(coup14[j1]) *
                  (std::conj(coup5[j1]) *
                       (-(coup15[i1] * MN[0] *
                          (2 * u * coup4[i1] * MN[0] +
                           coup5[i1] * (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                               MN[i1])) +
                        coup14[i1] *
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
                       (coup14[i1] *
                            (coup5[i1] *
                                 (s + t - (Mh[1] * Mh[1]) -
                                  3 * (MN[0] * MN[0])) *
                                 MN[0] +
                             coup4[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                        coup15[i1] * MN[0] *
                            (coup4[i1] *
                                 (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) +
                             2 * coup5[i1] * MN[0] * MN[i1])) *
                       MN[j1])) /
                 ((u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
         j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1h2h5(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (Mh[1] * Mh[1]) + (Mh[4] * Mh[4]) +
         cos_t *
             sqrt(s +
                  (((Mh[1] * Mh[1]) - (Mh[4] * Mh[4])) *
                   ((Mh[1] * Mh[1]) - (Mh[4] * Mh[4]))) /
                      s -
                  2 * ((Mh[1] * Mh[1]) + (Mh[4] * Mh[4]))) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (Mh[1] * Mh[1]) + (Mh[4] * Mh[4]) + 2 * (MN[0] * MN[0]);
    res += (coup17 * std::conj(coup17) *
            (std::conj(coup8) *
                 (2 * coup9 * (s - 2 * ((Mh[1] * Mh[1]) + (Mh[4] * Mh[4]))) *
                      (MN[0] * MN[0]) +
                  coup8 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[1] * Mh[1] * Mh[1] * Mh[1]) -
                           2 * (Mh[1] * Mh[1]) * (Mh[4] * Mh[4]) +
                           (Mh[4] * Mh[4] * Mh[4] * Mh[4]) +
                           4 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                           4 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[1] * Mh[1]) + (Mh[4] * Mh[4]) +
                                (MN[0] * MN[0])))) +
             std::conj(coup9) *
                 (2 * coup8 * (s - 2 * ((Mh[1] * Mh[1]) + (Mh[4] * Mh[4]))) *
                      (MN[0] * MN[0]) +
                  coup9 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[1] * Mh[1] * Mh[1] * Mh[1]) -
                           2 * (Mh[1] * Mh[1]) * (Mh[4] * Mh[4]) +
                           (Mh[4] * Mh[4] * Mh[4] * Mh[4]) +
                           4 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                           4 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[1] * Mh[1]) + (Mh[4] * Mh[4]) +
                                (MN[0] * MN[0])))))) /
           (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((-2 * std::conj(coup17) * coup16[i1] *
          (std::conj(coup9) *
               (coup3[i1] * (t - u + (Mh[1] * Mh[1]) - (Mh[4] * Mh[4])) +
                coup2[i1] * (t - u - (Mh[1] * Mh[1]) + (Mh[4] * Mh[4]))) +
           std::conj(coup8) *
               (coup2[i1] * (t - u + (Mh[1] * Mh[1]) - (Mh[4] * Mh[4])) +
                coup3[i1] * (t - u - (Mh[1] * Mh[1]) + (Mh[4] * Mh[4])))) *
          MN[0]) /
             ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((coup17 *
          (std::conj(coup19[j1]) *
               (std::conj(coup4[j1]) *
                    (-2 * coup9 *
                         (s + t - u - 2 * (Mh[1] * Mh[1]) -
                          2 * (Mh[4] * Mh[4])) *
                         (MN[0] * MN[0]) +
                     coup8 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[1] * Mh[1]) -
                          2 * (Mh[1] * Mh[1] * Mh[1] * Mh[1]) -
                          u * (Mh[4] * Mh[4]) +
                          2 * (Mh[1] * Mh[1]) * (Mh[4] * Mh[4]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) -
                          2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[1] * Mh[1]) + (Mh[4] * Mh[4]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[1] * Mh[1]) + (Mh[4] * Mh[4]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup5[j1]) *
                    (coup9 * (t - u + (Mh[1] * Mh[1]) - (Mh[4] * Mh[4])) +
                     coup8 * (t - u - (Mh[1] * Mh[1]) + (Mh[4] * Mh[4]))) *
                    MN[0] * MN[j1]) +
           std::conj(coup18[j1]) *
               (std::conj(coup5[j1]) *
                    (-2 * coup8 *
                         (s + t - u - 2 * (Mh[1] * Mh[1]) -
                          2 * (Mh[4] * Mh[4])) *
                         (MN[0] * MN[0]) +
                     coup9 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[1] * Mh[1]) -
                          2 * (Mh[1] * Mh[1] * Mh[1] * Mh[1]) -
                          u * (Mh[4] * Mh[4]) +
                          2 * (Mh[1] * Mh[1]) * (Mh[4] * Mh[4]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) -
                          2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[1] * Mh[1]) + (Mh[4] * Mh[4]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[1] * Mh[1]) + (Mh[4] * Mh[4]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup4[j1]) *
                    (coup8 * (t - u + (Mh[1] * Mh[1]) - (Mh[4] * Mh[4])) +
                     coup9 * (t - u - (Mh[1] * Mh[1]) + (Mh[4] * Mh[4]))) *
                    MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (u - (MN[j1] * MN[j1]))) +
             (coup17 *
              (std::conj(coup19[j1]) *
                   (std::conj(coup4[j1]) *
                        (2 * coup8 *
                             (s - t + u - 2 * (Mh[1] * Mh[1]) -
                              2 * (Mh[4] * Mh[4])) *
                             (MN[0] * MN[0]) +
                         coup9 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[1] * Mh[1]) - u * (Mh[4] * Mh[4]) -
                                  2 * (Mh[1] * Mh[1]) * (Mh[4] * Mh[4]) +
                                  2 * (Mh[4] * Mh[4] * Mh[4] * Mh[4]) +
                                  t * (2 * u + (Mh[1] * Mh[1]) -
                                       (Mh[4] * Mh[4]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  6 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                                  s * ((Mh[1] * Mh[1]) + 3 * (Mh[4] * Mh[4]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup5[j1]) *
                        (coup9 * (t - u + (Mh[1] * Mh[1]) - (Mh[4] * Mh[4])) +
                         coup8 * (t - u - (Mh[1] * Mh[1]) + (Mh[4] * Mh[4]))) *
                        MN[0] * MN[j1]) +
               std::conj(coup18[j1]) *
                   (std::conj(coup5[j1]) *
                        (2 * coup9 *
                             (s - t + u - 2 * (Mh[1] * Mh[1]) -
                              2 * (Mh[4] * Mh[4])) *
                             (MN[0] * MN[0]) +
                         coup8 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[1] * Mh[1]) - u * (Mh[4] * Mh[4]) -
                                  2 * (Mh[1] * Mh[1]) * (Mh[4] * Mh[4]) +
                                  2 * (Mh[4] * Mh[4] * Mh[4] * Mh[4]) +
                                  t * (2 * u + (Mh[1] * Mh[1]) -
                                       (Mh[4] * Mh[4]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  6 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                                  s * ((Mh[1] * Mh[1]) + 3 * (Mh[4] * Mh[4]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup4[j1]) *
                        (coup8 * (t - u + (Mh[1] * Mh[1]) - (Mh[4] * Mh[4])) +
                         coup9 * (t - u - (Mh[1] * Mh[1]) + (Mh[4] * Mh[4]))) *
                        MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (t - (MN[j1] * MN[j1]))),
         j1, 5)

    SUM2((std::conj(coup16[j1]) * coup16[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2((2 * coup16[i1] *
          (std::conj(coup19[j1]) *
               (std::conj(coup4[j1]) *
                    (coup2[i1] *
                         (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) -
                     coup3[i1] * (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup5[j1]) *
                    (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup2[i1] * (MN[0] * MN[0])) *
                    MN[j1]) +
           std::conj(coup18[j1]) *
               (std::conj(coup5[j1]) *
                    (coup3[i1] *
                         (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) -
                     coup2[i1] * (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup4[j1]) *
                    (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup3[i1] * (MN[0] * MN[0])) *
                    MN[j1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))) -
             (2 * coup16[i1] *
              (std::conj(coup19[j1]) *
                   (std::conj(coup4[j1]) *
                        (-(coup3[i1] *
                           (s + t - (Mh[1] * Mh[1]) - 3 * (MN[0] * MN[0]))) +
                         coup2[i1] * (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup5[j1]) *
                        (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                         2 * coup2[i1] * (MN[0] * MN[0])) *
                        MN[j1]) +
               std::conj(coup18[j1]) *
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

    SUM2((std::conj(coup19[j1]) *
              (std::conj(coup4[j1]) *
                   (coup18[i1] * MN[0] *
                        (-2 * t * coup5[i1] * MN[0] +
                         coup4[i1] *
                             (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) *
                             MN[i1]) +
                    coup19[i1] *
                        (coup4[i1] *
                             (t * (u - (Mh[4] * Mh[4]) - (MN[0] * MN[0])) -
                              (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) *
                                  ((Mh[4] * Mh[4]) - (MN[0] * MN[0]))) -
                         coup5[i1] * (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                             MN[0] * MN[i1])) +
               std::conj(coup5[j1]) *
                   (coup19[i1] *
                        (-(coup4[i1] * (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                           MN[0]) +
                         coup5[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                    coup18[i1] * MN[0] *
                        (coup5[i1] *
                             (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) -
                         2 * coup4[i1] * MN[0] * MN[i1])) *
                   MN[j1]) +
          std::conj(coup18[j1]) *
              (std::conj(coup5[j1]) *
                   (coup19[i1] * MN[0] *
                        (-2 * t * coup4[i1] * MN[0] +
                         coup5[i1] *
                             (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) *
                             MN[i1]) +
                    coup18[i1] *
                        (coup5[i1] *
                             (t * (u - (Mh[4] * Mh[4]) - (MN[0] * MN[0])) -
                              (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) *
                                  ((Mh[4] * Mh[4]) - (MN[0] * MN[0]))) -
                         coup4[i1] * (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                             MN[0] * MN[i1])) +
               std::conj(coup4[j1]) *
                   (coup18[i1] *
                        (-(coup5[i1] * (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                           MN[0]) +
                         coup4[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                    coup19[i1] * MN[0] *
                        (coup4[i1] *
                             (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) -
                         2 * coup5[i1] * MN[0] * MN[i1])) *
                   MN[j1])) /
                 ((t - (MN[i1] * MN[i1])) * (t - (MN[j1] * MN[j1]))) +
             (-(std::conj(coup19[j1]) *
                (std::conj(coup4[j1]) *
                     (2 * coup19[i1] * MN[0] *
                          (coup4[i1] *
                               (s + t + u - 2 * (Mh[1] * Mh[1]) -
                                2 * (Mh[4] * Mh[4])) *
                               MN[0] -
                           coup5[i1] *
                               (s + t - (Mh[1] * Mh[1]) - 3 * (MN[0] * MN[0])) *
                               MN[i1]) +
                      coup18[i1] *
                          (coup5[i1] *
                               ((s * s) - (t * t) - (u * u) +
                                u * (Mh[1] * Mh[1]) + u * (Mh[4] * Mh[4]) -
                                2 * (Mh[1] * Mh[1]) * (Mh[4] * Mh[4]) +
                                t * ((Mh[1] * Mh[1]) + (Mh[4] * Mh[4])) +
                                2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                                s * ((Mh[1] * Mh[1]) + (Mh[4] * Mh[4]) +
                                     4 * (MN[0] * MN[0])) +
                                6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                           2 * coup4[i1] *
                               (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) * MN[0] *
                               MN[i1])) +
                 2 * std::conj(coup5[j1]) *
                     (coup19[i1] *
                          (coup4[i1] * (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                               MN[0] -
                           coup5[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                      coup18[i1] * MN[0] *
                          (-(coup5[i1] *
                             (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0]))) +
                           2 * coup4[i1] * MN[0] * MN[i1])) *
                     MN[j1])) -
              std::conj(coup18[j1]) *
                  (std::conj(coup5[j1]) *
                       (2 * coup18[i1] * MN[0] *
                            (coup5[i1] *
                                 (s + t + u - 2 * (Mh[1] * Mh[1]) -
                                  2 * (Mh[4] * Mh[4])) *
                                 MN[0] -
                             coup4[i1] *
                                 (s + t - (Mh[1] * Mh[1]) -
                                  3 * (MN[0] * MN[0])) *
                                 MN[i1]) +
                        coup19[i1] *
                            (coup4[i1] *
                                 ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[1] * Mh[1]) + u * (Mh[4] * Mh[4]) -
                                  2 * (Mh[1] * Mh[1]) * (Mh[4] * Mh[4]) +
                                  t * ((Mh[1] * Mh[1]) + (Mh[4] * Mh[4])) +
                                  2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                                  s * ((Mh[1] * Mh[1]) + (Mh[4] * Mh[4]) +
                                       4 * (MN[0] * MN[0])) +
                                  6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                             2 * coup5[i1] *
                                 (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                                 MN[0] * MN[i1])) +
                   2 * std::conj(coup4[j1]) *
                       (coup18[i1] *
                            (coup5[i1] *
                                 (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                                 MN[0] -
                             coup4[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                        coup19[i1] * MN[0] *
                            (-(coup4[i1] * (s + u - (Mh[4] * Mh[4]) -
                                            3 * (MN[0] * MN[0]))) +
                             2 * coup5[i1] * MN[0] * MN[i1])) *
                       MN[j1])) /
                 ((t - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))) +
             (std::conj(coup19[j1]) *
                  (std::conj(coup4[j1]) *
                       (-(coup18[i1] * MN[0] *
                          (2 * u * coup5[i1] * MN[0] +
                           coup4[i1] * (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                               MN[i1])) +
                        coup19[i1] *
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
                       (coup19[i1] *
                            (coup4[i1] *
                                 (s + t - (Mh[1] * Mh[1]) -
                                  3 * (MN[0] * MN[0])) *
                                 MN[0] +
                             coup5[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                        coup18[i1] * MN[0] *
                            (coup5[i1] *
                                 (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) +
                             2 * coup4[i1] * MN[0] * MN[i1])) *
                       MN[j1]) +
              std::conj(coup18[j1]) *
                  (std::conj(coup5[j1]) *
                       (-(coup19[i1] * MN[0] *
                          (2 * u * coup4[i1] * MN[0] +
                           coup5[i1] * (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                               MN[i1])) +
                        coup18[i1] *
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
                       (coup18[i1] *
                            (coup5[i1] *
                                 (s + t - (Mh[1] * Mh[1]) -
                                  3 * (MN[0] * MN[0])) *
                                 MN[0] +
                             coup4[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                        coup19[i1] * MN[0] *
                            (coup4[i1] *
                                 (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) +
                             2 * coup5[i1] * MN[0] * MN[i1])) *
                       MN[j1])) /
                 ((u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
         j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1h2h6(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (Mh[1] * Mh[1]) + (Mh[5] * Mh[5]) +
         cos_t *
             sqrt(s +
                  (((Mh[1] * Mh[1]) - (Mh[5] * Mh[5])) *
                   ((Mh[1] * Mh[1]) - (Mh[5] * Mh[5]))) /
                      s -
                  2 * ((Mh[1] * Mh[1]) + (Mh[5] * Mh[5]))) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (Mh[1] * Mh[1]) + (Mh[5] * Mh[5]) + 2 * (MN[0] * MN[0]);
    res += (coup21 * std::conj(coup21) *
            (std::conj(coup8) *
                 (2 * coup9 * (s - 2 * ((Mh[1] * Mh[1]) + (Mh[5] * Mh[5]))) *
                      (MN[0] * MN[0]) +
                  coup8 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[1] * Mh[1] * Mh[1] * Mh[1]) -
                           2 * (Mh[1] * Mh[1]) * (Mh[5] * Mh[5]) +
                           (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                           4 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                           4 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[1] * Mh[1]) + (Mh[5] * Mh[5]) +
                                (MN[0] * MN[0])))) +
             std::conj(coup9) *
                 (2 * coup8 * (s - 2 * ((Mh[1] * Mh[1]) + (Mh[5] * Mh[5]))) *
                      (MN[0] * MN[0]) +
                  coup9 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[1] * Mh[1] * Mh[1] * Mh[1]) -
                           2 * (Mh[1] * Mh[1]) * (Mh[5] * Mh[5]) +
                           (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                           4 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                           4 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[1] * Mh[1]) + (Mh[5] * Mh[5]) +
                                (MN[0] * MN[0])))))) /
           (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((-2 * std::conj(coup21) * coup20[i1] *
          (std::conj(coup9) *
               (coup3[i1] * (t - u + (Mh[1] * Mh[1]) - (Mh[5] * Mh[5])) +
                coup2[i1] * (t - u - (Mh[1] * Mh[1]) + (Mh[5] * Mh[5]))) +
           std::conj(coup8) *
               (coup2[i1] * (t - u + (Mh[1] * Mh[1]) - (Mh[5] * Mh[5])) +
                coup3[i1] * (t - u - (Mh[1] * Mh[1]) + (Mh[5] * Mh[5])))) *
          MN[0]) /
             ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((coup21 *
          (std::conj(coup23[j1]) *
               (std::conj(coup4[j1]) *
                    (-2 * coup9 *
                         (s + t - u - 2 * (Mh[1] * Mh[1]) -
                          2 * (Mh[5] * Mh[5])) *
                         (MN[0] * MN[0]) +
                     coup8 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[1] * Mh[1]) -
                          2 * (Mh[1] * Mh[1] * Mh[1] * Mh[1]) -
                          u * (Mh[5] * Mh[5]) +
                          2 * (Mh[1] * Mh[1]) * (Mh[5] * Mh[5]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) -
                          2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[1] * Mh[1]) + (Mh[5] * Mh[5]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[1] * Mh[1]) + (Mh[5] * Mh[5]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup5[j1]) *
                    (coup9 * (t - u + (Mh[1] * Mh[1]) - (Mh[5] * Mh[5])) +
                     coup8 * (t - u - (Mh[1] * Mh[1]) + (Mh[5] * Mh[5]))) *
                    MN[0] * MN[j1]) +
           std::conj(coup22[j1]) *
               (std::conj(coup5[j1]) *
                    (-2 * coup8 *
                         (s + t - u - 2 * (Mh[1] * Mh[1]) -
                          2 * (Mh[5] * Mh[5])) *
                         (MN[0] * MN[0]) +
                     coup9 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[1] * Mh[1]) -
                          2 * (Mh[1] * Mh[1] * Mh[1] * Mh[1]) -
                          u * (Mh[5] * Mh[5]) +
                          2 * (Mh[1] * Mh[1]) * (Mh[5] * Mh[5]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) -
                          2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[1] * Mh[1]) + (Mh[5] * Mh[5]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[1] * Mh[1]) + (Mh[5] * Mh[5]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup4[j1]) *
                    (coup8 * (t - u + (Mh[1] * Mh[1]) - (Mh[5] * Mh[5])) +
                     coup9 * (t - u - (Mh[1] * Mh[1]) + (Mh[5] * Mh[5]))) *
                    MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (u - (MN[j1] * MN[j1]))) +
             (coup21 *
              (std::conj(coup23[j1]) *
                   (std::conj(coup4[j1]) *
                        (2 * coup8 *
                             (s - t + u - 2 * (Mh[1] * Mh[1]) -
                              2 * (Mh[5] * Mh[5])) *
                             (MN[0] * MN[0]) +
                         coup9 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[1] * Mh[1]) - u * (Mh[5] * Mh[5]) -
                                  2 * (Mh[1] * Mh[1]) * (Mh[5] * Mh[5]) +
                                  2 * (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                                  t * (2 * u + (Mh[1] * Mh[1]) -
                                       (Mh[5] * Mh[5]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  6 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                                  s * ((Mh[1] * Mh[1]) + 3 * (Mh[5] * Mh[5]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup5[j1]) *
                        (coup9 * (t - u + (Mh[1] * Mh[1]) - (Mh[5] * Mh[5])) +
                         coup8 * (t - u - (Mh[1] * Mh[1]) + (Mh[5] * Mh[5]))) *
                        MN[0] * MN[j1]) +
               std::conj(coup22[j1]) *
                   (std::conj(coup5[j1]) *
                        (2 * coup9 *
                             (s - t + u - 2 * (Mh[1] * Mh[1]) -
                              2 * (Mh[5] * Mh[5])) *
                             (MN[0] * MN[0]) +
                         coup8 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[1] * Mh[1]) - u * (Mh[5] * Mh[5]) -
                                  2 * (Mh[1] * Mh[1]) * (Mh[5] * Mh[5]) +
                                  2 * (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                                  t * (2 * u + (Mh[1] * Mh[1]) -
                                       (Mh[5] * Mh[5]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  6 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                                  s * ((Mh[1] * Mh[1]) + 3 * (Mh[5] * Mh[5]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup4[j1]) *
                        (coup8 * (t - u + (Mh[1] * Mh[1]) - (Mh[5] * Mh[5])) +
                         coup9 * (t - u - (Mh[1] * Mh[1]) + (Mh[5] * Mh[5]))) *
                        MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (t - (MN[j1] * MN[j1]))),
         j1, 5)

    SUM2((std::conj(coup20[j1]) * coup20[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2((2 * coup20[i1] *
          (std::conj(coup23[j1]) *
               (std::conj(coup4[j1]) *
                    (coup2[i1] *
                         (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0])) -
                     coup3[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup5[j1]) *
                    (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup2[i1] * (MN[0] * MN[0])) *
                    MN[j1]) +
           std::conj(coup22[j1]) *
               (std::conj(coup5[j1]) *
                    (coup3[i1] *
                         (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0])) -
                     coup2[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup4[j1]) *
                    (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup3[i1] * (MN[0] * MN[0])) *
                    MN[j1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))) -
             (2 * coup20[i1] *
              (std::conj(coup23[j1]) *
                   (std::conj(coup4[j1]) *
                        (-(coup3[i1] *
                           (s + t - (Mh[1] * Mh[1]) - 3 * (MN[0] * MN[0]))) +
                         coup2[i1] * (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup5[j1]) *
                        (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                         2 * coup2[i1] * (MN[0] * MN[0])) *
                        MN[j1]) +
               std::conj(coup22[j1]) *
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

    SUM2((std::conj(coup23[j1]) *
              (std::conj(coup4[j1]) *
                   (coup22[i1] * MN[0] *
                        (-2 * t * coup5[i1] * MN[0] +
                         coup4[i1] *
                             (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0])) *
                             MN[i1]) +
                    coup23[i1] *
                        (coup4[i1] *
                             (t * (u - (Mh[5] * Mh[5]) - (MN[0] * MN[0])) -
                              (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0])) *
                                  ((Mh[5] * Mh[5]) - (MN[0] * MN[0]))) -
                         coup5[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                             MN[0] * MN[i1])) +
               std::conj(coup5[j1]) *
                   (coup23[i1] *
                        (-(coup4[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                           MN[0]) +
                         coup5[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                    coup22[i1] * MN[0] *
                        (coup5[i1] *
                             (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0])) -
                         2 * coup4[i1] * MN[0] * MN[i1])) *
                   MN[j1]) +
          std::conj(coup22[j1]) *
              (std::conj(coup5[j1]) *
                   (coup23[i1] * MN[0] *
                        (-2 * t * coup4[i1] * MN[0] +
                         coup5[i1] *
                             (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0])) *
                             MN[i1]) +
                    coup22[i1] *
                        (coup5[i1] *
                             (t * (u - (Mh[5] * Mh[5]) - (MN[0] * MN[0])) -
                              (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0])) *
                                  ((Mh[5] * Mh[5]) - (MN[0] * MN[0]))) -
                         coup4[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                             MN[0] * MN[i1])) +
               std::conj(coup4[j1]) *
                   (coup22[i1] *
                        (-(coup5[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                           MN[0]) +
                         coup4[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                    coup23[i1] * MN[0] *
                        (coup4[i1] *
                             (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0])) -
                         2 * coup5[i1] * MN[0] * MN[i1])) *
                   MN[j1])) /
                 ((t - (MN[i1] * MN[i1])) * (t - (MN[j1] * MN[j1]))) +
             (-(std::conj(coup23[j1]) *
                (std::conj(coup4[j1]) *
                     (2 * coup23[i1] * MN[0] *
                          (coup4[i1] *
                               (s + t + u - 2 * (Mh[1] * Mh[1]) -
                                2 * (Mh[5] * Mh[5])) *
                               MN[0] -
                           coup5[i1] *
                               (s + t - (Mh[1] * Mh[1]) - 3 * (MN[0] * MN[0])) *
                               MN[i1]) +
                      coup22[i1] *
                          (coup5[i1] *
                               ((s * s) - (t * t) - (u * u) +
                                u * (Mh[1] * Mh[1]) + u * (Mh[5] * Mh[5]) -
                                2 * (Mh[1] * Mh[1]) * (Mh[5] * Mh[5]) +
                                t * ((Mh[1] * Mh[1]) + (Mh[5] * Mh[5])) +
                                2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                                s * ((Mh[1] * Mh[1]) + (Mh[5] * Mh[5]) +
                                     4 * (MN[0] * MN[0])) +
                                6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                           2 * coup4[i1] *
                               (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) * MN[0] *
                               MN[i1])) +
                 2 * std::conj(coup5[j1]) *
                     (coup23[i1] *
                          (coup4[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                               MN[0] -
                           coup5[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                      coup22[i1] * MN[0] *
                          (-(coup5[i1] *
                             (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0]))) +
                           2 * coup4[i1] * MN[0] * MN[i1])) *
                     MN[j1])) -
              std::conj(coup22[j1]) *
                  (std::conj(coup5[j1]) *
                       (2 * coup22[i1] * MN[0] *
                            (coup5[i1] *
                                 (s + t + u - 2 * (Mh[1] * Mh[1]) -
                                  2 * (Mh[5] * Mh[5])) *
                                 MN[0] -
                             coup4[i1] *
                                 (s + t - (Mh[1] * Mh[1]) -
                                  3 * (MN[0] * MN[0])) *
                                 MN[i1]) +
                        coup23[i1] *
                            (coup4[i1] *
                                 ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[1] * Mh[1]) + u * (Mh[5] * Mh[5]) -
                                  2 * (Mh[1] * Mh[1]) * (Mh[5] * Mh[5]) +
                                  t * ((Mh[1] * Mh[1]) + (Mh[5] * Mh[5])) +
                                  2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                                  s * ((Mh[1] * Mh[1]) + (Mh[5] * Mh[5]) +
                                       4 * (MN[0] * MN[0])) +
                                  6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                             2 * coup5[i1] *
                                 (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                                 MN[0] * MN[i1])) +
                   2 * std::conj(coup4[j1]) *
                       (coup22[i1] *
                            (coup5[i1] *
                                 (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                                 MN[0] -
                             coup4[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                        coup23[i1] * MN[0] *
                            (-(coup4[i1] * (s + u - (Mh[5] * Mh[5]) -
                                            3 * (MN[0] * MN[0]))) +
                             2 * coup5[i1] * MN[0] * MN[i1])) *
                       MN[j1])) /
                 ((t - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))) +
             (std::conj(coup23[j1]) *
                  (std::conj(coup4[j1]) *
                       (-(coup22[i1] * MN[0] *
                          (2 * u * coup5[i1] * MN[0] +
                           coup4[i1] * (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                               MN[i1])) +
                        coup23[i1] *
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
                       (coup23[i1] *
                            (coup4[i1] *
                                 (s + t - (Mh[1] * Mh[1]) -
                                  3 * (MN[0] * MN[0])) *
                                 MN[0] +
                             coup5[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                        coup22[i1] * MN[0] *
                            (coup5[i1] *
                                 (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) +
                             2 * coup4[i1] * MN[0] * MN[i1])) *
                       MN[j1]) +
              std::conj(coup22[j1]) *
                  (std::conj(coup5[j1]) *
                       (-(coup23[i1] * MN[0] *
                          (2 * u * coup4[i1] * MN[0] +
                           coup5[i1] * (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                               MN[i1])) +
                        coup22[i1] *
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
                       (coup22[i1] *
                            (coup5[i1] *
                                 (s + t - (Mh[1] * Mh[1]) -
                                  3 * (MN[0] * MN[0])) *
                                 MN[0] +
                             coup4[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                        coup23[i1] * MN[0] *
                            (coup4[i1] *
                                 (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) +
                             2 * coup5[i1] * MN[0] * MN[i1])) *
                       MN[j1])) /
                 ((u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
         j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1h3h3(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t = -0.5 * s + (Mh[2] * Mh[2]) +
                             (cos_t * sqrt(s - 4 * (Mh[2] * Mh[2])) *
                              sqrt(s - 4 * (MN[0] * MN[0]))) /
                                 2. +
                             (MN[0] * MN[0]);
    std::complex<double> u = -s - t + 2 * (Mh[2] * Mh[2]) + 2 * (MN[0] * MN[0]);
    SUM2((std::conj(coup24[j1]) * coup24[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2((2 * coup24[i1] *
          (std::conj(coup10[j1]) * std::conj(coup11[j1]) *
               (coup2[i1] + coup3[i1]) * (s + t - u - 4 * (MN[0] * MN[0])) *
               MN[0] +
           (std::conj(coup11[j1]) * std::conj(coup11[j1])) *
               (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                2 * coup2[i1] * (MN[0] * MN[0])) *
               MN[j1] +
           (std::conj(coup10[j1]) * std::conj(coup10[j1])) *
               (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                2 * coup3[i1] * (MN[0] * MN[0])) *
               MN[j1])) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (MN[j1] * MN[j1]))) +
             (2 * coup24[i1] *
              (std::conj(coup10[j1]) * std::conj(coup11[j1]) *
                   (coup2[i1] + coup3[i1]) * (s - t + u - 4 * (MN[0] * MN[0])) *
                   MN[0] +
               (std::conj(coup11[j1]) * std::conj(coup11[j1])) *
                   (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                    2 * coup2[i1] * (MN[0] * MN[0])) *
                   MN[j1] +
               (std::conj(coup10[j1]) * std::conj(coup10[j1])) *
                   (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                    2 * coup3[i1] * (MN[0] * MN[0])) *
                   MN[j1])) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))),
         i1, 6, j1, 5)

    SUM2((std::conj(coup10[j1]) * std::conj(coup11[j1]) *
              (2 * coup10[i1] * coup11[i1] *
                   (s * (-(Mh[2] * Mh[2]) + (MN[0] * MN[0])) +
                    t * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) -
                    (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                        ((Mh[2] * Mh[2]) + 3 * (MN[0] * MN[0]))) +
               (coup10[i1] * coup10[i1]) * (s + t - u - 4 * (MN[0] * MN[0])) *
                   MN[0] * MN[i1] +
               (coup11[i1] * coup11[i1]) * (s + t - u - 4 * (MN[0] * MN[0])) *
                   MN[0] * MN[i1]) +
          (std::conj(coup11[j1]) * std::conj(coup11[j1])) *
              (coup10[i1] * coup11[i1] * (s + t - u - 4 * (MN[0] * MN[0])) *
                   MN[0] +
               (coup11[i1] * coup11[i1]) * (s - 2 * (MN[0] * MN[0])) * MN[i1] -
               2 * (coup10[i1] * coup10[i1]) * (MN[0] * MN[0]) * MN[i1]) *
              MN[j1] +
          (std::conj(coup10[j1]) * std::conj(coup10[j1])) *
              (coup10[i1] * coup11[i1] * (s + t - u - 4 * (MN[0] * MN[0])) *
                   MN[0] +
               (coup10[i1] * coup10[i1]) * (s - 2 * (MN[0] * MN[0])) * MN[i1] -
               2 * (coup11[i1] * coup11[i1]) * (MN[0] * MN[0]) * MN[i1]) *
              MN[j1]) /
                 ((u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))) +
             (std::conj(coup10[j1]) * std::conj(coup11[j1]) *
                  (2 * coup10[i1] * coup11[i1] *
                       (t * (u - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) -
                        (s + u - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) *
                            ((Mh[2] * Mh[2]) - (MN[0] * MN[0]))) +
                   (coup10[i1] * coup10[i1]) *
                       (s - t + u - 4 * (MN[0] * MN[0])) * MN[0] * MN[i1] +
                   (coup11[i1] * coup11[i1]) *
                       (s - t + u - 4 * (MN[0] * MN[0])) * MN[0] * MN[i1]) +
              (std::conj(coup11[j1]) * std::conj(coup11[j1])) *
                  (coup10[i1] * coup11[i1] * (s - t + u - 4 * (MN[0] * MN[0])) *
                       MN[0] +
                   (coup11[i1] * coup11[i1]) * (s - 2 * (MN[0] * MN[0])) *
                       MN[i1] -
                   2 * (coup10[i1] * coup10[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                  MN[j1] +
              (std::conj(coup10[j1]) * std::conj(coup10[j1])) *
                  (coup10[i1] * coup11[i1] * (s - t + u - 4 * (MN[0] * MN[0])) *
                       MN[0] +
                   (coup10[i1] * coup10[i1]) * (s - 2 * (MN[0] * MN[0])) *
                       MN[i1] -
                   2 * (coup11[i1] * coup11[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                  MN[j1]) /
                 ((t - (MN[i1] * MN[i1])) * (t - (MN[j1] * MN[j1]))) -
             (2 *
              (std::conj(coup10[j1]) * std::conj(coup11[j1]) *
                   (coup10[i1] * coup11[i1] *
                        ((s * s) - (t * t) - (u * u) + 2 * u * (Mh[2] * Mh[2]) -
                         2 * (Mh[2] * Mh[2] * Mh[2] * Mh[2]) +
                         2 * u * (MN[0] * MN[0]) -
                         4 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                         2 * s * ((Mh[2] * Mh[2]) + (MN[0] * MN[0])) +
                         2 * t * ((Mh[2] * Mh[2]) + (MN[0] * MN[0])) +
                         6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                    (coup10[i1] * coup10[i1]) *
                        (-s - t + u + 4 * (MN[0] * MN[0])) * MN[0] * MN[i1] +
                    (coup11[i1] * coup11[i1]) *
                        (-s - t + u + 4 * (MN[0] * MN[0])) * MN[0] * MN[i1]) +
               (std::conj(coup11[j1]) * std::conj(coup11[j1])) *
                   (coup10[i1] * coup11[i1] *
                        (-s + t - u + 4 * (MN[0] * MN[0])) * MN[0] -
                    (coup11[i1] * coup11[i1]) * (s - 2 * (MN[0] * MN[0])) *
                        MN[i1] +
                    2 * (coup10[i1] * coup10[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                   MN[j1] +
               (std::conj(coup10[j1]) * std::conj(coup10[j1])) *
                   (coup10[i1] * coup11[i1] *
                        (-s + t - u + 4 * (MN[0] * MN[0])) * MN[0] -
                    (coup10[i1] * coup10[i1]) * (s - 2 * (MN[0] * MN[0])) *
                        MN[i1] +
                    2 * (coup11[i1] * coup11[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                   MN[j1])) /
                 ((t - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
         j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1h3h4(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (Mh[2] * Mh[2]) + (Mh[3] * Mh[3]) +
         cos_t *
             sqrt(s +
                  (((Mh[2] * Mh[2]) - (Mh[3] * Mh[3])) *
                   ((Mh[2] * Mh[2]) - (Mh[3] * Mh[3]))) /
                      s -
                  2 * ((Mh[2] * Mh[2]) + (Mh[3] * Mh[3]))) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (Mh[2] * Mh[2]) + (Mh[3] * Mh[3]) + 2 * (MN[0] * MN[0]);
    res += (coup26 * std::conj(coup26) *
            (std::conj(coup8) *
                 (2 * coup9 * (s - 2 * ((Mh[2] * Mh[2]) + (Mh[3] * Mh[3]))) *
                      (MN[0] * MN[0]) +
                  coup8 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[2] * Mh[2] * Mh[2] * Mh[2]) -
                           2 * (Mh[2] * Mh[2]) * (Mh[3] * Mh[3]) +
                           (Mh[3] * Mh[3] * Mh[3] * Mh[3]) +
                           4 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                           4 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[2] * Mh[2]) + (Mh[3] * Mh[3]) +
                                (MN[0] * MN[0])))) +
             std::conj(coup9) *
                 (2 * coup8 * (s - 2 * ((Mh[2] * Mh[2]) + (Mh[3] * Mh[3]))) *
                      (MN[0] * MN[0]) +
                  coup9 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[2] * Mh[2] * Mh[2] * Mh[2]) -
                           2 * (Mh[2] * Mh[2]) * (Mh[3] * Mh[3]) +
                           (Mh[3] * Mh[3] * Mh[3] * Mh[3]) +
                           4 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                           4 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[2] * Mh[2]) + (Mh[3] * Mh[3]) +
                                (MN[0] * MN[0])))))) /
           (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((-2 * std::conj(coup26) * coup25[i1] *
          (std::conj(coup9) *
               (coup3[i1] * (t - u + (Mh[2] * Mh[2]) - (Mh[3] * Mh[3])) +
                coup2[i1] * (t - u - (Mh[2] * Mh[2]) + (Mh[3] * Mh[3]))) +
           std::conj(coup8) *
               (coup2[i1] * (t - u + (Mh[2] * Mh[2]) - (Mh[3] * Mh[3])) +
                coup3[i1] * (t - u - (Mh[2] * Mh[2]) + (Mh[3] * Mh[3])))) *
          MN[0]) /
             ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((coup26 *
          (std::conj(coup11[j1]) *
               (std::conj(coup14[j1]) *
                    (-2 * coup8 *
                         (s + t - u - 2 * (Mh[2] * Mh[2]) -
                          2 * (Mh[3] * Mh[3])) *
                         (MN[0] * MN[0]) +
                     coup9 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[2] * Mh[2]) -
                          2 * (Mh[2] * Mh[2] * Mh[2] * Mh[2]) -
                          u * (Mh[3] * Mh[3]) +
                          2 * (Mh[2] * Mh[2]) * (Mh[3] * Mh[3]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                          2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[2] * Mh[2]) + (Mh[3] * Mh[3]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[2] * Mh[2]) + (Mh[3] * Mh[3]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup15[j1]) *
                    (coup9 * (t - u + (Mh[2] * Mh[2]) - (Mh[3] * Mh[3])) +
                     coup8 * (t - u - (Mh[2] * Mh[2]) + (Mh[3] * Mh[3]))) *
                    MN[0] * MN[j1]) +
           std::conj(coup10[j1]) *
               (std::conj(coup15[j1]) *
                    (-2 * coup9 *
                         (s + t - u - 2 * (Mh[2] * Mh[2]) -
                          2 * (Mh[3] * Mh[3])) *
                         (MN[0] * MN[0]) +
                     coup8 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[2] * Mh[2]) -
                          2 * (Mh[2] * Mh[2] * Mh[2] * Mh[2]) -
                          u * (Mh[3] * Mh[3]) +
                          2 * (Mh[2] * Mh[2]) * (Mh[3] * Mh[3]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                          2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[2] * Mh[2]) + (Mh[3] * Mh[3]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[2] * Mh[2]) + (Mh[3] * Mh[3]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup14[j1]) *
                    (coup8 * (t - u + (Mh[2] * Mh[2]) - (Mh[3] * Mh[3])) +
                     coup9 * (t - u - (Mh[2] * Mh[2]) + (Mh[3] * Mh[3]))) *
                    MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (u - (MN[j1] * MN[j1]))) +
             (coup26 *
              (std::conj(coup11[j1]) *
                   (std::conj(coup14[j1]) *
                        (2 * coup9 *
                             (s - t + u - 2 * (Mh[2] * Mh[2]) -
                              2 * (Mh[3] * Mh[3])) *
                             (MN[0] * MN[0]) +
                         coup8 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[2] * Mh[2]) - u * (Mh[3] * Mh[3]) -
                                  2 * (Mh[2] * Mh[2]) * (Mh[3] * Mh[3]) +
                                  2 * (Mh[3] * Mh[3] * Mh[3] * Mh[3]) +
                                  t * (2 * u + (Mh[2] * Mh[2]) -
                                       (Mh[3] * Mh[3]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                  6 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                                  s * ((Mh[2] * Mh[2]) + 3 * (Mh[3] * Mh[3]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup15[j1]) *
                        (coup9 * (t - u + (Mh[2] * Mh[2]) - (Mh[3] * Mh[3])) +
                         coup8 * (t - u - (Mh[2] * Mh[2]) + (Mh[3] * Mh[3]))) *
                        MN[0] * MN[j1]) +
               std::conj(coup10[j1]) *
                   (std::conj(coup15[j1]) *
                        (2 * coup8 *
                             (s - t + u - 2 * (Mh[2] * Mh[2]) -
                              2 * (Mh[3] * Mh[3])) *
                             (MN[0] * MN[0]) +
                         coup9 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[2] * Mh[2]) - u * (Mh[3] * Mh[3]) -
                                  2 * (Mh[2] * Mh[2]) * (Mh[3] * Mh[3]) +
                                  2 * (Mh[3] * Mh[3] * Mh[3] * Mh[3]) +
                                  t * (2 * u + (Mh[2] * Mh[2]) -
                                       (Mh[3] * Mh[3]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                  6 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                                  s * ((Mh[2] * Mh[2]) + 3 * (Mh[3] * Mh[3]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup14[j1]) *
                        (coup8 * (t - u + (Mh[2] * Mh[2]) - (Mh[3] * Mh[3])) +
                         coup9 * (t - u - (Mh[2] * Mh[2]) + (Mh[3] * Mh[3]))) *
                        MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (t - (MN[j1] * MN[j1]))),
         j1, 5)

    SUM2((std::conj(coup25[j1]) * coup25[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2((2 * coup25[i1] *
          (std::conj(coup11[j1]) *
               (std::conj(coup14[j1]) *
                    (coup2[i1] *
                         (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) -
                     coup3[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup15[j1]) *
                    (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup2[i1] * (MN[0] * MN[0])) *
                    MN[j1]) +
           std::conj(coup10[j1]) *
               (std::conj(coup15[j1]) *
                    (coup3[i1] *
                         (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) -
                     coup2[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup14[j1]) *
                    (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup3[i1] * (MN[0] * MN[0])) *
                    MN[j1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (MN[j1] * MN[j1]))) -
             (2 * coup25[i1] *
              (std::conj(coup11[j1]) *
                   (std::conj(coup14[j1]) *
                        (-(coup3[i1] *
                           (s + u - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0]))) +
                         coup2[i1] * (t - (Mh[3] * Mh[3]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup15[j1]) *
                        (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                         2 * coup2[i1] * (MN[0] * MN[0])) *
                        MN[j1]) +
               std::conj(coup10[j1]) *
                   (std::conj(coup15[j1]) *
                        (-(coup2[i1] *
                           (s + u - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0]))) +
                         coup3[i1] * (t - (Mh[3] * Mh[3]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup14[j1]) *
                        (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                         2 * coup3[i1] * (MN[0] * MN[0])) *
                        MN[j1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))),
         i1, 6, j1, 5)

    SUM2(
        (std::conj(coup11[j1]) *
             (std::conj(coup14[j1]) *
                  (coup10[i1] * MN[0] *
                       (-2 * u * coup15[i1] * MN[0] +
                        coup14[i1] *
                            (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) *
                            MN[i1]) +
                   coup11[i1] *
                       (coup14[i1] *
                            (-(s * (Mh[2] * Mh[2])) - u * (Mh[2] * Mh[2]) +
                             (Mh[2] * Mh[2] * Mh[2] * Mh[2]) +
                             s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                             2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                             t * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) -
                             3 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                        coup15[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                            MN[0] * MN[i1])) +
              std::conj(coup15[j1]) *
                  (coup11[i1] *
                       (-(coup14[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                          MN[0]) +
                        coup15[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                   coup10[i1] * MN[0] *
                       (coup15[i1] *
                            (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) -
                        2 * coup14[i1] * MN[0] * MN[i1])) *
                  MN[j1]) +
         std::conj(coup10[j1]) *
             (std::conj(coup15[j1]) *
                  (coup11[i1] * MN[0] *
                       (-2 * u * coup14[i1] * MN[0] +
                        coup15[i1] *
                            (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) *
                            MN[i1]) +
                   coup10[i1] *
                       (coup15[i1] *
                            (-(s * (Mh[2] * Mh[2])) - u * (Mh[2] * Mh[2]) +
                             (Mh[2] * Mh[2] * Mh[2] * Mh[2]) +
                             s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                             2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                             t * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) -
                             3 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                        coup14[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                            MN[0] * MN[i1])) +
              std::conj(coup14[j1]) *
                  (coup10[i1] *
                       (-(coup15[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                          MN[0]) +
                        coup14[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                   coup11[i1] * MN[0] *
                       (coup14[i1] *
                            (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) -
                        2 * coup15[i1] * MN[0] * MN[i1])) *
                  MN[j1])) /
                ((u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))) +
            (std::conj(coup11[j1]) *
                 (std::conj(coup14[j1]) *
                      (-(coup10[i1] * MN[0] *
                         (2 * t * coup15[i1] * MN[0] +
                          coup14[i1] * (t - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                              MN[i1])) +
                       coup11[i1] *
                           (coup14[i1] *
                                (t * (u - (Mh[3] * Mh[3]) - (MN[0] * MN[0])) -
                                 (s + u - (Mh[3] * Mh[3]) -
                                  3 * (MN[0] * MN[0])) *
                                     ((Mh[3] * Mh[3]) - (MN[0] * MN[0]))) +
                            coup15[i1] *
                                (s + u - (Mh[3] * Mh[3]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup15[j1]) *
                      (coup11[i1] *
                           (coup14[i1] *
                                (s + u - (Mh[3] * Mh[3]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup15[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                       coup10[i1] * MN[0] *
                           (coup15[i1] *
                                (t - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) +
                            2 * coup14[i1] * MN[0] * MN[i1])) *
                      MN[j1]) +
             std::conj(coup10[j1]) *
                 (std::conj(coup15[j1]) *
                      (-(coup11[i1] * MN[0] *
                         (2 * t * coup14[i1] * MN[0] +
                          coup15[i1] * (t - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                              MN[i1])) +
                       coup10[i1] *
                           (coup15[i1] *
                                (t * (u - (Mh[3] * Mh[3]) - (MN[0] * MN[0])) -
                                 (s + u - (Mh[3] * Mh[3]) -
                                  3 * (MN[0] * MN[0])) *
                                     ((Mh[3] * Mh[3]) - (MN[0] * MN[0]))) +
                            coup14[i1] *
                                (s + u - (Mh[3] * Mh[3]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup14[j1]) *
                      (coup10[i1] *
                           (coup15[i1] *
                                (s + u - (Mh[3] * Mh[3]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup14[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                       coup11[i1] * MN[0] *
                           (coup14[i1] *
                                (t - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) +
                            2 * coup15[i1] * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((t - (MN[i1] * MN[i1])) * (t - (MN[j1] * MN[j1]))) +
            (-(std::conj(coup11[j1]) *
               (std::conj(coup14[j1]) *
                    (2 * coup11[i1] * MN[0] *
                         (coup14[i1] *
                              (s + t + u - 2 * (Mh[2] * Mh[2]) -
                               2 * (Mh[3] * Mh[3])) *
                              MN[0] +
                          coup15[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                              MN[i1]) +
                     coup10[i1] *
                         (coup15[i1] *
                              ((s * s) - (t * t) - (u * u) +
                               u * (Mh[2] * Mh[2]) + u * (Mh[3] * Mh[3]) -
                               2 * (Mh[2] * Mh[2]) * (Mh[3] * Mh[3]) +
                               t * ((Mh[2] * Mh[2]) + (Mh[3] * Mh[3])) +
                               2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                               2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                               s * ((Mh[2] * Mh[2]) + (Mh[3] * Mh[3]) +
                                    4 * (MN[0] * MN[0])) +
                               6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                          2 * coup14[i1] *
                              (-s - t + (Mh[2] * Mh[2]) + 3 * (MN[0] * MN[0])) *
                              MN[0] * MN[i1])) +
                2 * std::conj(coup15[j1]) *
                    (-(coup11[i1] *
                       (coup14[i1] *
                            (s + u - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) *
                            MN[0] +
                        coup15[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1])) +
                     coup10[i1] * MN[0] *
                         (coup15[i1] * (t - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) +
                          2 * coup14[i1] * MN[0] * MN[i1])) *
                    MN[j1])) -
             std::conj(coup10[j1]) *
                 (std::conj(coup15[j1]) *
                      (2 * coup10[i1] * MN[0] *
                           (coup15[i1] *
                                (s + t + u - 2 * (Mh[2] * Mh[2]) -
                                 2 * (Mh[3] * Mh[3])) *
                                MN[0] +
                            coup14[i1] *
                                (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                                MN[i1]) +
                       coup11[i1] *
                           (coup14[i1] *
                                ((s * s) - (t * t) - (u * u) +
                                 u * (Mh[2] * Mh[2]) + u * (Mh[3] * Mh[3]) -
                                 2 * (Mh[2] * Mh[2]) * (Mh[3] * Mh[3]) +
                                 t * ((Mh[2] * Mh[2]) + (Mh[3] * Mh[3])) +
                                 2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                 2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                                 s * ((Mh[2] * Mh[2]) + (Mh[3] * Mh[3]) +
                                      4 * (MN[0] * MN[0])) +
                                 6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup15[i1] *
                                (-s - t + (Mh[2] * Mh[2]) +
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  2 * std::conj(coup14[j1]) *
                      (-(coup10[i1] *
                         (coup15[i1] *
                              (s + u - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) *
                              MN[0] +
                          coup14[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1])) +
                       coup11[i1] * MN[0] *
                           (coup14[i1] *
                                (t - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) +
                            2 * coup15[i1] * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((t - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
        j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1h3h5(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (Mh[2] * Mh[2]) + (Mh[4] * Mh[4]) +
         cos_t *
             sqrt(s +
                  (((Mh[2] * Mh[2]) - (Mh[4] * Mh[4])) *
                   ((Mh[2] * Mh[2]) - (Mh[4] * Mh[4]))) /
                      s -
                  2 * ((Mh[2] * Mh[2]) + (Mh[4] * Mh[4]))) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (Mh[2] * Mh[2]) + (Mh[4] * Mh[4]) + 2 * (MN[0] * MN[0]);
    res += (coup28 * std::conj(coup28) *
            (std::conj(coup8) *
                 (2 * coup9 * (s - 2 * ((Mh[2] * Mh[2]) + (Mh[4] * Mh[4]))) *
                      (MN[0] * MN[0]) +
                  coup8 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[2] * Mh[2] * Mh[2] * Mh[2]) -
                           2 * (Mh[2] * Mh[2]) * (Mh[4] * Mh[4]) +
                           (Mh[4] * Mh[4] * Mh[4] * Mh[4]) +
                           4 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                           4 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[2] * Mh[2]) + (Mh[4] * Mh[4]) +
                                (MN[0] * MN[0])))) +
             std::conj(coup9) *
                 (2 * coup8 * (s - 2 * ((Mh[2] * Mh[2]) + (Mh[4] * Mh[4]))) *
                      (MN[0] * MN[0]) +
                  coup9 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[2] * Mh[2] * Mh[2] * Mh[2]) -
                           2 * (Mh[2] * Mh[2]) * (Mh[4] * Mh[4]) +
                           (Mh[4] * Mh[4] * Mh[4] * Mh[4]) +
                           4 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                           4 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[2] * Mh[2]) + (Mh[4] * Mh[4]) +
                                (MN[0] * MN[0])))))) /
           (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((-2 * std::conj(coup28) * coup27[i1] *
          (std::conj(coup9) *
               (coup3[i1] * (t - u + (Mh[2] * Mh[2]) - (Mh[4] * Mh[4])) +
                coup2[i1] * (t - u - (Mh[2] * Mh[2]) + (Mh[4] * Mh[4]))) +
           std::conj(coup8) *
               (coup2[i1] * (t - u + (Mh[2] * Mh[2]) - (Mh[4] * Mh[4])) +
                coup3[i1] * (t - u - (Mh[2] * Mh[2]) + (Mh[4] * Mh[4])))) *
          MN[0]) /
             ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((coup28 *
          (std::conj(coup11[j1]) *
               (std::conj(coup18[j1]) *
                    (-2 * coup8 *
                         (s + t - u - 2 * (Mh[2] * Mh[2]) -
                          2 * (Mh[4] * Mh[4])) *
                         (MN[0] * MN[0]) +
                     coup9 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[2] * Mh[2]) -
                          2 * (Mh[2] * Mh[2] * Mh[2] * Mh[2]) -
                          u * (Mh[4] * Mh[4]) +
                          2 * (Mh[2] * Mh[2]) * (Mh[4] * Mh[4]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                          2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[2] * Mh[2]) + (Mh[4] * Mh[4]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[2] * Mh[2]) + (Mh[4] * Mh[4]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup19[j1]) *
                    (coup9 * (t - u + (Mh[2] * Mh[2]) - (Mh[4] * Mh[4])) +
                     coup8 * (t - u - (Mh[2] * Mh[2]) + (Mh[4] * Mh[4]))) *
                    MN[0] * MN[j1]) +
           std::conj(coup10[j1]) *
               (std::conj(coup19[j1]) *
                    (-2 * coup9 *
                         (s + t - u - 2 * (Mh[2] * Mh[2]) -
                          2 * (Mh[4] * Mh[4])) *
                         (MN[0] * MN[0]) +
                     coup8 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[2] * Mh[2]) -
                          2 * (Mh[2] * Mh[2] * Mh[2] * Mh[2]) -
                          u * (Mh[4] * Mh[4]) +
                          2 * (Mh[2] * Mh[2]) * (Mh[4] * Mh[4]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                          2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[2] * Mh[2]) + (Mh[4] * Mh[4]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[2] * Mh[2]) + (Mh[4] * Mh[4]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup18[j1]) *
                    (coup8 * (t - u + (Mh[2] * Mh[2]) - (Mh[4] * Mh[4])) +
                     coup9 * (t - u - (Mh[2] * Mh[2]) + (Mh[4] * Mh[4]))) *
                    MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (u - (MN[j1] * MN[j1]))) +
             (coup28 *
              (std::conj(coup11[j1]) *
                   (std::conj(coup18[j1]) *
                        (2 * coup9 *
                             (s - t + u - 2 * (Mh[2] * Mh[2]) -
                              2 * (Mh[4] * Mh[4])) *
                             (MN[0] * MN[0]) +
                         coup8 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[2] * Mh[2]) - u * (Mh[4] * Mh[4]) -
                                  2 * (Mh[2] * Mh[2]) * (Mh[4] * Mh[4]) +
                                  2 * (Mh[4] * Mh[4] * Mh[4] * Mh[4]) +
                                  t * (2 * u + (Mh[2] * Mh[2]) -
                                       (Mh[4] * Mh[4]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                  6 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                                  s * ((Mh[2] * Mh[2]) + 3 * (Mh[4] * Mh[4]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup19[j1]) *
                        (coup9 * (t - u + (Mh[2] * Mh[2]) - (Mh[4] * Mh[4])) +
                         coup8 * (t - u - (Mh[2] * Mh[2]) + (Mh[4] * Mh[4]))) *
                        MN[0] * MN[j1]) +
               std::conj(coup10[j1]) *
                   (std::conj(coup19[j1]) *
                        (2 * coup8 *
                             (s - t + u - 2 * (Mh[2] * Mh[2]) -
                              2 * (Mh[4] * Mh[4])) *
                             (MN[0] * MN[0]) +
                         coup9 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[2] * Mh[2]) - u * (Mh[4] * Mh[4]) -
                                  2 * (Mh[2] * Mh[2]) * (Mh[4] * Mh[4]) +
                                  2 * (Mh[4] * Mh[4] * Mh[4] * Mh[4]) +
                                  t * (2 * u + (Mh[2] * Mh[2]) -
                                       (Mh[4] * Mh[4]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                  6 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                                  s * ((Mh[2] * Mh[2]) + 3 * (Mh[4] * Mh[4]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup18[j1]) *
                        (coup8 * (t - u + (Mh[2] * Mh[2]) - (Mh[4] * Mh[4])) +
                         coup9 * (t - u - (Mh[2] * Mh[2]) + (Mh[4] * Mh[4]))) *
                        MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (t - (MN[j1] * MN[j1]))),
         j1, 5)

    SUM2((std::conj(coup27[j1]) * coup27[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2((2 * coup27[i1] *
          (std::conj(coup11[j1]) *
               (std::conj(coup18[j1]) *
                    (coup2[i1] *
                         (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) -
                     coup3[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup19[j1]) *
                    (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup2[i1] * (MN[0] * MN[0])) *
                    MN[j1]) +
           std::conj(coup10[j1]) *
               (std::conj(coup19[j1]) *
                    (coup3[i1] *
                         (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) -
                     coup2[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup18[j1]) *
                    (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup3[i1] * (MN[0] * MN[0])) *
                    MN[j1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (MN[j1] * MN[j1]))) -
             (2 * coup27[i1] *
              (std::conj(coup11[j1]) *
                   (std::conj(coup18[j1]) *
                        (-(coup3[i1] *
                           (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0]))) +
                         coup2[i1] * (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup19[j1]) *
                        (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                         2 * coup2[i1] * (MN[0] * MN[0])) *
                        MN[j1]) +
               std::conj(coup10[j1]) *
                   (std::conj(coup19[j1]) *
                        (-(coup2[i1] *
                           (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0]))) +
                         coup3[i1] * (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup18[j1]) *
                        (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                         2 * coup3[i1] * (MN[0] * MN[0])) *
                        MN[j1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))),
         i1, 6, j1, 5)

    SUM2(
        (std::conj(coup11[j1]) *
             (std::conj(coup18[j1]) *
                  (coup10[i1] * MN[0] *
                       (-2 * u * coup19[i1] * MN[0] +
                        coup18[i1] *
                            (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) *
                            MN[i1]) +
                   coup11[i1] *
                       (coup18[i1] *
                            (-(s * (Mh[2] * Mh[2])) - u * (Mh[2] * Mh[2]) +
                             (Mh[2] * Mh[2] * Mh[2] * Mh[2]) +
                             s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                             2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                             t * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) -
                             3 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                        coup19[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                            MN[0] * MN[i1])) +
              std::conj(coup19[j1]) *
                  (coup11[i1] *
                       (-(coup18[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                          MN[0]) +
                        coup19[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                   coup10[i1] * MN[0] *
                       (coup19[i1] *
                            (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) -
                        2 * coup18[i1] * MN[0] * MN[i1])) *
                  MN[j1]) +
         std::conj(coup10[j1]) *
             (std::conj(coup19[j1]) *
                  (coup11[i1] * MN[0] *
                       (-2 * u * coup18[i1] * MN[0] +
                        coup19[i1] *
                            (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) *
                            MN[i1]) +
                   coup10[i1] *
                       (coup19[i1] *
                            (-(s * (Mh[2] * Mh[2])) - u * (Mh[2] * Mh[2]) +
                             (Mh[2] * Mh[2] * Mh[2] * Mh[2]) +
                             s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                             2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                             t * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) -
                             3 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                        coup18[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                            MN[0] * MN[i1])) +
              std::conj(coup18[j1]) *
                  (coup10[i1] *
                       (-(coup19[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                          MN[0]) +
                        coup18[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                   coup11[i1] * MN[0] *
                       (coup18[i1] *
                            (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) -
                        2 * coup19[i1] * MN[0] * MN[i1])) *
                  MN[j1])) /
                ((u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))) +
            (std::conj(coup11[j1]) *
                 (std::conj(coup18[j1]) *
                      (-(coup10[i1] * MN[0] *
                         (2 * t * coup19[i1] * MN[0] +
                          coup18[i1] * (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                              MN[i1])) +
                       coup11[i1] *
                           (coup18[i1] *
                                (t * (u - (Mh[4] * Mh[4]) - (MN[0] * MN[0])) -
                                 (s + u - (Mh[4] * Mh[4]) -
                                  3 * (MN[0] * MN[0])) *
                                     ((Mh[4] * Mh[4]) - (MN[0] * MN[0]))) +
                            coup19[i1] *
                                (s + u - (Mh[4] * Mh[4]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup19[j1]) *
                      (coup11[i1] *
                           (coup18[i1] *
                                (s + u - (Mh[4] * Mh[4]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup19[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                       coup10[i1] * MN[0] *
                           (coup19[i1] *
                                (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) +
                            2 * coup18[i1] * MN[0] * MN[i1])) *
                      MN[j1]) +
             std::conj(coup10[j1]) *
                 (std::conj(coup19[j1]) *
                      (-(coup11[i1] * MN[0] *
                         (2 * t * coup18[i1] * MN[0] +
                          coup19[i1] * (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                              MN[i1])) +
                       coup10[i1] *
                           (coup19[i1] *
                                (t * (u - (Mh[4] * Mh[4]) - (MN[0] * MN[0])) -
                                 (s + u - (Mh[4] * Mh[4]) -
                                  3 * (MN[0] * MN[0])) *
                                     ((Mh[4] * Mh[4]) - (MN[0] * MN[0]))) +
                            coup18[i1] *
                                (s + u - (Mh[4] * Mh[4]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup18[j1]) *
                      (coup10[i1] *
                           (coup19[i1] *
                                (s + u - (Mh[4] * Mh[4]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup18[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                       coup11[i1] * MN[0] *
                           (coup18[i1] *
                                (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) +
                            2 * coup19[i1] * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((t - (MN[i1] * MN[i1])) * (t - (MN[j1] * MN[j1]))) +
            (-(std::conj(coup11[j1]) *
               (std::conj(coup18[j1]) *
                    (2 * coup11[i1] * MN[0] *
                         (coup18[i1] *
                              (s + t + u - 2 * (Mh[2] * Mh[2]) -
                               2 * (Mh[4] * Mh[4])) *
                              MN[0] +
                          coup19[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                              MN[i1]) +
                     coup10[i1] *
                         (coup19[i1] *
                              ((s * s) - (t * t) - (u * u) +
                               u * (Mh[2] * Mh[2]) + u * (Mh[4] * Mh[4]) -
                               2 * (Mh[2] * Mh[2]) * (Mh[4] * Mh[4]) +
                               t * ((Mh[2] * Mh[2]) + (Mh[4] * Mh[4])) +
                               2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                               2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                               s * ((Mh[2] * Mh[2]) + (Mh[4] * Mh[4]) +
                                    4 * (MN[0] * MN[0])) +
                               6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                          2 * coup18[i1] *
                              (-s - t + (Mh[2] * Mh[2]) + 3 * (MN[0] * MN[0])) *
                              MN[0] * MN[i1])) +
                2 * std::conj(coup19[j1]) *
                    (-(coup11[i1] *
                       (coup18[i1] *
                            (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) *
                            MN[0] +
                        coup19[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1])) +
                     coup10[i1] * MN[0] *
                         (coup19[i1] * (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) +
                          2 * coup18[i1] * MN[0] * MN[i1])) *
                    MN[j1])) -
             std::conj(coup10[j1]) *
                 (std::conj(coup19[j1]) *
                      (2 * coup10[i1] * MN[0] *
                           (coup19[i1] *
                                (s + t + u - 2 * (Mh[2] * Mh[2]) -
                                 2 * (Mh[4] * Mh[4])) *
                                MN[0] +
                            coup18[i1] *
                                (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                                MN[i1]) +
                       coup11[i1] *
                           (coup18[i1] *
                                ((s * s) - (t * t) - (u * u) +
                                 u * (Mh[2] * Mh[2]) + u * (Mh[4] * Mh[4]) -
                                 2 * (Mh[2] * Mh[2]) * (Mh[4] * Mh[4]) +
                                 t * ((Mh[2] * Mh[2]) + (Mh[4] * Mh[4])) +
                                 2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                 2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                                 s * ((Mh[2] * Mh[2]) + (Mh[4] * Mh[4]) +
                                      4 * (MN[0] * MN[0])) +
                                 6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup19[i1] *
                                (-s - t + (Mh[2] * Mh[2]) +
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  2 * std::conj(coup18[j1]) *
                      (-(coup10[i1] *
                         (coup19[i1] *
                              (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) *
                              MN[0] +
                          coup18[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1])) +
                       coup11[i1] * MN[0] *
                           (coup18[i1] *
                                (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) +
                            2 * coup19[i1] * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((t - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
        j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1h3h6(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (Mh[2] * Mh[2]) + (Mh[5] * Mh[5]) +
         cos_t *
             sqrt(s +
                  (((Mh[2] * Mh[2]) - (Mh[5] * Mh[5])) *
                   ((Mh[2] * Mh[2]) - (Mh[5] * Mh[5]))) /
                      s -
                  2 * ((Mh[2] * Mh[2]) + (Mh[5] * Mh[5]))) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (Mh[2] * Mh[2]) + (Mh[5] * Mh[5]) + 2 * (MN[0] * MN[0]);
    res += (coup30 * std::conj(coup30) *
            (std::conj(coup8) *
                 (2 * coup9 * (s - 2 * ((Mh[2] * Mh[2]) + (Mh[5] * Mh[5]))) *
                      (MN[0] * MN[0]) +
                  coup8 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[2] * Mh[2] * Mh[2] * Mh[2]) -
                           2 * (Mh[2] * Mh[2]) * (Mh[5] * Mh[5]) +
                           (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                           4 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                           4 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[2] * Mh[2]) + (Mh[5] * Mh[5]) +
                                (MN[0] * MN[0])))) +
             std::conj(coup9) *
                 (2 * coup8 * (s - 2 * ((Mh[2] * Mh[2]) + (Mh[5] * Mh[5]))) *
                      (MN[0] * MN[0]) +
                  coup9 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[2] * Mh[2] * Mh[2] * Mh[2]) -
                           2 * (Mh[2] * Mh[2]) * (Mh[5] * Mh[5]) +
                           (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                           4 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                           4 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[2] * Mh[2]) + (Mh[5] * Mh[5]) +
                                (MN[0] * MN[0])))))) /
           (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((-2 * std::conj(coup30) * coup29[i1] *
          (std::conj(coup9) *
               (coup3[i1] * (t - u + (Mh[2] * Mh[2]) - (Mh[5] * Mh[5])) +
                coup2[i1] * (t - u - (Mh[2] * Mh[2]) + (Mh[5] * Mh[5]))) +
           std::conj(coup8) *
               (coup2[i1] * (t - u + (Mh[2] * Mh[2]) - (Mh[5] * Mh[5])) +
                coup3[i1] * (t - u - (Mh[2] * Mh[2]) + (Mh[5] * Mh[5])))) *
          MN[0]) /
             ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((coup30 *
          (std::conj(coup11[j1]) *
               (std::conj(coup22[j1]) *
                    (-2 * coup8 *
                         (s + t - u - 2 * (Mh[2] * Mh[2]) -
                          2 * (Mh[5] * Mh[5])) *
                         (MN[0] * MN[0]) +
                     coup9 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[2] * Mh[2]) -
                          2 * (Mh[2] * Mh[2] * Mh[2] * Mh[2]) -
                          u * (Mh[5] * Mh[5]) +
                          2 * (Mh[2] * Mh[2]) * (Mh[5] * Mh[5]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                          2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[2] * Mh[2]) + (Mh[5] * Mh[5]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[2] * Mh[2]) + (Mh[5] * Mh[5]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup23[j1]) *
                    (coup9 * (t - u + (Mh[2] * Mh[2]) - (Mh[5] * Mh[5])) +
                     coup8 * (t - u - (Mh[2] * Mh[2]) + (Mh[5] * Mh[5]))) *
                    MN[0] * MN[j1]) +
           std::conj(coup10[j1]) *
               (std::conj(coup23[j1]) *
                    (-2 * coup9 *
                         (s + t - u - 2 * (Mh[2] * Mh[2]) -
                          2 * (Mh[5] * Mh[5])) *
                         (MN[0] * MN[0]) +
                     coup8 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[2] * Mh[2]) -
                          2 * (Mh[2] * Mh[2] * Mh[2] * Mh[2]) -
                          u * (Mh[5] * Mh[5]) +
                          2 * (Mh[2] * Mh[2]) * (Mh[5] * Mh[5]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                          2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[2] * Mh[2]) + (Mh[5] * Mh[5]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[2] * Mh[2]) + (Mh[5] * Mh[5]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup22[j1]) *
                    (coup8 * (t - u + (Mh[2] * Mh[2]) - (Mh[5] * Mh[5])) +
                     coup9 * (t - u - (Mh[2] * Mh[2]) + (Mh[5] * Mh[5]))) *
                    MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (u - (MN[j1] * MN[j1]))) +
             (coup30 *
              (std::conj(coup11[j1]) *
                   (std::conj(coup22[j1]) *
                        (2 * coup9 *
                             (s - t + u - 2 * (Mh[2] * Mh[2]) -
                              2 * (Mh[5] * Mh[5])) *
                             (MN[0] * MN[0]) +
                         coup8 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[2] * Mh[2]) - u * (Mh[5] * Mh[5]) -
                                  2 * (Mh[2] * Mh[2]) * (Mh[5] * Mh[5]) +
                                  2 * (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                                  t * (2 * u + (Mh[2] * Mh[2]) -
                                       (Mh[5] * Mh[5]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                  6 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                                  s * ((Mh[2] * Mh[2]) + 3 * (Mh[5] * Mh[5]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup23[j1]) *
                        (coup9 * (t - u + (Mh[2] * Mh[2]) - (Mh[5] * Mh[5])) +
                         coup8 * (t - u - (Mh[2] * Mh[2]) + (Mh[5] * Mh[5]))) *
                        MN[0] * MN[j1]) +
               std::conj(coup10[j1]) *
                   (std::conj(coup23[j1]) *
                        (2 * coup8 *
                             (s - t + u - 2 * (Mh[2] * Mh[2]) -
                              2 * (Mh[5] * Mh[5])) *
                             (MN[0] * MN[0]) +
                         coup9 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[2] * Mh[2]) - u * (Mh[5] * Mh[5]) -
                                  2 * (Mh[2] * Mh[2]) * (Mh[5] * Mh[5]) +
                                  2 * (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                                  t * (2 * u + (Mh[2] * Mh[2]) -
                                       (Mh[5] * Mh[5]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                  6 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                                  s * ((Mh[2] * Mh[2]) + 3 * (Mh[5] * Mh[5]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup22[j1]) *
                        (coup8 * (t - u + (Mh[2] * Mh[2]) - (Mh[5] * Mh[5])) +
                         coup9 * (t - u - (Mh[2] * Mh[2]) + (Mh[5] * Mh[5]))) *
                        MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (t - (MN[j1] * MN[j1]))),
         j1, 5)

    SUM2((std::conj(coup29[j1]) * coup29[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2((2 * coup29[i1] *
          (std::conj(coup11[j1]) *
               (std::conj(coup22[j1]) *
                    (coup2[i1] *
                         (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) -
                     coup3[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup23[j1]) *
                    (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup2[i1] * (MN[0] * MN[0])) *
                    MN[j1]) +
           std::conj(coup10[j1]) *
               (std::conj(coup23[j1]) *
                    (coup3[i1] *
                         (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) -
                     coup2[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup22[j1]) *
                    (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup3[i1] * (MN[0] * MN[0])) *
                    MN[j1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (MN[j1] * MN[j1]))) -
             (2 * coup29[i1] *
              (std::conj(coup11[j1]) *
                   (std::conj(coup22[j1]) *
                        (-(coup3[i1] *
                           (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0]))) +
                         coup2[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup23[j1]) *
                        (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                         2 * coup2[i1] * (MN[0] * MN[0])) *
                        MN[j1]) +
               std::conj(coup10[j1]) *
                   (std::conj(coup23[j1]) *
                        (-(coup2[i1] *
                           (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0]))) +
                         coup3[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup22[j1]) *
                        (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                         2 * coup3[i1] * (MN[0] * MN[0])) *
                        MN[j1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))),
         i1, 6, j1, 5)

    SUM2(
        (std::conj(coup11[j1]) *
             (std::conj(coup22[j1]) *
                  (coup10[i1] * MN[0] *
                       (-2 * u * coup23[i1] * MN[0] +
                        coup22[i1] *
                            (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) *
                            MN[i1]) +
                   coup11[i1] *
                       (coup22[i1] *
                            (-(s * (Mh[2] * Mh[2])) - u * (Mh[2] * Mh[2]) +
                             (Mh[2] * Mh[2] * Mh[2] * Mh[2]) +
                             s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                             2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                             t * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) -
                             3 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                        coup23[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                            MN[0] * MN[i1])) +
              std::conj(coup23[j1]) *
                  (coup11[i1] *
                       (-(coup22[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                          MN[0]) +
                        coup23[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                   coup10[i1] * MN[0] *
                       (coup23[i1] *
                            (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) -
                        2 * coup22[i1] * MN[0] * MN[i1])) *
                  MN[j1]) +
         std::conj(coup10[j1]) *
             (std::conj(coup23[j1]) *
                  (coup11[i1] * MN[0] *
                       (-2 * u * coup22[i1] * MN[0] +
                        coup23[i1] *
                            (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) *
                            MN[i1]) +
                   coup10[i1] *
                       (coup23[i1] *
                            (-(s * (Mh[2] * Mh[2])) - u * (Mh[2] * Mh[2]) +
                             (Mh[2] * Mh[2] * Mh[2] * Mh[2]) +
                             s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                             2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                             t * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) -
                             3 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                        coup22[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                            MN[0] * MN[i1])) +
              std::conj(coup22[j1]) *
                  (coup10[i1] *
                       (-(coup23[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                          MN[0]) +
                        coup22[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                   coup11[i1] * MN[0] *
                       (coup22[i1] *
                            (s + t - (Mh[2] * Mh[2]) - 3 * (MN[0] * MN[0])) -
                        2 * coup23[i1] * MN[0] * MN[i1])) *
                  MN[j1])) /
                ((u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))) +
            (std::conj(coup11[j1]) *
                 (std::conj(coup22[j1]) *
                      (-(coup10[i1] * MN[0] *
                         (2 * t * coup23[i1] * MN[0] +
                          coup22[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                              MN[i1])) +
                       coup11[i1] *
                           (coup22[i1] *
                                (t * (u - (Mh[5] * Mh[5]) - (MN[0] * MN[0])) -
                                 (s + u - (Mh[5] * Mh[5]) -
                                  3 * (MN[0] * MN[0])) *
                                     ((Mh[5] * Mh[5]) - (MN[0] * MN[0]))) +
                            coup23[i1] *
                                (s + u - (Mh[5] * Mh[5]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup23[j1]) *
                      (coup11[i1] *
                           (coup22[i1] *
                                (s + u - (Mh[5] * Mh[5]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup23[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                       coup10[i1] * MN[0] *
                           (coup23[i1] *
                                (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) +
                            2 * coup22[i1] * MN[0] * MN[i1])) *
                      MN[j1]) +
             std::conj(coup10[j1]) *
                 (std::conj(coup23[j1]) *
                      (-(coup11[i1] * MN[0] *
                         (2 * t * coup22[i1] * MN[0] +
                          coup23[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                              MN[i1])) +
                       coup10[i1] *
                           (coup23[i1] *
                                (t * (u - (Mh[5] * Mh[5]) - (MN[0] * MN[0])) -
                                 (s + u - (Mh[5] * Mh[5]) -
                                  3 * (MN[0] * MN[0])) *
                                     ((Mh[5] * Mh[5]) - (MN[0] * MN[0]))) +
                            coup22[i1] *
                                (s + u - (Mh[5] * Mh[5]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup22[j1]) *
                      (coup10[i1] *
                           (coup23[i1] *
                                (s + u - (Mh[5] * Mh[5]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup22[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                       coup11[i1] * MN[0] *
                           (coup22[i1] *
                                (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) +
                            2 * coup23[i1] * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((t - (MN[i1] * MN[i1])) * (t - (MN[j1] * MN[j1]))) +
            (-(std::conj(coup11[j1]) *
               (std::conj(coup22[j1]) *
                    (2 * coup11[i1] * MN[0] *
                         (coup22[i1] *
                              (s + t + u - 2 * (Mh[2] * Mh[2]) -
                               2 * (Mh[5] * Mh[5])) *
                              MN[0] +
                          coup23[i1] * (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                              MN[i1]) +
                     coup10[i1] *
                         (coup23[i1] *
                              ((s * s) - (t * t) - (u * u) +
                               u * (Mh[2] * Mh[2]) + u * (Mh[5] * Mh[5]) -
                               2 * (Mh[2] * Mh[2]) * (Mh[5] * Mh[5]) +
                               t * ((Mh[2] * Mh[2]) + (Mh[5] * Mh[5])) +
                               2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                               2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                               s * ((Mh[2] * Mh[2]) + (Mh[5] * Mh[5]) +
                                    4 * (MN[0] * MN[0])) +
                               6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                          2 * coup22[i1] *
                              (-s - t + (Mh[2] * Mh[2]) + 3 * (MN[0] * MN[0])) *
                              MN[0] * MN[i1])) +
                2 * std::conj(coup23[j1]) *
                    (-(coup11[i1] *
                       (coup22[i1] *
                            (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0])) *
                            MN[0] +
                        coup23[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1])) +
                     coup10[i1] * MN[0] *
                         (coup23[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) +
                          2 * coup22[i1] * MN[0] * MN[i1])) *
                    MN[j1])) -
             std::conj(coup10[j1]) *
                 (std::conj(coup23[j1]) *
                      (2 * coup10[i1] * MN[0] *
                           (coup23[i1] *
                                (s + t + u - 2 * (Mh[2] * Mh[2]) -
                                 2 * (Mh[5] * Mh[5])) *
                                MN[0] +
                            coup22[i1] *
                                (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                                MN[i1]) +
                       coup11[i1] *
                           (coup22[i1] *
                                ((s * s) - (t * t) - (u * u) +
                                 u * (Mh[2] * Mh[2]) + u * (Mh[5] * Mh[5]) -
                                 2 * (Mh[2] * Mh[2]) * (Mh[5] * Mh[5]) +
                                 t * ((Mh[2] * Mh[2]) + (Mh[5] * Mh[5])) +
                                 2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                 2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                                 s * ((Mh[2] * Mh[2]) + (Mh[5] * Mh[5]) +
                                      4 * (MN[0] * MN[0])) +
                                 6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup23[i1] *
                                (-s - t + (Mh[2] * Mh[2]) +
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  2 * std::conj(coup22[j1]) *
                      (-(coup10[i1] *
                         (coup23[i1] *
                              (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0])) *
                              MN[0] +
                          coup22[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1])) +
                       coup11[i1] * MN[0] *
                           (coup22[i1] *
                                (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) +
                            2 * coup23[i1] * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((t - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
        j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1h4h4(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t = -0.5 * s + (Mh[3] * Mh[3]) +
                             (cos_t * sqrt(s - 4 * (Mh[3] * Mh[3])) *
                              sqrt(s - 4 * (MN[0] * MN[0]))) /
                                 2. +
                             (MN[0] * MN[0]);
    std::complex<double> u = -s - t + 2 * (Mh[3] * Mh[3]) + 2 * (MN[0] * MN[0]);
    SUM2((std::conj(coup31[j1]) * coup31[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2((2 * coup31[i1] *
          (std::conj(coup14[j1]) * std::conj(coup15[j1]) *
               (coup2[i1] + coup3[i1]) * (s + t - u - 4 * (MN[0] * MN[0])) *
               MN[0] +
           (std::conj(coup15[j1]) * std::conj(coup15[j1])) *
               (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                2 * coup2[i1] * (MN[0] * MN[0])) *
               MN[j1] +
           (std::conj(coup14[j1]) * std::conj(coup14[j1])) *
               (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                2 * coup3[i1] * (MN[0] * MN[0])) *
               MN[j1])) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (MN[j1] * MN[j1]))) +
             (2 * coup31[i1] *
              (std::conj(coup14[j1]) * std::conj(coup15[j1]) *
                   (coup2[i1] + coup3[i1]) * (s - t + u - 4 * (MN[0] * MN[0])) *
                   MN[0] +
               (std::conj(coup15[j1]) * std::conj(coup15[j1])) *
                   (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                    2 * coup2[i1] * (MN[0] * MN[0])) *
                   MN[j1] +
               (std::conj(coup14[j1]) * std::conj(coup14[j1])) *
                   (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                    2 * coup3[i1] * (MN[0] * MN[0])) *
                   MN[j1])) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))),
         i1, 6, j1, 5)

    SUM2((std::conj(coup14[j1]) * std::conj(coup15[j1]) *
              (2 * coup14[i1] * coup15[i1] *
                   (s * (-(Mh[3] * Mh[3]) + (MN[0] * MN[0])) +
                    t * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) -
                    (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                        ((Mh[3] * Mh[3]) + 3 * (MN[0] * MN[0]))) +
               (coup14[i1] * coup14[i1]) * (s + t - u - 4 * (MN[0] * MN[0])) *
                   MN[0] * MN[i1] +
               (coup15[i1] * coup15[i1]) * (s + t - u - 4 * (MN[0] * MN[0])) *
                   MN[0] * MN[i1]) +
          (std::conj(coup15[j1]) * std::conj(coup15[j1])) *
              (coup14[i1] * coup15[i1] * (s + t - u - 4 * (MN[0] * MN[0])) *
                   MN[0] +
               (coup15[i1] * coup15[i1]) * (s - 2 * (MN[0] * MN[0])) * MN[i1] -
               2 * (coup14[i1] * coup14[i1]) * (MN[0] * MN[0]) * MN[i1]) *
              MN[j1] +
          (std::conj(coup14[j1]) * std::conj(coup14[j1])) *
              (coup14[i1] * coup15[i1] * (s + t - u - 4 * (MN[0] * MN[0])) *
                   MN[0] +
               (coup14[i1] * coup14[i1]) * (s - 2 * (MN[0] * MN[0])) * MN[i1] -
               2 * (coup15[i1] * coup15[i1]) * (MN[0] * MN[0]) * MN[i1]) *
              MN[j1]) /
                 ((u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))) +
             (std::conj(coup14[j1]) * std::conj(coup15[j1]) *
                  (2 * coup14[i1] * coup15[i1] *
                       (t * (u - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) -
                        (s + u - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) *
                            ((Mh[3] * Mh[3]) - (MN[0] * MN[0]))) +
                   (coup14[i1] * coup14[i1]) *
                       (s - t + u - 4 * (MN[0] * MN[0])) * MN[0] * MN[i1] +
                   (coup15[i1] * coup15[i1]) *
                       (s - t + u - 4 * (MN[0] * MN[0])) * MN[0] * MN[i1]) +
              (std::conj(coup15[j1]) * std::conj(coup15[j1])) *
                  (coup14[i1] * coup15[i1] * (s - t + u - 4 * (MN[0] * MN[0])) *
                       MN[0] +
                   (coup15[i1] * coup15[i1]) * (s - 2 * (MN[0] * MN[0])) *
                       MN[i1] -
                   2 * (coup14[i1] * coup14[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                  MN[j1] +
              (std::conj(coup14[j1]) * std::conj(coup14[j1])) *
                  (coup14[i1] * coup15[i1] * (s - t + u - 4 * (MN[0] * MN[0])) *
                       MN[0] +
                   (coup14[i1] * coup14[i1]) * (s - 2 * (MN[0] * MN[0])) *
                       MN[i1] -
                   2 * (coup15[i1] * coup15[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                  MN[j1]) /
                 ((t - (MN[i1] * MN[i1])) * (t - (MN[j1] * MN[j1]))) -
             (2 *
              (std::conj(coup14[j1]) * std::conj(coup15[j1]) *
                   (coup14[i1] * coup15[i1] *
                        ((s * s) - (t * t) - (u * u) + 2 * u * (Mh[3] * Mh[3]) -
                         2 * (Mh[3] * Mh[3] * Mh[3] * Mh[3]) +
                         2 * u * (MN[0] * MN[0]) -
                         4 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                         2 * s * ((Mh[3] * Mh[3]) + (MN[0] * MN[0])) +
                         2 * t * ((Mh[3] * Mh[3]) + (MN[0] * MN[0])) +
                         6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                    (coup14[i1] * coup14[i1]) *
                        (-s - t + u + 4 * (MN[0] * MN[0])) * MN[0] * MN[i1] +
                    (coup15[i1] * coup15[i1]) *
                        (-s - t + u + 4 * (MN[0] * MN[0])) * MN[0] * MN[i1]) +
               (std::conj(coup15[j1]) * std::conj(coup15[j1])) *
                   (coup14[i1] * coup15[i1] *
                        (-s + t - u + 4 * (MN[0] * MN[0])) * MN[0] -
                    (coup15[i1] * coup15[i1]) * (s - 2 * (MN[0] * MN[0])) *
                        MN[i1] +
                    2 * (coup14[i1] * coup14[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                   MN[j1] +
               (std::conj(coup14[j1]) * std::conj(coup14[j1])) *
                   (coup14[i1] * coup15[i1] *
                        (-s + t - u + 4 * (MN[0] * MN[0])) * MN[0] -
                    (coup14[i1] * coup14[i1]) * (s - 2 * (MN[0] * MN[0])) *
                        MN[i1] +
                    2 * (coup15[i1] * coup15[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                   MN[j1])) /
                 ((t - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
         j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1h4h5(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (Mh[3] * Mh[3]) + (Mh[4] * Mh[4]) +
         cos_t *
             sqrt(s +
                  (((Mh[3] * Mh[3]) - (Mh[4] * Mh[4])) *
                   ((Mh[3] * Mh[3]) - (Mh[4] * Mh[4]))) /
                      s -
                  2 * ((Mh[3] * Mh[3]) + (Mh[4] * Mh[4]))) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (Mh[3] * Mh[3]) + (Mh[4] * Mh[4]) + 2 * (MN[0] * MN[0]);
    res += (coup33 * std::conj(coup33) *
            (std::conj(coup8) *
                 (2 * coup9 * (s - 2 * ((Mh[3] * Mh[3]) + (Mh[4] * Mh[4]))) *
                      (MN[0] * MN[0]) +
                  coup8 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[3] * Mh[3] * Mh[3] * Mh[3]) -
                           2 * (Mh[3] * Mh[3]) * (Mh[4] * Mh[4]) +
                           (Mh[4] * Mh[4] * Mh[4] * Mh[4]) +
                           4 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                           4 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[3] * Mh[3]) + (Mh[4] * Mh[4]) +
                                (MN[0] * MN[0])))) +
             std::conj(coup9) *
                 (2 * coup8 * (s - 2 * ((Mh[3] * Mh[3]) + (Mh[4] * Mh[4]))) *
                      (MN[0] * MN[0]) +
                  coup9 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[3] * Mh[3] * Mh[3] * Mh[3]) -
                           2 * (Mh[3] * Mh[3]) * (Mh[4] * Mh[4]) +
                           (Mh[4] * Mh[4] * Mh[4] * Mh[4]) +
                           4 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                           4 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[3] * Mh[3]) + (Mh[4] * Mh[4]) +
                                (MN[0] * MN[0])))))) /
           (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((-2 * std::conj(coup33) * coup32[i1] *
          (std::conj(coup9) *
               (coup3[i1] * (t - u + (Mh[3] * Mh[3]) - (Mh[4] * Mh[4])) +
                coup2[i1] * (t - u - (Mh[3] * Mh[3]) + (Mh[4] * Mh[4]))) +
           std::conj(coup8) *
               (coup2[i1] * (t - u + (Mh[3] * Mh[3]) - (Mh[4] * Mh[4])) +
                coup3[i1] * (t - u - (Mh[3] * Mh[3]) + (Mh[4] * Mh[4])))) *
          MN[0]) /
             ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((coup33 *
          (std::conj(coup15[j1]) *
               (std::conj(coup18[j1]) *
                    (-2 * coup8 *
                         (s + t - u - 2 * (Mh[3] * Mh[3]) -
                          2 * (Mh[4] * Mh[4])) *
                         (MN[0] * MN[0]) +
                     coup9 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[3] * Mh[3]) -
                          2 * (Mh[3] * Mh[3] * Mh[3] * Mh[3]) -
                          u * (Mh[4] * Mh[4]) +
                          2 * (Mh[3] * Mh[3]) * (Mh[4] * Mh[4]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                          2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[3] * Mh[3]) + (Mh[4] * Mh[4]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[3] * Mh[3]) + (Mh[4] * Mh[4]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup19[j1]) *
                    (coup9 * (t - u + (Mh[3] * Mh[3]) - (Mh[4] * Mh[4])) +
                     coup8 * (t - u - (Mh[3] * Mh[3]) + (Mh[4] * Mh[4]))) *
                    MN[0] * MN[j1]) +
           std::conj(coup14[j1]) *
               (std::conj(coup19[j1]) *
                    (-2 * coup9 *
                         (s + t - u - 2 * (Mh[3] * Mh[3]) -
                          2 * (Mh[4] * Mh[4])) *
                         (MN[0] * MN[0]) +
                     coup8 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[3] * Mh[3]) -
                          2 * (Mh[3] * Mh[3] * Mh[3] * Mh[3]) -
                          u * (Mh[4] * Mh[4]) +
                          2 * (Mh[3] * Mh[3]) * (Mh[4] * Mh[4]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                          2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[3] * Mh[3]) + (Mh[4] * Mh[4]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[3] * Mh[3]) + (Mh[4] * Mh[4]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup18[j1]) *
                    (coup8 * (t - u + (Mh[3] * Mh[3]) - (Mh[4] * Mh[4])) +
                     coup9 * (t - u - (Mh[3] * Mh[3]) + (Mh[4] * Mh[4]))) *
                    MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (u - (MN[j1] * MN[j1]))) +
             (coup33 *
              (std::conj(coup15[j1]) *
                   (std::conj(coup18[j1]) *
                        (2 * coup9 *
                             (s - t + u - 2 * (Mh[3] * Mh[3]) -
                              2 * (Mh[4] * Mh[4])) *
                             (MN[0] * MN[0]) +
                         coup8 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[3] * Mh[3]) - u * (Mh[4] * Mh[4]) -
                                  2 * (Mh[3] * Mh[3]) * (Mh[4] * Mh[4]) +
                                  2 * (Mh[4] * Mh[4] * Mh[4] * Mh[4]) +
                                  t * (2 * u + (Mh[3] * Mh[3]) -
                                       (Mh[4] * Mh[4]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                                  6 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                                  s * ((Mh[3] * Mh[3]) + 3 * (Mh[4] * Mh[4]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup19[j1]) *
                        (coup9 * (t - u + (Mh[3] * Mh[3]) - (Mh[4] * Mh[4])) +
                         coup8 * (t - u - (Mh[3] * Mh[3]) + (Mh[4] * Mh[4]))) *
                        MN[0] * MN[j1]) +
               std::conj(coup14[j1]) *
                   (std::conj(coup19[j1]) *
                        (2 * coup8 *
                             (s - t + u - 2 * (Mh[3] * Mh[3]) -
                              2 * (Mh[4] * Mh[4])) *
                             (MN[0] * MN[0]) +
                         coup9 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[3] * Mh[3]) - u * (Mh[4] * Mh[4]) -
                                  2 * (Mh[3] * Mh[3]) * (Mh[4] * Mh[4]) +
                                  2 * (Mh[4] * Mh[4] * Mh[4] * Mh[4]) +
                                  t * (2 * u + (Mh[3] * Mh[3]) -
                                       (Mh[4] * Mh[4]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                                  6 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                                  s * ((Mh[3] * Mh[3]) + 3 * (Mh[4] * Mh[4]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup18[j1]) *
                        (coup8 * (t - u + (Mh[3] * Mh[3]) - (Mh[4] * Mh[4])) +
                         coup9 * (t - u - (Mh[3] * Mh[3]) + (Mh[4] * Mh[4]))) *
                        MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (t - (MN[j1] * MN[j1]))),
         j1, 5)

    SUM2((std::conj(coup32[j1]) * coup32[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2((2 * coup32[i1] *
          (std::conj(coup15[j1]) *
               (std::conj(coup18[j1]) *
                    (coup2[i1] *
                         (s + t - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) -
                     coup3[i1] * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup19[j1]) *
                    (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup2[i1] * (MN[0] * MN[0])) *
                    MN[j1]) +
           std::conj(coup14[j1]) *
               (std::conj(coup19[j1]) *
                    (coup3[i1] *
                         (s + t - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) -
                     coup2[i1] * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup18[j1]) *
                    (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup3[i1] * (MN[0] * MN[0])) *
                    MN[j1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (MN[j1] * MN[j1]))) -
             (2 * coup32[i1] *
              (std::conj(coup15[j1]) *
                   (std::conj(coup18[j1]) *
                        (-(coup3[i1] *
                           (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0]))) +
                         coup2[i1] * (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup19[j1]) *
                        (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                         2 * coup2[i1] * (MN[0] * MN[0])) *
                        MN[j1]) +
               std::conj(coup14[j1]) *
                   (std::conj(coup19[j1]) *
                        (-(coup2[i1] *
                           (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0]))) +
                         coup3[i1] * (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup18[j1]) *
                        (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                         2 * coup3[i1] * (MN[0] * MN[0])) *
                        MN[j1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))),
         i1, 6, j1, 5)

    SUM2(
        (std::conj(coup15[j1]) *
             (std::conj(coup18[j1]) *
                  (coup14[i1] * MN[0] *
                       (-2 * u * coup19[i1] * MN[0] +
                        coup18[i1] *
                            (s + t - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) *
                            MN[i1]) +
                   coup15[i1] *
                       (coup18[i1] *
                            (-(s * (Mh[3] * Mh[3])) - u * (Mh[3] * Mh[3]) +
                             (Mh[3] * Mh[3] * Mh[3] * Mh[3]) +
                             s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                             2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                             t * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) -
                             3 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                        coup19[i1] * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                            MN[0] * MN[i1])) +
              std::conj(coup19[j1]) *
                  (coup15[i1] *
                       (-(coup18[i1] * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                          MN[0]) +
                        coup19[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                   coup14[i1] * MN[0] *
                       (coup19[i1] *
                            (s + t - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) -
                        2 * coup18[i1] * MN[0] * MN[i1])) *
                  MN[j1]) +
         std::conj(coup14[j1]) *
             (std::conj(coup19[j1]) *
                  (coup15[i1] * MN[0] *
                       (-2 * u * coup18[i1] * MN[0] +
                        coup19[i1] *
                            (s + t - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) *
                            MN[i1]) +
                   coup14[i1] *
                       (coup19[i1] *
                            (-(s * (Mh[3] * Mh[3])) - u * (Mh[3] * Mh[3]) +
                             (Mh[3] * Mh[3] * Mh[3] * Mh[3]) +
                             s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                             2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                             t * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) -
                             3 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                        coup18[i1] * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                            MN[0] * MN[i1])) +
              std::conj(coup18[j1]) *
                  (coup14[i1] *
                       (-(coup19[i1] * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                          MN[0]) +
                        coup18[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                   coup15[i1] * MN[0] *
                       (coup18[i1] *
                            (s + t - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) -
                        2 * coup19[i1] * MN[0] * MN[i1])) *
                  MN[j1])) /
                ((u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))) +
            (std::conj(coup15[j1]) *
                 (std::conj(coup18[j1]) *
                      (-(coup14[i1] * MN[0] *
                         (2 * t * coup19[i1] * MN[0] +
                          coup18[i1] * (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                              MN[i1])) +
                       coup15[i1] *
                           (coup18[i1] *
                                (t * (u - (Mh[4] * Mh[4]) - (MN[0] * MN[0])) -
                                 (s + u - (Mh[4] * Mh[4]) -
                                  3 * (MN[0] * MN[0])) *
                                     ((Mh[4] * Mh[4]) - (MN[0] * MN[0]))) +
                            coup19[i1] *
                                (s + u - (Mh[4] * Mh[4]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup19[j1]) *
                      (coup15[i1] *
                           (coup18[i1] *
                                (s + u - (Mh[4] * Mh[4]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup19[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                       coup14[i1] * MN[0] *
                           (coup19[i1] *
                                (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) +
                            2 * coup18[i1] * MN[0] * MN[i1])) *
                      MN[j1]) +
             std::conj(coup14[j1]) *
                 (std::conj(coup19[j1]) *
                      (-(coup15[i1] * MN[0] *
                         (2 * t * coup18[i1] * MN[0] +
                          coup19[i1] * (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                              MN[i1])) +
                       coup14[i1] *
                           (coup19[i1] *
                                (t * (u - (Mh[4] * Mh[4]) - (MN[0] * MN[0])) -
                                 (s + u - (Mh[4] * Mh[4]) -
                                  3 * (MN[0] * MN[0])) *
                                     ((Mh[4] * Mh[4]) - (MN[0] * MN[0]))) +
                            coup18[i1] *
                                (s + u - (Mh[4] * Mh[4]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup18[j1]) *
                      (coup14[i1] *
                           (coup19[i1] *
                                (s + u - (Mh[4] * Mh[4]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup18[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                       coup15[i1] * MN[0] *
                           (coup18[i1] *
                                (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) +
                            2 * coup19[i1] * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((t - (MN[i1] * MN[i1])) * (t - (MN[j1] * MN[j1]))) +
            (-(std::conj(coup15[j1]) *
               (std::conj(coup18[j1]) *
                    (2 * coup15[i1] * MN[0] *
                         (coup18[i1] *
                              (s + t + u - 2 * (Mh[3] * Mh[3]) -
                               2 * (Mh[4] * Mh[4])) *
                              MN[0] +
                          coup19[i1] * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                              MN[i1]) +
                     coup14[i1] *
                         (coup19[i1] *
                              ((s * s) - (t * t) - (u * u) +
                               u * (Mh[3] * Mh[3]) + u * (Mh[4] * Mh[4]) -
                               2 * (Mh[3] * Mh[3]) * (Mh[4] * Mh[4]) +
                               t * ((Mh[3] * Mh[3]) + (Mh[4] * Mh[4])) +
                               2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                               2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                               s * ((Mh[3] * Mh[3]) + (Mh[4] * Mh[4]) +
                                    4 * (MN[0] * MN[0])) +
                               6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                          2 * coup18[i1] *
                              (-s - t + (Mh[3] * Mh[3]) + 3 * (MN[0] * MN[0])) *
                              MN[0] * MN[i1])) +
                2 * std::conj(coup19[j1]) *
                    (-(coup15[i1] *
                       (coup18[i1] *
                            (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) *
                            MN[0] +
                        coup19[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1])) +
                     coup14[i1] * MN[0] *
                         (coup19[i1] * (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) +
                          2 * coup18[i1] * MN[0] * MN[i1])) *
                    MN[j1])) -
             std::conj(coup14[j1]) *
                 (std::conj(coup19[j1]) *
                      (2 * coup14[i1] * MN[0] *
                           (coup19[i1] *
                                (s + t + u - 2 * (Mh[3] * Mh[3]) -
                                 2 * (Mh[4] * Mh[4])) *
                                MN[0] +
                            coup18[i1] *
                                (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                                MN[i1]) +
                       coup15[i1] *
                           (coup18[i1] *
                                ((s * s) - (t * t) - (u * u) +
                                 u * (Mh[3] * Mh[3]) + u * (Mh[4] * Mh[4]) -
                                 2 * (Mh[3] * Mh[3]) * (Mh[4] * Mh[4]) +
                                 t * ((Mh[3] * Mh[3]) + (Mh[4] * Mh[4])) +
                                 2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                                 2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                                 s * ((Mh[3] * Mh[3]) + (Mh[4] * Mh[4]) +
                                      4 * (MN[0] * MN[0])) +
                                 6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup19[i1] *
                                (-s - t + (Mh[3] * Mh[3]) +
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  2 * std::conj(coup18[j1]) *
                      (-(coup14[i1] *
                         (coup19[i1] *
                              (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) *
                              MN[0] +
                          coup18[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1])) +
                       coup15[i1] * MN[0] *
                           (coup18[i1] *
                                (t - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) +
                            2 * coup19[i1] * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((t - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
        j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1h4h6(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (Mh[3] * Mh[3]) + (Mh[5] * Mh[5]) +
         cos_t *
             sqrt(s +
                  (((Mh[3] * Mh[3]) - (Mh[5] * Mh[5])) *
                   ((Mh[3] * Mh[3]) - (Mh[5] * Mh[5]))) /
                      s -
                  2 * ((Mh[3] * Mh[3]) + (Mh[5] * Mh[5]))) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (Mh[3] * Mh[3]) + (Mh[5] * Mh[5]) + 2 * (MN[0] * MN[0]);
    res += (coup35 * std::conj(coup35) *
            (std::conj(coup8) *
                 (2 * coup9 * (s - 2 * ((Mh[3] * Mh[3]) + (Mh[5] * Mh[5]))) *
                      (MN[0] * MN[0]) +
                  coup8 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[3] * Mh[3] * Mh[3] * Mh[3]) -
                           2 * (Mh[3] * Mh[3]) * (Mh[5] * Mh[5]) +
                           (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                           4 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                           4 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[3] * Mh[3]) + (Mh[5] * Mh[5]) +
                                (MN[0] * MN[0])))) +
             std::conj(coup9) *
                 (2 * coup8 * (s - 2 * ((Mh[3] * Mh[3]) + (Mh[5] * Mh[5]))) *
                      (MN[0] * MN[0]) +
                  coup9 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[3] * Mh[3] * Mh[3] * Mh[3]) -
                           2 * (Mh[3] * Mh[3]) * (Mh[5] * Mh[5]) +
                           (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                           4 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                           4 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[3] * Mh[3]) + (Mh[5] * Mh[5]) +
                                (MN[0] * MN[0])))))) /
           (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((-2 * std::conj(coup35) * coup34[i1] *
          (std::conj(coup9) *
               (coup3[i1] * (t - u + (Mh[3] * Mh[3]) - (Mh[5] * Mh[5])) +
                coup2[i1] * (t - u - (Mh[3] * Mh[3]) + (Mh[5] * Mh[5]))) +
           std::conj(coup8) *
               (coup2[i1] * (t - u + (Mh[3] * Mh[3]) - (Mh[5] * Mh[5])) +
                coup3[i1] * (t - u - (Mh[3] * Mh[3]) + (Mh[5] * Mh[5])))) *
          MN[0]) /
             ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((coup35 *
          (std::conj(coup15[j1]) *
               (std::conj(coup22[j1]) *
                    (-2 * coup8 *
                         (s + t - u - 2 * (Mh[3] * Mh[3]) -
                          2 * (Mh[5] * Mh[5])) *
                         (MN[0] * MN[0]) +
                     coup9 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[3] * Mh[3]) -
                          2 * (Mh[3] * Mh[3] * Mh[3] * Mh[3]) -
                          u * (Mh[5] * Mh[5]) +
                          2 * (Mh[3] * Mh[3]) * (Mh[5] * Mh[5]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                          2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[3] * Mh[3]) + (Mh[5] * Mh[5]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[3] * Mh[3]) + (Mh[5] * Mh[5]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup23[j1]) *
                    (coup9 * (t - u + (Mh[3] * Mh[3]) - (Mh[5] * Mh[5])) +
                     coup8 * (t - u - (Mh[3] * Mh[3]) + (Mh[5] * Mh[5]))) *
                    MN[0] * MN[j1]) +
           std::conj(coup14[j1]) *
               (std::conj(coup23[j1]) *
                    (-2 * coup9 *
                         (s + t - u - 2 * (Mh[3] * Mh[3]) -
                          2 * (Mh[5] * Mh[5])) *
                         (MN[0] * MN[0]) +
                     coup8 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[3] * Mh[3]) -
                          2 * (Mh[3] * Mh[3] * Mh[3] * Mh[3]) -
                          u * (Mh[5] * Mh[5]) +
                          2 * (Mh[3] * Mh[3]) * (Mh[5] * Mh[5]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                          2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[3] * Mh[3]) + (Mh[5] * Mh[5]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[3] * Mh[3]) + (Mh[5] * Mh[5]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup22[j1]) *
                    (coup8 * (t - u + (Mh[3] * Mh[3]) - (Mh[5] * Mh[5])) +
                     coup9 * (t - u - (Mh[3] * Mh[3]) + (Mh[5] * Mh[5]))) *
                    MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (u - (MN[j1] * MN[j1]))) +
             (coup35 *
              (std::conj(coup15[j1]) *
                   (std::conj(coup22[j1]) *
                        (2 * coup9 *
                             (s - t + u - 2 * (Mh[3] * Mh[3]) -
                              2 * (Mh[5] * Mh[5])) *
                             (MN[0] * MN[0]) +
                         coup8 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[3] * Mh[3]) - u * (Mh[5] * Mh[5]) -
                                  2 * (Mh[3] * Mh[3]) * (Mh[5] * Mh[5]) +
                                  2 * (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                                  t * (2 * u + (Mh[3] * Mh[3]) -
                                       (Mh[5] * Mh[5]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                                  6 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                                  s * ((Mh[3] * Mh[3]) + 3 * (Mh[5] * Mh[5]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup23[j1]) *
                        (coup9 * (t - u + (Mh[3] * Mh[3]) - (Mh[5] * Mh[5])) +
                         coup8 * (t - u - (Mh[3] * Mh[3]) + (Mh[5] * Mh[5]))) *
                        MN[0] * MN[j1]) +
               std::conj(coup14[j1]) *
                   (std::conj(coup23[j1]) *
                        (2 * coup8 *
                             (s - t + u - 2 * (Mh[3] * Mh[3]) -
                              2 * (Mh[5] * Mh[5])) *
                             (MN[0] * MN[0]) +
                         coup9 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[3] * Mh[3]) - u * (Mh[5] * Mh[5]) -
                                  2 * (Mh[3] * Mh[3]) * (Mh[5] * Mh[5]) +
                                  2 * (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                                  t * (2 * u + (Mh[3] * Mh[3]) -
                                       (Mh[5] * Mh[5]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                                  6 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                                  s * ((Mh[3] * Mh[3]) + 3 * (Mh[5] * Mh[5]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup22[j1]) *
                        (coup8 * (t - u + (Mh[3] * Mh[3]) - (Mh[5] * Mh[5])) +
                         coup9 * (t - u - (Mh[3] * Mh[3]) + (Mh[5] * Mh[5]))) *
                        MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (t - (MN[j1] * MN[j1]))),
         j1, 5)

    SUM2((std::conj(coup34[j1]) * coup34[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2((2 * coup34[i1] *
          (std::conj(coup15[j1]) *
               (std::conj(coup22[j1]) *
                    (coup2[i1] *
                         (s + t - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) -
                     coup3[i1] * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup23[j1]) *
                    (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup2[i1] * (MN[0] * MN[0])) *
                    MN[j1]) +
           std::conj(coup14[j1]) *
               (std::conj(coup23[j1]) *
                    (coup3[i1] *
                         (s + t - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) -
                     coup2[i1] * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup22[j1]) *
                    (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup3[i1] * (MN[0] * MN[0])) *
                    MN[j1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (MN[j1] * MN[j1]))) -
             (2 * coup34[i1] *
              (std::conj(coup15[j1]) *
                   (std::conj(coup22[j1]) *
                        (-(coup3[i1] *
                           (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0]))) +
                         coup2[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup23[j1]) *
                        (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                         2 * coup2[i1] * (MN[0] * MN[0])) *
                        MN[j1]) +
               std::conj(coup14[j1]) *
                   (std::conj(coup23[j1]) *
                        (-(coup2[i1] *
                           (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0]))) +
                         coup3[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup22[j1]) *
                        (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                         2 * coup3[i1] * (MN[0] * MN[0])) *
                        MN[j1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))),
         i1, 6, j1, 5)

    SUM2(
        (std::conj(coup15[j1]) *
             (std::conj(coup22[j1]) *
                  (coup14[i1] * MN[0] *
                       (-2 * u * coup23[i1] * MN[0] +
                        coup22[i1] *
                            (s + t - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) *
                            MN[i1]) +
                   coup15[i1] *
                       (coup22[i1] *
                            (-(s * (Mh[3] * Mh[3])) - u * (Mh[3] * Mh[3]) +
                             (Mh[3] * Mh[3] * Mh[3] * Mh[3]) +
                             s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                             2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                             t * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) -
                             3 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                        coup23[i1] * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                            MN[0] * MN[i1])) +
              std::conj(coup23[j1]) *
                  (coup15[i1] *
                       (-(coup22[i1] * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                          MN[0]) +
                        coup23[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                   coup14[i1] * MN[0] *
                       (coup23[i1] *
                            (s + t - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) -
                        2 * coup22[i1] * MN[0] * MN[i1])) *
                  MN[j1]) +
         std::conj(coup14[j1]) *
             (std::conj(coup23[j1]) *
                  (coup15[i1] * MN[0] *
                       (-2 * u * coup22[i1] * MN[0] +
                        coup23[i1] *
                            (s + t - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) *
                            MN[i1]) +
                   coup14[i1] *
                       (coup23[i1] *
                            (-(s * (Mh[3] * Mh[3])) - u * (Mh[3] * Mh[3]) +
                             (Mh[3] * Mh[3] * Mh[3] * Mh[3]) +
                             s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                             2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                             t * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) -
                             3 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                        coup22[i1] * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                            MN[0] * MN[i1])) +
              std::conj(coup22[j1]) *
                  (coup14[i1] *
                       (-(coup23[i1] * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                          MN[0]) +
                        coup22[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                   coup15[i1] * MN[0] *
                       (coup22[i1] *
                            (s + t - (Mh[3] * Mh[3]) - 3 * (MN[0] * MN[0])) -
                        2 * coup23[i1] * MN[0] * MN[i1])) *
                  MN[j1])) /
                ((u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))) +
            (std::conj(coup15[j1]) *
                 (std::conj(coup22[j1]) *
                      (-(coup14[i1] * MN[0] *
                         (2 * t * coup23[i1] * MN[0] +
                          coup22[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                              MN[i1])) +
                       coup15[i1] *
                           (coup22[i1] *
                                (t * (u - (Mh[5] * Mh[5]) - (MN[0] * MN[0])) -
                                 (s + u - (Mh[5] * Mh[5]) -
                                  3 * (MN[0] * MN[0])) *
                                     ((Mh[5] * Mh[5]) - (MN[0] * MN[0]))) +
                            coup23[i1] *
                                (s + u - (Mh[5] * Mh[5]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup23[j1]) *
                      (coup15[i1] *
                           (coup22[i1] *
                                (s + u - (Mh[5] * Mh[5]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup23[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                       coup14[i1] * MN[0] *
                           (coup23[i1] *
                                (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) +
                            2 * coup22[i1] * MN[0] * MN[i1])) *
                      MN[j1]) +
             std::conj(coup14[j1]) *
                 (std::conj(coup23[j1]) *
                      (-(coup15[i1] * MN[0] *
                         (2 * t * coup22[i1] * MN[0] +
                          coup23[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                              MN[i1])) +
                       coup14[i1] *
                           (coup23[i1] *
                                (t * (u - (Mh[5] * Mh[5]) - (MN[0] * MN[0])) -
                                 (s + u - (Mh[5] * Mh[5]) -
                                  3 * (MN[0] * MN[0])) *
                                     ((Mh[5] * Mh[5]) - (MN[0] * MN[0]))) +
                            coup22[i1] *
                                (s + u - (Mh[5] * Mh[5]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup22[j1]) *
                      (coup14[i1] *
                           (coup23[i1] *
                                (s + u - (Mh[5] * Mh[5]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup22[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                       coup15[i1] * MN[0] *
                           (coup22[i1] *
                                (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) +
                            2 * coup23[i1] * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((t - (MN[i1] * MN[i1])) * (t - (MN[j1] * MN[j1]))) +
            (-(std::conj(coup15[j1]) *
               (std::conj(coup22[j1]) *
                    (2 * coup15[i1] * MN[0] *
                         (coup22[i1] *
                              (s + t + u - 2 * (Mh[3] * Mh[3]) -
                               2 * (Mh[5] * Mh[5])) *
                              MN[0] +
                          coup23[i1] * (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                              MN[i1]) +
                     coup14[i1] *
                         (coup23[i1] *
                              ((s * s) - (t * t) - (u * u) +
                               u * (Mh[3] * Mh[3]) + u * (Mh[5] * Mh[5]) -
                               2 * (Mh[3] * Mh[3]) * (Mh[5] * Mh[5]) +
                               t * ((Mh[3] * Mh[3]) + (Mh[5] * Mh[5])) +
                               2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                               2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                               s * ((Mh[3] * Mh[3]) + (Mh[5] * Mh[5]) +
                                    4 * (MN[0] * MN[0])) +
                               6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                          2 * coup22[i1] *
                              (-s - t + (Mh[3] * Mh[3]) + 3 * (MN[0] * MN[0])) *
                              MN[0] * MN[i1])) +
                2 * std::conj(coup23[j1]) *
                    (-(coup15[i1] *
                       (coup22[i1] *
                            (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0])) *
                            MN[0] +
                        coup23[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1])) +
                     coup14[i1] * MN[0] *
                         (coup23[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) +
                          2 * coup22[i1] * MN[0] * MN[i1])) *
                    MN[j1])) -
             std::conj(coup14[j1]) *
                 (std::conj(coup23[j1]) *
                      (2 * coup14[i1] * MN[0] *
                           (coup23[i1] *
                                (s + t + u - 2 * (Mh[3] * Mh[3]) -
                                 2 * (Mh[5] * Mh[5])) *
                                MN[0] +
                            coup22[i1] *
                                (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                                MN[i1]) +
                       coup15[i1] *
                           (coup22[i1] *
                                ((s * s) - (t * t) - (u * u) +
                                 u * (Mh[3] * Mh[3]) + u * (Mh[5] * Mh[5]) -
                                 2 * (Mh[3] * Mh[3]) * (Mh[5] * Mh[5]) +
                                 t * ((Mh[3] * Mh[3]) + (Mh[5] * Mh[5])) +
                                 2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                                 2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                                 s * ((Mh[3] * Mh[3]) + (Mh[5] * Mh[5]) +
                                      4 * (MN[0] * MN[0])) +
                                 6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup23[i1] *
                                (-s - t + (Mh[3] * Mh[3]) +
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  2 * std::conj(coup22[j1]) *
                      (-(coup14[i1] *
                         (coup23[i1] *
                              (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0])) *
                              MN[0] +
                          coup22[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1])) +
                       coup15[i1] * MN[0] *
                           (coup22[i1] *
                                (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) +
                            2 * coup23[i1] * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((t - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
        j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1h5h5(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t = -0.5 * s + (Mh[4] * Mh[4]) +
                             (cos_t * sqrt(s - 4 * (Mh[4] * Mh[4])) *
                              sqrt(s - 4 * (MN[0] * MN[0]))) /
                                 2. +
                             (MN[0] * MN[0]);
    std::complex<double> u = -s - t + 2 * (Mh[4] * Mh[4]) + 2 * (MN[0] * MN[0]);
    SUM2((std::conj(coup36[j1]) * coup36[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2((2 * coup36[i1] *
          (std::conj(coup18[j1]) * std::conj(coup19[j1]) *
               (coup2[i1] + coup3[i1]) * (s + t - u - 4 * (MN[0] * MN[0])) *
               MN[0] +
           (std::conj(coup19[j1]) * std::conj(coup19[j1])) *
               (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                2 * coup2[i1] * (MN[0] * MN[0])) *
               MN[j1] +
           (std::conj(coup18[j1]) * std::conj(coup18[j1])) *
               (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                2 * coup3[i1] * (MN[0] * MN[0])) *
               MN[j1])) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (MN[j1] * MN[j1]))) +
             (2 * coup36[i1] *
              (std::conj(coup18[j1]) * std::conj(coup19[j1]) *
                   (coup2[i1] + coup3[i1]) * (s - t + u - 4 * (MN[0] * MN[0])) *
                   MN[0] +
               (std::conj(coup19[j1]) * std::conj(coup19[j1])) *
                   (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                    2 * coup2[i1] * (MN[0] * MN[0])) *
                   MN[j1] +
               (std::conj(coup18[j1]) * std::conj(coup18[j1])) *
                   (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                    2 * coup3[i1] * (MN[0] * MN[0])) *
                   MN[j1])) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))),
         i1, 6, j1, 5)

    SUM2((std::conj(coup18[j1]) * std::conj(coup19[j1]) *
              (2 * coup18[i1] * coup19[i1] *
                   (s * (-(Mh[4] * Mh[4]) + (MN[0] * MN[0])) +
                    t * (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) -
                    (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                        ((Mh[4] * Mh[4]) + 3 * (MN[0] * MN[0]))) +
               (coup18[i1] * coup18[i1]) * (s + t - u - 4 * (MN[0] * MN[0])) *
                   MN[0] * MN[i1] +
               (coup19[i1] * coup19[i1]) * (s + t - u - 4 * (MN[0] * MN[0])) *
                   MN[0] * MN[i1]) +
          (std::conj(coup19[j1]) * std::conj(coup19[j1])) *
              (coup18[i1] * coup19[i1] * (s + t - u - 4 * (MN[0] * MN[0])) *
                   MN[0] +
               (coup19[i1] * coup19[i1]) * (s - 2 * (MN[0] * MN[0])) * MN[i1] -
               2 * (coup18[i1] * coup18[i1]) * (MN[0] * MN[0]) * MN[i1]) *
              MN[j1] +
          (std::conj(coup18[j1]) * std::conj(coup18[j1])) *
              (coup18[i1] * coup19[i1] * (s + t - u - 4 * (MN[0] * MN[0])) *
                   MN[0] +
               (coup18[i1] * coup18[i1]) * (s - 2 * (MN[0] * MN[0])) * MN[i1] -
               2 * (coup19[i1] * coup19[i1]) * (MN[0] * MN[0]) * MN[i1]) *
              MN[j1]) /
                 ((u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))) +
             (std::conj(coup18[j1]) * std::conj(coup19[j1]) *
                  (2 * coup18[i1] * coup19[i1] *
                       (t * (u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) -
                        (s + u - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) *
                            ((Mh[4] * Mh[4]) - (MN[0] * MN[0]))) +
                   (coup18[i1] * coup18[i1]) *
                       (s - t + u - 4 * (MN[0] * MN[0])) * MN[0] * MN[i1] +
                   (coup19[i1] * coup19[i1]) *
                       (s - t + u - 4 * (MN[0] * MN[0])) * MN[0] * MN[i1]) +
              (std::conj(coup19[j1]) * std::conj(coup19[j1])) *
                  (coup18[i1] * coup19[i1] * (s - t + u - 4 * (MN[0] * MN[0])) *
                       MN[0] +
                   (coup19[i1] * coup19[i1]) * (s - 2 * (MN[0] * MN[0])) *
                       MN[i1] -
                   2 * (coup18[i1] * coup18[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                  MN[j1] +
              (std::conj(coup18[j1]) * std::conj(coup18[j1])) *
                  (coup18[i1] * coup19[i1] * (s - t + u - 4 * (MN[0] * MN[0])) *
                       MN[0] +
                   (coup18[i1] * coup18[i1]) * (s - 2 * (MN[0] * MN[0])) *
                       MN[i1] -
                   2 * (coup19[i1] * coup19[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                  MN[j1]) /
                 ((t - (MN[i1] * MN[i1])) * (t - (MN[j1] * MN[j1]))) -
             (2 *
              (std::conj(coup18[j1]) * std::conj(coup19[j1]) *
                   (coup18[i1] * coup19[i1] *
                        ((s * s) - (t * t) - (u * u) + 2 * u * (Mh[4] * Mh[4]) -
                         2 * (Mh[4] * Mh[4] * Mh[4] * Mh[4]) +
                         2 * u * (MN[0] * MN[0]) -
                         4 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                         2 * s * ((Mh[4] * Mh[4]) + (MN[0] * MN[0])) +
                         2 * t * ((Mh[4] * Mh[4]) + (MN[0] * MN[0])) +
                         6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                    (coup18[i1] * coup18[i1]) *
                        (-s - t + u + 4 * (MN[0] * MN[0])) * MN[0] * MN[i1] +
                    (coup19[i1] * coup19[i1]) *
                        (-s - t + u + 4 * (MN[0] * MN[0])) * MN[0] * MN[i1]) +
               (std::conj(coup19[j1]) * std::conj(coup19[j1])) *
                   (coup18[i1] * coup19[i1] *
                        (-s + t - u + 4 * (MN[0] * MN[0])) * MN[0] -
                    (coup19[i1] * coup19[i1]) * (s - 2 * (MN[0] * MN[0])) *
                        MN[i1] +
                    2 * (coup18[i1] * coup18[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                   MN[j1] +
               (std::conj(coup18[j1]) * std::conj(coup18[j1])) *
                   (coup18[i1] * coup19[i1] *
                        (-s + t - u + 4 * (MN[0] * MN[0])) * MN[0] -
                    (coup18[i1] * coup18[i1]) * (s - 2 * (MN[0] * MN[0])) *
                        MN[i1] +
                    2 * (coup19[i1] * coup19[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                   MN[j1])) /
                 ((t - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
         j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1h5h6(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (Mh[4] * Mh[4]) + (Mh[5] * Mh[5]) +
         cos_t *
             sqrt(s +
                  (((Mh[4] * Mh[4]) - (Mh[5] * Mh[5])) *
                   ((Mh[4] * Mh[4]) - (Mh[5] * Mh[5]))) /
                      s -
                  2 * ((Mh[4] * Mh[4]) + (Mh[5] * Mh[5]))) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (Mh[4] * Mh[4]) + (Mh[5] * Mh[5]) + 2 * (MN[0] * MN[0]);
    res += (coup38 * std::conj(coup38) *
            (std::conj(coup8) *
                 (2 * coup9 * (s - 2 * ((Mh[4] * Mh[4]) + (Mh[5] * Mh[5]))) *
                      (MN[0] * MN[0]) +
                  coup8 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[4] * Mh[4] * Mh[4] * Mh[4]) -
                           2 * (Mh[4] * Mh[4]) * (Mh[5] * Mh[5]) +
                           (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                           4 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) +
                           4 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[4] * Mh[4]) + (Mh[5] * Mh[5]) +
                                (MN[0] * MN[0])))) +
             std::conj(coup9) *
                 (2 * coup8 * (s - 2 * ((Mh[4] * Mh[4]) + (Mh[5] * Mh[5]))) *
                      (MN[0] * MN[0]) +
                  coup9 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                           (Mh[4] * Mh[4] * Mh[4] * Mh[4]) -
                           2 * (Mh[4] * Mh[4]) * (Mh[5] * Mh[5]) +
                           (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                           4 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) +
                           4 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                           2 * s *
                               ((Mh[4] * Mh[4]) + (Mh[5] * Mh[5]) +
                                (MN[0] * MN[0])))))) /
           (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((-2 * std::conj(coup38) * coup37[i1] *
          (std::conj(coup9) *
               (coup3[i1] * (t - u + (Mh[4] * Mh[4]) - (Mh[5] * Mh[5])) +
                coup2[i1] * (t - u - (Mh[4] * Mh[4]) + (Mh[5] * Mh[5]))) +
           std::conj(coup8) *
               (coup2[i1] * (t - u + (Mh[4] * Mh[4]) - (Mh[5] * Mh[5])) +
                coup3[i1] * (t - u - (Mh[4] * Mh[4]) + (Mh[5] * Mh[5])))) *
          MN[0]) /
             ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((coup38 *
          (std::conj(coup19[j1]) *
               (std::conj(coup22[j1]) *
                    (-2 * coup8 *
                         (s + t - u - 2 * (Mh[4] * Mh[4]) -
                          2 * (Mh[5] * Mh[5])) *
                         (MN[0] * MN[0]) +
                     coup9 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[4] * Mh[4]) -
                          2 * (Mh[4] * Mh[4] * Mh[4] * Mh[4]) -
                          u * (Mh[5] * Mh[5]) +
                          2 * (Mh[4] * Mh[4]) * (Mh[5] * Mh[5]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                          2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[4] * Mh[4]) + (Mh[5] * Mh[5]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[4] * Mh[4]) + (Mh[5] * Mh[5]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup23[j1]) *
                    (coup9 * (t - u + (Mh[4] * Mh[4]) - (Mh[5] * Mh[5])) +
                     coup8 * (t - u - (Mh[4] * Mh[4]) + (Mh[5] * Mh[5]))) *
                    MN[0] * MN[j1]) +
           std::conj(coup18[j1]) *
               (std::conj(coup23[j1]) *
                    (-2 * coup9 *
                         (s + t - u - 2 * (Mh[4] * Mh[4]) -
                          2 * (Mh[5] * Mh[5])) *
                         (MN[0] * MN[0]) +
                     coup8 *
                         (-(s * s) + (t * t) + (u * u) + u * (Mh[4] * Mh[4]) -
                          2 * (Mh[4] * Mh[4] * Mh[4] * Mh[4]) -
                          u * (Mh[5] * Mh[5]) +
                          2 * (Mh[4] * Mh[4]) * (Mh[5] * Mh[5]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                          2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                          t * (2 * u - (Mh[4] * Mh[4]) + (Mh[5] * Mh[5]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (Mh[4] * Mh[4]) + (Mh[5] * Mh[5]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup22[j1]) *
                    (coup8 * (t - u + (Mh[4] * Mh[4]) - (Mh[5] * Mh[5])) +
                     coup9 * (t - u - (Mh[4] * Mh[4]) + (Mh[5] * Mh[5]))) *
                    MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (u - (MN[j1] * MN[j1]))) +
             (coup38 *
              (std::conj(coup19[j1]) *
                   (std::conj(coup22[j1]) *
                        (2 * coup9 *
                             (s - t + u - 2 * (Mh[4] * Mh[4]) -
                              2 * (Mh[5] * Mh[5])) *
                             (MN[0] * MN[0]) +
                         coup8 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[4] * Mh[4]) - u * (Mh[5] * Mh[5]) -
                                  2 * (Mh[4] * Mh[4]) * (Mh[5] * Mh[5]) +
                                  2 * (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                                  t * (2 * u + (Mh[4] * Mh[4]) -
                                       (Mh[5] * Mh[5]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) +
                                  6 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                                  s * ((Mh[4] * Mh[4]) + 3 * (Mh[5] * Mh[5]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup23[j1]) *
                        (coup9 * (t - u + (Mh[4] * Mh[4]) - (Mh[5] * Mh[5])) +
                         coup8 * (t - u - (Mh[4] * Mh[4]) + (Mh[5] * Mh[5]))) *
                        MN[0] * MN[j1]) +
               std::conj(coup18[j1]) *
                   (std::conj(coup23[j1]) *
                        (2 * coup8 *
                             (s - t + u - 2 * (Mh[4] * Mh[4]) -
                              2 * (Mh[5] * Mh[5])) *
                             (MN[0] * MN[0]) +
                         coup9 * ((s * s) - (t * t) - (u * u) +
                                  u * (Mh[4] * Mh[4]) - u * (Mh[5] * Mh[5]) -
                                  2 * (Mh[4] * Mh[4]) * (Mh[5] * Mh[5]) +
                                  2 * (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                                  t * (2 * u + (Mh[4] * Mh[4]) -
                                       (Mh[5] * Mh[5]) - 2 * (MN[0] * MN[0])) +
                                  2 * u * (MN[0] * MN[0]) +
                                  2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) +
                                  6 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                                  s * ((Mh[4] * Mh[4]) + 3 * (Mh[5] * Mh[5]) +
                                       2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup22[j1]) *
                        (coup8 * (t - u + (Mh[4] * Mh[4]) - (Mh[5] * Mh[5])) +
                         coup9 * (t - u - (Mh[4] * Mh[4]) + (Mh[5] * Mh[5]))) *
                        MN[0] * MN[j1]))) /
                 ((-s + (MZ * MZ)) * (t - (MN[j1] * MN[j1]))),
         j1, 5)

    SUM2((std::conj(coup37[j1]) * coup37[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2((2 * coup37[i1] *
          (std::conj(coup19[j1]) *
               (std::conj(coup22[j1]) *
                    (coup2[i1] *
                         (s + t - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) -
                     coup3[i1] * (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup23[j1]) *
                    (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup2[i1] * (MN[0] * MN[0])) *
                    MN[j1]) +
           std::conj(coup18[j1]) *
               (std::conj(coup23[j1]) *
                    (coup3[i1] *
                         (s + t - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) -
                     coup2[i1] * (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0]))) *
                    MN[0] +
                std::conj(coup22[j1]) *
                    (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                     2 * coup3[i1] * (MN[0] * MN[0])) *
                    MN[j1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (MN[j1] * MN[j1]))) -
             (2 * coup37[i1] *
              (std::conj(coup19[j1]) *
                   (std::conj(coup22[j1]) *
                        (-(coup3[i1] *
                           (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0]))) +
                         coup2[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup23[j1]) *
                        (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                         2 * coup2[i1] * (MN[0] * MN[0])) *
                        MN[j1]) +
               std::conj(coup18[j1]) *
                   (std::conj(coup23[j1]) *
                        (-(coup2[i1] *
                           (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0]))) +
                         coup3[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup22[j1]) *
                        (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                         2 * coup3[i1] * (MN[0] * MN[0])) *
                        MN[j1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))),
         i1, 6, j1, 5)

    SUM2(
        (std::conj(coup19[j1]) *
             (std::conj(coup22[j1]) *
                  (coup18[i1] * MN[0] *
                       (-2 * u * coup23[i1] * MN[0] +
                        coup22[i1] *
                            (s + t - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) *
                            MN[i1]) +
                   coup19[i1] *
                       (coup22[i1] *
                            (-(s * (Mh[4] * Mh[4])) - u * (Mh[4] * Mh[4]) +
                             (Mh[4] * Mh[4] * Mh[4] * Mh[4]) +
                             s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                             2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) +
                             t * (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) -
                             3 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                        coup23[i1] * (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                            MN[0] * MN[i1])) +
              std::conj(coup23[j1]) *
                  (coup19[i1] *
                       (-(coup22[i1] * (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                          MN[0]) +
                        coup23[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                   coup18[i1] * MN[0] *
                       (coup23[i1] *
                            (s + t - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) -
                        2 * coup22[i1] * MN[0] * MN[i1])) *
                  MN[j1]) +
         std::conj(coup18[j1]) *
             (std::conj(coup23[j1]) *
                  (coup19[i1] * MN[0] *
                       (-2 * u * coup22[i1] * MN[0] +
                        coup23[i1] *
                            (s + t - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) *
                            MN[i1]) +
                   coup18[i1] *
                       (coup23[i1] *
                            (-(s * (Mh[4] * Mh[4])) - u * (Mh[4] * Mh[4]) +
                             (Mh[4] * Mh[4] * Mh[4] * Mh[4]) +
                             s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                             2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) +
                             t * (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) -
                             3 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                        coup22[i1] * (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                            MN[0] * MN[i1])) +
              std::conj(coup22[j1]) *
                  (coup18[i1] *
                       (-(coup23[i1] * (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                          MN[0]) +
                        coup22[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) +
                   coup19[i1] * MN[0] *
                       (coup22[i1] *
                            (s + t - (Mh[4] * Mh[4]) - 3 * (MN[0] * MN[0])) -
                        2 * coup23[i1] * MN[0] * MN[i1])) *
                  MN[j1])) /
                ((u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))) +
            (std::conj(coup19[j1]) *
                 (std::conj(coup22[j1]) *
                      (-(coup18[i1] * MN[0] *
                         (2 * t * coup23[i1] * MN[0] +
                          coup22[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                              MN[i1])) +
                       coup19[i1] *
                           (coup22[i1] *
                                (t * (u - (Mh[5] * Mh[5]) - (MN[0] * MN[0])) -
                                 (s + u - (Mh[5] * Mh[5]) -
                                  3 * (MN[0] * MN[0])) *
                                     ((Mh[5] * Mh[5]) - (MN[0] * MN[0]))) +
                            coup23[i1] *
                                (s + u - (Mh[5] * Mh[5]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup23[j1]) *
                      (coup19[i1] *
                           (coup22[i1] *
                                (s + u - (Mh[5] * Mh[5]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup23[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                       coup18[i1] * MN[0] *
                           (coup23[i1] *
                                (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) +
                            2 * coup22[i1] * MN[0] * MN[i1])) *
                      MN[j1]) +
             std::conj(coup18[j1]) *
                 (std::conj(coup23[j1]) *
                      (-(coup19[i1] * MN[0] *
                         (2 * t * coup22[i1] * MN[0] +
                          coup23[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                              MN[i1])) +
                       coup18[i1] *
                           (coup23[i1] *
                                (t * (u - (Mh[5] * Mh[5]) - (MN[0] * MN[0])) -
                                 (s + u - (Mh[5] * Mh[5]) -
                                  3 * (MN[0] * MN[0])) *
                                     ((Mh[5] * Mh[5]) - (MN[0] * MN[0]))) +
                            coup22[i1] *
                                (s + u - (Mh[5] * Mh[5]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup22[j1]) *
                      (coup18[i1] *
                           (coup23[i1] *
                                (s + u - (Mh[5] * Mh[5]) -
                                 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup22[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1]) -
                       coup19[i1] * MN[0] *
                           (coup22[i1] *
                                (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) +
                            2 * coup23[i1] * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((t - (MN[i1] * MN[i1])) * (t - (MN[j1] * MN[j1]))) +
            (-(std::conj(coup19[j1]) *
               (std::conj(coup22[j1]) *
                    (2 * coup19[i1] * MN[0] *
                         (coup22[i1] *
                              (s + t + u - 2 * (Mh[4] * Mh[4]) -
                               2 * (Mh[5] * Mh[5])) *
                              MN[0] +
                          coup23[i1] * (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                              MN[i1]) +
                     coup18[i1] *
                         (coup23[i1] *
                              ((s * s) - (t * t) - (u * u) +
                               u * (Mh[4] * Mh[4]) + u * (Mh[5] * Mh[5]) -
                               2 * (Mh[4] * Mh[4]) * (Mh[5] * Mh[5]) +
                               t * ((Mh[4] * Mh[4]) + (Mh[5] * Mh[5])) +
                               2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) +
                               2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                               s * ((Mh[4] * Mh[4]) + (Mh[5] * Mh[5]) +
                                    4 * (MN[0] * MN[0])) +
                               6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                          2 * coup22[i1] *
                              (-s - t + (Mh[4] * Mh[4]) + 3 * (MN[0] * MN[0])) *
                              MN[0] * MN[i1])) +
                2 * std::conj(coup23[j1]) *
                    (-(coup19[i1] *
                       (coup22[i1] *
                            (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0])) *
                            MN[0] +
                        coup23[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1])) +
                     coup18[i1] * MN[0] *
                         (coup23[i1] * (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) +
                          2 * coup22[i1] * MN[0] * MN[i1])) *
                    MN[j1])) -
             std::conj(coup18[j1]) *
                 (std::conj(coup23[j1]) *
                      (2 * coup18[i1] * MN[0] *
                           (coup23[i1] *
                                (s + t + u - 2 * (Mh[4] * Mh[4]) -
                                 2 * (Mh[5] * Mh[5])) *
                                MN[0] +
                            coup22[i1] *
                                (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                                MN[i1]) +
                       coup19[i1] *
                           (coup22[i1] *
                                ((s * s) - (t * t) - (u * u) +
                                 u * (Mh[4] * Mh[4]) + u * (Mh[5] * Mh[5]) -
                                 2 * (Mh[4] * Mh[4]) * (Mh[5] * Mh[5]) +
                                 t * ((Mh[4] * Mh[4]) + (Mh[5] * Mh[5])) +
                                 2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) +
                                 2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                                 s * ((Mh[4] * Mh[4]) + (Mh[5] * Mh[5]) +
                                      4 * (MN[0] * MN[0])) +
                                 6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup23[i1] *
                                (-s - t + (Mh[4] * Mh[4]) +
                                 3 * (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  2 * std::conj(coup22[j1]) *
                      (-(coup18[i1] *
                         (coup23[i1] *
                              (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0])) *
                              MN[0] +
                          coup22[i1] * (s - 2 * (MN[0] * MN[0])) * MN[i1])) +
                       coup19[i1] * MN[0] *
                           (coup22[i1] *
                                (t - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) +
                            2 * coup23[i1] * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((t - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
        j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1h6h6(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t = -0.5 * s + (Mh[5] * Mh[5]) +
                             (cos_t * sqrt(s - 4 * (Mh[5] * Mh[5])) *
                              sqrt(s - 4 * (MN[0] * MN[0]))) /
                                 2. +
                             (MN[0] * MN[0]);
    std::complex<double> u = -s - t + 2 * (Mh[5] * Mh[5]) + 2 * (MN[0] * MN[0]);
    SUM2((std::conj(coup39[j1]) * coup39[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2((2 * coup39[i1] *
          (std::conj(coup22[j1]) * std::conj(coup23[j1]) *
               (coup2[i1] + coup3[i1]) * (s + t - u - 4 * (MN[0] * MN[0])) *
               MN[0] +
           (std::conj(coup23[j1]) * std::conj(coup23[j1])) *
               (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                2 * coup2[i1] * (MN[0] * MN[0])) *
               MN[j1] +
           (std::conj(coup22[j1]) * std::conj(coup22[j1])) *
               (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                2 * coup3[i1] * (MN[0] * MN[0])) *
               MN[j1])) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (MN[j1] * MN[j1]))) +
             (2 * coup39[i1] *
              (std::conj(coup22[j1]) * std::conj(coup23[j1]) *
                   (coup2[i1] + coup3[i1]) * (s - t + u - 4 * (MN[0] * MN[0])) *
                   MN[0] +
               (std::conj(coup23[j1]) * std::conj(coup23[j1])) *
                   (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                    2 * coup2[i1] * (MN[0] * MN[0])) *
                   MN[j1] +
               (std::conj(coup22[j1]) * std::conj(coup22[j1])) *
                   (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                    2 * coup3[i1] * (MN[0] * MN[0])) *
                   MN[j1])) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))),
         i1, 6, j1, 5)

    SUM2((std::conj(coup22[j1]) * std::conj(coup23[j1]) *
              (2 * coup22[i1] * coup23[i1] *
                   (s * (-(Mh[5] * Mh[5]) + (MN[0] * MN[0])) +
                    t * (u - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) -
                    (u - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                        ((Mh[5] * Mh[5]) + 3 * (MN[0] * MN[0]))) +
               (coup22[i1] * coup22[i1]) * (s + t - u - 4 * (MN[0] * MN[0])) *
                   MN[0] * MN[i1] +
               (coup23[i1] * coup23[i1]) * (s + t - u - 4 * (MN[0] * MN[0])) *
                   MN[0] * MN[i1]) +
          (std::conj(coup23[j1]) * std::conj(coup23[j1])) *
              (coup22[i1] * coup23[i1] * (s + t - u - 4 * (MN[0] * MN[0])) *
                   MN[0] +
               (coup23[i1] * coup23[i1]) * (s - 2 * (MN[0] * MN[0])) * MN[i1] -
               2 * (coup22[i1] * coup22[i1]) * (MN[0] * MN[0]) * MN[i1]) *
              MN[j1] +
          (std::conj(coup22[j1]) * std::conj(coup22[j1])) *
              (coup22[i1] * coup23[i1] * (s + t - u - 4 * (MN[0] * MN[0])) *
                   MN[0] +
               (coup22[i1] * coup22[i1]) * (s - 2 * (MN[0] * MN[0])) * MN[i1] -
               2 * (coup23[i1] * coup23[i1]) * (MN[0] * MN[0]) * MN[i1]) *
              MN[j1]) /
                 ((u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))) +
             (std::conj(coup22[j1]) * std::conj(coup23[j1]) *
                  (2 * coup22[i1] * coup23[i1] *
                       (t * (u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0])) -
                        (s + u - (Mh[5] * Mh[5]) - 3 * (MN[0] * MN[0])) *
                            ((Mh[5] * Mh[5]) - (MN[0] * MN[0]))) +
                   (coup22[i1] * coup22[i1]) *
                       (s - t + u - 4 * (MN[0] * MN[0])) * MN[0] * MN[i1] +
                   (coup23[i1] * coup23[i1]) *
                       (s - t + u - 4 * (MN[0] * MN[0])) * MN[0] * MN[i1]) +
              (std::conj(coup23[j1]) * std::conj(coup23[j1])) *
                  (coup22[i1] * coup23[i1] * (s - t + u - 4 * (MN[0] * MN[0])) *
                       MN[0] +
                   (coup23[i1] * coup23[i1]) * (s - 2 * (MN[0] * MN[0])) *
                       MN[i1] -
                   2 * (coup22[i1] * coup22[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                  MN[j1] +
              (std::conj(coup22[j1]) * std::conj(coup22[j1])) *
                  (coup22[i1] * coup23[i1] * (s - t + u - 4 * (MN[0] * MN[0])) *
                       MN[0] +
                   (coup22[i1] * coup22[i1]) * (s - 2 * (MN[0] * MN[0])) *
                       MN[i1] -
                   2 * (coup23[i1] * coup23[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                  MN[j1]) /
                 ((t - (MN[i1] * MN[i1])) * (t - (MN[j1] * MN[j1]))) -
             (2 *
              (std::conj(coup22[j1]) * std::conj(coup23[j1]) *
                   (coup22[i1] * coup23[i1] *
                        ((s * s) - (t * t) - (u * u) + 2 * u * (Mh[5] * Mh[5]) -
                         2 * (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                         2 * u * (MN[0] * MN[0]) -
                         4 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                         2 * s * ((Mh[5] * Mh[5]) + (MN[0] * MN[0])) +
                         2 * t * ((Mh[5] * Mh[5]) + (MN[0] * MN[0])) +
                         6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                    (coup22[i1] * coup22[i1]) *
                        (-s - t + u + 4 * (MN[0] * MN[0])) * MN[0] * MN[i1] +
                    (coup23[i1] * coup23[i1]) *
                        (-s - t + u + 4 * (MN[0] * MN[0])) * MN[0] * MN[i1]) +
               (std::conj(coup23[j1]) * std::conj(coup23[j1])) *
                   (coup22[i1] * coup23[i1] *
                        (-s + t - u + 4 * (MN[0] * MN[0])) * MN[0] -
                    (coup23[i1] * coup23[i1]) * (s - 2 * (MN[0] * MN[0])) *
                        MN[i1] +
                    2 * (coup22[i1] * coup22[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                   MN[j1] +
               (std::conj(coup22[j1]) * std::conj(coup22[j1])) *
                   (coup22[i1] * coup23[i1] *
                        (-s + t - u + 4 * (MN[0] * MN[0])) * MN[0] -
                    (coup22[i1] * coup22[i1]) * (s - 2 * (MN[0] * MN[0])) *
                        MN[i1] +
                    2 * (coup23[i1] * coup23[i1]) * (MN[0] * MN[0]) * MN[i1]) *
                   MN[j1])) /
                 ((t - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
         j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1Hpm1Hpm1(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t = -0.5 * s + (MHm[0] * MHm[0]) +
                             (cos_t * sqrt(s - 4 * (MHm[0] * MHm[0])) *
                              sqrt(s - 4 * (MN[0] * MN[0]))) /
                                 2. +
                             (MN[0] * MN[0]);
    std::complex<double> u =
        -s - t + 2 * (MHm[0] * MHm[0]) + 2 * (MN[0] * MN[0]);
    res +=
        (coup41 * std::conj(coup41) *
         (std::conj(coup8) *
              (2 * coup9 * (s - 4 * (MHm[0] * MHm[0])) * (MN[0] * MN[0]) +
               coup8 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                        8 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) -
                        2 * s * (2 * (MHm[0] * MHm[0]) + (MN[0] * MN[0])))) +
          std::conj(coup9) *
              (2 * coup8 * (s - 4 * (MHm[0] * MHm[0])) * (MN[0] * MN[0]) +
               coup9 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                        8 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) -
                        2 * s * (2 * (MHm[0] * MHm[0]) + (MN[0] * MN[0])))))) /
        (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((-2 * (t - u) * std::conj(coup41) *
          (std::conj(coup8) + std::conj(coup9)) * (coup2[i1] + coup3[i1]) *
          coup40[i1] * MN[0]) /
             ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((coup41 *
          (std::conj(coup42[j1]) *
               (std::conj(coup45[j1]) *
                    (2 * coup9 * (s - t + u - 4 * (MHm[0] * MHm[0])) *
                         (MN[0] * MN[0]) +
                     coup8 *
                         (2 * t * u + (s * s) - (t * t) - (u * u) -
                          2 * t * (MN[0] * MN[0]) + 2 * u * (MN[0] * MN[0]) +
                          8 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) -
                          2 * s * (2 * (MHm[0] * MHm[0]) + (MN[0] * MN[0])))) -
                2 * (coup8 + coup9) * (t - u) * std::conj(coup44[j1]) * MC[j1] *
                    MN[0]) +
           std::conj(coup43[j1]) *
               (std::conj(coup44[j1]) *
                    (2 * coup8 * (s - t + u - 4 * (MHm[0] * MHm[0])) *
                         (MN[0] * MN[0]) +
                     coup9 *
                         (2 * t * u + (s * s) - (t * t) - (u * u) -
                          2 * t * (MN[0] * MN[0]) + 2 * u * (MN[0] * MN[0]) +
                          8 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) -
                          2 * s * (2 * (MHm[0] * MHm[0]) + (MN[0] * MN[0])))) -
                2 * (coup8 + coup9) * (t - u) * std::conj(coup45[j1]) * MC[j1] *
                    MN[0]))) /
                 ((-s + (MZ * MZ)) * (t - (MC[j1] * MC[j1]))) +
             (coup41 *
              (std::conj(coup42[j1]) *
                   (std::conj(coup45[j1]) *
                        (-2 * coup8 * (s + t - u - 4 * (MHm[0] * MHm[0])) *
                             (MN[0] * MN[0]) +
                         coup9 *
                             (-(s * s) + (t * t) + (u * u) +
                              2 * u * (MN[0] * MN[0]) -
                              8 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) -
                              2 * t * (u + (MN[0] * MN[0])) +
                              2 * s *
                                  (2 * (MHm[0] * MHm[0]) + (MN[0] * MN[0])))) -
                    2 * (coup8 + coup9) * (t - u) * std::conj(coup44[j1]) *
                        MC[j1] * MN[0]) +
               std::conj(coup43[j1]) *
                   (std::conj(coup44[j1]) *
                        (-2 * coup9 * (s + t - u - 4 * (MHm[0] * MHm[0])) *
                             (MN[0] * MN[0]) +
                         coup8 *
                             (-(s * s) + (t * t) + (u * u) +
                              2 * u * (MN[0] * MN[0]) -
                              8 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) -
                              2 * t * (u + (MN[0] * MN[0])) +
                              2 * s *
                                  (2 * (MHm[0] * MHm[0]) + (MN[0] * MN[0])))) -
                    2 * (coup8 + coup9) * (t - u) * std::conj(coup45[j1]) *
                        MC[j1] * MN[0]))) /
                 ((-s + (MZ * MZ)) * (u - (MC[j1] * MC[j1]))),
         j1, 2)

    SUM2((std::conj(coup40[j1]) * coup40[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2(
        (2 * coup40[i1] *
         (std::conj(coup42[j1]) *
              (std::conj(coup44[j1]) *
                   (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                    2 * coup3[i1] * (MN[0] * MN[0])) *
                   MC[j1] +
               std::conj(coup45[j1]) *
                   (coup3[i1] *
                        (s + u - (MHm[0] * MHm[0]) - 3 * (MN[0] * MN[0])) -
                    coup2[i1] * (t - (MHm[0] * MHm[0]) + (MN[0] * MN[0]))) *
                   MN[0]) +
          std::conj(coup43[j1]) *
              (std::conj(coup45[j1]) *
                   (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                    2 * coup2[i1] * (MN[0] * MN[0])) *
                   MC[j1] +
               std::conj(coup44[j1]) *
                   (coup2[i1] *
                        (s + u - (MHm[0] * MHm[0]) - 3 * (MN[0] * MN[0])) -
                    coup3[i1] * (t - (MHm[0] * MHm[0]) + (MN[0] * MN[0]))) *
                   MN[0]))) /
                ((t - (MC[j1] * MC[j1])) * (s - (Mh[i1] * Mh[i1]))) +
            (2 * coup40[i1] *
             (std::conj(coup43[j1]) *
                  (std::conj(coup45[j1]) *
                       (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                        2 * coup2[i1] * (MN[0] * MN[0])) *
                       MC[j1] +
                   std::conj(coup44[j1]) *
                       (coup3[i1] *
                            (s + t - (MHm[0] * MHm[0]) - 3 * (MN[0] * MN[0])) -
                        coup2[i1] * (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0]))) *
                       MN[0]) +
              std::conj(coup42[j1]) *
                  (std::conj(coup44[j1]) *
                       (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                        2 * coup3[i1] * (MN[0] * MN[0])) *
                       MC[j1] +
                   std::conj(coup45[j1]) *
                       (coup2[i1] *
                            (s + t - (MHm[0] * MHm[0]) - 3 * (MN[0] * MN[0])) -
                        coup3[i1] * (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0]))) *
                       MN[0]))) /
                ((u - (MC[j1] * MC[j1])) * (s - (Mh[i1] * Mh[i1]))),
        i1, 6, j1, 2)

    SUM2(
        (std::conj(coup42[j1]) *
             (std::conj(coup44[j1]) * MC[j1] *
                  (coup42[i1] *
                       (coup44[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1] +
                        coup45[i1] *
                            (s + t - (MHm[0] * MHm[0]) - 3 * (MN[0] * MN[0])) *
                            MN[0]) -
                   coup43[i1] * MN[0] *
                       (coup44[i1] * (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) +
                        2 * coup45[i1] * MC[i1] * MN[0])) +
              std::conj(coup45[j1]) *
                  (-(coup43[i1] * MN[0] *
                     (coup45[i1] * (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                          MC[i1] +
                      2 * u * coup44[i1] * MN[0])) +
                   coup42[i1] *
                       (coup45[i1] *
                            (-(s * (MHm[0] * MHm[0])) - u * (MHm[0] * MHm[0]) +
                             (MHm[0] * MHm[0] * MHm[0] * MHm[0]) +
                             s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                             2 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                             t * (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) -
                             3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                        coup44[i1] *
                            (s + t - (MHm[0] * MHm[0]) - 3 * (MN[0] * MN[0])) *
                            MC[i1] * MN[0]))) +
         std::conj(coup43[j1]) *
             (std::conj(coup45[j1]) * MC[j1] *
                  (coup43[i1] *
                       (coup45[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1] +
                        coup44[i1] *
                            (s + t - (MHm[0] * MHm[0]) - 3 * (MN[0] * MN[0])) *
                            MN[0]) -
                   coup42[i1] * MN[0] *
                       (coup45[i1] * (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) +
                        2 * coup44[i1] * MC[i1] * MN[0])) +
              std::conj(coup44[j1]) *
                  (-(coup42[i1] * MN[0] *
                     (coup44[i1] * (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                          MC[i1] +
                      2 * u * coup45[i1] * MN[0])) +
                   coup43[i1] *
                       (coup44[i1] *
                            (-(s * (MHm[0] * MHm[0])) - u * (MHm[0] * MHm[0]) +
                             (MHm[0] * MHm[0] * MHm[0] * MHm[0]) +
                             s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                             2 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                             t * (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) -
                             3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                        coup45[i1] *
                            (s + t - (MHm[0] * MHm[0]) - 3 * (MN[0] * MN[0])) *
                            MC[i1] * MN[0])))) /
                ((u - (MC[i1] * MC[i1])) * (u - (MC[j1] * MC[j1]))) +
            (std::conj(coup42[j1]) *
                 (std::conj(coup44[j1]) * MC[j1] *
                      (coup42[i1] *
                           (coup44[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1] -
                            coup45[i1] *
                                (t - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                                MN[0]) +
                       coup43[i1] * MN[0] *
                           (coup44[i1] * (s + u - (MHm[0] * MHm[0]) -
                                          3 * (MN[0] * MN[0])) -
                            2 * coup45[i1] * MC[i1] * MN[0])) +
                  std::conj(coup45[j1]) *
                      (coup43[i1] * MN[0] *
                           (coup45[i1] *
                                (s + u - (MHm[0] * MHm[0]) -
                                 3 * (MN[0] * MN[0])) *
                                MC[i1] -
                            2 * t * coup44[i1] * MN[0]) +
                       coup42[i1] *
                           (coup45[i1] *
                                (t * (u - (MHm[0] * MHm[0]) - (MN[0] * MN[0])) -
                                 (s + u - (MHm[0] * MHm[0]) -
                                  3 * (MN[0] * MN[0])) *
                                     ((MHm[0] * MHm[0]) - (MN[0] * MN[0]))) -
                            coup44[i1] *
                                (t - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                                MC[i1] * MN[0]))) +
             std::conj(coup43[j1]) *
                 (std::conj(coup45[j1]) * MC[j1] *
                      (coup43[i1] *
                           (coup45[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1] -
                            coup44[i1] *
                                (t - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                                MN[0]) +
                       coup42[i1] * MN[0] *
                           (coup45[i1] * (s + u - (MHm[0] * MHm[0]) -
                                          3 * (MN[0] * MN[0])) -
                            2 * coup44[i1] * MC[i1] * MN[0])) +
                  std::conj(coup44[j1]) *
                      (coup42[i1] * MN[0] *
                           (coup44[i1] *
                                (s + u - (MHm[0] * MHm[0]) -
                                 3 * (MN[0] * MN[0])) *
                                MC[i1] -
                            2 * t * coup45[i1] * MN[0]) +
                       coup43[i1] *
                           (coup44[i1] *
                                (t * (u - (MHm[0] * MHm[0]) - (MN[0] * MN[0])) -
                                 (s + u - (MHm[0] * MHm[0]) -
                                  3 * (MN[0] * MN[0])) *
                                     ((MHm[0] * MHm[0]) - (MN[0] * MN[0]))) -
                            coup45[i1] *
                                (t - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                                MC[i1] * MN[0])))) /
                ((t - (MC[i1] * MC[i1])) * (t - (MC[j1] * MC[j1]))) +
            (-(std::conj(coup43[j1]) *
               (2 * std::conj(coup45[j1]) * MC[j1] *
                    (coup43[i1] *
                         (-(coup45[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1]) +
                          coup44[i1] *
                              (t - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                              MN[0]) +
                     coup42[i1] * MN[0] *
                         (-(coup45[i1] *
                            (s + u - (MHm[0] * MHm[0]) - 3 * (MN[0] * MN[0]))) +
                          2 * coup44[i1] * MC[i1] * MN[0])) +
                std::conj(coup44[j1]) *
                    (2 * coup43[i1] * MN[0] *
                         (-(coup45[i1] *
                            (s + t - (MHm[0] * MHm[0]) - 3 * (MN[0] * MN[0])) *
                            MC[i1]) +
                          coup44[i1] * (s + t + u - 4 * (MHm[0] * MHm[0])) *
                              MN[0]) +
                     coup42[i1] *
                         (coup45[i1] *
                              ((s * s) - (t * t) - (u * u) +
                               2 * t * (MHm[0] * MHm[0]) +
                               2 * u * (MHm[0] * MHm[0]) -
                               2 * (MHm[0] * MHm[0] * MHm[0] * MHm[0]) +
                               4 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) -
                               2 * s *
                                   ((MHm[0] * MHm[0]) + 2 * (MN[0] * MN[0])) +
                               6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                          2 * coup44[i1] *
                              (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                              MC[i1] * MN[0])))) -
             std::conj(coup42[j1]) *
                 (2 * std::conj(coup44[j1]) * MC[j1] *
                      (coup42[i1] *
                           (-(coup44[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1]) +
                            coup45[i1] *
                                (t - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                                MN[0]) +
                       coup43[i1] * MN[0] *
                           (-(coup44[i1] * (s + u - (MHm[0] * MHm[0]) -
                                            3 * (MN[0] * MN[0]))) +
                            2 * coup45[i1] * MC[i1] * MN[0])) +
                  std::conj(coup45[j1]) *
                      (2 * coup42[i1] * MN[0] *
                           (-(coup44[i1] *
                              (s + t - (MHm[0] * MHm[0]) -
                               3 * (MN[0] * MN[0])) *
                              MC[i1]) +
                            coup45[i1] * (s + t + u - 4 * (MHm[0] * MHm[0])) *
                                MN[0]) +
                       coup43[i1] *
                           (coup44[i1] *
                                ((s * s) - (t * t) - (u * u) +
                                 2 * t * (MHm[0] * MHm[0]) +
                                 2 * u * (MHm[0] * MHm[0]) -
                                 2 * (MHm[0] * MHm[0] * MHm[0] * MHm[0]) +
                                 4 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) -
                                 2 * s *
                                     ((MHm[0] * MHm[0]) + 2 * (MN[0] * MN[0])) +
                                 6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup45[i1] *
                                (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                                MC[i1] * MN[0])))) /
                ((t - (MC[i1] * MC[i1])) * (u - (MC[j1] * MC[j1]))),
        j1, 2, i1, 2)

    return res.real();
}
double DT::N1N1Hpm1Hpm2(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (MHm[0] * MHm[0]) + (MHm[1] * MHm[1]) +
         cos_t *
             sqrt(s +
                  (((MHm[0] * MHm[0]) - (MHm[1] * MHm[1])) *
                   ((MHm[0] * MHm[0]) - (MHm[1] * MHm[1]))) /
                      s -
                  2 * ((MHm[0] * MHm[0]) + (MHm[1] * MHm[1]))) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (MHm[0] * MHm[0]) + (MHm[1] * MHm[1]) + 2 * (MN[0] * MN[0]);
    res +=
        (coup47 * std::conj(coup47) *
         (std::conj(coup8) *
              (2 * coup9 * (s - 2 * ((MHm[0] * MHm[0]) + (MHm[1] * MHm[1]))) *
                   (MN[0] * MN[0]) +
               coup8 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                        (MHm[0] * MHm[0] * MHm[0] * MHm[0]) -
                        2 * (MHm[0] * MHm[0]) * (MHm[1] * MHm[1]) +
                        (MHm[1] * MHm[1] * MHm[1] * MHm[1]) +
                        4 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                        4 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                        2 * s *
                            ((MHm[0] * MHm[0]) + (MHm[1] * MHm[1]) +
                             (MN[0] * MN[0])))) +
          std::conj(coup9) *
              (2 * coup8 * (s - 2 * ((MHm[0] * MHm[0]) + (MHm[1] * MHm[1]))) *
                   (MN[0] * MN[0]) +
               coup9 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                        (MHm[0] * MHm[0] * MHm[0] * MHm[0]) -
                        2 * (MHm[0] * MHm[0]) * (MHm[1] * MHm[1]) +
                        (MHm[1] * MHm[1] * MHm[1] * MHm[1]) +
                        4 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                        4 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                        2 * s *
                            ((MHm[0] * MHm[0]) + (MHm[1] * MHm[1]) +
                             (MN[0] * MN[0])))))) /
        (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((-2 * std::conj(coup47) * coup46[i1] *
          (std::conj(coup9) *
               (coup3[i1] * (t - u + (MHm[0] * MHm[0]) - (MHm[1] * MHm[1])) +
                coup2[i1] * (t - u - (MHm[0] * MHm[0]) + (MHm[1] * MHm[1]))) +
           std::conj(coup8) *
               (coup2[i1] * (t - u + (MHm[0] * MHm[0]) - (MHm[1] * MHm[1])) +
                coup3[i1] * (t - u - (MHm[0] * MHm[0]) + (MHm[1] * MHm[1])))) *
          MN[0]) /
             ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((coup47 *
          (std::conj(coup45[j1]) *
               (std::conj(coup48[j1]) *
                    (-2 * coup8 *
                         (s + t - u - 2 * (MHm[0] * MHm[0]) -
                          2 * (MHm[1] * MHm[1])) *
                         (MN[0] * MN[0]) +
                     coup9 *
                         (-(s * s) + (t * t) + (u * u) + u * (MHm[0] * MHm[0]) -
                          2 * (MHm[0] * MHm[0] * MHm[0] * MHm[0]) -
                          u * (MHm[1] * MHm[1]) +
                          2 * (MHm[0] * MHm[0]) * (MHm[1] * MHm[1]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) -
                          2 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                          t * (2 * u - (MHm[0] * MHm[0]) + (MHm[1] * MHm[1]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (MHm[0] * MHm[0]) + (MHm[1] * MHm[1]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup49[j1]) *
                    (coup9 * (t - u + (MHm[0] * MHm[0]) - (MHm[1] * MHm[1])) +
                     coup8 * (t - u - (MHm[0] * MHm[0]) + (MHm[1] * MHm[1]))) *
                    MC[j1] * MN[0]) +
           std::conj(coup44[j1]) *
               (std::conj(coup49[j1]) *
                    (-2 * coup9 *
                         (s + t - u - 2 * (MHm[0] * MHm[0]) -
                          2 * (MHm[1] * MHm[1])) *
                         (MN[0] * MN[0]) +
                     coup8 *
                         (-(s * s) + (t * t) + (u * u) + u * (MHm[0] * MHm[0]) -
                          2 * (MHm[0] * MHm[0] * MHm[0] * MHm[0]) -
                          u * (MHm[1] * MHm[1]) +
                          2 * (MHm[0] * MHm[0]) * (MHm[1] * MHm[1]) +
                          2 * u * (MN[0] * MN[0]) -
                          6 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) -
                          2 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                          t * (2 * u - (MHm[0] * MHm[0]) + (MHm[1] * MHm[1]) +
                               2 * (MN[0] * MN[0])) +
                          s * (3 * (MHm[0] * MHm[0]) + (MHm[1] * MHm[1]) +
                               2 * (MN[0] * MN[0])))) -
                2 * std::conj(coup48[j1]) *
                    (coup8 * (t - u + (MHm[0] * MHm[0]) - (MHm[1] * MHm[1])) +
                     coup9 * (t - u - (MHm[0] * MHm[0]) + (MHm[1] * MHm[1]))) *
                    MC[j1] * MN[0]))) /
                 ((-s + (MZ * MZ)) * (u - (MC[j1] * MC[j1]))) +
             (coup47 *
              (std::conj(coup45[j1]) *
                   (std::conj(coup48[j1]) *
                        (2 * coup9 *
                             (s - t + u - 2 * (MHm[0] * MHm[0]) -
                              2 * (MHm[1] * MHm[1])) *
                             (MN[0] * MN[0]) +
                         coup8 *
                             ((s * s) - (t * t) - (u * u) +
                              u * (MHm[0] * MHm[0]) - u * (MHm[1] * MHm[1]) -
                              2 * (MHm[0] * MHm[0]) * (MHm[1] * MHm[1]) +
                              2 * (MHm[1] * MHm[1] * MHm[1] * MHm[1]) +
                              t * (2 * u + (MHm[0] * MHm[0]) -
                                   (MHm[1] * MHm[1]) - 2 * (MN[0] * MN[0])) +
                              2 * u * (MN[0] * MN[0]) +
                              2 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                              6 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                              s * ((MHm[0] * MHm[0]) + 3 * (MHm[1] * MHm[1]) +
                                   2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup49[j1]) *
                        (coup9 *
                             (t - u + (MHm[0] * MHm[0]) - (MHm[1] * MHm[1])) +
                         coup8 *
                             (t - u - (MHm[0] * MHm[0]) + (MHm[1] * MHm[1]))) *
                        MC[j1] * MN[0]) +
               std::conj(coup44[j1]) *
                   (std::conj(coup49[j1]) *
                        (2 * coup8 *
                             (s - t + u - 2 * (MHm[0] * MHm[0]) -
                              2 * (MHm[1] * MHm[1])) *
                             (MN[0] * MN[0]) +
                         coup9 *
                             ((s * s) - (t * t) - (u * u) +
                              u * (MHm[0] * MHm[0]) - u * (MHm[1] * MHm[1]) -
                              2 * (MHm[0] * MHm[0]) * (MHm[1] * MHm[1]) +
                              2 * (MHm[1] * MHm[1] * MHm[1] * MHm[1]) +
                              t * (2 * u + (MHm[0] * MHm[0]) -
                                   (MHm[1] * MHm[1]) - 2 * (MN[0] * MN[0])) +
                              2 * u * (MN[0] * MN[0]) +
                              2 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                              6 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                              s * ((MHm[0] * MHm[0]) + 3 * (MHm[1] * MHm[1]) +
                                   2 * (MN[0] * MN[0])))) -
                    2 * std::conj(coup48[j1]) *
                        (coup8 *
                             (t - u + (MHm[0] * MHm[0]) - (MHm[1] * MHm[1])) +
                         coup9 *
                             (t - u - (MHm[0] * MHm[0]) + (MHm[1] * MHm[1]))) *
                        MC[j1] * MN[0]))) /
                 ((-s + (MZ * MZ)) * (t - (MC[j1] * MC[j1]))),
         j1, 2)

    SUM2((std::conj(coup46[j1]) * coup46[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2(
        (2 * coup46[i1] *
         (std::conj(coup44[j1]) *
              (std::conj(coup48[j1]) *
                   (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                    2 * coup3[i1] * (MN[0] * MN[0])) *
                   MC[j1] +
               std::conj(coup49[j1]) *
                   (coup3[i1] *
                        (s + t - (MHm[0] * MHm[0]) - 3 * (MN[0] * MN[0])) -
                    coup2[i1] * (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0]))) *
                   MN[0]) +
          std::conj(coup45[j1]) *
              (std::conj(coup49[j1]) *
                   (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                    2 * coup2[i1] * (MN[0] * MN[0])) *
                   MC[j1] +
               std::conj(coup48[j1]) *
                   (coup2[i1] *
                        (s + t - (MHm[0] * MHm[0]) - 3 * (MN[0] * MN[0])) -
                    coup3[i1] * (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0]))) *
                   MN[0]))) /
                ((u - (MC[j1] * MC[j1])) * (s - (Mh[i1] * Mh[i1]))) +
            (2 * coup46[i1] *
             (std::conj(coup45[j1]) *
                  (std::conj(coup49[j1]) *
                       (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                        2 * coup2[i1] * (MN[0] * MN[0])) *
                       MC[j1] +
                   std::conj(coup48[j1]) *
                       (coup3[i1] *
                            (s + u - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) -
                        coup2[i1] * (t - (MHm[1] * MHm[1]) + (MN[0] * MN[0]))) *
                       MN[0]) +
              std::conj(coup44[j1]) *
                  (std::conj(coup48[j1]) *
                       (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                        2 * coup3[i1] * (MN[0] * MN[0])) *
                       MC[j1] +
                   std::conj(coup49[j1]) *
                       (coup2[i1] *
                            (s + u - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) -
                        coup3[i1] * (t - (MHm[1] * MHm[1]) + (MN[0] * MN[0]))) *
                       MN[0]))) /
                ((t - (MC[j1] * MC[j1])) * (s - (Mh[i1] * Mh[i1]))),
        i1, 6, j1, 2)

    SUM2(
        (std::conj(coup44[j1]) *
             (std::conj(coup48[j1]) * MC[j1] *
                  (coup44[i1] *
                       (coup48[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1] +
                        coup49[i1] *
                            (s + u - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) *
                            MN[0]) -
                   coup45[i1] * MN[0] *
                       (coup48[i1] * (t - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) +
                        2 * coup49[i1] * MC[i1] * MN[0])) +
              std::conj(coup49[j1]) *
                  (-(coup45[i1] * MN[0] *
                     (coup49[i1] * (t - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) *
                          MC[i1] +
                      2 * t * coup48[i1] * MN[0])) +
                   coup44[i1] *
                       (coup49[i1] *
                            (t * (u - (MHm[1] * MHm[1]) - (MN[0] * MN[0])) -
                             (s + u - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) *
                                 ((MHm[1] * MHm[1]) - (MN[0] * MN[0]))) +
                        coup48[i1] *
                            (s + u - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) *
                            MC[i1] * MN[0]))) +
         std::conj(coup45[j1]) *
             (std::conj(coup49[j1]) * MC[j1] *
                  (coup45[i1] *
                       (coup49[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1] +
                        coup48[i1] *
                            (s + u - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) *
                            MN[0]) -
                   coup44[i1] * MN[0] *
                       (coup49[i1] * (t - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) +
                        2 * coup48[i1] * MC[i1] * MN[0])) +
              std::conj(coup48[j1]) *
                  (-(coup44[i1] * MN[0] *
                     (coup48[i1] * (t - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) *
                          MC[i1] +
                      2 * t * coup49[i1] * MN[0])) +
                   coup45[i1] *
                       (coup48[i1] *
                            (t * (u - (MHm[1] * MHm[1]) - (MN[0] * MN[0])) -
                             (s + u - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) *
                                 ((MHm[1] * MHm[1]) - (MN[0] * MN[0]))) +
                        coup49[i1] *
                            (s + u - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) *
                            MC[i1] * MN[0])))) /
                ((t - (MC[i1] * MC[i1])) * (t - (MC[j1] * MC[j1]))) +
            (std::conj(coup44[j1]) *
                 (std::conj(coup48[j1]) * MC[j1] *
                      (coup44[i1] *
                           (coup48[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1] -
                            coup49[i1] *
                                (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                                MN[0]) +
                       coup45[i1] * MN[0] *
                           (coup48[i1] * (s + t - (MHm[0] * MHm[0]) -
                                          3 * (MN[0] * MN[0])) -
                            2 * coup49[i1] * MC[i1] * MN[0])) +
                  std::conj(coup49[j1]) *
                      (coup45[i1] * MN[0] *
                           (coup49[i1] *
                                (s + t - (MHm[0] * MHm[0]) -
                                 3 * (MN[0] * MN[0])) *
                                MC[i1] -
                            2 * u * coup48[i1] * MN[0]) +
                       coup44[i1] *
                           (coup49[i1] *
                                (-(s * (MHm[0] * MHm[0])) -
                                 u * (MHm[0] * MHm[0]) +
                                 (MHm[0] * MHm[0] * MHm[0] * MHm[0]) +
                                 s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                                 2 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                                 t * (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) -
                                 3 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                            coup48[i1] *
                                (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                                MC[i1] * MN[0]))) +
             std::conj(coup45[j1]) *
                 (std::conj(coup49[j1]) * MC[j1] *
                      (coup45[i1] *
                           (coup49[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1] -
                            coup48[i1] *
                                (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                                MN[0]) +
                       coup44[i1] * MN[0] *
                           (coup49[i1] * (s + t - (MHm[0] * MHm[0]) -
                                          3 * (MN[0] * MN[0])) -
                            2 * coup48[i1] * MC[i1] * MN[0])) +
                  std::conj(coup48[j1]) *
                      (coup44[i1] * MN[0] *
                           (coup48[i1] *
                                (s + t - (MHm[0] * MHm[0]) -
                                 3 * (MN[0] * MN[0])) *
                                MC[i1] -
                            2 * u * coup49[i1] * MN[0]) +
                       coup45[i1] *
                           (coup48[i1] *
                                (-(s * (MHm[0] * MHm[0])) -
                                 u * (MHm[0] * MHm[0]) +
                                 (MHm[0] * MHm[0] * MHm[0] * MHm[0]) +
                                 s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                                 2 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                                 t * (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) -
                                 3 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                            coup49[i1] *
                                (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                                MC[i1] * MN[0])))) /
                ((u - (MC[i1] * MC[i1])) * (u - (MC[j1] * MC[j1]))) +
            (-(std::conj(coup45[j1]) *
               (2 * std::conj(coup49[j1]) * MC[j1] *
                    (-(coup45[i1] *
                       (coup49[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1] +
                        coup48[i1] *
                            (s + u - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) *
                            MN[0])) +
                     coup44[i1] * MN[0] *
                         (coup49[i1] *
                              (t - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) +
                          2 * coup48[i1] * MC[i1] * MN[0])) +
                std::conj(coup48[j1]) *
                    (2 * coup45[i1] * MN[0] *
                         (coup49[i1] *
                              (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                              MC[i1] +
                          coup48[i1] *
                              (s + t + u - 2 * (MHm[0] * MHm[0]) -
                               2 * (MHm[1] * MHm[1])) *
                              MN[0]) +
                     coup44[i1] *
                         (coup49[i1] *
                              ((s * s) - (t * t) - (u * u) +
                               u * (MHm[0] * MHm[0]) + u * (MHm[1] * MHm[1]) -
                               2 * (MHm[0] * MHm[0]) * (MHm[1] * MHm[1]) +
                               t * ((MHm[0] * MHm[0]) + (MHm[1] * MHm[1])) +
                               2 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                               2 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                               s * ((MHm[0] * MHm[0]) + (MHm[1] * MHm[1]) +
                                    4 * (MN[0] * MN[0])) +
                               6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                          2 * coup48[i1] *
                              (-s - t + (MHm[0] * MHm[0]) +
                               3 * (MN[0] * MN[0])) *
                              MC[i1] * MN[0])))) -
             std::conj(coup44[j1]) *
                 (2 * std::conj(coup48[j1]) * MC[j1] *
                      (-(coup44[i1] *
                         (coup48[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1] +
                          coup49[i1] *
                              (s + u - (MHm[1] * MHm[1]) -
                               3 * (MN[0] * MN[0])) *
                              MN[0])) +
                       coup45[i1] * MN[0] *
                           (coup48[i1] *
                                (t - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) +
                            2 * coup49[i1] * MC[i1] * MN[0])) +
                  std::conj(coup49[j1]) *
                      (2 * coup44[i1] * MN[0] *
                           (coup48[i1] *
                                (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                                MC[i1] +
                            coup49[i1] *
                                (s + t + u - 2 * (MHm[0] * MHm[0]) -
                                 2 * (MHm[1] * MHm[1])) *
                                MN[0]) +
                       coup45[i1] *
                           (coup48[i1] *
                                ((s * s) - (t * t) - (u * u) +
                                 u * (MHm[0] * MHm[0]) + u * (MHm[1] * MHm[1]) -
                                 2 * (MHm[0] * MHm[0]) * (MHm[1] * MHm[1]) +
                                 t * ((MHm[0] * MHm[0]) + (MHm[1] * MHm[1])) +
                                 2 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                                 2 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                                 s * ((MHm[0] * MHm[0]) + (MHm[1] * MHm[1]) +
                                      4 * (MN[0] * MN[0])) +
                                 6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup49[i1] *
                                (-s - t + (MHm[0] * MHm[0]) +
                                 3 * (MN[0] * MN[0])) *
                                MC[i1] * MN[0])))) /
                ((t - (MC[i1] * MC[i1])) * (u - (MC[j1] * MC[j1]))),
        j1, 2, i1, 2)

    return res.real();
}
double DT::N1N1Hpm2Hpm2(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t = -0.5 * s + (MHm[1] * MHm[1]) +
                             (cos_t * sqrt(s - 4 * (MHm[1] * MHm[1])) *
                              sqrt(s - 4 * (MN[0] * MN[0]))) /
                                 2. +
                             (MN[0] * MN[0]);
    std::complex<double> u =
        -s - t + 2 * (MHm[1] * MHm[1]) + 2 * (MN[0] * MN[0]);
    res +=
        (coup51 * std::conj(coup51) *
         (std::conj(coup8) *
              (2 * coup9 * (s - 4 * (MHm[1] * MHm[1])) * (MN[0] * MN[0]) +
               coup8 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                        8 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                        2 * s * (2 * (MHm[1] * MHm[1]) + (MN[0] * MN[0])))) +
          std::conj(coup9) *
              (2 * coup8 * (s - 4 * (MHm[1] * MHm[1])) * (MN[0] * MN[0]) +
               coup9 * (2 * t * u + (s * s) - (t * t) - (u * u) +
                        8 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                        2 * s * (2 * (MHm[1] * MHm[1]) + (MN[0] * MN[0])))))) /
        (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((-2 * (t - u) * std::conj(coup51) *
          (std::conj(coup8) + std::conj(coup9)) * (coup2[i1] + coup3[i1]) *
          coup50[i1] * MN[0]) /
             ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((coup51 *
          (std::conj(coup48[j1]) *
               (std::conj(coup53[j1]) *
                    (2 * coup9 * (s - t + u - 4 * (MHm[1] * MHm[1])) *
                         (MN[0] * MN[0]) +
                     coup8 *
                         (2 * t * u + (s * s) - (t * t) - (u * u) -
                          2 * t * (MN[0] * MN[0]) + 2 * u * (MN[0] * MN[0]) +
                          8 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                          2 * s * (2 * (MHm[1] * MHm[1]) + (MN[0] * MN[0])))) -
                2 * (coup8 + coup9) * (t - u) * std::conj(coup52[j1]) * MC[j1] *
                    MN[0]) +
           std::conj(coup49[j1]) *
               (std::conj(coup52[j1]) *
                    (2 * coup8 * (s - t + u - 4 * (MHm[1] * MHm[1])) *
                         (MN[0] * MN[0]) +
                     coup9 *
                         (2 * t * u + (s * s) - (t * t) - (u * u) -
                          2 * t * (MN[0] * MN[0]) + 2 * u * (MN[0] * MN[0]) +
                          8 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                          2 * s * (2 * (MHm[1] * MHm[1]) + (MN[0] * MN[0])))) -
                2 * (coup8 + coup9) * (t - u) * std::conj(coup53[j1]) * MC[j1] *
                    MN[0]))) /
                 ((-s + (MZ * MZ)) * (t - (MC[j1] * MC[j1]))) +
             (coup51 *
              (std::conj(coup48[j1]) *
                   (std::conj(coup53[j1]) *
                        (-2 * coup8 * (s + t - u - 4 * (MHm[1] * MHm[1])) *
                             (MN[0] * MN[0]) +
                         coup9 *
                             (-(s * s) + (t * t) + (u * u) +
                              2 * u * (MN[0] * MN[0]) -
                              8 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                              2 * t * (u + (MN[0] * MN[0])) +
                              2 * s *
                                  (2 * (MHm[1] * MHm[1]) + (MN[0] * MN[0])))) -
                    2 * (coup8 + coup9) * (t - u) * std::conj(coup52[j1]) *
                        MC[j1] * MN[0]) +
               std::conj(coup49[j1]) *
                   (std::conj(coup52[j1]) *
                        (-2 * coup9 * (s + t - u - 4 * (MHm[1] * MHm[1])) *
                             (MN[0] * MN[0]) +
                         coup8 *
                             (-(s * s) + (t * t) + (u * u) +
                              2 * u * (MN[0] * MN[0]) -
                              8 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                              2 * t * (u + (MN[0] * MN[0])) +
                              2 * s *
                                  (2 * (MHm[1] * MHm[1]) + (MN[0] * MN[0])))) -
                    2 * (coup8 + coup9) * (t - u) * std::conj(coup53[j1]) *
                        MC[j1] * MN[0]))) /
                 ((-s + (MZ * MZ)) * (u - (MC[j1] * MC[j1]))),
         j1, 2)

    SUM2((std::conj(coup50[j1]) * coup50[i1] *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2(
        (2 * coup50[i1] *
         (std::conj(coup48[j1]) *
              (std::conj(coup52[j1]) *
                   (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                    2 * coup3[i1] * (MN[0] * MN[0])) *
                   MC[j1] +
               std::conj(coup53[j1]) *
                   (coup3[i1] *
                        (s + u - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) -
                    coup2[i1] * (t - (MHm[1] * MHm[1]) + (MN[0] * MN[0]))) *
                   MN[0]) +
          std::conj(coup49[j1]) *
              (std::conj(coup53[j1]) *
                   (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                    2 * coup2[i1] * (MN[0] * MN[0])) *
                   MC[j1] +
               std::conj(coup52[j1]) *
                   (coup2[i1] *
                        (s + u - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) -
                    coup3[i1] * (t - (MHm[1] * MHm[1]) + (MN[0] * MN[0]))) *
                   MN[0]))) /
                ((t - (MC[j1] * MC[j1])) * (s - (Mh[i1] * Mh[i1]))) +
            (2 * coup50[i1] *
             (std::conj(coup49[j1]) *
                  (std::conj(coup53[j1]) *
                       (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                        2 * coup2[i1] * (MN[0] * MN[0])) *
                       MC[j1] +
                   std::conj(coup52[j1]) *
                       (coup3[i1] *
                            (s + t - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) -
                        coup2[i1] * (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0]))) *
                       MN[0]) +
              std::conj(coup48[j1]) *
                  (std::conj(coup52[j1]) *
                       (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                        2 * coup3[i1] * (MN[0] * MN[0])) *
                       MC[j1] +
                   std::conj(coup53[j1]) *
                       (coup2[i1] *
                            (s + t - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) -
                        coup3[i1] * (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0]))) *
                       MN[0]))) /
                ((u - (MC[j1] * MC[j1])) * (s - (Mh[i1] * Mh[i1]))),
        i1, 6, j1, 2)

    SUM2(
        (std::conj(coup48[j1]) *
             (std::conj(coup52[j1]) * MC[j1] *
                  (coup48[i1] *
                       (coup52[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1] +
                        coup53[i1] *
                            (s + t - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) *
                            MN[0]) -
                   coup49[i1] * MN[0] *
                       (coup52[i1] * (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) +
                        2 * coup53[i1] * MC[i1] * MN[0])) +
              std::conj(coup53[j1]) *
                  (-(coup49[i1] * MN[0] *
                     (coup53[i1] * (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) *
                          MC[i1] +
                      2 * u * coup52[i1] * MN[0])) +
                   coup48[i1] *
                       (coup53[i1] *
                            (-(s * (MHm[1] * MHm[1])) - u * (MHm[1] * MHm[1]) +
                             (MHm[1] * MHm[1] * MHm[1] * MHm[1]) +
                             s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                             2 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) +
                             t * (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) -
                             3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                        coup52[i1] *
                            (s + t - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) *
                            MC[i1] * MN[0]))) +
         std::conj(coup49[j1]) *
             (std::conj(coup53[j1]) * MC[j1] *
                  (coup49[i1] *
                       (coup53[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1] +
                        coup52[i1] *
                            (s + t - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) *
                            MN[0]) -
                   coup48[i1] * MN[0] *
                       (coup53[i1] * (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) +
                        2 * coup52[i1] * MC[i1] * MN[0])) +
              std::conj(coup52[j1]) *
                  (-(coup48[i1] * MN[0] *
                     (coup52[i1] * (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) *
                          MC[i1] +
                      2 * u * coup53[i1] * MN[0])) +
                   coup49[i1] *
                       (coup52[i1] *
                            (-(s * (MHm[1] * MHm[1])) - u * (MHm[1] * MHm[1]) +
                             (MHm[1] * MHm[1] * MHm[1] * MHm[1]) +
                             s * (MN[0] * MN[0]) - u * (MN[0] * MN[0]) +
                             2 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) +
                             t * (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) -
                             3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                        coup53[i1] *
                            (s + t - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) *
                            MC[i1] * MN[0])))) /
                ((u - (MC[i1] * MC[i1])) * (u - (MC[j1] * MC[j1]))) +
            (std::conj(coup48[j1]) *
                 (std::conj(coup52[j1]) * MC[j1] *
                      (coup48[i1] *
                           (coup52[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1] -
                            coup53[i1] *
                                (t - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) *
                                MN[0]) +
                       coup49[i1] * MN[0] *
                           (coup52[i1] * (s + u - (MHm[1] * MHm[1]) -
                                          3 * (MN[0] * MN[0])) -
                            2 * coup53[i1] * MC[i1] * MN[0])) +
                  std::conj(coup53[j1]) *
                      (coup49[i1] * MN[0] *
                           (coup53[i1] *
                                (s + u - (MHm[1] * MHm[1]) -
                                 3 * (MN[0] * MN[0])) *
                                MC[i1] -
                            2 * t * coup52[i1] * MN[0]) +
                       coup48[i1] *
                           (coup53[i1] *
                                (t * (u - (MHm[1] * MHm[1]) - (MN[0] * MN[0])) -
                                 (s + u - (MHm[1] * MHm[1]) -
                                  3 * (MN[0] * MN[0])) *
                                     ((MHm[1] * MHm[1]) - (MN[0] * MN[0]))) -
                            coup52[i1] *
                                (t - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) *
                                MC[i1] * MN[0]))) +
             std::conj(coup49[j1]) *
                 (std::conj(coup53[j1]) * MC[j1] *
                      (coup49[i1] *
                           (coup53[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1] -
                            coup52[i1] *
                                (t - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) *
                                MN[0]) +
                       coup48[i1] * MN[0] *
                           (coup53[i1] * (s + u - (MHm[1] * MHm[1]) -
                                          3 * (MN[0] * MN[0])) -
                            2 * coup52[i1] * MC[i1] * MN[0])) +
                  std::conj(coup52[j1]) *
                      (coup48[i1] * MN[0] *
                           (coup52[i1] *
                                (s + u - (MHm[1] * MHm[1]) -
                                 3 * (MN[0] * MN[0])) *
                                MC[i1] -
                            2 * t * coup53[i1] * MN[0]) +
                       coup49[i1] *
                           (coup52[i1] *
                                (t * (u - (MHm[1] * MHm[1]) - (MN[0] * MN[0])) -
                                 (s + u - (MHm[1] * MHm[1]) -
                                  3 * (MN[0] * MN[0])) *
                                     ((MHm[1] * MHm[1]) - (MN[0] * MN[0]))) -
                            coup53[i1] *
                                (t - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) *
                                MC[i1] * MN[0])))) /
                ((t - (MC[i1] * MC[i1])) * (t - (MC[j1] * MC[j1]))) +
            (-(std::conj(coup49[j1]) *
               (2 * std::conj(coup53[j1]) * MC[j1] *
                    (coup49[i1] *
                         (-(coup53[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1]) +
                          coup52[i1] *
                              (t - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) *
                              MN[0]) +
                     coup48[i1] * MN[0] *
                         (-(coup53[i1] *
                            (s + u - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0]))) +
                          2 * coup52[i1] * MC[i1] * MN[0])) +
                std::conj(coup52[j1]) *
                    (2 * coup49[i1] * MN[0] *
                         (-(coup53[i1] *
                            (s + t - (MHm[1] * MHm[1]) - 3 * (MN[0] * MN[0])) *
                            MC[i1]) +
                          coup52[i1] * (s + t + u - 4 * (MHm[1] * MHm[1])) *
                              MN[0]) +
                     coup48[i1] *
                         (coup53[i1] *
                              ((s * s) - (t * t) - (u * u) +
                               2 * t * (MHm[1] * MHm[1]) +
                               2 * u * (MHm[1] * MHm[1]) -
                               2 * (MHm[1] * MHm[1] * MHm[1] * MHm[1]) +
                               4 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                               2 * s *
                                   ((MHm[1] * MHm[1]) + 2 * (MN[0] * MN[0])) +
                               6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                          2 * coup52[i1] *
                              (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) *
                              MC[i1] * MN[0])))) -
             std::conj(coup48[j1]) *
                 (2 * std::conj(coup52[j1]) * MC[j1] *
                      (coup48[i1] *
                           (-(coup52[i1] * (s - 2 * (MN[0] * MN[0])) * MC[i1]) +
                            coup53[i1] *
                                (t - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) *
                                MN[0]) +
                       coup49[i1] * MN[0] *
                           (-(coup52[i1] * (s + u - (MHm[1] * MHm[1]) -
                                            3 * (MN[0] * MN[0]))) +
                            2 * coup53[i1] * MC[i1] * MN[0])) +
                  std::conj(coup53[j1]) *
                      (2 * coup48[i1] * MN[0] *
                           (-(coup52[i1] *
                              (s + t - (MHm[1] * MHm[1]) -
                               3 * (MN[0] * MN[0])) *
                              MC[i1]) +
                            coup53[i1] * (s + t + u - 4 * (MHm[1] * MHm[1])) *
                                MN[0]) +
                       coup49[i1] *
                           (coup52[i1] *
                                ((s * s) - (t * t) - (u * u) +
                                 2 * t * (MHm[1] * MHm[1]) +
                                 2 * u * (MHm[1] * MHm[1]) -
                                 2 * (MHm[1] * MHm[1] * MHm[1] * MHm[1]) +
                                 4 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                                 2 * s *
                                     ((MHm[1] * MHm[1]) + 2 * (MN[0] * MN[0])) +
                                 6 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup53[i1] *
                                (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) *
                                MC[i1] * MN[0])))) /
                ((t - (MC[i1] * MC[i1])) * (u - (MC[j1] * MC[j1]))),
        j1, 2, i1, 2)

    return res.real();
}
double DT::N1N1h2Z(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (MZ * MZ) + (Mh[1] * Mh[1]) +
         cos_t *
             sqrt(((MZ * MZ * MZ * MZ) +
                   ((s - (Mh[1] * Mh[1])) * (s - (Mh[1] * Mh[1]))) -
                   2 * (MZ * MZ) * (s + (Mh[1] * Mh[1]))) /
                  s) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (MZ * MZ) + (Mh[1] * Mh[1]) + 2 * (MN[0] * MN[0]);
    res += (coup55 * std::conj(coup55) *
            (std::conj(coup9) *
                 (coup9 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                           (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                  6 * coup8 * (MZ * MZ) * (MN[0] * MN[0])) +
             std::conj(coup8) *
                 (coup8 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                           (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                  6 * coup9 * (MZ * MZ) * (MN[0] * MN[0])))) /
           (((MZ * MZ * MZ) - MZ * s) * ((MZ * MZ * MZ) - MZ * s));

    SUM1((2 * std::conj(coup55) * coup54[i1] *
          (std::conj(coup9) *
               (coup3[i1] * ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[1] * Mh[1]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[1] * Mh[1])) * (t - (MN[0] * MN[0]))) +
                coup2[i1] * (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[1] * Mh[1]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[1] * Mh[1])) * (u - (MN[0] * MN[0])))) +
           std::conj(coup8) *
               (coup2[i1] * ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[1] * Mh[1]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[1] * Mh[1])) * (t - (MN[0] * MN[0]))) +
                coup3[i1] * (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[1] * Mh[1]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[1] * Mh[1])) * (u - (MN[0] * MN[0]))))) *
          MN[0]) /
             ((MZ * MZ) * (-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((2 * coup55 *
          (std::conj(coup4[j1]) *
               (-(std::conj(coup57[j1]) *
                  (3 * coup9 * (MZ * MZ) *
                       (s + u - (MZ * MZ) - 3 * (MN[0] * MN[0])) +
                   coup8 * (-2 * (MZ * MZ * MZ * MZ) +
                            ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                            (MZ * MZ) * (t + (MN[0] * MN[0])))) *
                  MN[0]) +
                std::conj(coup56[j1]) *
                    (coup9 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                     6 * coup8 * (MZ * MZ) * (MN[0] * MN[0])) *
                    MN[j1]) +
           std::conj(coup5[j1]) *
               (-(std::conj(coup56[j1]) *
                  (-3 * coup8 * (MZ * MZ) *
                       (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) +
                   coup9 * (-2 * (MZ * MZ * MZ * MZ) +
                            ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                            (MZ * MZ) * (t + (MN[0] * MN[0])))) *
                  MN[0]) +
                std::conj(coup57[j1]) *
                    (coup8 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                     6 * coup9 * (MZ * MZ) * (MN[0] * MN[0])) *
                    MN[j1]))) /
                 ((MZ * MZ) * (-s + (MZ * MZ)) * (t - (MN[j1] * MN[j1]))) +
             (2 * coup55 *
              (std::conj(coup5[j1]) *
                   (std::conj(coup58[j1]) *
                        (coup8 *
                             (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                              (u - (MN[0] * MN[0])) *
                                  (s + t - (Mh[1] * Mh[1]) - (MN[0] * MN[0]))) +
                         3 * coup9 * (MZ * MZ) *
                             (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup59[j1]) *
                        (coup9 *
                             ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                         6 * coup8 * (MZ * MZ) * (MN[0] * MN[0])) *
                        MN[j1]) +
               std::conj(coup4[j1]) *
                   (std::conj(coup59[j1]) *
                        (coup9 *
                             (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                              (u - (MN[0] * MN[0])) *
                                  (s + t - (Mh[1] * Mh[1]) - (MN[0] * MN[0]))) +
                         3 * coup8 * (MZ * MZ) *
                             (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup58[j1]) *
                        (coup8 *
                             ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                         6 * coup9 * (MZ * MZ) * (MN[0] * MN[0])) *
                        MN[j1]))) /
                 ((MZ * MZ) * (-s + (MZ * MZ)) * (u - (MN[j1] * MN[j1]))),
         j1, 5)

    SUM2((std::conj(coup54[j1]) * coup54[i1] *
          ((MZ * MZ * MZ * MZ) +
           ((s - (Mh[1] * Mh[1])) * (s - (Mh[1] * Mh[1]))) -
           2 * (MZ * MZ) * (s + (Mh[1] * Mh[1]))) *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((MZ * MZ) * (s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2(
        -((coup54[i1] *
           (std::conj(coup4[j1]) *
                (std::conj(coup59[j1]) *
                     (-2 * coup3[i1] * (MN[0] * MN[0]) *
                          (2 * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[1] * Mh[1])) *
                               (s + t - (Mh[1] * Mh[1]) - (MN[0] * MN[0])) +
                           (MZ * MZ) * (-3 * s - t - 2 * u + (Mh[1] * Mh[1]) +
                                        3 * (MN[0] * MN[0]))) +
                      coup2[i1] *
                          ((s - t + u) * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[1] * Mh[1])) *
                               ((s * s) - (t * t) + (u * u) -
                                u * (Mh[1] * Mh[1]) +
                                2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) -
                                s * ((Mh[1] * Mh[1]) + 2 * (MN[0] * MN[0])) +
                                t * ((Mh[1] * Mh[1]) + 2 * (MN[0] * MN[0])) -
                                2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                           (MZ * MZ) *
                               (-2 * (s * s) + (t * t) - (u * u) +
                                2 * u * (Mh[1] * Mh[1]) +
                                10 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                s * (t - u - 2 * (Mh[1] * Mh[1]) +
                                     2 * (MN[0] * MN[0])) -
                                2 * t *
                                    ((Mh[1] * Mh[1]) + 3 * (MN[0] * MN[0])) +
                                6 * (MN[0] * MN[0] * MN[0] * MN[0])))) -
                 2 * std::conj(coup58[j1]) *
                     (coup2[i1] *
                          ((MZ * MZ * MZ * MZ) -
                           (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[1] * Mh[1]) -
                                        3 * (MN[0] * MN[0])) +
                           (s - (Mh[1] * Mh[1])) * (t - (MN[0] * MN[0]))) +
                      coup3[i1] *
                          (-(MZ * MZ * MZ * MZ) +
                           (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[1] * Mh[1]) -
                                        3 * (MN[0] * MN[0])) -
                           (s - (Mh[1] * Mh[1])) * (u - (MN[0] * MN[0])))) *
                     MN[0] * MN[j1]) +
            std::conj(coup5[j1]) *
                (std::conj(coup58[j1]) *
                     (-2 * coup2[i1] * (MN[0] * MN[0]) *
                          (2 * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[1] * Mh[1])) *
                               (s + t - (Mh[1] * Mh[1]) - (MN[0] * MN[0])) +
                           (MZ * MZ) * (-3 * s - t - 2 * u + (Mh[1] * Mh[1]) +
                                        3 * (MN[0] * MN[0]))) +
                      coup3[i1] *
                          ((s - t + u) * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[1] * Mh[1])) *
                               ((s * s) - (t * t) + (u * u) -
                                u * (Mh[1] * Mh[1]) +
                                2 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) -
                                s * ((Mh[1] * Mh[1]) + 2 * (MN[0] * MN[0])) +
                                t * ((Mh[1] * Mh[1]) + 2 * (MN[0] * MN[0])) -
                                2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                           (MZ * MZ) *
                               (-2 * (s * s) + (t * t) - (u * u) +
                                2 * u * (Mh[1] * Mh[1]) +
                                10 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                s * (t - u - 2 * (Mh[1] * Mh[1]) +
                                     2 * (MN[0] * MN[0])) -
                                2 * t *
                                    ((Mh[1] * Mh[1]) + 3 * (MN[0] * MN[0])) +
                                6 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                 2 * std::conj(coup59[j1]) *
                     (coup3[i1] *
                          (-(MZ * MZ * MZ * MZ) +
                           (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[1] * Mh[1]) -
                                        3 * (MN[0] * MN[0])) -
                           (s - (Mh[1] * Mh[1])) * (t - (MN[0] * MN[0]))) +
                      coup2[i1] *
                          ((MZ * MZ * MZ * MZ) -
                           (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[1] * Mh[1]) -
                                        3 * (MN[0] * MN[0])) +
                           (s - (Mh[1] * Mh[1])) * (u - (MN[0] * MN[0])))) *
                     MN[0] * MN[j1]))) /
          ((MZ * MZ) * (s - (Mh[i1] * Mh[i1])) * (u - (MN[j1] * MN[j1])))) -
            (2 * coup54[i1] *
             (std::conj(coup4[j1]) *
                  (std::conj(coup57[j1]) *
                       (coup3[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[1] * Mh[1]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[1] * Mh[1])) * (t - (MN[0] * MN[0]))) *
                            (MN[0] * MN[0]) +
                        coup2[i1] *
                            ((MZ * MZ * MZ * MZ) *
                                 (s - t + u - 3 * (MN[0] * MN[0])) +
                             (s - (Mh[1] * Mh[1])) *
                                 (s * (t - (MN[0] * MN[0])) +
                                  (MN[0] * MN[0]) *
                                      (-2 * t - u + 3 * (MN[0] * MN[0]))) -
                             (MZ * MZ) *
                                 ((s * s) - (t * t) + (u * u) +
                                  t * (Mh[1] * Mh[1]) - u * (Mh[1] * Mh[1]) +
                                  s * (t + 2 * u - 3 * (Mh[1] * Mh[1]) -
                                       6 * (MN[0] * MN[0])) -
                                  2 * t * (MN[0] * MN[0]) -
                                  7 * u * (MN[0] * MN[0]) +
                                  9 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  9 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                   std::conj(coup56[j1]) *
                       (coup3[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[1] * Mh[1]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[1] * Mh[1])) * (t - (MN[0] * MN[0]))) +
                        coup2[i1] *
                            ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[1] * Mh[1]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[1] * Mh[1])) * (u - (MN[0] * MN[0])))) *
                       MN[0] * MN[j1]) +
              std::conj(coup5[j1]) *
                  (std::conj(coup56[j1]) *
                       (coup2[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[1] * Mh[1]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[1] * Mh[1])) * (t - (MN[0] * MN[0]))) *
                            (MN[0] * MN[0]) +
                        coup3[i1] *
                            ((MZ * MZ * MZ * MZ) *
                                 (s - t + u - 3 * (MN[0] * MN[0])) +
                             (s - (Mh[1] * Mh[1])) *
                                 (s * (t - (MN[0] * MN[0])) +
                                  (MN[0] * MN[0]) *
                                      (-2 * t - u + 3 * (MN[0] * MN[0]))) -
                             (MZ * MZ) *
                                 ((s * s) - (t * t) + (u * u) +
                                  t * (Mh[1] * Mh[1]) - u * (Mh[1] * Mh[1]) +
                                  s * (t + 2 * u - 3 * (Mh[1] * Mh[1]) -
                                       6 * (MN[0] * MN[0])) -
                                  2 * t * (MN[0] * MN[0]) -
                                  7 * u * (MN[0] * MN[0]) +
                                  9 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                  9 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                   std::conj(coup57[j1]) *
                       (coup2[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[1] * Mh[1]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[1] * Mh[1])) * (t - (MN[0] * MN[0]))) +
                        coup3[i1] *
                            ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[1] * Mh[1]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[1] * Mh[1])) * (u - (MN[0] * MN[0])))) *
                       MN[0] * MN[j1]))) /
                ((MZ * MZ) * (s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))),
        j1, 5, i1, 6)

    SUM2(
        (std::conj(coup5[j1]) *
             (std::conj(coup56[j1]) *
                  (-(coup4[i1] * MN[0] *
                     (-6 * t * coup57[i1] * (MZ * MZ) * MN[0] +
                      coup56[i1] *
                          (-2 * (MZ * MZ * MZ * MZ) +
                           ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                           (MZ * MZ) * (t + (MN[0] * MN[0]))) *
                          MN[i1])) +
                   coup5[i1] *
                       (coup56[i1] *
                            (2 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                             (MZ * MZ * MZ * MZ) *
                                 (2 * s + 2 * t + 2 * u - 5 * (MN[0] * MN[0])) +
                             (MZ * MZ) * (t * (2 * u - (MN[0] * MN[0])) +
                                          (s + u - 4 * (MN[0] * MN[0])) *
                                              (MN[0] * MN[0])) -
                             (t - (MN[0] * MN[0])) *
                                 ((2 * t + u - 3 * (MN[0] * MN[0])) *
                                      (MN[0] * MN[0]) +
                                  s * (-t + (MN[0] * MN[0])))) +
                        3 * coup57[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] *
                            MN[i1])) +
              std::conj(coup57[j1]) *
                  (coup5[i1] *
                       (3 * coup56[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] +
                        coup57[i1] *
                            ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                             (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) *
                            MN[i1]) -
                   coup4[i1] * MN[0] *
                       (coup57[i1] *
                            (-2 * (MZ * MZ * MZ * MZ) +
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                             (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                        6 * coup56[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                  MN[j1]) +
         std::conj(coup4[j1]) *
             (std::conj(coup57[j1]) *
                  (-(coup5[i1] * MN[0] *
                     (-6 * t * coup56[i1] * (MZ * MZ) * MN[0] +
                      coup57[i1] *
                          (-2 * (MZ * MZ * MZ * MZ) +
                           ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                           (MZ * MZ) * (t + (MN[0] * MN[0]))) *
                          MN[i1])) +
                   coup4[i1] *
                       (coup57[i1] *
                            (2 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                             (MZ * MZ * MZ * MZ) *
                                 (2 * s + 2 * t + 2 * u - 5 * (MN[0] * MN[0])) +
                             (MZ * MZ) * (t * (2 * u - (MN[0] * MN[0])) +
                                          (s + u - 4 * (MN[0] * MN[0])) *
                                              (MN[0] * MN[0])) -
                             (t - (MN[0] * MN[0])) *
                                 ((2 * t + u - 3 * (MN[0] * MN[0])) *
                                      (MN[0] * MN[0]) +
                                  s * (-t + (MN[0] * MN[0])))) +
                        3 * coup56[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] *
                            MN[i1])) +
              std::conj(coup56[j1]) *
                  (coup4[i1] *
                       (3 * coup57[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] +
                        coup56[i1] *
                            ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                             (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) *
                            MN[i1]) -
                   coup5[i1] * MN[0] *
                       (coup56[i1] *
                            (-2 * (MZ * MZ * MZ * MZ) +
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                             (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                        6 * coup57[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                  MN[j1])) /
                ((MZ * MZ) * (t - (MN[i1] * MN[i1])) *
                 (t - (MN[j1] * MN[j1]))) +
            (std::conj(coup4[j1]) *
                 (std::conj(coup59[j1]) *
                      (-2 * coup5[i1] * MN[0] *
                           (coup56[i1] *
                                (-4 * (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (s + t - (Mh[1] * Mh[1]) -
                                      (MN[0] * MN[0])) +
                                 (MZ * MZ) * (2 * s + u - 3 * (Mh[1] * Mh[1]) +
                                              (MN[0] * MN[0]))) *
                                MN[0] -
                            3 * coup57[i1] * (MZ * MZ) *
                                (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                                MN[i1]) +
                       coup4[i1] *
                           (coup57[i1] *
                                (-(t * t * t) + t * (u * u) +
                                 4 * (MZ * MZ * MZ * MZ) *
                                     (u - (Mh[1] * Mh[1])) -
                                 t * u * (Mh[1] * Mh[1]) +
                                 (t * t) * (Mh[1] * Mh[1]) +
                                 (s * s) * (t - (MN[0] * MN[0])) -
                                 2 * t * u * (MN[0] * MN[0]) +
                                 3 * (t * t) * (MN[0] * MN[0]) -
                                 (u * u) * (MN[0] * MN[0]) +
                                 t * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                 3 * u * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) -
                                 s * t *
                                     ((Mh[1] * Mh[1]) + 2 * (MN[0] * MN[0])) +
                                 s * (MN[0] * MN[0]) *
                                     (-2 * u + (Mh[1] * Mh[1]) +
                                      4 * (MN[0] * MN[0])) +
                                 (MZ * MZ) *
                                     (-(t * u) + (t * t) - 4 * (u * u) +
                                      4 * u * (Mh[1] * Mh[1]) +
                                      3 * t * (MN[0] * MN[0]) +
                                      13 * u * (MN[0] * MN[0]) -
                                      16 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                      s * (-t - 4 * u + 4 * (Mh[1] * Mh[1]) +
                                           (MN[0] * MN[0]))) -
                                 2 * t * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                 2 * u * (MN[0] * MN[0] * MN[0] * MN[0]) -
                                 4 * (Mh[1] * Mh[1]) *
                                     (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup56[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[1] * Mh[1]) -
                                      (MN[0] * MN[0]))) *
                                MN[0] * MN[i1])) +
                  2 * std::conj(coup58[j1]) *
                      (coup5[i1] *
                           (3 * coup56[i1] * (MZ * MZ) *
                                (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup57[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) -
                       coup4[i1] * MN[0] *
                           (coup57[i1] * (-2 * (MZ * MZ * MZ * MZ) +
                                          ((t - (MN[0] * MN[0])) *
                                           (t - (MN[0] * MN[0]))) +
                                          (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                            6 * coup56[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1]) +
             std::conj(coup5[j1]) *
                 (std::conj(coup58[j1]) *
                      (-2 * coup4[i1] * MN[0] *
                           (coup57[i1] *
                                (-4 * (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (s + t - (Mh[1] * Mh[1]) -
                                      (MN[0] * MN[0])) +
                                 (MZ * MZ) * (2 * s + u - 3 * (Mh[1] * Mh[1]) +
                                              (MN[0] * MN[0]))) *
                                MN[0] -
                            3 * coup56[i1] * (MZ * MZ) *
                                (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                                MN[i1]) +
                       coup5[i1] *
                           (coup56[i1] *
                                (-(t * t * t) + t * (u * u) +
                                 4 * (MZ * MZ * MZ * MZ) *
                                     (u - (Mh[1] * Mh[1])) -
                                 t * u * (Mh[1] * Mh[1]) +
                                 (t * t) * (Mh[1] * Mh[1]) +
                                 (s * s) * (t - (MN[0] * MN[0])) -
                                 2 * t * u * (MN[0] * MN[0]) +
                                 3 * (t * t) * (MN[0] * MN[0]) -
                                 (u * u) * (MN[0] * MN[0]) +
                                 t * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                 3 * u * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) -
                                 s * t *
                                     ((Mh[1] * Mh[1]) + 2 * (MN[0] * MN[0])) +
                                 s * (MN[0] * MN[0]) *
                                     (-2 * u + (Mh[1] * Mh[1]) +
                                      4 * (MN[0] * MN[0])) +
                                 (MZ * MZ) *
                                     (-(t * u) + (t * t) - 4 * (u * u) +
                                      4 * u * (Mh[1] * Mh[1]) +
                                      3 * t * (MN[0] * MN[0]) +
                                      13 * u * (MN[0] * MN[0]) -
                                      16 * (Mh[1] * Mh[1]) * (MN[0] * MN[0]) +
                                      s * (-t - 4 * u + 4 * (Mh[1] * Mh[1]) +
                                           (MN[0] * MN[0]))) -
                                 2 * t * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                 2 * u * (MN[0] * MN[0] * MN[0] * MN[0]) -
                                 4 * (Mh[1] * Mh[1]) *
                                     (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup57[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[1] * Mh[1]) -
                                      (MN[0] * MN[0]))) *
                                MN[0] * MN[i1])) +
                  2 * std::conj(coup59[j1]) *
                      (coup4[i1] *
                           (3 * coup57[i1] * (MZ * MZ) *
                                (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup56[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) -
                       coup5[i1] * MN[0] *
                           (coup56[i1] * (-2 * (MZ * MZ * MZ * MZ) +
                                          ((t - (MN[0] * MN[0])) *
                                           (t - (MN[0] * MN[0]))) +
                                          (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                            6 * coup57[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((MZ * MZ) * (t - (MN[i1] * MN[i1])) *
                 (u - (MN[j1] * MN[j1]))) +
            (std::conj(coup5[j1]) *
                 (std::conj(coup58[j1]) *
                      (coup4[i1] * MN[0] *
                           (6 * u * coup59[i1] * (MZ * MZ) * MN[0] +
                            coup58[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[1] * Mh[1]) -
                                      (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup5[i1] *
                           (coup58[i1] *
                                ((MZ * MZ * MZ * MZ) *
                                     (u - 2 * (Mh[1] * Mh[1]) +
                                      2 * (MN[0] * MN[0])) -
                                 u * (MZ * MZ) *
                                     (s - t + u - 2 * (Mh[1] * Mh[1]) +
                                      2 * (MN[0] * MN[0])) +
                                 (u - (MN[0] * MN[0])) *
                                     (-(t * (Mh[1] * Mh[1])) -
                                      u * (Mh[1] * Mh[1]) +
                                      (Mh[1] * Mh[1] * Mh[1] * Mh[1]) +
                                      t * (MN[0] * MN[0]) +
                                      s * (u - (Mh[1] * Mh[1]) +
                                           (MN[0] * MN[0])) -
                                      (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            3 * coup59[i1] * (MZ * MZ) *
                                (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup59[j1]) *
                      (coup5[i1] *
                           (3 * coup58[i1] * (MZ * MZ) *
                                (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                                MN[0] +
                            coup59[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup4[i1] * MN[0] *
                           (coup59[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[1] * Mh[1]) -
                                      (MN[0] * MN[0]))) +
                            6 * coup58[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1]) +
             std::conj(coup4[j1]) *
                 (std::conj(coup59[j1]) *
                      (coup5[i1] * MN[0] *
                           (6 * u * coup58[i1] * (MZ * MZ) * MN[0] +
                            coup59[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[1] * Mh[1]) -
                                      (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup4[i1] *
                           (coup59[i1] *
                                ((MZ * MZ * MZ * MZ) *
                                     (u - 2 * (Mh[1] * Mh[1]) +
                                      2 * (MN[0] * MN[0])) -
                                 u * (MZ * MZ) *
                                     (s - t + u - 2 * (Mh[1] * Mh[1]) +
                                      2 * (MN[0] * MN[0])) +
                                 (u - (MN[0] * MN[0])) *
                                     (-(t * (Mh[1] * Mh[1])) -
                                      u * (Mh[1] * Mh[1]) +
                                      (Mh[1] * Mh[1] * Mh[1] * Mh[1]) +
                                      t * (MN[0] * MN[0]) +
                                      s * (u - (Mh[1] * Mh[1]) +
                                           (MN[0] * MN[0])) -
                                      (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            3 * coup58[i1] * (MZ * MZ) *
                                (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup58[j1]) *
                      (coup4[i1] *
                           (3 * coup59[i1] * (MZ * MZ) *
                                (u - (Mh[1] * Mh[1]) + (MN[0] * MN[0])) *
                                MN[0] +
                            coup58[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup5[i1] * MN[0] *
                           (coup58[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[1] * Mh[1]) -
                                      (MN[0] * MN[0]))) +
                            6 * coup59[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((MZ * MZ) * (u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
        j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1h3Z(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (MZ * MZ) + (Mh[2] * Mh[2]) +
         cos_t *
             sqrt(((MZ * MZ * MZ * MZ) +
                   ((s - (Mh[2] * Mh[2])) * (s - (Mh[2] * Mh[2]))) -
                   2 * (MZ * MZ) * (s + (Mh[2] * Mh[2]))) /
                  s) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (MZ * MZ) + (Mh[2] * Mh[2]) + 2 * (MN[0] * MN[0]);
    res += (coup61 * std::conj(coup61) *
            (std::conj(coup9) *
                 (coup9 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                           (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                  6 * coup8 * (MZ * MZ) * (MN[0] * MN[0])) +
             std::conj(coup8) *
                 (coup8 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                           (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                  6 * coup9 * (MZ * MZ) * (MN[0] * MN[0])))) /
           (((MZ * MZ * MZ) - MZ * s) * ((MZ * MZ * MZ) - MZ * s));

    SUM1((2 * std::conj(coup61) * coup60[i1] *
          (std::conj(coup9) *
               (coup3[i1] * ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[2] * Mh[2]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[2] * Mh[2])) * (t - (MN[0] * MN[0]))) +
                coup2[i1] * (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[2] * Mh[2]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[2] * Mh[2])) * (u - (MN[0] * MN[0])))) +
           std::conj(coup8) *
               (coup2[i1] * ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[2] * Mh[2]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[2] * Mh[2])) * (t - (MN[0] * MN[0]))) +
                coup3[i1] * (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[2] * Mh[2]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[2] * Mh[2])) * (u - (MN[0] * MN[0]))))) *
          MN[0]) /
             ((MZ * MZ) * (-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((2 * coup61 *
          (std::conj(coup10[j1]) *
               (-(std::conj(coup57[j1]) *
                  (3 * coup9 * (MZ * MZ) *
                       (s + u - (MZ * MZ) - 3 * (MN[0] * MN[0])) +
                   coup8 * (-2 * (MZ * MZ * MZ * MZ) +
                            ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                            (MZ * MZ) * (t + (MN[0] * MN[0])))) *
                  MN[0]) +
                std::conj(coup56[j1]) *
                    (coup9 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                     6 * coup8 * (MZ * MZ) * (MN[0] * MN[0])) *
                    MN[j1]) +
           std::conj(coup11[j1]) *
               (-(std::conj(coup56[j1]) *
                  (-3 * coup8 * (MZ * MZ) *
                       (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) +
                   coup9 * (-2 * (MZ * MZ * MZ * MZ) +
                            ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                            (MZ * MZ) * (t + (MN[0] * MN[0])))) *
                  MN[0]) +
                std::conj(coup57[j1]) *
                    (coup8 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                     6 * coup9 * (MZ * MZ) * (MN[0] * MN[0])) *
                    MN[j1]))) /
                 ((MZ * MZ) * (-s + (MZ * MZ)) * (t - (MN[j1] * MN[j1]))) +
             (2 * coup61 *
              (std::conj(coup11[j1]) *
                   (std::conj(coup58[j1]) *
                        (coup8 *
                             (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                              (u - (MN[0] * MN[0])) *
                                  (s + t - (Mh[2] * Mh[2]) - (MN[0] * MN[0]))) +
                         3 * coup9 * (MZ * MZ) *
                             (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup59[j1]) *
                        (coup9 *
                             ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                         6 * coup8 * (MZ * MZ) * (MN[0] * MN[0])) *
                        MN[j1]) +
               std::conj(coup10[j1]) *
                   (std::conj(coup59[j1]) *
                        (coup9 *
                             (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                              (u - (MN[0] * MN[0])) *
                                  (s + t - (Mh[2] * Mh[2]) - (MN[0] * MN[0]))) +
                         3 * coup8 * (MZ * MZ) *
                             (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup58[j1]) *
                        (coup8 *
                             ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                         6 * coup9 * (MZ * MZ) * (MN[0] * MN[0])) *
                        MN[j1]))) /
                 ((MZ * MZ) * (-s + (MZ * MZ)) * (u - (MN[j1] * MN[j1]))),
         j1, 5)

    SUM2((std::conj(coup60[j1]) * coup60[i1] *
          ((MZ * MZ * MZ * MZ) +
           ((s - (Mh[2] * Mh[2])) * (s - (Mh[2] * Mh[2]))) -
           2 * (MZ * MZ) * (s + (Mh[2] * Mh[2]))) *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((MZ * MZ) * (s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2(
        -((coup60[i1] *
           (std::conj(coup10[j1]) *
                (std::conj(coup59[j1]) *
                     (-2 * coup3[i1] * (MN[0] * MN[0]) *
                          (2 * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[2] * Mh[2])) *
                               (s + t - (Mh[2] * Mh[2]) - (MN[0] * MN[0])) +
                           (MZ * MZ) * (-3 * s - t - 2 * u + (Mh[2] * Mh[2]) +
                                        3 * (MN[0] * MN[0]))) +
                      coup2[i1] *
                          ((s - t + u) * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[2] * Mh[2])) *
                               ((s * s) - (t * t) + (u * u) -
                                u * (Mh[2] * Mh[2]) +
                                2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                                s * ((Mh[2] * Mh[2]) + 2 * (MN[0] * MN[0])) +
                                t * ((Mh[2] * Mh[2]) + 2 * (MN[0] * MN[0])) -
                                2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                           (MZ * MZ) *
                               (-2 * (s * s) + (t * t) - (u * u) +
                                2 * u * (Mh[2] * Mh[2]) +
                                10 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                s * (t - u - 2 * (Mh[2] * Mh[2]) +
                                     2 * (MN[0] * MN[0])) -
                                2 * t *
                                    ((Mh[2] * Mh[2]) + 3 * (MN[0] * MN[0])) +
                                6 * (MN[0] * MN[0] * MN[0] * MN[0])))) -
                 2 * std::conj(coup58[j1]) *
                     (coup2[i1] *
                          ((MZ * MZ * MZ * MZ) -
                           (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[2] * Mh[2]) -
                                        3 * (MN[0] * MN[0])) +
                           (s - (Mh[2] * Mh[2])) * (t - (MN[0] * MN[0]))) +
                      coup3[i1] *
                          (-(MZ * MZ * MZ * MZ) +
                           (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[2] * Mh[2]) -
                                        3 * (MN[0] * MN[0])) -
                           (s - (Mh[2] * Mh[2])) * (u - (MN[0] * MN[0])))) *
                     MN[0] * MN[j1]) +
            std::conj(coup11[j1]) *
                (std::conj(coup58[j1]) *
                     (-2 * coup2[i1] * (MN[0] * MN[0]) *
                          (2 * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[2] * Mh[2])) *
                               (s + t - (Mh[2] * Mh[2]) - (MN[0] * MN[0])) +
                           (MZ * MZ) * (-3 * s - t - 2 * u + (Mh[2] * Mh[2]) +
                                        3 * (MN[0] * MN[0]))) +
                      coup3[i1] *
                          ((s - t + u) * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[2] * Mh[2])) *
                               ((s * s) - (t * t) + (u * u) -
                                u * (Mh[2] * Mh[2]) +
                                2 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                                s * ((Mh[2] * Mh[2]) + 2 * (MN[0] * MN[0])) +
                                t * ((Mh[2] * Mh[2]) + 2 * (MN[0] * MN[0])) -
                                2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                           (MZ * MZ) *
                               (-2 * (s * s) + (t * t) - (u * u) +
                                2 * u * (Mh[2] * Mh[2]) +
                                10 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                s * (t - u - 2 * (Mh[2] * Mh[2]) +
                                     2 * (MN[0] * MN[0])) -
                                2 * t *
                                    ((Mh[2] * Mh[2]) + 3 * (MN[0] * MN[0])) +
                                6 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                 2 * std::conj(coup59[j1]) *
                     (coup3[i1] *
                          (-(MZ * MZ * MZ * MZ) +
                           (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[2] * Mh[2]) -
                                        3 * (MN[0] * MN[0])) -
                           (s - (Mh[2] * Mh[2])) * (t - (MN[0] * MN[0]))) +
                      coup2[i1] *
                          ((MZ * MZ * MZ * MZ) -
                           (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[2] * Mh[2]) -
                                        3 * (MN[0] * MN[0])) +
                           (s - (Mh[2] * Mh[2])) * (u - (MN[0] * MN[0])))) *
                     MN[0] * MN[j1]))) /
          ((MZ * MZ) * (s - (Mh[i1] * Mh[i1])) * (u - (MN[j1] * MN[j1])))) -
            (2 * coup60[i1] *
             (std::conj(coup10[j1]) *
                  (std::conj(coup57[j1]) *
                       (coup3[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[2] * Mh[2]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[2] * Mh[2])) * (t - (MN[0] * MN[0]))) *
                            (MN[0] * MN[0]) +
                        coup2[i1] *
                            ((MZ * MZ * MZ * MZ) *
                                 (s - t + u - 3 * (MN[0] * MN[0])) +
                             (s - (Mh[2] * Mh[2])) *
                                 (s * (t - (MN[0] * MN[0])) +
                                  (MN[0] * MN[0]) *
                                      (-2 * t - u + 3 * (MN[0] * MN[0]))) -
                             (MZ * MZ) *
                                 ((s * s) - (t * t) + (u * u) +
                                  t * (Mh[2] * Mh[2]) - u * (Mh[2] * Mh[2]) +
                                  s * (t + 2 * u - 3 * (Mh[2] * Mh[2]) -
                                       6 * (MN[0] * MN[0])) -
                                  2 * t * (MN[0] * MN[0]) -
                                  7 * u * (MN[0] * MN[0]) +
                                  9 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                  9 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                   std::conj(coup56[j1]) *
                       (coup3[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[2] * Mh[2]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[2] * Mh[2])) * (t - (MN[0] * MN[0]))) +
                        coup2[i1] *
                            ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[2] * Mh[2]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[2] * Mh[2])) * (u - (MN[0] * MN[0])))) *
                       MN[0] * MN[j1]) +
              std::conj(coup11[j1]) *
                  (std::conj(coup56[j1]) *
                       (coup2[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[2] * Mh[2]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[2] * Mh[2])) * (t - (MN[0] * MN[0]))) *
                            (MN[0] * MN[0]) +
                        coup3[i1] *
                            ((MZ * MZ * MZ * MZ) *
                                 (s - t + u - 3 * (MN[0] * MN[0])) +
                             (s - (Mh[2] * Mh[2])) *
                                 (s * (t - (MN[0] * MN[0])) +
                                  (MN[0] * MN[0]) *
                                      (-2 * t - u + 3 * (MN[0] * MN[0]))) -
                             (MZ * MZ) *
                                 ((s * s) - (t * t) + (u * u) +
                                  t * (Mh[2] * Mh[2]) - u * (Mh[2] * Mh[2]) +
                                  s * (t + 2 * u - 3 * (Mh[2] * Mh[2]) -
                                       6 * (MN[0] * MN[0])) -
                                  2 * t * (MN[0] * MN[0]) -
                                  7 * u * (MN[0] * MN[0]) +
                                  9 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                  9 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                   std::conj(coup57[j1]) *
                       (coup2[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[2] * Mh[2]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[2] * Mh[2])) * (t - (MN[0] * MN[0]))) +
                        coup3[i1] *
                            ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[2] * Mh[2]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[2] * Mh[2])) * (u - (MN[0] * MN[0])))) *
                       MN[0] * MN[j1]))) /
                ((MZ * MZ) * (s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))),
        j1, 5, i1, 6)

    SUM2(
        (std::conj(coup11[j1]) *
             (std::conj(coup56[j1]) *
                  (-(coup10[i1] * MN[0] *
                     (-6 * t * coup57[i1] * (MZ * MZ) * MN[0] +
                      coup56[i1] *
                          (-2 * (MZ * MZ * MZ * MZ) +
                           ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                           (MZ * MZ) * (t + (MN[0] * MN[0]))) *
                          MN[i1])) +
                   coup11[i1] *
                       (coup56[i1] *
                            (2 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                             (MZ * MZ * MZ * MZ) *
                                 (2 * s + 2 * t + 2 * u - 5 * (MN[0] * MN[0])) +
                             (MZ * MZ) * (t * (2 * u - (MN[0] * MN[0])) +
                                          (s + u - 4 * (MN[0] * MN[0])) *
                                              (MN[0] * MN[0])) -
                             (t - (MN[0] * MN[0])) *
                                 ((2 * t + u - 3 * (MN[0] * MN[0])) *
                                      (MN[0] * MN[0]) +
                                  s * (-t + (MN[0] * MN[0])))) +
                        3 * coup57[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] *
                            MN[i1])) +
              std::conj(coup57[j1]) *
                  (coup11[i1] *
                       (3 * coup56[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] +
                        coup57[i1] *
                            ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                             (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) *
                            MN[i1]) -
                   coup10[i1] * MN[0] *
                       (coup57[i1] *
                            (-2 * (MZ * MZ * MZ * MZ) +
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                             (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                        6 * coup56[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                  MN[j1]) +
         std::conj(coup10[j1]) *
             (std::conj(coup57[j1]) *
                  (-(coup11[i1] * MN[0] *
                     (-6 * t * coup56[i1] * (MZ * MZ) * MN[0] +
                      coup57[i1] *
                          (-2 * (MZ * MZ * MZ * MZ) +
                           ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                           (MZ * MZ) * (t + (MN[0] * MN[0]))) *
                          MN[i1])) +
                   coup10[i1] *
                       (coup57[i1] *
                            (2 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                             (MZ * MZ * MZ * MZ) *
                                 (2 * s + 2 * t + 2 * u - 5 * (MN[0] * MN[0])) +
                             (MZ * MZ) * (t * (2 * u - (MN[0] * MN[0])) +
                                          (s + u - 4 * (MN[0] * MN[0])) *
                                              (MN[0] * MN[0])) -
                             (t - (MN[0] * MN[0])) *
                                 ((2 * t + u - 3 * (MN[0] * MN[0])) *
                                      (MN[0] * MN[0]) +
                                  s * (-t + (MN[0] * MN[0])))) +
                        3 * coup56[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] *
                            MN[i1])) +
              std::conj(coup56[j1]) *
                  (coup10[i1] *
                       (3 * coup57[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] +
                        coup56[i1] *
                            ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                             (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) *
                            MN[i1]) -
                   coup11[i1] * MN[0] *
                       (coup56[i1] *
                            (-2 * (MZ * MZ * MZ * MZ) +
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                             (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                        6 * coup57[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                  MN[j1])) /
                ((MZ * MZ) * (t - (MN[i1] * MN[i1])) *
                 (t - (MN[j1] * MN[j1]))) +
            (std::conj(coup10[j1]) *
                 (std::conj(coup59[j1]) *
                      (-2 * coup11[i1] * MN[0] *
                           (coup56[i1] *
                                (-4 * (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (s + t - (Mh[2] * Mh[2]) -
                                      (MN[0] * MN[0])) +
                                 (MZ * MZ) * (2 * s + u - 3 * (Mh[2] * Mh[2]) +
                                              (MN[0] * MN[0]))) *
                                MN[0] -
                            3 * coup57[i1] * (MZ * MZ) *
                                (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                                MN[i1]) +
                       coup10[i1] *
                           (coup57[i1] *
                                (-(t * t * t) + t * (u * u) +
                                 4 * (MZ * MZ * MZ * MZ) *
                                     (u - (Mh[2] * Mh[2])) -
                                 t * u * (Mh[2] * Mh[2]) +
                                 (t * t) * (Mh[2] * Mh[2]) +
                                 (s * s) * (t - (MN[0] * MN[0])) -
                                 2 * t * u * (MN[0] * MN[0]) +
                                 3 * (t * t) * (MN[0] * MN[0]) -
                                 (u * u) * (MN[0] * MN[0]) +
                                 t * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                 3 * u * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                                 s * t *
                                     ((Mh[2] * Mh[2]) + 2 * (MN[0] * MN[0])) +
                                 s * (MN[0] * MN[0]) *
                                     (-2 * u + (Mh[2] * Mh[2]) +
                                      4 * (MN[0] * MN[0])) +
                                 (MZ * MZ) *
                                     (-(t * u) + (t * t) - 4 * (u * u) +
                                      4 * u * (Mh[2] * Mh[2]) +
                                      3 * t * (MN[0] * MN[0]) +
                                      13 * u * (MN[0] * MN[0]) -
                                      16 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                      s * (-t - 4 * u + 4 * (Mh[2] * Mh[2]) +
                                           (MN[0] * MN[0]))) -
                                 2 * t * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                 2 * u * (MN[0] * MN[0] * MN[0] * MN[0]) -
                                 4 * (Mh[2] * Mh[2]) *
                                     (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup56[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[2] * Mh[2]) -
                                      (MN[0] * MN[0]))) *
                                MN[0] * MN[i1])) +
                  2 * std::conj(coup58[j1]) *
                      (coup11[i1] *
                           (3 * coup56[i1] * (MZ * MZ) *
                                (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup57[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) -
                       coup10[i1] * MN[0] *
                           (coup57[i1] * (-2 * (MZ * MZ * MZ * MZ) +
                                          ((t - (MN[0] * MN[0])) *
                                           (t - (MN[0] * MN[0]))) +
                                          (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                            6 * coup56[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1]) +
             std::conj(coup11[j1]) *
                 (std::conj(coup58[j1]) *
                      (-2 * coup10[i1] * MN[0] *
                           (coup57[i1] *
                                (-4 * (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (s + t - (Mh[2] * Mh[2]) -
                                      (MN[0] * MN[0])) +
                                 (MZ * MZ) * (2 * s + u - 3 * (Mh[2] * Mh[2]) +
                                              (MN[0] * MN[0]))) *
                                MN[0] -
                            3 * coup56[i1] * (MZ * MZ) *
                                (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                                MN[i1]) +
                       coup11[i1] *
                           (coup56[i1] *
                                (-(t * t * t) + t * (u * u) +
                                 4 * (MZ * MZ * MZ * MZ) *
                                     (u - (Mh[2] * Mh[2])) -
                                 t * u * (Mh[2] * Mh[2]) +
                                 (t * t) * (Mh[2] * Mh[2]) +
                                 (s * s) * (t - (MN[0] * MN[0])) -
                                 2 * t * u * (MN[0] * MN[0]) +
                                 3 * (t * t) * (MN[0] * MN[0]) -
                                 (u * u) * (MN[0] * MN[0]) +
                                 t * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                 3 * u * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) -
                                 s * t *
                                     ((Mh[2] * Mh[2]) + 2 * (MN[0] * MN[0])) +
                                 s * (MN[0] * MN[0]) *
                                     (-2 * u + (Mh[2] * Mh[2]) +
                                      4 * (MN[0] * MN[0])) +
                                 (MZ * MZ) *
                                     (-(t * u) + (t * t) - 4 * (u * u) +
                                      4 * u * (Mh[2] * Mh[2]) +
                                      3 * t * (MN[0] * MN[0]) +
                                      13 * u * (MN[0] * MN[0]) -
                                      16 * (Mh[2] * Mh[2]) * (MN[0] * MN[0]) +
                                      s * (-t - 4 * u + 4 * (Mh[2] * Mh[2]) +
                                           (MN[0] * MN[0]))) -
                                 2 * t * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                 2 * u * (MN[0] * MN[0] * MN[0] * MN[0]) -
                                 4 * (Mh[2] * Mh[2]) *
                                     (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup57[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[2] * Mh[2]) -
                                      (MN[0] * MN[0]))) *
                                MN[0] * MN[i1])) +
                  2 * std::conj(coup59[j1]) *
                      (coup10[i1] *
                           (3 * coup57[i1] * (MZ * MZ) *
                                (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup56[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) -
                       coup11[i1] * MN[0] *
                           (coup56[i1] * (-2 * (MZ * MZ * MZ * MZ) +
                                          ((t - (MN[0] * MN[0])) *
                                           (t - (MN[0] * MN[0]))) +
                                          (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                            6 * coup57[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((MZ * MZ) * (t - (MN[i1] * MN[i1])) *
                 (u - (MN[j1] * MN[j1]))) +
            (std::conj(coup11[j1]) *
                 (std::conj(coup58[j1]) *
                      (coup10[i1] * MN[0] *
                           (6 * u * coup59[i1] * (MZ * MZ) * MN[0] +
                            coup58[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[2] * Mh[2]) -
                                      (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup11[i1] *
                           (coup58[i1] *
                                ((MZ * MZ * MZ * MZ) *
                                     (u - 2 * (Mh[2] * Mh[2]) +
                                      2 * (MN[0] * MN[0])) -
                                 u * (MZ * MZ) *
                                     (s - t + u - 2 * (Mh[2] * Mh[2]) +
                                      2 * (MN[0] * MN[0])) +
                                 (u - (MN[0] * MN[0])) *
                                     (-(t * (Mh[2] * Mh[2])) -
                                      u * (Mh[2] * Mh[2]) +
                                      (Mh[2] * Mh[2] * Mh[2] * Mh[2]) +
                                      t * (MN[0] * MN[0]) +
                                      s * (u - (Mh[2] * Mh[2]) +
                                           (MN[0] * MN[0])) -
                                      (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            3 * coup59[i1] * (MZ * MZ) *
                                (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup59[j1]) *
                      (coup11[i1] *
                           (3 * coup58[i1] * (MZ * MZ) *
                                (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                                MN[0] +
                            coup59[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup10[i1] * MN[0] *
                           (coup59[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[2] * Mh[2]) -
                                      (MN[0] * MN[0]))) +
                            6 * coup58[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1]) +
             std::conj(coup10[j1]) *
                 (std::conj(coup59[j1]) *
                      (coup11[i1] * MN[0] *
                           (6 * u * coup58[i1] * (MZ * MZ) * MN[0] +
                            coup59[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[2] * Mh[2]) -
                                      (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup10[i1] *
                           (coup59[i1] *
                                ((MZ * MZ * MZ * MZ) *
                                     (u - 2 * (Mh[2] * Mh[2]) +
                                      2 * (MN[0] * MN[0])) -
                                 u * (MZ * MZ) *
                                     (s - t + u - 2 * (Mh[2] * Mh[2]) +
                                      2 * (MN[0] * MN[0])) +
                                 (u - (MN[0] * MN[0])) *
                                     (-(t * (Mh[2] * Mh[2])) -
                                      u * (Mh[2] * Mh[2]) +
                                      (Mh[2] * Mh[2] * Mh[2] * Mh[2]) +
                                      t * (MN[0] * MN[0]) +
                                      s * (u - (Mh[2] * Mh[2]) +
                                           (MN[0] * MN[0])) -
                                      (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            3 * coup58[i1] * (MZ * MZ) *
                                (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup58[j1]) *
                      (coup10[i1] *
                           (3 * coup59[i1] * (MZ * MZ) *
                                (u - (Mh[2] * Mh[2]) + (MN[0] * MN[0])) *
                                MN[0] +
                            coup58[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup11[i1] * MN[0] *
                           (coup58[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[2] * Mh[2]) -
                                      (MN[0] * MN[0]))) +
                            6 * coup59[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((MZ * MZ) * (u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
        j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1h4Z(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (MZ * MZ) + (Mh[3] * Mh[3]) +
         cos_t *
             sqrt(((MZ * MZ * MZ * MZ) +
                   ((s - (Mh[3] * Mh[3])) * (s - (Mh[3] * Mh[3]))) -
                   2 * (MZ * MZ) * (s + (Mh[3] * Mh[3]))) /
                  s) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (MZ * MZ) + (Mh[3] * Mh[3]) + 2 * (MN[0] * MN[0]);
    res += (coup63 * std::conj(coup63) *
            (std::conj(coup9) *
                 (coup9 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                           (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                  6 * coup8 * (MZ * MZ) * (MN[0] * MN[0])) +
             std::conj(coup8) *
                 (coup8 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                           (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                  6 * coup9 * (MZ * MZ) * (MN[0] * MN[0])))) /
           (((MZ * MZ * MZ) - MZ * s) * ((MZ * MZ * MZ) - MZ * s));

    SUM1((2 * std::conj(coup63) * coup62[i1] *
          (std::conj(coup9) *
               (coup3[i1] * ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[3] * Mh[3]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[3] * Mh[3])) * (t - (MN[0] * MN[0]))) +
                coup2[i1] * (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[3] * Mh[3]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[3] * Mh[3])) * (u - (MN[0] * MN[0])))) +
           std::conj(coup8) *
               (coup2[i1] * ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[3] * Mh[3]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[3] * Mh[3])) * (t - (MN[0] * MN[0]))) +
                coup3[i1] * (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[3] * Mh[3]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[3] * Mh[3])) * (u - (MN[0] * MN[0]))))) *
          MN[0]) /
             ((MZ * MZ) * (-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((2 * coup63 *
          (std::conj(coup14[j1]) *
               (-(std::conj(coup57[j1]) *
                  (3 * coup9 * (MZ * MZ) *
                       (s + u - (MZ * MZ) - 3 * (MN[0] * MN[0])) +
                   coup8 * (-2 * (MZ * MZ * MZ * MZ) +
                            ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                            (MZ * MZ) * (t + (MN[0] * MN[0])))) *
                  MN[0]) +
                std::conj(coup56[j1]) *
                    (coup9 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                     6 * coup8 * (MZ * MZ) * (MN[0] * MN[0])) *
                    MN[j1]) +
           std::conj(coup15[j1]) *
               (-(std::conj(coup56[j1]) *
                  (-3 * coup8 * (MZ * MZ) *
                       (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) +
                   coup9 * (-2 * (MZ * MZ * MZ * MZ) +
                            ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                            (MZ * MZ) * (t + (MN[0] * MN[0])))) *
                  MN[0]) +
                std::conj(coup57[j1]) *
                    (coup8 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                     6 * coup9 * (MZ * MZ) * (MN[0] * MN[0])) *
                    MN[j1]))) /
                 ((MZ * MZ) * (-s + (MZ * MZ)) * (t - (MN[j1] * MN[j1]))) +
             (2 * coup63 *
              (std::conj(coup15[j1]) *
                   (std::conj(coup58[j1]) *
                        (coup8 *
                             (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                              (u - (MN[0] * MN[0])) *
                                  (s + t - (Mh[3] * Mh[3]) - (MN[0] * MN[0]))) +
                         3 * coup9 * (MZ * MZ) *
                             (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup59[j1]) *
                        (coup9 *
                             ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                         6 * coup8 * (MZ * MZ) * (MN[0] * MN[0])) *
                        MN[j1]) +
               std::conj(coup14[j1]) *
                   (std::conj(coup59[j1]) *
                        (coup9 *
                             (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                              (u - (MN[0] * MN[0])) *
                                  (s + t - (Mh[3] * Mh[3]) - (MN[0] * MN[0]))) +
                         3 * coup8 * (MZ * MZ) *
                             (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup58[j1]) *
                        (coup8 *
                             ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                         6 * coup9 * (MZ * MZ) * (MN[0] * MN[0])) *
                        MN[j1]))) /
                 ((MZ * MZ) * (-s + (MZ * MZ)) * (u - (MN[j1] * MN[j1]))),
         j1, 5)

    SUM2((std::conj(coup62[j1]) * coup62[i1] *
          ((MZ * MZ * MZ * MZ) +
           ((s - (Mh[3] * Mh[3])) * (s - (Mh[3] * Mh[3]))) -
           2 * (MZ * MZ) * (s + (Mh[3] * Mh[3]))) *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((MZ * MZ) * (s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2(
        -((coup62[i1] *
           (std::conj(coup14[j1]) *
                (std::conj(coup59[j1]) *
                     (-2 * coup3[i1] * (MN[0] * MN[0]) *
                          (2 * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[3] * Mh[3])) *
                               (s + t - (Mh[3] * Mh[3]) - (MN[0] * MN[0])) +
                           (MZ * MZ) * (-3 * s - t - 2 * u + (Mh[3] * Mh[3]) +
                                        3 * (MN[0] * MN[0]))) +
                      coup2[i1] *
                          ((s - t + u) * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[3] * Mh[3])) *
                               ((s * s) - (t * t) + (u * u) -
                                u * (Mh[3] * Mh[3]) +
                                2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                                s * ((Mh[3] * Mh[3]) + 2 * (MN[0] * MN[0])) +
                                t * ((Mh[3] * Mh[3]) + 2 * (MN[0] * MN[0])) -
                                2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                           (MZ * MZ) *
                               (-2 * (s * s) + (t * t) - (u * u) +
                                2 * u * (Mh[3] * Mh[3]) +
                                10 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                                s * (t - u - 2 * (Mh[3] * Mh[3]) +
                                     2 * (MN[0] * MN[0])) -
                                2 * t *
                                    ((Mh[3] * Mh[3]) + 3 * (MN[0] * MN[0])) +
                                6 * (MN[0] * MN[0] * MN[0] * MN[0])))) -
                 2 * std::conj(coup58[j1]) *
                     (coup2[i1] *
                          ((MZ * MZ * MZ * MZ) -
                           (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[3] * Mh[3]) -
                                        3 * (MN[0] * MN[0])) +
                           (s - (Mh[3] * Mh[3])) * (t - (MN[0] * MN[0]))) +
                      coup3[i1] *
                          (-(MZ * MZ * MZ * MZ) +
                           (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[3] * Mh[3]) -
                                        3 * (MN[0] * MN[0])) -
                           (s - (Mh[3] * Mh[3])) * (u - (MN[0] * MN[0])))) *
                     MN[0] * MN[j1]) +
            std::conj(coup15[j1]) *
                (std::conj(coup58[j1]) *
                     (-2 * coup2[i1] * (MN[0] * MN[0]) *
                          (2 * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[3] * Mh[3])) *
                               (s + t - (Mh[3] * Mh[3]) - (MN[0] * MN[0])) +
                           (MZ * MZ) * (-3 * s - t - 2 * u + (Mh[3] * Mh[3]) +
                                        3 * (MN[0] * MN[0]))) +
                      coup3[i1] *
                          ((s - t + u) * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[3] * Mh[3])) *
                               ((s * s) - (t * t) + (u * u) -
                                u * (Mh[3] * Mh[3]) +
                                2 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                                s * ((Mh[3] * Mh[3]) + 2 * (MN[0] * MN[0])) +
                                t * ((Mh[3] * Mh[3]) + 2 * (MN[0] * MN[0])) -
                                2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                           (MZ * MZ) *
                               (-2 * (s * s) + (t * t) - (u * u) +
                                2 * u * (Mh[3] * Mh[3]) +
                                10 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                                s * (t - u - 2 * (Mh[3] * Mh[3]) +
                                     2 * (MN[0] * MN[0])) -
                                2 * t *
                                    ((Mh[3] * Mh[3]) + 3 * (MN[0] * MN[0])) +
                                6 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                 2 * std::conj(coup59[j1]) *
                     (coup3[i1] *
                          (-(MZ * MZ * MZ * MZ) +
                           (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[3] * Mh[3]) -
                                        3 * (MN[0] * MN[0])) -
                           (s - (Mh[3] * Mh[3])) * (t - (MN[0] * MN[0]))) +
                      coup2[i1] *
                          ((MZ * MZ * MZ * MZ) -
                           (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[3] * Mh[3]) -
                                        3 * (MN[0] * MN[0])) +
                           (s - (Mh[3] * Mh[3])) * (u - (MN[0] * MN[0])))) *
                     MN[0] * MN[j1]))) /
          ((MZ * MZ) * (s - (Mh[i1] * Mh[i1])) * (u - (MN[j1] * MN[j1])))) -
            (2 * coup62[i1] *
             (std::conj(coup14[j1]) *
                  (std::conj(coup57[j1]) *
                       (coup3[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[3] * Mh[3]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[3] * Mh[3])) * (t - (MN[0] * MN[0]))) *
                            (MN[0] * MN[0]) +
                        coup2[i1] *
                            ((MZ * MZ * MZ * MZ) *
                                 (s - t + u - 3 * (MN[0] * MN[0])) +
                             (s - (Mh[3] * Mh[3])) *
                                 (s * (t - (MN[0] * MN[0])) +
                                  (MN[0] * MN[0]) *
                                      (-2 * t - u + 3 * (MN[0] * MN[0]))) -
                             (MZ * MZ) *
                                 ((s * s) - (t * t) + (u * u) +
                                  t * (Mh[3] * Mh[3]) - u * (Mh[3] * Mh[3]) +
                                  s * (t + 2 * u - 3 * (Mh[3] * Mh[3]) -
                                       6 * (MN[0] * MN[0])) -
                                  2 * t * (MN[0] * MN[0]) -
                                  7 * u * (MN[0] * MN[0]) +
                                  9 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                                  9 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                   std::conj(coup56[j1]) *
                       (coup3[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[3] * Mh[3]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[3] * Mh[3])) * (t - (MN[0] * MN[0]))) +
                        coup2[i1] *
                            ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[3] * Mh[3]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[3] * Mh[3])) * (u - (MN[0] * MN[0])))) *
                       MN[0] * MN[j1]) +
              std::conj(coup15[j1]) *
                  (std::conj(coup56[j1]) *
                       (coup2[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[3] * Mh[3]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[3] * Mh[3])) * (t - (MN[0] * MN[0]))) *
                            (MN[0] * MN[0]) +
                        coup3[i1] *
                            ((MZ * MZ * MZ * MZ) *
                                 (s - t + u - 3 * (MN[0] * MN[0])) +
                             (s - (Mh[3] * Mh[3])) *
                                 (s * (t - (MN[0] * MN[0])) +
                                  (MN[0] * MN[0]) *
                                      (-2 * t - u + 3 * (MN[0] * MN[0]))) -
                             (MZ * MZ) *
                                 ((s * s) - (t * t) + (u * u) +
                                  t * (Mh[3] * Mh[3]) - u * (Mh[3] * Mh[3]) +
                                  s * (t + 2 * u - 3 * (Mh[3] * Mh[3]) -
                                       6 * (MN[0] * MN[0])) -
                                  2 * t * (MN[0] * MN[0]) -
                                  7 * u * (MN[0] * MN[0]) +
                                  9 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                                  9 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                   std::conj(coup57[j1]) *
                       (coup2[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[3] * Mh[3]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[3] * Mh[3])) * (t - (MN[0] * MN[0]))) +
                        coup3[i1] *
                            ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[3] * Mh[3]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[3] * Mh[3])) * (u - (MN[0] * MN[0])))) *
                       MN[0] * MN[j1]))) /
                ((MZ * MZ) * (s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))),
        j1, 5, i1, 6)

    SUM2(
        (std::conj(coup15[j1]) *
             (std::conj(coup56[j1]) *
                  (-(coup14[i1] * MN[0] *
                     (-6 * t * coup57[i1] * (MZ * MZ) * MN[0] +
                      coup56[i1] *
                          (-2 * (MZ * MZ * MZ * MZ) +
                           ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                           (MZ * MZ) * (t + (MN[0] * MN[0]))) *
                          MN[i1])) +
                   coup15[i1] *
                       (coup56[i1] *
                            (2 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                             (MZ * MZ * MZ * MZ) *
                                 (2 * s + 2 * t + 2 * u - 5 * (MN[0] * MN[0])) +
                             (MZ * MZ) * (t * (2 * u - (MN[0] * MN[0])) +
                                          (s + u - 4 * (MN[0] * MN[0])) *
                                              (MN[0] * MN[0])) -
                             (t - (MN[0] * MN[0])) *
                                 ((2 * t + u - 3 * (MN[0] * MN[0])) *
                                      (MN[0] * MN[0]) +
                                  s * (-t + (MN[0] * MN[0])))) +
                        3 * coup57[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] *
                            MN[i1])) +
              std::conj(coup57[j1]) *
                  (coup15[i1] *
                       (3 * coup56[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] +
                        coup57[i1] *
                            ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                             (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) *
                            MN[i1]) -
                   coup14[i1] * MN[0] *
                       (coup57[i1] *
                            (-2 * (MZ * MZ * MZ * MZ) +
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                             (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                        6 * coup56[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                  MN[j1]) +
         std::conj(coup14[j1]) *
             (std::conj(coup57[j1]) *
                  (-(coup15[i1] * MN[0] *
                     (-6 * t * coup56[i1] * (MZ * MZ) * MN[0] +
                      coup57[i1] *
                          (-2 * (MZ * MZ * MZ * MZ) +
                           ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                           (MZ * MZ) * (t + (MN[0] * MN[0]))) *
                          MN[i1])) +
                   coup14[i1] *
                       (coup57[i1] *
                            (2 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                             (MZ * MZ * MZ * MZ) *
                                 (2 * s + 2 * t + 2 * u - 5 * (MN[0] * MN[0])) +
                             (MZ * MZ) * (t * (2 * u - (MN[0] * MN[0])) +
                                          (s + u - 4 * (MN[0] * MN[0])) *
                                              (MN[0] * MN[0])) -
                             (t - (MN[0] * MN[0])) *
                                 ((2 * t + u - 3 * (MN[0] * MN[0])) *
                                      (MN[0] * MN[0]) +
                                  s * (-t + (MN[0] * MN[0])))) +
                        3 * coup56[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] *
                            MN[i1])) +
              std::conj(coup56[j1]) *
                  (coup14[i1] *
                       (3 * coup57[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] +
                        coup56[i1] *
                            ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                             (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) *
                            MN[i1]) -
                   coup15[i1] * MN[0] *
                       (coup56[i1] *
                            (-2 * (MZ * MZ * MZ * MZ) +
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                             (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                        6 * coup57[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                  MN[j1])) /
                ((MZ * MZ) * (t - (MN[i1] * MN[i1])) *
                 (t - (MN[j1] * MN[j1]))) +
            (std::conj(coup14[j1]) *
                 (std::conj(coup59[j1]) *
                      (-2 * coup15[i1] * MN[0] *
                           (coup56[i1] *
                                (-4 * (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (s + t - (Mh[3] * Mh[3]) -
                                      (MN[0] * MN[0])) +
                                 (MZ * MZ) * (2 * s + u - 3 * (Mh[3] * Mh[3]) +
                                              (MN[0] * MN[0]))) *
                                MN[0] -
                            3 * coup57[i1] * (MZ * MZ) *
                                (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                                MN[i1]) +
                       coup14[i1] *
                           (coup57[i1] *
                                (-(t * t * t) + t * (u * u) +
                                 4 * (MZ * MZ * MZ * MZ) *
                                     (u - (Mh[3] * Mh[3])) -
                                 t * u * (Mh[3] * Mh[3]) +
                                 (t * t) * (Mh[3] * Mh[3]) +
                                 (s * s) * (t - (MN[0] * MN[0])) -
                                 2 * t * u * (MN[0] * MN[0]) +
                                 3 * (t * t) * (MN[0] * MN[0]) -
                                 (u * u) * (MN[0] * MN[0]) +
                                 t * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                                 3 * u * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                                 s * t *
                                     ((Mh[3] * Mh[3]) + 2 * (MN[0] * MN[0])) +
                                 s * (MN[0] * MN[0]) *
                                     (-2 * u + (Mh[3] * Mh[3]) +
                                      4 * (MN[0] * MN[0])) +
                                 (MZ * MZ) *
                                     (-(t * u) + (t * t) - 4 * (u * u) +
                                      4 * u * (Mh[3] * Mh[3]) +
                                      3 * t * (MN[0] * MN[0]) +
                                      13 * u * (MN[0] * MN[0]) -
                                      16 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                                      s * (-t - 4 * u + 4 * (Mh[3] * Mh[3]) +
                                           (MN[0] * MN[0]))) -
                                 2 * t * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                 2 * u * (MN[0] * MN[0] * MN[0] * MN[0]) -
                                 4 * (Mh[3] * Mh[3]) *
                                     (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup56[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[3] * Mh[3]) -
                                      (MN[0] * MN[0]))) *
                                MN[0] * MN[i1])) +
                  2 * std::conj(coup58[j1]) *
                      (coup15[i1] *
                           (3 * coup56[i1] * (MZ * MZ) *
                                (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup57[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) -
                       coup14[i1] * MN[0] *
                           (coup57[i1] * (-2 * (MZ * MZ * MZ * MZ) +
                                          ((t - (MN[0] * MN[0])) *
                                           (t - (MN[0] * MN[0]))) +
                                          (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                            6 * coup56[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1]) +
             std::conj(coup15[j1]) *
                 (std::conj(coup58[j1]) *
                      (-2 * coup14[i1] * MN[0] *
                           (coup57[i1] *
                                (-4 * (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (s + t - (Mh[3] * Mh[3]) -
                                      (MN[0] * MN[0])) +
                                 (MZ * MZ) * (2 * s + u - 3 * (Mh[3] * Mh[3]) +
                                              (MN[0] * MN[0]))) *
                                MN[0] -
                            3 * coup56[i1] * (MZ * MZ) *
                                (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                                MN[i1]) +
                       coup15[i1] *
                           (coup56[i1] *
                                (-(t * t * t) + t * (u * u) +
                                 4 * (MZ * MZ * MZ * MZ) *
                                     (u - (Mh[3] * Mh[3])) -
                                 t * u * (Mh[3] * Mh[3]) +
                                 (t * t) * (Mh[3] * Mh[3]) +
                                 (s * s) * (t - (MN[0] * MN[0])) -
                                 2 * t * u * (MN[0] * MN[0]) +
                                 3 * (t * t) * (MN[0] * MN[0]) -
                                 (u * u) * (MN[0] * MN[0]) +
                                 t * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                                 3 * u * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) -
                                 s * t *
                                     ((Mh[3] * Mh[3]) + 2 * (MN[0] * MN[0])) +
                                 s * (MN[0] * MN[0]) *
                                     (-2 * u + (Mh[3] * Mh[3]) +
                                      4 * (MN[0] * MN[0])) +
                                 (MZ * MZ) *
                                     (-(t * u) + (t * t) - 4 * (u * u) +
                                      4 * u * (Mh[3] * Mh[3]) +
                                      3 * t * (MN[0] * MN[0]) +
                                      13 * u * (MN[0] * MN[0]) -
                                      16 * (Mh[3] * Mh[3]) * (MN[0] * MN[0]) +
                                      s * (-t - 4 * u + 4 * (Mh[3] * Mh[3]) +
                                           (MN[0] * MN[0]))) -
                                 2 * t * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                 2 * u * (MN[0] * MN[0] * MN[0] * MN[0]) -
                                 4 * (Mh[3] * Mh[3]) *
                                     (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup57[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[3] * Mh[3]) -
                                      (MN[0] * MN[0]))) *
                                MN[0] * MN[i1])) +
                  2 * std::conj(coup59[j1]) *
                      (coup14[i1] *
                           (3 * coup57[i1] * (MZ * MZ) *
                                (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup56[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) -
                       coup15[i1] * MN[0] *
                           (coup56[i1] * (-2 * (MZ * MZ * MZ * MZ) +
                                          ((t - (MN[0] * MN[0])) *
                                           (t - (MN[0] * MN[0]))) +
                                          (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                            6 * coup57[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((MZ * MZ) * (t - (MN[i1] * MN[i1])) *
                 (u - (MN[j1] * MN[j1]))) +
            (std::conj(coup15[j1]) *
                 (std::conj(coup58[j1]) *
                      (coup14[i1] * MN[0] *
                           (6 * u * coup59[i1] * (MZ * MZ) * MN[0] +
                            coup58[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[3] * Mh[3]) -
                                      (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup15[i1] *
                           (coup58[i1] *
                                ((MZ * MZ * MZ * MZ) *
                                     (u - 2 * (Mh[3] * Mh[3]) +
                                      2 * (MN[0] * MN[0])) -
                                 u * (MZ * MZ) *
                                     (s - t + u - 2 * (Mh[3] * Mh[3]) +
                                      2 * (MN[0] * MN[0])) +
                                 (u - (MN[0] * MN[0])) *
                                     (-(t * (Mh[3] * Mh[3])) -
                                      u * (Mh[3] * Mh[3]) +
                                      (Mh[3] * Mh[3] * Mh[3] * Mh[3]) +
                                      t * (MN[0] * MN[0]) +
                                      s * (u - (Mh[3] * Mh[3]) +
                                           (MN[0] * MN[0])) -
                                      (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            3 * coup59[i1] * (MZ * MZ) *
                                (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup59[j1]) *
                      (coup15[i1] *
                           (3 * coup58[i1] * (MZ * MZ) *
                                (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                                MN[0] +
                            coup59[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup14[i1] * MN[0] *
                           (coup59[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[3] * Mh[3]) -
                                      (MN[0] * MN[0]))) +
                            6 * coup58[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1]) +
             std::conj(coup14[j1]) *
                 (std::conj(coup59[j1]) *
                      (coup15[i1] * MN[0] *
                           (6 * u * coup58[i1] * (MZ * MZ) * MN[0] +
                            coup59[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[3] * Mh[3]) -
                                      (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup14[i1] *
                           (coup59[i1] *
                                ((MZ * MZ * MZ * MZ) *
                                     (u - 2 * (Mh[3] * Mh[3]) +
                                      2 * (MN[0] * MN[0])) -
                                 u * (MZ * MZ) *
                                     (s - t + u - 2 * (Mh[3] * Mh[3]) +
                                      2 * (MN[0] * MN[0])) +
                                 (u - (MN[0] * MN[0])) *
                                     (-(t * (Mh[3] * Mh[3])) -
                                      u * (Mh[3] * Mh[3]) +
                                      (Mh[3] * Mh[3] * Mh[3] * Mh[3]) +
                                      t * (MN[0] * MN[0]) +
                                      s * (u - (Mh[3] * Mh[3]) +
                                           (MN[0] * MN[0])) -
                                      (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            3 * coup58[i1] * (MZ * MZ) *
                                (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup58[j1]) *
                      (coup14[i1] *
                           (3 * coup59[i1] * (MZ * MZ) *
                                (u - (Mh[3] * Mh[3]) + (MN[0] * MN[0])) *
                                MN[0] +
                            coup58[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup15[i1] * MN[0] *
                           (coup58[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[3] * Mh[3]) -
                                      (MN[0] * MN[0]))) +
                            6 * coup59[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((MZ * MZ) * (u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
        j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1h5Z(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (MZ * MZ) + (Mh[4] * Mh[4]) +
         cos_t *
             sqrt(((MZ * MZ * MZ * MZ) +
                   ((s - (Mh[4] * Mh[4])) * (s - (Mh[4] * Mh[4]))) -
                   2 * (MZ * MZ) * (s + (Mh[4] * Mh[4]))) /
                  s) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (MZ * MZ) + (Mh[4] * Mh[4]) + 2 * (MN[0] * MN[0]);
    res += (coup65 * std::conj(coup65) *
            (std::conj(coup9) *
                 (coup9 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                           (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                  6 * coup8 * (MZ * MZ) * (MN[0] * MN[0])) +
             std::conj(coup8) *
                 (coup8 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                           (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                  6 * coup9 * (MZ * MZ) * (MN[0] * MN[0])))) /
           (((MZ * MZ * MZ) - MZ * s) * ((MZ * MZ * MZ) - MZ * s));

    SUM1((2 * std::conj(coup65) * coup64[i1] *
          (std::conj(coup9) *
               (coup3[i1] * ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[4] * Mh[4]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[4] * Mh[4])) * (t - (MN[0] * MN[0]))) +
                coup2[i1] * (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[4] * Mh[4]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[4] * Mh[4])) * (u - (MN[0] * MN[0])))) +
           std::conj(coup8) *
               (coup2[i1] * ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[4] * Mh[4]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[4] * Mh[4])) * (t - (MN[0] * MN[0]))) +
                coup3[i1] * (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[4] * Mh[4]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[4] * Mh[4])) * (u - (MN[0] * MN[0]))))) *
          MN[0]) /
             ((MZ * MZ) * (-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((2 * coup65 *
          (std::conj(coup18[j1]) *
               (-(std::conj(coup57[j1]) *
                  (3 * coup9 * (MZ * MZ) *
                       (s + u - (MZ * MZ) - 3 * (MN[0] * MN[0])) +
                   coup8 * (-2 * (MZ * MZ * MZ * MZ) +
                            ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                            (MZ * MZ) * (t + (MN[0] * MN[0])))) *
                  MN[0]) +
                std::conj(coup56[j1]) *
                    (coup9 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                     6 * coup8 * (MZ * MZ) * (MN[0] * MN[0])) *
                    MN[j1]) +
           std::conj(coup19[j1]) *
               (-(std::conj(coup56[j1]) *
                  (-3 * coup8 * (MZ * MZ) *
                       (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) +
                   coup9 * (-2 * (MZ * MZ * MZ * MZ) +
                            ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                            (MZ * MZ) * (t + (MN[0] * MN[0])))) *
                  MN[0]) +
                std::conj(coup57[j1]) *
                    (coup8 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                     6 * coup9 * (MZ * MZ) * (MN[0] * MN[0])) *
                    MN[j1]))) /
                 ((MZ * MZ) * (-s + (MZ * MZ)) * (t - (MN[j1] * MN[j1]))) +
             (2 * coup65 *
              (std::conj(coup19[j1]) *
                   (std::conj(coup58[j1]) *
                        (coup8 *
                             (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                              (u - (MN[0] * MN[0])) *
                                  (s + t - (Mh[4] * Mh[4]) - (MN[0] * MN[0]))) +
                         3 * coup9 * (MZ * MZ) *
                             (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup59[j1]) *
                        (coup9 *
                             ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                         6 * coup8 * (MZ * MZ) * (MN[0] * MN[0])) *
                        MN[j1]) +
               std::conj(coup18[j1]) *
                   (std::conj(coup59[j1]) *
                        (coup9 *
                             (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                              (u - (MN[0] * MN[0])) *
                                  (s + t - (Mh[4] * Mh[4]) - (MN[0] * MN[0]))) +
                         3 * coup8 * (MZ * MZ) *
                             (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup58[j1]) *
                        (coup8 *
                             ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                         6 * coup9 * (MZ * MZ) * (MN[0] * MN[0])) *
                        MN[j1]))) /
                 ((MZ * MZ) * (-s + (MZ * MZ)) * (u - (MN[j1] * MN[j1]))),
         j1, 5)

    SUM2((std::conj(coup64[j1]) * coup64[i1] *
          ((MZ * MZ * MZ * MZ) +
           ((s - (Mh[4] * Mh[4])) * (s - (Mh[4] * Mh[4]))) -
           2 * (MZ * MZ) * (s + (Mh[4] * Mh[4]))) *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((MZ * MZ) * (s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2(
        -((coup64[i1] *
           (std::conj(coup18[j1]) *
                (std::conj(coup59[j1]) *
                     (-2 * coup3[i1] * (MN[0] * MN[0]) *
                          (2 * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[4] * Mh[4])) *
                               (s + t - (Mh[4] * Mh[4]) - (MN[0] * MN[0])) +
                           (MZ * MZ) * (-3 * s - t - 2 * u + (Mh[4] * Mh[4]) +
                                        3 * (MN[0] * MN[0]))) +
                      coup2[i1] *
                          ((s - t + u) * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[4] * Mh[4])) *
                               ((s * s) - (t * t) + (u * u) -
                                u * (Mh[4] * Mh[4]) +
                                2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                                s * ((Mh[4] * Mh[4]) + 2 * (MN[0] * MN[0])) +
                                t * ((Mh[4] * Mh[4]) + 2 * (MN[0] * MN[0])) -
                                2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                           (MZ * MZ) *
                               (-2 * (s * s) + (t * t) - (u * u) +
                                2 * u * (Mh[4] * Mh[4]) +
                                10 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) +
                                s * (t - u - 2 * (Mh[4] * Mh[4]) +
                                     2 * (MN[0] * MN[0])) -
                                2 * t *
                                    ((Mh[4] * Mh[4]) + 3 * (MN[0] * MN[0])) +
                                6 * (MN[0] * MN[0] * MN[0] * MN[0])))) -
                 2 * std::conj(coup58[j1]) *
                     (coup2[i1] *
                          ((MZ * MZ * MZ * MZ) -
                           (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[4] * Mh[4]) -
                                        3 * (MN[0] * MN[0])) +
                           (s - (Mh[4] * Mh[4])) * (t - (MN[0] * MN[0]))) +
                      coup3[i1] *
                          (-(MZ * MZ * MZ * MZ) +
                           (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[4] * Mh[4]) -
                                        3 * (MN[0] * MN[0])) -
                           (s - (Mh[4] * Mh[4])) * (u - (MN[0] * MN[0])))) *
                     MN[0] * MN[j1]) +
            std::conj(coup19[j1]) *
                (std::conj(coup58[j1]) *
                     (-2 * coup2[i1] * (MN[0] * MN[0]) *
                          (2 * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[4] * Mh[4])) *
                               (s + t - (Mh[4] * Mh[4]) - (MN[0] * MN[0])) +
                           (MZ * MZ) * (-3 * s - t - 2 * u + (Mh[4] * Mh[4]) +
                                        3 * (MN[0] * MN[0]))) +
                      coup3[i1] *
                          ((s - t + u) * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[4] * Mh[4])) *
                               ((s * s) - (t * t) + (u * u) -
                                u * (Mh[4] * Mh[4]) +
                                2 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                                s * ((Mh[4] * Mh[4]) + 2 * (MN[0] * MN[0])) +
                                t * ((Mh[4] * Mh[4]) + 2 * (MN[0] * MN[0])) -
                                2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                           (MZ * MZ) *
                               (-2 * (s * s) + (t * t) - (u * u) +
                                2 * u * (Mh[4] * Mh[4]) +
                                10 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) +
                                s * (t - u - 2 * (Mh[4] * Mh[4]) +
                                     2 * (MN[0] * MN[0])) -
                                2 * t *
                                    ((Mh[4] * Mh[4]) + 3 * (MN[0] * MN[0])) +
                                6 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                 2 * std::conj(coup59[j1]) *
                     (coup3[i1] *
                          (-(MZ * MZ * MZ * MZ) +
                           (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[4] * Mh[4]) -
                                        3 * (MN[0] * MN[0])) -
                           (s - (Mh[4] * Mh[4])) * (t - (MN[0] * MN[0]))) +
                      coup2[i1] *
                          ((MZ * MZ * MZ * MZ) -
                           (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[4] * Mh[4]) -
                                        3 * (MN[0] * MN[0])) +
                           (s - (Mh[4] * Mh[4])) * (u - (MN[0] * MN[0])))) *
                     MN[0] * MN[j1]))) /
          ((MZ * MZ) * (s - (Mh[i1] * Mh[i1])) * (u - (MN[j1] * MN[j1])))) -
            (2 * coup64[i1] *
             (std::conj(coup18[j1]) *
                  (std::conj(coup57[j1]) *
                       (coup3[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[4] * Mh[4]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[4] * Mh[4])) * (t - (MN[0] * MN[0]))) *
                            (MN[0] * MN[0]) +
                        coup2[i1] *
                            ((MZ * MZ * MZ * MZ) *
                                 (s - t + u - 3 * (MN[0] * MN[0])) +
                             (s - (Mh[4] * Mh[4])) *
                                 (s * (t - (MN[0] * MN[0])) +
                                  (MN[0] * MN[0]) *
                                      (-2 * t - u + 3 * (MN[0] * MN[0]))) -
                             (MZ * MZ) *
                                 ((s * s) - (t * t) + (u * u) +
                                  t * (Mh[4] * Mh[4]) - u * (Mh[4] * Mh[4]) +
                                  s * (t + 2 * u - 3 * (Mh[4] * Mh[4]) -
                                       6 * (MN[0] * MN[0])) -
                                  2 * t * (MN[0] * MN[0]) -
                                  7 * u * (MN[0] * MN[0]) +
                                  9 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) +
                                  9 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                   std::conj(coup56[j1]) *
                       (coup3[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[4] * Mh[4]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[4] * Mh[4])) * (t - (MN[0] * MN[0]))) +
                        coup2[i1] *
                            ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[4] * Mh[4]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[4] * Mh[4])) * (u - (MN[0] * MN[0])))) *
                       MN[0] * MN[j1]) +
              std::conj(coup19[j1]) *
                  (std::conj(coup56[j1]) *
                       (coup2[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[4] * Mh[4]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[4] * Mh[4])) * (t - (MN[0] * MN[0]))) *
                            (MN[0] * MN[0]) +
                        coup3[i1] *
                            ((MZ * MZ * MZ * MZ) *
                                 (s - t + u - 3 * (MN[0] * MN[0])) +
                             (s - (Mh[4] * Mh[4])) *
                                 (s * (t - (MN[0] * MN[0])) +
                                  (MN[0] * MN[0]) *
                                      (-2 * t - u + 3 * (MN[0] * MN[0]))) -
                             (MZ * MZ) *
                                 ((s * s) - (t * t) + (u * u) +
                                  t * (Mh[4] * Mh[4]) - u * (Mh[4] * Mh[4]) +
                                  s * (t + 2 * u - 3 * (Mh[4] * Mh[4]) -
                                       6 * (MN[0] * MN[0])) -
                                  2 * t * (MN[0] * MN[0]) -
                                  7 * u * (MN[0] * MN[0]) +
                                  9 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) +
                                  9 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                   std::conj(coup57[j1]) *
                       (coup2[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[4] * Mh[4]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[4] * Mh[4])) * (t - (MN[0] * MN[0]))) +
                        coup3[i1] *
                            ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[4] * Mh[4]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[4] * Mh[4])) * (u - (MN[0] * MN[0])))) *
                       MN[0] * MN[j1]))) /
                ((MZ * MZ) * (s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))),
        j1, 5, i1, 6)

    SUM2(
        (std::conj(coup19[j1]) *
             (std::conj(coup56[j1]) *
                  (-(coup18[i1] * MN[0] *
                     (-6 * t * coup57[i1] * (MZ * MZ) * MN[0] +
                      coup56[i1] *
                          (-2 * (MZ * MZ * MZ * MZ) +
                           ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                           (MZ * MZ) * (t + (MN[0] * MN[0]))) *
                          MN[i1])) +
                   coup19[i1] *
                       (coup56[i1] *
                            (2 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                             (MZ * MZ * MZ * MZ) *
                                 (2 * s + 2 * t + 2 * u - 5 * (MN[0] * MN[0])) +
                             (MZ * MZ) * (t * (2 * u - (MN[0] * MN[0])) +
                                          (s + u - 4 * (MN[0] * MN[0])) *
                                              (MN[0] * MN[0])) -
                             (t - (MN[0] * MN[0])) *
                                 ((2 * t + u - 3 * (MN[0] * MN[0])) *
                                      (MN[0] * MN[0]) +
                                  s * (-t + (MN[0] * MN[0])))) +
                        3 * coup57[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] *
                            MN[i1])) +
              std::conj(coup57[j1]) *
                  (coup19[i1] *
                       (3 * coup56[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] +
                        coup57[i1] *
                            ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                             (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) *
                            MN[i1]) -
                   coup18[i1] * MN[0] *
                       (coup57[i1] *
                            (-2 * (MZ * MZ * MZ * MZ) +
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                             (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                        6 * coup56[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                  MN[j1]) +
         std::conj(coup18[j1]) *
             (std::conj(coup57[j1]) *
                  (-(coup19[i1] * MN[0] *
                     (-6 * t * coup56[i1] * (MZ * MZ) * MN[0] +
                      coup57[i1] *
                          (-2 * (MZ * MZ * MZ * MZ) +
                           ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                           (MZ * MZ) * (t + (MN[0] * MN[0]))) *
                          MN[i1])) +
                   coup18[i1] *
                       (coup57[i1] *
                            (2 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                             (MZ * MZ * MZ * MZ) *
                                 (2 * s + 2 * t + 2 * u - 5 * (MN[0] * MN[0])) +
                             (MZ * MZ) * (t * (2 * u - (MN[0] * MN[0])) +
                                          (s + u - 4 * (MN[0] * MN[0])) *
                                              (MN[0] * MN[0])) -
                             (t - (MN[0] * MN[0])) *
                                 ((2 * t + u - 3 * (MN[0] * MN[0])) *
                                      (MN[0] * MN[0]) +
                                  s * (-t + (MN[0] * MN[0])))) +
                        3 * coup56[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] *
                            MN[i1])) +
              std::conj(coup56[j1]) *
                  (coup18[i1] *
                       (3 * coup57[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] +
                        coup56[i1] *
                            ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                             (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) *
                            MN[i1]) -
                   coup19[i1] * MN[0] *
                       (coup56[i1] *
                            (-2 * (MZ * MZ * MZ * MZ) +
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                             (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                        6 * coup57[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                  MN[j1])) /
                ((MZ * MZ) * (t - (MN[i1] * MN[i1])) *
                 (t - (MN[j1] * MN[j1]))) +
            (std::conj(coup18[j1]) *
                 (std::conj(coup59[j1]) *
                      (-2 * coup19[i1] * MN[0] *
                           (coup56[i1] *
                                (-4 * (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (s + t - (Mh[4] * Mh[4]) -
                                      (MN[0] * MN[0])) +
                                 (MZ * MZ) * (2 * s + u - 3 * (Mh[4] * Mh[4]) +
                                              (MN[0] * MN[0]))) *
                                MN[0] -
                            3 * coup57[i1] * (MZ * MZ) *
                                (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                                MN[i1]) +
                       coup18[i1] *
                           (coup57[i1] *
                                (-(t * t * t) + t * (u * u) +
                                 4 * (MZ * MZ * MZ * MZ) *
                                     (u - (Mh[4] * Mh[4])) -
                                 t * u * (Mh[4] * Mh[4]) +
                                 (t * t) * (Mh[4] * Mh[4]) +
                                 (s * s) * (t - (MN[0] * MN[0])) -
                                 2 * t * u * (MN[0] * MN[0]) +
                                 3 * (t * t) * (MN[0] * MN[0]) -
                                 (u * u) * (MN[0] * MN[0]) +
                                 t * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) +
                                 3 * u * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                                 s * t *
                                     ((Mh[4] * Mh[4]) + 2 * (MN[0] * MN[0])) +
                                 s * (MN[0] * MN[0]) *
                                     (-2 * u + (Mh[4] * Mh[4]) +
                                      4 * (MN[0] * MN[0])) +
                                 (MZ * MZ) *
                                     (-(t * u) + (t * t) - 4 * (u * u) +
                                      4 * u * (Mh[4] * Mh[4]) +
                                      3 * t * (MN[0] * MN[0]) +
                                      13 * u * (MN[0] * MN[0]) -
                                      16 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) +
                                      s * (-t - 4 * u + 4 * (Mh[4] * Mh[4]) +
                                           (MN[0] * MN[0]))) -
                                 2 * t * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                 2 * u * (MN[0] * MN[0] * MN[0] * MN[0]) -
                                 4 * (Mh[4] * Mh[4]) *
                                     (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup56[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[4] * Mh[4]) -
                                      (MN[0] * MN[0]))) *
                                MN[0] * MN[i1])) +
                  2 * std::conj(coup58[j1]) *
                      (coup19[i1] *
                           (3 * coup56[i1] * (MZ * MZ) *
                                (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup57[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) -
                       coup18[i1] * MN[0] *
                           (coup57[i1] * (-2 * (MZ * MZ * MZ * MZ) +
                                          ((t - (MN[0] * MN[0])) *
                                           (t - (MN[0] * MN[0]))) +
                                          (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                            6 * coup56[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1]) +
             std::conj(coup19[j1]) *
                 (std::conj(coup58[j1]) *
                      (-2 * coup18[i1] * MN[0] *
                           (coup57[i1] *
                                (-4 * (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (s + t - (Mh[4] * Mh[4]) -
                                      (MN[0] * MN[0])) +
                                 (MZ * MZ) * (2 * s + u - 3 * (Mh[4] * Mh[4]) +
                                              (MN[0] * MN[0]))) *
                                MN[0] -
                            3 * coup56[i1] * (MZ * MZ) *
                                (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                                MN[i1]) +
                       coup19[i1] *
                           (coup56[i1] *
                                (-(t * t * t) + t * (u * u) +
                                 4 * (MZ * MZ * MZ * MZ) *
                                     (u - (Mh[4] * Mh[4])) -
                                 t * u * (Mh[4] * Mh[4]) +
                                 (t * t) * (Mh[4] * Mh[4]) +
                                 (s * s) * (t - (MN[0] * MN[0])) -
                                 2 * t * u * (MN[0] * MN[0]) +
                                 3 * (t * t) * (MN[0] * MN[0]) -
                                 (u * u) * (MN[0] * MN[0]) +
                                 t * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) +
                                 3 * u * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) -
                                 s * t *
                                     ((Mh[4] * Mh[4]) + 2 * (MN[0] * MN[0])) +
                                 s * (MN[0] * MN[0]) *
                                     (-2 * u + (Mh[4] * Mh[4]) +
                                      4 * (MN[0] * MN[0])) +
                                 (MZ * MZ) *
                                     (-(t * u) + (t * t) - 4 * (u * u) +
                                      4 * u * (Mh[4] * Mh[4]) +
                                      3 * t * (MN[0] * MN[0]) +
                                      13 * u * (MN[0] * MN[0]) -
                                      16 * (Mh[4] * Mh[4]) * (MN[0] * MN[0]) +
                                      s * (-t - 4 * u + 4 * (Mh[4] * Mh[4]) +
                                           (MN[0] * MN[0]))) -
                                 2 * t * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                 2 * u * (MN[0] * MN[0] * MN[0] * MN[0]) -
                                 4 * (Mh[4] * Mh[4]) *
                                     (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup57[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[4] * Mh[4]) -
                                      (MN[0] * MN[0]))) *
                                MN[0] * MN[i1])) +
                  2 * std::conj(coup59[j1]) *
                      (coup18[i1] *
                           (3 * coup57[i1] * (MZ * MZ) *
                                (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup56[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) -
                       coup19[i1] * MN[0] *
                           (coup56[i1] * (-2 * (MZ * MZ * MZ * MZ) +
                                          ((t - (MN[0] * MN[0])) *
                                           (t - (MN[0] * MN[0]))) +
                                          (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                            6 * coup57[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((MZ * MZ) * (t - (MN[i1] * MN[i1])) *
                 (u - (MN[j1] * MN[j1]))) +
            (std::conj(coup19[j1]) *
                 (std::conj(coup58[j1]) *
                      (coup18[i1] * MN[0] *
                           (6 * u * coup59[i1] * (MZ * MZ) * MN[0] +
                            coup58[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[4] * Mh[4]) -
                                      (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup19[i1] *
                           (coup58[i1] *
                                ((MZ * MZ * MZ * MZ) *
                                     (u - 2 * (Mh[4] * Mh[4]) +
                                      2 * (MN[0] * MN[0])) -
                                 u * (MZ * MZ) *
                                     (s - t + u - 2 * (Mh[4] * Mh[4]) +
                                      2 * (MN[0] * MN[0])) +
                                 (u - (MN[0] * MN[0])) *
                                     (-(t * (Mh[4] * Mh[4])) -
                                      u * (Mh[4] * Mh[4]) +
                                      (Mh[4] * Mh[4] * Mh[4] * Mh[4]) +
                                      t * (MN[0] * MN[0]) +
                                      s * (u - (Mh[4] * Mh[4]) +
                                           (MN[0] * MN[0])) -
                                      (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            3 * coup59[i1] * (MZ * MZ) *
                                (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup59[j1]) *
                      (coup19[i1] *
                           (3 * coup58[i1] * (MZ * MZ) *
                                (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                                MN[0] +
                            coup59[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup18[i1] * MN[0] *
                           (coup59[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[4] * Mh[4]) -
                                      (MN[0] * MN[0]))) +
                            6 * coup58[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1]) +
             std::conj(coup18[j1]) *
                 (std::conj(coup59[j1]) *
                      (coup19[i1] * MN[0] *
                           (6 * u * coup58[i1] * (MZ * MZ) * MN[0] +
                            coup59[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[4] * Mh[4]) -
                                      (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup18[i1] *
                           (coup59[i1] *
                                ((MZ * MZ * MZ * MZ) *
                                     (u - 2 * (Mh[4] * Mh[4]) +
                                      2 * (MN[0] * MN[0])) -
                                 u * (MZ * MZ) *
                                     (s - t + u - 2 * (Mh[4] * Mh[4]) +
                                      2 * (MN[0] * MN[0])) +
                                 (u - (MN[0] * MN[0])) *
                                     (-(t * (Mh[4] * Mh[4])) -
                                      u * (Mh[4] * Mh[4]) +
                                      (Mh[4] * Mh[4] * Mh[4] * Mh[4]) +
                                      t * (MN[0] * MN[0]) +
                                      s * (u - (Mh[4] * Mh[4]) +
                                           (MN[0] * MN[0])) -
                                      (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            3 * coup58[i1] * (MZ * MZ) *
                                (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup58[j1]) *
                      (coup18[i1] *
                           (3 * coup59[i1] * (MZ * MZ) *
                                (u - (Mh[4] * Mh[4]) + (MN[0] * MN[0])) *
                                MN[0] +
                            coup58[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup19[i1] * MN[0] *
                           (coup58[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[4] * Mh[4]) -
                                      (MN[0] * MN[0]))) +
                            6 * coup59[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((MZ * MZ) * (u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
        j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1h6Z(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (MZ * MZ) + (Mh[5] * Mh[5]) +
         cos_t *
             sqrt(((MZ * MZ * MZ * MZ) +
                   ((s - (Mh[5] * Mh[5])) * (s - (Mh[5] * Mh[5]))) -
                   2 * (MZ * MZ) * (s + (Mh[5] * Mh[5]))) /
                  s) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (MZ * MZ) + (Mh[5] * Mh[5]) + 2 * (MN[0] * MN[0]);
    res += (coup67 * std::conj(coup67) *
            (std::conj(coup9) *
                 (coup9 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                           (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                  6 * coup8 * (MZ * MZ) * (MN[0] * MN[0])) +
             std::conj(coup8) *
                 (coup8 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                           (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                  6 * coup9 * (MZ * MZ) * (MN[0] * MN[0])))) /
           (((MZ * MZ * MZ) - MZ * s) * ((MZ * MZ * MZ) - MZ * s));

    SUM1((2 * std::conj(coup67) * coup66[i1] *
          (std::conj(coup9) *
               (coup3[i1] * ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[5] * Mh[5]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[5] * Mh[5])) * (t - (MN[0] * MN[0]))) +
                coup2[i1] * (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[5] * Mh[5]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[5] * Mh[5])) * (u - (MN[0] * MN[0])))) +
           std::conj(coup8) *
               (coup2[i1] * ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[5] * Mh[5]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[5] * Mh[5])) * (t - (MN[0] * MN[0]))) +
                coup3[i1] * (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[5] * Mh[5]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[5] * Mh[5])) * (u - (MN[0] * MN[0]))))) *
          MN[0]) /
             ((MZ * MZ) * (-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((2 * coup67 *
          (std::conj(coup22[j1]) *
               (-(std::conj(coup57[j1]) *
                  (3 * coup9 * (MZ * MZ) *
                       (s + u - (MZ * MZ) - 3 * (MN[0] * MN[0])) +
                   coup8 * (-2 * (MZ * MZ * MZ * MZ) +
                            ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                            (MZ * MZ) * (t + (MN[0] * MN[0])))) *
                  MN[0]) +
                std::conj(coup56[j1]) *
                    (coup9 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                     6 * coup8 * (MZ * MZ) * (MN[0] * MN[0])) *
                    MN[j1]) +
           std::conj(coup23[j1]) *
               (-(std::conj(coup56[j1]) *
                  (-3 * coup8 * (MZ * MZ) *
                       (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) +
                   coup9 * (-2 * (MZ * MZ * MZ * MZ) +
                            ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                            (MZ * MZ) * (t + (MN[0] * MN[0])))) *
                  MN[0]) +
                std::conj(coup57[j1]) *
                    (coup8 * ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                     6 * coup9 * (MZ * MZ) * (MN[0] * MN[0])) *
                    MN[j1]))) /
                 ((MZ * MZ) * (-s + (MZ * MZ)) * (t - (MN[j1] * MN[j1]))) +
             (2 * coup67 *
              (std::conj(coup23[j1]) *
                   (std::conj(coup58[j1]) *
                        (coup8 *
                             (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                              (u - (MN[0] * MN[0])) *
                                  (s + t - (Mh[5] * Mh[5]) - (MN[0] * MN[0]))) +
                         3 * coup9 * (MZ * MZ) *
                             (u - (Mh[5] * Mh[5]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup59[j1]) *
                        (coup9 *
                             ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                         6 * coup8 * (MZ * MZ) * (MN[0] * MN[0])) *
                        MN[j1]) +
               std::conj(coup22[j1]) *
                   (std::conj(coup59[j1]) *
                        (coup9 *
                             (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                              (u - (MN[0] * MN[0])) *
                                  (s + t - (Mh[5] * Mh[5]) - (MN[0] * MN[0]))) +
                         3 * coup8 * (MZ * MZ) *
                             (u - (Mh[5] * Mh[5]) + (MN[0] * MN[0]))) *
                        MN[0] +
                    std::conj(coup58[j1]) *
                        (coup8 *
                             ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                         6 * coup9 * (MZ * MZ) * (MN[0] * MN[0])) *
                        MN[j1]))) /
                 ((MZ * MZ) * (-s + (MZ * MZ)) * (u - (MN[j1] * MN[j1]))),
         j1, 5)

    SUM2((std::conj(coup66[j1]) * coup66[i1] *
          ((MZ * MZ * MZ * MZ) +
           ((s - (Mh[5] * Mh[5])) * (s - (Mh[5] * Mh[5]))) -
           2 * (MZ * MZ) * (s + (Mh[5] * Mh[5]))) *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((MZ * MZ) * (s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2(
        -((coup66[i1] *
           (std::conj(coup22[j1]) *
                (std::conj(coup59[j1]) *
                     (-2 * coup3[i1] * (MN[0] * MN[0]) *
                          (2 * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[5] * Mh[5])) *
                               (s + t - (Mh[5] * Mh[5]) - (MN[0] * MN[0])) +
                           (MZ * MZ) * (-3 * s - t - 2 * u + (Mh[5] * Mh[5]) +
                                        3 * (MN[0] * MN[0]))) +
                      coup2[i1] *
                          ((s - t + u) * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[5] * Mh[5])) *
                               ((s * s) - (t * t) + (u * u) -
                                u * (Mh[5] * Mh[5]) +
                                2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                                s * ((Mh[5] * Mh[5]) + 2 * (MN[0] * MN[0])) +
                                t * ((Mh[5] * Mh[5]) + 2 * (MN[0] * MN[0])) -
                                2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                           (MZ * MZ) *
                               (-2 * (s * s) + (t * t) - (u * u) +
                                2 * u * (Mh[5] * Mh[5]) +
                                10 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) +
                                s * (t - u - 2 * (Mh[5] * Mh[5]) +
                                     2 * (MN[0] * MN[0])) -
                                2 * t *
                                    ((Mh[5] * Mh[5]) + 3 * (MN[0] * MN[0])) +
                                6 * (MN[0] * MN[0] * MN[0] * MN[0])))) -
                 2 * std::conj(coup58[j1]) *
                     (coup2[i1] *
                          ((MZ * MZ * MZ * MZ) -
                           (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[5] * Mh[5]) -
                                        3 * (MN[0] * MN[0])) +
                           (s - (Mh[5] * Mh[5])) * (t - (MN[0] * MN[0]))) +
                      coup3[i1] *
                          (-(MZ * MZ * MZ * MZ) +
                           (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[5] * Mh[5]) -
                                        3 * (MN[0] * MN[0])) -
                           (s - (Mh[5] * Mh[5])) * (u - (MN[0] * MN[0])))) *
                     MN[0] * MN[j1]) +
            std::conj(coup23[j1]) *
                (std::conj(coup58[j1]) *
                     (-2 * coup2[i1] * (MN[0] * MN[0]) *
                          (2 * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[5] * Mh[5])) *
                               (s + t - (Mh[5] * Mh[5]) - (MN[0] * MN[0])) +
                           (MZ * MZ) * (-3 * s - t - 2 * u + (Mh[5] * Mh[5]) +
                                        3 * (MN[0] * MN[0]))) +
                      coup3[i1] *
                          ((s - t + u) * (MZ * MZ * MZ * MZ) +
                           (s - (Mh[5] * Mh[5])) *
                               ((s * s) - (t * t) + (u * u) -
                                u * (Mh[5] * Mh[5]) +
                                2 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                                s * ((Mh[5] * Mh[5]) + 2 * (MN[0] * MN[0])) +
                                t * ((Mh[5] * Mh[5]) + 2 * (MN[0] * MN[0])) -
                                2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                           (MZ * MZ) *
                               (-2 * (s * s) + (t * t) - (u * u) +
                                2 * u * (Mh[5] * Mh[5]) +
                                10 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) +
                                s * (t - u - 2 * (Mh[5] * Mh[5]) +
                                     2 * (MN[0] * MN[0])) -
                                2 * t *
                                    ((Mh[5] * Mh[5]) + 3 * (MN[0] * MN[0])) +
                                6 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                 2 * std::conj(coup59[j1]) *
                     (coup3[i1] *
                          (-(MZ * MZ * MZ * MZ) +
                           (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[5] * Mh[5]) -
                                        3 * (MN[0] * MN[0])) -
                           (s - (Mh[5] * Mh[5])) * (t - (MN[0] * MN[0]))) +
                      coup2[i1] *
                          ((MZ * MZ * MZ * MZ) -
                           (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[5] * Mh[5]) -
                                        3 * (MN[0] * MN[0])) +
                           (s - (Mh[5] * Mh[5])) * (u - (MN[0] * MN[0])))) *
                     MN[0] * MN[j1]))) /
          ((MZ * MZ) * (s - (Mh[i1] * Mh[i1])) * (u - (MN[j1] * MN[j1])))) -
            (2 * coup66[i1] *
             (std::conj(coup22[j1]) *
                  (std::conj(coup57[j1]) *
                       (coup3[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[5] * Mh[5]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[5] * Mh[5])) * (t - (MN[0] * MN[0]))) *
                            (MN[0] * MN[0]) +
                        coup2[i1] *
                            ((MZ * MZ * MZ * MZ) *
                                 (s - t + u - 3 * (MN[0] * MN[0])) +
                             (s - (Mh[5] * Mh[5])) *
                                 (s * (t - (MN[0] * MN[0])) +
                                  (MN[0] * MN[0]) *
                                      (-2 * t - u + 3 * (MN[0] * MN[0]))) -
                             (MZ * MZ) *
                                 ((s * s) - (t * t) + (u * u) +
                                  t * (Mh[5] * Mh[5]) - u * (Mh[5] * Mh[5]) +
                                  s * (t + 2 * u - 3 * (Mh[5] * Mh[5]) -
                                       6 * (MN[0] * MN[0])) -
                                  2 * t * (MN[0] * MN[0]) -
                                  7 * u * (MN[0] * MN[0]) +
                                  9 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) +
                                  9 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                   std::conj(coup56[j1]) *
                       (coup3[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[5] * Mh[5]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[5] * Mh[5])) * (t - (MN[0] * MN[0]))) +
                        coup2[i1] *
                            ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[5] * Mh[5]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[5] * Mh[5])) * (u - (MN[0] * MN[0])))) *
                       MN[0] * MN[j1]) +
              std::conj(coup23[j1]) *
                  (std::conj(coup56[j1]) *
                       (coup2[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[5] * Mh[5]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[5] * Mh[5])) * (t - (MN[0] * MN[0]))) *
                            (MN[0] * MN[0]) +
                        coup3[i1] *
                            ((MZ * MZ * MZ * MZ) *
                                 (s - t + u - 3 * (MN[0] * MN[0])) +
                             (s - (Mh[5] * Mh[5])) *
                                 (s * (t - (MN[0] * MN[0])) +
                                  (MN[0] * MN[0]) *
                                      (-2 * t - u + 3 * (MN[0] * MN[0]))) -
                             (MZ * MZ) *
                                 ((s * s) - (t * t) + (u * u) +
                                  t * (Mh[5] * Mh[5]) - u * (Mh[5] * Mh[5]) +
                                  s * (t + 2 * u - 3 * (Mh[5] * Mh[5]) -
                                       6 * (MN[0] * MN[0])) -
                                  2 * t * (MN[0] * MN[0]) -
                                  7 * u * (MN[0] * MN[0]) +
                                  9 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) +
                                  9 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                   std::conj(coup57[j1]) *
                       (coup2[i1] *
                            (-(MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (s + t + 2 * u - 3 * (Mh[5] * Mh[5]) -
                                          3 * (MN[0] * MN[0])) -
                             (s - (Mh[5] * Mh[5])) * (t - (MN[0] * MN[0]))) +
                        coup3[i1] *
                            ((MZ * MZ * MZ * MZ) -
                             (MZ * MZ) * (s + 2 * t + u - 3 * (Mh[5] * Mh[5]) -
                                          3 * (MN[0] * MN[0])) +
                             (s - (Mh[5] * Mh[5])) * (u - (MN[0] * MN[0])))) *
                       MN[0] * MN[j1]))) /
                ((MZ * MZ) * (s - (Mh[i1] * Mh[i1])) * (t - (MN[j1] * MN[j1]))),
        j1, 5, i1, 6)

    SUM2(
        (std::conj(coup23[j1]) *
             (std::conj(coup56[j1]) *
                  (-(coup22[i1] * MN[0] *
                     (-6 * t * coup57[i1] * (MZ * MZ) * MN[0] +
                      coup56[i1] *
                          (-2 * (MZ * MZ * MZ * MZ) +
                           ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                           (MZ * MZ) * (t + (MN[0] * MN[0]))) *
                          MN[i1])) +
                   coup23[i1] *
                       (coup56[i1] *
                            (2 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                             (MZ * MZ * MZ * MZ) *
                                 (2 * s + 2 * t + 2 * u - 5 * (MN[0] * MN[0])) +
                             (MZ * MZ) * (t * (2 * u - (MN[0] * MN[0])) +
                                          (s + u - 4 * (MN[0] * MN[0])) *
                                              (MN[0] * MN[0])) -
                             (t - (MN[0] * MN[0])) *
                                 ((2 * t + u - 3 * (MN[0] * MN[0])) *
                                      (MN[0] * MN[0]) +
                                  s * (-t + (MN[0] * MN[0])))) +
                        3 * coup57[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] *
                            MN[i1])) +
              std::conj(coup57[j1]) *
                  (coup23[i1] *
                       (3 * coup56[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] +
                        coup57[i1] *
                            ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                             (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) *
                            MN[i1]) -
                   coup22[i1] * MN[0] *
                       (coup57[i1] *
                            (-2 * (MZ * MZ * MZ * MZ) +
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                             (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                        6 * coup56[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                  MN[j1]) +
         std::conj(coup22[j1]) *
             (std::conj(coup57[j1]) *
                  (-(coup23[i1] * MN[0] *
                     (-6 * t * coup56[i1] * (MZ * MZ) * MN[0] +
                      coup57[i1] *
                          (-2 * (MZ * MZ * MZ * MZ) +
                           ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                           (MZ * MZ) * (t + (MN[0] * MN[0]))) *
                          MN[i1])) +
                   coup22[i1] *
                       (coup57[i1] *
                            (2 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                             (MZ * MZ * MZ * MZ) *
                                 (2 * s + 2 * t + 2 * u - 5 * (MN[0] * MN[0])) +
                             (MZ * MZ) * (t * (2 * u - (MN[0] * MN[0])) +
                                          (s + u - 4 * (MN[0] * MN[0])) *
                                              (MN[0] * MN[0])) -
                             (t - (MN[0] * MN[0])) *
                                 ((2 * t + u - 3 * (MN[0] * MN[0])) *
                                      (MN[0] * MN[0]) +
                                  s * (-t + (MN[0] * MN[0])))) +
                        3 * coup56[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] *
                            MN[i1])) +
              std::conj(coup56[j1]) *
                  (coup22[i1] *
                       (3 * coup57[i1] * (MZ * MZ) *
                            (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) * MN[0] +
                        coup56[i1] *
                            ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                             (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) *
                            MN[i1]) -
                   coup23[i1] * MN[0] *
                       (coup56[i1] *
                            (-2 * (MZ * MZ * MZ * MZ) +
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                             (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                        6 * coup57[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                  MN[j1])) /
                ((MZ * MZ) * (t - (MN[i1] * MN[i1])) *
                 (t - (MN[j1] * MN[j1]))) +
            (std::conj(coup22[j1]) *
                 (std::conj(coup59[j1]) *
                      (-2 * coup23[i1] * MN[0] *
                           (coup56[i1] *
                                (-4 * (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (s + t - (Mh[5] * Mh[5]) -
                                      (MN[0] * MN[0])) +
                                 (MZ * MZ) * (2 * s + u - 3 * (Mh[5] * Mh[5]) +
                                              (MN[0] * MN[0]))) *
                                MN[0] -
                            3 * coup57[i1] * (MZ * MZ) *
                                (u - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                                MN[i1]) +
                       coup22[i1] *
                           (coup57[i1] *
                                (-(t * t * t) + t * (u * u) +
                                 4 * (MZ * MZ * MZ * MZ) *
                                     (u - (Mh[5] * Mh[5])) -
                                 t * u * (Mh[5] * Mh[5]) +
                                 (t * t) * (Mh[5] * Mh[5]) +
                                 (s * s) * (t - (MN[0] * MN[0])) -
                                 2 * t * u * (MN[0] * MN[0]) +
                                 3 * (t * t) * (MN[0] * MN[0]) -
                                 (u * u) * (MN[0] * MN[0]) +
                                 t * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) +
                                 3 * u * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                                 s * t *
                                     ((Mh[5] * Mh[5]) + 2 * (MN[0] * MN[0])) +
                                 s * (MN[0] * MN[0]) *
                                     (-2 * u + (Mh[5] * Mh[5]) +
                                      4 * (MN[0] * MN[0])) +
                                 (MZ * MZ) *
                                     (-(t * u) + (t * t) - 4 * (u * u) +
                                      4 * u * (Mh[5] * Mh[5]) +
                                      3 * t * (MN[0] * MN[0]) +
                                      13 * u * (MN[0] * MN[0]) -
                                      16 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) +
                                      s * (-t - 4 * u + 4 * (Mh[5] * Mh[5]) +
                                           (MN[0] * MN[0]))) -
                                 2 * t * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                 2 * u * (MN[0] * MN[0] * MN[0] * MN[0]) -
                                 4 * (Mh[5] * Mh[5]) *
                                     (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup56[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[5] * Mh[5]) -
                                      (MN[0] * MN[0]))) *
                                MN[0] * MN[i1])) +
                  2 * std::conj(coup58[j1]) *
                      (coup23[i1] *
                           (3 * coup56[i1] * (MZ * MZ) *
                                (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup57[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) -
                       coup22[i1] * MN[0] *
                           (coup57[i1] * (-2 * (MZ * MZ * MZ * MZ) +
                                          ((t - (MN[0] * MN[0])) *
                                           (t - (MN[0] * MN[0]))) +
                                          (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                            6 * coup56[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1]) +
             std::conj(coup23[j1]) *
                 (std::conj(coup58[j1]) *
                      (-2 * coup22[i1] * MN[0] *
                           (coup57[i1] *
                                (-4 * (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (s + t - (Mh[5] * Mh[5]) -
                                      (MN[0] * MN[0])) +
                                 (MZ * MZ) * (2 * s + u - 3 * (Mh[5] * Mh[5]) +
                                              (MN[0] * MN[0]))) *
                                MN[0] -
                            3 * coup56[i1] * (MZ * MZ) *
                                (u - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                                MN[i1]) +
                       coup23[i1] *
                           (coup56[i1] *
                                (-(t * t * t) + t * (u * u) +
                                 4 * (MZ * MZ * MZ * MZ) *
                                     (u - (Mh[5] * Mh[5])) -
                                 t * u * (Mh[5] * Mh[5]) +
                                 (t * t) * (Mh[5] * Mh[5]) +
                                 (s * s) * (t - (MN[0] * MN[0])) -
                                 2 * t * u * (MN[0] * MN[0]) +
                                 3 * (t * t) * (MN[0] * MN[0]) -
                                 (u * u) * (MN[0] * MN[0]) +
                                 t * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) +
                                 3 * u * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) -
                                 s * t *
                                     ((Mh[5] * Mh[5]) + 2 * (MN[0] * MN[0])) +
                                 s * (MN[0] * MN[0]) *
                                     (-2 * u + (Mh[5] * Mh[5]) +
                                      4 * (MN[0] * MN[0])) +
                                 (MZ * MZ) *
                                     (-(t * u) + (t * t) - 4 * (u * u) +
                                      4 * u * (Mh[5] * Mh[5]) +
                                      3 * t * (MN[0] * MN[0]) +
                                      13 * u * (MN[0] * MN[0]) -
                                      16 * (Mh[5] * Mh[5]) * (MN[0] * MN[0]) +
                                      s * (-t - 4 * u + 4 * (Mh[5] * Mh[5]) +
                                           (MN[0] * MN[0]))) -
                                 2 * t * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                 2 * u * (MN[0] * MN[0] * MN[0] * MN[0]) -
                                 4 * (Mh[5] * Mh[5]) *
                                     (MN[0] * MN[0] * MN[0] * MN[0])) +
                            2 * coup57[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[5] * Mh[5]) -
                                      (MN[0] * MN[0]))) *
                                MN[0] * MN[i1])) +
                  2 * std::conj(coup59[j1]) *
                      (coup22[i1] *
                           (3 * coup57[i1] * (MZ * MZ) *
                                (-s - u + (MZ * MZ) + 3 * (MN[0] * MN[0])) *
                                MN[0] +
                            coup56[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) -
                       coup23[i1] * MN[0] *
                           (coup56[i1] * (-2 * (MZ * MZ * MZ * MZ) +
                                          ((t - (MN[0] * MN[0])) *
                                           (t - (MN[0] * MN[0]))) +
                                          (MZ * MZ) * (t + (MN[0] * MN[0]))) -
                            6 * coup57[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((MZ * MZ) * (t - (MN[i1] * MN[i1])) *
                 (u - (MN[j1] * MN[j1]))) +
            (std::conj(coup23[j1]) *
                 (std::conj(coup58[j1]) *
                      (coup22[i1] * MN[0] *
                           (6 * u * coup59[i1] * (MZ * MZ) * MN[0] +
                            coup58[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[5] * Mh[5]) -
                                      (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup23[i1] *
                           (coup58[i1] *
                                ((MZ * MZ * MZ * MZ) *
                                     (u - 2 * (Mh[5] * Mh[5]) +
                                      2 * (MN[0] * MN[0])) -
                                 u * (MZ * MZ) *
                                     (s - t + u - 2 * (Mh[5] * Mh[5]) +
                                      2 * (MN[0] * MN[0])) +
                                 (u - (MN[0] * MN[0])) *
                                     (-(t * (Mh[5] * Mh[5])) -
                                      u * (Mh[5] * Mh[5]) +
                                      (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                                      t * (MN[0] * MN[0]) +
                                      s * (u - (Mh[5] * Mh[5]) +
                                           (MN[0] * MN[0])) -
                                      (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            3 * coup59[i1] * (MZ * MZ) *
                                (u - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup59[j1]) *
                      (coup23[i1] *
                           (3 * coup58[i1] * (MZ * MZ) *
                                (u - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                                MN[0] +
                            coup59[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup22[i1] * MN[0] *
                           (coup59[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[5] * Mh[5]) -
                                      (MN[0] * MN[0]))) +
                            6 * coup58[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1]) +
             std::conj(coup22[j1]) *
                 (std::conj(coup59[j1]) *
                      (coup23[i1] * MN[0] *
                           (6 * u * coup58[i1] * (MZ * MZ) * MN[0] +
                            coup59[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[5] * Mh[5]) -
                                      (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup22[i1] *
                           (coup59[i1] *
                                ((MZ * MZ * MZ * MZ) *
                                     (u - 2 * (Mh[5] * Mh[5]) +
                                      2 * (MN[0] * MN[0])) -
                                 u * (MZ * MZ) *
                                     (s - t + u - 2 * (Mh[5] * Mh[5]) +
                                      2 * (MN[0] * MN[0])) +
                                 (u - (MN[0] * MN[0])) *
                                     (-(t * (Mh[5] * Mh[5])) -
                                      u * (Mh[5] * Mh[5]) +
                                      (Mh[5] * Mh[5] * Mh[5] * Mh[5]) +
                                      t * (MN[0] * MN[0]) +
                                      s * (u - (Mh[5] * Mh[5]) +
                                           (MN[0] * MN[0])) -
                                      (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            3 * coup58[i1] * (MZ * MZ) *
                                (u - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                                MN[0] * MN[i1])) +
                  std::conj(coup58[j1]) *
                      (coup22[i1] *
                           (3 * coup59[i1] * (MZ * MZ) *
                                (u - (Mh[5] * Mh[5]) + (MN[0] * MN[0])) *
                                MN[0] +
                            coup58[i1] *
                                ((s - t - u) * (MZ * MZ) + (MZ * MZ * MZ * MZ) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup23[i1] * MN[0] *
                           (coup58[i1] *
                                (-2 * u * (MZ * MZ) + 2 * (MZ * MZ * MZ * MZ) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (Mh[5] * Mh[5]) -
                                      (MN[0] * MN[0]))) +
                            6 * coup59[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((MZ * MZ) * (u - (MN[i1] * MN[i1])) * (u - (MN[j1] * MN[j1]))),
        j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1Hpm1W(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (MWm * MWm) + (MHm[0] * MHm[0]) +
         cos_t *
             sqrt(((MWm * MWm * MWm * MWm) +
                   ((s - (MHm[0] * MHm[0])) * (s - (MHm[0] * MHm[0]))) -
                   2 * (MWm * MWm) * (s + (MHm[0] * MHm[0]))) /
                  s) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (MWm * MWm) + (MHm[0] * MHm[0]) + 2 * (MN[0] * MN[0]);
    res += (coup69 * std::conj(coup69) *
            (std::conj(coup9) *
                 (coup9 * ((s - t - u) * (MWm * MWm) + (MWm * MWm * MWm * MWm) +
                           (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                  6 * coup8 * (MWm * MWm) * (MN[0] * MN[0])) +
             std::conj(coup8) *
                 (coup8 * ((s - t - u) * (MWm * MWm) + (MWm * MWm * MWm * MWm) +
                           (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                  6 * coup9 * (MWm * MWm) * (MN[0] * MN[0])))) /
           ((MWm * MWm) * (((MZ * MZ) - s) * ((MZ * MZ) - s)));

    SUM1((2 * std::conj(coup69) * coup68[i1] *
          (std::conj(coup9) *
               (coup3[i1] *
                    ((MWm * MWm * MWm * MWm) -
                     (MWm * MWm) * (s + t + 2 * u - 3 * (MHm[0] * MHm[0]) -
                                    3 * (MN[0] * MN[0])) +
                     (s - (MHm[0] * MHm[0])) * (t - (MN[0] * MN[0]))) +
                coup2[i1] *
                    (-(MWm * MWm * MWm * MWm) +
                     (MWm * MWm) * (s + 2 * t + u - 3 * (MHm[0] * MHm[0]) -
                                    3 * (MN[0] * MN[0])) -
                     (s - (MHm[0] * MHm[0])) * (u - (MN[0] * MN[0])))) +
           std::conj(coup8) *
               (coup2[i1] *
                    ((MWm * MWm * MWm * MWm) -
                     (MWm * MWm) * (s + t + 2 * u - 3 * (MHm[0] * MHm[0]) -
                                    3 * (MN[0] * MN[0])) +
                     (s - (MHm[0] * MHm[0])) * (t - (MN[0] * MN[0]))) +
                coup3[i1] *
                    (-(MWm * MWm * MWm * MWm) +
                     (MWm * MWm) * (s + 2 * t + u - 3 * (MHm[0] * MHm[0]) -
                                    3 * (MN[0] * MN[0])) -
                     (s - (MHm[0] * MHm[0])) * (u - (MN[0] * MN[0]))))) *
          MN[0]) /
             ((MWm * MWm) * (-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((2 * coup69 *
          (std::conj(coup44[j1]) *
               (std::conj(coup73[j1]) *
                    (coup8 *
                         ((s - t - u) * (MWm * MWm) + (MWm * MWm * MWm * MWm) +
                          (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                     6 * coup9 * (MWm * MWm) * (MN[0] * MN[0])) *
                    MC[j1] +
                std::conj(coup72[j1]) *
                    (coup9 *
                         (-2 * u * (MWm * MWm) + 2 * (MWm * MWm * MWm * MWm) +
                          (u - (MN[0] * MN[0])) *
                              (s + t - (MHm[0] * MHm[0]) - (MN[0] * MN[0]))) +
                     3 * coup8 * (MWm * MWm) *
                         (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0]))) *
                    MN[0]) +
           std::conj(coup45[j1]) *
               (std::conj(coup72[j1]) *
                    (coup9 *
                         ((s - t - u) * (MWm * MWm) + (MWm * MWm * MWm * MWm) +
                          (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                     6 * coup8 * (MWm * MWm) * (MN[0] * MN[0])) *
                    MC[j1] +
                std::conj(coup73[j1]) *
                    (coup8 *
                         (-2 * u * (MWm * MWm) + 2 * (MWm * MWm * MWm * MWm) +
                          (u - (MN[0] * MN[0])) *
                              (s + t - (MHm[0] * MHm[0]) - (MN[0] * MN[0]))) +
                     3 * coup9 * (MWm * MWm) *
                         (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0]))) *
                    MN[0]))) /
                 ((MWm * MWm) * (-s + (MZ * MZ)) * (u - (MC[j1] * MC[j1]))) +
             (2 * coup69 *
              (std::conj(coup44[j1]) *
                   (std::conj(coup71[j1]) *
                        (coup9 *
                             ((s - t - u) * (MWm * MWm) +
                              (MWm * MWm * MWm * MWm) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                         6 * coup8 * (MWm * MWm) * (MN[0] * MN[0])) *
                        MC[j1] -
                    std::conj(coup70[j1]) *
                        (3 * coup9 * (MWm * MWm) *
                             (s + u - (MWm * MWm) - 3 * (MN[0] * MN[0])) +
                         coup8 *
                             (-2 * (MWm * MWm * MWm * MWm) +
                              ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                              (MWm * MWm) * (t + (MN[0] * MN[0])))) *
                        MN[0]) +
               std::conj(coup45[j1]) *
                   (std::conj(coup70[j1]) *
                        (coup8 *
                             ((s - t - u) * (MWm * MWm) +
                              (MWm * MWm * MWm * MWm) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                         6 * coup9 * (MWm * MWm) * (MN[0] * MN[0])) *
                        MC[j1] -
                    std::conj(coup71[j1]) *
                        (-3 * coup8 * (MWm * MWm) *
                             (-s - u + (MWm * MWm) + 3 * (MN[0] * MN[0])) +
                         coup9 *
                             (-2 * (MWm * MWm * MWm * MWm) +
                              ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                              (MWm * MWm) * (t + (MN[0] * MN[0])))) *
                        MN[0]))) /
                 ((MWm * MWm) * (-s + (MZ * MZ)) * (t - (MC[j1] * MC[j1]))),
         j1, 2)

    SUM2((std::conj(coup68[j1]) * coup68[i1] *
          ((MWm * MWm * MWm * MWm) +
           ((s - (MHm[0] * MHm[0])) * (s - (MHm[0] * MHm[0]))) -
           2 * (MWm * MWm) * (s + (MHm[0] * MHm[0]))) *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((MWm * MWm) * (s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2(-((coup68[i1] *
            (std::conj(coup44[j1]) *
                 (std::conj(coup72[j1]) *
                      (-2 * coup3[i1] * (MN[0] * MN[0]) *
                           (2 * (MWm * MWm * MWm * MWm) +
                            (s - (MHm[0] * MHm[0])) *
                                (s + t - (MHm[0] * MHm[0]) - (MN[0] * MN[0])) +
                            (MWm * MWm) *
                                (-3 * s - t - 2 * u + (MHm[0] * MHm[0]) +
                                 3 * (MN[0] * MN[0]))) +
                       coup2[i1] *
                           ((s - t + u) * (MWm * MWm * MWm * MWm) +
                            (s - (MHm[0] * MHm[0])) *
                                ((s * s) - (t * t) + (u * u) -
                                 u * (MHm[0] * MHm[0]) +
                                 2 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) -
                                 s * ((MHm[0] * MHm[0]) + 2 * (MN[0] * MN[0])) +
                                 t * ((MHm[0] * MHm[0]) + 2 * (MN[0] * MN[0])) -
                                 2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                            (MWm * MWm) *
                                (-2 * (s * s) + (t * t) - (u * u) +
                                 2 * u * (MHm[0] * MHm[0]) +
                                 10 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                                 s * (t - u - 2 * (MHm[0] * MHm[0]) +
                                      2 * (MN[0] * MN[0])) -
                                 2 * t *
                                     ((MHm[0] * MHm[0]) + 3 * (MN[0] * MN[0])) +
                                 6 * (MN[0] * MN[0] * MN[0] * MN[0])))) -
                  2 * std::conj(coup73[j1]) *
                      (coup2[i1] *
                           ((MWm * MWm * MWm * MWm) -
                            (MWm * MWm) *
                                (s + t + 2 * u - 3 * (MHm[0] * MHm[0]) -
                                 3 * (MN[0] * MN[0])) +
                            (s - (MHm[0] * MHm[0])) * (t - (MN[0] * MN[0]))) +
                       coup3[i1] *
                           (-(MWm * MWm * MWm * MWm) +
                            (MWm * MWm) *
                                (s + 2 * t + u - 3 * (MHm[0] * MHm[0]) -
                                 3 * (MN[0] * MN[0])) -
                            (s - (MHm[0] * MHm[0])) * (u - (MN[0] * MN[0])))) *
                      MC[j1] * MN[0]) +
             std::conj(coup45[j1]) *
                 (std::conj(coup73[j1]) *
                      (-2 * coup2[i1] * (MN[0] * MN[0]) *
                           (2 * (MWm * MWm * MWm * MWm) +
                            (s - (MHm[0] * MHm[0])) *
                                (s + t - (MHm[0] * MHm[0]) - (MN[0] * MN[0])) +
                            (MWm * MWm) *
                                (-3 * s - t - 2 * u + (MHm[0] * MHm[0]) +
                                 3 * (MN[0] * MN[0]))) +
                       coup3[i1] *
                           ((s - t + u) * (MWm * MWm * MWm * MWm) +
                            (s - (MHm[0] * MHm[0])) *
                                ((s * s) - (t * t) + (u * u) -
                                 u * (MHm[0] * MHm[0]) +
                                 2 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) -
                                 s * ((MHm[0] * MHm[0]) + 2 * (MN[0] * MN[0])) +
                                 t * ((MHm[0] * MHm[0]) + 2 * (MN[0] * MN[0])) -
                                 2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                            (MWm * MWm) *
                                (-2 * (s * s) + (t * t) - (u * u) +
                                 2 * u * (MHm[0] * MHm[0]) +
                                 10 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                                 s * (t - u - 2 * (MHm[0] * MHm[0]) +
                                      2 * (MN[0] * MN[0])) -
                                 2 * t *
                                     ((MHm[0] * MHm[0]) + 3 * (MN[0] * MN[0])) +
                                 6 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                  2 * std::conj(coup72[j1]) *
                      (coup3[i1] *
                           (-(MWm * MWm * MWm * MWm) +
                            (MWm * MWm) *
                                (s + t + 2 * u - 3 * (MHm[0] * MHm[0]) -
                                 3 * (MN[0] * MN[0])) -
                            (s - (MHm[0] * MHm[0])) * (t - (MN[0] * MN[0]))) +
                       coup2[i1] *
                           ((MWm * MWm * MWm * MWm) -
                            (MWm * MWm) *
                                (s + 2 * t + u - 3 * (MHm[0] * MHm[0]) -
                                 3 * (MN[0] * MN[0])) +
                            (s - (MHm[0] * MHm[0])) * (u - (MN[0] * MN[0])))) *
                      MC[j1] * MN[0]))) /
           ((MWm * MWm) * (u - (MC[j1] * MC[j1])) * (s - (Mh[i1] * Mh[i1])))) -
             (2 * coup68[i1] *
              (std::conj(coup44[j1]) *
                   (std::conj(coup70[j1]) *
                        (coup3[i1] *
                             (-(MWm * MWm * MWm * MWm) +
                              (MWm * MWm) *
                                  (s + t + 2 * u - 3 * (MHm[0] * MHm[0]) -
                                   3 * (MN[0] * MN[0])) -
                              (s - (MHm[0] * MHm[0])) * (t - (MN[0] * MN[0]))) *
                             (MN[0] * MN[0]) +
                         coup2[i1] *
                             ((MWm * MWm * MWm * MWm) *
                                  (s - t + u - 3 * (MN[0] * MN[0])) +
                              (s - (MHm[0] * MHm[0])) *
                                  (s * (t - (MN[0] * MN[0])) +
                                   (MN[0] * MN[0]) *
                                       (-2 * t - u + 3 * (MN[0] * MN[0]))) -
                              (MWm * MWm) *
                                  ((s * s) - (t * t) + (u * u) +
                                   t * (MHm[0] * MHm[0]) -
                                   u * (MHm[0] * MHm[0]) +
                                   s * (t + 2 * u - 3 * (MHm[0] * MHm[0]) -
                                        6 * (MN[0] * MN[0])) -
                                   2 * t * (MN[0] * MN[0]) -
                                   7 * u * (MN[0] * MN[0]) +
                                   9 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                                   9 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                    std::conj(coup71[j1]) *
                        (coup3[i1] *
                             (-(MWm * MWm * MWm * MWm) +
                              (MWm * MWm) *
                                  (s + t + 2 * u - 3 * (MHm[0] * MHm[0]) -
                                   3 * (MN[0] * MN[0])) -
                              (s - (MHm[0] * MHm[0])) * (t - (MN[0] * MN[0]))) +
                         coup2[i1] * ((MWm * MWm * MWm * MWm) -
                                      (MWm * MWm) * (s + 2 * t + u -
                                                     3 * (MHm[0] * MHm[0]) -
                                                     3 * (MN[0] * MN[0])) +
                                      (s - (MHm[0] * MHm[0])) *
                                          (u - (MN[0] * MN[0])))) *
                        MC[j1] * MN[0]) +
               std::conj(coup45[j1]) *
                   (std::conj(coup71[j1]) *
                        (coup2[i1] *
                             (-(MWm * MWm * MWm * MWm) +
                              (MWm * MWm) *
                                  (s + t + 2 * u - 3 * (MHm[0] * MHm[0]) -
                                   3 * (MN[0] * MN[0])) -
                              (s - (MHm[0] * MHm[0])) * (t - (MN[0] * MN[0]))) *
                             (MN[0] * MN[0]) +
                         coup3[i1] *
                             ((MWm * MWm * MWm * MWm) *
                                  (s - t + u - 3 * (MN[0] * MN[0])) +
                              (s - (MHm[0] * MHm[0])) *
                                  (s * (t - (MN[0] * MN[0])) +
                                   (MN[0] * MN[0]) *
                                       (-2 * t - u + 3 * (MN[0] * MN[0]))) -
                              (MWm * MWm) *
                                  ((s * s) - (t * t) + (u * u) +
                                   t * (MHm[0] * MHm[0]) -
                                   u * (MHm[0] * MHm[0]) +
                                   s * (t + 2 * u - 3 * (MHm[0] * MHm[0]) -
                                        6 * (MN[0] * MN[0])) -
                                   2 * t * (MN[0] * MN[0]) -
                                   7 * u * (MN[0] * MN[0]) +
                                   9 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                                   9 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                    std::conj(coup70[j1]) *
                        (coup2[i1] *
                             (-(MWm * MWm * MWm * MWm) +
                              (MWm * MWm) *
                                  (s + t + 2 * u - 3 * (MHm[0] * MHm[0]) -
                                   3 * (MN[0] * MN[0])) -
                              (s - (MHm[0] * MHm[0])) * (t - (MN[0] * MN[0]))) +
                         coup3[i1] * ((MWm * MWm * MWm * MWm) -
                                      (MWm * MWm) * (s + 2 * t + u -
                                                     3 * (MHm[0] * MHm[0]) -
                                                     3 * (MN[0] * MN[0])) +
                                      (s - (MHm[0] * MHm[0])) *
                                          (u - (MN[0] * MN[0])))) *
                        MC[j1] * MN[0]))) /
                 ((MWm * MWm) * (t - (MC[j1] * MC[j1])) *
                  (s - (Mh[i1] * Mh[i1]))),
         j1, 2, i1, 6)

    SUM2(
        (std::conj(coup45[j1]) *
             (2 * std::conj(coup72[j1]) * MC[j1] *
                  (coup44[i1] *
                       (coup71[i1] *
                            ((s - t - u) * (MWm * MWm) +
                             (MWm * MWm * MWm * MWm) +
                             (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) *
                            MC[i1] +
                        3 * coup70[i1] * (MWm * MWm) *
                            (-s - u + (MWm * MWm) + 3 * (MN[0] * MN[0])) *
                            MN[0]) -
                   coup45[i1] * MN[0] *
                       (coup71[i1] *
                            (-2 * (MWm * MWm * MWm * MWm) +
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                             (MWm * MWm) * (t + (MN[0] * MN[0]))) -
                        6 * coup70[i1] * (MWm * MWm) * MC[i1] * MN[0])) +
              std::conj(coup73[j1]) *
                  (-2 * coup44[i1] * MN[0] *
                       (-3 * coup71[i1] * (MWm * MWm) *
                            (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) * MC[i1] +
                        coup70[i1] *
                            (-4 * (MWm * MWm * MWm * MWm) +
                             (t - (MN[0] * MN[0])) *
                                 (s + t - (MHm[0] * MHm[0]) - (MN[0] * MN[0])) +
                             (MWm * MWm) * (2 * s + u - 3 * (MHm[0] * MHm[0]) +
                                            (MN[0] * MN[0]))) *
                            MN[0]) +
                   coup45[i1] *
                       (coup71[i1] *
                            (-(t * t * t) + t * (u * u) +
                             4 * (MWm * MWm * MWm * MWm) *
                                 (u - (MHm[0] * MHm[0])) -
                             t * u * (MHm[0] * MHm[0]) +
                             (t * t) * (MHm[0] * MHm[0]) +
                             (s * s) * (t - (MN[0] * MN[0])) -
                             2 * t * u * (MN[0] * MN[0]) +
                             3 * (t * t) * (MN[0] * MN[0]) -
                             (u * u) * (MN[0] * MN[0]) +
                             t * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                             3 * u * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) -
                             s * t * ((MHm[0] * MHm[0]) + 2 * (MN[0] * MN[0])) +
                             s * (MN[0] * MN[0]) *
                                 (-2 * u + (MHm[0] * MHm[0]) +
                                  4 * (MN[0] * MN[0])) +
                             (MWm * MWm) *
                                 (-(t * u) + (t * t) - 4 * (u * u) +
                                  4 * u * (MHm[0] * MHm[0]) +
                                  3 * t * (MN[0] * MN[0]) +
                                  13 * u * (MN[0] * MN[0]) -
                                  16 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                                  s * (-t - 4 * u + 4 * (MHm[0] * MHm[0]) +
                                       (MN[0] * MN[0]))) -
                             2 * t * (MN[0] * MN[0] * MN[0] * MN[0]) +
                             2 * u * (MN[0] * MN[0] * MN[0] * MN[0]) -
                             4 * (MHm[0] * MHm[0]) *
                                 (MN[0] * MN[0] * MN[0] * MN[0])) +
                        2 * coup70[i1] *
                            (-2 * u * (MWm * MWm) +
                             2 * (MWm * MWm * MWm * MWm) +
                             (u - (MN[0] * MN[0])) *
                                 (s + t - (MHm[0] * MHm[0]) -
                                  (MN[0] * MN[0]))) *
                            MC[i1] * MN[0]))) +
         std::conj(coup44[j1]) *
             (2 * std::conj(coup73[j1]) * MC[j1] *
                  (coup45[i1] *
                       (coup70[i1] *
                            ((s - t - u) * (MWm * MWm) +
                             (MWm * MWm * MWm * MWm) +
                             (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) *
                            MC[i1] +
                        3 * coup71[i1] * (MWm * MWm) *
                            (-s - u + (MWm * MWm) + 3 * (MN[0] * MN[0])) *
                            MN[0]) -
                   coup44[i1] * MN[0] *
                       (coup70[i1] *
                            (-2 * (MWm * MWm * MWm * MWm) +
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                             (MWm * MWm) * (t + (MN[0] * MN[0]))) -
                        6 * coup71[i1] * (MWm * MWm) * MC[i1] * MN[0])) +
              std::conj(coup72[j1]) *
                  (-2 * coup45[i1] * MN[0] *
                       (-3 * coup70[i1] * (MWm * MWm) *
                            (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) * MC[i1] +
                        coup71[i1] *
                            (-4 * (MWm * MWm * MWm * MWm) +
                             (t - (MN[0] * MN[0])) *
                                 (s + t - (MHm[0] * MHm[0]) - (MN[0] * MN[0])) +
                             (MWm * MWm) * (2 * s + u - 3 * (MHm[0] * MHm[0]) +
                                            (MN[0] * MN[0]))) *
                            MN[0]) +
                   coup44[i1] *
                       (coup70[i1] *
                            (-(t * t * t) + t * (u * u) +
                             4 * (MWm * MWm * MWm * MWm) *
                                 (u - (MHm[0] * MHm[0])) -
                             t * u * (MHm[0] * MHm[0]) +
                             (t * t) * (MHm[0] * MHm[0]) +
                             (s * s) * (t - (MN[0] * MN[0])) -
                             2 * t * u * (MN[0] * MN[0]) +
                             3 * (t * t) * (MN[0] * MN[0]) -
                             (u * u) * (MN[0] * MN[0]) +
                             t * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                             3 * u * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) -
                             s * t * ((MHm[0] * MHm[0]) + 2 * (MN[0] * MN[0])) +
                             s * (MN[0] * MN[0]) *
                                 (-2 * u + (MHm[0] * MHm[0]) +
                                  4 * (MN[0] * MN[0])) +
                             (MWm * MWm) *
                                 (-(t * u) + (t * t) - 4 * (u * u) +
                                  4 * u * (MHm[0] * MHm[0]) +
                                  3 * t * (MN[0] * MN[0]) +
                                  13 * u * (MN[0] * MN[0]) -
                                  16 * (MHm[0] * MHm[0]) * (MN[0] * MN[0]) +
                                  s * (-t - 4 * u + 4 * (MHm[0] * MHm[0]) +
                                       (MN[0] * MN[0]))) -
                             2 * t * (MN[0] * MN[0] * MN[0] * MN[0]) +
                             2 * u * (MN[0] * MN[0] * MN[0] * MN[0]) -
                             4 * (MHm[0] * MHm[0]) *
                                 (MN[0] * MN[0] * MN[0] * MN[0])) +
                        2 * coup71[i1] *
                            (-2 * u * (MWm * MWm) +
                             2 * (MWm * MWm * MWm * MWm) +
                             (u - (MN[0] * MN[0])) *
                                 (s + t - (MHm[0] * MHm[0]) -
                                  (MN[0] * MN[0]))) *
                            MC[i1] * MN[0])))) /
                ((MWm * MWm) * (t - (MC[i1] * MC[i1])) *
                 (u - (MC[j1] * MC[j1]))) +
            (std::conj(coup45[j1]) *
                 (std::conj(coup72[j1]) * MC[j1] *
                      (coup45[i1] *
                           (coup72[i1] *
                                ((s - t - u) * (MWm * MWm) +
                                 (MWm * MWm * MWm * MWm) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MC[i1] +
                            3 * coup73[i1] * (MWm * MWm) *
                                (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                                MN[0]) +
                       coup44[i1] * MN[0] *
                           (coup72[i1] * (-2 * u * (MWm * MWm) +
                                          2 * (MWm * MWm * MWm * MWm) +
                                          (u - (MN[0] * MN[0])) *
                                              (s + t - (MHm[0] * MHm[0]) -
                                               (MN[0] * MN[0]))) +
                            6 * coup73[i1] * (MWm * MWm) * MC[i1] * MN[0])) +
                  std::conj(coup73[j1]) *
                      (coup44[i1] * MN[0] *
                           (coup73[i1] *
                                (-2 * u * (MWm * MWm) +
                                 2 * (MWm * MWm * MWm * MWm) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (MHm[0] * MHm[0]) -
                                      (MN[0] * MN[0]))) *
                                MC[i1] +
                            6 * u * coup72[i1] * (MWm * MWm) * MN[0]) +
                       coup45[i1] *
                           (coup73[i1] *
                                ((MWm * MWm * MWm * MWm) *
                                     (u - 2 * (MHm[0] * MHm[0]) +
                                      2 * (MN[0] * MN[0])) -
                                 u * (MWm * MWm) *
                                     (s - t + u - 2 * (MHm[0] * MHm[0]) +
                                      2 * (MN[0] * MN[0])) +
                                 (u - (MN[0] * MN[0])) *
                                     (-(t * (MHm[0] * MHm[0])) -
                                      u * (MHm[0] * MHm[0]) +
                                      (MHm[0] * MHm[0] * MHm[0] * MHm[0]) +
                                      t * (MN[0] * MN[0]) +
                                      s * (u - (MHm[0] * MHm[0]) +
                                           (MN[0] * MN[0])) -
                                      (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            3 * coup72[i1] * (MWm * MWm) *
                                (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                                MC[i1] * MN[0]))) +
             std::conj(coup44[j1]) *
                 (std::conj(coup73[j1]) * MC[j1] *
                      (coup44[i1] *
                           (coup73[i1] *
                                ((s - t - u) * (MWm * MWm) +
                                 (MWm * MWm * MWm * MWm) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MC[i1] +
                            3 * coup72[i1] * (MWm * MWm) *
                                (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                                MN[0]) +
                       coup45[i1] * MN[0] *
                           (coup73[i1] * (-2 * u * (MWm * MWm) +
                                          2 * (MWm * MWm * MWm * MWm) +
                                          (u - (MN[0] * MN[0])) *
                                              (s + t - (MHm[0] * MHm[0]) -
                                               (MN[0] * MN[0]))) +
                            6 * coup72[i1] * (MWm * MWm) * MC[i1] * MN[0])) +
                  std::conj(coup72[j1]) *
                      (coup45[i1] * MN[0] *
                           (coup72[i1] *
                                (-2 * u * (MWm * MWm) +
                                 2 * (MWm * MWm * MWm * MWm) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (MHm[0] * MHm[0]) -
                                      (MN[0] * MN[0]))) *
                                MC[i1] +
                            6 * u * coup73[i1] * (MWm * MWm) * MN[0]) +
                       coup44[i1] *
                           (coup72[i1] *
                                ((MWm * MWm * MWm * MWm) *
                                     (u - 2 * (MHm[0] * MHm[0]) +
                                      2 * (MN[0] * MN[0])) -
                                 u * (MWm * MWm) *
                                     (s - t + u - 2 * (MHm[0] * MHm[0]) +
                                      2 * (MN[0] * MN[0])) +
                                 (u - (MN[0] * MN[0])) *
                                     (-(t * (MHm[0] * MHm[0])) -
                                      u * (MHm[0] * MHm[0]) +
                                      (MHm[0] * MHm[0] * MHm[0] * MHm[0]) +
                                      t * (MN[0] * MN[0]) +
                                      s * (u - (MHm[0] * MHm[0]) +
                                           (MN[0] * MN[0])) -
                                      (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            3 * coup73[i1] * (MWm * MWm) *
                                (u - (MHm[0] * MHm[0]) + (MN[0] * MN[0])) *
                                MC[i1] * MN[0])))) /
                ((MWm * MWm) * (u - (MC[i1] * MC[i1])) *
                 (u - (MC[j1] * MC[j1]))) +
            (std::conj(coup45[j1]) *
                 (std::conj(coup70[j1]) * MC[j1] *
                      (coup45[i1] *
                           (coup70[i1] *
                                ((s - t - u) * (MWm * MWm) +
                                 (MWm * MWm * MWm * MWm) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MC[i1] +
                            3 * coup71[i1] * (MWm * MWm) *
                                (-s - u + (MWm * MWm) + 3 * (MN[0] * MN[0])) *
                                MN[0]) -
                       coup44[i1] * MN[0] *
                           (coup70[i1] * (-2 * (MWm * MWm * MWm * MWm) +
                                          ((t - (MN[0] * MN[0])) *
                                           (t - (MN[0] * MN[0]))) +
                                          (MWm * MWm) * (t + (MN[0] * MN[0]))) -
                            6 * coup71[i1] * (MWm * MWm) * MC[i1] * MN[0])) +
                  std::conj(coup71[j1]) *
                      (-(coup44[i1] * MN[0] *
                         (coup71[i1] *
                              (-2 * (MWm * MWm * MWm * MWm) +
                               ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                               (MWm * MWm) * (t + (MN[0] * MN[0]))) *
                              MC[i1] -
                          6 * t * coup70[i1] * (MWm * MWm) * MN[0])) +
                       coup45[i1] *
                           (coup71[i1] *
                                (2 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                                 (MWm * MWm * MWm * MWm) *
                                     (2 * s + 2 * t + 2 * u -
                                      5 * (MN[0] * MN[0])) +
                                 (MWm * MWm) * (t * (2 * u - (MN[0] * MN[0])) +
                                                (s + u - 4 * (MN[0] * MN[0])) *
                                                    (MN[0] * MN[0])) -
                                 (t - (MN[0] * MN[0])) *
                                     ((2 * t + u - 3 * (MN[0] * MN[0])) *
                                          (MN[0] * MN[0]) +
                                      s * (-t + (MN[0] * MN[0])))) +
                            3 * coup70[i1] * (MWm * MWm) *
                                (-s - u + (MWm * MWm) + 3 * (MN[0] * MN[0])) *
                                MC[i1] * MN[0]))) +
             std::conj(coup44[j1]) *
                 (std::conj(coup71[j1]) * MC[j1] *
                      (coup44[i1] *
                           (coup71[i1] *
                                ((s - t - u) * (MWm * MWm) +
                                 (MWm * MWm * MWm * MWm) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MC[i1] +
                            3 * coup70[i1] * (MWm * MWm) *
                                (-s - u + (MWm * MWm) + 3 * (MN[0] * MN[0])) *
                                MN[0]) -
                       coup45[i1] * MN[0] *
                           (coup71[i1] * (-2 * (MWm * MWm * MWm * MWm) +
                                          ((t - (MN[0] * MN[0])) *
                                           (t - (MN[0] * MN[0]))) +
                                          (MWm * MWm) * (t + (MN[0] * MN[0]))) -
                            6 * coup70[i1] * (MWm * MWm) * MC[i1] * MN[0])) +
                  std::conj(coup70[j1]) *
                      (-(coup45[i1] * MN[0] *
                         (coup70[i1] *
                              (-2 * (MWm * MWm * MWm * MWm) +
                               ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                               (MWm * MWm) * (t + (MN[0] * MN[0]))) *
                              MC[i1] -
                          6 * t * coup71[i1] * (MWm * MWm) * MN[0])) +
                       coup44[i1] *
                           (coup70[i1] *
                                (2 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                                 (MWm * MWm * MWm * MWm) *
                                     (2 * s + 2 * t + 2 * u -
                                      5 * (MN[0] * MN[0])) +
                                 (MWm * MWm) * (t * (2 * u - (MN[0] * MN[0])) +
                                                (s + u - 4 * (MN[0] * MN[0])) *
                                                    (MN[0] * MN[0])) -
                                 (t - (MN[0] * MN[0])) *
                                     ((2 * t + u - 3 * (MN[0] * MN[0])) *
                                          (MN[0] * MN[0]) +
                                      s * (-t + (MN[0] * MN[0])))) +
                            3 * coup71[i1] * (MWm * MWm) *
                                (-s - u + (MWm * MWm) + 3 * (MN[0] * MN[0])) *
                                MC[i1] * MN[0])))) /
                ((MWm * MWm) * (t - (MC[i1] * MC[i1])) *
                 (t - (MC[j1] * MC[j1]))),
        j1, 2, i1, 2)

    return res.real();
}
double DT::N1N1Hpm2W(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        (-s + (MWm * MWm) + (MHm[1] * MHm[1]) +
         cos_t *
             sqrt(((MWm * MWm * MWm * MWm) +
                   ((s - (MHm[1] * MHm[1])) * (s - (MHm[1] * MHm[1]))) -
                   2 * (MWm * MWm) * (s + (MHm[1] * MHm[1]))) /
                  s) *
             sqrt(s - 4 * (MN[0] * MN[0])) +
         2 * (MN[0] * MN[0])) /
        2.;
    std::complex<double> u =
        -s - t + (MWm * MWm) + (MHm[1] * MHm[1]) + 2 * (MN[0] * MN[0]);
    res += (coup75 * std::conj(coup75) *
            (std::conj(coup9) *
                 (coup9 * ((s - t - u) * (MWm * MWm) + (MWm * MWm * MWm * MWm) +
                           (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                  6 * coup8 * (MWm * MWm) * (MN[0] * MN[0])) +
             std::conj(coup8) *
                 (coup8 * ((s - t - u) * (MWm * MWm) + (MWm * MWm * MWm * MWm) +
                           (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                  6 * coup9 * (MWm * MWm) * (MN[0] * MN[0])))) /
           ((MWm * MWm) * (((MZ * MZ) - s) * ((MZ * MZ) - s)));

    SUM1((2 * std::conj(coup75) * coup74[i1] *
          (std::conj(coup9) *
               (coup3[i1] *
                    ((MWm * MWm * MWm * MWm) -
                     (MWm * MWm) * (s + t + 2 * u - 3 * (MHm[1] * MHm[1]) -
                                    3 * (MN[0] * MN[0])) +
                     (s - (MHm[1] * MHm[1])) * (t - (MN[0] * MN[0]))) +
                coup2[i1] *
                    (-(MWm * MWm * MWm * MWm) +
                     (MWm * MWm) * (s + 2 * t + u - 3 * (MHm[1] * MHm[1]) -
                                    3 * (MN[0] * MN[0])) -
                     (s - (MHm[1] * MHm[1])) * (u - (MN[0] * MN[0])))) +
           std::conj(coup8) *
               (coup2[i1] *
                    ((MWm * MWm * MWm * MWm) -
                     (MWm * MWm) * (s + t + 2 * u - 3 * (MHm[1] * MHm[1]) -
                                    3 * (MN[0] * MN[0])) +
                     (s - (MHm[1] * MHm[1])) * (t - (MN[0] * MN[0]))) +
                coup3[i1] *
                    (-(MWm * MWm * MWm * MWm) +
                     (MWm * MWm) * (s + 2 * t + u - 3 * (MHm[1] * MHm[1]) -
                                    3 * (MN[0] * MN[0])) -
                     (s - (MHm[1] * MHm[1])) * (u - (MN[0] * MN[0]))))) *
          MN[0]) /
             ((MWm * MWm) * (-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1((2 * coup75 *
          (std::conj(coup52[j1]) *
               (std::conj(coup73[j1]) *
                    (coup8 *
                         ((s - t - u) * (MWm * MWm) + (MWm * MWm * MWm * MWm) +
                          (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                     6 * coup9 * (MWm * MWm) * (MN[0] * MN[0])) *
                    MC[j1] +
                std::conj(coup72[j1]) *
                    (coup9 *
                         (-2 * u * (MWm * MWm) + 2 * (MWm * MWm * MWm * MWm) +
                          (u - (MN[0] * MN[0])) *
                              (s + t - (MHm[1] * MHm[1]) - (MN[0] * MN[0]))) +
                     3 * coup8 * (MWm * MWm) *
                         (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0]))) *
                    MN[0]) +
           std::conj(coup53[j1]) *
               (std::conj(coup72[j1]) *
                    (coup9 *
                         ((s - t - u) * (MWm * MWm) + (MWm * MWm * MWm * MWm) +
                          (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                     6 * coup8 * (MWm * MWm) * (MN[0] * MN[0])) *
                    MC[j1] +
                std::conj(coup73[j1]) *
                    (coup8 *
                         (-2 * u * (MWm * MWm) + 2 * (MWm * MWm * MWm * MWm) +
                          (u - (MN[0] * MN[0])) *
                              (s + t - (MHm[1] * MHm[1]) - (MN[0] * MN[0]))) +
                     3 * coup9 * (MWm * MWm) *
                         (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0]))) *
                    MN[0]))) /
                 ((MWm * MWm) * (-s + (MZ * MZ)) * (u - (MC[j1] * MC[j1]))) +
             (2 * coup75 *
              (std::conj(coup52[j1]) *
                   (std::conj(coup71[j1]) *
                        (coup9 *
                             ((s - t - u) * (MWm * MWm) +
                              (MWm * MWm * MWm * MWm) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                         6 * coup8 * (MWm * MWm) * (MN[0] * MN[0])) *
                        MC[j1] -
                    std::conj(coup70[j1]) *
                        (3 * coup9 * (MWm * MWm) *
                             (s + u - (MWm * MWm) - 3 * (MN[0] * MN[0])) +
                         coup8 *
                             (-2 * (MWm * MWm * MWm * MWm) +
                              ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                              (MWm * MWm) * (t + (MN[0] * MN[0])))) *
                        MN[0]) +
               std::conj(coup53[j1]) *
                   (std::conj(coup70[j1]) *
                        (coup8 *
                             ((s - t - u) * (MWm * MWm) +
                              (MWm * MWm * MWm * MWm) +
                              (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                         6 * coup9 * (MWm * MWm) * (MN[0] * MN[0])) *
                        MC[j1] -
                    std::conj(coup71[j1]) *
                        (-3 * coup8 * (MWm * MWm) *
                             (-s - u + (MWm * MWm) + 3 * (MN[0] * MN[0])) +
                         coup9 *
                             (-2 * (MWm * MWm * MWm * MWm) +
                              ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                              (MWm * MWm) * (t + (MN[0] * MN[0])))) *
                        MN[0]))) /
                 ((MWm * MWm) * (-s + (MZ * MZ)) * (t - (MC[j1] * MC[j1]))),
         j1, 2)

    SUM2((std::conj(coup74[j1]) * coup74[i1] *
          ((MWm * MWm * MWm * MWm) +
           ((s - (MHm[1] * MHm[1])) * (s - (MHm[1] * MHm[1]))) -
           2 * (MWm * MWm) * (s + (MHm[1] * MHm[1]))) *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             ((MWm * MWm) * (s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2(-((coup74[i1] *
            (std::conj(coup52[j1]) *
                 (std::conj(coup72[j1]) *
                      (-2 * coup3[i1] * (MN[0] * MN[0]) *
                           (2 * (MWm * MWm * MWm * MWm) +
                            (s - (MHm[1] * MHm[1])) *
                                (s + t - (MHm[1] * MHm[1]) - (MN[0] * MN[0])) +
                            (MWm * MWm) *
                                (-3 * s - t - 2 * u + (MHm[1] * MHm[1]) +
                                 3 * (MN[0] * MN[0]))) +
                       coup2[i1] *
                           ((s - t + u) * (MWm * MWm * MWm * MWm) +
                            (s - (MHm[1] * MHm[1])) *
                                ((s * s) - (t * t) + (u * u) -
                                 u * (MHm[1] * MHm[1]) +
                                 2 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                                 s * ((MHm[1] * MHm[1]) + 2 * (MN[0] * MN[0])) +
                                 t * ((MHm[1] * MHm[1]) + 2 * (MN[0] * MN[0])) -
                                 2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                            (MWm * MWm) *
                                (-2 * (s * s) + (t * t) - (u * u) +
                                 2 * u * (MHm[1] * MHm[1]) +
                                 10 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) +
                                 s * (t - u - 2 * (MHm[1] * MHm[1]) +
                                      2 * (MN[0] * MN[0])) -
                                 2 * t *
                                     ((MHm[1] * MHm[1]) + 3 * (MN[0] * MN[0])) +
                                 6 * (MN[0] * MN[0] * MN[0] * MN[0])))) -
                  2 * std::conj(coup73[j1]) *
                      (coup2[i1] *
                           ((MWm * MWm * MWm * MWm) -
                            (MWm * MWm) *
                                (s + t + 2 * u - 3 * (MHm[1] * MHm[1]) -
                                 3 * (MN[0] * MN[0])) +
                            (s - (MHm[1] * MHm[1])) * (t - (MN[0] * MN[0]))) +
                       coup3[i1] *
                           (-(MWm * MWm * MWm * MWm) +
                            (MWm * MWm) *
                                (s + 2 * t + u - 3 * (MHm[1] * MHm[1]) -
                                 3 * (MN[0] * MN[0])) -
                            (s - (MHm[1] * MHm[1])) * (u - (MN[0] * MN[0])))) *
                      MC[j1] * MN[0]) +
             std::conj(coup53[j1]) *
                 (std::conj(coup73[j1]) *
                      (-2 * coup2[i1] * (MN[0] * MN[0]) *
                           (2 * (MWm * MWm * MWm * MWm) +
                            (s - (MHm[1] * MHm[1])) *
                                (s + t - (MHm[1] * MHm[1]) - (MN[0] * MN[0])) +
                            (MWm * MWm) *
                                (-3 * s - t - 2 * u + (MHm[1] * MHm[1]) +
                                 3 * (MN[0] * MN[0]))) +
                       coup3[i1] *
                           ((s - t + u) * (MWm * MWm * MWm * MWm) +
                            (s - (MHm[1] * MHm[1])) *
                                ((s * s) - (t * t) + (u * u) -
                                 u * (MHm[1] * MHm[1]) +
                                 2 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                                 s * ((MHm[1] * MHm[1]) + 2 * (MN[0] * MN[0])) +
                                 t * ((MHm[1] * MHm[1]) + 2 * (MN[0] * MN[0])) -
                                 2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                            (MWm * MWm) *
                                (-2 * (s * s) + (t * t) - (u * u) +
                                 2 * u * (MHm[1] * MHm[1]) +
                                 10 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) +
                                 s * (t - u - 2 * (MHm[1] * MHm[1]) +
                                      2 * (MN[0] * MN[0])) -
                                 2 * t *
                                     ((MHm[1] * MHm[1]) + 3 * (MN[0] * MN[0])) +
                                 6 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                  2 * std::conj(coup72[j1]) *
                      (coup3[i1] *
                           (-(MWm * MWm * MWm * MWm) +
                            (MWm * MWm) *
                                (s + t + 2 * u - 3 * (MHm[1] * MHm[1]) -
                                 3 * (MN[0] * MN[0])) -
                            (s - (MHm[1] * MHm[1])) * (t - (MN[0] * MN[0]))) +
                       coup2[i1] *
                           ((MWm * MWm * MWm * MWm) -
                            (MWm * MWm) *
                                (s + 2 * t + u - 3 * (MHm[1] * MHm[1]) -
                                 3 * (MN[0] * MN[0])) +
                            (s - (MHm[1] * MHm[1])) * (u - (MN[0] * MN[0])))) *
                      MC[j1] * MN[0]))) /
           ((MWm * MWm) * (u - (MC[j1] * MC[j1])) * (s - (Mh[i1] * Mh[i1])))) -
             (2 * coup74[i1] *
              (std::conj(coup52[j1]) *
                   (std::conj(coup70[j1]) *
                        (coup3[i1] *
                             (-(MWm * MWm * MWm * MWm) +
                              (MWm * MWm) *
                                  (s + t + 2 * u - 3 * (MHm[1] * MHm[1]) -
                                   3 * (MN[0] * MN[0])) -
                              (s - (MHm[1] * MHm[1])) * (t - (MN[0] * MN[0]))) *
                             (MN[0] * MN[0]) +
                         coup2[i1] *
                             ((MWm * MWm * MWm * MWm) *
                                  (s - t + u - 3 * (MN[0] * MN[0])) +
                              (s - (MHm[1] * MHm[1])) *
                                  (s * (t - (MN[0] * MN[0])) +
                                   (MN[0] * MN[0]) *
                                       (-2 * t - u + 3 * (MN[0] * MN[0]))) -
                              (MWm * MWm) *
                                  ((s * s) - (t * t) + (u * u) +
                                   t * (MHm[1] * MHm[1]) -
                                   u * (MHm[1] * MHm[1]) +
                                   s * (t + 2 * u - 3 * (MHm[1] * MHm[1]) -
                                        6 * (MN[0] * MN[0])) -
                                   2 * t * (MN[0] * MN[0]) -
                                   7 * u * (MN[0] * MN[0]) +
                                   9 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) +
                                   9 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                    std::conj(coup71[j1]) *
                        (coup3[i1] *
                             (-(MWm * MWm * MWm * MWm) +
                              (MWm * MWm) *
                                  (s + t + 2 * u - 3 * (MHm[1] * MHm[1]) -
                                   3 * (MN[0] * MN[0])) -
                              (s - (MHm[1] * MHm[1])) * (t - (MN[0] * MN[0]))) +
                         coup2[i1] * ((MWm * MWm * MWm * MWm) -
                                      (MWm * MWm) * (s + 2 * t + u -
                                                     3 * (MHm[1] * MHm[1]) -
                                                     3 * (MN[0] * MN[0])) +
                                      (s - (MHm[1] * MHm[1])) *
                                          (u - (MN[0] * MN[0])))) *
                        MC[j1] * MN[0]) +
               std::conj(coup53[j1]) *
                   (std::conj(coup71[j1]) *
                        (coup2[i1] *
                             (-(MWm * MWm * MWm * MWm) +
                              (MWm * MWm) *
                                  (s + t + 2 * u - 3 * (MHm[1] * MHm[1]) -
                                   3 * (MN[0] * MN[0])) -
                              (s - (MHm[1] * MHm[1])) * (t - (MN[0] * MN[0]))) *
                             (MN[0] * MN[0]) +
                         coup3[i1] *
                             ((MWm * MWm * MWm * MWm) *
                                  (s - t + u - 3 * (MN[0] * MN[0])) +
                              (s - (MHm[1] * MHm[1])) *
                                  (s * (t - (MN[0] * MN[0])) +
                                   (MN[0] * MN[0]) *
                                       (-2 * t - u + 3 * (MN[0] * MN[0]))) -
                              (MWm * MWm) *
                                  ((s * s) - (t * t) + (u * u) +
                                   t * (MHm[1] * MHm[1]) -
                                   u * (MHm[1] * MHm[1]) +
                                   s * (t + 2 * u - 3 * (MHm[1] * MHm[1]) -
                                        6 * (MN[0] * MN[0])) -
                                   2 * t * (MN[0] * MN[0]) -
                                   7 * u * (MN[0] * MN[0]) +
                                   9 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) +
                                   9 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                    std::conj(coup70[j1]) *
                        (coup2[i1] *
                             (-(MWm * MWm * MWm * MWm) +
                              (MWm * MWm) *
                                  (s + t + 2 * u - 3 * (MHm[1] * MHm[1]) -
                                   3 * (MN[0] * MN[0])) -
                              (s - (MHm[1] * MHm[1])) * (t - (MN[0] * MN[0]))) +
                         coup3[i1] * ((MWm * MWm * MWm * MWm) -
                                      (MWm * MWm) * (s + 2 * t + u -
                                                     3 * (MHm[1] * MHm[1]) -
                                                     3 * (MN[0] * MN[0])) +
                                      (s - (MHm[1] * MHm[1])) *
                                          (u - (MN[0] * MN[0])))) *
                        MC[j1] * MN[0]))) /
                 ((MWm * MWm) * (t - (MC[j1] * MC[j1])) *
                  (s - (Mh[i1] * Mh[i1]))),
         j1, 2, i1, 6)

    SUM2(
        (std::conj(coup53[j1]) *
             (2 * std::conj(coup72[j1]) * MC[j1] *
                  (coup52[i1] *
                       (coup71[i1] *
                            ((s - t - u) * (MWm * MWm) +
                             (MWm * MWm * MWm * MWm) +
                             (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) *
                            MC[i1] +
                        3 * coup70[i1] * (MWm * MWm) *
                            (-s - u + (MWm * MWm) + 3 * (MN[0] * MN[0])) *
                            MN[0]) -
                   coup53[i1] * MN[0] *
                       (coup71[i1] *
                            (-2 * (MWm * MWm * MWm * MWm) +
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                             (MWm * MWm) * (t + (MN[0] * MN[0]))) -
                        6 * coup70[i1] * (MWm * MWm) * MC[i1] * MN[0])) +
              std::conj(coup73[j1]) *
                  (-2 * coup52[i1] * MN[0] *
                       (-3 * coup71[i1] * (MWm * MWm) *
                            (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) * MC[i1] +
                        coup70[i1] *
                            (-4 * (MWm * MWm * MWm * MWm) +
                             (t - (MN[0] * MN[0])) *
                                 (s + t - (MHm[1] * MHm[1]) - (MN[0] * MN[0])) +
                             (MWm * MWm) * (2 * s + u - 3 * (MHm[1] * MHm[1]) +
                                            (MN[0] * MN[0]))) *
                            MN[0]) +
                   coup53[i1] *
                       (coup71[i1] *
                            (-(t * t * t) + t * (u * u) +
                             4 * (MWm * MWm * MWm * MWm) *
                                 (u - (MHm[1] * MHm[1])) -
                             t * u * (MHm[1] * MHm[1]) +
                             (t * t) * (MHm[1] * MHm[1]) +
                             (s * s) * (t - (MN[0] * MN[0])) -
                             2 * t * u * (MN[0] * MN[0]) +
                             3 * (t * t) * (MN[0] * MN[0]) -
                             (u * u) * (MN[0] * MN[0]) +
                             t * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) +
                             3 * u * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                             s * t * ((MHm[1] * MHm[1]) + 2 * (MN[0] * MN[0])) +
                             s * (MN[0] * MN[0]) *
                                 (-2 * u + (MHm[1] * MHm[1]) +
                                  4 * (MN[0] * MN[0])) +
                             (MWm * MWm) *
                                 (-(t * u) + (t * t) - 4 * (u * u) +
                                  4 * u * (MHm[1] * MHm[1]) +
                                  3 * t * (MN[0] * MN[0]) +
                                  13 * u * (MN[0] * MN[0]) -
                                  16 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) +
                                  s * (-t - 4 * u + 4 * (MHm[1] * MHm[1]) +
                                       (MN[0] * MN[0]))) -
                             2 * t * (MN[0] * MN[0] * MN[0] * MN[0]) +
                             2 * u * (MN[0] * MN[0] * MN[0] * MN[0]) -
                             4 * (MHm[1] * MHm[1]) *
                                 (MN[0] * MN[0] * MN[0] * MN[0])) +
                        2 * coup70[i1] *
                            (-2 * u * (MWm * MWm) +
                             2 * (MWm * MWm * MWm * MWm) +
                             (u - (MN[0] * MN[0])) *
                                 (s + t - (MHm[1] * MHm[1]) -
                                  (MN[0] * MN[0]))) *
                            MC[i1] * MN[0]))) +
         std::conj(coup52[j1]) *
             (2 * std::conj(coup73[j1]) * MC[j1] *
                  (coup53[i1] *
                       (coup70[i1] *
                            ((s - t - u) * (MWm * MWm) +
                             (MWm * MWm * MWm * MWm) +
                             (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) *
                            MC[i1] +
                        3 * coup71[i1] * (MWm * MWm) *
                            (-s - u + (MWm * MWm) + 3 * (MN[0] * MN[0])) *
                            MN[0]) -
                   coup52[i1] * MN[0] *
                       (coup70[i1] *
                            (-2 * (MWm * MWm * MWm * MWm) +
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                             (MWm * MWm) * (t + (MN[0] * MN[0]))) -
                        6 * coup71[i1] * (MWm * MWm) * MC[i1] * MN[0])) +
              std::conj(coup72[j1]) *
                  (-2 * coup53[i1] * MN[0] *
                       (-3 * coup70[i1] * (MWm * MWm) *
                            (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) * MC[i1] +
                        coup71[i1] *
                            (-4 * (MWm * MWm * MWm * MWm) +
                             (t - (MN[0] * MN[0])) *
                                 (s + t - (MHm[1] * MHm[1]) - (MN[0] * MN[0])) +
                             (MWm * MWm) * (2 * s + u - 3 * (MHm[1] * MHm[1]) +
                                            (MN[0] * MN[0]))) *
                            MN[0]) +
                   coup52[i1] *
                       (coup70[i1] *
                            (-(t * t * t) + t * (u * u) +
                             4 * (MWm * MWm * MWm * MWm) *
                                 (u - (MHm[1] * MHm[1])) -
                             t * u * (MHm[1] * MHm[1]) +
                             (t * t) * (MHm[1] * MHm[1]) +
                             (s * s) * (t - (MN[0] * MN[0])) -
                             2 * t * u * (MN[0] * MN[0]) +
                             3 * (t * t) * (MN[0] * MN[0]) -
                             (u * u) * (MN[0] * MN[0]) +
                             t * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) +
                             3 * u * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) -
                             s * t * ((MHm[1] * MHm[1]) + 2 * (MN[0] * MN[0])) +
                             s * (MN[0] * MN[0]) *
                                 (-2 * u + (MHm[1] * MHm[1]) +
                                  4 * (MN[0] * MN[0])) +
                             (MWm * MWm) *
                                 (-(t * u) + (t * t) - 4 * (u * u) +
                                  4 * u * (MHm[1] * MHm[1]) +
                                  3 * t * (MN[0] * MN[0]) +
                                  13 * u * (MN[0] * MN[0]) -
                                  16 * (MHm[1] * MHm[1]) * (MN[0] * MN[0]) +
                                  s * (-t - 4 * u + 4 * (MHm[1] * MHm[1]) +
                                       (MN[0] * MN[0]))) -
                             2 * t * (MN[0] * MN[0] * MN[0] * MN[0]) +
                             2 * u * (MN[0] * MN[0] * MN[0] * MN[0]) -
                             4 * (MHm[1] * MHm[1]) *
                                 (MN[0] * MN[0] * MN[0] * MN[0])) +
                        2 * coup71[i1] *
                            (-2 * u * (MWm * MWm) +
                             2 * (MWm * MWm * MWm * MWm) +
                             (u - (MN[0] * MN[0])) *
                                 (s + t - (MHm[1] * MHm[1]) -
                                  (MN[0] * MN[0]))) *
                            MC[i1] * MN[0])))) /
                ((MWm * MWm) * (t - (MC[i1] * MC[i1])) *
                 (u - (MC[j1] * MC[j1]))) +
            (std::conj(coup53[j1]) *
                 (std::conj(coup72[j1]) * MC[j1] *
                      (coup53[i1] *
                           (coup72[i1] *
                                ((s - t - u) * (MWm * MWm) +
                                 (MWm * MWm * MWm * MWm) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MC[i1] +
                            3 * coup73[i1] * (MWm * MWm) *
                                (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) *
                                MN[0]) +
                       coup52[i1] * MN[0] *
                           (coup72[i1] * (-2 * u * (MWm * MWm) +
                                          2 * (MWm * MWm * MWm * MWm) +
                                          (u - (MN[0] * MN[0])) *
                                              (s + t - (MHm[1] * MHm[1]) -
                                               (MN[0] * MN[0]))) +
                            6 * coup73[i1] * (MWm * MWm) * MC[i1] * MN[0])) +
                  std::conj(coup73[j1]) *
                      (coup52[i1] * MN[0] *
                           (coup73[i1] *
                                (-2 * u * (MWm * MWm) +
                                 2 * (MWm * MWm * MWm * MWm) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (MHm[1] * MHm[1]) -
                                      (MN[0] * MN[0]))) *
                                MC[i1] +
                            6 * u * coup72[i1] * (MWm * MWm) * MN[0]) +
                       coup53[i1] *
                           (coup73[i1] *
                                ((MWm * MWm * MWm * MWm) *
                                     (u - 2 * (MHm[1] * MHm[1]) +
                                      2 * (MN[0] * MN[0])) -
                                 u * (MWm * MWm) *
                                     (s - t + u - 2 * (MHm[1] * MHm[1]) +
                                      2 * (MN[0] * MN[0])) +
                                 (u - (MN[0] * MN[0])) *
                                     (-(t * (MHm[1] * MHm[1])) -
                                      u * (MHm[1] * MHm[1]) +
                                      (MHm[1] * MHm[1] * MHm[1] * MHm[1]) +
                                      t * (MN[0] * MN[0]) +
                                      s * (u - (MHm[1] * MHm[1]) +
                                           (MN[0] * MN[0])) -
                                      (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            3 * coup72[i1] * (MWm * MWm) *
                                (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) *
                                MC[i1] * MN[0]))) +
             std::conj(coup52[j1]) *
                 (std::conj(coup73[j1]) * MC[j1] *
                      (coup52[i1] *
                           (coup73[i1] *
                                ((s - t - u) * (MWm * MWm) +
                                 (MWm * MWm * MWm * MWm) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MC[i1] +
                            3 * coup72[i1] * (MWm * MWm) *
                                (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) *
                                MN[0]) +
                       coup53[i1] * MN[0] *
                           (coup73[i1] * (-2 * u * (MWm * MWm) +
                                          2 * (MWm * MWm * MWm * MWm) +
                                          (u - (MN[0] * MN[0])) *
                                              (s + t - (MHm[1] * MHm[1]) -
                                               (MN[0] * MN[0]))) +
                            6 * coup72[i1] * (MWm * MWm) * MC[i1] * MN[0])) +
                  std::conj(coup72[j1]) *
                      (coup53[i1] * MN[0] *
                           (coup72[i1] *
                                (-2 * u * (MWm * MWm) +
                                 2 * (MWm * MWm * MWm * MWm) +
                                 (u - (MN[0] * MN[0])) *
                                     (s + t - (MHm[1] * MHm[1]) -
                                      (MN[0] * MN[0]))) *
                                MC[i1] +
                            6 * u * coup73[i1] * (MWm * MWm) * MN[0]) +
                       coup52[i1] *
                           (coup72[i1] *
                                ((MWm * MWm * MWm * MWm) *
                                     (u - 2 * (MHm[1] * MHm[1]) +
                                      2 * (MN[0] * MN[0])) -
                                 u * (MWm * MWm) *
                                     (s - t + u - 2 * (MHm[1] * MHm[1]) +
                                      2 * (MN[0] * MN[0])) +
                                 (u - (MN[0] * MN[0])) *
                                     (-(t * (MHm[1] * MHm[1])) -
                                      u * (MHm[1] * MHm[1]) +
                                      (MHm[1] * MHm[1] * MHm[1] * MHm[1]) +
                                      t * (MN[0] * MN[0]) +
                                      s * (u - (MHm[1] * MHm[1]) +
                                           (MN[0] * MN[0])) -
                                      (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            3 * coup73[i1] * (MWm * MWm) *
                                (u - (MHm[1] * MHm[1]) + (MN[0] * MN[0])) *
                                MC[i1] * MN[0])))) /
                ((MWm * MWm) * (u - (MC[i1] * MC[i1])) *
                 (u - (MC[j1] * MC[j1]))) +
            (std::conj(coup53[j1]) *
                 (std::conj(coup70[j1]) * MC[j1] *
                      (coup53[i1] *
                           (coup70[i1] *
                                ((s - t - u) * (MWm * MWm) +
                                 (MWm * MWm * MWm * MWm) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MC[i1] +
                            3 * coup71[i1] * (MWm * MWm) *
                                (-s - u + (MWm * MWm) + 3 * (MN[0] * MN[0])) *
                                MN[0]) -
                       coup52[i1] * MN[0] *
                           (coup70[i1] * (-2 * (MWm * MWm * MWm * MWm) +
                                          ((t - (MN[0] * MN[0])) *
                                           (t - (MN[0] * MN[0]))) +
                                          (MWm * MWm) * (t + (MN[0] * MN[0]))) -
                            6 * coup71[i1] * (MWm * MWm) * MC[i1] * MN[0])) +
                  std::conj(coup71[j1]) *
                      (-(coup52[i1] * MN[0] *
                         (coup71[i1] *
                              (-2 * (MWm * MWm * MWm * MWm) +
                               ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                               (MWm * MWm) * (t + (MN[0] * MN[0]))) *
                              MC[i1] -
                          6 * t * coup70[i1] * (MWm * MWm) * MN[0])) +
                       coup53[i1] *
                           (coup71[i1] *
                                (2 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                                 (MWm * MWm * MWm * MWm) *
                                     (2 * s + 2 * t + 2 * u -
                                      5 * (MN[0] * MN[0])) +
                                 (MWm * MWm) * (t * (2 * u - (MN[0] * MN[0])) +
                                                (s + u - 4 * (MN[0] * MN[0])) *
                                                    (MN[0] * MN[0])) -
                                 (t - (MN[0] * MN[0])) *
                                     ((2 * t + u - 3 * (MN[0] * MN[0])) *
                                          (MN[0] * MN[0]) +
                                      s * (-t + (MN[0] * MN[0])))) +
                            3 * coup70[i1] * (MWm * MWm) *
                                (-s - u + (MWm * MWm) + 3 * (MN[0] * MN[0])) *
                                MC[i1] * MN[0]))) +
             std::conj(coup52[j1]) *
                 (std::conj(coup71[j1]) * MC[j1] *
                      (coup52[i1] *
                           (coup71[i1] *
                                ((s - t - u) * (MWm * MWm) +
                                 (MWm * MWm * MWm * MWm) +
                                 (t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0]))) *
                                MC[i1] +
                            3 * coup70[i1] * (MWm * MWm) *
                                (-s - u + (MWm * MWm) + 3 * (MN[0] * MN[0])) *
                                MN[0]) -
                       coup53[i1] * MN[0] *
                           (coup71[i1] * (-2 * (MWm * MWm * MWm * MWm) +
                                          ((t - (MN[0] * MN[0])) *
                                           (t - (MN[0] * MN[0]))) +
                                          (MWm * MWm) * (t + (MN[0] * MN[0]))) -
                            6 * coup70[i1] * (MWm * MWm) * MC[i1] * MN[0])) +
                  std::conj(coup70[j1]) *
                      (-(coup53[i1] * MN[0] *
                         (coup70[i1] *
                              (-2 * (MWm * MWm * MWm * MWm) +
                               ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                               (MWm * MWm) * (t + (MN[0] * MN[0]))) *
                              MC[i1] -
                          6 * t * coup71[i1] * (MWm * MWm) * MN[0])) +
                       coup52[i1] *
                           (coup70[i1] *
                                (2 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                                 (MWm * MWm * MWm * MWm) *
                                     (2 * s + 2 * t + 2 * u -
                                      5 * (MN[0] * MN[0])) +
                                 (MWm * MWm) * (t * (2 * u - (MN[0] * MN[0])) +
                                                (s + u - 4 * (MN[0] * MN[0])) *
                                                    (MN[0] * MN[0])) -
                                 (t - (MN[0] * MN[0])) *
                                     ((2 * t + u - 3 * (MN[0] * MN[0])) *
                                          (MN[0] * MN[0]) +
                                      s * (-t + (MN[0] * MN[0])))) +
                            3 * coup71[i1] * (MWm * MWm) *
                                (-s - u + (MWm * MWm) + 3 * (MN[0] * MN[0])) *
                                MC[i1] * MN[0])))) /
                ((MWm * MWm) * (t - (MC[i1] * MC[i1])) *
                 (t - (MC[j1] * MC[j1]))),
        j1, 2, i1, 2)

    return res.real();
}
double DT::N1N1ZZ(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        -0.5 * s + (MZ * MZ) +
        (cos_t * sqrt(s - 4 * (MZ * MZ)) * sqrt(s - 4 * (MN[0] * MN[0]))) / 2. +
        (MN[0] * MN[0]);
    std::complex<double> u = -s - t + 2 * (MZ * MZ) + 2 * (MN[0] * MN[0]);
    SUM2((std::conj(coup76[j1]) * coup76[i1] *
          (-4 * s * (MZ * MZ) + 12 * (MZ * MZ * MZ * MZ) + (s * s)) *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             (4. * (MZ * MZ * MZ * MZ) * (s - (Mh[i1] * Mh[i1])) *
              (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2(
        (coup76[i1] *
         (std::conj(coup57[j1]) *
              (std::conj(coup58[j1]) *
                   (-(coup3[i1] *
                      (8 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                       4 * (MZ * MZ * MZ * MZ) *
                           (t + 4 * u - 3 * (MN[0] * MN[0])) +
                       s * ((s * s) - (t * t) - (u * u) -
                            2 * s * (MN[0] * MN[0]) + 2 * t * (MN[0] * MN[0]) +
                            2 * u * (MN[0] * MN[0]) -
                            2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                       2 * (MZ * MZ) *
                           (4 * t * u - 2 * (s * s) + (t * t) + (u * u) -
                            6 * t * (MN[0] * MN[0]) - 6 * u * (MN[0] * MN[0]) +
                            s * (t + 2 * u + (MN[0] * MN[0])) +
                            6 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                    2 * coup2[i1] *
                        (4 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                         2 * (MZ * MZ * MZ * MZ) *
                             (s + 4 * t + u - 7 * (MN[0] * MN[0])) +
                         s * ((s + u - (MN[0] * MN[0])) * (MN[0] * MN[0]) +
                              t * (-u + (MN[0] * MN[0]))) +
                         (MZ * MZ) *
                             (s * (2 * t + u - 7 * (MN[0] * MN[0])) +
                              2 * (t * u + (t * t) + (u * u) -
                                   3 * t * (MN[0] * MN[0]) -
                                   3 * u * (MN[0] * MN[0]) +
                                   3 * (MN[0] * MN[0] * MN[0] * MN[0]))))) *
                   MN[0] +
               std::conj(coup59[j1]) *
                   (-2 * coup3[i1] *
                        (-4 * s * (MZ * MZ) + 12 * (MZ * MZ * MZ * MZ) +
                         (s * s)) *
                        (MN[0] * MN[0]) +
                    coup2[i1] *
                        (-2 * (MZ * MZ) *
                             (2 * (s * s) + s * (-t + u - 4 * (MN[0] * MN[0])) -
                              (t - u) * (t + u - 2 * (MN[0] * MN[0]))) +
                         4 * (MZ * MZ * MZ * MZ) *
                             (3 * s - t + u - 6 * (MN[0] * MN[0])) +
                         s * ((s * s) -
                              (t - u) * (t + u - 2 * (MN[0] * MN[0])) -
                              2 * s * (MN[0] * MN[0])))) *
                   MN[j1]) +
          std::conj(coup56[j1]) *
              (std::conj(coup59[j1]) *
                   (-(coup2[i1] *
                      (8 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                       4 * (MZ * MZ * MZ * MZ) *
                           (t + 4 * u - 3 * (MN[0] * MN[0])) +
                       s * ((s * s) - (t * t) - (u * u) -
                            2 * s * (MN[0] * MN[0]) + 2 * t * (MN[0] * MN[0]) +
                            2 * u * (MN[0] * MN[0]) -
                            2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                       2 * (MZ * MZ) *
                           (4 * t * u - 2 * (s * s) + (t * t) + (u * u) -
                            6 * t * (MN[0] * MN[0]) - 6 * u * (MN[0] * MN[0]) +
                            s * (t + 2 * u + (MN[0] * MN[0])) +
                            6 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                    2 * coup3[i1] *
                        (4 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                         2 * (MZ * MZ * MZ * MZ) *
                             (s + 4 * t + u - 7 * (MN[0] * MN[0])) +
                         s * ((s + u - (MN[0] * MN[0])) * (MN[0] * MN[0]) +
                              t * (-u + (MN[0] * MN[0]))) +
                         (MZ * MZ) *
                             (s * (2 * t + u - 7 * (MN[0] * MN[0])) +
                              2 * (t * u + (t * t) + (u * u) -
                                   3 * t * (MN[0] * MN[0]) -
                                   3 * u * (MN[0] * MN[0]) +
                                   3 * (MN[0] * MN[0] * MN[0] * MN[0]))))) *
                   MN[0] +
               std::conj(coup58[j1]) *
                   (-2 * coup2[i1] *
                        (-4 * s * (MZ * MZ) + 12 * (MZ * MZ * MZ * MZ) +
                         (s * s)) *
                        (MN[0] * MN[0]) +
                    coup3[i1] *
                        (-2 * (MZ * MZ) *
                             (2 * (s * s) + s * (-t + u - 4 * (MN[0] * MN[0])) -
                              (t - u) * (t + u - 2 * (MN[0] * MN[0]))) +
                         4 * (MZ * MZ * MZ * MZ) *
                             (3 * s - t + u - 6 * (MN[0] * MN[0])) +
                         s * ((s * s) -
                              (t - u) * (t + u - 2 * (MN[0] * MN[0])) -
                              2 * s * (MN[0] * MN[0])))) *
                   MN[j1]))) /
                (2. * (MZ * MZ * MZ * MZ) * (s - (Mh[i1] * Mh[i1])) *
                 (u - (MN[j1] * MN[j1]))) +
            (coup76[i1] *
             (std::conj(coup57[j1]) *
                  (std::conj(coup58[j1]) *
                       (-(coup3[i1] *
                          (8 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                           4 * (MZ * MZ * MZ * MZ) *
                               (4 * t + u - 3 * (MN[0] * MN[0])) +
                           s * ((s * s) - (t * t) - (u * u) -
                                2 * s * (MN[0] * MN[0]) +
                                2 * t * (MN[0] * MN[0]) +
                                2 * u * (MN[0] * MN[0]) -
                                2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                           2 * (MZ * MZ) *
                               (4 * t * u - 2 * (s * s) + (t * t) + (u * u) -
                                6 * t * (MN[0] * MN[0]) -
                                6 * u * (MN[0] * MN[0]) +
                                s * (2 * t + u + (MN[0] * MN[0])) +
                                6 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                        2 * coup2[i1] *
                            (4 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                             2 * (MZ * MZ * MZ * MZ) *
                                 (s + t + 4 * u - 7 * (MN[0] * MN[0])) +
                             s * ((s + u - (MN[0] * MN[0])) * (MN[0] * MN[0]) +
                                  t * (-u + (MN[0] * MN[0]))) +
                             (MZ * MZ) *
                                 (s * (t + 2 * u - 7 * (MN[0] * MN[0])) +
                                  2 * (t * u + (t * t) + (u * u) -
                                       3 * t * (MN[0] * MN[0]) -
                                       3 * u * (MN[0] * MN[0]) +
                                       3 * (MN[0] * MN[0] * MN[0] * MN[0]))))) *
                       MN[0] +
                   std::conj(coup59[j1]) *
                       (-2 * coup3[i1] *
                            (-4 * s * (MZ * MZ) + 12 * (MZ * MZ * MZ * MZ) +
                             (s * s)) *
                            (MN[0] * MN[0]) +
                        coup2[i1] *
                            (-2 * (MZ * MZ) *
                                 (2 * (s * s) +
                                  s * (t - u - 4 * (MN[0] * MN[0])) +
                                  (t - u) * (t + u - 2 * (MN[0] * MN[0]))) +
                             4 * (MZ * MZ * MZ * MZ) *
                                 (3 * s + t - u - 6 * (MN[0] * MN[0])) +
                             s * ((s * s) +
                                  (t - u) * (t + u - 2 * (MN[0] * MN[0])) -
                                  2 * s * (MN[0] * MN[0])))) *
                       MN[j1]) +
              std::conj(coup56[j1]) *
                  (std::conj(coup59[j1]) *
                       (-(coup2[i1] *
                          (8 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                           4 * (MZ * MZ * MZ * MZ) *
                               (4 * t + u - 3 * (MN[0] * MN[0])) +
                           s * ((s * s) - (t * t) - (u * u) -
                                2 * s * (MN[0] * MN[0]) +
                                2 * t * (MN[0] * MN[0]) +
                                2 * u * (MN[0] * MN[0]) -
                                2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                           2 * (MZ * MZ) *
                               (4 * t * u - 2 * (s * s) + (t * t) + (u * u) -
                                6 * t * (MN[0] * MN[0]) -
                                6 * u * (MN[0] * MN[0]) +
                                s * (2 * t + u + (MN[0] * MN[0])) +
                                6 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                        2 * coup3[i1] *
                            (4 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                             2 * (MZ * MZ * MZ * MZ) *
                                 (s + t + 4 * u - 7 * (MN[0] * MN[0])) +
                             s * ((s + u - (MN[0] * MN[0])) * (MN[0] * MN[0]) +
                                  t * (-u + (MN[0] * MN[0]))) +
                             (MZ * MZ) *
                                 (s * (t + 2 * u - 7 * (MN[0] * MN[0])) +
                                  2 * (t * u + (t * t) + (u * u) -
                                       3 * t * (MN[0] * MN[0]) -
                                       3 * u * (MN[0] * MN[0]) +
                                       3 * (MN[0] * MN[0] * MN[0] * MN[0]))))) *
                       MN[0] +
                   std::conj(coup58[j1]) *
                       (-2 * coup2[i1] *
                            (-4 * s * (MZ * MZ) + 12 * (MZ * MZ * MZ * MZ) +
                             (s * s)) *
                            (MN[0] * MN[0]) +
                        coup3[i1] *
                            (-2 * (MZ * MZ) *
                                 (2 * (s * s) +
                                  s * (t - u - 4 * (MN[0] * MN[0])) +
                                  (t - u) * (t + u - 2 * (MN[0] * MN[0]))) +
                             4 * (MZ * MZ * MZ * MZ) *
                                 (3 * s + t - u - 6 * (MN[0] * MN[0])) +
                             s * ((s * s) +
                                  (t - u) * (t + u - 2 * (MN[0] * MN[0])) -
                                  2 * s * (MN[0] * MN[0])))) *
                       MN[j1]))) /
                (2. * (MZ * MZ * MZ * MZ) * (s - (Mh[i1] * Mh[i1])) *
                 (t - (MN[j1] * MN[j1]))),
        j1, 5, i1, 6)

    SUM2(
        (-(std::conj(coup57[j1]) *
           (std::conj(coup58[j1]) *
                (3 * coup56[i1] * (MZ * MZ) * MN[0] *
                     (6 * t * coup59[i1] * (MZ * MZ) * MN[0] +
                      coup58[i1] *
                          (2 * (MZ * MZ * MZ * MZ) +
                           (t - (MN[0] * MN[0])) * (s + u - (MN[0] * MN[0])) +
                           (MZ * MZ) * (-3 * t + (MN[0] * MN[0]))) *
                          MN[i1]) +
                 coup57[i1] *
                     (coup58[i1] *
                          (-8 * t * (MZ * MZ * MZ * MZ * MZ * MZ) +
                           4 * (MZ * MZ * MZ * MZ * MZ * MZ * MZ * MZ) +
                           (MZ * MZ) * (t - (MN[0] * MN[0])) *
                               ((t + u - 2 * (MN[0] * MN[0])) *
                                    (t - (MN[0] * MN[0])) -
                                s * (3 * t + (MN[0] * MN[0]))) +
                           ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) *
                               ((s + u - (MN[0] * MN[0])) * (MN[0] * MN[0]) +
                                t * (-u + (MN[0] * MN[0]))) +
                           (MZ * MZ * MZ * MZ) *
                               (4 * s * t + 3 * (t * t) -
                                2 * s * (MN[0] * MN[0]) +
                                2 * t * (MN[0] * MN[0]) -
                                2 * u * (MN[0] * MN[0]) -
                                (MN[0] * MN[0] * MN[0] * MN[0]))) +
                      3 * coup59[i1] * (MZ * MZ) *
                          (2 * (MZ * MZ * MZ * MZ) -
                           ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) -
                           (MZ * MZ) * (t + (MN[0] * MN[0]))) *
                          MN[0] * MN[i1])) +
            std::conj(coup59[j1]) *
                (coup57[i1] *
                     (3 * coup58[i1] * (MZ * MZ) *
                          (2 * (MZ * MZ * MZ * MZ) -
                           ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) -
                           (MZ * MZ) * (t + (MN[0] * MN[0]))) *
                          MN[0] -
                      coup59[i1] *
                          (s * ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) -
                           2 * (s + t - u) * (MZ * MZ) * (t - (MN[0] * MN[0])) +
                           2 * (MZ * MZ * MZ * MZ) *
                               (s + t - u - (MN[0] * MN[0]))) *
                          MN[i1]) +
                 3 * coup56[i1] * (MZ * MZ) * MN[0] *
                     (coup59[i1] *
                          (2 * (MZ * MZ * MZ * MZ) +
                           (t - (MN[0] * MN[0])) * (s + u - (MN[0] * MN[0])) +
                           (MZ * MZ) * (-3 * t + (MN[0] * MN[0]))) +
                      6 * coup58[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                MN[j1])) -
         std::conj(coup56[j1]) *
             (std::conj(coup59[j1]) *
                  (3 * coup57[i1] * (MZ * MZ) * MN[0] *
                       (6 * t * coup58[i1] * (MZ * MZ) * MN[0] +
                        coup59[i1] *
                            (2 * (MZ * MZ * MZ * MZ) +
                             (t - (MN[0] * MN[0])) * (s + u - (MN[0] * MN[0])) +
                             (MZ * MZ) * (-3 * t + (MN[0] * MN[0]))) *
                            MN[i1]) +
                   coup56[i1] *
                       (coup59[i1] *
                            (-8 * t * (MZ * MZ * MZ * MZ * MZ * MZ) +
                             4 * (MZ * MZ * MZ * MZ * MZ * MZ * MZ * MZ) +
                             (MZ * MZ) * (t - (MN[0] * MN[0])) *
                                 ((t + u - 2 * (MN[0] * MN[0])) *
                                      (t - (MN[0] * MN[0])) -
                                  s * (3 * t + (MN[0] * MN[0]))) +
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) *
                                 ((s + u - (MN[0] * MN[0])) * (MN[0] * MN[0]) +
                                  t * (-u + (MN[0] * MN[0]))) +
                             (MZ * MZ * MZ * MZ) *
                                 (4 * s * t + 3 * (t * t) -
                                  2 * s * (MN[0] * MN[0]) +
                                  2 * t * (MN[0] * MN[0]) -
                                  2 * u * (MN[0] * MN[0]) -
                                  (MN[0] * MN[0] * MN[0] * MN[0]))) +
                        3 * coup58[i1] * (MZ * MZ) *
                            (2 * (MZ * MZ * MZ * MZ) -
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) -
                             (MZ * MZ) * (t + (MN[0] * MN[0]))) *
                            MN[0] * MN[i1])) +
              std::conj(coup58[j1]) *
                  (coup56[i1] *
                       (3 * coup59[i1] * (MZ * MZ) *
                            (2 * (MZ * MZ * MZ * MZ) -
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) -
                             (MZ * MZ) * (t + (MN[0] * MN[0]))) *
                            MN[0] -
                        coup58[i1] *
                            (s * ((t - (MN[0] * MN[0])) *
                                  (t - (MN[0] * MN[0]))) -
                             2 * (s + t - u) * (MZ * MZ) *
                                 (t - (MN[0] * MN[0])) +
                             2 * (MZ * MZ * MZ * MZ) *
                                 (s + t - u - (MN[0] * MN[0]))) *
                            MN[i1]) +
                   3 * coup57[i1] * (MZ * MZ) * MN[0] *
                       (coup58[i1] *
                            (2 * (MZ * MZ * MZ * MZ) +
                             (t - (MN[0] * MN[0])) * (s + u - (MN[0] * MN[0])) +
                             (MZ * MZ) * (-3 * t + (MN[0] * MN[0]))) +
                        6 * coup59[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                  MN[j1])) /
                ((MZ * MZ * MZ * MZ) * (t - (MN[i1] * MN[i1])) *
                 (t - (MN[j1] * MN[j1]))) +
            (-(std::conj(coup57[j1]) *
               (std::conj(coup58[j1]) *
                    (3 * coup56[i1] * (MZ * MZ) * MN[0] *
                         (6 * u * coup59[i1] * (MZ * MZ) * MN[0] +
                          coup58[i1] *
                              (2 * (MZ * MZ * MZ * MZ) +
                               (s + t - (MN[0] * MN[0])) *
                                   (u - (MN[0] * MN[0])) +
                               (MZ * MZ) * (-3 * u + (MN[0] * MN[0]))) *
                              MN[i1]) +
                     coup57[i1] *
                         (coup58[i1] *
                              (-8 * u * (MZ * MZ * MZ * MZ * MZ * MZ) +
                               4 * (MZ * MZ * MZ * MZ * MZ * MZ * MZ * MZ) +
                               ((u - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) *
                                   ((s + u - (MN[0] * MN[0])) *
                                        (MN[0] * MN[0]) +
                                    t * (-u + (MN[0] * MN[0]))) +
                               (MZ * MZ) * (u - (MN[0] * MN[0])) *
                                   ((t + u - 2 * (MN[0] * MN[0])) *
                                        (u - (MN[0] * MN[0])) -
                                    s * (3 * u + (MN[0] * MN[0]))) +
                               (MZ * MZ * MZ * MZ) *
                                   (4 * s * u + 3 * (u * u) -
                                    2 * s * (MN[0] * MN[0]) -
                                    2 * t * (MN[0] * MN[0]) +
                                    2 * u * (MN[0] * MN[0]) -
                                    (MN[0] * MN[0] * MN[0] * MN[0]))) +
                          3 * coup59[i1] * (MZ * MZ) *
                              (2 * (MZ * MZ * MZ * MZ) -
                               ((u - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) -
                               (MZ * MZ) * (u + (MN[0] * MN[0]))) *
                              MN[0] * MN[i1])) +
                std::conj(coup59[j1]) *
                    (coup57[i1] *
                         (3 * coup58[i1] * (MZ * MZ) *
                              (2 * (MZ * MZ * MZ * MZ) -
                               ((u - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) -
                               (MZ * MZ) * (u + (MN[0] * MN[0]))) *
                              MN[0] -
                          coup59[i1] *
                              (s * ((u - (MN[0] * MN[0])) *
                                    (u - (MN[0] * MN[0]))) -
                               2 * (s - t + u) * (MZ * MZ) *
                                   (u - (MN[0] * MN[0])) +
                               2 * (MZ * MZ * MZ * MZ) *
                                   (s - t + u - (MN[0] * MN[0]))) *
                              MN[i1]) +
                     3 * coup56[i1] * (MZ * MZ) * MN[0] *
                         (coup59[i1] *
                              (2 * (MZ * MZ * MZ * MZ) +
                               (s + t - (MN[0] * MN[0])) *
                                   (u - (MN[0] * MN[0])) +
                               (MZ * MZ) * (-3 * u + (MN[0] * MN[0]))) +
                          6 * coup58[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                    MN[j1])) -
             std::conj(coup56[j1]) *
                 (std::conj(coup59[j1]) *
                      (3 * coup57[i1] * (MZ * MZ) * MN[0] *
                           (6 * u * coup58[i1] * (MZ * MZ) * MN[0] +
                            coup59[i1] *
                                (2 * (MZ * MZ * MZ * MZ) +
                                 (s + t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0])) +
                                 (MZ * MZ) * (-3 * u + (MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup56[i1] *
                           (coup59[i1] *
                                (-8 * u * (MZ * MZ * MZ * MZ * MZ * MZ) +
                                 4 * (MZ * MZ * MZ * MZ * MZ * MZ * MZ * MZ) +
                                 ((u - (MN[0] * MN[0])) *
                                  (u - (MN[0] * MN[0]))) *
                                     ((s + u - (MN[0] * MN[0])) *
                                          (MN[0] * MN[0]) +
                                      t * (-u + (MN[0] * MN[0]))) +
                                 (MZ * MZ) * (u - (MN[0] * MN[0])) *
                                     ((t + u - 2 * (MN[0] * MN[0])) *
                                          (u - (MN[0] * MN[0])) -
                                      s * (3 * u + (MN[0] * MN[0]))) +
                                 (MZ * MZ * MZ * MZ) *
                                     (4 * s * u + 3 * (u * u) -
                                      2 * s * (MN[0] * MN[0]) -
                                      2 * t * (MN[0] * MN[0]) +
                                      2 * u * (MN[0] * MN[0]) -
                                      (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            3 * coup58[i1] * (MZ * MZ) *
                                (2 * (MZ * MZ * MZ * MZ) -
                                 ((u - (MN[0] * MN[0])) *
                                  (u - (MN[0] * MN[0]))) -
                                 (MZ * MZ) * (u + (MN[0] * MN[0]))) *
                                MN[0] * MN[i1])) +
                  std::conj(coup58[j1]) *
                      (coup56[i1] *
                           (3 * coup59[i1] * (MZ * MZ) *
                                (2 * (MZ * MZ * MZ * MZ) -
                                 ((u - (MN[0] * MN[0])) *
                                  (u - (MN[0] * MN[0]))) -
                                 (MZ * MZ) * (u + (MN[0] * MN[0]))) *
                                MN[0] -
                            coup58[i1] *
                                (s * ((u - (MN[0] * MN[0])) *
                                      (u - (MN[0] * MN[0]))) -
                                 2 * (s - t + u) * (MZ * MZ) *
                                     (u - (MN[0] * MN[0])) +
                                 2 * (MZ * MZ * MZ * MZ) *
                                     (s - t + u - (MN[0] * MN[0]))) *
                                MN[i1]) +
                       3 * coup57[i1] * (MZ * MZ) * MN[0] *
                           (coup58[i1] *
                                (2 * (MZ * MZ * MZ * MZ) +
                                 (s + t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0])) +
                                 (MZ * MZ) * (-3 * u + (MN[0] * MN[0]))) +
                            6 * coup59[i1] * (MZ * MZ) * MN[0] * MN[i1])) *
                      MN[j1])) /
                ((MZ * MZ * MZ * MZ) * (u - (MN[i1] * MN[i1])) *
                 (u - (MN[j1] * MN[j1]))) +
            (std::conj(coup57[j1]) *
                 (std::conj(coup58[j1]) *
                      (coup56[i1] * MN[0] *
                           (2 * coup59[i1] *
                                (-5 * (t + u) * (MZ * MZ * MZ * MZ) +
                                 4 * (MZ * MZ * MZ * MZ * MZ * MZ) +
                                 s * (t * (u - (MN[0] * MN[0])) +
                                      (MN[0] * MN[0]) *
                                          (-s - u + (MN[0] * MN[0]))) +
                                 (MZ * MZ) *
                                     (((t - u) * (t - u)) +
                                      s * (t + u + 2 * (MN[0] * MN[0])))) *
                                MN[0] +
                            coup58[i1] *
                                (4 * (MZ * MZ * MZ * MZ * MZ * MZ) +
                                 (MZ * MZ * MZ * MZ) *
                                     (4 * t - 2 * (u + 3 * (MN[0] * MN[0]))) +
                                 2 * (MZ * MZ) *
                                     (-(t * u) + 2 * (s * s) - (t * t) -
                                      (u * u) +
                                      s * (-t + u - 4 * (MN[0] * MN[0])) +
                                      3 * t * (MN[0] * MN[0]) +
                                      3 * u * (MN[0] * MN[0]) -
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 s * (-(s * s) + (t * t) + (u * u) +
                                      2 * s * (MN[0] * MN[0]) -
                                      2 * t * (MN[0] * MN[0]) -
                                      2 * u * (MN[0] * MN[0]) +
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup57[i1] *
                           (coup58[i1] *
                                (8 * (MZ * MZ * MZ * MZ * MZ * MZ) *
                                     (4 * s - 11 * (MN[0] * MN[0])) +
                                 (s * s * s) * (MN[0] * MN[0]) -
                                 s * ((t - u) * (t - u)) * (MN[0] * MN[0]) +
                                 (s * s) *
                                     (-(t * u) + t * (MN[0] * MN[0]) +
                                      u * (MN[0] * MN[0]) -
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0])) *
                                     ((t * t) + (u * u) -
                                      2 * t * (MN[0] * MN[0]) -
                                      2 * u * (MN[0] * MN[0]) +
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                                 2 * (MZ * MZ * MZ * MZ) *
                                     (3 * t * u + 4 * (s * s) - 2 * (t * t) -
                                      2 * (u * u) +
                                      s * (6 * t + 6 * u -
                                           20 * (MN[0] * MN[0])) -
                                      16 * t * (MN[0] * MN[0]) -
                                      16 * u * (MN[0] * MN[0]) +
                                      27 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 2 * (MZ * MZ) *
                                     (-(t * t * t) - (u * u * u) +
                                      (s * s) * (t + u - 4 * (MN[0] * MN[0])) -
                                      2 * t * u * (MN[0] * MN[0]) +
                                      4 * (t * t) * (MN[0] * MN[0]) +
                                      4 * (u * u) * (MN[0] * MN[0]) -
                                      3 * t * (MN[0] * MN[0] * MN[0] * MN[0]) -
                                      3 * u * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                      s * (t * u - 4 * t * (MN[0] * MN[0]) -
                                           4 * u * (MN[0] * MN[0]) +
                                           11 * (MN[0] * MN[0] * MN[0] *
                                                 MN[0])) +
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0] *
                                           MN[0] * MN[0]))) +
                            2 * coup59[i1] *
                                (10 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                                 (MZ * MZ * MZ * MZ) * (2 * s + 8 * t + 5 * u -
                                                        11 * (MN[0] * MN[0])) +
                                 s * ((s + u - (MN[0] * MN[0])) *
                                          (MN[0] * MN[0]) +
                                      t * (-u + (MN[0] * MN[0]))) +
                                 (MZ * MZ) *
                                     (2 * t * u + 2 * (t * t) - (u * u) +
                                      s * (2 * t + u - 7 * (MN[0] * MN[0])) -
                                      6 * t * (MN[0] * MN[0]) +
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0]))) *
                                MN[0] * MN[i1])) +
                  std::conj(coup59[j1]) *
                      (coup57[i1] *
                           (2 * coup58[i1] *
                                (10 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                                 (MZ * MZ * MZ * MZ) * (2 * s + 5 * t + 8 * u -
                                                        11 * (MN[0] * MN[0])) +
                                 s * ((s + u - (MN[0] * MN[0])) *
                                          (MN[0] * MN[0]) +
                                      t * (-u + (MN[0] * MN[0]))) +
                                 (MZ * MZ) *
                                     (2 * t * u - (t * t) + 2 * (u * u) +
                                      s * (t + 2 * u - 7 * (MN[0] * MN[0])) -
                                      6 * u * (MN[0] * MN[0]) +
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0]))) *
                                MN[0] +
                            coup59[i1] *
                                (4 * (MZ * MZ * MZ * MZ) *
                                     (2 * s - 5 * (MN[0] * MN[0])) +
                                 2 * (MZ * MZ) *
                                     (-2 * (s * s) + ((t - u) * (t - u)) +
                                      s * (t + u + 2 * (MN[0] * MN[0]))) +
                                 s * ((s * s) - (t * t) - (u * u) -
                                      2 * s * (MN[0] * MN[0]) +
                                      2 * t * (MN[0] * MN[0]) +
                                      2 * u * (MN[0] * MN[0]) -
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup56[i1] * MN[0] *
                           (coup59[i1] *
                                (4 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                                 2 * (MZ * MZ * MZ * MZ) *
                                     (t - 2 * u + 3 * (MN[0] * MN[0])) +
                                 2 * (MZ * MZ) *
                                     (-(t * u) + 2 * (s * s) - (t * t) -
                                      (u * u) +
                                      s * (t - u - 4 * (MN[0] * MN[0])) +
                                      3 * t * (MN[0] * MN[0]) +
                                      3 * u * (MN[0] * MN[0]) -
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 s * (-(s * s) + (t * t) + (u * u) +
                                      2 * s * (MN[0] * MN[0]) -
                                      2 * t * (MN[0] * MN[0]) -
                                      2 * u * (MN[0] * MN[0]) +
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            2 * coup58[i1] *
                                (4 * s * (MZ * MZ) + 6 * (MZ * MZ * MZ * MZ) -
                                 (s * s)) *
                                MN[0] * MN[i1])) *
                      MN[j1]) +
             std::conj(coup56[j1]) *
                 (std::conj(coup59[j1]) *
                      (coup57[i1] * MN[0] *
                           (2 * coup58[i1] *
                                (-5 * (t + u) * (MZ * MZ * MZ * MZ) +
                                 4 * (MZ * MZ * MZ * MZ * MZ * MZ) +
                                 s * (t * (u - (MN[0] * MN[0])) +
                                      (MN[0] * MN[0]) *
                                          (-s - u + (MN[0] * MN[0]))) +
                                 (MZ * MZ) *
                                     (((t - u) * (t - u)) +
                                      s * (t + u + 2 * (MN[0] * MN[0])))) *
                                MN[0] +
                            coup59[i1] *
                                (4 * (MZ * MZ * MZ * MZ * MZ * MZ) +
                                 (MZ * MZ * MZ * MZ) *
                                     (4 * t - 2 * (u + 3 * (MN[0] * MN[0]))) +
                                 2 * (MZ * MZ) *
                                     (-(t * u) + 2 * (s * s) - (t * t) -
                                      (u * u) +
                                      s * (-t + u - 4 * (MN[0] * MN[0])) +
                                      3 * t * (MN[0] * MN[0]) +
                                      3 * u * (MN[0] * MN[0]) -
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 s * (-(s * s) + (t * t) + (u * u) +
                                      2 * s * (MN[0] * MN[0]) -
                                      2 * t * (MN[0] * MN[0]) -
                                      2 * u * (MN[0] * MN[0]) +
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup56[i1] *
                           (coup59[i1] *
                                (8 * (MZ * MZ * MZ * MZ * MZ * MZ) *
                                     (4 * s - 11 * (MN[0] * MN[0])) +
                                 (s * s * s) * (MN[0] * MN[0]) -
                                 s * ((t - u) * (t - u)) * (MN[0] * MN[0]) +
                                 (s * s) *
                                     (-(t * u) + t * (MN[0] * MN[0]) +
                                      u * (MN[0] * MN[0]) -
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0])) *
                                     ((t * t) + (u * u) -
                                      2 * t * (MN[0] * MN[0]) -
                                      2 * u * (MN[0] * MN[0]) +
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                                 2 * (MZ * MZ * MZ * MZ) *
                                     (3 * t * u + 4 * (s * s) - 2 * (t * t) -
                                      2 * (u * u) +
                                      s * (6 * t + 6 * u -
                                           20 * (MN[0] * MN[0])) -
                                      16 * t * (MN[0] * MN[0]) -
                                      16 * u * (MN[0] * MN[0]) +
                                      27 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 2 * (MZ * MZ) *
                                     (-(t * t * t) - (u * u * u) +
                                      (s * s) * (t + u - 4 * (MN[0] * MN[0])) -
                                      2 * t * u * (MN[0] * MN[0]) +
                                      4 * (t * t) * (MN[0] * MN[0]) +
                                      4 * (u * u) * (MN[0] * MN[0]) -
                                      3 * t * (MN[0] * MN[0] * MN[0] * MN[0]) -
                                      3 * u * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                      s * (t * u - 4 * t * (MN[0] * MN[0]) -
                                           4 * u * (MN[0] * MN[0]) +
                                           11 * (MN[0] * MN[0] * MN[0] *
                                                 MN[0])) +
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0] *
                                           MN[0] * MN[0]))) +
                            2 * coup58[i1] *
                                (10 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                                 (MZ * MZ * MZ * MZ) * (2 * s + 8 * t + 5 * u -
                                                        11 * (MN[0] * MN[0])) +
                                 s * ((s + u - (MN[0] * MN[0])) *
                                          (MN[0] * MN[0]) +
                                      t * (-u + (MN[0] * MN[0]))) +
                                 (MZ * MZ) *
                                     (2 * t * u + 2 * (t * t) - (u * u) +
                                      s * (2 * t + u - 7 * (MN[0] * MN[0])) -
                                      6 * t * (MN[0] * MN[0]) +
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0]))) *
                                MN[0] * MN[i1])) +
                  std::conj(coup58[j1]) *
                      (coup56[i1] *
                           (2 * coup59[i1] *
                                (10 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                                 (MZ * MZ * MZ * MZ) * (2 * s + 5 * t + 8 * u -
                                                        11 * (MN[0] * MN[0])) +
                                 s * ((s + u - (MN[0] * MN[0])) *
                                          (MN[0] * MN[0]) +
                                      t * (-u + (MN[0] * MN[0]))) +
                                 (MZ * MZ) *
                                     (2 * t * u - (t * t) + 2 * (u * u) +
                                      s * (t + 2 * u - 7 * (MN[0] * MN[0])) -
                                      6 * u * (MN[0] * MN[0]) +
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0]))) *
                                MN[0] +
                            coup58[i1] *
                                (4 * (MZ * MZ * MZ * MZ) *
                                     (2 * s - 5 * (MN[0] * MN[0])) +
                                 2 * (MZ * MZ) *
                                     (-2 * (s * s) + ((t - u) * (t - u)) +
                                      s * (t + u + 2 * (MN[0] * MN[0]))) +
                                 s * ((s * s) - (t * t) - (u * u) -
                                      2 * s * (MN[0] * MN[0]) +
                                      2 * t * (MN[0] * MN[0]) +
                                      2 * u * (MN[0] * MN[0]) -
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0]))) *
                                MN[i1]) +
                       coup57[i1] * MN[0] *
                           (coup58[i1] *
                                (4 * (MZ * MZ * MZ * MZ * MZ * MZ) -
                                 2 * (MZ * MZ * MZ * MZ) *
                                     (t - 2 * u + 3 * (MN[0] * MN[0])) +
                                 2 * (MZ * MZ) *
                                     (-(t * u) + 2 * (s * s) - (t * t) -
                                      (u * u) +
                                      s * (t - u - 4 * (MN[0] * MN[0])) +
                                      3 * t * (MN[0] * MN[0]) +
                                      3 * u * (MN[0] * MN[0]) -
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 s * (-(s * s) + (t * t) + (u * u) +
                                      2 * s * (MN[0] * MN[0]) -
                                      2 * t * (MN[0] * MN[0]) -
                                      2 * u * (MN[0] * MN[0]) +
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            2 * coup59[i1] *
                                (4 * s * (MZ * MZ) + 6 * (MZ * MZ * MZ * MZ) -
                                 (s * s)) *
                                MN[0] * MN[i1])) *
                      MN[j1])) /
                ((MZ * MZ * MZ * MZ) * (t - (MN[i1] * MN[i1])) *
                 (u - (MN[j1] * MN[j1]))),
        j1, 5, i1, 5)

    return res.real();
}
double DT::N1N1WW(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        -0.5 * s + (MWm * MWm) +
        (cos_t * sqrt(s - 4 * (MWm * MWm)) * sqrt(s - 4 * (MN[0] * MN[0]))) /
            2. +
        (MN[0] * MN[0]);
    std::complex<double> u = -s - t + 2 * (MWm * MWm) + 2 * (MN[0] * MN[0]);
	std::cout << t << " " << u << "\n";
    res +=
        -0.25 *
        ((CTW * CTW) * (g2 * g2) *
         (std::conj(coup8) *
              (2 * coup9 *
                   (68 * s * (MWm * MWm * MWm * MWm) +
                    48 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                    16 * (MWm * MWm) * (s * s) - (s * s * s)) *
                   (MN[0] * MN[0]) +
               coup8 *
                   (128 * (MWm * MWm * MWm * MWm * MWm * MWm * MWm * MWm) +
                    16 * (MWm * MWm * MWm * MWm * MWm * MWm) *
                        (s - 8 * t - 8 * u + 10 * (MN[0] * MN[0])) +
                    (s * s) * (-(s * s) + ((t - u) * (t - u)) +
                               2 * s * (MN[0] * MN[0])) -
                    4 * s * (MWm * MWm) *
                        (3 * (t * t) + 3 * (u * u) +
                         2 * t * (u - 4 * (MN[0] * MN[0])) -
                         8 * u * (MN[0] * MN[0]) +
                         8 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                    4 * (MWm * MWm * MWm * MWm) *
                        (10 * t * u + (s * s) + 11 * (t * t) + 11 * (u * u) +
                         2 * s * (4 * t + 4 * u - 9 * (MN[0] * MN[0])) -
                         32 * t * (MN[0] * MN[0]) - 32 * u * (MN[0] * MN[0]) +
                         32 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
          std::conj(coup9) *
              (2 * coup8 *
                   (68 * s * (MWm * MWm * MWm * MWm) +
                    48 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                    16 * (MWm * MWm) * (s * s) - (s * s * s)) *
                   (MN[0] * MN[0]) +
               coup9 *
                   (128 * (MWm * MWm * MWm * MWm * MWm * MWm * MWm * MWm) +
                    16 * (MWm * MWm * MWm * MWm * MWm * MWm) *
                        (s - 8 * t - 8 * u + 10 * (MN[0] * MN[0])) +
                    (s * s) * (-(s * s) + ((t - u) * (t - u)) +
                               2 * s * (MN[0] * MN[0])) -
                    4 * s * (MWm * MWm) *
                        (3 * (t * t) + 3 * (u * u) +
                         2 * t * (u - 4 * (MN[0] * MN[0])) -
                         8 * u * (MN[0] * MN[0]) +
                         8 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                    4 * (MWm * MWm * MWm * MWm) *
                        (10 * t * u + (s * s) + 11 * (t * t) + 11 * (u * u) +
                         2 * s * (4 * t + 4 * u - 9 * (MN[0] * MN[0])) -
                         32 * t * (MN[0] * MN[0]) - 32 * u * (MN[0] * MN[0]) +
                         32 * (MN[0] * MN[0] * MN[0] * MN[0])))))) /
        ((MWm * MWm * MWm * MWm) * (((MZ * MZ) - s) * ((MZ * MZ) - s)));

    SUM1(-0.5 *
             (CTW * g2 * I * (t - u) * (std::conj(coup8) + std::conj(coup9)) *
              (coup2[i1] + coup3[i1]) * coup77[i1] *
              (12 * (MWm * MWm * MWm * MWm) - (s * s)) * MN[0]) /
             ((MWm * MWm * MWm * MWm) * (-s + (MZ * MZ)) *
              (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1(
        -0.5 *
                (CTW * g2 * I *
                 (std::conj(coup70[j1]) *
                      (std::conj(coup79[j1]) *
                           (2 * coup9 * (MWm * MWm) *
                                (-s + t - u + 4 * (MWm * MWm)) *
                                (5 * s + 6 * (MWm * MWm)) * (MN[0] * MN[0]) +
                            coup8 *
                                (32 * (MWm * MWm * MWm * MWm * MWm * MWm * MWm *
                                       MWm) +
                                 8 * (MWm * MWm * MWm * MWm * MWm * MWm) *
                                     (5 * s - 7 * t - u -
                                      10 * (MN[0] * MN[0])) -
                                 s * (t - (MN[0] * MN[0])) *
                                     (-(s * s) + ((t - u) * (t - u)) +
                                      4 * s * (MN[0] * MN[0])) -
                                 4 * (MWm * MWm * MWm * MWm) *
                                     (-2 * t * u + (s * s) - 5 * (t * t) -
                                      (u * u) +
                                      s * (-2 * t + 4 * u -
                                           5 * (MN[0] * MN[0])) +
                                      t * (MN[0] * MN[0]) -
                                      9 * u * (MN[0] * MN[0]) +
                                      16 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                                 2 * (MWm * MWm) *
                                     ((s * s * s) -
                                      (s * s) * (u + 2 * (MN[0] * MN[0])) +
                                      s * (2 * t * u + 3 * (t * t) - (u * u) -
                                           9 * t * (MN[0] * MN[0]) +
                                           5 * u * (MN[0] * MN[0])) -
                                      (t - u) * (t * u + 2 * (t * t) + (u * u) -
                                                 5 * t * (MN[0] * MN[0]) -
                                                 3 * u * (MN[0] * MN[0]) +
                                                 4 * (MN[0] * MN[0] * MN[0] *
                                                      MN[0]))))) +
                       2 * (coup8 + coup9) * std::conj(coup78[j1]) *
                           (40 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                            s * (MWm * MWm) *
                                (s - 3 * (t + u - 2 * (MN[0] * MN[0]))) -
                            2 * (MWm * MWm * MWm * MWm) *
                                (3 * s + 13 * t + 7 * u -
                                 20 * (MN[0] * MN[0])) +
                            (s * s) * (t - (MN[0] * MN[0]))) *
                           MC[j1] * MN[0]) +
                  std::conj(coup71[j1]) *
                      (std::conj(coup78[j1]) *
                           (2 * coup8 * (MWm * MWm) *
                                (-s + t - u + 4 * (MWm * MWm)) *
                                (5 * s + 6 * (MWm * MWm)) * (MN[0] * MN[0]) +
                            coup9 *
                                (32 * (MWm * MWm * MWm * MWm * MWm * MWm * MWm *
                                       MWm) +
                                 8 * (MWm * MWm * MWm * MWm * MWm * MWm) *
                                     (5 * s - 7 * t - u -
                                      10 * (MN[0] * MN[0])) -
                                 s * (t - (MN[0] * MN[0])) *
                                     (-(s * s) + ((t - u) * (t - u)) +
                                      4 * s * (MN[0] * MN[0])) -
                                 4 * (MWm * MWm * MWm * MWm) *
                                     (-2 * t * u + (s * s) - 5 * (t * t) -
                                      (u * u) +
                                      s * (-2 * t + 4 * u -
                                           5 * (MN[0] * MN[0])) +
                                      t * (MN[0] * MN[0]) -
                                      9 * u * (MN[0] * MN[0]) +
                                      16 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                                 2 * (MWm * MWm) *
                                     ((s * s * s) -
                                      (s * s) * (u + 2 * (MN[0] * MN[0])) +
                                      s * (2 * t * u + 3 * (t * t) - (u * u) -
                                           9 * t * (MN[0] * MN[0]) +
                                           5 * u * (MN[0] * MN[0])) -
                                      (t - u) * (t * u + 2 * (t * t) + (u * u) -
                                                 5 * t * (MN[0] * MN[0]) -
                                                 3 * u * (MN[0] * MN[0]) +
                                                 4 * (MN[0] * MN[0] * MN[0] *
                                                      MN[0]))))) +
                       2 * (coup8 + coup9) * std::conj(coup79[j1]) *
                           (40 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                            s * (MWm * MWm) *
                                (s - 3 * (t + u - 2 * (MN[0] * MN[0]))) -
                            2 * (MWm * MWm * MWm * MWm) *
                                (3 * s + 13 * t + 7 * u -
                                 20 * (MN[0] * MN[0])) +
                            (s * s) * (t - (MN[0] * MN[0]))) *
                           MC[j1] * MN[0]))) /
                ((MWm * MWm * MWm * MWm) * (-s + (MZ * MZ)) *
                 (t - (MC[j1] * MC[j1]))) +
            (CTW * g2 * I *
             (std::conj(coup72[j1]) *
                  (std::conj(coup81[j1]) *
                       (2 * coup8 * (MWm * MWm) *
                            (-s - t + u + 4 * (MWm * MWm)) *
                            (5 * s + 6 * (MWm * MWm)) * (MN[0] * MN[0]) +
                        coup9 *
                            (32 * (MWm * MWm * MWm * MWm * MWm * MWm * MWm *
                                   MWm) +
                             8 * (MWm * MWm * MWm * MWm * MWm * MWm) *
                                 (5 * s - t - 7 * u - 10 * (MN[0] * MN[0])) -
                             s * (u - (MN[0] * MN[0])) *
                                 (-(s * s) + ((t - u) * (t - u)) +
                                  4 * s * (MN[0] * MN[0])) -
                             4 * (MWm * MWm * MWm * MWm) *
                                 (-2 * t * u + (s * s) - (t * t) - 5 * (u * u) +
                                  s * (4 * t - 2 * u - 5 * (MN[0] * MN[0])) -
                                  9 * t * (MN[0] * MN[0]) +
                                  u * (MN[0] * MN[0]) +
                                  16 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                             2 * (MWm * MWm) *
                                 ((s * s * s) -
                                  (s * s) * (t + 2 * (MN[0] * MN[0])) +
                                  s * (2 * t * u - (t * t) + 3 * (u * u) +
                                       5 * t * (MN[0] * MN[0]) -
                                       9 * u * (MN[0] * MN[0])) +
                                  (t - u) *
                                      (t * u + (t * t) + 2 * (u * u) -
                                       3 * t * (MN[0] * MN[0]) -
                                       5 * u * (MN[0] * MN[0]) +
                                       4 * (MN[0] * MN[0] * MN[0] * MN[0]))))) +
                   2 * (coup8 + coup9) * std::conj(coup80[j1]) *
                       (40 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                        s * (MWm * MWm) *
                            (s - 3 * (t + u - 2 * (MN[0] * MN[0]))) -
                        2 * (MWm * MWm * MWm * MWm) *
                            (3 * s + 7 * t + 13 * u - 20 * (MN[0] * MN[0])) +
                        (s * s) * (u - (MN[0] * MN[0]))) *
                       MC[j1] * MN[0]) +
              std::conj(coup73[j1]) *
                  (std::conj(coup80[j1]) *
                       (2 * coup9 * (MWm * MWm) *
                            (-s - t + u + 4 * (MWm * MWm)) *
                            (5 * s + 6 * (MWm * MWm)) * (MN[0] * MN[0]) +
                        coup8 *
                            (32 * (MWm * MWm * MWm * MWm * MWm * MWm * MWm *
                                   MWm) +
                             8 * (MWm * MWm * MWm * MWm * MWm * MWm) *
                                 (5 * s - t - 7 * u - 10 * (MN[0] * MN[0])) -
                             s * (u - (MN[0] * MN[0])) *
                                 (-(s * s) + ((t - u) * (t - u)) +
                                  4 * s * (MN[0] * MN[0])) -
                             4 * (MWm * MWm * MWm * MWm) *
                                 (-2 * t * u + (s * s) - (t * t) - 5 * (u * u) +
                                  s * (4 * t - 2 * u - 5 * (MN[0] * MN[0])) -
                                  9 * t * (MN[0] * MN[0]) +
                                  u * (MN[0] * MN[0]) +
                                  16 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                             2 * (MWm * MWm) *
                                 ((s * s * s) -
                                  (s * s) * (t + 2 * (MN[0] * MN[0])) +
                                  s * (2 * t * u - (t * t) + 3 * (u * u) +
                                       5 * t * (MN[0] * MN[0]) -
                                       9 * u * (MN[0] * MN[0])) +
                                  (t - u) *
                                      (t * u + (t * t) + 2 * (u * u) -
                                       3 * t * (MN[0] * MN[0]) -
                                       5 * u * (MN[0] * MN[0]) +
                                       4 * (MN[0] * MN[0] * MN[0] * MN[0]))))) +
                   2 * (coup8 + coup9) * std::conj(coup81[j1]) *
                       (40 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                        s * (MWm * MWm) *
                            (s - 3 * (t + u - 2 * (MN[0] * MN[0]))) -
                        2 * (MWm * MWm * MWm * MWm) *
                            (3 * s + 7 * t + 13 * u - 20 * (MN[0] * MN[0])) +
                        (s * s) * (u - (MN[0] * MN[0]))) *
                       MC[j1] * MN[0]))) /
                (2. * (MWm * MWm * MWm * MWm) * (-s + (MZ * MZ)) *
                 (u - (MC[j1] * MC[j1]))),
        j1, 2)

    SUM2((std::conj(coup77[j1]) * coup77[i1] *
          (-4 * s * (MWm * MWm) + 12 * (MWm * MWm * MWm * MWm) + (s * s)) *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
             (4. * (MWm * MWm * MWm * MWm) * (s - (Mh[i1] * Mh[i1])) *
              (s - (Mh[j1] * Mh[j1]))),
         i1, 6, j1, 6)

    SUM2(
        -0.5 *
                (coup77[i1] *
                 (std::conj(coup73[j1]) *
                      (std::conj(coup81[j1]) *
                           (2 * coup2[i1] *
                                (-4 * s * (MWm * MWm) +
                                 12 * (MWm * MWm * MWm * MWm) + (s * s)) *
                                (MN[0] * MN[0]) -
                            coup3[i1] *
                                (-2 * (MWm * MWm) *
                                     (2 * (s * s) +
                                      s * (-t + u - 4 * (MN[0] * MN[0])) -
                                      (t - u) * (t + u - 2 * (MN[0] * MN[0]))) +
                                 4 * (MWm * MWm * MWm * MWm) *
                                     (3 * s - t + u - 6 * (MN[0] * MN[0])) +
                                 s * ((s * s) -
                                      (t - u) * (t + u - 2 * (MN[0] * MN[0])) -
                                      2 * s * (MN[0] * MN[0])))) *
                           MC[j1] +
                       std::conj(coup80[j1]) *
                           (coup3[i1] *
                                (8 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                                 4 * (MWm * MWm * MWm * MWm) *
                                     (t + 4 * u - 3 * (MN[0] * MN[0])) +
                                 s * ((s * s) - (t * t) - (u * u) -
                                      2 * s * (MN[0] * MN[0]) +
                                      2 * t * (MN[0] * MN[0]) +
                                      2 * u * (MN[0] * MN[0]) -
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 2 * (MWm * MWm) *
                                     (4 * t * u - 2 * (s * s) + (t * t) +
                                      (u * u) - 6 * t * (MN[0] * MN[0]) -
                                      6 * u * (MN[0] * MN[0]) +
                                      s * (t + 2 * u + (MN[0] * MN[0])) +
                                      6 * (MN[0] * MN[0] * MN[0] * MN[0]))) -
                            2 * coup2[i1] *
                                (4 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                                 2 * (MWm * MWm * MWm * MWm) *
                                     (s + 4 * t + u - 7 * (MN[0] * MN[0])) +
                                 s * ((s + u - (MN[0] * MN[0])) *
                                          (MN[0] * MN[0]) +
                                      t * (-u + (MN[0] * MN[0]))) +
                                 (MWm * MWm) *
                                     (s * (2 * t + u - 7 * (MN[0] * MN[0])) +
                                      2 * (t * u + (t * t) + (u * u) -
                                           3 * t * (MN[0] * MN[0]) -
                                           3 * u * (MN[0] * MN[0]) +
                                           3 * (MN[0] * MN[0] * MN[0] *
                                                MN[0]))))) *
                           MN[0]) +
                  std::conj(coup72[j1]) *
                      (std::conj(coup80[j1]) *
                           (2 * coup3[i1] *
                                (-4 * s * (MWm * MWm) +
                                 12 * (MWm * MWm * MWm * MWm) + (s * s)) *
                                (MN[0] * MN[0]) -
                            coup2[i1] *
                                (-2 * (MWm * MWm) *
                                     (2 * (s * s) +
                                      s * (-t + u - 4 * (MN[0] * MN[0])) -
                                      (t - u) * (t + u - 2 * (MN[0] * MN[0]))) +
                                 4 * (MWm * MWm * MWm * MWm) *
                                     (3 * s - t + u - 6 * (MN[0] * MN[0])) +
                                 s * ((s * s) -
                                      (t - u) * (t + u - 2 * (MN[0] * MN[0])) -
                                      2 * s * (MN[0] * MN[0])))) *
                           MC[j1] +
                       std::conj(coup81[j1]) *
                           (coup2[i1] *
                                (8 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                                 4 * (MWm * MWm * MWm * MWm) *
                                     (t + 4 * u - 3 * (MN[0] * MN[0])) +
                                 s * ((s * s) - (t * t) - (u * u) -
                                      2 * s * (MN[0] * MN[0]) +
                                      2 * t * (MN[0] * MN[0]) +
                                      2 * u * (MN[0] * MN[0]) -
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 2 * (MWm * MWm) *
                                     (4 * t * u - 2 * (s * s) + (t * t) +
                                      (u * u) - 6 * t * (MN[0] * MN[0]) -
                                      6 * u * (MN[0] * MN[0]) +
                                      s * (t + 2 * u + (MN[0] * MN[0])) +
                                      6 * (MN[0] * MN[0] * MN[0] * MN[0]))) -
                            2 * coup3[i1] *
                                (4 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                                 2 * (MWm * MWm * MWm * MWm) *
                                     (s + 4 * t + u - 7 * (MN[0] * MN[0])) +
                                 s * ((s + u - (MN[0] * MN[0])) *
                                          (MN[0] * MN[0]) +
                                      t * (-u + (MN[0] * MN[0]))) +
                                 (MWm * MWm) *
                                     (s * (2 * t + u - 7 * (MN[0] * MN[0])) +
                                      2 * (t * u + (t * t) + (u * u) -
                                           3 * t * (MN[0] * MN[0]) -
                                           3 * u * (MN[0] * MN[0]) +
                                           3 * (MN[0] * MN[0] * MN[0] *
                                                MN[0]))))) *
                           MN[0]))) /
                ((MWm * MWm * MWm * MWm) * (u - (MC[j1] * MC[j1])) *
                 (s - (Mh[i1] * Mh[i1]))) +
            (coup77[i1] *
             (std::conj(coup70[j1]) *
                  (std::conj(coup78[j1]) *
                       (-2 * coup3[i1] *
                            (-4 * s * (MWm * MWm) +
                             12 * (MWm * MWm * MWm * MWm) + (s * s)) *
                            (MN[0] * MN[0]) +
                        coup2[i1] *
                            (-2 * (MWm * MWm) *
                                 (2 * (s * s) +
                                  s * (t - u - 4 * (MN[0] * MN[0])) +
                                  (t - u) * (t + u - 2 * (MN[0] * MN[0]))) +
                             4 * (MWm * MWm * MWm * MWm) *
                                 (3 * s + t - u - 6 * (MN[0] * MN[0])) +
                             s * ((s * s) +
                                  (t - u) * (t + u - 2 * (MN[0] * MN[0])) -
                                  2 * s * (MN[0] * MN[0])))) *
                       MC[j1] +
                   std::conj(coup79[j1]) *
                       (-(coup3[i1] *
                          (8 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                           4 * (MWm * MWm * MWm * MWm) *
                               (4 * t + u - 3 * (MN[0] * MN[0])) +
                           s * ((s * s) - (t * t) - (u * u) -
                                2 * s * (MN[0] * MN[0]) +
                                2 * t * (MN[0] * MN[0]) +
                                2 * u * (MN[0] * MN[0]) -
                                2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                           2 * (MWm * MWm) *
                               (4 * t * u - 2 * (s * s) + (t * t) + (u * u) -
                                6 * t * (MN[0] * MN[0]) -
                                6 * u * (MN[0] * MN[0]) +
                                s * (2 * t + u + (MN[0] * MN[0])) +
                                6 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                        2 * coup2[i1] *
                            (4 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                             2 * (MWm * MWm * MWm * MWm) *
                                 (s + t + 4 * u - 7 * (MN[0] * MN[0])) +
                             s * ((s + u - (MN[0] * MN[0])) * (MN[0] * MN[0]) +
                                  t * (-u + (MN[0] * MN[0]))) +
                             (MWm * MWm) *
                                 (s * (t + 2 * u - 7 * (MN[0] * MN[0])) +
                                  2 * (t * u + (t * t) + (u * u) -
                                       3 * t * (MN[0] * MN[0]) -
                                       3 * u * (MN[0] * MN[0]) +
                                       3 * (MN[0] * MN[0] * MN[0] * MN[0]))))) *
                       MN[0]) +
              std::conj(coup71[j1]) *
                  (std::conj(coup79[j1]) *
                       (-2 * coup2[i1] *
                            (-4 * s * (MWm * MWm) +
                             12 * (MWm * MWm * MWm * MWm) + (s * s)) *
                            (MN[0] * MN[0]) +
                        coup3[i1] *
                            (-2 * (MWm * MWm) *
                                 (2 * (s * s) +
                                  s * (t - u - 4 * (MN[0] * MN[0])) +
                                  (t - u) * (t + u - 2 * (MN[0] * MN[0]))) +
                             4 * (MWm * MWm * MWm * MWm) *
                                 (3 * s + t - u - 6 * (MN[0] * MN[0])) +
                             s * ((s * s) +
                                  (t - u) * (t + u - 2 * (MN[0] * MN[0])) -
                                  2 * s * (MN[0] * MN[0])))) *
                       MC[j1] +
                   std::conj(coup78[j1]) *
                       (-(coup2[i1] *
                          (8 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                           4 * (MWm * MWm * MWm * MWm) *
                               (4 * t + u - 3 * (MN[0] * MN[0])) +
                           s * ((s * s) - (t * t) - (u * u) -
                                2 * s * (MN[0] * MN[0]) +
                                2 * t * (MN[0] * MN[0]) +
                                2 * u * (MN[0] * MN[0]) -
                                2 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                           2 * (MWm * MWm) *
                               (4 * t * u - 2 * (s * s) + (t * t) + (u * u) -
                                6 * t * (MN[0] * MN[0]) -
                                6 * u * (MN[0] * MN[0]) +
                                s * (2 * t + u + (MN[0] * MN[0])) +
                                6 * (MN[0] * MN[0] * MN[0] * MN[0])))) +
                        2 * coup3[i1] *
                            (4 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                             2 * (MWm * MWm * MWm * MWm) *
                                 (s + t + 4 * u - 7 * (MN[0] * MN[0])) +
                             s * ((s + u - (MN[0] * MN[0])) * (MN[0] * MN[0]) +
                                  t * (-u + (MN[0] * MN[0]))) +
                             (MWm * MWm) *
                                 (s * (t + 2 * u - 7 * (MN[0] * MN[0])) +
                                  2 * (t * u + (t * t) + (u * u) -
                                       3 * t * (MN[0] * MN[0]) -
                                       3 * u * (MN[0] * MN[0]) +
                                       3 * (MN[0] * MN[0] * MN[0] * MN[0]))))) *
                       MN[0]))) /
                (2. * (MWm * MWm * MWm * MWm) * (t - (MC[j1] * MC[j1])) *
                 (s - (Mh[i1] * Mh[i1]))),
        j1, 2, i1, 6)

    SUM2(
        (-(std::conj(coup70[j1]) *
           (std::conj(coup78[j1]) * MC[j1] *
                (coup70[i1] *
                     (-(coup78[i1] *
                        (s * ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) -
                         2 * (s + t - u) * (MWm * MWm) * (t - (MN[0] * MN[0])) +
                         2 * (MWm * MWm * MWm * MWm) *
                             (s + t - u - (MN[0] * MN[0]))) *
                        MC[i1]) +
                      3 * coup79[i1] * (MWm * MWm) *
                          (2 * (MWm * MWm * MWm * MWm) -
                           ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) -
                           (MWm * MWm) * (t + (MN[0] * MN[0]))) *
                          MN[0]) +
                 3 * coup71[i1] * (MWm * MWm) * MN[0] *
                     (coup78[i1] *
                          (2 * (MWm * MWm * MWm * MWm) +
                           (t - (MN[0] * MN[0])) * (s + u - (MN[0] * MN[0])) +
                           (MWm * MWm) * (-3 * t + (MN[0] * MN[0]))) +
                      6 * coup79[i1] * (MWm * MWm) * MC[i1] * MN[0])) +
            std::conj(coup79[j1]) *
                (3 * coup71[i1] * (MWm * MWm) * MN[0] *
                     (coup79[i1] *
                          (2 * (MWm * MWm * MWm * MWm) +
                           (t - (MN[0] * MN[0])) * (s + u - (MN[0] * MN[0])) +
                           (MWm * MWm) * (-3 * t + (MN[0] * MN[0]))) *
                          MC[i1] +
                      6 * t * coup78[i1] * (MWm * MWm) * MN[0]) +
                 coup70[i1] *
                     (coup79[i1] *
                          (-8 * t * (MWm * MWm * MWm * MWm * MWm * MWm) +
                           4 * (MWm * MWm * MWm * MWm * MWm * MWm * MWm * MWm) +
                           (MWm * MWm) * (t - (MN[0] * MN[0])) *
                               ((t + u - 2 * (MN[0] * MN[0])) *
                                    (t - (MN[0] * MN[0])) -
                                s * (3 * t + (MN[0] * MN[0]))) +
                           ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) *
                               ((s + u - (MN[0] * MN[0])) * (MN[0] * MN[0]) +
                                t * (-u + (MN[0] * MN[0]))) +
                           (MWm * MWm * MWm * MWm) *
                               (4 * s * t + 3 * (t * t) -
                                2 * s * (MN[0] * MN[0]) +
                                2 * t * (MN[0] * MN[0]) -
                                2 * u * (MN[0] * MN[0]) -
                                (MN[0] * MN[0] * MN[0] * MN[0]))) +
                      3 * coup78[i1] * (MWm * MWm) *
                          (2 * (MWm * MWm * MWm * MWm) -
                           ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) -
                           (MWm * MWm) * (t + (MN[0] * MN[0]))) *
                          MC[i1] * MN[0])))) -
         std::conj(coup71[j1]) *
             (std::conj(coup79[j1]) * MC[j1] *
                  (coup71[i1] *
                       (-(coup79[i1] *
                          (s * ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) -
                           2 * (s + t - u) * (MWm * MWm) *
                               (t - (MN[0] * MN[0])) +
                           2 * (MWm * MWm * MWm * MWm) *
                               (s + t - u - (MN[0] * MN[0]))) *
                          MC[i1]) +
                        3 * coup78[i1] * (MWm * MWm) *
                            (2 * (MWm * MWm * MWm * MWm) -
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) -
                             (MWm * MWm) * (t + (MN[0] * MN[0]))) *
                            MN[0]) +
                   3 * coup70[i1] * (MWm * MWm) * MN[0] *
                       (coup79[i1] *
                            (2 * (MWm * MWm * MWm * MWm) +
                             (t - (MN[0] * MN[0])) * (s + u - (MN[0] * MN[0])) +
                             (MWm * MWm) * (-3 * t + (MN[0] * MN[0]))) +
                        6 * coup78[i1] * (MWm * MWm) * MC[i1] * MN[0])) +
              std::conj(coup78[j1]) *
                  (3 * coup70[i1] * (MWm * MWm) * MN[0] *
                       (coup78[i1] *
                            (2 * (MWm * MWm * MWm * MWm) +
                             (t - (MN[0] * MN[0])) * (s + u - (MN[0] * MN[0])) +
                             (MWm * MWm) * (-3 * t + (MN[0] * MN[0]))) *
                            MC[i1] +
                        6 * t * coup79[i1] * (MWm * MWm) * MN[0]) +
                   coup71[i1] *
                       (coup78[i1] *
                            (-8 * t * (MWm * MWm * MWm * MWm * MWm * MWm) +
                             4 * (MWm * MWm * MWm * MWm * MWm * MWm * MWm *
                                  MWm) +
                             (MWm * MWm) * (t - (MN[0] * MN[0])) *
                                 ((t + u - 2 * (MN[0] * MN[0])) *
                                      (t - (MN[0] * MN[0])) -
                                  s * (3 * t + (MN[0] * MN[0]))) +
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) *
                                 ((s + u - (MN[0] * MN[0])) * (MN[0] * MN[0]) +
                                  t * (-u + (MN[0] * MN[0]))) +
                             (MWm * MWm * MWm * MWm) *
                                 (4 * s * t + 3 * (t * t) -
                                  2 * s * (MN[0] * MN[0]) +
                                  2 * t * (MN[0] * MN[0]) -
                                  2 * u * (MN[0] * MN[0]) -
                                  (MN[0] * MN[0] * MN[0] * MN[0]))) +
                        3 * coup79[i1] * (MWm * MWm) *
                            (2 * (MWm * MWm * MWm * MWm) -
                             ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) -
                             (MWm * MWm) * (t + (MN[0] * MN[0]))) *
                            MC[i1] * MN[0])))) /
                ((MWm * MWm * MWm * MWm) * (t - (MC[i1] * MC[i1])) *
                 (t - (MC[j1] * MC[j1]))) +
            (-(std::conj(coup72[j1]) *
               (std::conj(coup80[j1]) * MC[j1] *
                    (coup72[i1] *
                         (-(coup80[i1] *
                            (s * ((u - (MN[0] * MN[0])) *
                                  (u - (MN[0] * MN[0]))) -
                             2 * (s - t + u) * (MWm * MWm) *
                                 (u - (MN[0] * MN[0])) +
                             2 * (MWm * MWm * MWm * MWm) *
                                 (s - t + u - (MN[0] * MN[0]))) *
                            MC[i1]) +
                          3 * coup81[i1] * (MWm * MWm) *
                              (2 * (MWm * MWm * MWm * MWm) +
                               (s + t - (MN[0] * MN[0])) *
                                   (u - (MN[0] * MN[0])) +
                               (MWm * MWm) * (-3 * u + (MN[0] * MN[0]))) *
                              MN[0]) +
                     3 * coup73[i1] * (MWm * MWm) * MN[0] *
                         (coup80[i1] *
                              (2 * (MWm * MWm * MWm * MWm) -
                               ((u - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) -
                               (MWm * MWm) * (u + (MN[0] * MN[0]))) +
                          6 * coup81[i1] * (MWm * MWm) * MC[i1] * MN[0])) +
                std::conj(coup81[j1]) *
                    (3 * coup73[i1] * (MWm * MWm) * MN[0] *
                         (coup81[i1] *
                              (2 * (MWm * MWm * MWm * MWm) -
                               ((u - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) -
                               (MWm * MWm) * (u + (MN[0] * MN[0]))) *
                              MC[i1] +
                          6 * u * coup80[i1] * (MWm * MWm) * MN[0]) +
                     coup72[i1] *
                         (coup81[i1] *
                              (-8 * u * (MWm * MWm * MWm * MWm * MWm * MWm) +
                               4 * (MWm * MWm * MWm * MWm * MWm * MWm * MWm *
                                    MWm) +
                               ((u - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) *
                                   ((s + u - (MN[0] * MN[0])) *
                                        (MN[0] * MN[0]) +
                                    t * (-u + (MN[0] * MN[0]))) +
                               (MWm * MWm) * (u - (MN[0] * MN[0])) *
                                   ((t + u - 2 * (MN[0] * MN[0])) *
                                        (u - (MN[0] * MN[0])) -
                                    s * (3 * u + (MN[0] * MN[0]))) +
                               (MWm * MWm * MWm * MWm) *
                                   (4 * s * u + 3 * (u * u) -
                                    2 * s * (MN[0] * MN[0]) -
                                    2 * t * (MN[0] * MN[0]) +
                                    2 * u * (MN[0] * MN[0]) -
                                    (MN[0] * MN[0] * MN[0] * MN[0]))) +
                          3 * coup80[i1] * (MWm * MWm) *
                              (2 * (MWm * MWm * MWm * MWm) +
                               (s + t - (MN[0] * MN[0])) *
                                   (u - (MN[0] * MN[0])) +
                               (MWm * MWm) * (-3 * u + (MN[0] * MN[0]))) *
                              MC[i1] * MN[0])))) -
             std::conj(coup73[j1]) *
                 (std::conj(coup81[j1]) * MC[j1] *
                      (coup73[i1] *
                           (-(coup81[i1] *
                              (s * ((u - (MN[0] * MN[0])) *
                                    (u - (MN[0] * MN[0]))) -
                               2 * (s - t + u) * (MWm * MWm) *
                                   (u - (MN[0] * MN[0])) +
                               2 * (MWm * MWm * MWm * MWm) *
                                   (s - t + u - (MN[0] * MN[0]))) *
                              MC[i1]) +
                            3 * coup80[i1] * (MWm * MWm) *
                                (2 * (MWm * MWm * MWm * MWm) +
                                 (s + t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0])) +
                                 (MWm * MWm) * (-3 * u + (MN[0] * MN[0]))) *
                                MN[0]) +
                       3 * coup72[i1] * (MWm * MWm) * MN[0] *
                           (coup81[i1] * (2 * (MWm * MWm * MWm * MWm) -
                                          ((u - (MN[0] * MN[0])) *
                                           (u - (MN[0] * MN[0]))) -
                                          (MWm * MWm) * (u + (MN[0] * MN[0]))) +
                            6 * coup80[i1] * (MWm * MWm) * MC[i1] * MN[0])) +
                  std::conj(coup80[j1]) *
                      (3 * coup72[i1] * (MWm * MWm) * MN[0] *
                           (coup80[i1] *
                                (2 * (MWm * MWm * MWm * MWm) -
                                 ((u - (MN[0] * MN[0])) *
                                  (u - (MN[0] * MN[0]))) -
                                 (MWm * MWm) * (u + (MN[0] * MN[0]))) *
                                MC[i1] +
                            6 * u * coup81[i1] * (MWm * MWm) * MN[0]) +
                       coup73[i1] *
                           (coup80[i1] *
                                (-8 * u * (MWm * MWm * MWm * MWm * MWm * MWm) +
                                 4 * (MWm * MWm * MWm * MWm * MWm * MWm * MWm *
                                      MWm) +
                                 ((u - (MN[0] * MN[0])) *
                                  (u - (MN[0] * MN[0]))) *
                                     ((s + u - (MN[0] * MN[0])) *
                                          (MN[0] * MN[0]) +
                                      t * (-u + (MN[0] * MN[0]))) +
                                 (MWm * MWm) * (u - (MN[0] * MN[0])) *
                                     ((t + u - 2 * (MN[0] * MN[0])) *
                                          (u - (MN[0] * MN[0])) -
                                      s * (3 * u + (MN[0] * MN[0]))) +
                                 (MWm * MWm * MWm * MWm) *
                                     (4 * s * u + 3 * (u * u) -
                                      2 * s * (MN[0] * MN[0]) -
                                      2 * t * (MN[0] * MN[0]) +
                                      2 * u * (MN[0] * MN[0]) -
                                      (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            3 * coup81[i1] * (MWm * MWm) *
                                (2 * (MWm * MWm * MWm * MWm) +
                                 (s + t - (MN[0] * MN[0])) *
                                     (u - (MN[0] * MN[0])) +
                                 (MWm * MWm) * (-3 * u + (MN[0] * MN[0]))) *
                                MC[i1] * MN[0])))) /
                ((MWm * MWm * MWm * MWm) * (u - (MC[i1] * MC[i1])) *
                 (u - (MC[j1] * MC[j1]))) +
            (std::conj(coup73[j1]) *
                 (std::conj(coup81[j1]) * MC[j1] *
                      (coup71[i1] *
                           (coup79[i1] *
                                (4 * (MWm * MWm * MWm * MWm) *
                                     (2 * s - 5 * (MN[0] * MN[0])) +
                                 2 * (MWm * MWm) *
                                     (-2 * (s * s) + ((t - u) * (t - u)) +
                                      s * (t + u + 2 * (MN[0] * MN[0]))) +
                                 s * ((s * s) - (t * t) - (u * u) -
                                      2 * s * (MN[0] * MN[0]) +
                                      2 * t * (MN[0] * MN[0]) +
                                      2 * u * (MN[0] * MN[0]) -
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0]))) *
                                MC[i1] +
                            2 * coup78[i1] *
                                (10 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                                 (MWm * MWm * MWm * MWm) *
                                     (2 * s + 5 * t + 8 * u -
                                      11 * (MN[0] * MN[0])) +
                                 s * ((s + u - (MN[0] * MN[0])) *
                                          (MN[0] * MN[0]) +
                                      t * (-u + (MN[0] * MN[0]))) +
                                 (MWm * MWm) *
                                     (2 * t * u - (t * t) + 2 * (u * u) +
                                      s * (t + 2 * u - 7 * (MN[0] * MN[0])) -
                                      6 * u * (MN[0] * MN[0]) +
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0]))) *
                                MN[0]) +
                       coup70[i1] * MN[0] *
                           (coup79[i1] *
                                (4 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                                 2 * (MWm * MWm * MWm * MWm) *
                                     (t - 2 * u + 3 * (MN[0] * MN[0])) +
                                 2 * (MWm * MWm) *
                                     (-(t * u) + 2 * (s * s) - (t * t) -
                                      (u * u) +
                                      s * (t - u - 4 * (MN[0] * MN[0])) +
                                      3 * t * (MN[0] * MN[0]) +
                                      3 * u * (MN[0] * MN[0]) -
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 s * (-(s * s) + (t * t) + (u * u) +
                                      2 * s * (MN[0] * MN[0]) -
                                      2 * t * (MN[0] * MN[0]) -
                                      2 * u * (MN[0] * MN[0]) +
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            2 * coup78[i1] *
                                (4 * s * (MWm * MWm) +
                                 6 * (MWm * MWm * MWm * MWm) - (s * s)) *
                                MC[i1] * MN[0])) +
                  std::conj(coup80[j1]) *
                      (coup71[i1] * MN[0] *
                           (coup79[i1] *
                                (4 * (MWm * MWm * MWm * MWm * MWm * MWm) +
                                 (MWm * MWm * MWm * MWm) *
                                     (4 * t - 2 * (u + 3 * (MN[0] * MN[0]))) +
                                 2 * (MWm * MWm) *
                                     (-(t * u) + 2 * (s * s) - (t * t) -
                                      (u * u) +
                                      s * (-t + u - 4 * (MN[0] * MN[0])) +
                                      3 * t * (MN[0] * MN[0]) +
                                      3 * u * (MN[0] * MN[0]) -
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 s * (-(s * s) + (t * t) + (u * u) +
                                      2 * s * (MN[0] * MN[0]) -
                                      2 * t * (MN[0] * MN[0]) -
                                      2 * u * (MN[0] * MN[0]) +
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0]))) *
                                MC[i1] +
                            2 * coup78[i1] *
                                (-5 * (t + u) * (MWm * MWm * MWm * MWm) +
                                 4 * (MWm * MWm * MWm * MWm * MWm * MWm) +
                                 s * (t * (u - (MN[0] * MN[0])) +
                                      (MN[0] * MN[0]) *
                                          (-s - u + (MN[0] * MN[0]))) +
                                 (MWm * MWm) *
                                     (((t - u) * (t - u)) +
                                      s * (t + u + 2 * (MN[0] * MN[0])))) *
                                MN[0]) +
                       coup70[i1] *
                           (coup79[i1] *
                                (8 * (MWm * MWm * MWm * MWm * MWm * MWm) *
                                     (4 * s - 11 * (MN[0] * MN[0])) +
                                 (s * s * s) * (MN[0] * MN[0]) -
                                 s * ((t - u) * (t - u)) * (MN[0] * MN[0]) +
                                 (s * s) *
                                     (-(t * u) + t * (MN[0] * MN[0]) +
                                      u * (MN[0] * MN[0]) -
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0])) *
                                     ((t * t) + (u * u) -
                                      2 * t * (MN[0] * MN[0]) -
                                      2 * u * (MN[0] * MN[0]) +
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                                 2 * (MWm * MWm * MWm * MWm) *
                                     (3 * t * u + 4 * (s * s) - 2 * (t * t) -
                                      2 * (u * u) +
                                      s * (6 * t + 6 * u -
                                           20 * (MN[0] * MN[0])) -
                                      16 * t * (MN[0] * MN[0]) -
                                      16 * u * (MN[0] * MN[0]) +
                                      27 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 2 * (MWm * MWm) *
                                     (-(t * t * t) - (u * u * u) +
                                      (s * s) * (t + u - 4 * (MN[0] * MN[0])) -
                                      2 * t * u * (MN[0] * MN[0]) +
                                      4 * (t * t) * (MN[0] * MN[0]) +
                                      4 * (u * u) * (MN[0] * MN[0]) -
                                      3 * t * (MN[0] * MN[0] * MN[0] * MN[0]) -
                                      3 * u * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                      s * (t * u - 4 * t * (MN[0] * MN[0]) -
                                           4 * u * (MN[0] * MN[0]) +
                                           11 * (MN[0] * MN[0] * MN[0] *
                                                 MN[0])) +
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0] *
                                           MN[0] * MN[0]))) +
                            2 * coup78[i1] *
                                (10 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                                 (MWm * MWm * MWm * MWm) *
                                     (2 * s + 8 * t + 5 * u -
                                      11 * (MN[0] * MN[0])) +
                                 s * ((s + u - (MN[0] * MN[0])) *
                                          (MN[0] * MN[0]) +
                                      t * (-u + (MN[0] * MN[0]))) +
                                 (MWm * MWm) *
                                     (2 * t * u + 2 * (t * t) - (u * u) +
                                      s * (2 * t + u - 7 * (MN[0] * MN[0])) -
                                      6 * t * (MN[0] * MN[0]) +
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0]))) *
                                MC[i1] * MN[0]))) +
             std::conj(coup72[j1]) *
                 (std::conj(coup80[j1]) * MC[j1] *
                      (coup70[i1] *
                           (coup78[i1] *
                                (4 * (MWm * MWm * MWm * MWm) *
                                     (2 * s - 5 * (MN[0] * MN[0])) +
                                 2 * (MWm * MWm) *
                                     (-2 * (s * s) + ((t - u) * (t - u)) +
                                      s * (t + u + 2 * (MN[0] * MN[0]))) +
                                 s * ((s * s) - (t * t) - (u * u) -
                                      2 * s * (MN[0] * MN[0]) +
                                      2 * t * (MN[0] * MN[0]) +
                                      2 * u * (MN[0] * MN[0]) -
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0]))) *
                                MC[i1] +
                            2 * coup79[i1] *
                                (10 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                                 (MWm * MWm * MWm * MWm) *
                                     (2 * s + 5 * t + 8 * u -
                                      11 * (MN[0] * MN[0])) +
                                 s * ((s + u - (MN[0] * MN[0])) *
                                          (MN[0] * MN[0]) +
                                      t * (-u + (MN[0] * MN[0]))) +
                                 (MWm * MWm) *
                                     (2 * t * u - (t * t) + 2 * (u * u) +
                                      s * (t + 2 * u - 7 * (MN[0] * MN[0])) -
                                      6 * u * (MN[0] * MN[0]) +
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0]))) *
                                MN[0]) +
                       coup71[i1] * MN[0] *
                           (coup78[i1] *
                                (4 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                                 2 * (MWm * MWm * MWm * MWm) *
                                     (t - 2 * u + 3 * (MN[0] * MN[0])) +
                                 2 * (MWm * MWm) *
                                     (-(t * u) + 2 * (s * s) - (t * t) -
                                      (u * u) +
                                      s * (t - u - 4 * (MN[0] * MN[0])) +
                                      3 * t * (MN[0] * MN[0]) +
                                      3 * u * (MN[0] * MN[0]) -
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 s * (-(s * s) + (t * t) + (u * u) +
                                      2 * s * (MN[0] * MN[0]) -
                                      2 * t * (MN[0] * MN[0]) -
                                      2 * u * (MN[0] * MN[0]) +
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0]))) +
                            2 * coup79[i1] *
                                (4 * s * (MWm * MWm) +
                                 6 * (MWm * MWm * MWm * MWm) - (s * s)) *
                                MC[i1] * MN[0])) +
                  std::conj(coup81[j1]) *
                      (coup70[i1] * MN[0] *
                           (coup78[i1] *
                                (4 * (MWm * MWm * MWm * MWm * MWm * MWm) +
                                 (MWm * MWm * MWm * MWm) *
                                     (4 * t - 2 * (u + 3 * (MN[0] * MN[0]))) +
                                 2 * (MWm * MWm) *
                                     (-(t * u) + 2 * (s * s) - (t * t) -
                                      (u * u) +
                                      s * (-t + u - 4 * (MN[0] * MN[0])) +
                                      3 * t * (MN[0] * MN[0]) +
                                      3 * u * (MN[0] * MN[0]) -
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 s * (-(s * s) + (t * t) + (u * u) +
                                      2 * s * (MN[0] * MN[0]) -
                                      2 * t * (MN[0] * MN[0]) -
                                      2 * u * (MN[0] * MN[0]) +
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0]))) *
                                MC[i1] +
                            2 * coup79[i1] *
                                (-5 * (t + u) * (MWm * MWm * MWm * MWm) +
                                 4 * (MWm * MWm * MWm * MWm * MWm * MWm) +
                                 s * (t * (u - (MN[0] * MN[0])) +
                                      (MN[0] * MN[0]) *
                                          (-s - u + (MN[0] * MN[0]))) +
                                 (MWm * MWm) *
                                     (((t - u) * (t - u)) +
                                      s * (t + u + 2 * (MN[0] * MN[0])))) *
                                MN[0]) +
                       coup71[i1] *
                           (coup78[i1] *
                                (8 * (MWm * MWm * MWm * MWm * MWm * MWm) *
                                     (4 * s - 11 * (MN[0] * MN[0])) +
                                 (s * s * s) * (MN[0] * MN[0]) -
                                 s * ((t - u) * (t - u)) * (MN[0] * MN[0]) +
                                 (s * s) *
                                     (-(t * u) + t * (MN[0] * MN[0]) +
                                      u * (MN[0] * MN[0]) -
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 (t - (MN[0] * MN[0])) * (u - (MN[0] * MN[0])) *
                                     ((t * t) + (u * u) -
                                      2 * t * (MN[0] * MN[0]) -
                                      2 * u * (MN[0] * MN[0]) +
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                                 2 * (MWm * MWm * MWm * MWm) *
                                     (3 * t * u + 4 * (s * s) - 2 * (t * t) -
                                      2 * (u * u) +
                                      s * (6 * t + 6 * u -
                                           20 * (MN[0] * MN[0])) -
                                      16 * t * (MN[0] * MN[0]) -
                                      16 * u * (MN[0] * MN[0]) +
                                      27 * (MN[0] * MN[0] * MN[0] * MN[0])) +
                                 2 * (MWm * MWm) *
                                     (-(t * t * t) - (u * u * u) +
                                      (s * s) * (t + u - 4 * (MN[0] * MN[0])) -
                                      2 * t * u * (MN[0] * MN[0]) +
                                      4 * (t * t) * (MN[0] * MN[0]) +
                                      4 * (u * u) * (MN[0] * MN[0]) -
                                      3 * t * (MN[0] * MN[0] * MN[0] * MN[0]) -
                                      3 * u * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                      s * (t * u - 4 * t * (MN[0] * MN[0]) -
                                           4 * u * (MN[0] * MN[0]) +
                                           11 * (MN[0] * MN[0] * MN[0] *
                                                 MN[0])) +
                                      2 * (MN[0] * MN[0] * MN[0] * MN[0] *
                                           MN[0] * MN[0]))) +
                            2 * coup79[i1] *
                                (10 * (MWm * MWm * MWm * MWm * MWm * MWm) -
                                 (MWm * MWm * MWm * MWm) *
                                     (2 * s + 8 * t + 5 * u -
                                      11 * (MN[0] * MN[0])) +
                                 s * ((s + u - (MN[0] * MN[0])) *
                                          (MN[0] * MN[0]) +
                                      t * (-u + (MN[0] * MN[0]))) +
                                 (MWm * MWm) *
                                     (2 * t * u + 2 * (t * t) - (u * u) +
                                      s * (2 * t + u - 7 * (MN[0] * MN[0])) -
                                      6 * t * (MN[0] * MN[0]) +
                                      3 * (MN[0] * MN[0] * MN[0] * MN[0]))) *
                                MC[i1] * MN[0])))) /
                ((MWm * MWm * MWm * MWm) * (t - (MC[i1] * MC[i1])) *
                 (u - (MC[j1] * MC[j1]))),
        j1, 2, i1, 2)

    return res.real();
}
double DT::N1N1v1v1(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        -0.5 * s + (cos_t * sqrt(s) * sqrt(s - 4 * (MN[0] * MN[0]))) / 2. +
        (MN[0] * MN[0]);
    std::complex<double> u = -s - t + 2 * (MN[0] * MN[0]);
    res += (4 * coup82 * std::conj(coup82) *
            (std::conj(coup9) *
                 (coup9 * ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                  coup8 * s * (MN[0] * MN[0])) +
             std::conj(coup8) *
                 (coup8 * ((u - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                  coup9 * s * (MN[0] * MN[0])))) /
           (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((4 * coup82 * std::conj(coup83[j1]) * std::conj(coup84[j1]) *
          (coup9 * ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
           coup8 * s * (MN[0] * MN[0]))) /
                 ((-s + (MZ * MZ)) * (t - (Msv[j1] * Msv[j1]))) -
             (4 * coup82 * std::conj(coup83[j1]) * std::conj(coup84[j1]) *
              (coup8 * ((u - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
               coup9 * s * (MN[0] * MN[0]))) /
                 ((-s + (MZ * MZ)) * (u - (Msv[j1] * Msv[j1]))),
         j1, 3)

    SUM2((std::conj(coup83[j1]) * std::conj(coup84[j1]) * coup83[i1] *
          coup84[i1] * ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0])))) /
                 ((t - (Msv[i1] * Msv[i1])) * (t - (Msv[j1] * Msv[j1]))) +
             (std::conj(coup83[j1]) * std::conj(coup84[j1]) * coup83[i1] *
              coup84[i1] * ((u - (MN[0] * MN[0])) * (u - (MN[0] * MN[0])))) /
                 ((u - (Msv[i1] * Msv[i1])) * (u - (Msv[j1] * Msv[j1]))),
         i1, 3, j1, 3)

    SUM2((-2 * s * std::conj(coup83[j1]) * std::conj(coup84[j1]) * coup83[i1] *
          coup84[i1] * (MN[0] * MN[0])) /
             ((t - (Msv[i1] * Msv[i1])) * (u - (Msv[j1] * Msv[j1]))),
         j1, 3, i1, 3)

    return res.real();
}
double DT::N1N1v2v2(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        -0.5 * s + (cos_t * sqrt(s) * sqrt(s - 4 * (MN[0] * MN[0]))) / 2. +
        (MN[0] * MN[0]);
    std::complex<double> u = -s - t + 2 * (MN[0] * MN[0]);
    res += (4 * coup82 * std::conj(coup82) *
            (std::conj(coup9) *
                 (coup9 * ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                  coup8 * s * (MN[0] * MN[0])) +
             std::conj(coup8) *
                 (coup8 * ((u - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                  coup9 * s * (MN[0] * MN[0])))) /
           (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((4 * coup82 * std::conj(coup85[j1]) * std::conj(coup86[j1]) *
          (coup9 * ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
           coup8 * s * (MN[0] * MN[0]))) /
                 ((-s + (MZ * MZ)) * (t - (Msv[j1] * Msv[j1]))) -
             (4 * coup82 * std::conj(coup85[j1]) * std::conj(coup86[j1]) *
              (coup8 * ((u - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
               coup9 * s * (MN[0] * MN[0]))) /
                 ((-s + (MZ * MZ)) * (u - (Msv[j1] * Msv[j1]))),
         j1, 3)

    SUM2((std::conj(coup85[j1]) * std::conj(coup86[j1]) * coup85[i1] *
          coup86[i1] * ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0])))) /
                 ((t - (Msv[i1] * Msv[i1])) * (t - (Msv[j1] * Msv[j1]))) +
             (std::conj(coup85[j1]) * std::conj(coup86[j1]) * coup85[i1] *
              coup86[i1] * ((u - (MN[0] * MN[0])) * (u - (MN[0] * MN[0])))) /
                 ((u - (Msv[i1] * Msv[i1])) * (u - (Msv[j1] * Msv[j1]))),
         i1, 3, j1, 3)

    SUM2((-2 * s * std::conj(coup85[j1]) * std::conj(coup86[j1]) * coup85[i1] *
          coup86[i1] * (MN[0] * MN[0])) /
             ((t - (Msv[i1] * Msv[i1])) * (u - (Msv[j1] * Msv[j1]))),
         j1, 3, i1, 3)

    return res.real();
}
double DT::N1N1v3v3(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t =
        -0.5 * s + (cos_t * sqrt(s) * sqrt(s - 4 * (MN[0] * MN[0]))) / 2. +
        (MN[0] * MN[0]);
    std::complex<double> u = -s - t + 2 * (MN[0] * MN[0]);
    res += (4 * coup82 * std::conj(coup82) *
            (std::conj(coup9) *
                 (coup9 * ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
                  coup8 * s * (MN[0] * MN[0])) +
             std::conj(coup8) *
                 (coup8 * ((u - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
                  coup9 * s * (MN[0] * MN[0])))) /
           (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((4 * coup82 * std::conj(coup87[j1]) * std::conj(coup88[j1]) *
          (coup9 * ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0]))) +
           coup8 * s * (MN[0] * MN[0]))) /
                 ((-s + (MZ * MZ)) * (t - (Msv[j1] * Msv[j1]))) -
             (4 * coup82 * std::conj(coup87[j1]) * std::conj(coup88[j1]) *
              (coup8 * ((u - (MN[0] * MN[0])) * (u - (MN[0] * MN[0]))) +
               coup9 * s * (MN[0] * MN[0]))) /
                 ((-s + (MZ * MZ)) * (u - (Msv[j1] * Msv[j1]))),
         j1, 3)

    SUM2((std::conj(coup87[j1]) * std::conj(coup88[j1]) * coup87[i1] *
          coup88[i1] * ((t - (MN[0] * MN[0])) * (t - (MN[0] * MN[0])))) /
                 ((t - (Msv[i1] * Msv[i1])) * (t - (Msv[j1] * Msv[j1]))) +
             (std::conj(coup87[j1]) * std::conj(coup88[j1]) * coup87[i1] *
              coup88[i1] * ((u - (MN[0] * MN[0])) * (u - (MN[0] * MN[0])))) /
                 ((u - (Msv[i1] * Msv[i1])) * (u - (Msv[j1] * Msv[j1]))),
         i1, 3, j1, 3)

    SUM2((-2 * s * std::conj(coup87[j1]) * std::conj(coup88[j1]) * coup87[i1] *
          coup88[i1] * (MN[0] * MN[0])) /
             ((t - (Msv[i1] * Msv[i1])) * (u - (Msv[j1] * Msv[j1]))),
         j1, 3, i1, 3)

    return res.real();
}
double DT::N1N1e1e1(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t = -0.5 * s + (Me[0] * Me[0]) +
                             (cos_t * sqrt(s - 4 * (Me[0] * Me[0])) *
                              sqrt(s - 4 * (MN[0] * MN[0]))) /
                                 2. +
                             (MN[0] * MN[0]);
    std::complex<double> u = -s - t + 2 * (Me[0] * Me[0]) + 2 * (MN[0] * MN[0]);
    res +=
        (4 *
         (std::conj(coup9) *
              (std::conj(coup92) *
                   (coup9 *
                        (coup92 * ((-t + (Me[0] * Me[0]) + (MN[0] * MN[0])) *
                                   (-t + (Me[0] * Me[0]) + (MN[0] * MN[0]))) +
                         coup91 * (Me[0] * Me[0]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup8 *
                        (coup92 * (s - 2 * (Me[0] * Me[0])) +
                         4 * coup91 * (Me[0] * Me[0])) *
                        (MN[0] * MN[0])) +
               std::conj(coup91) *
                   (coup9 *
                        (coup91 * ((-u + (Me[0] * Me[0]) + (MN[0] * MN[0])) *
                                   (-u + (Me[0] * Me[0]) + (MN[0] * MN[0]))) +
                         coup92 * (Me[0] * Me[0]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup8 *
                        (coup91 * (s - 2 * (Me[0] * Me[0])) +
                         4 * coup92 * (Me[0] * Me[0])) *
                        (MN[0] * MN[0]))) +
          std::conj(coup8) *
              (std::conj(coup92) *
                   (coup8 *
                        (coup92 * ((-u + (Me[0] * Me[0]) + (MN[0] * MN[0])) *
                                   (-u + (Me[0] * Me[0]) + (MN[0] * MN[0]))) +
                         coup91 * (Me[0] * Me[0]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup9 *
                        (coup92 * (s - 2 * (Me[0] * Me[0])) +
                         4 * coup91 * (Me[0] * Me[0])) *
                        (MN[0] * MN[0])) +
               std::conj(coup91) *
                   (coup8 *
                        (coup91 * ((-t + (Me[0] * Me[0]) + (MN[0] * MN[0])) *
                                   (-t + (Me[0] * Me[0]) + (MN[0] * MN[0]))) +
                         coup92 * (Me[0] * Me[0]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup9 *
                        (coup91 * (s - 2 * (Me[0] * Me[0])) +
                         4 * coup92 * (Me[0] * Me[0])) *
                        (MN[0] * MN[0]))))) /
        (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((4 *
          (std::conj(coup9) *
               (std::conj(coup92) *
                    (coup3[i1] *
                         (coup90[i1] * (t - (Me[0] * Me[0]) - (MN[0] * MN[0])) +
                          coup89[i1] *
                              (-u + (Me[0] * Me[0]) + (MN[0] * MN[0]))) +
                     coup2[i1] *
                         (coup89[i1] * (t - (Me[0] * Me[0]) - (MN[0] * MN[0])) +
                          coup90[i1] *
                              (-u + (Me[0] * Me[0]) + (MN[0] * MN[0])))) +
                std::conj(coup91) *
                    (coup2[i1] *
                         (coup90[i1] * (t - (Me[0] * Me[0]) - (MN[0] * MN[0])) +
                          coup89[i1] *
                              (-u + (Me[0] * Me[0]) + (MN[0] * MN[0]))) +
                     coup3[i1] *
                         (coup89[i1] * (t - (Me[0] * Me[0]) - (MN[0] * MN[0])) +
                          coup90[i1] *
                              (-u + (Me[0] * Me[0]) + (MN[0] * MN[0]))))) +
           std::conj(coup8) *
               (std::conj(coup91) *
                    (coup3[i1] *
                         (coup90[i1] * (t - (Me[0] * Me[0]) - (MN[0] * MN[0])) +
                          coup89[i1] *
                              (-u + (Me[0] * Me[0]) + (MN[0] * MN[0]))) +
                     coup2[i1] *
                         (coup89[i1] * (t - (Me[0] * Me[0]) - (MN[0] * MN[0])) +
                          coup90[i1] *
                              (-u + (Me[0] * Me[0]) + (MN[0] * MN[0])))) +
                std::conj(coup92) *
                    (coup2[i1] *
                         (coup90[i1] * (t - (Me[0] * Me[0]) - (MN[0] * MN[0])) +
                          coup89[i1] *
                              (-u + (Me[0] * Me[0]) + (MN[0] * MN[0]))) +
                     coup3[i1] *
                         (coup89[i1] * (t - (Me[0] * Me[0]) - (MN[0] * MN[0])) +
                          coup90[i1] *
                              (-u + (Me[0] * Me[0]) + (MN[0] * MN[0])))))) *
          Me[0] * MN[0]) /
             ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1(
        (4 *
         (std::conj(coup93[j1]) *
              (std::conj(coup96[j1]) *
                   (coup8 *
                        (coup91 * ((-t + (Me[0] * Me[0]) + (MN[0] * MN[0])) *
                                   (-t + (Me[0] * Me[0]) + (MN[0] * MN[0]))) +
                         coup92 * (Me[0] * Me[0]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup9 *
                        (coup91 * (s - 2 * (Me[0] * Me[0])) +
                         4 * coup92 * (Me[0] * Me[0])) *
                        (MN[0] * MN[0])) +
               std::conj(coup95[j1]) *
                   (2 * coup8 * coup91 *
                        (-t + (Me[0] * Me[0]) + (MN[0] * MN[0])) +
                    2 * coup9 * coup92 *
                        (-t + (Me[0] * Me[0]) + (MN[0] * MN[0])) +
                    coup9 * coup91 * (-u + (Me[0] * Me[0]) + (MN[0] * MN[0])) +
                    coup8 * coup92 * (-u + (Me[0] * Me[0]) + (MN[0] * MN[0]))) *
                   Me[0] * MN[0]) +
          std::conj(coup94[j1]) *
              (std::conj(coup95[j1]) *
                   (coup9 *
                        (coup92 * ((-t + (Me[0] * Me[0]) + (MN[0] * MN[0])) *
                                   (-t + (Me[0] * Me[0]) + (MN[0] * MN[0]))) +
                         coup91 * (Me[0] * Me[0]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup8 *
                        (coup92 * (s - 2 * (Me[0] * Me[0])) +
                         4 * coup91 * (Me[0] * Me[0])) *
                        (MN[0] * MN[0])) +
               std::conj(coup96[j1]) *
                   (2 * coup8 * coup91 *
                        (-t + (Me[0] * Me[0]) + (MN[0] * MN[0])) +
                    2 * coup9 * coup92 *
                        (-t + (Me[0] * Me[0]) + (MN[0] * MN[0])) +
                    coup9 * coup91 * (-u + (Me[0] * Me[0]) + (MN[0] * MN[0])) +
                    coup8 * coup92 * (-u + (Me[0] * Me[0]) + (MN[0] * MN[0]))) *
                   Me[0] * MN[0]))) /
                ((-s + (MZ * MZ)) * (t - (Mse[j1] * Mse[j1]))) -
            (4 *
             (std::conj(coup93[j1]) *
                  (std::conj(coup96[j1]) *
                       (coup9 *
                            (coup91 *
                                 ((-u + (Me[0] * Me[0]) + (MN[0] * MN[0])) *
                                  (-u + (Me[0] * Me[0]) + (MN[0] * MN[0]))) +
                             coup92 * (Me[0] * Me[0]) *
                                 (s - 2 * (MN[0] * MN[0]))) +
                        coup8 *
                            (coup91 * (s - 2 * (Me[0] * Me[0])) +
                             4 * coup92 * (Me[0] * Me[0])) *
                            (MN[0] * MN[0])) +
                   std::conj(coup95[j1]) *
                       (coup8 * coup91 *
                            (-t + (Me[0] * Me[0]) + (MN[0] * MN[0])) +
                        coup9 * coup92 *
                            (-t + (Me[0] * Me[0]) + (MN[0] * MN[0])) +
                        2 * coup9 * coup91 *
                            (-u + (Me[0] * Me[0]) + (MN[0] * MN[0])) +
                        2 * coup8 * coup92 *
                            (-u + (Me[0] * Me[0]) + (MN[0] * MN[0]))) *
                       Me[0] * MN[0]) +
              std::conj(coup94[j1]) *
                  (std::conj(coup95[j1]) *
                       (coup8 *
                            (coup92 *
                                 ((-u + (Me[0] * Me[0]) + (MN[0] * MN[0])) *
                                  (-u + (Me[0] * Me[0]) + (MN[0] * MN[0]))) +
                             coup91 * (Me[0] * Me[0]) *
                                 (s - 2 * (MN[0] * MN[0]))) +
                        coup9 *
                            (coup92 * (s - 2 * (Me[0] * Me[0])) +
                             4 * coup91 * (Me[0] * Me[0])) *
                            (MN[0] * MN[0])) +
                   std::conj(coup96[j1]) *
                       (coup8 * coup91 *
                            (-t + (Me[0] * Me[0]) + (MN[0] * MN[0])) +
                        coup9 * coup92 *
                            (-t + (Me[0] * Me[0]) + (MN[0] * MN[0])) +
                        2 * coup9 * coup91 *
                            (-u + (Me[0] * Me[0]) + (MN[0] * MN[0])) +
                        2 * coup8 * coup92 *
                            (-u + (Me[0] * Me[0]) + (MN[0] * MN[0]))) *
                       Me[0] * MN[0]))) /
                ((-s + (MZ * MZ)) * (u - (Mse[j1] * Mse[j1]))),
        j1, 6)

    SUM2(((std::conj(coup90[j1]) * (coup90[i1] * (s - 2 * (Me[0] * Me[0])) -
                                    2 * coup89[i1] * (Me[0] * Me[0])) +
           std::conj(coup89[j1]) * (coup89[i1] * (s - 2 * (Me[0] * Me[0])) -
                                    2 * coup90[i1] * (Me[0] * Me[0]))) *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
                 ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))) +
             ((std::conj(coup94[j1]) *
                   (coup94[i1] * (t - (Me[0] * Me[0]) - (MN[0] * MN[0])) -
                    2 * coup93[i1] * Me[0] * MN[0]) +
               std::conj(coup93[j1]) *
                   (coup93[i1] * (t - (Me[0] * Me[0]) - (MN[0] * MN[0])) -
                    2 * coup94[i1] * Me[0] * MN[0])) *
              (std::conj(coup96[j1]) *
                   (coup96[i1] * (t - (Me[0] * Me[0]) - (MN[0] * MN[0])) -
                    2 * coup95[i1] * Me[0] * MN[0]) +
               std::conj(coup95[j1]) *
                   (coup95[i1] * (t - (Me[0] * Me[0]) - (MN[0] * MN[0])) -
                    2 * coup96[i1] * Me[0] * MN[0]))) /
                 ((t - (Mse[i1] * Mse[i1])) * (t - (Mse[j1] * Mse[j1]))) +
             ((std::conj(coup94[j1]) *
                   (coup94[i1] * (u - (Me[0] * Me[0]) - (MN[0] * MN[0])) -
                    2 * coup93[i1] * Me[0] * MN[0]) +
               std::conj(coup93[j1]) *
                   (coup93[i1] * (u - (Me[0] * Me[0]) - (MN[0] * MN[0])) -
                    2 * coup94[i1] * Me[0] * MN[0])) *
              (std::conj(coup96[j1]) *
                   (coup96[i1] * (u - (Me[0] * Me[0]) - (MN[0] * MN[0])) -
                    2 * coup95[i1] * Me[0] * MN[0]) +
               std::conj(coup95[j1]) *
                   (coup95[i1] * (u - (Me[0] * Me[0]) - (MN[0] * MN[0])) -
                    2 * coup96[i1] * Me[0] * MN[0]))) /
                 ((u - (Mse[i1] * Mse[i1])) * (u - (Mse[j1] * Mse[j1]))) +
             (-(std::conj(coup94[j1]) *
                (std::conj(coup96[j1]) *
                     (2 * coup2[i1] *
                          (-(coup90[i1] * (s - 2 * (Me[0] * Me[0]))) +
                           2 * coup89[i1] * (Me[0] * Me[0])) *
                          (MN[0] * MN[0]) +
                      coup3[i1] *
                          (-2 * coup89[i1] * (Me[0] * Me[0]) *
                               (s - 2 * (MN[0] * MN[0])) +
                           coup90[i1] *
                               ((s * s) + (t * t) - (u * u) +
                                2 * u * (Me[0] * Me[0]) +
                                2 * u * (MN[0] * MN[0]) +
                                4 * (Me[0] * Me[0]) * (MN[0] * MN[0]) -
                                2 * s * ((Me[0] * Me[0]) + (MN[0] * MN[0])) -
                                2 * t * ((Me[0] * Me[0]) + (MN[0] * MN[0]))))) +
                 2 * std::conj(coup95[j1]) *
                     (coup2[i1] * (coup90[i1] *
                                       (u - (Me[0] * Me[0]) - (MN[0] * MN[0])) +
                                   coup89[i1] * (-t + (Me[0] * Me[0]) +
                                                 (MN[0] * MN[0]))) +
                      coup3[i1] * (coup89[i1] *
                                       (u - (Me[0] * Me[0]) - (MN[0] * MN[0])) +
                                   coup90[i1] * (-t + (Me[0] * Me[0]) +
                                                 (MN[0] * MN[0])))) *
                     Me[0] * MN[0])) -
              std::conj(coup93[j1]) *
                  (std::conj(coup95[j1]) *
                       (2 * coup3[i1] *
                            (-(coup89[i1] * (s - 2 * (Me[0] * Me[0]))) +
                             2 * coup90[i1] * (Me[0] * Me[0])) *
                            (MN[0] * MN[0]) +
                        coup2[i1] *
                            (-2 * coup90[i1] * (Me[0] * Me[0]) *
                                 (s - 2 * (MN[0] * MN[0])) +
                             coup89[i1] *
                                 ((s * s) + (t * t) - (u * u) +
                                  2 * u * (Me[0] * Me[0]) +
                                  2 * u * (MN[0] * MN[0]) +
                                  4 * (Me[0] * Me[0]) * (MN[0] * MN[0]) -
                                  2 * s * ((Me[0] * Me[0]) + (MN[0] * MN[0])) -
                                  2 * t *
                                      ((Me[0] * Me[0]) + (MN[0] * MN[0]))))) +
                   2 * std::conj(coup96[j1]) *
                       (coup2[i1] * (coup90[i1] * (u - (Me[0] * Me[0]) -
                                                   (MN[0] * MN[0])) +
                                     coup89[i1] * (-t + (Me[0] * Me[0]) +
                                                   (MN[0] * MN[0]))) +
                        coup3[i1] * (coup89[i1] * (u - (Me[0] * Me[0]) -
                                                   (MN[0] * MN[0])) +
                                     coup90[i1] * (-t + (Me[0] * Me[0]) +
                                                   (MN[0] * MN[0])))) *
                       Me[0] * MN[0])) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (Mse[j1] * Mse[j1]))) +
             (-(std::conj(coup94[j1]) *
                (std::conj(coup96[j1]) *
                     (2 * coup2[i1] *
                          (-(coup90[i1] * (s - 2 * (Me[0] * Me[0]))) +
                           2 * coup89[i1] * (Me[0] * Me[0])) *
                          (MN[0] * MN[0]) +
                      coup3[i1] *
                          (-2 * coup89[i1] * (Me[0] * Me[0]) *
                               (s - 2 * (MN[0] * MN[0])) +
                           coup90[i1] *
                               ((s * s) - (t * t) +
                                (u - 2 * (Me[0] * Me[0])) *
                                    (u - 2 * (MN[0] * MN[0])) -
                                2 * s * ((Me[0] * Me[0]) + (MN[0] * MN[0])) +
                                2 * t * ((Me[0] * Me[0]) + (MN[0] * MN[0]))))) +
                 2 * std::conj(coup95[j1]) *
                     (coup2[i1] * (coup90[i1] *
                                       (t - (Me[0] * Me[0]) - (MN[0] * MN[0])) +
                                   coup89[i1] * (-u + (Me[0] * Me[0]) +
                                                 (MN[0] * MN[0]))) +
                      coup3[i1] * (coup89[i1] *
                                       (t - (Me[0] * Me[0]) - (MN[0] * MN[0])) +
                                   coup90[i1] * (-u + (Me[0] * Me[0]) +
                                                 (MN[0] * MN[0])))) *
                     Me[0] * MN[0])) -
              std::conj(coup93[j1]) *
                  (std::conj(coup95[j1]) *
                       (2 * coup3[i1] *
                            (-(coup89[i1] * (s - 2 * (Me[0] * Me[0]))) +
                             2 * coup90[i1] * (Me[0] * Me[0])) *
                            (MN[0] * MN[0]) +
                        coup2[i1] *
                            (-2 * coup90[i1] * (Me[0] * Me[0]) *
                                 (s - 2 * (MN[0] * MN[0])) +
                             coup89[i1] *
                                 ((s * s) - (t * t) +
                                  (u - 2 * (Me[0] * Me[0])) *
                                      (u - 2 * (MN[0] * MN[0])) -
                                  2 * s * ((Me[0] * Me[0]) + (MN[0] * MN[0])) +
                                  2 * t *
                                      ((Me[0] * Me[0]) + (MN[0] * MN[0]))))) +
                   2 * std::conj(coup96[j1]) *
                       (coup2[i1] * (coup90[i1] * (t - (Me[0] * Me[0]) -
                                                   (MN[0] * MN[0])) +
                                     coup89[i1] * (-u + (Me[0] * Me[0]) +
                                                   (MN[0] * MN[0]))) +
                        coup3[i1] * (coup89[i1] * (t - (Me[0] * Me[0]) -
                                                   (MN[0] * MN[0])) +
                                     coup90[i1] * (-u + (Me[0] * Me[0]) +
                                                   (MN[0] * MN[0])))) *
                       Me[0] * MN[0])) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (Mse[j1] * Mse[j1]))),
         i1, 6, j1, 6)

    SUM2((std::conj(coup94[j1]) *
              (-2 * std::conj(coup95[j1]) *
                   (coup94[i1] * MN[0] *
                        (coup96[i1] * (-u + (Me[0] * Me[0]) + (MN[0] * MN[0])) *
                             Me[0] +
                         coup95[i1] * (s - 2 * (Me[0] * Me[0])) * MN[0]) +
                    coup93[i1] * Me[0] *
                        (coup96[i1] * (s - 2 * (MN[0] * MN[0])) * Me[0] +
                         coup95[i1] * (-u + (Me[0] * Me[0]) + (MN[0] * MN[0])) *
                             MN[0])) +
               std::conj(coup96[j1]) *
                   (-2 * coup93[i1] * Me[0] * MN[0] *
                        (coup96[i1] * (-t + (Me[0] * Me[0]) + (MN[0] * MN[0])) +
                         2 * coup95[i1] * Me[0] * MN[0]) +
                    coup94[i1] *
                        (coup96[i1] *
                             ((s * s) - (t * t) - (u * u) +
                              2 * u * (Me[0] * Me[0]) -
                              2 * (Me[0] * Me[0] * Me[0] * Me[0]) +
                              2 * u * (MN[0] * MN[0]) -
                              2 * s * ((Me[0] * Me[0]) + (MN[0] * MN[0])) +
                              2 * t * ((Me[0] * Me[0]) + (MN[0] * MN[0])) -
                              2 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                         2 * coup95[i1] *
                             (-t + (Me[0] * Me[0]) + (MN[0] * MN[0])) * Me[0] *
                             MN[0]))) +
          std::conj(coup93[j1]) *
              (-2 * std::conj(coup96[j1]) *
                   (coup93[i1] * MN[0] *
                        (coup95[i1] * (-u + (Me[0] * Me[0]) + (MN[0] * MN[0])) *
                             Me[0] +
                         coup96[i1] * (s - 2 * (Me[0] * Me[0])) * MN[0]) +
                    coup94[i1] * Me[0] *
                        (coup95[i1] * (s - 2 * (MN[0] * MN[0])) * Me[0] +
                         coup96[i1] * (-u + (Me[0] * Me[0]) + (MN[0] * MN[0])) *
                             MN[0])) +
               std::conj(coup95[j1]) *
                   (-2 * coup94[i1] * Me[0] * MN[0] *
                        (coup95[i1] * (-t + (Me[0] * Me[0]) + (MN[0] * MN[0])) +
                         2 * coup96[i1] * Me[0] * MN[0]) +
                    coup93[i1] *
                        (coup95[i1] *
                             ((s * s) - (t * t) - (u * u) +
                              2 * u * (Me[0] * Me[0]) -
                              2 * (Me[0] * Me[0] * Me[0] * Me[0]) +
                              2 * u * (MN[0] * MN[0]) -
                              2 * s * ((Me[0] * Me[0]) + (MN[0] * MN[0])) +
                              2 * t * ((Me[0] * Me[0]) + (MN[0] * MN[0])) -
                              2 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                         2 * coup96[i1] *
                             (-t + (Me[0] * Me[0]) + (MN[0] * MN[0])) * Me[0] *
                             MN[0])))) /
             ((t - (Mse[i1] * Mse[i1])) * (u - (Mse[j1] * Mse[j1]))),
         j1, 6, i1, 6)

    return res.real();
}
double DT::N1N1e2e2(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t = -0.5 * s + (Me[1] * Me[1]) +
                             (cos_t * sqrt(s - 4 * (Me[1] * Me[1])) *
                              sqrt(s - 4 * (MN[0] * MN[0]))) /
                                 2. +
                             (MN[0] * MN[0]);
    std::complex<double> u = -s - t + 2 * (Me[1] * Me[1]) + 2 * (MN[0] * MN[0]);
    res +=
        (4 *
         (std::conj(coup9) *
              (std::conj(coup92) *
                   (coup9 *
                        (coup92 * ((-t + (Me[1] * Me[1]) + (MN[0] * MN[0])) *
                                   (-t + (Me[1] * Me[1]) + (MN[0] * MN[0]))) +
                         coup91 * (Me[1] * Me[1]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup8 *
                        (coup92 * (s - 2 * (Me[1] * Me[1])) +
                         4 * coup91 * (Me[1] * Me[1])) *
                        (MN[0] * MN[0])) +
               std::conj(coup91) *
                   (coup9 *
                        (coup91 * ((-u + (Me[1] * Me[1]) + (MN[0] * MN[0])) *
                                   (-u + (Me[1] * Me[1]) + (MN[0] * MN[0]))) +
                         coup92 * (Me[1] * Me[1]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup8 *
                        (coup91 * (s - 2 * (Me[1] * Me[1])) +
                         4 * coup92 * (Me[1] * Me[1])) *
                        (MN[0] * MN[0]))) +
          std::conj(coup8) *
              (std::conj(coup92) *
                   (coup8 *
                        (coup92 * ((-u + (Me[1] * Me[1]) + (MN[0] * MN[0])) *
                                   (-u + (Me[1] * Me[1]) + (MN[0] * MN[0]))) +
                         coup91 * (Me[1] * Me[1]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup9 *
                        (coup92 * (s - 2 * (Me[1] * Me[1])) +
                         4 * coup91 * (Me[1] * Me[1])) *
                        (MN[0] * MN[0])) +
               std::conj(coup91) *
                   (coup8 *
                        (coup91 * ((-t + (Me[1] * Me[1]) + (MN[0] * MN[0])) *
                                   (-t + (Me[1] * Me[1]) + (MN[0] * MN[0]))) +
                         coup92 * (Me[1] * Me[1]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup9 *
                        (coup91 * (s - 2 * (Me[1] * Me[1])) +
                         4 * coup92 * (Me[1] * Me[1])) *
                        (MN[0] * MN[0]))))) /
        (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1((4 *
          (std::conj(coup9) *
               (std::conj(coup92) *
                    (coup3[i1] *
                         (coup98[i1] * (t - (Me[1] * Me[1]) - (MN[0] * MN[0])) +
                          coup97[i1] *
                              (-u + (Me[1] * Me[1]) + (MN[0] * MN[0]))) +
                     coup2[i1] *
                         (coup97[i1] * (t - (Me[1] * Me[1]) - (MN[0] * MN[0])) +
                          coup98[i1] *
                              (-u + (Me[1] * Me[1]) + (MN[0] * MN[0])))) +
                std::conj(coup91) *
                    (coup2[i1] *
                         (coup98[i1] * (t - (Me[1] * Me[1]) - (MN[0] * MN[0])) +
                          coup97[i1] *
                              (-u + (Me[1] * Me[1]) + (MN[0] * MN[0]))) +
                     coup3[i1] *
                         (coup97[i1] * (t - (Me[1] * Me[1]) - (MN[0] * MN[0])) +
                          coup98[i1] *
                              (-u + (Me[1] * Me[1]) + (MN[0] * MN[0]))))) +
           std::conj(coup8) *
               (std::conj(coup91) *
                    (coup3[i1] *
                         (coup98[i1] * (t - (Me[1] * Me[1]) - (MN[0] * MN[0])) +
                          coup97[i1] *
                              (-u + (Me[1] * Me[1]) + (MN[0] * MN[0]))) +
                     coup2[i1] *
                         (coup97[i1] * (t - (Me[1] * Me[1]) - (MN[0] * MN[0])) +
                          coup98[i1] *
                              (-u + (Me[1] * Me[1]) + (MN[0] * MN[0])))) +
                std::conj(coup92) *
                    (coup2[i1] *
                         (coup98[i1] * (t - (Me[1] * Me[1]) - (MN[0] * MN[0])) +
                          coup97[i1] *
                              (-u + (Me[1] * Me[1]) + (MN[0] * MN[0]))) +
                     coup3[i1] *
                         (coup97[i1] * (t - (Me[1] * Me[1]) - (MN[0] * MN[0])) +
                          coup98[i1] *
                              (-u + (Me[1] * Me[1]) + (MN[0] * MN[0])))))) *
          Me[1] * MN[0]) /
             ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
         i1, 6)

    SUM1(
        (4 *
         (std::conj(coup99[j1]) *
              (std::conj(coup102[j1]) *
                   (coup8 *
                        (coup91 * ((-t + (Me[1] * Me[1]) + (MN[0] * MN[0])) *
                                   (-t + (Me[1] * Me[1]) + (MN[0] * MN[0]))) +
                         coup92 * (Me[1] * Me[1]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup9 *
                        (coup91 * (s - 2 * (Me[1] * Me[1])) +
                         4 * coup92 * (Me[1] * Me[1])) *
                        (MN[0] * MN[0])) +
               std::conj(coup101[j1]) *
                   (2 * coup8 * coup91 *
                        (-t + (Me[1] * Me[1]) + (MN[0] * MN[0])) +
                    2 * coup9 * coup92 *
                        (-t + (Me[1] * Me[1]) + (MN[0] * MN[0])) +
                    coup9 * coup91 * (-u + (Me[1] * Me[1]) + (MN[0] * MN[0])) +
                    coup8 * coup92 * (-u + (Me[1] * Me[1]) + (MN[0] * MN[0]))) *
                   Me[1] * MN[0]) +
          std::conj(coup100[j1]) *
              (std::conj(coup101[j1]) *
                   (coup9 *
                        (coup92 * ((-t + (Me[1] * Me[1]) + (MN[0] * MN[0])) *
                                   (-t + (Me[1] * Me[1]) + (MN[0] * MN[0]))) +
                         coup91 * (Me[1] * Me[1]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup8 *
                        (coup92 * (s - 2 * (Me[1] * Me[1])) +
                         4 * coup91 * (Me[1] * Me[1])) *
                        (MN[0] * MN[0])) +
               std::conj(coup102[j1]) *
                   (2 * coup8 * coup91 *
                        (-t + (Me[1] * Me[1]) + (MN[0] * MN[0])) +
                    2 * coup9 * coup92 *
                        (-t + (Me[1] * Me[1]) + (MN[0] * MN[0])) +
                    coup9 * coup91 * (-u + (Me[1] * Me[1]) + (MN[0] * MN[0])) +
                    coup8 * coup92 * (-u + (Me[1] * Me[1]) + (MN[0] * MN[0]))) *
                   Me[1] * MN[0]))) /
                ((-s + (MZ * MZ)) * (t - (Mse[j1] * Mse[j1]))) -
            (4 *
             (std::conj(coup99[j1]) *
                  (std::conj(coup102[j1]) *
                       (coup9 *
                            (coup91 *
                                 ((-u + (Me[1] * Me[1]) + (MN[0] * MN[0])) *
                                  (-u + (Me[1] * Me[1]) + (MN[0] * MN[0]))) +
                             coup92 * (Me[1] * Me[1]) *
                                 (s - 2 * (MN[0] * MN[0]))) +
                        coup8 *
                            (coup91 * (s - 2 * (Me[1] * Me[1])) +
                             4 * coup92 * (Me[1] * Me[1])) *
                            (MN[0] * MN[0])) +
                   std::conj(coup101[j1]) *
                       (coup8 * coup91 *
                            (-t + (Me[1] * Me[1]) + (MN[0] * MN[0])) +
                        coup9 * coup92 *
                            (-t + (Me[1] * Me[1]) + (MN[0] * MN[0])) +
                        2 * coup9 * coup91 *
                            (-u + (Me[1] * Me[1]) + (MN[0] * MN[0])) +
                        2 * coup8 * coup92 *
                            (-u + (Me[1] * Me[1]) + (MN[0] * MN[0]))) *
                       Me[1] * MN[0]) +
              std::conj(coup100[j1]) *
                  (std::conj(coup101[j1]) *
                       (coup8 *
                            (coup92 *
                                 ((-u + (Me[1] * Me[1]) + (MN[0] * MN[0])) *
                                  (-u + (Me[1] * Me[1]) + (MN[0] * MN[0]))) +
                             coup91 * (Me[1] * Me[1]) *
                                 (s - 2 * (MN[0] * MN[0]))) +
                        coup9 *
                            (coup92 * (s - 2 * (Me[1] * Me[1])) +
                             4 * coup91 * (Me[1] * Me[1])) *
                            (MN[0] * MN[0])) +
                   std::conj(coup102[j1]) *
                       (coup8 * coup91 *
                            (-t + (Me[1] * Me[1]) + (MN[0] * MN[0])) +
                        coup9 * coup92 *
                            (-t + (Me[1] * Me[1]) + (MN[0] * MN[0])) +
                        2 * coup9 * coup91 *
                            (-u + (Me[1] * Me[1]) + (MN[0] * MN[0])) +
                        2 * coup8 * coup92 *
                            (-u + (Me[1] * Me[1]) + (MN[0] * MN[0]))) *
                       Me[1] * MN[0]))) /
                ((-s + (MZ * MZ)) * (u - (Mse[j1] * Mse[j1]))),
        j1, 6)

    SUM2(((std::conj(coup98[j1]) * (coup98[i1] * (s - 2 * (Me[1] * Me[1])) -
                                    2 * coup97[i1] * (Me[1] * Me[1])) +
           std::conj(coup97[j1]) * (coup97[i1] * (s - 2 * (Me[1] * Me[1])) -
                                    2 * coup98[i1] * (Me[1] * Me[1]))) *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
                 ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))) +
             ((std::conj(coup102[j1]) *
                   (coup102[i1] * (t - (Me[1] * Me[1]) - (MN[0] * MN[0])) -
                    2 * coup101[i1] * Me[1] * MN[0]) +
               std::conj(coup101[j1]) *
                   (coup101[i1] * (t - (Me[1] * Me[1]) - (MN[0] * MN[0])) -
                    2 * coup102[i1] * Me[1] * MN[0])) *
              (std::conj(coup99[j1]) *
                   (coup99[i1] * (t - (Me[1] * Me[1]) - (MN[0] * MN[0])) -
                    2 * coup100[i1] * Me[1] * MN[0]) +
               std::conj(coup100[j1]) *
                   (coup100[i1] * (t - (Me[1] * Me[1]) - (MN[0] * MN[0])) -
                    2 * coup99[i1] * Me[1] * MN[0]))) /
                 ((t - (Mse[i1] * Mse[i1])) * (t - (Mse[j1] * Mse[j1]))) +
             ((std::conj(coup102[j1]) *
                   (coup102[i1] * (u - (Me[1] * Me[1]) - (MN[0] * MN[0])) -
                    2 * coup101[i1] * Me[1] * MN[0]) +
               std::conj(coup101[j1]) *
                   (coup101[i1] * (u - (Me[1] * Me[1]) - (MN[0] * MN[0])) -
                    2 * coup102[i1] * Me[1] * MN[0])) *
              (std::conj(coup99[j1]) *
                   (coup99[i1] * (u - (Me[1] * Me[1]) - (MN[0] * MN[0])) -
                    2 * coup100[i1] * Me[1] * MN[0]) +
               std::conj(coup100[j1]) *
                   (coup100[i1] * (u - (Me[1] * Me[1]) - (MN[0] * MN[0])) -
                    2 * coup99[i1] * Me[1] * MN[0]))) /
                 ((u - (Mse[i1] * Mse[i1])) * (u - (Mse[j1] * Mse[j1]))) +
             (-(std::conj(coup101[j1]) *
                (std::conj(coup99[j1]) *
                     (2 * coup3[i1] *
                          (-(coup97[i1] * (s - 2 * (Me[1] * Me[1]))) +
                           2 * coup98[i1] * (Me[1] * Me[1])) *
                          (MN[0] * MN[0]) +
                      coup2[i1] *
                          (-2 * coup98[i1] * (Me[1] * Me[1]) *
                               (s - 2 * (MN[0] * MN[0])) +
                           coup97[i1] *
                               ((s * s) + (t * t) - (u * u) +
                                2 * u * (Me[1] * Me[1]) +
                                2 * u * (MN[0] * MN[0]) +
                                4 * (Me[1] * Me[1]) * (MN[0] * MN[0]) -
                                2 * s * ((Me[1] * Me[1]) + (MN[0] * MN[0])) -
                                2 * t * ((Me[1] * Me[1]) + (MN[0] * MN[0]))))) +
                 2 * std::conj(coup100[j1]) *
                     (coup2[i1] * (coup98[i1] *
                                       (u - (Me[1] * Me[1]) - (MN[0] * MN[0])) +
                                   coup97[i1] * (-t + (Me[1] * Me[1]) +
                                                 (MN[0] * MN[0]))) +
                      coup3[i1] * (coup97[i1] *
                                       (u - (Me[1] * Me[1]) - (MN[0] * MN[0])) +
                                   coup98[i1] * (-t + (Me[1] * Me[1]) +
                                                 (MN[0] * MN[0])))) *
                     Me[1] * MN[0])) -
              std::conj(coup102[j1]) *
                  (std::conj(coup100[j1]) *
                       (2 * coup2[i1] *
                            (-(coup98[i1] * (s - 2 * (Me[1] * Me[1]))) +
                             2 * coup97[i1] * (Me[1] * Me[1])) *
                            (MN[0] * MN[0]) +
                        coup3[i1] *
                            (-2 * coup97[i1] * (Me[1] * Me[1]) *
                                 (s - 2 * (MN[0] * MN[0])) +
                             coup98[i1] *
                                 ((s * s) + (t * t) - (u * u) +
                                  2 * u * (Me[1] * Me[1]) +
                                  2 * u * (MN[0] * MN[0]) +
                                  4 * (Me[1] * Me[1]) * (MN[0] * MN[0]) -
                                  2 * s * ((Me[1] * Me[1]) + (MN[0] * MN[0])) -
                                  2 * t *
                                      ((Me[1] * Me[1]) + (MN[0] * MN[0]))))) +
                   2 * std::conj(coup99[j1]) *
                       (coup2[i1] * (coup98[i1] * (u - (Me[1] * Me[1]) -
                                                   (MN[0] * MN[0])) +
                                     coup97[i1] * (-t + (Me[1] * Me[1]) +
                                                   (MN[0] * MN[0]))) +
                        coup3[i1] * (coup97[i1] * (u - (Me[1] * Me[1]) -
                                                   (MN[0] * MN[0])) +
                                     coup98[i1] * (-t + (Me[1] * Me[1]) +
                                                   (MN[0] * MN[0])))) *
                       Me[1] * MN[0])) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (Mse[j1] * Mse[j1]))) +
             (-(std::conj(coup101[j1]) *
                (std::conj(coup99[j1]) *
                     (2 * coup3[i1] *
                          (-(coup97[i1] * (s - 2 * (Me[1] * Me[1]))) +
                           2 * coup98[i1] * (Me[1] * Me[1])) *
                          (MN[0] * MN[0]) +
                      coup2[i1] *
                          (-2 * coup98[i1] * (Me[1] * Me[1]) *
                               (s - 2 * (MN[0] * MN[0])) +
                           coup97[i1] *
                               ((s * s) - (t * t) +
                                (u - 2 * (Me[1] * Me[1])) *
                                    (u - 2 * (MN[0] * MN[0])) -
                                2 * s * ((Me[1] * Me[1]) + (MN[0] * MN[0])) +
                                2 * t * ((Me[1] * Me[1]) + (MN[0] * MN[0]))))) +
                 2 * std::conj(coup100[j1]) *
                     (coup2[i1] * (coup98[i1] *
                                       (t - (Me[1] * Me[1]) - (MN[0] * MN[0])) +
                                   coup97[i1] * (-u + (Me[1] * Me[1]) +
                                                 (MN[0] * MN[0]))) +
                      coup3[i1] * (coup97[i1] *
                                       (t - (Me[1] * Me[1]) - (MN[0] * MN[0])) +
                                   coup98[i1] * (-u + (Me[1] * Me[1]) +
                                                 (MN[0] * MN[0])))) *
                     Me[1] * MN[0])) -
              std::conj(coup102[j1]) *
                  (std::conj(coup100[j1]) *
                       (2 * coup2[i1] *
                            (-(coup98[i1] * (s - 2 * (Me[1] * Me[1]))) +
                             2 * coup97[i1] * (Me[1] * Me[1])) *
                            (MN[0] * MN[0]) +
                        coup3[i1] *
                            (-2 * coup97[i1] * (Me[1] * Me[1]) *
                                 (s - 2 * (MN[0] * MN[0])) +
                             coup98[i1] *
                                 ((s * s) - (t * t) +
                                  (u - 2 * (Me[1] * Me[1])) *
                                      (u - 2 * (MN[0] * MN[0])) -
                                  2 * s * ((Me[1] * Me[1]) + (MN[0] * MN[0])) +
                                  2 * t *
                                      ((Me[1] * Me[1]) + (MN[0] * MN[0]))))) +
                   2 * std::conj(coup99[j1]) *
                       (coup2[i1] * (coup98[i1] * (t - (Me[1] * Me[1]) -
                                                   (MN[0] * MN[0])) +
                                     coup97[i1] * (-u + (Me[1] * Me[1]) +
                                                   (MN[0] * MN[0]))) +
                        coup3[i1] * (coup97[i1] * (t - (Me[1] * Me[1]) -
                                                   (MN[0] * MN[0])) +
                                     coup98[i1] * (-u + (Me[1] * Me[1]) +
                                                   (MN[0] * MN[0])))) *
                       Me[1] * MN[0])) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (Mse[j1] * Mse[j1]))),
         i1, 6, j1, 6)

    SUM2(
        (std::conj(coup99[j1]) *
             (-2 * std::conj(coup102[j1]) *
                  (coup99[i1] * MN[0] *
                       (coup101[i1] * (-u + (Me[1] * Me[1]) + (MN[0] * MN[0])) *
                            Me[1] +
                        coup102[i1] * (s - 2 * (Me[1] * Me[1])) * MN[0]) +
                   coup100[i1] * Me[1] *
                       (coup101[i1] * (s - 2 * (MN[0] * MN[0])) * Me[1] +
                        coup102[i1] * (-u + (Me[1] * Me[1]) + (MN[0] * MN[0])) *
                            MN[0])) +
              std::conj(coup101[j1]) *
                  (-2 * coup102[i1] * Me[1] * MN[0] *
                       (coup99[i1] * (-t + (Me[1] * Me[1]) + (MN[0] * MN[0])) +
                        2 * coup100[i1] * Me[1] * MN[0]) +
                   coup101[i1] *
                       (coup99[i1] *
                            ((s * s) - (t * t) - (u * u) +
                             2 * u * (Me[1] * Me[1]) -
                             2 * (Me[1] * Me[1] * Me[1] * Me[1]) +
                             2 * u * (MN[0] * MN[0]) -
                             2 * s * ((Me[1] * Me[1]) + (MN[0] * MN[0])) +
                             2 * t * ((Me[1] * Me[1]) + (MN[0] * MN[0])) -
                             2 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                        2 * coup100[i1] *
                            (-t + (Me[1] * Me[1]) + (MN[0] * MN[0])) * Me[1] *
                            MN[0]))) +
         std::conj(coup100[j1]) *
             (-2 * std::conj(coup101[j1]) *
                  (coup101[i1] * MN[0] *
                       (coup99[i1] * (-u + (Me[1] * Me[1]) + (MN[0] * MN[0])) *
                            Me[1] +
                        coup100[i1] * (s - 2 * (Me[1] * Me[1])) * MN[0]) +
                   coup102[i1] * Me[1] *
                       (coup99[i1] * (s - 2 * (MN[0] * MN[0])) * Me[1] +
                        coup100[i1] * (-u + (Me[1] * Me[1]) + (MN[0] * MN[0])) *
                            MN[0])) +
              std::conj(coup102[j1]) *
                  (-2 * coup99[i1] * Me[1] * MN[0] *
                       (coup102[i1] * (-t + (Me[1] * Me[1]) + (MN[0] * MN[0])) +
                        2 * coup101[i1] * Me[1] * MN[0]) +
                   coup100[i1] *
                       (coup102[i1] *
                            ((s * s) - (t * t) - (u * u) +
                             2 * u * (Me[1] * Me[1]) -
                             2 * (Me[1] * Me[1] * Me[1] * Me[1]) +
                             2 * u * (MN[0] * MN[0]) -
                             2 * s * ((Me[1] * Me[1]) + (MN[0] * MN[0])) +
                             2 * t * ((Me[1] * Me[1]) + (MN[0] * MN[0])) -
                             2 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                        2 * coup101[i1] *
                            (-t + (Me[1] * Me[1]) + (MN[0] * MN[0])) * Me[1] *
                            MN[0])))) /
            ((t - (Mse[i1] * Mse[i1])) * (u - (Mse[j1] * Mse[j1]))),
        j1, 6, i1, 6)

    return res.real();
}
double DT::N1N1e3e3(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t = -0.5 * s + (Me[2] * Me[2]) +
                             (cos_t * sqrt(s - 4 * (Me[2] * Me[2])) *
                              sqrt(s - 4 * (MN[0] * MN[0]))) /
                                 2. +
                             (MN[0] * MN[0]);
    std::complex<double> u = -s - t + 2 * (Me[2] * Me[2]) + 2 * (MN[0] * MN[0]);
    res +=
        (4 *
         (std::conj(coup9) *
              (std::conj(coup92) *
                   (coup9 *
                        (coup92 * ((-t + (Me[2] * Me[2]) + (MN[0] * MN[0])) *
                                   (-t + (Me[2] * Me[2]) + (MN[0] * MN[0]))) +
                         coup91 * (Me[2] * Me[2]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup8 *
                        (coup92 * (s - 2 * (Me[2] * Me[2])) +
                         4 * coup91 * (Me[2] * Me[2])) *
                        (MN[0] * MN[0])) +
               std::conj(coup91) *
                   (coup9 *
                        (coup91 * ((-u + (Me[2] * Me[2]) + (MN[0] * MN[0])) *
                                   (-u + (Me[2] * Me[2]) + (MN[0] * MN[0]))) +
                         coup92 * (Me[2] * Me[2]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup8 *
                        (coup91 * (s - 2 * (Me[2] * Me[2])) +
                         4 * coup92 * (Me[2] * Me[2])) *
                        (MN[0] * MN[0]))) +
          std::conj(coup8) *
              (std::conj(coup92) *
                   (coup8 *
                        (coup92 * ((-u + (Me[2] * Me[2]) + (MN[0] * MN[0])) *
                                   (-u + (Me[2] * Me[2]) + (MN[0] * MN[0]))) +
                         coup91 * (Me[2] * Me[2]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup9 *
                        (coup92 * (s - 2 * (Me[2] * Me[2])) +
                         4 * coup91 * (Me[2] * Me[2])) *
                        (MN[0] * MN[0])) +
               std::conj(coup91) *
                   (coup8 *
                        (coup91 * ((-t + (Me[2] * Me[2]) + (MN[0] * MN[0])) *
                                   (-t + (Me[2] * Me[2]) + (MN[0] * MN[0]))) +
                         coup92 * (Me[2] * Me[2]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup9 *
                        (coup91 * (s - 2 * (Me[2] * Me[2])) +
                         4 * coup92 * (Me[2] * Me[2])) *
                        (MN[0] * MN[0]))))) /
        (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1(
        (4 *
         (std::conj(coup9) *
              (std::conj(coup92) *
                   (coup104[i1] *
                        (coup3[i1] * (t - (Me[2] * Me[2]) - (MN[0] * MN[0])) +
                         coup2[i1] * (-u + (Me[2] * Me[2]) + (MN[0] * MN[0]))) +
                    coup103[i1] *
                        (coup2[i1] * (t - (Me[2] * Me[2]) - (MN[0] * MN[0])) +
                         coup3[i1] *
                             (-u + (Me[2] * Me[2]) + (MN[0] * MN[0])))) +
               std::conj(coup91) *
                   (coup103[i1] *
                        (coup3[i1] * (t - (Me[2] * Me[2]) - (MN[0] * MN[0])) +
                         coup2[i1] * (-u + (Me[2] * Me[2]) + (MN[0] * MN[0]))) +
                    coup104[i1] *
                        (coup2[i1] * (t - (Me[2] * Me[2]) - (MN[0] * MN[0])) +
                         coup3[i1] *
                             (-u + (Me[2] * Me[2]) + (MN[0] * MN[0]))))) +
          std::conj(coup8) *
              (std::conj(coup91) *
                   (coup104[i1] *
                        (coup3[i1] * (t - (Me[2] * Me[2]) - (MN[0] * MN[0])) +
                         coup2[i1] * (-u + (Me[2] * Me[2]) + (MN[0] * MN[0]))) +
                    coup103[i1] *
                        (coup2[i1] * (t - (Me[2] * Me[2]) - (MN[0] * MN[0])) +
                         coup3[i1] *
                             (-u + (Me[2] * Me[2]) + (MN[0] * MN[0])))) +
               std::conj(coup92) *
                   (coup103[i1] *
                        (coup3[i1] * (t - (Me[2] * Me[2]) - (MN[0] * MN[0])) +
                         coup2[i1] * (-u + (Me[2] * Me[2]) + (MN[0] * MN[0]))) +
                    coup104[i1] *
                        (coup2[i1] * (t - (Me[2] * Me[2]) - (MN[0] * MN[0])) +
                         coup3[i1] *
                             (-u + (Me[2] * Me[2]) + (MN[0] * MN[0])))))) *
         Me[2] * MN[0]) /
            ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
        i1, 6)

    SUM1(
        (4 *
         (std::conj(coup105[j1]) *
              (std::conj(coup108[j1]) *
                   (coup8 *
                        (coup91 * ((-t + (Me[2] * Me[2]) + (MN[0] * MN[0])) *
                                   (-t + (Me[2] * Me[2]) + (MN[0] * MN[0]))) +
                         coup92 * (Me[2] * Me[2]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup9 *
                        (coup91 * (s - 2 * (Me[2] * Me[2])) +
                         4 * coup92 * (Me[2] * Me[2])) *
                        (MN[0] * MN[0])) +
               std::conj(coup107[j1]) *
                   (2 * coup8 * coup91 *
                        (-t + (Me[2] * Me[2]) + (MN[0] * MN[0])) +
                    2 * coup9 * coup92 *
                        (-t + (Me[2] * Me[2]) + (MN[0] * MN[0])) +
                    coup9 * coup91 * (-u + (Me[2] * Me[2]) + (MN[0] * MN[0])) +
                    coup8 * coup92 * (-u + (Me[2] * Me[2]) + (MN[0] * MN[0]))) *
                   Me[2] * MN[0]) +
          std::conj(coup106[j1]) *
              (std::conj(coup107[j1]) *
                   (coup9 *
                        (coup92 * ((-t + (Me[2] * Me[2]) + (MN[0] * MN[0])) *
                                   (-t + (Me[2] * Me[2]) + (MN[0] * MN[0]))) +
                         coup91 * (Me[2] * Me[2]) * (s - 2 * (MN[0] * MN[0]))) +
                    coup8 *
                        (coup92 * (s - 2 * (Me[2] * Me[2])) +
                         4 * coup91 * (Me[2] * Me[2])) *
                        (MN[0] * MN[0])) +
               std::conj(coup108[j1]) *
                   (2 * coup8 * coup91 *
                        (-t + (Me[2] * Me[2]) + (MN[0] * MN[0])) +
                    2 * coup9 * coup92 *
                        (-t + (Me[2] * Me[2]) + (MN[0] * MN[0])) +
                    coup9 * coup91 * (-u + (Me[2] * Me[2]) + (MN[0] * MN[0])) +
                    coup8 * coup92 * (-u + (Me[2] * Me[2]) + (MN[0] * MN[0]))) *
                   Me[2] * MN[0]))) /
                ((-s + (MZ * MZ)) * (t - (Mse[j1] * Mse[j1]))) -
            (4 *
             (std::conj(coup105[j1]) *
                  (std::conj(coup108[j1]) *
                       (coup9 *
                            (coup91 *
                                 ((-u + (Me[2] * Me[2]) + (MN[0] * MN[0])) *
                                  (-u + (Me[2] * Me[2]) + (MN[0] * MN[0]))) +
                             coup92 * (Me[2] * Me[2]) *
                                 (s - 2 * (MN[0] * MN[0]))) +
                        coup8 *
                            (coup91 * (s - 2 * (Me[2] * Me[2])) +
                             4 * coup92 * (Me[2] * Me[2])) *
                            (MN[0] * MN[0])) +
                   std::conj(coup107[j1]) *
                       (coup8 * coup91 *
                            (-t + (Me[2] * Me[2]) + (MN[0] * MN[0])) +
                        coup9 * coup92 *
                            (-t + (Me[2] * Me[2]) + (MN[0] * MN[0])) +
                        2 * coup9 * coup91 *
                            (-u + (Me[2] * Me[2]) + (MN[0] * MN[0])) +
                        2 * coup8 * coup92 *
                            (-u + (Me[2] * Me[2]) + (MN[0] * MN[0]))) *
                       Me[2] * MN[0]) +
              std::conj(coup106[j1]) *
                  (std::conj(coup107[j1]) *
                       (coup8 *
                            (coup92 *
                                 ((-u + (Me[2] * Me[2]) + (MN[0] * MN[0])) *
                                  (-u + (Me[2] * Me[2]) + (MN[0] * MN[0]))) +
                             coup91 * (Me[2] * Me[2]) *
                                 (s - 2 * (MN[0] * MN[0]))) +
                        coup9 *
                            (coup92 * (s - 2 * (Me[2] * Me[2])) +
                             4 * coup91 * (Me[2] * Me[2])) *
                            (MN[0] * MN[0])) +
                   std::conj(coup108[j1]) *
                       (coup8 * coup91 *
                            (-t + (Me[2] * Me[2]) + (MN[0] * MN[0])) +
                        coup9 * coup92 *
                            (-t + (Me[2] * Me[2]) + (MN[0] * MN[0])) +
                        2 * coup9 * coup91 *
                            (-u + (Me[2] * Me[2]) + (MN[0] * MN[0])) +
                        2 * coup8 * coup92 *
                            (-u + (Me[2] * Me[2]) + (MN[0] * MN[0]))) *
                       Me[2] * MN[0]))) /
                ((-s + (MZ * MZ)) * (u - (Mse[j1] * Mse[j1]))),
        j1, 6)

    SUM2(((std::conj(coup104[j1]) * (coup104[i1] * (s - 2 * (Me[2] * Me[2])) -
                                     2 * coup103[i1] * (Me[2] * Me[2])) +
           std::conj(coup103[j1]) * (coup103[i1] * (s - 2 * (Me[2] * Me[2])) -
                                     2 * coup104[i1] * (Me[2] * Me[2]))) *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
                 ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))) +
             ((std::conj(coup106[j1]) *
                   (coup106[i1] * (t - (Me[2] * Me[2]) - (MN[0] * MN[0])) -
                    2 * coup105[i1] * Me[2] * MN[0]) +
               std::conj(coup105[j1]) *
                   (coup105[i1] * (t - (Me[2] * Me[2]) - (MN[0] * MN[0])) -
                    2 * coup106[i1] * Me[2] * MN[0])) *
              (std::conj(coup108[j1]) *
                   (coup108[i1] * (t - (Me[2] * Me[2]) - (MN[0] * MN[0])) -
                    2 * coup107[i1] * Me[2] * MN[0]) +
               std::conj(coup107[j1]) *
                   (coup107[i1] * (t - (Me[2] * Me[2]) - (MN[0] * MN[0])) -
                    2 * coup108[i1] * Me[2] * MN[0]))) /
                 ((t - (Mse[i1] * Mse[i1])) * (t - (Mse[j1] * Mse[j1]))) +
             ((std::conj(coup106[j1]) *
                   (coup106[i1] * (u - (Me[2] * Me[2]) - (MN[0] * MN[0])) -
                    2 * coup105[i1] * Me[2] * MN[0]) +
               std::conj(coup105[j1]) *
                   (coup105[i1] * (u - (Me[2] * Me[2]) - (MN[0] * MN[0])) -
                    2 * coup106[i1] * Me[2] * MN[0])) *
              (std::conj(coup108[j1]) *
                   (coup108[i1] * (u - (Me[2] * Me[2]) - (MN[0] * MN[0])) -
                    2 * coup107[i1] * Me[2] * MN[0]) +
               std::conj(coup107[j1]) *
                   (coup107[i1] * (u - (Me[2] * Me[2]) - (MN[0] * MN[0])) -
                    2 * coup108[i1] * Me[2] * MN[0]))) /
                 ((u - (Mse[i1] * Mse[i1])) * (u - (Mse[j1] * Mse[j1]))) +
             (-(std::conj(coup106[j1]) *
                (std::conj(coup108[j1]) *
                     (2 * coup103[i1] * (Me[2] * Me[2]) *
                          (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                           2 * coup2[i1] * (MN[0] * MN[0])) +
                      coup104[i1] *
                          (-2 * coup2[i1] * (s - 2 * (Me[2] * Me[2])) *
                               (MN[0] * MN[0]) +
                           coup3[i1] *
                               ((s * s) + (t * t) - (u * u) +
                                2 * u * (Me[2] * Me[2]) +
                                2 * u * (MN[0] * MN[0]) +
                                4 * (Me[2] * Me[2]) * (MN[0] * MN[0]) -
                                2 * s * ((Me[2] * Me[2]) + (MN[0] * MN[0])) -
                                2 * t * ((Me[2] * Me[2]) + (MN[0] * MN[0]))))) +
                 2 * std::conj(coup107[j1]) *
                     (coup103[i1] *
                          (coup3[i1] * (u - (Me[2] * Me[2]) - (MN[0] * MN[0])) +
                           coup2[i1] *
                               (-t + (Me[2] * Me[2]) + (MN[0] * MN[0]))) +
                      coup104[i1] *
                          (coup2[i1] * (u - (Me[2] * Me[2]) - (MN[0] * MN[0])) +
                           coup3[i1] *
                               (-t + (Me[2] * Me[2]) + (MN[0] * MN[0])))) *
                     Me[2] * MN[0])) -
              std::conj(coup105[j1]) *
                  (std::conj(coup107[j1]) *
                       (2 * coup104[i1] * (Me[2] * Me[2]) *
                            (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                             2 * coup3[i1] * (MN[0] * MN[0])) +
                        coup103[i1] *
                            (-2 * coup3[i1] * (s - 2 * (Me[2] * Me[2])) *
                                 (MN[0] * MN[0]) +
                             coup2[i1] *
                                 ((s * s) + (t * t) - (u * u) +
                                  2 * u * (Me[2] * Me[2]) +
                                  2 * u * (MN[0] * MN[0]) +
                                  4 * (Me[2] * Me[2]) * (MN[0] * MN[0]) -
                                  2 * s * ((Me[2] * Me[2]) + (MN[0] * MN[0])) -
                                  2 * t *
                                      ((Me[2] * Me[2]) + (MN[0] * MN[0]))))) +
                   2 * std::conj(coup108[j1]) *
                       (coup103[i1] * (coup3[i1] * (u - (Me[2] * Me[2]) -
                                                    (MN[0] * MN[0])) +
                                       coup2[i1] * (-t + (Me[2] * Me[2]) +
                                                    (MN[0] * MN[0]))) +
                        coup104[i1] * (coup2[i1] * (u - (Me[2] * Me[2]) -
                                                    (MN[0] * MN[0])) +
                                       coup3[i1] * (-t + (Me[2] * Me[2]) +
                                                    (MN[0] * MN[0])))) *
                       Me[2] * MN[0])) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (Mse[j1] * Mse[j1]))) +
             (-(std::conj(coup106[j1]) *
                (std::conj(coup108[j1]) *
                     (2 * coup103[i1] * (Me[2] * Me[2]) *
                          (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                           2 * coup2[i1] * (MN[0] * MN[0])) +
                      coup104[i1] *
                          (-2 * coup2[i1] * (s - 2 * (Me[2] * Me[2])) *
                               (MN[0] * MN[0]) +
                           coup3[i1] *
                               ((s * s) - (t * t) +
                                (u - 2 * (Me[2] * Me[2])) *
                                    (u - 2 * (MN[0] * MN[0])) -
                                2 * s * ((Me[2] * Me[2]) + (MN[0] * MN[0])) +
                                2 * t * ((Me[2] * Me[2]) + (MN[0] * MN[0]))))) +
                 2 * std::conj(coup107[j1]) *
                     (coup103[i1] *
                          (coup3[i1] * (t - (Me[2] * Me[2]) - (MN[0] * MN[0])) +
                           coup2[i1] *
                               (-u + (Me[2] * Me[2]) + (MN[0] * MN[0]))) +
                      coup104[i1] *
                          (coup2[i1] * (t - (Me[2] * Me[2]) - (MN[0] * MN[0])) +
                           coup3[i1] *
                               (-u + (Me[2] * Me[2]) + (MN[0] * MN[0])))) *
                     Me[2] * MN[0])) -
              std::conj(coup105[j1]) *
                  (std::conj(coup107[j1]) *
                       (2 * coup104[i1] * (Me[2] * Me[2]) *
                            (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                             2 * coup3[i1] * (MN[0] * MN[0])) +
                        coup103[i1] *
                            (-2 * coup3[i1] * (s - 2 * (Me[2] * Me[2])) *
                                 (MN[0] * MN[0]) +
                             coup2[i1] *
                                 ((s * s) - (t * t) +
                                  (u - 2 * (Me[2] * Me[2])) *
                                      (u - 2 * (MN[0] * MN[0])) -
                                  2 * s * ((Me[2] * Me[2]) + (MN[0] * MN[0])) +
                                  2 * t *
                                      ((Me[2] * Me[2]) + (MN[0] * MN[0]))))) +
                   2 * std::conj(coup108[j1]) *
                       (coup103[i1] * (coup3[i1] * (t - (Me[2] * Me[2]) -
                                                    (MN[0] * MN[0])) +
                                       coup2[i1] * (-u + (Me[2] * Me[2]) +
                                                    (MN[0] * MN[0]))) +
                        coup104[i1] * (coup2[i1] * (t - (Me[2] * Me[2]) -
                                                    (MN[0] * MN[0])) +
                                       coup3[i1] * (-u + (Me[2] * Me[2]) +
                                                    (MN[0] * MN[0])))) *
                       Me[2] * MN[0])) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (Mse[j1] * Mse[j1]))),
         i1, 6, j1, 6)

    SUM2(
        (std::conj(coup106[j1]) *
             (-2 * std::conj(coup107[j1]) *
                  (coup106[i1] * MN[0] *
                       (coup108[i1] * (-u + (Me[2] * Me[2]) + (MN[0] * MN[0])) *
                            Me[2] +
                        coup107[i1] * (s - 2 * (Me[2] * Me[2])) * MN[0]) +
                   coup105[i1] * Me[2] *
                       (coup108[i1] * (s - 2 * (MN[0] * MN[0])) * Me[2] +
                        coup107[i1] * (-u + (Me[2] * Me[2]) + (MN[0] * MN[0])) *
                            MN[0])) +
              std::conj(coup108[j1]) *
                  (-2 * coup105[i1] * Me[2] * MN[0] *
                       (coup108[i1] * (-t + (Me[2] * Me[2]) + (MN[0] * MN[0])) +
                        2 * coup107[i1] * Me[2] * MN[0]) +
                   coup106[i1] *
                       (coup108[i1] *
                            ((s * s) - (t * t) - (u * u) +
                             2 * u * (Me[2] * Me[2]) -
                             2 * (Me[2] * Me[2] * Me[2] * Me[2]) +
                             2 * u * (MN[0] * MN[0]) -
                             2 * s * ((Me[2] * Me[2]) + (MN[0] * MN[0])) +
                             2 * t * ((Me[2] * Me[2]) + (MN[0] * MN[0])) -
                             2 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                        2 * coup107[i1] *
                            (-t + (Me[2] * Me[2]) + (MN[0] * MN[0])) * Me[2] *
                            MN[0]))) +
         std::conj(coup105[j1]) *
             (-2 * std::conj(coup108[j1]) *
                  (coup105[i1] * MN[0] *
                       (coup107[i1] * (-u + (Me[2] * Me[2]) + (MN[0] * MN[0])) *
                            Me[2] +
                        coup108[i1] * (s - 2 * (Me[2] * Me[2])) * MN[0]) +
                   coup106[i1] * Me[2] *
                       (coup107[i1] * (s - 2 * (MN[0] * MN[0])) * Me[2] +
                        coup108[i1] * (-u + (Me[2] * Me[2]) + (MN[0] * MN[0])) *
                            MN[0])) +
              std::conj(coup107[j1]) *
                  (-2 * coup106[i1] * Me[2] * MN[0] *
                       (coup107[i1] * (-t + (Me[2] * Me[2]) + (MN[0] * MN[0])) +
                        2 * coup108[i1] * Me[2] * MN[0]) +
                   coup105[i1] *
                       (coup107[i1] *
                            ((s * s) - (t * t) - (u * u) +
                             2 * u * (Me[2] * Me[2]) -
                             2 * (Me[2] * Me[2] * Me[2] * Me[2]) +
                             2 * u * (MN[0] * MN[0]) -
                             2 * s * ((Me[2] * Me[2]) + (MN[0] * MN[0])) +
                             2 * t * ((Me[2] * Me[2]) + (MN[0] * MN[0])) -
                             2 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                        2 * coup108[i1] *
                            (-t + (Me[2] * Me[2]) + (MN[0] * MN[0])) * Me[2] *
                            MN[0])))) /
            ((t - (Mse[i1] * Mse[i1])) * (u - (Mse[j1] * Mse[j1]))),
        j1, 6, i1, 6)

    return res.real();
}
double DT::N1N1u1u1(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t = -0.5 * s + (MN[0] * MN[0]) +
                             (cos_t * sqrt(s - 4 * (MN[0] * MN[0])) *
                              sqrt(s - 4 * (Mu[0] * Mu[0]))) /
                                 2. +
                             (Mu[0] * Mu[0]);
    std::complex<double> u = -s - t + 2 * (MN[0] * MN[0]) + 2 * (Mu[0] * Mu[0]);
    res +=
        (12 *
         (std::conj(coup112) *
              (std::conj(coup9) *
                   (coup112 *
                        (coup9 * ((-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) *
                                  (-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0]))) +
                         coup8 * (MN[0] * MN[0]) * (s - 2 * (Mu[0] * Mu[0]))) +
                    coup111 *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) *
                        (Mu[0] * Mu[0])) +
               std::conj(coup8) *
                   (coup112 *
                        (coup8 * ((-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) *
                                  (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0]))) +
                         coup9 * (MN[0] * MN[0]) * (s - 2 * (Mu[0] * Mu[0]))) +
                    coup111 *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) *
                        (Mu[0] * Mu[0]))) +
          std::conj(coup111) *
              (std::conj(coup9) *
                   (coup111 *
                        (coup9 * ((-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) *
                                  (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0]))) +
                         coup8 * (MN[0] * MN[0]) * (s - 2 * (Mu[0] * Mu[0]))) +
                    coup112 *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) *
                        (Mu[0] * Mu[0])) +
               std::conj(coup8) *
                   (coup111 *
                        (coup8 * ((-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) *
                                  (-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0]))) +
                         coup9 * (MN[0] * MN[0]) * (s - 2 * (Mu[0] * Mu[0]))) +
                    coup112 *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) *
                        (Mu[0] * Mu[0]))))) /
        (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1(
        (12 *
         (std::conj(coup112) *
              (std::conj(coup9) *
                   (coup110[i1] *
                        (coup3[i1] * (t - (MN[0] * MN[0]) - (Mu[0] * Mu[0])) +
                         coup2[i1] * (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0]))) +
                    coup109[i1] *
                        (coup2[i1] * (t - (MN[0] * MN[0]) - (Mu[0] * Mu[0])) +
                         coup3[i1] *
                             (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0])))) +
               std::conj(coup8) *
                   (coup109[i1] *
                        (coup3[i1] * (t - (MN[0] * MN[0]) - (Mu[0] * Mu[0])) +
                         coup2[i1] * (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0]))) +
                    coup110[i1] *
                        (coup2[i1] * (t - (MN[0] * MN[0]) - (Mu[0] * Mu[0])) +
                         coup3[i1] *
                             (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0]))))) +
          std::conj(coup111) *
              (std::conj(coup8) *
                   (coup110[i1] *
                        (coup3[i1] * (t - (MN[0] * MN[0]) - (Mu[0] * Mu[0])) +
                         coup2[i1] * (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0]))) +
                    coup109[i1] *
                        (coup2[i1] * (t - (MN[0] * MN[0]) - (Mu[0] * Mu[0])) +
                         coup3[i1] *
                             (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0])))) +
               std::conj(coup9) *
                   (coup109[i1] *
                        (coup3[i1] * (t - (MN[0] * MN[0]) - (Mu[0] * Mu[0])) +
                         coup2[i1] * (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0]))) +
                    coup110[i1] *
                        (coup2[i1] * (t - (MN[0] * MN[0]) - (Mu[0] * Mu[0])) +
                         coup3[i1] *
                             (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0])))))) *
         MN[0] * Mu[0]) /
            ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
        i1, 6)

    SUM1(
        (12 *
         (std::conj(coup113[j1]) *
              (std::conj(coup116[j1]) *
                   (coup111 *
                        (coup8 * ((-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) *
                                  (-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0]))) +
                         coup9 * (MN[0] * MN[0]) * (s - 2 * (Mu[0] * Mu[0]))) +
                    coup112 *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) *
                        (Mu[0] * Mu[0])) +
               std::conj(coup115[j1]) *
                   (2 * coup111 * coup8 *
                        (-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                    2 * coup112 * coup9 *
                        (-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                    coup112 * coup8 * (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                    coup111 * coup9 *
                        (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0]))) *
                   MN[0] * Mu[0]) +
          std::conj(coup114[j1]) *
              (std::conj(coup115[j1]) *
                   (coup112 *
                        (coup9 * ((-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) *
                                  (-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0]))) +
                         coup8 * (MN[0] * MN[0]) * (s - 2 * (Mu[0] * Mu[0]))) +
                    coup111 *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) *
                        (Mu[0] * Mu[0])) +
               std::conj(coup116[j1]) *
                   (2 * coup111 * coup8 *
                        (-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                    2 * coup112 * coup9 *
                        (-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                    coup112 * coup8 * (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                    coup111 * coup9 *
                        (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0]))) *
                   MN[0] * Mu[0]))) /
                ((-s + (MZ * MZ)) * (t - (Msu[j1] * Msu[j1]))) -
            (12 *
             (std::conj(coup113[j1]) *
                  (std::conj(coup116[j1]) *
                       (coup111 *
                            (coup9 *
                                 ((-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) *
                                  (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0]))) +
                             coup8 * (MN[0] * MN[0]) *
                                 (s - 2 * (Mu[0] * Mu[0]))) +
                        coup112 *
                            (coup9 * (s - 2 * (MN[0] * MN[0])) +
                             4 * coup8 * (MN[0] * MN[0])) *
                            (Mu[0] * Mu[0])) +
                   std::conj(coup115[j1]) *
                       (coup111 * coup8 *
                            (-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                        coup112 * coup9 *
                            (-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                        2 * coup112 * coup8 *
                            (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                        2 * coup111 * coup9 *
                            (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0]))) *
                       MN[0] * Mu[0]) +
              std::conj(coup114[j1]) *
                  (std::conj(coup115[j1]) *
                       (coup112 *
                            (coup8 *
                                 ((-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) *
                                  (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0]))) +
                             coup9 * (MN[0] * MN[0]) *
                                 (s - 2 * (Mu[0] * Mu[0]))) +
                        coup111 *
                            (coup8 * (s - 2 * (MN[0] * MN[0])) +
                             4 * coup9 * (MN[0] * MN[0])) *
                            (Mu[0] * Mu[0])) +
                   std::conj(coup116[j1]) *
                       (coup111 * coup8 *
                            (-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                        coup112 * coup9 *
                            (-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                        2 * coup112 * coup8 *
                            (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                        2 * coup111 * coup9 *
                            (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0]))) *
                       MN[0] * Mu[0]))) /
                ((-s + (MZ * MZ)) * (u - (Msu[j1] * Msu[j1]))),
        j1, 6)

    SUM2((3 *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0]))) *
          (std::conj(coup110[j1]) * (coup110[i1] * (s - 2 * (Mu[0] * Mu[0])) -
                                     2 * coup109[i1] * (Mu[0] * Mu[0])) +
           std::conj(coup109[j1]) * (coup109[i1] * (s - 2 * (Mu[0] * Mu[0])) -
                                     2 * coup110[i1] * (Mu[0] * Mu[0])))) /
                 ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))) +
             (3 *
              (std::conj(coup114[j1]) *
                   (coup114[i1] * (t - (MN[0] * MN[0]) - (Mu[0] * Mu[0])) -
                    2 * coup113[i1] * MN[0] * Mu[0]) +
               std::conj(coup113[j1]) *
                   (coup113[i1] * (t - (MN[0] * MN[0]) - (Mu[0] * Mu[0])) -
                    2 * coup114[i1] * MN[0] * Mu[0])) *
              (std::conj(coup116[j1]) *
                   (coup116[i1] * (t - (MN[0] * MN[0]) - (Mu[0] * Mu[0])) -
                    2 * coup115[i1] * MN[0] * Mu[0]) +
               std::conj(coup115[j1]) *
                   (coup115[i1] * (t - (MN[0] * MN[0]) - (Mu[0] * Mu[0])) -
                    2 * coup116[i1] * MN[0] * Mu[0]))) /
                 ((t - (Msu[i1] * Msu[i1])) * (t - (Msu[j1] * Msu[j1]))) +
             (3 *
              (std::conj(coup114[j1]) *
                   (coup114[i1] * (u - (MN[0] * MN[0]) - (Mu[0] * Mu[0])) -
                    2 * coup113[i1] * MN[0] * Mu[0]) +
               std::conj(coup113[j1]) *
                   (coup113[i1] * (u - (MN[0] * MN[0]) - (Mu[0] * Mu[0])) -
                    2 * coup114[i1] * MN[0] * Mu[0])) *
              (std::conj(coup116[j1]) *
                   (coup116[i1] * (u - (MN[0] * MN[0]) - (Mu[0] * Mu[0])) -
                    2 * coup115[i1] * MN[0] * Mu[0]) +
               std::conj(coup115[j1]) *
                   (coup115[i1] * (u - (MN[0] * MN[0]) - (Mu[0] * Mu[0])) -
                    2 * coup116[i1] * MN[0] * Mu[0]))) /
                 ((u - (Msu[i1] * Msu[i1])) * (u - (Msu[j1] * Msu[j1]))) -
             (3 *
              (std::conj(coup114[j1]) *
                   (std::conj(coup116[j1]) *
                        (2 * coup109[i1] *
                             (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup2[i1] * (MN[0] * MN[0])) *
                             (Mu[0] * Mu[0]) +
                         coup110[i1] *
                             (-2 * coup2[i1] * (MN[0] * MN[0]) *
                                  (s - 2 * (Mu[0] * Mu[0])) +
                              coup3[i1] *
                                  ((s * s) + (t * t) - (u * u) +
                                   2 * u * (MN[0] * MN[0]) +
                                   2 * u * (Mu[0] * Mu[0]) +
                                   4 * (MN[0] * MN[0]) * (Mu[0] * Mu[0]) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[0] * Mu[0])) -
                                   2 * t *
                                       ((MN[0] * MN[0]) + (Mu[0] * Mu[0]))))) +
                    2 * std::conj(coup115[j1]) *
                        (coup109[i1] * (coup3[i1] * (u - (MN[0] * MN[0]) -
                                                     (Mu[0] * Mu[0])) +
                                        coup2[i1] * (-t + (MN[0] * MN[0]) +
                                                     (Mu[0] * Mu[0]))) +
                         coup110[i1] * (coup2[i1] * (u - (MN[0] * MN[0]) -
                                                     (Mu[0] * Mu[0])) +
                                        coup3[i1] * (-t + (MN[0] * MN[0]) +
                                                     (Mu[0] * Mu[0])))) *
                        MN[0] * Mu[0]) +
               std::conj(coup113[j1]) *
                   (std::conj(coup115[j1]) *
                        (2 * coup110[i1] *
                             (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup3[i1] * (MN[0] * MN[0])) *
                             (Mu[0] * Mu[0]) +
                         coup109[i1] *
                             (-2 * coup3[i1] * (MN[0] * MN[0]) *
                                  (s - 2 * (Mu[0] * Mu[0])) +
                              coup2[i1] *
                                  ((s * s) + (t * t) - (u * u) +
                                   2 * u * (MN[0] * MN[0]) +
                                   2 * u * (Mu[0] * Mu[0]) +
                                   4 * (MN[0] * MN[0]) * (Mu[0] * Mu[0]) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[0] * Mu[0])) -
                                   2 * t *
                                       ((MN[0] * MN[0]) + (Mu[0] * Mu[0]))))) +
                    2 * std::conj(coup116[j1]) *
                        (coup109[i1] * (coup3[i1] * (u - (MN[0] * MN[0]) -
                                                     (Mu[0] * Mu[0])) +
                                        coup2[i1] * (-t + (MN[0] * MN[0]) +
                                                     (Mu[0] * Mu[0]))) +
                         coup110[i1] * (coup2[i1] * (u - (MN[0] * MN[0]) -
                                                     (Mu[0] * Mu[0])) +
                                        coup3[i1] * (-t + (MN[0] * MN[0]) +
                                                     (Mu[0] * Mu[0])))) *
                        MN[0] * Mu[0]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (Msu[j1] * Msu[j1]))) -
             (3 *
              (std::conj(coup114[j1]) *
                   (std::conj(coup116[j1]) *
                        (2 * coup109[i1] *
                             (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup2[i1] * (MN[0] * MN[0])) *
                             (Mu[0] * Mu[0]) +
                         coup110[i1] *
                             (-2 * coup2[i1] * (MN[0] * MN[0]) *
                                  (s - 2 * (Mu[0] * Mu[0])) +
                              coup3[i1] *
                                  ((s * s) - (t * t) +
                                   (u - 2 * (MN[0] * MN[0])) *
                                       (u - 2 * (Mu[0] * Mu[0])) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                                   2 * t *
                                       ((MN[0] * MN[0]) + (Mu[0] * Mu[0]))))) +
                    2 * std::conj(coup115[j1]) *
                        (coup109[i1] * (coup3[i1] * (t - (MN[0] * MN[0]) -
                                                     (Mu[0] * Mu[0])) +
                                        coup2[i1] * (-u + (MN[0] * MN[0]) +
                                                     (Mu[0] * Mu[0]))) +
                         coup110[i1] * (coup2[i1] * (t - (MN[0] * MN[0]) -
                                                     (Mu[0] * Mu[0])) +
                                        coup3[i1] * (-u + (MN[0] * MN[0]) +
                                                     (Mu[0] * Mu[0])))) *
                        MN[0] * Mu[0]) +
               std::conj(coup113[j1]) *
                   (std::conj(coup115[j1]) *
                        (2 * coup110[i1] *
                             (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup3[i1] * (MN[0] * MN[0])) *
                             (Mu[0] * Mu[0]) +
                         coup109[i1] *
                             (-2 * coup3[i1] * (MN[0] * MN[0]) *
                                  (s - 2 * (Mu[0] * Mu[0])) +
                              coup2[i1] *
                                  ((s * s) - (t * t) +
                                   (u - 2 * (MN[0] * MN[0])) *
                                       (u - 2 * (Mu[0] * Mu[0])) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                                   2 * t *
                                       ((MN[0] * MN[0]) + (Mu[0] * Mu[0]))))) +
                    2 * std::conj(coup116[j1]) *
                        (coup109[i1] * (coup3[i1] * (t - (MN[0] * MN[0]) -
                                                     (Mu[0] * Mu[0])) +
                                        coup2[i1] * (-u + (MN[0] * MN[0]) +
                                                     (Mu[0] * Mu[0]))) +
                         coup110[i1] * (coup2[i1] * (t - (MN[0] * MN[0]) -
                                                     (Mu[0] * Mu[0])) +
                                        coup3[i1] * (-u + (MN[0] * MN[0]) +
                                                     (Mu[0] * Mu[0])))) *
                        MN[0] * Mu[0]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (Msu[j1] * Msu[j1]))) +
             (3 *
              (std::conj(coup114[j1]) *
                   (-2 * std::conj(coup115[j1]) *
                        (coup113[i1] * Mu[0] *
                             (coup115[i1] *
                                  (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) *
                                  MN[0] +
                              coup116[i1] * (s - 2 * (MN[0] * MN[0])) * Mu[0]) +
                         coup114[i1] * MN[0] *
                             (coup115[i1] * (s - 2 * (Mu[0] * Mu[0])) * MN[0] +
                              coup116[i1] *
                                  (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) *
                                  Mu[0])) +
                    std::conj(coup116[j1]) *
                        (-2 * coup113[i1] * MN[0] * Mu[0] *
                             (coup116[i1] *
                                  (-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                              2 * coup115[i1] * MN[0] * Mu[0]) +
                         coup114[i1] *
                             (coup116[i1] *
                                  ((s * s) - (t * t) - (u * u) +
                                   2 * u * (MN[0] * MN[0]) -
                                   2 * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                   2 * u * (Mu[0] * Mu[0]) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                                   2 * t * ((MN[0] * MN[0]) + (Mu[0] * Mu[0])) -
                                   2 * (Mu[0] * Mu[0] * Mu[0] * Mu[0])) -
                              2 * coup115[i1] *
                                  (-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) *
                                  MN[0] * Mu[0]))) +
               std::conj(coup113[j1]) *
                   (-2 * std::conj(coup116[j1]) *
                        (coup114[i1] * Mu[0] *
                             (coup116[i1] *
                                  (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) *
                                  MN[0] +
                              coup115[i1] * (s - 2 * (MN[0] * MN[0])) * Mu[0]) +
                         coup113[i1] * MN[0] *
                             (coup116[i1] * (s - 2 * (Mu[0] * Mu[0])) * MN[0] +
                              coup115[i1] *
                                  (-u + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) *
                                  Mu[0])) +
                    std::conj(coup115[j1]) *
                        (-2 * coup114[i1] * MN[0] * Mu[0] *
                             (coup115[i1] *
                                  (-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                              2 * coup116[i1] * MN[0] * Mu[0]) +
                         coup113[i1] *
                             (coup115[i1] *
                                  ((s * s) - (t * t) - (u * u) +
                                   2 * u * (MN[0] * MN[0]) -
                                   2 * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                   2 * u * (Mu[0] * Mu[0]) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[0] * Mu[0])) +
                                   2 * t * ((MN[0] * MN[0]) + (Mu[0] * Mu[0])) -
                                   2 * (Mu[0] * Mu[0] * Mu[0] * Mu[0])) -
                              2 * coup116[i1] *
                                  (-t + (MN[0] * MN[0]) + (Mu[0] * Mu[0])) *
                                  MN[0] * Mu[0]))))) /
                 ((t - (Msu[i1] * Msu[i1])) * (u - (Msu[j1] * Msu[j1]))),
         i1, 6, j1, 6)

    return res.real();
}
double DT::N1N1u2u2(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t = -0.5 * s + (MN[0] * MN[0]) +
                             (cos_t * sqrt(s - 4 * (MN[0] * MN[0])) *
                              sqrt(s - 4 * (Mu[1] * Mu[1]))) /
                                 2. +
                             (Mu[1] * Mu[1]);
    std::complex<double> u = -s - t + 2 * (MN[0] * MN[0]) + 2 * (Mu[1] * Mu[1]);
    res +=
        (12 *
         (std::conj(coup112) *
              (std::conj(coup9) *
                   (coup112 *
                        (coup9 * ((-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) *
                                  (-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1]))) +
                         coup8 * (MN[0] * MN[0]) * (s - 2 * (Mu[1] * Mu[1]))) +
                    coup111 *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) *
                        (Mu[1] * Mu[1])) +
               std::conj(coup8) *
                   (coup112 *
                        (coup8 * ((-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) *
                                  (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1]))) +
                         coup9 * (MN[0] * MN[0]) * (s - 2 * (Mu[1] * Mu[1]))) +
                    coup111 *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) *
                        (Mu[1] * Mu[1]))) +
          std::conj(coup111) *
              (std::conj(coup9) *
                   (coup111 *
                        (coup9 * ((-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) *
                                  (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1]))) +
                         coup8 * (MN[0] * MN[0]) * (s - 2 * (Mu[1] * Mu[1]))) +
                    coup112 *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) *
                        (Mu[1] * Mu[1])) +
               std::conj(coup8) *
                   (coup111 *
                        (coup8 * ((-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) *
                                  (-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1]))) +
                         coup9 * (MN[0] * MN[0]) * (s - 2 * (Mu[1] * Mu[1]))) +
                    coup112 *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) *
                        (Mu[1] * Mu[1]))))) /
        (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1(
        (12 *
         (std::conj(coup112) *
              (std::conj(coup9) *
                   (coup118[i1] *
                        (coup3[i1] * (t - (MN[0] * MN[0]) - (Mu[1] * Mu[1])) +
                         coup2[i1] * (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1]))) +
                    coup117[i1] *
                        (coup2[i1] * (t - (MN[0] * MN[0]) - (Mu[1] * Mu[1])) +
                         coup3[i1] *
                             (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1])))) +
               std::conj(coup8) *
                   (coup117[i1] *
                        (coup3[i1] * (t - (MN[0] * MN[0]) - (Mu[1] * Mu[1])) +
                         coup2[i1] * (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1]))) +
                    coup118[i1] *
                        (coup2[i1] * (t - (MN[0] * MN[0]) - (Mu[1] * Mu[1])) +
                         coup3[i1] *
                             (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1]))))) +
          std::conj(coup111) *
              (std::conj(coup8) *
                   (coup118[i1] *
                        (coup3[i1] * (t - (MN[0] * MN[0]) - (Mu[1] * Mu[1])) +
                         coup2[i1] * (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1]))) +
                    coup117[i1] *
                        (coup2[i1] * (t - (MN[0] * MN[0]) - (Mu[1] * Mu[1])) +
                         coup3[i1] *
                             (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1])))) +
               std::conj(coup9) *
                   (coup117[i1] *
                        (coup3[i1] * (t - (MN[0] * MN[0]) - (Mu[1] * Mu[1])) +
                         coup2[i1] * (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1]))) +
                    coup118[i1] *
                        (coup2[i1] * (t - (MN[0] * MN[0]) - (Mu[1] * Mu[1])) +
                         coup3[i1] *
                             (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1])))))) *
         MN[0] * Mu[1]) /
            ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
        i1, 6)

    SUM1(
        (12 *
         (std::conj(coup119[j1]) *
              (std::conj(coup122[j1]) *
                   (coup111 *
                        (coup8 * ((-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) *
                                  (-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1]))) +
                         coup9 * (MN[0] * MN[0]) * (s - 2 * (Mu[1] * Mu[1]))) +
                    coup112 *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) *
                        (Mu[1] * Mu[1])) +
               std::conj(coup121[j1]) *
                   (2 * coup111 * coup8 *
                        (-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                    2 * coup112 * coup9 *
                        (-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                    coup112 * coup8 * (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                    coup111 * coup9 *
                        (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1]))) *
                   MN[0] * Mu[1]) +
          std::conj(coup120[j1]) *
              (std::conj(coup121[j1]) *
                   (coup112 *
                        (coup9 * ((-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) *
                                  (-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1]))) +
                         coup8 * (MN[0] * MN[0]) * (s - 2 * (Mu[1] * Mu[1]))) +
                    coup111 *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) *
                        (Mu[1] * Mu[1])) +
               std::conj(coup122[j1]) *
                   (2 * coup111 * coup8 *
                        (-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                    2 * coup112 * coup9 *
                        (-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                    coup112 * coup8 * (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                    coup111 * coup9 *
                        (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1]))) *
                   MN[0] * Mu[1]))) /
                ((-s + (MZ * MZ)) * (t - (Msu[j1] * Msu[j1]))) -
            (12 *
             (std::conj(coup119[j1]) *
                  (std::conj(coup122[j1]) *
                       (coup111 *
                            (coup9 *
                                 ((-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) *
                                  (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1]))) +
                             coup8 * (MN[0] * MN[0]) *
                                 (s - 2 * (Mu[1] * Mu[1]))) +
                        coup112 *
                            (coup9 * (s - 2 * (MN[0] * MN[0])) +
                             4 * coup8 * (MN[0] * MN[0])) *
                            (Mu[1] * Mu[1])) +
                   std::conj(coup121[j1]) *
                       (coup111 * coup8 *
                            (-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                        coup112 * coup9 *
                            (-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                        2 * coup112 * coup8 *
                            (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                        2 * coup111 * coup9 *
                            (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1]))) *
                       MN[0] * Mu[1]) +
              std::conj(coup120[j1]) *
                  (std::conj(coup121[j1]) *
                       (coup112 *
                            (coup8 *
                                 ((-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) *
                                  (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1]))) +
                             coup9 * (MN[0] * MN[0]) *
                                 (s - 2 * (Mu[1] * Mu[1]))) +
                        coup111 *
                            (coup8 * (s - 2 * (MN[0] * MN[0])) +
                             4 * coup9 * (MN[0] * MN[0])) *
                            (Mu[1] * Mu[1])) +
                   std::conj(coup122[j1]) *
                       (coup111 * coup8 *
                            (-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                        coup112 * coup9 *
                            (-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                        2 * coup112 * coup8 *
                            (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                        2 * coup111 * coup9 *
                            (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1]))) *
                       MN[0] * Mu[1]))) /
                ((-s + (MZ * MZ)) * (u - (Msu[j1] * Msu[j1]))),
        j1, 6)

    SUM2((3 *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0]))) *
          (std::conj(coup118[j1]) * (coup118[i1] * (s - 2 * (Mu[1] * Mu[1])) -
                                     2 * coup117[i1] * (Mu[1] * Mu[1])) +
           std::conj(coup117[j1]) * (coup117[i1] * (s - 2 * (Mu[1] * Mu[1])) -
                                     2 * coup118[i1] * (Mu[1] * Mu[1])))) /
                 ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))) +
             (3 *
              (std::conj(coup120[j1]) *
                   (coup120[i1] * (t - (MN[0] * MN[0]) - (Mu[1] * Mu[1])) -
                    2 * coup119[i1] * MN[0] * Mu[1]) +
               std::conj(coup119[j1]) *
                   (coup119[i1] * (t - (MN[0] * MN[0]) - (Mu[1] * Mu[1])) -
                    2 * coup120[i1] * MN[0] * Mu[1])) *
              (std::conj(coup122[j1]) *
                   (coup122[i1] * (t - (MN[0] * MN[0]) - (Mu[1] * Mu[1])) -
                    2 * coup121[i1] * MN[0] * Mu[1]) +
               std::conj(coup121[j1]) *
                   (coup121[i1] * (t - (MN[0] * MN[0]) - (Mu[1] * Mu[1])) -
                    2 * coup122[i1] * MN[0] * Mu[1]))) /
                 ((t - (Msu[i1] * Msu[i1])) * (t - (Msu[j1] * Msu[j1]))) +
             (3 *
              (std::conj(coup120[j1]) *
                   (coup120[i1] * (u - (MN[0] * MN[0]) - (Mu[1] * Mu[1])) -
                    2 * coup119[i1] * MN[0] * Mu[1]) +
               std::conj(coup119[j1]) *
                   (coup119[i1] * (u - (MN[0] * MN[0]) - (Mu[1] * Mu[1])) -
                    2 * coup120[i1] * MN[0] * Mu[1])) *
              (std::conj(coup122[j1]) *
                   (coup122[i1] * (u - (MN[0] * MN[0]) - (Mu[1] * Mu[1])) -
                    2 * coup121[i1] * MN[0] * Mu[1]) +
               std::conj(coup121[j1]) *
                   (coup121[i1] * (u - (MN[0] * MN[0]) - (Mu[1] * Mu[1])) -
                    2 * coup122[i1] * MN[0] * Mu[1]))) /
                 ((u - (Msu[i1] * Msu[i1])) * (u - (Msu[j1] * Msu[j1]))) -
             (3 *
              (std::conj(coup120[j1]) *
                   (std::conj(coup122[j1]) *
                        (2 * coup117[i1] *
                             (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup2[i1] * (MN[0] * MN[0])) *
                             (Mu[1] * Mu[1]) +
                         coup118[i1] *
                             (-2 * coup2[i1] * (MN[0] * MN[0]) *
                                  (s - 2 * (Mu[1] * Mu[1])) +
                              coup3[i1] *
                                  ((s * s) + (t * t) - (u * u) +
                                   2 * u * (MN[0] * MN[0]) +
                                   2 * u * (Mu[1] * Mu[1]) +
                                   4 * (MN[0] * MN[0]) * (Mu[1] * Mu[1]) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[1] * Mu[1])) -
                                   2 * t *
                                       ((MN[0] * MN[0]) + (Mu[1] * Mu[1]))))) +
                    2 * std::conj(coup121[j1]) *
                        (coup117[i1] * (coup3[i1] * (u - (MN[0] * MN[0]) -
                                                     (Mu[1] * Mu[1])) +
                                        coup2[i1] * (-t + (MN[0] * MN[0]) +
                                                     (Mu[1] * Mu[1]))) +
                         coup118[i1] * (coup2[i1] * (u - (MN[0] * MN[0]) -
                                                     (Mu[1] * Mu[1])) +
                                        coup3[i1] * (-t + (MN[0] * MN[0]) +
                                                     (Mu[1] * Mu[1])))) *
                        MN[0] * Mu[1]) +
               std::conj(coup119[j1]) *
                   (std::conj(coup121[j1]) *
                        (2 * coup118[i1] *
                             (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup3[i1] * (MN[0] * MN[0])) *
                             (Mu[1] * Mu[1]) +
                         coup117[i1] *
                             (-2 * coup3[i1] * (MN[0] * MN[0]) *
                                  (s - 2 * (Mu[1] * Mu[1])) +
                              coup2[i1] *
                                  ((s * s) + (t * t) - (u * u) +
                                   2 * u * (MN[0] * MN[0]) +
                                   2 * u * (Mu[1] * Mu[1]) +
                                   4 * (MN[0] * MN[0]) * (Mu[1] * Mu[1]) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[1] * Mu[1])) -
                                   2 * t *
                                       ((MN[0] * MN[0]) + (Mu[1] * Mu[1]))))) +
                    2 * std::conj(coup122[j1]) *
                        (coup117[i1] * (coup3[i1] * (u - (MN[0] * MN[0]) -
                                                     (Mu[1] * Mu[1])) +
                                        coup2[i1] * (-t + (MN[0] * MN[0]) +
                                                     (Mu[1] * Mu[1]))) +
                         coup118[i1] * (coup2[i1] * (u - (MN[0] * MN[0]) -
                                                     (Mu[1] * Mu[1])) +
                                        coup3[i1] * (-t + (MN[0] * MN[0]) +
                                                     (Mu[1] * Mu[1])))) *
                        MN[0] * Mu[1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (Msu[j1] * Msu[j1]))) -
             (3 *
              (std::conj(coup120[j1]) *
                   (std::conj(coup122[j1]) *
                        (2 * coup117[i1] *
                             (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup2[i1] * (MN[0] * MN[0])) *
                             (Mu[1] * Mu[1]) +
                         coup118[i1] *
                             (-2 * coup2[i1] * (MN[0] * MN[0]) *
                                  (s - 2 * (Mu[1] * Mu[1])) +
                              coup3[i1] *
                                  ((s * s) - (t * t) +
                                   (u - 2 * (MN[0] * MN[0])) *
                                       (u - 2 * (Mu[1] * Mu[1])) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                                   2 * t *
                                       ((MN[0] * MN[0]) + (Mu[1] * Mu[1]))))) +
                    2 * std::conj(coup121[j1]) *
                        (coup117[i1] * (coup3[i1] * (t - (MN[0] * MN[0]) -
                                                     (Mu[1] * Mu[1])) +
                                        coup2[i1] * (-u + (MN[0] * MN[0]) +
                                                     (Mu[1] * Mu[1]))) +
                         coup118[i1] * (coup2[i1] * (t - (MN[0] * MN[0]) -
                                                     (Mu[1] * Mu[1])) +
                                        coup3[i1] * (-u + (MN[0] * MN[0]) +
                                                     (Mu[1] * Mu[1])))) *
                        MN[0] * Mu[1]) +
               std::conj(coup119[j1]) *
                   (std::conj(coup121[j1]) *
                        (2 * coup118[i1] *
                             (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup3[i1] * (MN[0] * MN[0])) *
                             (Mu[1] * Mu[1]) +
                         coup117[i1] *
                             (-2 * coup3[i1] * (MN[0] * MN[0]) *
                                  (s - 2 * (Mu[1] * Mu[1])) +
                              coup2[i1] *
                                  ((s * s) - (t * t) +
                                   (u - 2 * (MN[0] * MN[0])) *
                                       (u - 2 * (Mu[1] * Mu[1])) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                                   2 * t *
                                       ((MN[0] * MN[0]) + (Mu[1] * Mu[1]))))) +
                    2 * std::conj(coup122[j1]) *
                        (coup117[i1] * (coup3[i1] * (t - (MN[0] * MN[0]) -
                                                     (Mu[1] * Mu[1])) +
                                        coup2[i1] * (-u + (MN[0] * MN[0]) +
                                                     (Mu[1] * Mu[1]))) +
                         coup118[i1] * (coup2[i1] * (t - (MN[0] * MN[0]) -
                                                     (Mu[1] * Mu[1])) +
                                        coup3[i1] * (-u + (MN[0] * MN[0]) +
                                                     (Mu[1] * Mu[1])))) *
                        MN[0] * Mu[1]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (Msu[j1] * Msu[j1]))) +
             (3 *
              (std::conj(coup120[j1]) *
                   (-2 * std::conj(coup121[j1]) *
                        (coup119[i1] * Mu[1] *
                             (coup121[i1] *
                                  (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) *
                                  MN[0] +
                              coup122[i1] * (s - 2 * (MN[0] * MN[0])) * Mu[1]) +
                         coup120[i1] * MN[0] *
                             (coup121[i1] * (s - 2 * (Mu[1] * Mu[1])) * MN[0] +
                              coup122[i1] *
                                  (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) *
                                  Mu[1])) +
                    std::conj(coup122[j1]) *
                        (-2 * coup119[i1] * MN[0] * Mu[1] *
                             (coup122[i1] *
                                  (-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                              2 * coup121[i1] * MN[0] * Mu[1]) +
                         coup120[i1] *
                             (coup122[i1] *
                                  ((s * s) - (t * t) - (u * u) +
                                   2 * u * (MN[0] * MN[0]) -
                                   2 * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                   2 * u * (Mu[1] * Mu[1]) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                                   2 * t * ((MN[0] * MN[0]) + (Mu[1] * Mu[1])) -
                                   2 * (Mu[1] * Mu[1] * Mu[1] * Mu[1])) -
                              2 * coup121[i1] *
                                  (-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) *
                                  MN[0] * Mu[1]))) +
               std::conj(coup119[j1]) *
                   (-2 * std::conj(coup122[j1]) *
                        (coup120[i1] * Mu[1] *
                             (coup122[i1] *
                                  (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) *
                                  MN[0] +
                              coup121[i1] * (s - 2 * (MN[0] * MN[0])) * Mu[1]) +
                         coup119[i1] * MN[0] *
                             (coup122[i1] * (s - 2 * (Mu[1] * Mu[1])) * MN[0] +
                              coup121[i1] *
                                  (-u + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) *
                                  Mu[1])) +
                    std::conj(coup121[j1]) *
                        (-2 * coup120[i1] * MN[0] * Mu[1] *
                             (coup121[i1] *
                                  (-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                              2 * coup122[i1] * MN[0] * Mu[1]) +
                         coup119[i1] *
                             (coup121[i1] *
                                  ((s * s) - (t * t) - (u * u) +
                                   2 * u * (MN[0] * MN[0]) -
                                   2 * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                   2 * u * (Mu[1] * Mu[1]) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[1] * Mu[1])) +
                                   2 * t * ((MN[0] * MN[0]) + (Mu[1] * Mu[1])) -
                                   2 * (Mu[1] * Mu[1] * Mu[1] * Mu[1])) -
                              2 * coup122[i1] *
                                  (-t + (MN[0] * MN[0]) + (Mu[1] * Mu[1])) *
                                  MN[0] * Mu[1]))))) /
                 ((t - (Msu[i1] * Msu[i1])) * (u - (Msu[j1] * Msu[j1]))),
         i1, 6, j1, 6)

    return res.real();
}
double DT::N1N1u3u3(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t = -0.5 * s + (MN[0] * MN[0]) +
                             (cos_t * sqrt(s - 4 * (MN[0] * MN[0])) *
                              sqrt(s - 4 * (Mu[2] * Mu[2]))) /
                                 2. +
                             (Mu[2] * Mu[2]);
    std::complex<double> u = -s - t + 2 * (MN[0] * MN[0]) + 2 * (Mu[2] * Mu[2]);
    res +=
        (12 *
         (std::conj(coup112) *
              (std::conj(coup9) *
                   (coup112 *
                        (coup9 * ((-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) *
                                  (-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2]))) +
                         coup8 * (MN[0] * MN[0]) * (s - 2 * (Mu[2] * Mu[2]))) +
                    coup111 *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) *
                        (Mu[2] * Mu[2])) +
               std::conj(coup8) *
                   (coup112 *
                        (coup8 * ((-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) *
                                  (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2]))) +
                         coup9 * (MN[0] * MN[0]) * (s - 2 * (Mu[2] * Mu[2]))) +
                    coup111 *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) *
                        (Mu[2] * Mu[2]))) +
          std::conj(coup111) *
              (std::conj(coup9) *
                   (coup111 *
                        (coup9 * ((-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) *
                                  (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2]))) +
                         coup8 * (MN[0] * MN[0]) * (s - 2 * (Mu[2] * Mu[2]))) +
                    coup112 *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) *
                        (Mu[2] * Mu[2])) +
               std::conj(coup8) *
                   (coup111 *
                        (coup8 * ((-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) *
                                  (-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2]))) +
                         coup9 * (MN[0] * MN[0]) * (s - 2 * (Mu[2] * Mu[2]))) +
                    coup112 *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) *
                        (Mu[2] * Mu[2]))))) /
        (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1(
        (12 *
         (std::conj(coup112) *
              (std::conj(coup9) *
                   (coup124[i1] *
                        (coup3[i1] * (t - (MN[0] * MN[0]) - (Mu[2] * Mu[2])) +
                         coup2[i1] * (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2]))) +
                    coup123[i1] *
                        (coup2[i1] * (t - (MN[0] * MN[0]) - (Mu[2] * Mu[2])) +
                         coup3[i1] *
                             (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2])))) +
               std::conj(coup8) *
                   (coup123[i1] *
                        (coup3[i1] * (t - (MN[0] * MN[0]) - (Mu[2] * Mu[2])) +
                         coup2[i1] * (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2]))) +
                    coup124[i1] *
                        (coup2[i1] * (t - (MN[0] * MN[0]) - (Mu[2] * Mu[2])) +
                         coup3[i1] *
                             (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2]))))) +
          std::conj(coup111) *
              (std::conj(coup8) *
                   (coup124[i1] *
                        (coup3[i1] * (t - (MN[0] * MN[0]) - (Mu[2] * Mu[2])) +
                         coup2[i1] * (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2]))) +
                    coup123[i1] *
                        (coup2[i1] * (t - (MN[0] * MN[0]) - (Mu[2] * Mu[2])) +
                         coup3[i1] *
                             (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2])))) +
               std::conj(coup9) *
                   (coup123[i1] *
                        (coup3[i1] * (t - (MN[0] * MN[0]) - (Mu[2] * Mu[2])) +
                         coup2[i1] * (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2]))) +
                    coup124[i1] *
                        (coup2[i1] * (t - (MN[0] * MN[0]) - (Mu[2] * Mu[2])) +
                         coup3[i1] *
                             (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2])))))) *
         MN[0] * Mu[2]) /
            ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
        i1, 6)

    SUM1(
        (12 *
         (std::conj(coup125[j1]) *
              (std::conj(coup128[j1]) *
                   (coup111 *
                        (coup8 * ((-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) *
                                  (-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2]))) +
                         coup9 * (MN[0] * MN[0]) * (s - 2 * (Mu[2] * Mu[2]))) +
                    coup112 *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) *
                        (Mu[2] * Mu[2])) +
               std::conj(coup127[j1]) *
                   (2 * coup111 * coup8 *
                        (-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                    2 * coup112 * coup9 *
                        (-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                    coup112 * coup8 * (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                    coup111 * coup9 *
                        (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2]))) *
                   MN[0] * Mu[2]) +
          std::conj(coup126[j1]) *
              (std::conj(coup127[j1]) *
                   (coup112 *
                        (coup9 * ((-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) *
                                  (-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2]))) +
                         coup8 * (MN[0] * MN[0]) * (s - 2 * (Mu[2] * Mu[2]))) +
                    coup111 *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) *
                        (Mu[2] * Mu[2])) +
               std::conj(coup128[j1]) *
                   (2 * coup111 * coup8 *
                        (-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                    2 * coup112 * coup9 *
                        (-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                    coup112 * coup8 * (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                    coup111 * coup9 *
                        (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2]))) *
                   MN[0] * Mu[2]))) /
                ((-s + (MZ * MZ)) * (t - (Msu[j1] * Msu[j1]))) -
            (12 *
             (std::conj(coup125[j1]) *
                  (std::conj(coup128[j1]) *
                       (coup111 *
                            (coup9 *
                                 ((-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) *
                                  (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2]))) +
                             coup8 * (MN[0] * MN[0]) *
                                 (s - 2 * (Mu[2] * Mu[2]))) +
                        coup112 *
                            (coup9 * (s - 2 * (MN[0] * MN[0])) +
                             4 * coup8 * (MN[0] * MN[0])) *
                            (Mu[2] * Mu[2])) +
                   std::conj(coup127[j1]) *
                       (coup111 * coup8 *
                            (-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                        coup112 * coup9 *
                            (-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                        2 * coup112 * coup8 *
                            (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                        2 * coup111 * coup9 *
                            (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2]))) *
                       MN[0] * Mu[2]) +
              std::conj(coup126[j1]) *
                  (std::conj(coup127[j1]) *
                       (coup112 *
                            (coup8 *
                                 ((-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) *
                                  (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2]))) +
                             coup9 * (MN[0] * MN[0]) *
                                 (s - 2 * (Mu[2] * Mu[2]))) +
                        coup111 *
                            (coup8 * (s - 2 * (MN[0] * MN[0])) +
                             4 * coup9 * (MN[0] * MN[0])) *
                            (Mu[2] * Mu[2])) +
                   std::conj(coup128[j1]) *
                       (coup111 * coup8 *
                            (-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                        coup112 * coup9 *
                            (-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                        2 * coup112 * coup8 *
                            (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                        2 * coup111 * coup9 *
                            (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2]))) *
                       MN[0] * Mu[2]))) /
                ((-s + (MZ * MZ)) * (u - (Msu[j1] * Msu[j1]))),
        j1, 6)

    SUM2((3 *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0]))) *
          (std::conj(coup124[j1]) * (coup124[i1] * (s - 2 * (Mu[2] * Mu[2])) -
                                     2 * coup123[i1] * (Mu[2] * Mu[2])) +
           std::conj(coup123[j1]) * (coup123[i1] * (s - 2 * (Mu[2] * Mu[2])) -
                                     2 * coup124[i1] * (Mu[2] * Mu[2])))) /
                 ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))) +
             (3 *
              (std::conj(coup126[j1]) *
                   (coup126[i1] * (t - (MN[0] * MN[0]) - (Mu[2] * Mu[2])) -
                    2 * coup125[i1] * MN[0] * Mu[2]) +
               std::conj(coup125[j1]) *
                   (coup125[i1] * (t - (MN[0] * MN[0]) - (Mu[2] * Mu[2])) -
                    2 * coup126[i1] * MN[0] * Mu[2])) *
              (std::conj(coup128[j1]) *
                   (coup128[i1] * (t - (MN[0] * MN[0]) - (Mu[2] * Mu[2])) -
                    2 * coup127[i1] * MN[0] * Mu[2]) +
               std::conj(coup127[j1]) *
                   (coup127[i1] * (t - (MN[0] * MN[0]) - (Mu[2] * Mu[2])) -
                    2 * coup128[i1] * MN[0] * Mu[2]))) /
                 ((t - (Msu[i1] * Msu[i1])) * (t - (Msu[j1] * Msu[j1]))) +
             (3 *
              (std::conj(coup126[j1]) *
                   (coup126[i1] * (u - (MN[0] * MN[0]) - (Mu[2] * Mu[2])) -
                    2 * coup125[i1] * MN[0] * Mu[2]) +
               std::conj(coup125[j1]) *
                   (coup125[i1] * (u - (MN[0] * MN[0]) - (Mu[2] * Mu[2])) -
                    2 * coup126[i1] * MN[0] * Mu[2])) *
              (std::conj(coup128[j1]) *
                   (coup128[i1] * (u - (MN[0] * MN[0]) - (Mu[2] * Mu[2])) -
                    2 * coup127[i1] * MN[0] * Mu[2]) +
               std::conj(coup127[j1]) *
                   (coup127[i1] * (u - (MN[0] * MN[0]) - (Mu[2] * Mu[2])) -
                    2 * coup128[i1] * MN[0] * Mu[2]))) /
                 ((u - (Msu[i1] * Msu[i1])) * (u - (Msu[j1] * Msu[j1]))) -
             (3 *
              (std::conj(coup126[j1]) *
                   (std::conj(coup128[j1]) *
                        (2 * coup123[i1] *
                             (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup2[i1] * (MN[0] * MN[0])) *
                             (Mu[2] * Mu[2]) +
                         coup124[i1] *
                             (-2 * coup2[i1] * (MN[0] * MN[0]) *
                                  (s - 2 * (Mu[2] * Mu[2])) +
                              coup3[i1] *
                                  ((s * s) + (t * t) - (u * u) +
                                   2 * u * (MN[0] * MN[0]) +
                                   2 * u * (Mu[2] * Mu[2]) +
                                   4 * (MN[0] * MN[0]) * (Mu[2] * Mu[2]) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[2] * Mu[2])) -
                                   2 * t *
                                       ((MN[0] * MN[0]) + (Mu[2] * Mu[2]))))) +
                    2 * std::conj(coup127[j1]) *
                        (coup123[i1] * (coup3[i1] * (u - (MN[0] * MN[0]) -
                                                     (Mu[2] * Mu[2])) +
                                        coup2[i1] * (-t + (MN[0] * MN[0]) +
                                                     (Mu[2] * Mu[2]))) +
                         coup124[i1] * (coup2[i1] * (u - (MN[0] * MN[0]) -
                                                     (Mu[2] * Mu[2])) +
                                        coup3[i1] * (-t + (MN[0] * MN[0]) +
                                                     (Mu[2] * Mu[2])))) *
                        MN[0] * Mu[2]) +
               std::conj(coup125[j1]) *
                   (std::conj(coup127[j1]) *
                        (2 * coup124[i1] *
                             (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup3[i1] * (MN[0] * MN[0])) *
                             (Mu[2] * Mu[2]) +
                         coup123[i1] *
                             (-2 * coup3[i1] * (MN[0] * MN[0]) *
                                  (s - 2 * (Mu[2] * Mu[2])) +
                              coup2[i1] *
                                  ((s * s) + (t * t) - (u * u) +
                                   2 * u * (MN[0] * MN[0]) +
                                   2 * u * (Mu[2] * Mu[2]) +
                                   4 * (MN[0] * MN[0]) * (Mu[2] * Mu[2]) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[2] * Mu[2])) -
                                   2 * t *
                                       ((MN[0] * MN[0]) + (Mu[2] * Mu[2]))))) +
                    2 * std::conj(coup128[j1]) *
                        (coup123[i1] * (coup3[i1] * (u - (MN[0] * MN[0]) -
                                                     (Mu[2] * Mu[2])) +
                                        coup2[i1] * (-t + (MN[0] * MN[0]) +
                                                     (Mu[2] * Mu[2]))) +
                         coup124[i1] * (coup2[i1] * (u - (MN[0] * MN[0]) -
                                                     (Mu[2] * Mu[2])) +
                                        coup3[i1] * (-t + (MN[0] * MN[0]) +
                                                     (Mu[2] * Mu[2])))) *
                        MN[0] * Mu[2]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (Msu[j1] * Msu[j1]))) -
             (3 *
              (std::conj(coup126[j1]) *
                   (std::conj(coup128[j1]) *
                        (2 * coup123[i1] *
                             (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup2[i1] * (MN[0] * MN[0])) *
                             (Mu[2] * Mu[2]) +
                         coup124[i1] *
                             (-2 * coup2[i1] * (MN[0] * MN[0]) *
                                  (s - 2 * (Mu[2] * Mu[2])) +
                              coup3[i1] *
                                  ((s * s) - (t * t) +
                                   (u - 2 * (MN[0] * MN[0])) *
                                       (u - 2 * (Mu[2] * Mu[2])) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                                   2 * t *
                                       ((MN[0] * MN[0]) + (Mu[2] * Mu[2]))))) +
                    2 * std::conj(coup127[j1]) *
                        (coup123[i1] * (coup3[i1] * (t - (MN[0] * MN[0]) -
                                                     (Mu[2] * Mu[2])) +
                                        coup2[i1] * (-u + (MN[0] * MN[0]) +
                                                     (Mu[2] * Mu[2]))) +
                         coup124[i1] * (coup2[i1] * (t - (MN[0] * MN[0]) -
                                                     (Mu[2] * Mu[2])) +
                                        coup3[i1] * (-u + (MN[0] * MN[0]) +
                                                     (Mu[2] * Mu[2])))) *
                        MN[0] * Mu[2]) +
               std::conj(coup125[j1]) *
                   (std::conj(coup127[j1]) *
                        (2 * coup124[i1] *
                             (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup3[i1] * (MN[0] * MN[0])) *
                             (Mu[2] * Mu[2]) +
                         coup123[i1] *
                             (-2 * coup3[i1] * (MN[0] * MN[0]) *
                                  (s - 2 * (Mu[2] * Mu[2])) +
                              coup2[i1] *
                                  ((s * s) - (t * t) +
                                   (u - 2 * (MN[0] * MN[0])) *
                                       (u - 2 * (Mu[2] * Mu[2])) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                                   2 * t *
                                       ((MN[0] * MN[0]) + (Mu[2] * Mu[2]))))) +
                    2 * std::conj(coup128[j1]) *
                        (coup123[i1] * (coup3[i1] * (t - (MN[0] * MN[0]) -
                                                     (Mu[2] * Mu[2])) +
                                        coup2[i1] * (-u + (MN[0] * MN[0]) +
                                                     (Mu[2] * Mu[2]))) +
                         coup124[i1] * (coup2[i1] * (t - (MN[0] * MN[0]) -
                                                     (Mu[2] * Mu[2])) +
                                        coup3[i1] * (-u + (MN[0] * MN[0]) +
                                                     (Mu[2] * Mu[2])))) *
                        MN[0] * Mu[2]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (Msu[j1] * Msu[j1]))) +
             (3 *
              (std::conj(coup126[j1]) *
                   (-2 * std::conj(coup127[j1]) *
                        (coup125[i1] * Mu[2] *
                             (coup127[i1] *
                                  (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) *
                                  MN[0] +
                              coup128[i1] * (s - 2 * (MN[0] * MN[0])) * Mu[2]) +
                         coup126[i1] * MN[0] *
                             (coup127[i1] * (s - 2 * (Mu[2] * Mu[2])) * MN[0] +
                              coup128[i1] *
                                  (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) *
                                  Mu[2])) +
                    std::conj(coup128[j1]) *
                        (-2 * coup125[i1] * MN[0] * Mu[2] *
                             (coup128[i1] *
                                  (-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                              2 * coup127[i1] * MN[0] * Mu[2]) +
                         coup126[i1] *
                             (coup128[i1] *
                                  ((s * s) - (t * t) - (u * u) +
                                   2 * u * (MN[0] * MN[0]) -
                                   2 * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                   2 * u * (Mu[2] * Mu[2]) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                                   2 * t * ((MN[0] * MN[0]) + (Mu[2] * Mu[2])) -
                                   2 * (Mu[2] * Mu[2] * Mu[2] * Mu[2])) -
                              2 * coup127[i1] *
                                  (-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) *
                                  MN[0] * Mu[2]))) +
               std::conj(coup125[j1]) *
                   (-2 * std::conj(coup128[j1]) *
                        (coup126[i1] * Mu[2] *
                             (coup128[i1] *
                                  (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) *
                                  MN[0] +
                              coup127[i1] * (s - 2 * (MN[0] * MN[0])) * Mu[2]) +
                         coup125[i1] * MN[0] *
                             (coup128[i1] * (s - 2 * (Mu[2] * Mu[2])) * MN[0] +
                              coup127[i1] *
                                  (-u + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) *
                                  Mu[2])) +
                    std::conj(coup127[j1]) *
                        (-2 * coup126[i1] * MN[0] * Mu[2] *
                             (coup127[i1] *
                                  (-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                              2 * coup128[i1] * MN[0] * Mu[2]) +
                         coup125[i1] *
                             (coup127[i1] *
                                  ((s * s) - (t * t) - (u * u) +
                                   2 * u * (MN[0] * MN[0]) -
                                   2 * (MN[0] * MN[0] * MN[0] * MN[0]) +
                                   2 * u * (Mu[2] * Mu[2]) -
                                   2 * s * ((MN[0] * MN[0]) + (Mu[2] * Mu[2])) +
                                   2 * t * ((MN[0] * MN[0]) + (Mu[2] * Mu[2])) -
                                   2 * (Mu[2] * Mu[2] * Mu[2] * Mu[2])) -
                              2 * coup128[i1] *
                                  (-t + (MN[0] * MN[0]) + (Mu[2] * Mu[2])) *
                                  MN[0] * Mu[2]))))) /
                 ((t - (Msu[i1] * Msu[i1])) * (u - (Msu[j1] * Msu[j1]))),
         i1, 6, j1, 6)

    return res.real();
}
double DT::N1N1d1d1(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t = -0.5 * s + (Md[0] * Md[0]) +
                             (cos_t * sqrt(s - 4 * (Md[0] * Md[0])) *
                              sqrt(s - 4 * (MN[0] * MN[0]))) /
                                 2. +
                             (MN[0] * MN[0]);
    std::complex<double> u = -s - t + 2 * (Md[0] * Md[0]) + 2 * (MN[0] * MN[0]);
    res +=
        (12 *
         (std::conj(coup131) *
              (std::conj(coup9) *
                   (coup132 * (Md[0] * Md[0]) *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) +
                    coup131 *
                        (coup9 * ((-u + (Md[0] * Md[0]) + (MN[0] * MN[0])) *
                                  (-u + (Md[0] * Md[0]) + (MN[0] * MN[0]))) +
                         coup8 * (s - 2 * (Md[0] * Md[0])) * (MN[0] * MN[0]))) +
               std::conj(coup8) *
                   (coup132 * (Md[0] * Md[0]) *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) +
                    coup131 *
                        (coup8 * ((-t + (Md[0] * Md[0]) + (MN[0] * MN[0])) *
                                  (-t + (Md[0] * Md[0]) + (MN[0] * MN[0]))) +
                         coup9 * (s - 2 * (Md[0] * Md[0])) *
                             (MN[0] * MN[0])))) +
          std::conj(coup132) *
              (std::conj(coup9) *
                   (coup131 * (Md[0] * Md[0]) *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) +
                    coup132 *
                        (coup9 * ((-t + (Md[0] * Md[0]) + (MN[0] * MN[0])) *
                                  (-t + (Md[0] * Md[0]) + (MN[0] * MN[0]))) +
                         coup8 * (s - 2 * (Md[0] * Md[0])) * (MN[0] * MN[0]))) +
               std::conj(coup8) *
                   (coup131 * (Md[0] * Md[0]) *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) +
                    coup132 *
                        (coup8 * ((-u + (Md[0] * Md[0]) + (MN[0] * MN[0])) *
                                  (-u + (Md[0] * Md[0]) + (MN[0] * MN[0]))) +
                         coup9 * (s - 2 * (Md[0] * Md[0])) *
                             (MN[0] * MN[0])))))) /
        (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1(
        (12 *
         (std::conj(coup132) *
              (std::conj(coup9) *
                   (coup130[i1] *
                        (coup3[i1] * (t - (Md[0] * Md[0]) - (MN[0] * MN[0])) +
                         coup2[i1] * (-u + (Md[0] * Md[0]) + (MN[0] * MN[0]))) +
                    coup129[i1] *
                        (coup2[i1] * (t - (Md[0] * Md[0]) - (MN[0] * MN[0])) +
                         coup3[i1] *
                             (-u + (Md[0] * Md[0]) + (MN[0] * MN[0])))) +
               std::conj(coup8) *
                   (coup129[i1] *
                        (coup3[i1] * (t - (Md[0] * Md[0]) - (MN[0] * MN[0])) +
                         coup2[i1] * (-u + (Md[0] * Md[0]) + (MN[0] * MN[0]))) +
                    coup130[i1] *
                        (coup2[i1] * (t - (Md[0] * Md[0]) - (MN[0] * MN[0])) +
                         coup3[i1] *
                             (-u + (Md[0] * Md[0]) + (MN[0] * MN[0]))))) +
          std::conj(coup131) *
              (std::conj(coup8) *
                   (coup130[i1] *
                        (coup3[i1] * (t - (Md[0] * Md[0]) - (MN[0] * MN[0])) +
                         coup2[i1] * (-u + (Md[0] * Md[0]) + (MN[0] * MN[0]))) +
                    coup129[i1] *
                        (coup2[i1] * (t - (Md[0] * Md[0]) - (MN[0] * MN[0])) +
                         coup3[i1] *
                             (-u + (Md[0] * Md[0]) + (MN[0] * MN[0])))) +
               std::conj(coup9) *
                   (coup129[i1] *
                        (coup3[i1] * (t - (Md[0] * Md[0]) - (MN[0] * MN[0])) +
                         coup2[i1] * (-u + (Md[0] * Md[0]) + (MN[0] * MN[0]))) +
                    coup130[i1] *
                        (coup2[i1] * (t - (Md[0] * Md[0]) - (MN[0] * MN[0])) +
                         coup3[i1] *
                             (-u + (Md[0] * Md[0]) + (MN[0] * MN[0])))))) *
         Md[0] * MN[0]) /
            ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
        i1, 6)

    SUM1(
        (12 *
         (std::conj(coup133[j1]) *
              (std::conj(coup136[j1]) *
                   (coup132 * (Md[0] * Md[0]) *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) +
                    coup131 *
                        (coup8 * ((-t + (Md[0] * Md[0]) + (MN[0] * MN[0])) *
                                  (-t + (Md[0] * Md[0]) + (MN[0] * MN[0]))) +
                         coup9 * (s - 2 * (Md[0] * Md[0])) * (MN[0] * MN[0]))) +
               std::conj(coup135[j1]) *
                   (2 * coup131 * coup8 *
                        (-t + (Md[0] * Md[0]) + (MN[0] * MN[0])) +
                    2 * coup132 * coup9 *
                        (-t + (Md[0] * Md[0]) + (MN[0] * MN[0])) +
                    coup132 * coup8 * (-u + (Md[0] * Md[0]) + (MN[0] * MN[0])) +
                    coup131 * coup9 *
                        (-u + (Md[0] * Md[0]) + (MN[0] * MN[0]))) *
                   Md[0] * MN[0]) +
          std::conj(coup134[j1]) *
              (std::conj(coup135[j1]) *
                   (coup131 * (Md[0] * Md[0]) *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) +
                    coup132 *
                        (coup9 * ((-t + (Md[0] * Md[0]) + (MN[0] * MN[0])) *
                                  (-t + (Md[0] * Md[0]) + (MN[0] * MN[0]))) +
                         coup8 * (s - 2 * (Md[0] * Md[0])) * (MN[0] * MN[0]))) +
               std::conj(coup136[j1]) *
                   (2 * coup131 * coup8 *
                        (-t + (Md[0] * Md[0]) + (MN[0] * MN[0])) +
                    2 * coup132 * coup9 *
                        (-t + (Md[0] * Md[0]) + (MN[0] * MN[0])) +
                    coup132 * coup8 * (-u + (Md[0] * Md[0]) + (MN[0] * MN[0])) +
                    coup131 * coup9 *
                        (-u + (Md[0] * Md[0]) + (MN[0] * MN[0]))) *
                   Md[0] * MN[0]))) /
                ((-s + (MZ * MZ)) * (t - (Msd[j1] * Msd[j1]))) -
            (12 *
             (std::conj(coup133[j1]) *
                  (std::conj(coup136[j1]) *
                       (coup132 * (Md[0] * Md[0]) *
                            (coup9 * (s - 2 * (MN[0] * MN[0])) +
                             4 * coup8 * (MN[0] * MN[0])) +
                        coup131 *
                            (coup9 *
                                 ((-u + (Md[0] * Md[0]) + (MN[0] * MN[0])) *
                                  (-u + (Md[0] * Md[0]) + (MN[0] * MN[0]))) +
                             coup8 * (s - 2 * (Md[0] * Md[0])) *
                                 (MN[0] * MN[0]))) +
                   std::conj(coup135[j1]) *
                       (coup131 * coup8 *
                            (-t + (Md[0] * Md[0]) + (MN[0] * MN[0])) +
                        coup132 * coup9 *
                            (-t + (Md[0] * Md[0]) + (MN[0] * MN[0])) +
                        2 * coup132 * coup8 *
                            (-u + (Md[0] * Md[0]) + (MN[0] * MN[0])) +
                        2 * coup131 * coup9 *
                            (-u + (Md[0] * Md[0]) + (MN[0] * MN[0]))) *
                       Md[0] * MN[0]) +
              std::conj(coup134[j1]) *
                  (std::conj(coup135[j1]) *
                       (coup131 * (Md[0] * Md[0]) *
                            (coup8 * (s - 2 * (MN[0] * MN[0])) +
                             4 * coup9 * (MN[0] * MN[0])) +
                        coup132 *
                            (coup8 *
                                 ((-u + (Md[0] * Md[0]) + (MN[0] * MN[0])) *
                                  (-u + (Md[0] * Md[0]) + (MN[0] * MN[0]))) +
                             coup9 * (s - 2 * (Md[0] * Md[0])) *
                                 (MN[0] * MN[0]))) +
                   std::conj(coup136[j1]) *
                       (coup131 * coup8 *
                            (-t + (Md[0] * Md[0]) + (MN[0] * MN[0])) +
                        coup132 * coup9 *
                            (-t + (Md[0] * Md[0]) + (MN[0] * MN[0])) +
                        2 * coup132 * coup8 *
                            (-u + (Md[0] * Md[0]) + (MN[0] * MN[0])) +
                        2 * coup131 * coup9 *
                            (-u + (Md[0] * Md[0]) + (MN[0] * MN[0]))) *
                       Md[0] * MN[0]))) /
                ((-s + (MZ * MZ)) * (u - (Msd[j1] * Msd[j1]))),
        j1, 6)

    SUM2((3 *
          (std::conj(coup130[j1]) * (coup130[i1] * (s - 2 * (Md[0] * Md[0])) -
                                     2 * coup129[i1] * (Md[0] * Md[0])) +
           std::conj(coup129[j1]) * (coup129[i1] * (s - 2 * (Md[0] * Md[0])) -
                                     2 * coup130[i1] * (Md[0] * Md[0]))) *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
                 ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))) +
             (3 *
              (std::conj(coup134[j1]) *
                   (coup134[i1] * (t - (Md[0] * Md[0]) - (MN[0] * MN[0])) -
                    2 * coup133[i1] * Md[0] * MN[0]) +
               std::conj(coup133[j1]) *
                   (coup133[i1] * (t - (Md[0] * Md[0]) - (MN[0] * MN[0])) -
                    2 * coup134[i1] * Md[0] * MN[0])) *
              (std::conj(coup136[j1]) *
                   (coup136[i1] * (t - (Md[0] * Md[0]) - (MN[0] * MN[0])) -
                    2 * coup135[i1] * Md[0] * MN[0]) +
               std::conj(coup135[j1]) *
                   (coup135[i1] * (t - (Md[0] * Md[0]) - (MN[0] * MN[0])) -
                    2 * coup136[i1] * Md[0] * MN[0]))) /
                 ((t - (Msd[i1] * Msd[i1])) * (t - (Msd[j1] * Msd[j1]))) +
             (3 *
              (std::conj(coup134[j1]) *
                   (coup134[i1] * (u - (Md[0] * Md[0]) - (MN[0] * MN[0])) -
                    2 * coup133[i1] * Md[0] * MN[0]) +
               std::conj(coup133[j1]) *
                   (coup133[i1] * (u - (Md[0] * Md[0]) - (MN[0] * MN[0])) -
                    2 * coup134[i1] * Md[0] * MN[0])) *
              (std::conj(coup136[j1]) *
                   (coup136[i1] * (u - (Md[0] * Md[0]) - (MN[0] * MN[0])) -
                    2 * coup135[i1] * Md[0] * MN[0]) +
               std::conj(coup135[j1]) *
                   (coup135[i1] * (u - (Md[0] * Md[0]) - (MN[0] * MN[0])) -
                    2 * coup136[i1] * Md[0] * MN[0]))) /
                 ((u - (Msd[i1] * Msd[i1])) * (u - (Msd[j1] * Msd[j1]))) -
             (3 *
              (std::conj(coup134[j1]) *
                   (std::conj(coup136[j1]) *
                        (2 * coup129[i1] * (Md[0] * Md[0]) *
                             (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup2[i1] * (MN[0] * MN[0])) +
                         coup130[i1] *
                             (-2 * coup2[i1] * (s - 2 * (Md[0] * Md[0])) *
                                  (MN[0] * MN[0]) +
                              coup3[i1] *
                                  ((s * s) + (t * t) - (u * u) +
                                   2 * u * (Md[0] * Md[0]) +
                                   2 * u * (MN[0] * MN[0]) +
                                   4 * (Md[0] * Md[0]) * (MN[0] * MN[0]) -
                                   2 * s * ((Md[0] * Md[0]) + (MN[0] * MN[0])) -
                                   2 * t *
                                       ((Md[0] * Md[0]) + (MN[0] * MN[0]))))) +
                    2 * std::conj(coup135[j1]) *
                        (coup129[i1] * (coup3[i1] * (u - (Md[0] * Md[0]) -
                                                     (MN[0] * MN[0])) +
                                        coup2[i1] * (-t + (Md[0] * Md[0]) +
                                                     (MN[0] * MN[0]))) +
                         coup130[i1] * (coup2[i1] * (u - (Md[0] * Md[0]) -
                                                     (MN[0] * MN[0])) +
                                        coup3[i1] * (-t + (Md[0] * Md[0]) +
                                                     (MN[0] * MN[0])))) *
                        Md[0] * MN[0]) +
               std::conj(coup133[j1]) *
                   (std::conj(coup135[j1]) *
                        (2 * coup130[i1] * (Md[0] * Md[0]) *
                             (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup3[i1] * (MN[0] * MN[0])) +
                         coup129[i1] *
                             (-2 * coup3[i1] * (s - 2 * (Md[0] * Md[0])) *
                                  (MN[0] * MN[0]) +
                              coup2[i1] *
                                  ((s * s) + (t * t) - (u * u) +
                                   2 * u * (Md[0] * Md[0]) +
                                   2 * u * (MN[0] * MN[0]) +
                                   4 * (Md[0] * Md[0]) * (MN[0] * MN[0]) -
                                   2 * s * ((Md[0] * Md[0]) + (MN[0] * MN[0])) -
                                   2 * t *
                                       ((Md[0] * Md[0]) + (MN[0] * MN[0]))))) +
                    2 * std::conj(coup136[j1]) *
                        (coup129[i1] * (coup3[i1] * (u - (Md[0] * Md[0]) -
                                                     (MN[0] * MN[0])) +
                                        coup2[i1] * (-t + (Md[0] * Md[0]) +
                                                     (MN[0] * MN[0]))) +
                         coup130[i1] * (coup2[i1] * (u - (Md[0] * Md[0]) -
                                                     (MN[0] * MN[0])) +
                                        coup3[i1] * (-t + (Md[0] * Md[0]) +
                                                     (MN[0] * MN[0])))) *
                        Md[0] * MN[0]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (Msd[j1] * Msd[j1]))) -
             (3 *
              (std::conj(coup134[j1]) *
                   (std::conj(coup136[j1]) *
                        (2 * coup129[i1] * (Md[0] * Md[0]) *
                             (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup2[i1] * (MN[0] * MN[0])) +
                         coup130[i1] *
                             (-2 * coup2[i1] * (s - 2 * (Md[0] * Md[0])) *
                                  (MN[0] * MN[0]) +
                              coup3[i1] *
                                  ((s * s) - (t * t) +
                                   (u - 2 * (Md[0] * Md[0])) *
                                       (u - 2 * (MN[0] * MN[0])) -
                                   2 * s * ((Md[0] * Md[0]) + (MN[0] * MN[0])) +
                                   2 * t *
                                       ((Md[0] * Md[0]) + (MN[0] * MN[0]))))) +
                    2 * std::conj(coup135[j1]) *
                        (coup129[i1] * (coup3[i1] * (t - (Md[0] * Md[0]) -
                                                     (MN[0] * MN[0])) +
                                        coup2[i1] * (-u + (Md[0] * Md[0]) +
                                                     (MN[0] * MN[0]))) +
                         coup130[i1] * (coup2[i1] * (t - (Md[0] * Md[0]) -
                                                     (MN[0] * MN[0])) +
                                        coup3[i1] * (-u + (Md[0] * Md[0]) +
                                                     (MN[0] * MN[0])))) *
                        Md[0] * MN[0]) +
               std::conj(coup133[j1]) *
                   (std::conj(coup135[j1]) *
                        (2 * coup130[i1] * (Md[0] * Md[0]) *
                             (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup3[i1] * (MN[0] * MN[0])) +
                         coup129[i1] *
                             (-2 * coup3[i1] * (s - 2 * (Md[0] * Md[0])) *
                                  (MN[0] * MN[0]) +
                              coup2[i1] *
                                  ((s * s) - (t * t) +
                                   (u - 2 * (Md[0] * Md[0])) *
                                       (u - 2 * (MN[0] * MN[0])) -
                                   2 * s * ((Md[0] * Md[0]) + (MN[0] * MN[0])) +
                                   2 * t *
                                       ((Md[0] * Md[0]) + (MN[0] * MN[0]))))) +
                    2 * std::conj(coup136[j1]) *
                        (coup129[i1] * (coup3[i1] * (t - (Md[0] * Md[0]) -
                                                     (MN[0] * MN[0])) +
                                        coup2[i1] * (-u + (Md[0] * Md[0]) +
                                                     (MN[0] * MN[0]))) +
                         coup130[i1] * (coup2[i1] * (t - (Md[0] * Md[0]) -
                                                     (MN[0] * MN[0])) +
                                        coup3[i1] * (-u + (Md[0] * Md[0]) +
                                                     (MN[0] * MN[0])))) *
                        Md[0] * MN[0]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (Msd[j1] * Msd[j1]))) +
             (3 *
              (std::conj(coup134[j1]) *
                   (-2 * std::conj(coup135[j1]) *
                        (coup134[i1] * MN[0] *
                             (coup136[i1] *
                                  (-u + (Md[0] * Md[0]) + (MN[0] * MN[0])) *
                                  Md[0] +
                              coup135[i1] * (s - 2 * (Md[0] * Md[0])) * MN[0]) +
                         coup133[i1] * Md[0] *
                             (coup136[i1] * (s - 2 * (MN[0] * MN[0])) * Md[0] +
                              coup135[i1] *
                                  (-u + (Md[0] * Md[0]) + (MN[0] * MN[0])) *
                                  MN[0])) +
                    std::conj(coup136[j1]) *
                        (-2 * coup133[i1] * Md[0] * MN[0] *
                             (coup136[i1] *
                                  (-t + (Md[0] * Md[0]) + (MN[0] * MN[0])) +
                              2 * coup135[i1] * Md[0] * MN[0]) +
                         coup134[i1] *
                             (coup136[i1] *
                                  ((s * s) - (t * t) - (u * u) +
                                   2 * u * (Md[0] * Md[0]) -
                                   2 * (Md[0] * Md[0] * Md[0] * Md[0]) +
                                   2 * u * (MN[0] * MN[0]) -
                                   2 * s * ((Md[0] * Md[0]) + (MN[0] * MN[0])) +
                                   2 * t * ((Md[0] * Md[0]) + (MN[0] * MN[0])) -
                                   2 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                              2 * coup135[i1] *
                                  (-t + (Md[0] * Md[0]) + (MN[0] * MN[0])) *
                                  Md[0] * MN[0]))) +
               std::conj(coup133[j1]) *
                   (-2 * std::conj(coup136[j1]) *
                        (coup133[i1] * MN[0] *
                             (coup135[i1] *
                                  (-u + (Md[0] * Md[0]) + (MN[0] * MN[0])) *
                                  Md[0] +
                              coup136[i1] * (s - 2 * (Md[0] * Md[0])) * MN[0]) +
                         coup134[i1] * Md[0] *
                             (coup135[i1] * (s - 2 * (MN[0] * MN[0])) * Md[0] +
                              coup136[i1] *
                                  (-u + (Md[0] * Md[0]) + (MN[0] * MN[0])) *
                                  MN[0])) +
                    std::conj(coup135[j1]) *
                        (-2 * coup134[i1] * Md[0] * MN[0] *
                             (coup135[i1] *
                                  (-t + (Md[0] * Md[0]) + (MN[0] * MN[0])) +
                              2 * coup136[i1] * Md[0] * MN[0]) +
                         coup133[i1] *
                             (coup135[i1] *
                                  ((s * s) - (t * t) - (u * u) +
                                   2 * u * (Md[0] * Md[0]) -
                                   2 * (Md[0] * Md[0] * Md[0] * Md[0]) +
                                   2 * u * (MN[0] * MN[0]) -
                                   2 * s * ((Md[0] * Md[0]) + (MN[0] * MN[0])) +
                                   2 * t * ((Md[0] * Md[0]) + (MN[0] * MN[0])) -
                                   2 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                              2 * coup136[i1] *
                                  (-t + (Md[0] * Md[0]) + (MN[0] * MN[0])) *
                                  Md[0] * MN[0]))))) /
                 ((t - (Msd[i1] * Msd[i1])) * (u - (Msd[j1] * Msd[j1]))),
         i1, 6, j1, 6)

    return res.real();
}
double DT::N1N1d2d2(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t = -0.5 * s + (Md[1] * Md[1]) +
                             (cos_t * sqrt(s - 4 * (Md[1] * Md[1])) *
                              sqrt(s - 4 * (MN[0] * MN[0]))) /
                                 2. +
                             (MN[0] * MN[0]);
    std::complex<double> u = -s - t + 2 * (Md[1] * Md[1]) + 2 * (MN[0] * MN[0]);
    res +=
        (12 *
         (std::conj(coup131) *
              (std::conj(coup9) *
                   (coup132 * (Md[1] * Md[1]) *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) +
                    coup131 *
                        (coup9 * ((-u + (Md[1] * Md[1]) + (MN[0] * MN[0])) *
                                  (-u + (Md[1] * Md[1]) + (MN[0] * MN[0]))) +
                         coup8 * (s - 2 * (Md[1] * Md[1])) * (MN[0] * MN[0]))) +
               std::conj(coup8) *
                   (coup132 * (Md[1] * Md[1]) *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) +
                    coup131 *
                        (coup8 * ((-t + (Md[1] * Md[1]) + (MN[0] * MN[0])) *
                                  (-t + (Md[1] * Md[1]) + (MN[0] * MN[0]))) +
                         coup9 * (s - 2 * (Md[1] * Md[1])) *
                             (MN[0] * MN[0])))) +
          std::conj(coup132) *
              (std::conj(coup9) *
                   (coup131 * (Md[1] * Md[1]) *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) +
                    coup132 *
                        (coup9 * ((-t + (Md[1] * Md[1]) + (MN[0] * MN[0])) *
                                  (-t + (Md[1] * Md[1]) + (MN[0] * MN[0]))) +
                         coup8 * (s - 2 * (Md[1] * Md[1])) * (MN[0] * MN[0]))) +
               std::conj(coup8) *
                   (coup131 * (Md[1] * Md[1]) *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) +
                    coup132 *
                        (coup8 * ((-u + (Md[1] * Md[1]) + (MN[0] * MN[0])) *
                                  (-u + (Md[1] * Md[1]) + (MN[0] * MN[0]))) +
                         coup9 * (s - 2 * (Md[1] * Md[1])) *
                             (MN[0] * MN[0])))))) /
        (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1(
        (12 *
         (std::conj(coup132) *
              (std::conj(coup9) *
                   (coup138[i1] *
                        (coup3[i1] * (t - (Md[1] * Md[1]) - (MN[0] * MN[0])) +
                         coup2[i1] * (-u + (Md[1] * Md[1]) + (MN[0] * MN[0]))) +
                    coup137[i1] *
                        (coup2[i1] * (t - (Md[1] * Md[1]) - (MN[0] * MN[0])) +
                         coup3[i1] *
                             (-u + (Md[1] * Md[1]) + (MN[0] * MN[0])))) +
               std::conj(coup8) *
                   (coup137[i1] *
                        (coup3[i1] * (t - (Md[1] * Md[1]) - (MN[0] * MN[0])) +
                         coup2[i1] * (-u + (Md[1] * Md[1]) + (MN[0] * MN[0]))) +
                    coup138[i1] *
                        (coup2[i1] * (t - (Md[1] * Md[1]) - (MN[0] * MN[0])) +
                         coup3[i1] *
                             (-u + (Md[1] * Md[1]) + (MN[0] * MN[0]))))) +
          std::conj(coup131) *
              (std::conj(coup8) *
                   (coup138[i1] *
                        (coup3[i1] * (t - (Md[1] * Md[1]) - (MN[0] * MN[0])) +
                         coup2[i1] * (-u + (Md[1] * Md[1]) + (MN[0] * MN[0]))) +
                    coup137[i1] *
                        (coup2[i1] * (t - (Md[1] * Md[1]) - (MN[0] * MN[0])) +
                         coup3[i1] *
                             (-u + (Md[1] * Md[1]) + (MN[0] * MN[0])))) +
               std::conj(coup9) *
                   (coup137[i1] *
                        (coup3[i1] * (t - (Md[1] * Md[1]) - (MN[0] * MN[0])) +
                         coup2[i1] * (-u + (Md[1] * Md[1]) + (MN[0] * MN[0]))) +
                    coup138[i1] *
                        (coup2[i1] * (t - (Md[1] * Md[1]) - (MN[0] * MN[0])) +
                         coup3[i1] *
                             (-u + (Md[1] * Md[1]) + (MN[0] * MN[0])))))) *
         Md[1] * MN[0]) /
            ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
        i1, 6)

    SUM1(
        (12 *
         (std::conj(coup139[j1]) *
              (std::conj(coup142[j1]) *
                   (coup132 * (Md[1] * Md[1]) *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) +
                    coup131 *
                        (coup8 * ((-t + (Md[1] * Md[1]) + (MN[0] * MN[0])) *
                                  (-t + (Md[1] * Md[1]) + (MN[0] * MN[0]))) +
                         coup9 * (s - 2 * (Md[1] * Md[1])) * (MN[0] * MN[0]))) +
               std::conj(coup141[j1]) *
                   (2 * coup131 * coup8 *
                        (-t + (Md[1] * Md[1]) + (MN[0] * MN[0])) +
                    2 * coup132 * coup9 *
                        (-t + (Md[1] * Md[1]) + (MN[0] * MN[0])) +
                    coup132 * coup8 * (-u + (Md[1] * Md[1]) + (MN[0] * MN[0])) +
                    coup131 * coup9 *
                        (-u + (Md[1] * Md[1]) + (MN[0] * MN[0]))) *
                   Md[1] * MN[0]) +
          std::conj(coup140[j1]) *
              (std::conj(coup141[j1]) *
                   (coup131 * (Md[1] * Md[1]) *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) +
                    coup132 *
                        (coup9 * ((-t + (Md[1] * Md[1]) + (MN[0] * MN[0])) *
                                  (-t + (Md[1] * Md[1]) + (MN[0] * MN[0]))) +
                         coup8 * (s - 2 * (Md[1] * Md[1])) * (MN[0] * MN[0]))) +
               std::conj(coup142[j1]) *
                   (2 * coup131 * coup8 *
                        (-t + (Md[1] * Md[1]) + (MN[0] * MN[0])) +
                    2 * coup132 * coup9 *
                        (-t + (Md[1] * Md[1]) + (MN[0] * MN[0])) +
                    coup132 * coup8 * (-u + (Md[1] * Md[1]) + (MN[0] * MN[0])) +
                    coup131 * coup9 *
                        (-u + (Md[1] * Md[1]) + (MN[0] * MN[0]))) *
                   Md[1] * MN[0]))) /
                ((-s + (MZ * MZ)) * (t - (Msd[j1] * Msd[j1]))) -
            (12 *
             (std::conj(coup139[j1]) *
                  (std::conj(coup142[j1]) *
                       (coup132 * (Md[1] * Md[1]) *
                            (coup9 * (s - 2 * (MN[0] * MN[0])) +
                             4 * coup8 * (MN[0] * MN[0])) +
                        coup131 *
                            (coup9 *
                                 ((-u + (Md[1] * Md[1]) + (MN[0] * MN[0])) *
                                  (-u + (Md[1] * Md[1]) + (MN[0] * MN[0]))) +
                             coup8 * (s - 2 * (Md[1] * Md[1])) *
                                 (MN[0] * MN[0]))) +
                   std::conj(coup141[j1]) *
                       (coup131 * coup8 *
                            (-t + (Md[1] * Md[1]) + (MN[0] * MN[0])) +
                        coup132 * coup9 *
                            (-t + (Md[1] * Md[1]) + (MN[0] * MN[0])) +
                        2 * coup132 * coup8 *
                            (-u + (Md[1] * Md[1]) + (MN[0] * MN[0])) +
                        2 * coup131 * coup9 *
                            (-u + (Md[1] * Md[1]) + (MN[0] * MN[0]))) *
                       Md[1] * MN[0]) +
              std::conj(coup140[j1]) *
                  (std::conj(coup141[j1]) *
                       (coup131 * (Md[1] * Md[1]) *
                            (coup8 * (s - 2 * (MN[0] * MN[0])) +
                             4 * coup9 * (MN[0] * MN[0])) +
                        coup132 *
                            (coup8 *
                                 ((-u + (Md[1] * Md[1]) + (MN[0] * MN[0])) *
                                  (-u + (Md[1] * Md[1]) + (MN[0] * MN[0]))) +
                             coup9 * (s - 2 * (Md[1] * Md[1])) *
                                 (MN[0] * MN[0]))) +
                   std::conj(coup142[j1]) *
                       (coup131 * coup8 *
                            (-t + (Md[1] * Md[1]) + (MN[0] * MN[0])) +
                        coup132 * coup9 *
                            (-t + (Md[1] * Md[1]) + (MN[0] * MN[0])) +
                        2 * coup132 * coup8 *
                            (-u + (Md[1] * Md[1]) + (MN[0] * MN[0])) +
                        2 * coup131 * coup9 *
                            (-u + (Md[1] * Md[1]) + (MN[0] * MN[0]))) *
                       Md[1] * MN[0]))) /
                ((-s + (MZ * MZ)) * (u - (Msd[j1] * Msd[j1]))),
        j1, 6)

    SUM2((3 *
          (std::conj(coup138[j1]) * (coup138[i1] * (s - 2 * (Md[1] * Md[1])) -
                                     2 * coup137[i1] * (Md[1] * Md[1])) +
           std::conj(coup137[j1]) * (coup137[i1] * (s - 2 * (Md[1] * Md[1])) -
                                     2 * coup138[i1] * (Md[1] * Md[1]))) *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
                 ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))) +
             (3 *
              (std::conj(coup140[j1]) *
                   (coup140[i1] * (t - (Md[1] * Md[1]) - (MN[0] * MN[0])) -
                    2 * coup139[i1] * Md[1] * MN[0]) +
               std::conj(coup139[j1]) *
                   (coup139[i1] * (t - (Md[1] * Md[1]) - (MN[0] * MN[0])) -
                    2 * coup140[i1] * Md[1] * MN[0])) *
              (std::conj(coup142[j1]) *
                   (coup142[i1] * (t - (Md[1] * Md[1]) - (MN[0] * MN[0])) -
                    2 * coup141[i1] * Md[1] * MN[0]) +
               std::conj(coup141[j1]) *
                   (coup141[i1] * (t - (Md[1] * Md[1]) - (MN[0] * MN[0])) -
                    2 * coup142[i1] * Md[1] * MN[0]))) /
                 ((t - (Msd[i1] * Msd[i1])) * (t - (Msd[j1] * Msd[j1]))) +
             (3 *
              (std::conj(coup140[j1]) *
                   (coup140[i1] * (u - (Md[1] * Md[1]) - (MN[0] * MN[0])) -
                    2 * coup139[i1] * Md[1] * MN[0]) +
               std::conj(coup139[j1]) *
                   (coup139[i1] * (u - (Md[1] * Md[1]) - (MN[0] * MN[0])) -
                    2 * coup140[i1] * Md[1] * MN[0])) *
              (std::conj(coup142[j1]) *
                   (coup142[i1] * (u - (Md[1] * Md[1]) - (MN[0] * MN[0])) -
                    2 * coup141[i1] * Md[1] * MN[0]) +
               std::conj(coup141[j1]) *
                   (coup141[i1] * (u - (Md[1] * Md[1]) - (MN[0] * MN[0])) -
                    2 * coup142[i1] * Md[1] * MN[0]))) /
                 ((u - (Msd[i1] * Msd[i1])) * (u - (Msd[j1] * Msd[j1]))) -
             (3 *
              (std::conj(coup140[j1]) *
                   (std::conj(coup142[j1]) *
                        (2 * coup137[i1] * (Md[1] * Md[1]) *
                             (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup2[i1] * (MN[0] * MN[0])) +
                         coup138[i1] *
                             (-2 * coup2[i1] * (s - 2 * (Md[1] * Md[1])) *
                                  (MN[0] * MN[0]) +
                              coup3[i1] *
                                  ((s * s) + (t * t) - (u * u) +
                                   2 * u * (Md[1] * Md[1]) +
                                   2 * u * (MN[0] * MN[0]) +
                                   4 * (Md[1] * Md[1]) * (MN[0] * MN[0]) -
                                   2 * s * ((Md[1] * Md[1]) + (MN[0] * MN[0])) -
                                   2 * t *
                                       ((Md[1] * Md[1]) + (MN[0] * MN[0]))))) +
                    2 * std::conj(coup141[j1]) *
                        (coup137[i1] * (coup3[i1] * (u - (Md[1] * Md[1]) -
                                                     (MN[0] * MN[0])) +
                                        coup2[i1] * (-t + (Md[1] * Md[1]) +
                                                     (MN[0] * MN[0]))) +
                         coup138[i1] * (coup2[i1] * (u - (Md[1] * Md[1]) -
                                                     (MN[0] * MN[0])) +
                                        coup3[i1] * (-t + (Md[1] * Md[1]) +
                                                     (MN[0] * MN[0])))) *
                        Md[1] * MN[0]) +
               std::conj(coup139[j1]) *
                   (std::conj(coup141[j1]) *
                        (2 * coup138[i1] * (Md[1] * Md[1]) *
                             (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup3[i1] * (MN[0] * MN[0])) +
                         coup137[i1] *
                             (-2 * coup3[i1] * (s - 2 * (Md[1] * Md[1])) *
                                  (MN[0] * MN[0]) +
                              coup2[i1] *
                                  ((s * s) + (t * t) - (u * u) +
                                   2 * u * (Md[1] * Md[1]) +
                                   2 * u * (MN[0] * MN[0]) +
                                   4 * (Md[1] * Md[1]) * (MN[0] * MN[0]) -
                                   2 * s * ((Md[1] * Md[1]) + (MN[0] * MN[0])) -
                                   2 * t *
                                       ((Md[1] * Md[1]) + (MN[0] * MN[0]))))) +
                    2 * std::conj(coup142[j1]) *
                        (coup137[i1] * (coup3[i1] * (u - (Md[1] * Md[1]) -
                                                     (MN[0] * MN[0])) +
                                        coup2[i1] * (-t + (Md[1] * Md[1]) +
                                                     (MN[0] * MN[0]))) +
                         coup138[i1] * (coup2[i1] * (u - (Md[1] * Md[1]) -
                                                     (MN[0] * MN[0])) +
                                        coup3[i1] * (-t + (Md[1] * Md[1]) +
                                                     (MN[0] * MN[0])))) *
                        Md[1] * MN[0]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (Msd[j1] * Msd[j1]))) -
             (3 *
              (std::conj(coup140[j1]) *
                   (std::conj(coup142[j1]) *
                        (2 * coup137[i1] * (Md[1] * Md[1]) *
                             (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup2[i1] * (MN[0] * MN[0])) +
                         coup138[i1] *
                             (-2 * coup2[i1] * (s - 2 * (Md[1] * Md[1])) *
                                  (MN[0] * MN[0]) +
                              coup3[i1] *
                                  ((s * s) - (t * t) +
                                   (u - 2 * (Md[1] * Md[1])) *
                                       (u - 2 * (MN[0] * MN[0])) -
                                   2 * s * ((Md[1] * Md[1]) + (MN[0] * MN[0])) +
                                   2 * t *
                                       ((Md[1] * Md[1]) + (MN[0] * MN[0]))))) +
                    2 * std::conj(coup141[j1]) *
                        (coup137[i1] * (coup3[i1] * (t - (Md[1] * Md[1]) -
                                                     (MN[0] * MN[0])) +
                                        coup2[i1] * (-u + (Md[1] * Md[1]) +
                                                     (MN[0] * MN[0]))) +
                         coup138[i1] * (coup2[i1] * (t - (Md[1] * Md[1]) -
                                                     (MN[0] * MN[0])) +
                                        coup3[i1] * (-u + (Md[1] * Md[1]) +
                                                     (MN[0] * MN[0])))) *
                        Md[1] * MN[0]) +
               std::conj(coup139[j1]) *
                   (std::conj(coup141[j1]) *
                        (2 * coup138[i1] * (Md[1] * Md[1]) *
                             (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup3[i1] * (MN[0] * MN[0])) +
                         coup137[i1] *
                             (-2 * coup3[i1] * (s - 2 * (Md[1] * Md[1])) *
                                  (MN[0] * MN[0]) +
                              coup2[i1] *
                                  ((s * s) - (t * t) +
                                   (u - 2 * (Md[1] * Md[1])) *
                                       (u - 2 * (MN[0] * MN[0])) -
                                   2 * s * ((Md[1] * Md[1]) + (MN[0] * MN[0])) +
                                   2 * t *
                                       ((Md[1] * Md[1]) + (MN[0] * MN[0]))))) +
                    2 * std::conj(coup142[j1]) *
                        (coup137[i1] * (coup3[i1] * (t - (Md[1] * Md[1]) -
                                                     (MN[0] * MN[0])) +
                                        coup2[i1] * (-u + (Md[1] * Md[1]) +
                                                     (MN[0] * MN[0]))) +
                         coup138[i1] * (coup2[i1] * (t - (Md[1] * Md[1]) -
                                                     (MN[0] * MN[0])) +
                                        coup3[i1] * (-u + (Md[1] * Md[1]) +
                                                     (MN[0] * MN[0])))) *
                        Md[1] * MN[0]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (Msd[j1] * Msd[j1]))) +
             (3 *
              (std::conj(coup140[j1]) *
                   (-2 * std::conj(coup141[j1]) *
                        (coup140[i1] * MN[0] *
                             (coup142[i1] *
                                  (-u + (Md[1] * Md[1]) + (MN[0] * MN[0])) *
                                  Md[1] +
                              coup141[i1] * (s - 2 * (Md[1] * Md[1])) * MN[0]) +
                         coup139[i1] * Md[1] *
                             (coup142[i1] * (s - 2 * (MN[0] * MN[0])) * Md[1] +
                              coup141[i1] *
                                  (-u + (Md[1] * Md[1]) + (MN[0] * MN[0])) *
                                  MN[0])) +
                    std::conj(coup142[j1]) *
                        (-2 * coup139[i1] * Md[1] * MN[0] *
                             (coup142[i1] *
                                  (-t + (Md[1] * Md[1]) + (MN[0] * MN[0])) +
                              2 * coup141[i1] * Md[1] * MN[0]) +
                         coup140[i1] *
                             (coup142[i1] *
                                  ((s * s) - (t * t) - (u * u) +
                                   2 * u * (Md[1] * Md[1]) -
                                   2 * (Md[1] * Md[1] * Md[1] * Md[1]) +
                                   2 * u * (MN[0] * MN[0]) -
                                   2 * s * ((Md[1] * Md[1]) + (MN[0] * MN[0])) +
                                   2 * t * ((Md[1] * Md[1]) + (MN[0] * MN[0])) -
                                   2 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                              2 * coup141[i1] *
                                  (-t + (Md[1] * Md[1]) + (MN[0] * MN[0])) *
                                  Md[1] * MN[0]))) +
               std::conj(coup139[j1]) *
                   (-2 * std::conj(coup142[j1]) *
                        (coup139[i1] * MN[0] *
                             (coup141[i1] *
                                  (-u + (Md[1] * Md[1]) + (MN[0] * MN[0])) *
                                  Md[1] +
                              coup142[i1] * (s - 2 * (Md[1] * Md[1])) * MN[0]) +
                         coup140[i1] * Md[1] *
                             (coup141[i1] * (s - 2 * (MN[0] * MN[0])) * Md[1] +
                              coup142[i1] *
                                  (-u + (Md[1] * Md[1]) + (MN[0] * MN[0])) *
                                  MN[0])) +
                    std::conj(coup141[j1]) *
                        (-2 * coup140[i1] * Md[1] * MN[0] *
                             (coup141[i1] *
                                  (-t + (Md[1] * Md[1]) + (MN[0] * MN[0])) +
                              2 * coup142[i1] * Md[1] * MN[0]) +
                         coup139[i1] *
                             (coup141[i1] *
                                  ((s * s) - (t * t) - (u * u) +
                                   2 * u * (Md[1] * Md[1]) -
                                   2 * (Md[1] * Md[1] * Md[1] * Md[1]) +
                                   2 * u * (MN[0] * MN[0]) -
                                   2 * s * ((Md[1] * Md[1]) + (MN[0] * MN[0])) +
                                   2 * t * ((Md[1] * Md[1]) + (MN[0] * MN[0])) -
                                   2 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                              2 * coup142[i1] *
                                  (-t + (Md[1] * Md[1]) + (MN[0] * MN[0])) *
                                  Md[1] * MN[0]))))) /
                 ((t - (Msd[i1] * Msd[i1])) * (u - (Msd[j1] * Msd[j1]))),
         i1, 6, j1, 6)

    return res.real();
}
double DT::N1N1d3d3(const double &cos_t, const double &s) {
    using namespace PAR;
    std::complex<double> res;
    std::complex<double> t = -0.5 * s + (Md[2] * Md[2]) +
                             (cos_t * sqrt(s - 4 * (Md[2] * Md[2])) *
                              sqrt(s - 4 * (MN[0] * MN[0]))) /
                                 2. +
                             (MN[0] * MN[0]);
    std::complex<double> u = -s - t + 2 * (Md[2] * Md[2]) + 2 * (MN[0] * MN[0]);
    res +=
        (12 *
         (std::conj(coup131) *
              (std::conj(coup9) *
                   (coup132 * (Md[2] * Md[2]) *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) +
                    coup131 *
                        (coup9 * ((-u + (Md[2] * Md[2]) + (MN[0] * MN[0])) *
                                  (-u + (Md[2] * Md[2]) + (MN[0] * MN[0]))) +
                         coup8 * (s - 2 * (Md[2] * Md[2])) * (MN[0] * MN[0]))) +
               std::conj(coup8) *
                   (coup132 * (Md[2] * Md[2]) *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) +
                    coup131 *
                        (coup8 * ((-t + (Md[2] * Md[2]) + (MN[0] * MN[0])) *
                                  (-t + (Md[2] * Md[2]) + (MN[0] * MN[0]))) +
                         coup9 * (s - 2 * (Md[2] * Md[2])) *
                             (MN[0] * MN[0])))) +
          std::conj(coup132) *
              (std::conj(coup9) *
                   (coup131 * (Md[2] * Md[2]) *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) +
                    coup132 *
                        (coup9 * ((-t + (Md[2] * Md[2]) + (MN[0] * MN[0])) *
                                  (-t + (Md[2] * Md[2]) + (MN[0] * MN[0]))) +
                         coup8 * (s - 2 * (Md[2] * Md[2])) * (MN[0] * MN[0]))) +
               std::conj(coup8) *
                   (coup131 * (Md[2] * Md[2]) *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) +
                    coup132 *
                        (coup8 * ((-u + (Md[2] * Md[2]) + (MN[0] * MN[0])) *
                                  (-u + (Md[2] * Md[2]) + (MN[0] * MN[0]))) +
                         coup9 * (s - 2 * (Md[2] * Md[2])) *
                             (MN[0] * MN[0])))))) /
        (((MZ * MZ) - s) * ((MZ * MZ) - s));

    SUM1(
        (12 *
         (std::conj(coup132) *
              (std::conj(coup9) *
                   (coup144[i1] *
                        (coup3[i1] * (t - (Md[2] * Md[2]) - (MN[0] * MN[0])) +
                         coup2[i1] * (-u + (Md[2] * Md[2]) + (MN[0] * MN[0]))) +
                    coup143[i1] *
                        (coup2[i1] * (t - (Md[2] * Md[2]) - (MN[0] * MN[0])) +
                         coup3[i1] *
                             (-u + (Md[2] * Md[2]) + (MN[0] * MN[0])))) +
               std::conj(coup8) *
                   (coup143[i1] *
                        (coup3[i1] * (t - (Md[2] * Md[2]) - (MN[0] * MN[0])) +
                         coup2[i1] * (-u + (Md[2] * Md[2]) + (MN[0] * MN[0]))) +
                    coup144[i1] *
                        (coup2[i1] * (t - (Md[2] * Md[2]) - (MN[0] * MN[0])) +
                         coup3[i1] *
                             (-u + (Md[2] * Md[2]) + (MN[0] * MN[0]))))) +
          std::conj(coup131) *
              (std::conj(coup8) *
                   (coup144[i1] *
                        (coup3[i1] * (t - (Md[2] * Md[2]) - (MN[0] * MN[0])) +
                         coup2[i1] * (-u + (Md[2] * Md[2]) + (MN[0] * MN[0]))) +
                    coup143[i1] *
                        (coup2[i1] * (t - (Md[2] * Md[2]) - (MN[0] * MN[0])) +
                         coup3[i1] *
                             (-u + (Md[2] * Md[2]) + (MN[0] * MN[0])))) +
               std::conj(coup9) *
                   (coup143[i1] *
                        (coup3[i1] * (t - (Md[2] * Md[2]) - (MN[0] * MN[0])) +
                         coup2[i1] * (-u + (Md[2] * Md[2]) + (MN[0] * MN[0]))) +
                    coup144[i1] *
                        (coup2[i1] * (t - (Md[2] * Md[2]) - (MN[0] * MN[0])) +
                         coup3[i1] *
                             (-u + (Md[2] * Md[2]) + (MN[0] * MN[0])))))) *
         Md[2] * MN[0]) /
            ((-s + (MZ * MZ)) * (s - (Mh[i1] * Mh[i1]))),
        i1, 6)

    SUM1(
        (12 *
         (std::conj(coup145[j1]) *
              (std::conj(coup148[j1]) *
                   (coup132 * (Md[2] * Md[2]) *
                        (coup8 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup9 * (MN[0] * MN[0])) +
                    coup131 *
                        (coup8 * ((-t + (Md[2] * Md[2]) + (MN[0] * MN[0])) *
                                  (-t + (Md[2] * Md[2]) + (MN[0] * MN[0]))) +
                         coup9 * (s - 2 * (Md[2] * Md[2])) * (MN[0] * MN[0]))) +
               std::conj(coup147[j1]) *
                   (2 * coup131 * coup8 *
                        (-t + (Md[2] * Md[2]) + (MN[0] * MN[0])) +
                    2 * coup132 * coup9 *
                        (-t + (Md[2] * Md[2]) + (MN[0] * MN[0])) +
                    coup132 * coup8 * (-u + (Md[2] * Md[2]) + (MN[0] * MN[0])) +
                    coup131 * coup9 *
                        (-u + (Md[2] * Md[2]) + (MN[0] * MN[0]))) *
                   Md[2] * MN[0]) +
          std::conj(coup146[j1]) *
              (std::conj(coup147[j1]) *
                   (coup131 * (Md[2] * Md[2]) *
                        (coup9 * (s - 2 * (MN[0] * MN[0])) +
                         4 * coup8 * (MN[0] * MN[0])) +
                    coup132 *
                        (coup9 * ((-t + (Md[2] * Md[2]) + (MN[0] * MN[0])) *
                                  (-t + (Md[2] * Md[2]) + (MN[0] * MN[0]))) +
                         coup8 * (s - 2 * (Md[2] * Md[2])) * (MN[0] * MN[0]))) +
               std::conj(coup148[j1]) *
                   (2 * coup131 * coup8 *
                        (-t + (Md[2] * Md[2]) + (MN[0] * MN[0])) +
                    2 * coup132 * coup9 *
                        (-t + (Md[2] * Md[2]) + (MN[0] * MN[0])) +
                    coup132 * coup8 * (-u + (Md[2] * Md[2]) + (MN[0] * MN[0])) +
                    coup131 * coup9 *
                        (-u + (Md[2] * Md[2]) + (MN[0] * MN[0]))) *
                   Md[2] * MN[0]))) /
                ((-s + (MZ * MZ)) * (t - (Msd[j1] * Msd[j1]))) -
            (12 *
             (std::conj(coup145[j1]) *
                  (std::conj(coup148[j1]) *
                       (coup132 * (Md[2] * Md[2]) *
                            (coup9 * (s - 2 * (MN[0] * MN[0])) +
                             4 * coup8 * (MN[0] * MN[0])) +
                        coup131 *
                            (coup9 *
                                 ((-u + (Md[2] * Md[2]) + (MN[0] * MN[0])) *
                                  (-u + (Md[2] * Md[2]) + (MN[0] * MN[0]))) +
                             coup8 * (s - 2 * (Md[2] * Md[2])) *
                                 (MN[0] * MN[0]))) +
                   std::conj(coup147[j1]) *
                       (coup131 * coup8 *
                            (-t + (Md[2] * Md[2]) + (MN[0] * MN[0])) +
                        coup132 * coup9 *
                            (-t + (Md[2] * Md[2]) + (MN[0] * MN[0])) +
                        2 * coup132 * coup8 *
                            (-u + (Md[2] * Md[2]) + (MN[0] * MN[0])) +
                        2 * coup131 * coup9 *
                            (-u + (Md[2] * Md[2]) + (MN[0] * MN[0]))) *
                       Md[2] * MN[0]) +
              std::conj(coup146[j1]) *
                  (std::conj(coup147[j1]) *
                       (coup131 * (Md[2] * Md[2]) *
                            (coup8 * (s - 2 * (MN[0] * MN[0])) +
                             4 * coup9 * (MN[0] * MN[0])) +
                        coup132 *
                            (coup8 *
                                 ((-u + (Md[2] * Md[2]) + (MN[0] * MN[0])) *
                                  (-u + (Md[2] * Md[2]) + (MN[0] * MN[0]))) +
                             coup9 * (s - 2 * (Md[2] * Md[2])) *
                                 (MN[0] * MN[0]))) +
                   std::conj(coup148[j1]) *
                       (coup131 * coup8 *
                            (-t + (Md[2] * Md[2]) + (MN[0] * MN[0])) +
                        coup132 * coup9 *
                            (-t + (Md[2] * Md[2]) + (MN[0] * MN[0])) +
                        2 * coup132 * coup8 *
                            (-u + (Md[2] * Md[2]) + (MN[0] * MN[0])) +
                        2 * coup131 * coup9 *
                            (-u + (Md[2] * Md[2]) + (MN[0] * MN[0]))) *
                       Md[2] * MN[0]))) /
                ((-s + (MZ * MZ)) * (u - (Msd[j1] * Msd[j1]))),
        j1, 6)

    SUM2((3 *
          (std::conj(coup144[j1]) * (coup144[i1] * (s - 2 * (Md[2] * Md[2])) -
                                     2 * coup143[i1] * (Md[2] * Md[2])) +
           std::conj(coup143[j1]) * (coup143[i1] * (s - 2 * (Md[2] * Md[2])) -
                                     2 * coup144[i1] * (Md[2] * Md[2]))) *
          (std::conj(coup3[j1]) * (coup3[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup2[i1] * (MN[0] * MN[0])) +
           std::conj(coup2[j1]) * (coup2[i1] * (s - 2 * (MN[0] * MN[0])) -
                                   2 * coup3[i1] * (MN[0] * MN[0])))) /
                 ((s - (Mh[i1] * Mh[i1])) * (s - (Mh[j1] * Mh[j1]))) +
             (3 *
              (std::conj(coup146[j1]) *
                   (coup146[i1] * (t - (Md[2] * Md[2]) - (MN[0] * MN[0])) -
                    2 * coup145[i1] * Md[2] * MN[0]) +
               std::conj(coup145[j1]) *
                   (coup145[i1] * (t - (Md[2] * Md[2]) - (MN[0] * MN[0])) -
                    2 * coup146[i1] * Md[2] * MN[0])) *
              (std::conj(coup148[j1]) *
                   (coup148[i1] * (t - (Md[2] * Md[2]) - (MN[0] * MN[0])) -
                    2 * coup147[i1] * Md[2] * MN[0]) +
               std::conj(coup147[j1]) *
                   (coup147[i1] * (t - (Md[2] * Md[2]) - (MN[0] * MN[0])) -
                    2 * coup148[i1] * Md[2] * MN[0]))) /
                 ((t - (Msd[i1] * Msd[i1])) * (t - (Msd[j1] * Msd[j1]))) +
             (3 *
              (std::conj(coup146[j1]) *
                   (coup146[i1] * (u - (Md[2] * Md[2]) - (MN[0] * MN[0])) -
                    2 * coup145[i1] * Md[2] * MN[0]) +
               std::conj(coup145[j1]) *
                   (coup145[i1] * (u - (Md[2] * Md[2]) - (MN[0] * MN[0])) -
                    2 * coup146[i1] * Md[2] * MN[0])) *
              (std::conj(coup148[j1]) *
                   (coup148[i1] * (u - (Md[2] * Md[2]) - (MN[0] * MN[0])) -
                    2 * coup147[i1] * Md[2] * MN[0]) +
               std::conj(coup147[j1]) *
                   (coup147[i1] * (u - (Md[2] * Md[2]) - (MN[0] * MN[0])) -
                    2 * coup148[i1] * Md[2] * MN[0]))) /
                 ((u - (Msd[i1] * Msd[i1])) * (u - (Msd[j1] * Msd[j1]))) -
             (3 *
              (std::conj(coup146[j1]) *
                   (std::conj(coup148[j1]) *
                        (2 * coup143[i1] * (Md[2] * Md[2]) *
                             (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup2[i1] * (MN[0] * MN[0])) +
                         coup144[i1] *
                             (-2 * coup2[i1] * (s - 2 * (Md[2] * Md[2])) *
                                  (MN[0] * MN[0]) +
                              coup3[i1] *
                                  ((s * s) + (t * t) - (u * u) +
                                   2 * u * (Md[2] * Md[2]) +
                                   2 * u * (MN[0] * MN[0]) +
                                   4 * (Md[2] * Md[2]) * (MN[0] * MN[0]) -
                                   2 * s * ((Md[2] * Md[2]) + (MN[0] * MN[0])) -
                                   2 * t *
                                       ((Md[2] * Md[2]) + (MN[0] * MN[0]))))) +
                    2 * std::conj(coup147[j1]) *
                        (coup143[i1] * (coup3[i1] * (u - (Md[2] * Md[2]) -
                                                     (MN[0] * MN[0])) +
                                        coup2[i1] * (-t + (Md[2] * Md[2]) +
                                                     (MN[0] * MN[0]))) +
                         coup144[i1] * (coup2[i1] * (u - (Md[2] * Md[2]) -
                                                     (MN[0] * MN[0])) +
                                        coup3[i1] * (-t + (Md[2] * Md[2]) +
                                                     (MN[0] * MN[0])))) *
                        Md[2] * MN[0]) +
               std::conj(coup145[j1]) *
                   (std::conj(coup147[j1]) *
                        (2 * coup144[i1] * (Md[2] * Md[2]) *
                             (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup3[i1] * (MN[0] * MN[0])) +
                         coup143[i1] *
                             (-2 * coup3[i1] * (s - 2 * (Md[2] * Md[2])) *
                                  (MN[0] * MN[0]) +
                              coup2[i1] *
                                  ((s * s) + (t * t) - (u * u) +
                                   2 * u * (Md[2] * Md[2]) +
                                   2 * u * (MN[0] * MN[0]) +
                                   4 * (Md[2] * Md[2]) * (MN[0] * MN[0]) -
                                   2 * s * ((Md[2] * Md[2]) + (MN[0] * MN[0])) -
                                   2 * t *
                                       ((Md[2] * Md[2]) + (MN[0] * MN[0]))))) +
                    2 * std::conj(coup148[j1]) *
                        (coup143[i1] * (coup3[i1] * (u - (Md[2] * Md[2]) -
                                                     (MN[0] * MN[0])) +
                                        coup2[i1] * (-t + (Md[2] * Md[2]) +
                                                     (MN[0] * MN[0]))) +
                         coup144[i1] * (coup2[i1] * (u - (Md[2] * Md[2]) -
                                                     (MN[0] * MN[0])) +
                                        coup3[i1] * (-t + (Md[2] * Md[2]) +
                                                     (MN[0] * MN[0])))) *
                        Md[2] * MN[0]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (t - (Msd[j1] * Msd[j1]))) -
             (3 *
              (std::conj(coup146[j1]) *
                   (std::conj(coup148[j1]) *
                        (2 * coup143[i1] * (Md[2] * Md[2]) *
                             (-(coup3[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup2[i1] * (MN[0] * MN[0])) +
                         coup144[i1] *
                             (-2 * coup2[i1] * (s - 2 * (Md[2] * Md[2])) *
                                  (MN[0] * MN[0]) +
                              coup3[i1] *
                                  ((s * s) - (t * t) +
                                   (u - 2 * (Md[2] * Md[2])) *
                                       (u - 2 * (MN[0] * MN[0])) -
                                   2 * s * ((Md[2] * Md[2]) + (MN[0] * MN[0])) +
                                   2 * t *
                                       ((Md[2] * Md[2]) + (MN[0] * MN[0]))))) +
                    2 * std::conj(coup147[j1]) *
                        (coup143[i1] * (coup3[i1] * (t - (Md[2] * Md[2]) -
                                                     (MN[0] * MN[0])) +
                                        coup2[i1] * (-u + (Md[2] * Md[2]) +
                                                     (MN[0] * MN[0]))) +
                         coup144[i1] * (coup2[i1] * (t - (Md[2] * Md[2]) -
                                                     (MN[0] * MN[0])) +
                                        coup3[i1] * (-u + (Md[2] * Md[2]) +
                                                     (MN[0] * MN[0])))) *
                        Md[2] * MN[0]) +
               std::conj(coup145[j1]) *
                   (std::conj(coup147[j1]) *
                        (2 * coup144[i1] * (Md[2] * Md[2]) *
                             (-(coup2[i1] * (s - 2 * (MN[0] * MN[0]))) +
                              2 * coup3[i1] * (MN[0] * MN[0])) +
                         coup143[i1] *
                             (-2 * coup3[i1] * (s - 2 * (Md[2] * Md[2])) *
                                  (MN[0] * MN[0]) +
                              coup2[i1] *
                                  ((s * s) - (t * t) +
                                   (u - 2 * (Md[2] * Md[2])) *
                                       (u - 2 * (MN[0] * MN[0])) -
                                   2 * s * ((Md[2] * Md[2]) + (MN[0] * MN[0])) +
                                   2 * t *
                                       ((Md[2] * Md[2]) + (MN[0] * MN[0]))))) +
                    2 * std::conj(coup148[j1]) *
                        (coup143[i1] * (coup3[i1] * (t - (Md[2] * Md[2]) -
                                                     (MN[0] * MN[0])) +
                                        coup2[i1] * (-u + (Md[2] * Md[2]) +
                                                     (MN[0] * MN[0]))) +
                         coup144[i1] * (coup2[i1] * (t - (Md[2] * Md[2]) -
                                                     (MN[0] * MN[0])) +
                                        coup3[i1] * (-u + (Md[2] * Md[2]) +
                                                     (MN[0] * MN[0])))) *
                        Md[2] * MN[0]))) /
                 ((s - (Mh[i1] * Mh[i1])) * (u - (Msd[j1] * Msd[j1]))) +
             (3 *
              (std::conj(coup146[j1]) *
                   (-2 * std::conj(coup147[j1]) *
                        (coup146[i1] * MN[0] *
                             (coup148[i1] *
                                  (-u + (Md[2] * Md[2]) + (MN[0] * MN[0])) *
                                  Md[2] +
                              coup147[i1] * (s - 2 * (Md[2] * Md[2])) * MN[0]) +
                         coup145[i1] * Md[2] *
                             (coup148[i1] * (s - 2 * (MN[0] * MN[0])) * Md[2] +
                              coup147[i1] *
                                  (-u + (Md[2] * Md[2]) + (MN[0] * MN[0])) *
                                  MN[0])) +
                    std::conj(coup148[j1]) *
                        (-2 * coup145[i1] * Md[2] * MN[0] *
                             (coup148[i1] *
                                  (-t + (Md[2] * Md[2]) + (MN[0] * MN[0])) +
                              2 * coup147[i1] * Md[2] * MN[0]) +
                         coup146[i1] *
                             (coup148[i1] *
                                  ((s * s) - (t * t) - (u * u) +
                                   2 * u * (Md[2] * Md[2]) -
                                   2 * (Md[2] * Md[2] * Md[2] * Md[2]) +
                                   2 * u * (MN[0] * MN[0]) -
                                   2 * s * ((Md[2] * Md[2]) + (MN[0] * MN[0])) +
                                   2 * t * ((Md[2] * Md[2]) + (MN[0] * MN[0])) -
                                   2 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                              2 * coup147[i1] *
                                  (-t + (Md[2] * Md[2]) + (MN[0] * MN[0])) *
                                  Md[2] * MN[0]))) +
               std::conj(coup145[j1]) *
                   (-2 * std::conj(coup148[j1]) *
                        (coup145[i1] * MN[0] *
                             (coup147[i1] *
                                  (-u + (Md[2] * Md[2]) + (MN[0] * MN[0])) *
                                  Md[2] +
                              coup148[i1] * (s - 2 * (Md[2] * Md[2])) * MN[0]) +
                         coup146[i1] * Md[2] *
                             (coup147[i1] * (s - 2 * (MN[0] * MN[0])) * Md[2] +
                              coup148[i1] *
                                  (-u + (Md[2] * Md[2]) + (MN[0] * MN[0])) *
                                  MN[0])) +
                    std::conj(coup147[j1]) *
                        (-2 * coup146[i1] * Md[2] * MN[0] *
                             (coup147[i1] *
                                  (-t + (Md[2] * Md[2]) + (MN[0] * MN[0])) +
                              2 * coup148[i1] * Md[2] * MN[0]) +
                         coup145[i1] *
                             (coup147[i1] *
                                  ((s * s) - (t * t) - (u * u) +
                                   2 * u * (Md[2] * Md[2]) -
                                   2 * (Md[2] * Md[2] * Md[2] * Md[2]) +
                                   2 * u * (MN[0] * MN[0]) -
                                   2 * s * ((Md[2] * Md[2]) + (MN[0] * MN[0])) +
                                   2 * t * ((Md[2] * Md[2]) + (MN[0] * MN[0])) -
                                   2 * (MN[0] * MN[0] * MN[0] * MN[0])) -
                              2 * coup148[i1] *
                                  (-t + (Md[2] * Md[2]) + (MN[0] * MN[0])) *
                                  Md[2] * MN[0]))))) /
                 ((t - (Msd[i1] * Msd[i1])) * (u - (Msd[j1] * Msd[j1]))),
         i1, 6, j1, 6)

    return res.real();
}
