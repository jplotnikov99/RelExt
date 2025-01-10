///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"

namespace DT{
	void ModelInfo::init()
	{
		DSmasses["Chi"]=&MChi;
		DSmasses["Psi"]=&MPsi;
		DSdof["Chi"]=1;
		DSdof["Psi"]=1;
		neutraldsmasses.push_back(&MChi);
		neutraldsmasses.push_back(&MPsi);
		denstructures.push_back(&MH);
		denstructures.push_back(&WH);
		N_widths = 1;
	}


	void AnnihilationAmps::init()
	{
		ADDCHANNEL("Chi,Chi,H,H",ChiChiHH, ChiChiHHfl)
		ADDCHANNEL("Chi,Chi,A,A",ChiChiAA, ChiChiAAfl)
		ADDCHANNEL("Chi,Chi,Z,Z",ChiChiZZ, ChiChiZZfl)
		ADDCHANNEL("Chi,Chi,w,W",ChiChiwW, ChiChiwWfl)
		ADDCHANNEL("Chi,Chi,G,G",ChiChiGG, ChiChiGGfl)
		ADDCHANNEL("Chi,Chi,E,e",ChiChiEe, ChiChiEefl)
		ADDCHANNEL("Chi,Chi,MU,mu",ChiChiMUmu, ChiChiMUmufl)
		ADDCHANNEL("Chi,Chi,TA,ta",ChiChiTAta, ChiChiTAtafl)
		ADDCHANNEL("Chi,Chi,U,u",ChiChiUu, ChiChiUufl)
		ADDCHANNEL("Chi,Chi,C,c",ChiChiCc, ChiChiCcfl)
		ADDCHANNEL("Chi,Chi,T,t",ChiChiTt, ChiChiTtfl)
		ADDCHANNEL("Chi,Chi,D,d",ChiChiDd, ChiChiDdfl)
		ADDCHANNEL("Chi,Chi,S,s",ChiChiSs, ChiChiSsfl)
		ADDCHANNEL("Chi,Chi,B,b",ChiChiBb, ChiChiBbfl)
		ADDCHANNEL("Chi,Psi,H,H",ChiPsiHH, ChiPsiHHfl)
		ADDCHANNEL("Chi,Psi,A,A",ChiPsiAA, ChiPsiAAfl)
		ADDCHANNEL("Chi,Psi,Z,Z",ChiPsiZZ, ChiPsiZZfl)
		ADDCHANNEL("Chi,Psi,w,W",ChiPsiwW, ChiPsiwWfl)
		ADDCHANNEL("Chi,Psi,G,G",ChiPsiGG, ChiPsiGGfl)
		ADDCHANNEL("Chi,Psi,E,e",ChiPsiEe, ChiPsiEefl)
		ADDCHANNEL("Chi,Psi,MU,mu",ChiPsiMUmu, ChiPsiMUmufl)
		ADDCHANNEL("Chi,Psi,TA,ta",ChiPsiTAta, ChiPsiTAtafl)
		ADDCHANNEL("Chi,Psi,U,u",ChiPsiUu, ChiPsiUufl)
		ADDCHANNEL("Chi,Psi,C,c",ChiPsiCc, ChiPsiCcfl)
		ADDCHANNEL("Chi,Psi,T,t",ChiPsiTt, ChiPsiTtfl)
		ADDCHANNEL("Chi,Psi,D,d",ChiPsiDd, ChiPsiDdfl)
		ADDCHANNEL("Chi,Psi,S,s",ChiPsiSs, ChiPsiSsfl)
		ADDCHANNEL("Chi,Psi,B,b",ChiPsiBb, ChiPsiBbfl)
		ADDCHANNEL("Psi,Psi,H,H",PsiPsiHH, PsiPsiHHfl)
		ADDCHANNEL("Psi,Psi,A,A",PsiPsiAA, PsiPsiAAfl)
		ADDCHANNEL("Psi,Psi,Z,Z",PsiPsiZZ, PsiPsiZZfl)
		ADDCHANNEL("Psi,Psi,w,W",PsiPsiwW, PsiPsiwWfl)
		ADDCHANNEL("Psi,Psi,G,G",PsiPsiGG, PsiPsiGGfl)
		ADDCHANNEL("Psi,Psi,E,e",PsiPsiEe, PsiPsiEefl)
		ADDCHANNEL("Psi,Psi,MU,mu",PsiPsiMUmu, PsiPsiMUmufl)
		ADDCHANNEL("Psi,Psi,TA,ta",PsiPsiTAta, PsiPsiTAtafl)
		ADDCHANNEL("Psi,Psi,U,u",PsiPsiUu, PsiPsiUufl)
		ADDCHANNEL("Psi,Psi,C,c",PsiPsiCc, PsiPsiCcfl)
		ADDCHANNEL("Psi,Psi,T,t",PsiPsiTt, PsiPsiTtfl)
		ADDCHANNEL("Psi,Psi,D,d",PsiPsiDd, PsiPsiDdfl)
		ADDCHANNEL("Psi,Psi,S,s",PsiPsiSs, PsiPsiSsfl)
		ADDCHANNEL("Psi,Psi,B,b",PsiPsiBb, PsiPsiBbfl)
	}
}
