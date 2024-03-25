#ifndef STEPPER_H
#define STEPPER_H

#include "ledinv.h"
#include "ledpos.h"

class Stepper{
	public:
		void StepRight(void);
		void StepLeft(void);
		void SetLed(Led*);
	private:
		Led* pLed;
		unsigned char ucLedCtr;
		void Step(enum Step);
};

#endif
