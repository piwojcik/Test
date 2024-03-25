#include "stepper.h"

enum Step{LEFT,RIGHT};

void Stepper::SetLed(Led* pLedMode){
	pLed = pLedMode;
}

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		ucLedCtr--;
	}
	else if(eStep == RIGHT){
		ucLedCtr++;
	}else{
	}
	ucLedCtr = ucLedCtr % 4;
	pLed->On(ucLedCtr);
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}
