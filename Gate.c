#ifndef GATESYS_C
#define GATESYS_C

void updateGateSys (GateSys t, bool joy2Btn(5), bool joy2Btn(6)){

	if(joy2Btn(5)){
		servo[t.gate] = 90;
	}
	if (joy2Btn(6)) {
		servo[t.gate] = 0;
	}

	return;
	}

	#endif
