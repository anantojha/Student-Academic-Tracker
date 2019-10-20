#ifndef COURSELIST_
#define COURSELIST_
#include "List.h"
#include <cstdlib>
using namespace std;
#include "Course.h"
#include<string>
#include <iostream>
class CourseList: public List<Course*> {

	public:
		void add(const Course*);
		void printCourses();
		void printHT();
		int computeNumFW();
		float computeGPA();
};

#endif
