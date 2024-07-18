///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"

namespace DT{
	void Model::load_tokens(){
		token1 = -1;
		token2 = sin(alpha);
		token3 = 2*(MH - MS1)*(MH + MS1)*svev*pow(cos(alpha),3) + vev*(pow(MH,2) + pow(MS1,2) + (-pow(MH,2) + pow(MS1,2))*cos(2*alpha))*sin(alpha);
		token4 = -12;
		token5 = pow(MH,4);
		token6 = svev*pow(cos(alpha),3) + vev*pow(sin(alpha),3);
		token7 = pow(MS1,2);
		token8 = 2*pow(MH,2) + pow(MS1,2);
		token9 = cos(alpha);
		token10 = svev*cos(alpha) - vev*sin(alpha);
		token11 = sin(2*alpha);
		token12 = pow(sin(alpha),2);
		token13 = 2;
		token14 = pow(svev,2);
		token15 = vev;
		token16 = 4;
		token17 = -((pow(MH,2) + pow(MS1,2))*vev) + (MH - MS1)*(MH + MS1)*(vev*cos(2*alpha) + svev*sin(2*alpha));
		token18 = pow(MH,2);
		token19 = -2;
		token20 = pow(MH,2) + 2*pow(MS1,2);
		token21 = pow(cos(alpha),2);
		token22 = vev*cos(alpha) + svev*sin(alpha);
		token23 = vev*cos(alpha)*(pow(MH,2) + pow(MS1,2) + (-pow(MH,2) + pow(MS1,2))*cos(2*alpha)) + 2*(MH - MS1)*(MH + MS1)*svev*pow(sin(alpha),3);
		token24 = 6;
		token25 = pow(MS1,4);
		token26 = -(vev*pow(cos(alpha),3)) + svev*pow(sin(alpha),3);
		token27 = pow(EL,2);
		token28 = pow(pow(cw,2) + pow(sw,2),2);
		token29 = pow(cw,2);
		token30 = svev;
		token31 = pow(sw,2);
		token32 = ye;
		token33 = sqrt(2);
		token34 = ym;
		token35 = ytau;
		token36 = yup;
		token37 = yc;
		token38 = yt;
		token39 = ydo;
		token40 = ys;
		token41 = yb;
	}
}
