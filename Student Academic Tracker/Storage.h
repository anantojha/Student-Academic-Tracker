#ifndef STORAGE_H
#define STORAGE_H
#include "Student.h"
#include "defs.h"

class Storage
{
	public:
		Storage(); // constructor 
		~Storage();  // deconstructor
		//void addStu(Student*);  // function to add a student to a collection
		void print();  // function to print a student object (it's attributes)
		int getNumOfStudents();  // return the number of students in the collection 
		void operator+=(Student*);
	private:
		Student *students[MAX_NUM_STU];  // collection of students
		int size;  // size of the collection
};

#endif
