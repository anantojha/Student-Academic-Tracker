#ifndef VIEW_H
#define VIEW_H

#include <string>
#include "Storage.h"


class View{

	public:
		View();							// constructor
		int mainMenu();					// deconstructor
		void getCourseInput(int&, int&, int&, string&);		// function to prompt user for course info 
		void getId(int& );				// function that prompts user for a student id
		void printStorage(Storage&);	// delegation function which prints every student's info
};

#endif