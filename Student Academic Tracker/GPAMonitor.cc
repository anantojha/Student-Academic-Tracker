#include "GPAMonitor.h"
#include <string>
#include <math.h>
#include <iomanip> // setprecision
#include <sstream> // stringstream
using namespace std;


//constructor
GPAMonitor::GPAMonitor(float gpa){
	gpaThreshold = gpa;
}

// update function for gpa warning
void GPAMonitor::update(Student* stu){
	int id;
	float stuGpa;
	id = stu->getId();
	stuGpa = stu->computeGPA();
	if(stuGpa <= gpaThreshold){
		string strLog;
		stringstream stream;
		stream << fixed << setprecision(2) << stuGpa;
		string s = stream.str();
		strLog = "Student ID: " + to_string(id) + " ---  GPA: " + s;
		logs.push_back(strLog);
	}
}