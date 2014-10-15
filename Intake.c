#ifndef INTAKESYS_C
#define INTAKESYS_C

void updateIntakeSys (IntakeSys t, int intakeMotorPower){
	motor[t.intakeMotor] = intakeMotorPower;
	return;
}

#endif
