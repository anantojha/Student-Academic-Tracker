#ifndef MONITOR_H
#define MONITOR_H
#include <vector>
#include "Student.h"
using namespace std;


 class Monitor {
 	public:
 		Monitor();  //constructor
 		virtual ~Monitor();  // deconstructor
		virtual void update(Student*) = 0;  // virtual update function 
 		void printLogs();   // print function

 	protected:
 		vector<string> logs;  //storage for logs 
 };

#endif