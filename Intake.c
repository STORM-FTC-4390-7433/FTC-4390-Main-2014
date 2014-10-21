#ifndef INTAKESYS_C
#define INTAKESYS_C


void updateIntakeSys (IntakeSys t, bool buttonForward, bool buttonBackward){
	if (buttonForward){
		motor[t.intakeMotor] = 100;
	}
	else if (buttonBackward){
		motor[t.intakeMotor] = -100;
	}
	else{
		motor[t.intakeMotor] = 0;
	}
	return;
}

#endif
