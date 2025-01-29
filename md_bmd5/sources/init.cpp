///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"

namespace DT{
	void ModelInfo::init()
	{
		using namespace PAR;
		DSmasses["chiM"]=&MchiM;
		DSmasses["CHIM"]=&MchiM;
		DSmasses["chi0"]=&Mchi0;
		DSmasses["CHI0"]=&Mchi0;
		DSmasses["S0"]=&MS0;
		DSmasses["A0"]=&MA0;
		DSmasses["pQ"]=&MphiQ;
		DSmasses["PQ"]=&MphiQ;
		DSdof["chiM"]=2;
		DSdof["CHIM"]=2;
		DSdof["chi0"]=2;
		DSdof["CHI0"]=2;
		DSdof["S0"]=1;
		DSdof["A0"]=1;
		DSdof["pQ"]=3;
		DSdof["PQ"]=3;
		neutraldsmasses.push_back(&Mchi0);
		neutraldsmasses.push_back(&MS0);
		neutraldsmasses.push_back(&MA0);
		denstructures.push_back(&MZ);
		denstructures.push_back(&WZ);
		denstructures.push_back(&MW);
		denstructures.push_back(&WW);
		denstructures.push_back(&MT);
		denstructures.push_back(&WT);
		denstructures.push_back(&MH);
		denstructures.push_back(&WH);
		N_widths = 4;
	}


	void AnnihilationAmps::init()
	{
		ADDCHANNEL("chiM,chiM,mu,mu",chiMchiMmumu, chiMchiMmumufl)
		ADDCHANNEL("chiM,CHIM,H,Z",chiMCHIMHZ, chiMCHIMHZfl)
		ADDCHANNEL("chiM,CHIM,A,A",chiMCHIMAA, chiMCHIMAAfl)
		ADDCHANNEL("chiM,CHIM,A,Z",chiMCHIMAZ, chiMCHIMAZfl)
		ADDCHANNEL("chiM,CHIM,Z,Z",chiMCHIMZZ, chiMCHIMZZfl)
		ADDCHANNEL("chiM,CHIM,w,W",chiMCHIMwW, chiMCHIMwWfl)
		ADDCHANNEL("chiM,CHIM,VE,ve",chiMCHIMVEve, chiMCHIMVEvefl)
		ADDCHANNEL("chiM,CHIM,VM,vm",chiMCHIMVMvm, chiMCHIMVMvmfl)
		ADDCHANNEL("chiM,CHIM,VT,vt",chiMCHIMVTvt, chiMCHIMVTvtfl)
		ADDCHANNEL("chiM,CHIM,E,e",chiMCHIMEe, chiMCHIMEefl)
		ADDCHANNEL("chiM,CHIM,MU,mu",chiMCHIMMUmu, chiMCHIMMUmufl)
		ADDCHANNEL("chiM,CHIM,TA,ta",chiMCHIMTAta, chiMCHIMTAtafl)
		ADDCHANNEL("chiM,CHIM,U,u",chiMCHIMUu, chiMCHIMUufl)
		ADDCHANNEL("chiM,CHIM,C,c",chiMCHIMCc, chiMCHIMCcfl)
		ADDCHANNEL("chiM,CHIM,T,t",chiMCHIMTt, chiMCHIMTtfl)
		ADDCHANNEL("chiM,CHIM,D,d",chiMCHIMDd, chiMCHIMDdfl)
		ADDCHANNEL("chiM,CHIM,S,s",chiMCHIMSs, chiMCHIMSsfl)
		ADDCHANNEL("chiM,CHIM,S,b",chiMCHIMSb, chiMCHIMSbfl)
		ADDCHANNEL("chiM,CHIM,s,B",chiMCHIMsB, chiMCHIMsBfl)
		ADDCHANNEL("chiM,CHIM,B,b",chiMCHIMBb, chiMCHIMBbfl)
		ADDCHANNEL("chiM,chi0,vm,mu",chiMchi0vmmu, chiMchi0vmmufl)
		ADDCHANNEL("chiM,CHI0,H,w",chiMCHI0Hw, chiMCHI0Hwfl)
		ADDCHANNEL("chiM,CHI0,A,w",chiMCHI0Aw, chiMCHI0Awfl)
		ADDCHANNEL("chiM,CHI0,Z,w",chiMCHI0Zw, chiMCHI0Zwfl)
		ADDCHANNEL("chiM,CHI0,VE,e",chiMCHI0VEe, chiMCHI0VEefl)
		ADDCHANNEL("chiM,CHI0,VM,mu",chiMCHI0VMmu, chiMCHI0VMmufl)
		ADDCHANNEL("chiM,CHI0,VT,ta",chiMCHI0VTta, chiMCHI0VTtafl)
		ADDCHANNEL("chiM,CHI0,U,d",chiMCHI0Ud, chiMCHI0Udfl)
		ADDCHANNEL("chiM,CHI0,U,s",chiMCHI0Us, chiMCHI0Usfl)
		ADDCHANNEL("chiM,CHI0,U,b",chiMCHI0Ub, chiMCHI0Ubfl)
		ADDCHANNEL("chiM,CHI0,C,d",chiMCHI0Cd, chiMCHI0Cdfl)
		ADDCHANNEL("chiM,CHI0,C,s",chiMCHI0Cs, chiMCHI0Csfl)
		ADDCHANNEL("chiM,CHI0,C,b",chiMCHI0Cb, chiMCHI0Cbfl)
		ADDCHANNEL("chiM,CHI0,T,d",chiMCHI0Td, chiMCHI0Tdfl)
		ADDCHANNEL("chiM,CHI0,T,s",chiMCHI0Ts, chiMCHI0Tsfl)
		ADDCHANNEL("chiM,CHI0,T,b",chiMCHI0Tb, chiMCHI0Tbfl)
		ADDCHANNEL("chiM,S0,H,mu",chiMS0Hmu, chiMS0Hmufl)
		ADDCHANNEL("chiM,S0,A,mu",chiMS0Amu, chiMS0Amufl)
		ADDCHANNEL("chiM,S0,Z,mu",chiMS0Zmu, chiMS0Zmufl)
		ADDCHANNEL("chiM,S0,w,vm",chiMS0wvm, chiMS0wvmfl)
		ADDCHANNEL("chiM,A0,H,mu",chiMA0Hmu, chiMA0Hmufl)
		ADDCHANNEL("chiM,A0,A,mu",chiMA0Amu, chiMA0Amufl)
		ADDCHANNEL("chiM,A0,Z,mu",chiMA0Zmu, chiMA0Zmufl)
		ADDCHANNEL("chiM,A0,w,vm",chiMA0wvm, chiMA0wvmfl)
		ADDCHANNEL("chiM,pQ,H,s",chiMpQHs, chiMpQHsfl)
		ADDCHANNEL("chiM,pQ,H,b",chiMpQHb, chiMpQHbfl)
		ADDCHANNEL("chiM,pQ,A,s",chiMpQAs, chiMpQAsfl)
		ADDCHANNEL("chiM,pQ,A,b",chiMpQAb, chiMpQAbfl)
		ADDCHANNEL("chiM,pQ,Z,s",chiMpQZs, chiMpQZsfl)
		ADDCHANNEL("chiM,pQ,Z,b",chiMpQZb, chiMpQZbfl)
		ADDCHANNEL("chiM,pQ,w,u",chiMpQwu, chiMpQwufl)
		ADDCHANNEL("chiM,pQ,w,c",chiMpQwc, chiMpQwcfl)
		ADDCHANNEL("chiM,pQ,w,t",chiMpQwt, chiMpQwtfl)
		ADDCHANNEL("chiM,pQ,G,s",chiMpQGs, chiMpQGsfl)
		ADDCHANNEL("chiM,pQ,G,b",chiMpQGb, chiMpQGbfl)
		ADDCHANNEL("chi0,chi0,vm,vm",chi0chi0vmvm, chi0chi0vmvmfl)
		ADDCHANNEL("chi0,CHI0,H,Z",chi0CHI0HZ, chi0CHI0HZfl)
		ADDCHANNEL("chi0,CHI0,Z,Z",chi0CHI0ZZ, chi0CHI0ZZfl)
		ADDCHANNEL("chi0,CHI0,w,W",chi0CHI0wW, chi0CHI0wWfl)
		ADDCHANNEL("chi0,CHI0,VE,ve",chi0CHI0VEve, chi0CHI0VEvefl)
		ADDCHANNEL("chi0,CHI0,VM,vm",chi0CHI0VMvm, chi0CHI0VMvmfl)
		ADDCHANNEL("chi0,CHI0,VT,vt",chi0CHI0VTvt, chi0CHI0VTvtfl)
		ADDCHANNEL("chi0,CHI0,E,e",chi0CHI0Ee, chi0CHI0Eefl)
		ADDCHANNEL("chi0,CHI0,MU,mu",chi0CHI0MUmu, chi0CHI0MUmufl)
		ADDCHANNEL("chi0,CHI0,TA,ta",chi0CHI0TAta, chi0CHI0TAtafl)
		ADDCHANNEL("chi0,CHI0,U,u",chi0CHI0Uu, chi0CHI0Uufl)
		ADDCHANNEL("chi0,CHI0,U,c",chi0CHI0Uc, chi0CHI0Ucfl)
		ADDCHANNEL("chi0,CHI0,U,t",chi0CHI0Ut, chi0CHI0Utfl)
		ADDCHANNEL("chi0,CHI0,u,C",chi0CHI0uC, chi0CHI0uCfl)
		ADDCHANNEL("chi0,CHI0,u,T",chi0CHI0uT, chi0CHI0uTfl)
		ADDCHANNEL("chi0,CHI0,C,c",chi0CHI0Cc, chi0CHI0Ccfl)
		ADDCHANNEL("chi0,CHI0,C,t",chi0CHI0Ct, chi0CHI0Ctfl)
		ADDCHANNEL("chi0,CHI0,c,T",chi0CHI0cT, chi0CHI0cTfl)
		ADDCHANNEL("chi0,CHI0,T,t",chi0CHI0Tt, chi0CHI0Ttfl)
		ADDCHANNEL("chi0,CHI0,D,d",chi0CHI0Dd, chi0CHI0Ddfl)
		ADDCHANNEL("chi0,CHI0,S,s",chi0CHI0Ss, chi0CHI0Ssfl)
		ADDCHANNEL("chi0,CHI0,B,b",chi0CHI0Bb, chi0CHI0Bbfl)
		ADDCHANNEL("chi0,S0,H,vm",chi0S0Hvm, chi0S0Hvmfl)
		ADDCHANNEL("chi0,S0,Z,vm",chi0S0Zvm, chi0S0Zvmfl)
		ADDCHANNEL("chi0,S0,W,mu",chi0S0Wmu, chi0S0Wmufl)
		ADDCHANNEL("chi0,A0,H,vm",chi0A0Hvm, chi0A0Hvmfl)
		ADDCHANNEL("chi0,A0,Z,vm",chi0A0Zvm, chi0A0Zvmfl)
		ADDCHANNEL("chi0,A0,W,mu",chi0A0Wmu, chi0A0Wmufl)
		ADDCHANNEL("chi0,pQ,H,u",chi0pQHu, chi0pQHufl)
		ADDCHANNEL("chi0,pQ,H,c",chi0pQHc, chi0pQHcfl)
		ADDCHANNEL("chi0,pQ,H,t",chi0pQHt, chi0pQHtfl)
		ADDCHANNEL("chi0,pQ,A,u",chi0pQAu, chi0pQAufl)
		ADDCHANNEL("chi0,pQ,A,c",chi0pQAc, chi0pQAcfl)
		ADDCHANNEL("chi0,pQ,A,t",chi0pQAt, chi0pQAtfl)
		ADDCHANNEL("chi0,pQ,Z,u",chi0pQZu, chi0pQZufl)
		ADDCHANNEL("chi0,pQ,Z,c",chi0pQZc, chi0pQZcfl)
		ADDCHANNEL("chi0,pQ,Z,t",chi0pQZt, chi0pQZtfl)
		ADDCHANNEL("chi0,pQ,W,d",chi0pQWd, chi0pQWdfl)
		ADDCHANNEL("chi0,pQ,W,s",chi0pQWs, chi0pQWsfl)
		ADDCHANNEL("chi0,pQ,W,b",chi0pQWb, chi0pQWbfl)
		ADDCHANNEL("chi0,pQ,G,u",chi0pQGu, chi0pQGufl)
		ADDCHANNEL("chi0,pQ,G,c",chi0pQGc, chi0pQGcfl)
		ADDCHANNEL("chi0,pQ,G,t",chi0pQGt, chi0pQGtfl)
		ADDCHANNEL("S0,S0,H,H",S0S0HH, S0S0HHfl)
		ADDCHANNEL("S0,S0,Z,Z",S0S0ZZ, S0S0ZZfl)
		ADDCHANNEL("S0,S0,w,W",S0S0wW, S0S0wWfl)
		ADDCHANNEL("S0,S0,VM,vm",S0S0VMvm, S0S0VMvmfl)
		ADDCHANNEL("S0,S0,E,e",S0S0Ee, S0S0Eefl)
		ADDCHANNEL("S0,S0,MU,mu",S0S0MUmu, S0S0MUmufl)
		ADDCHANNEL("S0,S0,TA,ta",S0S0TAta, S0S0TAtafl)
		ADDCHANNEL("S0,S0,U,u",S0S0Uu, S0S0Uufl)
		ADDCHANNEL("S0,S0,C,c",S0S0Cc, S0S0Ccfl)
		ADDCHANNEL("S0,S0,T,t",S0S0Tt, S0S0Ttfl)
		ADDCHANNEL("S0,S0,D,d",S0S0Dd, S0S0Ddfl)
		ADDCHANNEL("S0,S0,S,s",S0S0Ss, S0S0Ssfl)
		ADDCHANNEL("S0,S0,B,b",S0S0Bb, S0S0Bbfl)
		ADDCHANNEL("S0,A0,VM,vm",S0A0VMvm, S0A0VMvmfl)
		ADDCHANNEL("S0,A0,MU,mu",S0A0MUmu, S0A0MUmufl)
		ADDCHANNEL("S0,pQ,VM,u",S0pQVMu, S0pQVMufl)
		ADDCHANNEL("S0,pQ,VM,c",S0pQVMc, S0pQVMcfl)
		ADDCHANNEL("S0,pQ,VM,t",S0pQVMt, S0pQVMtfl)
		ADDCHANNEL("S0,pQ,MU,s",S0pQMUs, S0pQMUsfl)
		ADDCHANNEL("S0,pQ,MU,b",S0pQMUb, S0pQMUbfl)
		ADDCHANNEL("A0,A0,H,H",A0A0HH, A0A0HHfl)
		ADDCHANNEL("A0,A0,Z,Z",A0A0ZZ, A0A0ZZfl)
		ADDCHANNEL("A0,A0,w,W",A0A0wW, A0A0wWfl)
		ADDCHANNEL("A0,A0,VM,vm",A0A0VMvm, A0A0VMvmfl)
		ADDCHANNEL("A0,A0,E,e",A0A0Ee, A0A0Eefl)
		ADDCHANNEL("A0,A0,MU,mu",A0A0MUmu, A0A0MUmufl)
		ADDCHANNEL("A0,A0,TA,ta",A0A0TAta, A0A0TAtafl)
		ADDCHANNEL("A0,A0,U,u",A0A0Uu, A0A0Uufl)
		ADDCHANNEL("A0,A0,C,c",A0A0Cc, A0A0Ccfl)
		ADDCHANNEL("A0,A0,T,t",A0A0Tt, A0A0Ttfl)
		ADDCHANNEL("A0,A0,D,d",A0A0Dd, A0A0Ddfl)
		ADDCHANNEL("A0,A0,S,s",A0A0Ss, A0A0Ssfl)
		ADDCHANNEL("A0,A0,B,b",A0A0Bb, A0A0Bbfl)
		ADDCHANNEL("A0,pQ,VM,u",A0pQVMu, A0pQVMufl)
		ADDCHANNEL("A0,pQ,VM,c",A0pQVMc, A0pQVMcfl)
		ADDCHANNEL("A0,pQ,VM,t",A0pQVMt, A0pQVMtfl)
		ADDCHANNEL("A0,pQ,MU,s",A0pQMUs, A0pQMUsfl)
		ADDCHANNEL("A0,pQ,MU,b",A0pQMUb, A0pQMUbfl)
		ADDCHANNEL("pQ,PQ,H,H",pQPQHH, pQPQHHfl)
		ADDCHANNEL("pQ,PQ,H,A",pQPQHA, pQPQHAfl)
		ADDCHANNEL("pQ,PQ,H,Z",pQPQHZ, pQPQHZfl)
		ADDCHANNEL("pQ,PQ,H,G",pQPQHG, pQPQHGfl)
		ADDCHANNEL("pQ,PQ,A,A",pQPQAA, pQPQAAfl)
		ADDCHANNEL("pQ,PQ,A,Z",pQPQAZ, pQPQAZfl)
		ADDCHANNEL("pQ,PQ,A,G",pQPQAG, pQPQAGfl)
		ADDCHANNEL("pQ,PQ,Z,Z",pQPQZZ, pQPQZZfl)
		ADDCHANNEL("pQ,PQ,Z,G",pQPQZG, pQPQZGfl)
		ADDCHANNEL("pQ,PQ,w,W",pQPQwW, pQPQwWfl)
		ADDCHANNEL("pQ,PQ,G,G",pQPQGG, pQPQGGfl)
		ADDCHANNEL("pQ,PQ,VE,ve",pQPQVEve, pQPQVEvefl)
		ADDCHANNEL("pQ,PQ,VM,vm",pQPQVMvm, pQPQVMvmfl)
		ADDCHANNEL("pQ,PQ,VT,vt",pQPQVTvt, pQPQVTvtfl)
		ADDCHANNEL("pQ,PQ,E,e",pQPQEe, pQPQEefl)
		ADDCHANNEL("pQ,PQ,MU,mu",pQPQMUmu, pQPQMUmufl)
		ADDCHANNEL("pQ,PQ,TA,ta",pQPQTAta, pQPQTAtafl)
		ADDCHANNEL("pQ,PQ,U,u",pQPQUu, pQPQUufl)
		ADDCHANNEL("pQ,PQ,U,c",pQPQUc, pQPQUcfl)
		ADDCHANNEL("pQ,PQ,U,t",pQPQUt, pQPQUtfl)
		ADDCHANNEL("pQ,PQ,u,C",pQPQuC, pQPQuCfl)
		ADDCHANNEL("pQ,PQ,u,T",pQPQuT, pQPQuTfl)
		ADDCHANNEL("pQ,PQ,C,c",pQPQCc, pQPQCcfl)
		ADDCHANNEL("pQ,PQ,C,t",pQPQCt, pQPQCtfl)
		ADDCHANNEL("pQ,PQ,c,T",pQPQcT, pQPQcTfl)
		ADDCHANNEL("pQ,PQ,T,t",pQPQTt, pQPQTtfl)
		ADDCHANNEL("pQ,PQ,D,d",pQPQDd, pQPQDdfl)
		ADDCHANNEL("pQ,PQ,S,s",pQPQSs, pQPQSsfl)
		ADDCHANNEL("pQ,PQ,S,b",pQPQSb, pQPQSbfl)
		ADDCHANNEL("pQ,PQ,s,B",pQPQsB, pQPQsBfl)
		ADDCHANNEL("pQ,PQ,B,b",pQPQBb, pQPQBbfl)
	}
}
