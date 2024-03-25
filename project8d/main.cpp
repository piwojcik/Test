#include "stepper.h"
#include "Keyboard.h"

Stepper MyStepper;
Keyboard MyKeyboard;

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	if(MyKeyboard.eRead()==BUTTON_4){
		MyStepper.SetMode(1);
	}
	else{
		MyStepper.SetMode(2);
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
