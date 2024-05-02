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
		token7 = 2;
		token8 = pow(MS1,2);
		token9 = 2*pow(MH,2) + pow(MS1,2);
		token10 = pow(cos(alpha),2);
		token11 = svev*cos(alpha) - vev*sin(alpha);
		token12 = pow(sin(alpha),2);
		token13 = pow(svev,2);
		token14 = vev;
		token15 = 4;
		token16 = cos(alpha);
		token17 = -((pow(MH,2) + pow(MS1,2))*vev) + (MH - MS1)*(MH + MS1)*(vev*cos(2*alpha) + svev*sin(2*alpha));
		token18 = pow(MH,2);
		token19 = -2;
		token20 = pow(MH,2) + 2*pow(MS1,2);
		token21 = vev*cos(alpha) + svev*sin(alpha);
		token22 = vev*cos(alpha)*(pow(MH,2) + pow(MS1,2) + (-pow(MH,2) + pow(MS1,2))*cos(2*alpha)) + 2*(MH - MS1)*(MH + MS1)*svev*pow(sin(alpha),3);
		token23 = 6;
		token24 = pow(MS1,4);
		token25 = -(vev*pow(cos(alpha),3)) + svev*pow(sin(alpha),3);
		token26 = pow(EL,2);
		token27 = pow(pow(cw,2) + pow(sw,2),2);
		token28 = pow(cw,2);
		token29 = svev;
		token30 = pow(sw,2);
		token31 = ye;
		token32 = sqrt(2);
		token33 = ym;
		token34 = ytau;
		token35 = yup;
		token36 = yc;
		token37 = yt;
		token38 = ydo;
		token39 = ys;
		token40 = yb;
	}
}
