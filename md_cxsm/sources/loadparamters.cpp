#include "general_model.hpp"
#include "../model.hpp"

namespace DT
{
    void Model::load_parameters()
    {
        aEW = pow(aEWM1, -1);
        sw2 = 1 - pow(MW, 2) * pow(MZ, -2);
        EE = 2 * pow(aEW, 0.5) * pow(Pi, 0.5);
        cw = pow(1 - sw2, 0.5);
        sw = pow(sw2, 0.5);
        gw = EE * pow(sw, -1);
        g1 = EE * pow(cw, -1);
        vev = 2 * MW * pow(gw, -1);
        delta2 = -((-pow(MH, 2) + pow(MS1, 2)) * pow(svev, -1) * pow(vev, -1) * sin(2 * alpha));
        lam = (pow(MH, 2) + cos(2 * alpha) * (pow(MH, 2) - pow(MS1, 2)) + pow(MS1, 2)) * pow(vev, -2);
        muH = pow(2, -0.5) * pow(-(delta2 * pow(svev, 2)) - lam * pow(vev, 2), 0.5);
        ye = yme * pow(2, 0.5) * pow(vev, -1);
        ym = ymm * pow(2, 0.5) * pow(vev, -1);
        ytau = ymtau * pow(2, 0.5) * pow(vev, -1);
        yup = ymup * pow(2, 0.5) * pow(vev, -1);
        yc = ymc * pow(2, 0.5) * pow(vev, -1);
        yt = ymt * pow(2, 0.5) * pow(vev, -1);
        ydo = ymdo * pow(2, 0.5) * pow(vev, -1);
        ys = yms * pow(2, 0.5) * pow(vev, -1);
        yb = ymb * pow(2, 0.5) * pow(vev, -1);
        CKM1x1 = cos(cabi);
        CKM1x2 = sin(cabi);
        CKM1x3 = 0;
        CKM2x1 = -sin(cabi);
        CKM2x2 = cos(cabi);
        CKM2x3 = 0;
        CKM3x1 = 0;
        CKM3x2 = 0;
        CKM3x3 = 1;
        d2 = (pow(MH, 2) + pow(MS1, 2) + cos(2 * alpha) * (-pow(MH, 2) + pow(MS1, 2))) * pow(svev, -2);
        b1 = -pow(MA1, 2);
        b2 = (2 * pow(MA1, 2) - pow(MH, 2) + cos(2 * alpha) * (pow(MH, 2) - pow(MS1, 2)) - pow(MS1, 2) - vev * (pow(MH, 2) - pow(MS1, 2)) * pow(svev, -1) * sin(2 * alpha)) / 2.;
        I1a11 = CKM1x1 * ydo;
        I1a12 = CKM2x1 * ydo;
        I1a13 = CKM3x1 * ydo;
        I1a21 = CKM1x2 * ys;
        I1a22 = CKM2x2 * ys;
        I1a23 = CKM3x2 * ys;
        I1a31 = CKM1x3 * yb;
        I1a32 = CKM2x3 * yb;
        I1a33 = CKM3x3 * yb;
        I2a11 = CKM1x1 * yup;
        I2a12 = CKM2x1 * yc;
        I2a13 = CKM3x1 * yt;
        I2a21 = CKM1x2 * yup;
        I2a22 = CKM2x2 * yc;
        I2a23 = CKM3x2 * yt;
        I2a31 = CKM1x3 * yup;
        I2a32 = CKM2x3 * yc;
        I2a33 = CKM3x3 * yt;
        I3a11 = CKM1x1 * yup;
        I3a12 = CKM1x2 * yup;
        I3a13 = CKM1x3 * yup;
        I3a21 = CKM2x1 * yc;
        I3a22 = CKM2x2 * yc;
        I3a23 = CKM2x3 * yc;
        I3a31 = CKM3x1 * yt;
        I3a32 = CKM3x2 * yt;
        I3a33 = CKM3x3 * yt;
        I4a11 = CKM1x1 * ydo;
        I4a12 = CKM1x2 * ys;
        I4a13 = CKM1x3 * yb;
        I4a21 = CKM2x1 * ydo;
        I4a22 = CKM2x2 * ys;
        I4a23 = CKM2x3 * yb;
        I4a31 = CKM3x1 * ydo;
        I4a32 = CKM3x2 * ys;
        I4a33 = CKM3x3 * yb;
        EL = EE;
        gc16 = -EL;
        gc17 = EL;
        gc18 = -EL;
        gc20 = EL;
        gc23 = -EL;
        gc24 = -((cw * EL) / sw);
        gc26 = (cw * EL) / sw;
        gc28 = -EL;
        gc31 = EL;
        gc32 = (cw * EL) / sw;
        gc34 = -((cw * EL) / sw);
        gc36 = (cw * EL) / sw;
        gc38 = -((cw * EL) / sw);
        gc40 = FAGS;
        gc41 = -FAGS;
        gc42 = -(FAGS * FAGS);
        gc43L = yb * (CKM2x3);
        gc43R = -(yc * (CKM2x3));
        gc44L = yb * (CKM3x3);
        gc44R = -(yt * (CKM3x3));
        gc45L = yb * (CKM1x3);
        gc45R = -(yup * (CKM1x3));
        gc46L = ydo * (CKM2x1);
        gc46R = -(yc * (CKM2x1));
        gc47L = ydo * (CKM3x1);
        gc47R = -(yt * (CKM3x1));
        gc48L = ydo * (CKM1x1);
        gc48R = -(yup * (CKM1x1));
        gc49L = ys * (CKM2x2);
        gc49R = -(yc * (CKM2x2));
        gc50L = ys * (CKM3x2);
        gc50R = -(yt * (CKM3x2));
        gc51L = ys * (CKM1x2);
        gc51R = -(yup * (CKM1x2));
        gc52L = -(yb / sqrt(2));
        gc52R = yb / sqrt(2);
        gc53L = -(ydo / sqrt(2));
        gc53R = ydo / sqrt(2);
        gc54L = -(ys / sqrt(2));
        gc54R = ys / sqrt(2);
        gc55 = -((yb * cos(alpha)) / sqrt(2));
        gc56 = -((ydo * cos(alpha)) / sqrt(2));
        gc57 = -((ys * cos(alpha)) / sqrt(2));
        gc58 = ye;
        gc59 = ym;
        gc60 = ytau;
        gc61L = -(ye / sqrt(2));
        gc61R = ye / sqrt(2);
        gc62L = -(ym / sqrt(2));
        gc62R = ym / sqrt(2);
        gc63L = -(ytau / sqrt(2));
        gc63R = ytau / sqrt(2);
        gc64 = -((ye * cos(alpha)) / sqrt(2));
        gc65 = -((ym * cos(alpha)) / sqrt(2));
        gc66 = -((ytau * cos(alpha)) / sqrt(2));
        gc67L = CKM2x3 * yc;
        gc67R = -(CKM2x3 * yb);
        gc68L = CKM2x1 * yc;
        gc68R = -(CKM2x1 * ydo);
        gc69L = CKM2x2 * yc;
        gc69R = -(CKM2x2 * ys);
        gc70L = CKM3x3 * yt;
        gc70R = -(CKM3x3 * yb);
        gc71L = CKM3x1 * yt;
        gc71R = -(CKM3x1 * ydo);
        gc72L = CKM3x2 * yt;
        gc72R = -(CKM3x2 * ys);
        gc73L = CKM1x3 * yup;
        gc73R = -(CKM1x3 * yb);
        gc74L = CKM1x1 * yup;
        gc74R = -(CKM1x1 * ydo);
        gc75L = CKM1x2 * yup;
        gc75R = -(CKM1x2 * ys);
        gc76L = yc / sqrt(2);
        gc76R = -(yc / sqrt(2));
        gc77L = yt / sqrt(2);
        gc77R = -(yt / sqrt(2));
        gc78L = yup / sqrt(2);
        gc78R = -(yup / sqrt(2));
        gc79 = -((yc * cos(alpha)) / sqrt(2));
        gc80 = -((yt * cos(alpha)) / sqrt(2));
        gc81 = -((yup * cos(alpha)) / sqrt(2));
        gc95 = (yb * sin(alpha)) / sqrt(2);
        gc96 = (ydo * sin(alpha)) / sqrt(2);
        gc97 = (ys * sin(alpha)) / sqrt(2);
        gc98 = (ye * sin(alpha)) / sqrt(2);
        gc99 = (ym * sin(alpha)) / sqrt(2);
        gc100 = (ytau * sin(alpha)) / sqrt(2);
        gc101 = (yc * sin(alpha)) / sqrt(2);
        gc102 = (yt * sin(alpha)) / sqrt(2);
        gc103 = (yup * sin(alpha)) / sqrt(2);
        gc113 = EL / (2. * sw);
        gc114 = -0.5 * (EL * cos(alpha)) / sw;
        gc115 = EL;
        gc117 = (EL * sin(alpha)) / (2. * sw);
        gc121 = -0.5 * EL / sw;
        gc122 = -0.5 * (EL * cos(alpha)) / sw;
        gc124 = (EL * sin(alpha)) / (2. * sw);
        gc127 = -(EL * EL);
        gc133 = (cw * EL) / sw;
        gc134 = (EL * EL) / (sw * sw);
        gc135R = -ye;
        gc136R = -ym;
        gc137R = -ytau;
        gc139 = -0.5 * (EL * cos(alpha) * ((cw * cw) + (sw * sw))) / (cw * sw);
        gc140 = -0.5 * (cw * EL) / sw + (EL * sw) / (2. * cw);
        gc141 = (EL * ((cw * cw) + (sw * sw)) * sin(alpha)) / (2. * cw * sw);
        gc150 = (cw * (EL * EL)) / sw;
        gc158 = -(((cw * cw) * (EL * EL)) / (sw * sw));
        gc159 = -EL;
        gc160 = -EL;
        gc161 = -EL;
        gc162 = (2 * EL) / 3.;
        gc163 = (2 * EL) / 3.;
        gc164 = (2 * EL) / 3.;
        gc165 = -0.3333333333333333 * EL;
        gc166 = -0.3333333333333333 * EL;
        gc167 = -0.3333333333333333 * EL;
        gc168 = FAGS;
        gc169 = FAGS;
        gc170 = FAGS;
        gc171 = FAGS;
        gc172 = FAGS;
        gc173 = FAGS;
        gc174 = (CKM2x3 * EL) / (sqrt(2) * sw);
        gc175 = (CKM2x1 * EL) / (sqrt(2) * sw);
        gc176 = (CKM2x2 * EL) / (sqrt(2) * sw);
        gc177 = (CKM3x3 * EL) / (sqrt(2) * sw);
        gc178 = (CKM3x1 * EL) / (sqrt(2) * sw);
        gc179 = (CKM3x2 * EL) / (sqrt(2) * sw);
        gc180 = (CKM1x3 * EL) / (sqrt(2) * sw);
        gc181 = (CKM1x1 * EL) / (sqrt(2) * sw);
        gc182 = (CKM1x2 * EL) / (sqrt(2) * sw);
        gc183 = (EL * (CKM2x3)) / (sqrt(2) * sw);
        gc184 = (EL * (CKM3x3)) / (sqrt(2) * sw);
        gc185 = (EL * (CKM1x3)) / (sqrt(2) * sw);
        gc186 = (EL * (CKM2x1)) / (sqrt(2) * sw);
        gc187 = (EL * (CKM3x1)) / (sqrt(2) * sw);
        gc188 = (EL * (CKM1x1)) / (sqrt(2) * sw);
        gc189 = (EL * (CKM2x2)) / (sqrt(2) * sw);
        gc190 = (EL * (CKM3x2)) / (sqrt(2) * sw);
        gc191 = (EL * (CKM1x2)) / (sqrt(2) * sw);
        gc192 = EL / (sqrt(2) * sw);
        gc193 = EL / (sqrt(2) * sw);
        gc194 = EL / (sqrt(2) * sw);
        gc195 = EL / (sqrt(2) * sw);
        gc196 = EL / (sqrt(2) * sw);
        gc197 = EL / (sqrt(2) * sw);
        gc198L = (cw * EL) / (2. * sw) - (EL * sw) / (6. * cw);
        gc198R = (-2 * EL * sw) / (3. * cw);
        gc199L = (cw * EL) / (2. * sw) - (EL * sw) / (6. * cw);
        gc199R = (-2 * EL * sw) / (3. * cw);
        gc200L = (cw * EL) / (2. * sw) - (EL * sw) / (6. * cw);
        gc200R = (-2 * EL * sw) / (3. * cw);
        gc201L = -0.16666666666666666 * (EL * (3 * (cw * cw) + (sw * sw))) / (cw * sw);
        gc201R = (EL * sw) / (3. * cw);
        gc202L = -0.16666666666666666 * (EL * (3 * (cw * cw) + (sw * sw))) / (cw * sw);
        gc202R = (EL * sw) / (3. * cw);
        gc203L = -0.16666666666666666 * (EL * (3 * (cw * cw) + (sw * sw))) / (cw * sw);
        gc203R = (EL * sw) / (3. * cw);
        gc204 = (EL * ((cw * cw) + (sw * sw))) / (2. * cw * sw);
        gc205 = (EL * ((cw * cw) + (sw * sw))) / (2. * cw * sw);
        gc206 = (EL * ((cw * cw) + (sw * sw))) / (2. * cw * sw);
        gc207L = -0.5 * (EL * ((cw * cw) - (sw * sw))) / (cw * sw);
        gc207R = (EL * sw) / cw;
        gc208L = -0.5 * (EL * ((cw * cw) - (sw * sw))) / (cw * sw);
        gc208R = (EL * sw) / cw;
        gc209L = -0.5 * (EL * ((cw * cw) - (sw * sw))) / (cw * sw);
        gc209R = (EL * sw) / cw;
    }
} // namespace DT
