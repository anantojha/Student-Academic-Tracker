#ifndef COURSE_H
#define COURSE_H
#include <string>
#include "defs.h"
using namespace std;

class Course
{
    public:
    Course(int=0, int=0, int = 0, string = 0);  // constructor
    void print();  // for printing a course object (it's data members)
    int lessThan(Course*);
    int getGrade();


  private:
    int code;	// course code, for example 2404 for COMP2404
    int grade;	// numeric grade from 0 (F) to 12 (A+), with -1 for WDN
    int term;	// term the course was taken (10-Winter, 20-Summer, 30-Fall)
    string instructor;  // name of the instructor 
    void getGradeStr(string&);  //get the letter grade 
};

#endif
