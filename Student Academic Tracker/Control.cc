#include "Control.h"
#include <string>
#include <sstream>
using namespace std;
#include "GPAMonitor.h"
#include "FWMonitor.h"
#include <iostream>
#include <typeinfo>
#include <iomanip>
//constructor
Control::Control(){
	GPAMonitor* gpaMonitor;
	FWMonitor* fwMonitor;
	gpaMonitor = new GPAMonitor(3.0);
	fwMonitor = new FWMonitor(2);
	monitors.push_back(gpaMonitor);
	monitors.push_back(fwMonitor);

	
	vector<string> stuList;
	stringstream  ss;
	int stuId, courseCode, grade, term;
	string instructor;
	Student* stu_ptr; Course* cou_ptr;
	stuServer.retrieve(stuList);	        
	for (int i=0; i<stuList.size(); ++i) {
   	 	ss.clear();
   		ss.str(stuList[i]);
	        ss >> stuId;
		stu_ptr = new Student(stuId);
		while(1){
			ss >> courseCode >> term >> grade >> instructor;
			if(courseCode == 0)
				break;
			cou_ptr = new Course(courseCode, grade, term, instructor);
			*stu_ptr += cou_ptr;
		}	
		students += stu_ptr;
		notify(stu_ptr);
  	}	

}

//deconstructor
Control::~Control(){
	for(int i = 0; i<2; i++)
		monitors.at(i)->printLogs();
	for(int i = 0; i<2; i++)
		delete monitors.at(i);
}

/*
	launch: function which controls the flow of the program
	input:	none
	output: none
*/
void Control::launch(){

	int stuId, courseCode, grade, term, menuSelection;
	string instructor;
	Student* stu_ptr;Course* course_ptr;
	while(1){
		menuSelection = view.mainMenu();		// get user's option selection 
		if(menuSelection == 0){
			break;
		}
		else{
			view.getId(stuId);					// get a student Id
			if(stuId != 0){
				stu_ptr = new Student(stuId);			// make a new student with given student Id
				while(1){
					view.getCourseInput(courseCode, grade, term, instructor);	// get courses info
					if(courseCode == 0)
						break;
					course_ptr = new Course(courseCode, grade, term, instructor);  // make a new course with given info
					*stu_ptr += course_ptr;		// add the new course to the student's list of courses
				}
				students += stu_ptr;		// add the student to list of students				
				notify(stu_ptr);
			}
			else
				break;
		}
	}
	view.printStorage(students);			// print the list of students and their info
}


// notify function to call update on observers
void Control::notify(Student* newStu){
	int size;
	size = monitors.size();
	for(int i=0; i<size; i++) {
    	monitors.at(i)->update(newStu);
	}

}
