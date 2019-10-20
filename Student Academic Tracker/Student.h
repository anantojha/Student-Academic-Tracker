#ifndef STUDENT_H
#define STUDENT_H

#include "defs.h"
#include "Course.h"
#include "CourseList.h"

class Student
{
  public:
    Student(int=0);  			// Constructor
    ~Student();      			// Deconstructor
   // void addCourse(Course*);  		// function to add a course to a student's collection of courses taken
    void print(); 			// function to print the student object
    void printCoursesHT();  		// function to print the head and tail of the linked list
    float computeGPA();			// function for computing GPA
    int computeNumFW();			//function for calculating fails or withdrawals
    int getId();
    void operator+=(Course*);



  private:
    int    id;  	// student id #
    CourseList  courses; 	// Student's collection of course(s)
};

#endif
