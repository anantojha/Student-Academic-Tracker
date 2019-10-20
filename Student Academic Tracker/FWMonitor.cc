#include "FWMonitor.h"
#include <string>
using namespace std;

//constuctor 
FWMonitor::FWMonitor(int fail){
	failsThreshold = fail;
}

//update function for fail warning
void FWMonitor::update(Student* stu){
	int id;
	float stuFails;
	id = stu->getId();
	stuFails = stu->computeNumFW();
	if(stuFails > failsThreshold){
		string stuLog;
		stuLog = "Student ID: " + to_string(id) + " ---  F/WDN: " + to_string((int) stuFails);
		logs.push_back(stuLog);
	}
}