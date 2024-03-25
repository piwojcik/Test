#ifndef STEPPER_H
#define STEPPER_H

#include "ledinv.h"

class Stepper{
	public:
		void StepRight(void);
		void StepLeft(void);
		void SetLed(Led*);
	private:
		unsigned char ucInversion;
		Led* pLed;
		unsigned char ucLedCtr;
		void Step(enum Step);
};

#endif
