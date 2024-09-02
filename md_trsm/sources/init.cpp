///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"

namespace DT{
	void Model::init()
	{
		particles["Chi"]=&MChi;
		particles["Psi"]=&MPsi;
		dsDof["Chi"]=1.;
		dsDof["Psi"]=1.;
		neutraldsmasses.push_back(&MChi);
		neutraldsmasses.push_back(&MPsi);
		ADDCHANNEL(ChiChiHH, ChiChiHHfl, MChi, MChi, MH, MH)
		ADDCHANNEL(ChiChiAA, ChiChiAAfl, MChi, MChi, ZERO, ZERO)
		ADDCHANNEL(ChiChiZZ, ChiChiZZfl, MChi, MChi, MZ, MZ)
		ADDCHANNEL(ChiChiwW, ChiChiwWfl, MChi, MChi, MW, MW)
		ADDCHANNEL(ChiChiGG, ChiChiGGfl, MChi, MChi, ZERO, ZERO)
		ADDCHANNEL(ChiChiEe, ChiChiEefl, MChi, MChi, Me, Me)
		ADDCHANNEL(ChiChiMUmu, ChiChiMUmufl, MChi, MChi, MMU, MMU)
		ADDCHANNEL(ChiChiTAta, ChiChiTAtafl, MChi, MChi, MTA, MTA)
		ADDCHANNEL(ChiChiUu, ChiChiUufl, MChi, MChi, MU, MU)
		ADDCHANNEL(ChiChiCc, ChiChiCcfl, MChi, MChi, MC, MC)
		ADDCHANNEL(ChiChiTt, ChiChiTtfl, MChi, MChi, MT, MT)
		ADDCHANNEL(ChiChiDd, ChiChiDdfl, MChi, MChi, MD, MD)
		ADDCHANNEL(ChiChiSs, ChiChiSsfl, MChi, MChi, MS, MS)
		ADDCHANNEL(ChiChiBb, ChiChiBbfl, MChi, MChi, MB, MB)
		ADDCHANNEL(ChiPsiHH, ChiPsiHHfl, MChi, MPsi, MH, MH)
		ADDCHANNEL(ChiPsiAA, ChiPsiAAfl, MChi, MPsi, ZERO, ZERO)
		ADDCHANNEL(ChiPsiZZ, ChiPsiZZfl, MChi, MPsi, MZ, MZ)
		ADDCHANNEL(ChiPsiwW, ChiPsiwWfl, MChi, MPsi, MW, MW)
		ADDCHANNEL(ChiPsiGG, ChiPsiGGfl, MChi, MPsi, ZERO, ZERO)
		ADDCHANNEL(ChiPsiEe, ChiPsiEefl, MChi, MPsi, Me, Me)
		ADDCHANNEL(ChiPsiMUmu, ChiPsiMUmufl, MChi, MPsi, MMU, MMU)
		ADDCHANNEL(ChiPsiTAta, ChiPsiTAtafl, MChi, MPsi, MTA, MTA)
		ADDCHANNEL(ChiPsiUu, ChiPsiUufl, MChi, MPsi, MU, MU)
		ADDCHANNEL(ChiPsiCc, ChiPsiCcfl, MChi, MPsi, MC, MC)
		ADDCHANNEL(ChiPsiTt, ChiPsiTtfl, MChi, MPsi, MT, MT)
		ADDCHANNEL(ChiPsiDd, ChiPsiDdfl, MChi, MPsi, MD, MD)
		ADDCHANNEL(ChiPsiSs, ChiPsiSsfl, MChi, MPsi, MS, MS)
		ADDCHANNEL(ChiPsiBb, ChiPsiBbfl, MChi, MPsi, MB, MB)
		ADDCHANNEL(PsiPsiHH, PsiPsiHHfl, MPsi, MPsi, MH, MH)
		ADDCHANNEL(PsiPsiAA, PsiPsiAAfl, MPsi, MPsi, ZERO, ZERO)
		ADDCHANNEL(PsiPsiZZ, PsiPsiZZfl, MPsi, MPsi, MZ, MZ)
		ADDCHANNEL(PsiPsiwW, PsiPsiwWfl, MPsi, MPsi, MW, MW)
		ADDCHANNEL(PsiPsiGG, PsiPsiGGfl, MPsi, MPsi, ZERO, ZERO)
		ADDCHANNEL(PsiPsiEe, PsiPsiEefl, MPsi, MPsi, Me, Me)
		ADDCHANNEL(PsiPsiMUmu, PsiPsiMUmufl, MPsi, MPsi, MMU, MMU)
		ADDCHANNEL(PsiPsiTAta, PsiPsiTAtafl, MPsi, MPsi, MTA, MTA)
		ADDCHANNEL(PsiPsiUu, PsiPsiUufl, MPsi, MPsi, MU, MU)
		ADDCHANNEL(PsiPsiCc, PsiPsiCcfl, MPsi, MPsi, MC, MC)
		ADDCHANNEL(PsiPsiTt, PsiPsiTtfl, MPsi, MPsi, MT, MT)
		ADDCHANNEL(PsiPsiDd, PsiPsiDdfl, MPsi, MPsi, MD, MD)
		ADDCHANNEL(PsiPsiSs, PsiPsiSsfl, MPsi, MPsi, MS, MS)
		ADDCHANNEL(PsiPsiBb, PsiPsiBbfl, MPsi, MPsi, MB, MB)
		denstructures.push_back(&MH);
		denstructures.push_back(&WH);
		N_widths = 1;
	}
}
