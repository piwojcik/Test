#include "stepper.h"
#include "Keyboard.h"
#include "led.h"

Stepper MyStepper;
Keyboard MyKeyboard;
Led* pLed;

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	if(MyKeyboard.eRead()==BUTTON_4){
		pLed = new LedInv;
	}
	else{
		pLed = new LedPos;
	}
	MyStepper.SetLed(pLed);
	
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
