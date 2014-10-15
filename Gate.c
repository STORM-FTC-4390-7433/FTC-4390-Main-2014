#ifndef GATESYS_C
#define GATESYS_C

void updateGateSys (GateSys t, int gateMotorPower){
	motor[t.gateMotor] = gateMotorPower;
	return;
}

#endif
