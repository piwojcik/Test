#ifndef STEPPER_H
#define STEPPER_H

#include "ledinv.h"

class Stepper{
	public:
		void StepRight(void);
		void StepLeft(void);
	private:
		Led MyLed;
		LedInv MyLedInv;
		unsigned char ucLedCtr;
		void Step(enum Step);
};

#endif
