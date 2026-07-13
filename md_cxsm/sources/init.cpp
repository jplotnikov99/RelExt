///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"

namespace DT{
	void ModelInfo::init()
	{
		using namespace PAR;
		DSmasses["A1"]=&MA1;
		DSdof["A1"]=1;
		neutraldsmasses.push_back(&MA1);
		denstructures.push_back(&MH);
		denstructures.push_back(&WH);
		denstructures.push_back(&MS1);
		denstructures.push_back(&WS1);
		N_widths = 2;
	}


void AnnihilationAmps::init()
{
    if (nlo) {
        if (qcd) {
        ADDCHANNEL("A1,A1,H,H",   A1A1HH,   A1A1HHfl);
        ADDCHANNEL("A1,A1,H,S1",  A1A1HS1,  A1A1HS1fl);
        ADDCHANNEL("A1,A1,S1,S1", A1A1S1S1, A1A1S1S1fl);
        ADDCHANNEL("A1,A1,Z,Z",   A1A1ZZ,   A1A1ZZfl);
        ADDCHANNEL("A1,A1,w,W",   A1A1wW,   A1A1wWfl);
        ADDCHANNEL("A1,A1,TA,ta", A1A1TAta, A1A1TAtafl);
        ADDCHANNEL("A1,A1,T,t",   A1A1TtNLOQCD,   A1A1TtflQCD);
        ADDCHANNEL("A1,A1,B,b",   A1A1BbNLOQCD,   A1A1BbflQCD);

       
        return;
        }


        else {
            if (renormalpha == 1) {

                if (renormvs == 1) {
                    ADDCHANNEL("A1,A1,H,H",   A1A1HHNLOOS1,   A1A1HHNLOflOS1);
                    ADDCHANNEL("A1,A1,H,S1",  A1A1HS1NLOOS1,  A1A1HS1NLOflOS1);
                    ADDCHANNEL("A1,A1,S1,S1", A1A1S1S1NLOOS1, A1A1S1S1NLOflOS1);
                    ADDCHANNEL("A1,A1,Z,Z",   A1A1ZZNLOOS1,   A1A1ZZNLOflOS1);
                    ADDCHANNEL("A1,A1,w,W",   A1A1wWNLOOS1,   A1A1wWNLOflOS1);
                    ADDCHANNEL("A1,A1,TA,ta", A1A1TAtaNLOOS1, A1A1TAtaNLOflOS1);
                    ADDCHANNEL("A1,A1,T,t",   A1A1TtNLOOS1,   A1A1TtNLOflOS1);
                    ADDCHANNEL("A1,A1,B,b",   A1A1BbNLOOS1,   A1A1BbNLOflOS1);
                }
                else if (renormvs == 2) {
                    ADDCHANNEL("A1,A1,H,H",   A1A1HHNLOOS2,   A1A1HHNLOflOS2);
                    ADDCHANNEL("A1,A1,H,S1",  A1A1HS1NLOOS2,  A1A1HS1NLOflOS2);
                    ADDCHANNEL("A1,A1,S1,S1", A1A1S1S1NLOOS2, A1A1S1S1NLOflOS2);
                    ADDCHANNEL("A1,A1,Z,Z",   A1A1ZZNLOOS2,   A1A1ZZNLOflOS2);
                    ADDCHANNEL("A1,A1,w,W",   A1A1wWNLOOS2,   A1A1wWNLOflOS2);
                    ADDCHANNEL("A1,A1,TA,ta", A1A1TAtaNLOOS2, A1A1TAtaNLOflOS2);
                    ADDCHANNEL("A1,A1,T,t",   A1A1TtNLOOS2,   A1A1TtNLOflOS2);
                    ADDCHANNEL("A1,A1,B,b",   A1A1BbNLOOS2,   A1A1BbNLOflOS2);
                } 
                else if (renormvs == 3) {
                    ADDCHANNEL("A1,A1,H,H",   A1A1HHNLOZ1,   A1A1HHNLOflZ1);
                    ADDCHANNEL("A1,A1,H,S1",  A1A1HS1NLOZ1,  A1A1HS1NLOflZ1);
                    ADDCHANNEL("A1,A1,S1,S1", A1A1S1S1NLOZ1, A1A1S1S1NLOflZ1);
                    ADDCHANNEL("A1,A1,Z,Z",   A1A1ZZNLOZ1,   A1A1ZZNLOflZ1);
                    ADDCHANNEL("A1,A1,w,W",   A1A1wWNLOZ1,   A1A1wWNLOflZ1);
                    ADDCHANNEL("A1,A1,TA,ta", A1A1TAtaNLOZ1, A1A1TAtaNLOflZ1);
                    ADDCHANNEL("A1,A1,T,t",   A1A1TtNLOZ1,   A1A1TtNLOflZ1);
                    ADDCHANNEL("A1,A1,B,b",   A1A1BbNLOZ1,   A1A1BbNLOflZ1);
                }
                else if (renormvs == 4) {
                    ADDCHANNEL("A1,A1,H,H",   A1A1HHNLOZ2,   A1A1HHNLOflZ2);
                    ADDCHANNEL("A1,A1,H,S1",  A1A1HS1NLOZ2,  A1A1HS1NLOflZ2);
                    ADDCHANNEL("A1,A1,S1,S1", A1A1S1S1NLOZ2, A1A1S1S1NLOflZ2);
                    ADDCHANNEL("A1,A1,Z,Z",   A1A1ZZNLOZ2,   A1A1ZZNLOflZ2);
                    ADDCHANNEL("A1,A1,w,W",   A1A1wWNLOZ2,   A1A1wWNLOflZ2);
                    ADDCHANNEL("A1,A1,TA,ta", A1A1TAtaNLOZ2, A1A1TAtaNLOflZ2);
                    ADDCHANNEL("A1,A1,T,t",   A1A1TtNLOZ2,   A1A1TtNLOflZ2);
                    ADDCHANNEL("A1,A1,B,b",   A1A1BbNLOZ2,   A1A1BbNLOflZ2);
                }
            }
            else if (renormalpha == 2) {

                if (renormvs == 1) {
                    ADDCHANNEL("A1,A1,H,H",   A1A1HHNLOOS12,   A1A1HHNLOflOS12);
                    ADDCHANNEL("A1,A1,H,S1",  A1A1HS1NLOOS12,  A1A1HS1NLOflOS12);
                    ADDCHANNEL("A1,A1,S1,S1", A1A1S1S1NLOOS12, A1A1S1S1NLOflOS12);
                    ADDCHANNEL("A1,A1,Z,Z",   A1A1ZZNLOOS12,   A1A1ZZNLOflOS12);
                    ADDCHANNEL("A1,A1,w,W",   A1A1wWNLOOS12,   A1A1wWNLOflOS12);
                    ADDCHANNEL("A1,A1,TA,ta", A1A1TAtaNLOOS12, A1A1TAtaNLOflOS12);
                    ADDCHANNEL("A1,A1,T,t",   A1A1TtNLOOS12,   A1A1TtNLOflOS12);
                    ADDCHANNEL("A1,A1,B,b",   A1A1BbNLOOS12,   A1A1BbNLOflOS12);
                }
                else if (renormvs == 2) {
                    ADDCHANNEL("A1,A1,H,H",   A1A1HHNLOOS22,   A1A1HHNLOflOS22);
                    ADDCHANNEL("A1,A1,H,S1",  A1A1HS1NLOOS22,  A1A1HS1NLOflOS22);
                    ADDCHANNEL("A1,A1,S1,S1", A1A1S1S1NLOOS22, A1A1S1S1NLOflOS22);
                    ADDCHANNEL("A1,A1,Z,Z",   A1A1ZZNLOOS22,   A1A1ZZNLOflOS22);
                    ADDCHANNEL("A1,A1,w,W",   A1A1wWNLOOS22,   A1A1wWNLOflOS22);
                    ADDCHANNEL("A1,A1,TA,ta", A1A1TAtaNLOOS22, A1A1TAtaNLOflOS22);
                    ADDCHANNEL("A1,A1,T,t",   A1A1TtNLOOS22,   A1A1TtNLOflOS22);
                    ADDCHANNEL("A1,A1,B,b",   A1A1BbNLOOS22,   A1A1BbNLOflOS22);
                }
                else if (renormvs == 3) {
                    ADDCHANNEL("A1,A1,H,H",   A1A1HHNLOZ12,   A1A1HHNLOflZ12);
                    ADDCHANNEL("A1,A1,H,S1",  A1A1HS1NLOZ12,  A1A1HS1NLOflZ12);
                    ADDCHANNEL("A1,A1,S1,S1", A1A1S1S1NLOZ12, A1A1S1S1NLOflZ12);
                    ADDCHANNEL("A1,A1,Z,Z",   A1A1ZZNLOZ12,   A1A1ZZNLOflZ12);
                    ADDCHANNEL("A1,A1,w,W",   A1A1wWNLOZ12,   A1A1wWNLOflZ12);
                    ADDCHANNEL("A1,A1,TA,ta", A1A1TAtaNLOZ12, A1A1TAtaNLOflZ12);
                    ADDCHANNEL("A1,A1,T,t",   A1A1TtNLOZ12,   A1A1TtNLOflZ12);
                    ADDCHANNEL("A1,A1,B,b",   A1A1BbNLOZ12,   A1A1BbNLOflZ12);
                }
                else if (renormvs == 4) {
                    ADDCHANNEL("A1,A1,H,H",   A1A1HHNLOZ22,   A1A1HHNLOflZ22);
                    ADDCHANNEL("A1,A1,H,S1",  A1A1HS1NLOZ22,  A1A1HS1NLOflZ22);
                    ADDCHANNEL("A1,A1,S1,S1", A1A1S1S1NLOZ22, A1A1S1S1NLOflZ22);
                    ADDCHANNEL("A1,A1,Z,Z",   A1A1ZZNLOZ22,   A1A1ZZNLOflZ22);
                    ADDCHANNEL("A1,A1,w,W",   A1A1wWNLOZ22,   A1A1wWNLOflZ22);
                    ADDCHANNEL("A1,A1,TA,ta", A1A1TAtaNLOZ22, A1A1TAtaNLOflZ22);
                    ADDCHANNEL("A1,A1,T,t",   A1A1TtNLOZ22,   A1A1TtNLOflZ22);
                    ADDCHANNEL("A1,A1,B,b",   A1A1BbNLOZ22,   A1A1BbNLOflZ22);
                }
            }
        }
    }
    else {
        ADDCHANNEL("A1,A1,H,H",   A1A1HH,   A1A1HHfl);
        ADDCHANNEL("A1,A1,H,S1",  A1A1HS1,  A1A1HS1fl);
        ADDCHANNEL("A1,A1,S1,S1", A1A1S1S1, A1A1S1S1fl);
        ADDCHANNEL("A1,A1,Z,Z",   A1A1ZZ,   A1A1ZZfl);
        ADDCHANNEL("A1,A1,w,W",   A1A1wW,   A1A1wWfl);
        ADDCHANNEL("A1,A1,E,e",   A1A1Ee,   A1A1Eefl);
        ADDCHANNEL("A1,A1,MU,mu", A1A1MUmu, A1A1MUmufl);
        ADDCHANNEL("A1,A1,TA,ta", A1A1TAta, A1A1TAtafl);
        ADDCHANNEL("A1,A1,U,u",   A1A1Uu,   A1A1Uufl);
        ADDCHANNEL("A1,A1,C,c",   A1A1Cc,   A1A1Ccfl);
        ADDCHANNEL("A1,A1,T,t",   A1A1Tt,   A1A1Ttfl);
        ADDCHANNEL("A1,A1,D,d",   A1A1Dd,   A1A1Ddfl);
        ADDCHANNEL("A1,A1,S,s",   A1A1Ss,   A1A1Ssfl);
        ADDCHANNEL("A1,A1,B,b",   A1A1Bb,   A1A1Bbfl);
    }
}
}