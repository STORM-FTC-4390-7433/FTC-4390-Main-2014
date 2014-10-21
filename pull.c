#ifndef PULLSYS_C
#define PULLSYS_C

#include "pull.h"
void updatePullSys (PullSys t, bool buttonDown, bool buttonUp){

static float nServoPos = 170;

	if (buttonDown){
		nServoPos += 0.25;
		if (nServoPos > 255){
			nServoPos = 255;
		}
		servo[t.pullServo] = nServoPos;
	}
	else if (buttonUp){
		nServoPos -= 0.25;
		if (nServoPos < 170){
			nServoPos = 170;
		}
		servo[t.pullServo] = nServoPos;
	}
	return;
}

#endif
