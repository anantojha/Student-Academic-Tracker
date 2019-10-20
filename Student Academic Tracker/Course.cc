#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Course.h"

/*
  Constructor:  creates a course object
  input:        c, g, t, i  -  represents the input by the user (course code, grade, term, instructor)
  output:       code, grade, term, instructor  -  changes the value of the data members in this class
*/
Course::Course(int c, int g, int t, string i)
{
  code  = c;
  grade = g;
  instructor = i;
  term = t;
}


/*
  Print:   Prints out the course object (it's data members)
  input:   does not take an input value / object
  output:  prints the data member's values of the Course object that called the function
*/
void Course::print()
{
  string str;
  cout << "-- COMP " << code << ":  " << "  Term:  " << term  << "  Instructor:  " << left << setw(15) << instructor << right << setw(3) << grade   << "  ";
  getGradeStr(str);
  cout << left << setw(3) << str ;
}

/*
  getGradeStr:  finds the corresponding letter grade for an inputted grade (-1 to 12)
  input:        string object that contains a value between -1 and 12
  output:       changes the value of the inputted string to the letter grade
*/
void Course::getGradeStr(string& gradeStr)
{
  string gradeStrings[] = {
    "WDN", "F", "D-", "D", "D+", "C-", "C", "C+", 
    "B-", "B", "B+", "A-", "A", "A+" };
  if ( grade >= -1 && grade <= 12 )
    gradeStr = gradeStrings[grade+1];
  else
    gradeStr = "Unknown";
}

int Course::getGrade(){
  return grade;
}

int Course::lessThan(Course* c) {
  if(c->code >= code){
    return 1;
  }
  else{
    return 0;
  }
  
}



