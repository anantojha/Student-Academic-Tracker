#ifndef GPAMONITOR_H
#define GPAMONITOR_H

#include "Monitor.h"

class GPAMonitor : public Monitor{
	public:
		GPAMonitor(float gpa);  // constructor
		virtual void update(Student*);  // virtual update() implementation
	private:
		float gpaThreshold; // gpa threshold 
		/* data */
};


#endif