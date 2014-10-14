#pragma config(Hubs,  S1, HTMotor,  HTMotor,  none,     none)
#pragma config(Hubs,  S2, HTMotor,  HTMotor,  none,     none)
#pragma config(Hubs,  S3, HTMotor,  HTServo,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     ,               sensorI2CMuxController)
#pragma config(Sensor, S3,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,      ,             tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,      ,             tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,      ,             tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,      ,             tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_1,      ,             tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_2,      ,             tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C2_1,      ,             tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C2_2,      ,             tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S3_C1_1,      ,             tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S3_C1_2,      ,             tmotorTetrix, openLoop)

    #include "JoystickDriver.c";
    task main()
    {
    while(true)
    {
    	getJoystickSettings(joystick);
    	if (joy2Btn(7) == 1)
    	{
    		servo[srvo_S3_C2_1]=90;
    	}
    	else if(joy2Btn(8) == 1)
    	{
    		servo[srvo_S3_C2_1]=0;
    	}
    }
    }
