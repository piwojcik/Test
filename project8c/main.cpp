#include "stepper.h"
#include "Keyboard.h"

Stepper MyStepper;
Keyboard MyKeyboard;
unsigned char ucInversion;

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	if(MyKeyboard.eRead()==BUTTON_4){
		ucInversion = 1;
	}
	else{
		ucInversion = 0;
	}
	while(1){
		Delay(500);
		if(MyKeyboard.eRead()==BUTTON_1){
			MyStepper.StepRight();
		}
		else if(MyKeyboard.eRead()==BUTTON_2){
			MyStepper.StepLeft();
		}else{
		}
	}
}
