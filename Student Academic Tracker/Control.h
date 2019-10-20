#ifndef CONTROL_H
#define CONTROL_H
#include <vector>
#include "View.h"
#include "Storage.h"	
#include "Student.h"
#include "Course.h"
#include "Monitor.h"
#include "StuServer.h"

class Control{
	public:
		Control();                      // constructor
		~Control();                     // deconstructor
		void launch();  	        // launch program function
		void notify(Student* newStu);   // notify the observers

	private:
		View view;	             // View data member
		Storage students;	     // Storage data member
		vector<Monitor*> monitors;   // list of observers
		StuServer stuServer;	     // cloud server (simulator)
};	

#endif
