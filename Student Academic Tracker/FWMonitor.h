#ifndef FWMONITOR_H
#define FWMONITOR_H
#include "Monitor.h"

class FWMonitor : public Monitor{
	public:
		FWMonitor(int fail); // constuctor
		virtual void update(Student*);  // virtual update() implementation
	private:
		float failsThreshold;  // fail threshold 
		/* data */
};


#endif