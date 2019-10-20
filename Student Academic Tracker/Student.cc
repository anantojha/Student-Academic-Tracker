#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include "Student.h"
#include <iomanip> // setprecision
#include <sstream> // stringstream
/*
  Constructor:  creates a Student object
  input:        i  -  represents the input by the user (Student's ID #)
  output:       id -  changes the value of the data members in this class
*/
Student::Student(int i){
  id = i;
  
}

/*
  Deconstructor.
*/
Student::~Student(){  
  
}

/*
  addCourse:  adds the course pointer in to the courses list
  input:      c  -  represents a pointer that points to a course object;
  output:     courses -  courses List now holds the course object
*/
void Student::operator+=(Course* c){
   this->courses += c;
}

/*
  Print:   Prints out the Student object (it's data members, including courses)
  input:   does not take an input value/object
  output:  prints the data member's values of the Student object that called the function
*/
void Student::print(){
    float gpa;
    gpa = computeGPA();
    cout<< endl << "Id: " << id << endl;
    courses.List<Course*>::printCourses();
    stringstream stream;
    stream << fixed << setprecision(2) << gpa;
    string s = stream.str();
    cout << endl << "GPA: " << s << endl;
    printCoursesHT();
}

// print out head and tail of list
void Student::printCoursesHT(){
  courses.List<Course*>::printHT();
}

// get gpa of student
float Student::computeGPA(){
  return courses.computeGPA();
}

//get number of fails and withdrawals 
int Student::computeNumFW(){
  return courses.computeNumFW();
}

//get student id
int Student::getId(){
  return id;
}



