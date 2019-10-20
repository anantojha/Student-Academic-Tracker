#include <iostream>
#include <string>
using namespace std;
#include "Storage.h"

/*
  Constructor:  creates a Storage object
  output:       size  -  initializes the size data members of this class
*/
Storage::Storage() : size(0){ }

/*
  Deconstructor.
*/
Storage::~Storage(){
    
    for(int i = 0; i < size; i++){       delete  students[i];     }
  }

/*
  addStu:   adds the Student pointer in to the students array 
  input:    s  -  repersents a pointer that points to a Student object;
  output:   students, size  -  students array now holds the Student object, size increments
*/
void Storage::operator+=(Student* s){
	students[size] = s; size++;
}

/*
  Print:   Prints out the entire collection of Student objects
  input:   does not take an input value/object
  output:  for each element in the array, the function delegates the printing of that student object to the Student class.
*/
void Storage::print(){
	for(int i =0 ; i<size; i++){ students[i]->print(); }

}

/*
  getNumofStudents:   getter function for the size of the students collection
  input:			  does not take a input param
  output:			  returns the size (int)
*/
int Storage::getNumOfStudents(){
	return size;
}
