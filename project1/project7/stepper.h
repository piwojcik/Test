#ifndef STEPPER_H
#define STEPPER_H

#include "led.h"

class Stepper{
	public:
		Stepper(unsigned char = 0);
		void StepRight(void);
		void StepLeft(void);
	private:
		Led MyLed;
		unsigned char ucLedCtr;
		void Step(enum Step);
};

#endif
