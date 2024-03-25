#include "stepper.h"

enum Step{LEFT,RIGHT};

void Stepper::SetMode(unsigned char ucLedMode){
	ucInversion = ucLedMode;
}

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		ucLedCtr--;
	}
	else if(eStep == RIGHT){
		ucLedCtr++;
	}else{
	}
	
	if(ucInversion==0){
		MyLed.On(ucLedCtr);
	}
	else{
			MyLedInv.On(ucLedCtr);
	}
	ucLedCtr = ucLedCtr % 4;
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}
