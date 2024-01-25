///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../include/declarations.hpp"
#include "../amp2s/allamp2s.hpp"
#include "../include/init.hpp"
namespace DT{
void initprocs(chinfo& ch){
	ch.name[0] = "H0H0hh";
	ch.amp2[0] = amp2s::H0H0hh;
	ch.amp2fl[0] = amp2s::H0H0hhfl;
	ch.mass1[0] = &MH0;
	ch.mass2[0] = &MH0;
	ch.mass3[0] = &mh;
	ch.mass4[0] = &mh;
	ch.name[1] = "H0H0ZZ";
	ch.amp2[1] = amp2s::H0H0ZZ;
	ch.amp2fl[1] = amp2s::H0H0ZZfl;
	ch.mass1[1] = &MH0;
	ch.mass2[1] = &MH0;
	ch.mass3[1] = &MZ;
	ch.mass4[1] = &MZ;
	ch.name[2] = "H0H0wW";
	ch.amp2[2] = amp2s::H0H0wW;
	ch.amp2fl[2] = amp2s::H0H0wWfl;
	ch.mass1[2] = &MH0;
	ch.mass2[2] = &MH0;
	ch.mass3[2] = &MW;
	ch.mass4[2] = &MW;
	ch.name[3] = "H0H0GG";
	ch.amp2[3] = amp2s::H0H0GG;
	ch.amp2fl[3] = amp2s::H0H0GGfl;
	ch.mass1[3] = &MH0;
	ch.mass2[3] = &MH0;
	ch.mass3[3] = 0;
	ch.mass4[3] = 0;
	ch.name[4] = "H0H0Ee";
	ch.amp2[4] = amp2s::H0H0Ee;
	ch.amp2fl[4] = amp2s::H0H0Eefl;
	ch.mass1[4] = &MH0;
	ch.mass2[4] = &MH0;
	ch.mass3[4] = &Me;
	ch.mass4[4] = &Me;
	ch.name[5] = "H0H0Mm";
	ch.amp2[5] = amp2s::H0H0Mm;
	ch.amp2fl[5] = amp2s::H0H0Mmfl;
	ch.mass1[5] = &MH0;
	ch.mass2[5] = &MH0;
	ch.mass3[5] = &MM;
	ch.mass4[5] = &MM;
	ch.name[6] = "H0H0TAta";
	ch.amp2[6] = amp2s::H0H0TAta;
	ch.amp2fl[6] = amp2s::H0H0TAtafl;
	ch.mass1[6] = &MH0;
	ch.mass2[6] = &MH0;
	ch.mass3[6] = &MTA;
	ch.mass4[6] = &MTA;
	ch.name[7] = "H0H0Uu";
	ch.amp2[7] = amp2s::H0H0Uu;
	ch.amp2fl[7] = amp2s::H0H0Uufl;
	ch.mass1[7] = &MH0;
	ch.mass2[7] = &MH0;
	ch.mass3[7] = &MU;
	ch.mass4[7] = &MU;
	ch.name[8] = "H0H0Cc";
	ch.amp2[8] = amp2s::H0H0Cc;
	ch.amp2fl[8] = amp2s::H0H0Ccfl;
	ch.mass1[8] = &MH0;
	ch.mass2[8] = &MH0;
	ch.mass3[8] = &MC;
	ch.mass4[8] = &MC;
	ch.name[9] = "H0H0Tt";
	ch.amp2[9] = amp2s::H0H0Tt;
	ch.amp2fl[9] = amp2s::H0H0Ttfl;
	ch.mass1[9] = &MH0;
	ch.mass2[9] = &MH0;
	ch.mass3[9] = &MT;
	ch.mass4[9] = &MT;
	ch.name[10] = "H0H0Dd";
	ch.amp2[10] = amp2s::H0H0Dd;
	ch.amp2fl[10] = amp2s::H0H0Ddfl;
	ch.mass1[10] = &MH0;
	ch.mass2[10] = &MH0;
	ch.mass3[10] = &MD;
	ch.mass4[10] = &MD;
	ch.name[11] = "H0H0Ss";
	ch.amp2[11] = amp2s::H0H0Ss;
	ch.amp2fl[11] = amp2s::H0H0Ssfl;
	ch.mass1[11] = &MH0;
	ch.mass2[11] = &MH0;
	ch.mass3[11] = &MS;
	ch.mass4[11] = &MS;
	ch.name[12] = "H0H0Bb";
	ch.amp2[12] = amp2s::H0H0Bb;
	ch.amp2fl[12] = amp2s::H0H0Bbfl;
	ch.mass1[12] = &MH0;
	ch.mass2[12] = &MH0;
	ch.mass3[12] = &MB;
	ch.mass4[12] = &MB;
	ch.name[13] = "H0A0hZ";
	ch.amp2[13] = amp2s::H0A0hZ;
	ch.amp2fl[13] = amp2s::H0A0hZfl;
	ch.mass1[13] = &MH0;
	ch.mass2[13] = &MA0;
	ch.mass3[13] = &mh;
	ch.mass4[13] = &MZ;
	ch.name[14] = "H0A0wW";
	ch.amp2[14] = amp2s::H0A0wW;
	ch.amp2fl[14] = amp2s::H0A0wWfl;
	ch.mass1[14] = &MH0;
	ch.mass2[14] = &MA0;
	ch.mass3[14] = &MW;
	ch.mass4[14] = &MW;
	ch.name[15] = "H0A0VEve";
	ch.amp2[15] = amp2s::H0A0VEve;
	ch.amp2fl[15] = amp2s::H0A0VEvefl;
	ch.mass1[15] = &MH0;
	ch.mass2[15] = &MA0;
	ch.mass3[15] = &Mnue;
	ch.mass4[15] = &Mnue;
	ch.name[16] = "H0A0VMvm";
	ch.amp2[16] = amp2s::H0A0VMvm;
	ch.amp2fl[16] = amp2s::H0A0VMvmfl;
	ch.mass1[16] = &MH0;
	ch.mass2[16] = &MA0;
	ch.mass3[16] = &Mnum;
	ch.mass4[16] = &Mnum;
	ch.name[17] = "H0A0VTvt";
	ch.amp2[17] = amp2s::H0A0VTvt;
	ch.amp2fl[17] = amp2s::H0A0VTvtfl;
	ch.mass1[17] = &MH0;
	ch.mass2[17] = &MA0;
	ch.mass3[17] = &Mnut;
	ch.mass4[17] = &Mnut;
	ch.name[18] = "H0A0Ee";
	ch.amp2[18] = amp2s::H0A0Ee;
	ch.amp2fl[18] = amp2s::H0A0Eefl;
	ch.mass1[18] = &MH0;
	ch.mass2[18] = &MA0;
	ch.mass3[18] = &Me;
	ch.mass4[18] = &Me;
	ch.name[19] = "H0A0Mm";
	ch.amp2[19] = amp2s::H0A0Mm;
	ch.amp2fl[19] = amp2s::H0A0Mmfl;
	ch.mass1[19] = &MH0;
	ch.mass2[19] = &MA0;
	ch.mass3[19] = &MM;
	ch.mass4[19] = &MM;
	ch.name[20] = "H0A0TAta";
	ch.amp2[20] = amp2s::H0A0TAta;
	ch.amp2fl[20] = amp2s::H0A0TAtafl;
	ch.mass1[20] = &MH0;
	ch.mass2[20] = &MA0;
	ch.mass3[20] = &MTA;
	ch.mass4[20] = &MTA;
	ch.name[21] = "H0A0Uu";
	ch.amp2[21] = amp2s::H0A0Uu;
	ch.amp2fl[21] = amp2s::H0A0Uufl;
	ch.mass1[21] = &MH0;
	ch.mass2[21] = &MA0;
	ch.mass3[21] = &MU;
	ch.mass4[21] = &MU;
	ch.name[22] = "H0A0Cc";
	ch.amp2[22] = amp2s::H0A0Cc;
	ch.amp2fl[22] = amp2s::H0A0Ccfl;
	ch.mass1[22] = &MH0;
	ch.mass2[22] = &MA0;
	ch.mass3[22] = &MC;
	ch.mass4[22] = &MC;
	ch.name[23] = "H0A0Tt";
	ch.amp2[23] = amp2s::H0A0Tt;
	ch.amp2fl[23] = amp2s::H0A0Ttfl;
	ch.mass1[23] = &MH0;
	ch.mass2[23] = &MA0;
	ch.mass3[23] = &MT;
	ch.mass4[23] = &MT;
	ch.name[24] = "H0A0Dd";
	ch.amp2[24] = amp2s::H0A0Dd;
	ch.amp2fl[24] = amp2s::H0A0Ddfl;
	ch.mass1[24] = &MH0;
	ch.mass2[24] = &MA0;
	ch.mass3[24] = &MD;
	ch.mass4[24] = &MD;
	ch.name[25] = "H0A0Ss";
	ch.amp2[25] = amp2s::H0A0Ss;
	ch.amp2fl[25] = amp2s::H0A0Ssfl;
	ch.mass1[25] = &MH0;
	ch.mass2[25] = &MA0;
	ch.mass3[25] = &MS;
	ch.mass4[25] = &MS;
	ch.name[26] = "H0A0Bb";
	ch.amp2[26] = amp2s::H0A0Bb;
	ch.amp2fl[26] = amp2s::H0A0Bbfl;
	ch.mass1[26] = &MH0;
	ch.mass2[26] = &MA0;
	ch.mass3[26] = &MB;
	ch.mass4[26] = &MB;
	ch.name[27] = "H0HchhW";
	ch.amp2[27] = amp2s::H0HchhW;
	ch.amp2fl[27] = amp2s::H0HchhWfl;
	ch.mass1[27] = &MH0;
	ch.mass2[27] = &MHch;
	ch.mass3[27] = &mh;
	ch.mass4[27] = &MW;
	ch.name[28] = "H0HchAW";
	ch.amp2[28] = amp2s::H0HchAW;
	ch.amp2fl[28] = amp2s::H0HchAWfl;
	ch.mass1[28] = &MH0;
	ch.mass2[28] = &MHch;
	ch.mass3[28] = 0;
	ch.mass4[28] = &MW;
	ch.name[29] = "H0HchZW";
	ch.amp2[29] = amp2s::H0HchZW;
	ch.amp2fl[29] = amp2s::H0HchZWfl;
	ch.mass1[29] = &MH0;
	ch.mass2[29] = &MHch;
	ch.mass3[29] = &MZ;
	ch.mass4[29] = &MW;
	ch.name[30] = "H0HchveE";
	ch.amp2[30] = amp2s::H0HchveE;
	ch.amp2fl[30] = amp2s::H0HchveEfl;
	ch.mass1[30] = &MH0;
	ch.mass2[30] = &MHch;
	ch.mass3[30] = &Mnue;
	ch.mass4[30] = &Me;
	ch.name[31] = "H0HchvmM";
	ch.amp2[31] = amp2s::H0HchvmM;
	ch.amp2fl[31] = amp2s::H0HchvmMfl;
	ch.mass1[31] = &MH0;
	ch.mass2[31] = &MHch;
	ch.mass3[31] = &Mnum;
	ch.mass4[31] = &MM;
	ch.name[32] = "H0HchvtTA";
	ch.amp2[32] = amp2s::H0HchvtTA;
	ch.amp2fl[32] = amp2s::H0HchvtTAfl;
	ch.mass1[32] = &MH0;
	ch.mass2[32] = &MHch;
	ch.mass3[32] = &Mnut;
	ch.mass4[32] = &MTA;
	ch.name[33] = "H0HchuD";
	ch.amp2[33] = amp2s::H0HchuD;
	ch.amp2fl[33] = amp2s::H0HchuDfl;
	ch.mass1[33] = &MH0;
	ch.mass2[33] = &MHch;
	ch.mass3[33] = &MU;
	ch.mass4[33] = &MD;
	ch.name[34] = "H0HchuS";
	ch.amp2[34] = amp2s::H0HchuS;
	ch.amp2fl[34] = amp2s::H0HchuSfl;
	ch.mass1[34] = &MH0;
	ch.mass2[34] = &MHch;
	ch.mass3[34] = &MU;
	ch.mass4[34] = &MS;
	ch.name[35] = "H0HchuB";
	ch.amp2[35] = amp2s::H0HchuB;
	ch.amp2fl[35] = amp2s::H0HchuBfl;
	ch.mass1[35] = &MH0;
	ch.mass2[35] = &MHch;
	ch.mass3[35] = &MU;
	ch.mass4[35] = &MB;
	ch.name[36] = "H0HchcD";
	ch.amp2[36] = amp2s::H0HchcD;
	ch.amp2fl[36] = amp2s::H0HchcDfl;
	ch.mass1[36] = &MH0;
	ch.mass2[36] = &MHch;
	ch.mass3[36] = &MC;
	ch.mass4[36] = &MD;
	ch.name[37] = "H0HchcS";
	ch.amp2[37] = amp2s::H0HchcS;
	ch.amp2fl[37] = amp2s::H0HchcSfl;
	ch.mass1[37] = &MH0;
	ch.mass2[37] = &MHch;
	ch.mass3[37] = &MC;
	ch.mass4[37] = &MS;
	ch.name[38] = "H0HchcB";
	ch.amp2[38] = amp2s::H0HchcB;
	ch.amp2fl[38] = amp2s::H0HchcBfl;
	ch.mass1[38] = &MH0;
	ch.mass2[38] = &MHch;
	ch.mass3[38] = &MC;
	ch.mass4[38] = &MB;
	ch.name[39] = "H0HchtD";
	ch.amp2[39] = amp2s::H0HchtD;
	ch.amp2fl[39] = amp2s::H0HchtDfl;
	ch.mass1[39] = &MH0;
	ch.mass2[39] = &MHch;
	ch.mass3[39] = &MT;
	ch.mass4[39] = &MD;
	ch.name[40] = "H0HchtS";
	ch.amp2[40] = amp2s::H0HchtS;
	ch.amp2fl[40] = amp2s::H0HchtSfl;
	ch.mass1[40] = &MH0;
	ch.mass2[40] = &MHch;
	ch.mass3[40] = &MT;
	ch.mass4[40] = &MS;
	ch.name[41] = "H0HchtB";
	ch.amp2[41] = amp2s::H0HchtB;
	ch.amp2fl[41] = amp2s::H0HchtBfl;
	ch.mass1[41] = &MH0;
	ch.mass2[41] = &MHch;
	ch.mass3[41] = &MT;
	ch.mass4[41] = &MB;
	ch.name[42] = "A0A0hh";
	ch.amp2[42] = amp2s::A0A0hh;
	ch.amp2fl[42] = amp2s::A0A0hhfl;
	ch.mass1[42] = &MA0;
	ch.mass2[42] = &MA0;
	ch.mass3[42] = &mh;
	ch.mass4[42] = &mh;
	ch.name[43] = "A0A0ZZ";
	ch.amp2[43] = amp2s::A0A0ZZ;
	ch.amp2fl[43] = amp2s::A0A0ZZfl;
	ch.mass1[43] = &MA0;
	ch.mass2[43] = &MA0;
	ch.mass3[43] = &MZ;
	ch.mass4[43] = &MZ;
	ch.name[44] = "A0A0wW";
	ch.amp2[44] = amp2s::A0A0wW;
	ch.amp2fl[44] = amp2s::A0A0wWfl;
	ch.mass1[44] = &MA0;
	ch.mass2[44] = &MA0;
	ch.mass3[44] = &MW;
	ch.mass4[44] = &MW;
	ch.name[45] = "A0A0GG";
	ch.amp2[45] = amp2s::A0A0GG;
	ch.amp2fl[45] = amp2s::A0A0GGfl;
	ch.mass1[45] = &MA0;
	ch.mass2[45] = &MA0;
	ch.mass3[45] = 0;
	ch.mass4[45] = 0;
	ch.name[46] = "A0A0Ee";
	ch.amp2[46] = amp2s::A0A0Ee;
	ch.amp2fl[46] = amp2s::A0A0Eefl;
	ch.mass1[46] = &MA0;
	ch.mass2[46] = &MA0;
	ch.mass3[46] = &Me;
	ch.mass4[46] = &Me;
	ch.name[47] = "A0A0Mm";
	ch.amp2[47] = amp2s::A0A0Mm;
	ch.amp2fl[47] = amp2s::A0A0Mmfl;
	ch.mass1[47] = &MA0;
	ch.mass2[47] = &MA0;
	ch.mass3[47] = &MM;
	ch.mass4[47] = &MM;
	ch.name[48] = "A0A0TAta";
	ch.amp2[48] = amp2s::A0A0TAta;
	ch.amp2fl[48] = amp2s::A0A0TAtafl;
	ch.mass1[48] = &MA0;
	ch.mass2[48] = &MA0;
	ch.mass3[48] = &MTA;
	ch.mass4[48] = &MTA;
	ch.name[49] = "A0A0Uu";
	ch.amp2[49] = amp2s::A0A0Uu;
	ch.amp2fl[49] = amp2s::A0A0Uufl;
	ch.mass1[49] = &MA0;
	ch.mass2[49] = &MA0;
	ch.mass3[49] = &MU;
	ch.mass4[49] = &MU;
	ch.name[50] = "A0A0Cc";
	ch.amp2[50] = amp2s::A0A0Cc;
	ch.amp2fl[50] = amp2s::A0A0Ccfl;
	ch.mass1[50] = &MA0;
	ch.mass2[50] = &MA0;
	ch.mass3[50] = &MC;
	ch.mass4[50] = &MC;
	ch.name[51] = "A0A0Tt";
	ch.amp2[51] = amp2s::A0A0Tt;
	ch.amp2fl[51] = amp2s::A0A0Ttfl;
	ch.mass1[51] = &MA0;
	ch.mass2[51] = &MA0;
	ch.mass3[51] = &MT;
	ch.mass4[51] = &MT;
	ch.name[52] = "A0A0Dd";
	ch.amp2[52] = amp2s::A0A0Dd;
	ch.amp2fl[52] = amp2s::A0A0Ddfl;
	ch.mass1[52] = &MA0;
	ch.mass2[52] = &MA0;
	ch.mass3[52] = &MD;
	ch.mass4[52] = &MD;
	ch.name[53] = "A0A0Ss";
	ch.amp2[53] = amp2s::A0A0Ss;
	ch.amp2fl[53] = amp2s::A0A0Ssfl;
	ch.mass1[53] = &MA0;
	ch.mass2[53] = &MA0;
	ch.mass3[53] = &MS;
	ch.mass4[53] = &MS;
	ch.name[54] = "A0A0Bb";
	ch.amp2[54] = amp2s::A0A0Bb;
	ch.amp2fl[54] = amp2s::A0A0Bbfl;
	ch.mass1[54] = &MA0;
	ch.mass2[54] = &MA0;
	ch.mass3[54] = &MB;
	ch.mass4[54] = &MB;
	ch.name[55] = "A0HchhW";
	ch.amp2[55] = amp2s::A0HchhW;
	ch.amp2fl[55] = amp2s::A0HchhWfl;
	ch.mass1[55] = &MA0;
	ch.mass2[55] = &MHch;
	ch.mass3[55] = &mh;
	ch.mass4[55] = &MW;
	ch.name[56] = "A0HchAW";
	ch.amp2[56] = amp2s::A0HchAW;
	ch.amp2fl[56] = amp2s::A0HchAWfl;
	ch.mass1[56] = &MA0;
	ch.mass2[56] = &MHch;
	ch.mass3[56] = 0;
	ch.mass4[56] = &MW;
	ch.name[57] = "A0HchZW";
	ch.amp2[57] = amp2s::A0HchZW;
	ch.amp2fl[57] = amp2s::A0HchZWfl;
	ch.mass1[57] = &MA0;
	ch.mass2[57] = &MHch;
	ch.mass3[57] = &MZ;
	ch.mass4[57] = &MW;
	ch.name[58] = "A0HchveE";
	ch.amp2[58] = amp2s::A0HchveE;
	ch.amp2fl[58] = amp2s::A0HchveEfl;
	ch.mass1[58] = &MA0;
	ch.mass2[58] = &MHch;
	ch.mass3[58] = &Mnue;
	ch.mass4[58] = &Me;
	ch.name[59] = "A0HchvmM";
	ch.amp2[59] = amp2s::A0HchvmM;
	ch.amp2fl[59] = amp2s::A0HchvmMfl;
	ch.mass1[59] = &MA0;
	ch.mass2[59] = &MHch;
	ch.mass3[59] = &Mnum;
	ch.mass4[59] = &MM;
	ch.name[60] = "A0HchvtTA";
	ch.amp2[60] = amp2s::A0HchvtTA;
	ch.amp2fl[60] = amp2s::A0HchvtTAfl;
	ch.mass1[60] = &MA0;
	ch.mass2[60] = &MHch;
	ch.mass3[60] = &Mnut;
	ch.mass4[60] = &MTA;
	ch.name[61] = "A0HchuD";
	ch.amp2[61] = amp2s::A0HchuD;
	ch.amp2fl[61] = amp2s::A0HchuDfl;
	ch.mass1[61] = &MA0;
	ch.mass2[61] = &MHch;
	ch.mass3[61] = &MU;
	ch.mass4[61] = &MD;
	ch.name[62] = "A0HchuS";
	ch.amp2[62] = amp2s::A0HchuS;
	ch.amp2fl[62] = amp2s::A0HchuSfl;
	ch.mass1[62] = &MA0;
	ch.mass2[62] = &MHch;
	ch.mass3[62] = &MU;
	ch.mass4[62] = &MS;
	ch.name[63] = "A0HchuB";
	ch.amp2[63] = amp2s::A0HchuB;
	ch.amp2fl[63] = amp2s::A0HchuBfl;
	ch.mass1[63] = &MA0;
	ch.mass2[63] = &MHch;
	ch.mass3[63] = &MU;
	ch.mass4[63] = &MB;
	ch.name[64] = "A0HchcD";
	ch.amp2[64] = amp2s::A0HchcD;
	ch.amp2fl[64] = amp2s::A0HchcDfl;
	ch.mass1[64] = &MA0;
	ch.mass2[64] = &MHch;
	ch.mass3[64] = &MC;
	ch.mass4[64] = &MD;
	ch.name[65] = "A0HchcS";
	ch.amp2[65] = amp2s::A0HchcS;
	ch.amp2fl[65] = amp2s::A0HchcSfl;
	ch.mass1[65] = &MA0;
	ch.mass2[65] = &MHch;
	ch.mass3[65] = &MC;
	ch.mass4[65] = &MS;
	ch.name[66] = "A0HchcB";
	ch.amp2[66] = amp2s::A0HchcB;
	ch.amp2fl[66] = amp2s::A0HchcBfl;
	ch.mass1[66] = &MA0;
	ch.mass2[66] = &MHch;
	ch.mass3[66] = &MC;
	ch.mass4[66] = &MB;
	ch.name[67] = "A0HchtD";
	ch.amp2[67] = amp2s::A0HchtD;
	ch.amp2fl[67] = amp2s::A0HchtDfl;
	ch.mass1[67] = &MA0;
	ch.mass2[67] = &MHch;
	ch.mass3[67] = &MT;
	ch.mass4[67] = &MD;
	ch.name[68] = "A0HchtS";
	ch.amp2[68] = amp2s::A0HchtS;
	ch.amp2fl[68] = amp2s::A0HchtSfl;
	ch.mass1[68] = &MA0;
	ch.mass2[68] = &MHch;
	ch.mass3[68] = &MT;
	ch.mass4[68] = &MS;
	ch.name[69] = "A0HchtB";
	ch.amp2[69] = amp2s::A0HchtB;
	ch.amp2fl[69] = amp2s::A0HchtBfl;
	ch.mass1[69] = &MA0;
	ch.mass2[69] = &MHch;
	ch.mass3[69] = &MT;
	ch.mass4[69] = &MB;
	ch.name[70] = "HchHchWW";
	ch.amp2[70] = amp2s::HchHchWW;
	ch.amp2fl[70] = amp2s::HchHchWWfl;
	ch.mass1[70] = &MHch;
	ch.mass2[70] = &MHch;
	ch.mass3[70] = &MW;
	ch.mass4[70] = &MW;
	ch.name[71] = "HchHCHhh";
	ch.amp2[71] = amp2s::HchHCHhh;
	ch.amp2fl[71] = amp2s::HchHCHhhfl;
	ch.mass1[71] = &MHch;
	ch.mass2[71] = &MHch;
	ch.mass3[71] = &mh;
	ch.mass4[71] = &mh;
	ch.name[72] = "HchHCHhA";
	ch.amp2[72] = amp2s::HchHCHhA;
	ch.amp2fl[72] = amp2s::HchHCHhAfl;
	ch.mass1[72] = &MHch;
	ch.mass2[72] = &MHch;
	ch.mass3[72] = &mh;
	ch.mass4[72] = 0;
	ch.name[73] = "HchHCHhZ";
	ch.amp2[73] = amp2s::HchHCHhZ;
	ch.amp2fl[73] = amp2s::HchHCHhZfl;
	ch.mass1[73] = &MHch;
	ch.mass2[73] = &MHch;
	ch.mass3[73] = &mh;
	ch.mass4[73] = &MZ;
	ch.name[74] = "HchHCHAA";
	ch.amp2[74] = amp2s::HchHCHAA;
	ch.amp2fl[74] = amp2s::HchHCHAAfl;
	ch.mass1[74] = &MHch;
	ch.mass2[74] = &MHch;
	ch.mass3[74] = 0;
	ch.mass4[74] = 0;
	ch.name[75] = "HchHCHAZ";
	ch.amp2[75] = amp2s::HchHCHAZ;
	ch.amp2fl[75] = amp2s::HchHCHAZfl;
	ch.mass1[75] = &MHch;
	ch.mass2[75] = &MHch;
	ch.mass3[75] = 0;
	ch.mass4[75] = &MZ;
	ch.name[76] = "HchHCHZZ";
	ch.amp2[76] = amp2s::HchHCHZZ;
	ch.amp2fl[76] = amp2s::HchHCHZZfl;
	ch.mass1[76] = &MHch;
	ch.mass2[76] = &MHch;
	ch.mass3[76] = &MZ;
	ch.mass4[76] = &MZ;
	ch.name[77] = "HchHCHwW";
	ch.amp2[77] = amp2s::HchHCHwW;
	ch.amp2fl[77] = amp2s::HchHCHwWfl;
	ch.mass1[77] = &MHch;
	ch.mass2[77] = &MHch;
	ch.mass3[77] = &MW;
	ch.mass4[77] = &MW;
	ch.name[78] = "HchHCHGG";
	ch.amp2[78] = amp2s::HchHCHGG;
	ch.amp2fl[78] = amp2s::HchHCHGGfl;
	ch.mass1[78] = &MHch;
	ch.mass2[78] = &MHch;
	ch.mass3[78] = 0;
	ch.mass4[78] = 0;
	ch.name[79] = "HchHCHVEve";
	ch.amp2[79] = amp2s::HchHCHVEve;
	ch.amp2fl[79] = amp2s::HchHCHVEvefl;
	ch.mass1[79] = &MHch;
	ch.mass2[79] = &MHch;
	ch.mass3[79] = &Mnue;
	ch.mass4[79] = &Mnue;
	ch.name[80] = "HchHCHVMvm";
	ch.amp2[80] = amp2s::HchHCHVMvm;
	ch.amp2fl[80] = amp2s::HchHCHVMvmfl;
	ch.mass1[80] = &MHch;
	ch.mass2[80] = &MHch;
	ch.mass3[80] = &Mnum;
	ch.mass4[80] = &Mnum;
	ch.name[81] = "HchHCHVTvt";
	ch.amp2[81] = amp2s::HchHCHVTvt;
	ch.amp2fl[81] = amp2s::HchHCHVTvtfl;
	ch.mass1[81] = &MHch;
	ch.mass2[81] = &MHch;
	ch.mass3[81] = &Mnut;
	ch.mass4[81] = &Mnut;
	ch.name[82] = "HchHCHEe";
	ch.amp2[82] = amp2s::HchHCHEe;
	ch.amp2fl[82] = amp2s::HchHCHEefl;
	ch.mass1[82] = &MHch;
	ch.mass2[82] = &MHch;
	ch.mass3[82] = &Me;
	ch.mass4[82] = &Me;
	ch.name[83] = "HchHCHMm";
	ch.amp2[83] = amp2s::HchHCHMm;
	ch.amp2fl[83] = amp2s::HchHCHMmfl;
	ch.mass1[83] = &MHch;
	ch.mass2[83] = &MHch;
	ch.mass3[83] = &MM;
	ch.mass4[83] = &MM;
	ch.name[84] = "HchHCHTAta";
	ch.amp2[84] = amp2s::HchHCHTAta;
	ch.amp2fl[84] = amp2s::HchHCHTAtafl;
	ch.mass1[84] = &MHch;
	ch.mass2[84] = &MHch;
	ch.mass3[84] = &MTA;
	ch.mass4[84] = &MTA;
	ch.name[85] = "HchHCHUu";
	ch.amp2[85] = amp2s::HchHCHUu;
	ch.amp2fl[85] = amp2s::HchHCHUufl;
	ch.mass1[85] = &MHch;
	ch.mass2[85] = &MHch;
	ch.mass3[85] = &MU;
	ch.mass4[85] = &MU;
	ch.name[86] = "HchHCHCc";
	ch.amp2[86] = amp2s::HchHCHCc;
	ch.amp2fl[86] = amp2s::HchHCHCcfl;
	ch.mass1[86] = &MHch;
	ch.mass2[86] = &MHch;
	ch.mass3[86] = &MC;
	ch.mass4[86] = &MC;
	ch.name[87] = "HchHCHTt";
	ch.amp2[87] = amp2s::HchHCHTt;
	ch.amp2fl[87] = amp2s::HchHCHTtfl;
	ch.mass1[87] = &MHch;
	ch.mass2[87] = &MHch;
	ch.mass3[87] = &MT;
	ch.mass4[87] = &MT;
	ch.name[88] = "HchHCHDd";
	ch.amp2[88] = amp2s::HchHCHDd;
	ch.amp2fl[88] = amp2s::HchHCHDdfl;
	ch.mass1[88] = &MHch;
	ch.mass2[88] = &MHch;
	ch.mass3[88] = &MD;
	ch.mass4[88] = &MD;
	ch.name[89] = "HchHCHSs";
	ch.amp2[89] = amp2s::HchHCHSs;
	ch.amp2fl[89] = amp2s::HchHCHSsfl;
	ch.mass1[89] = &MHch;
	ch.mass2[89] = &MHch;
	ch.mass3[89] = &MS;
	ch.mass4[89] = &MS;
	ch.name[90] = "HchHCHBb";
	ch.amp2[90] = amp2s::HchHCHBb;
	ch.amp2fl[90] = amp2s::HchHCHBbfl;
	ch.mass1[90] = &MHch;
	ch.mass2[90] = &MHch;
	ch.mass3[90] = &MB;
	ch.mass4[90] = &MB;
}
}
