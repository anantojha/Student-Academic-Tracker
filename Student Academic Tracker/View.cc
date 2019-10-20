#include <iostream>
#include <string>
#include "View.h"
#include "Control.h"
#include <string>
using namespace std;


/*
  Constructor
*/
View::View(){

}

/*
  getId:  prompts the user to enter a student ID
  input:  int id, passed in by reference
  output: value of id, is now changed to input the user entered
*/
void View::getId(int& id){
	cout << "Student ID:	";
	cin >> id;
}


/*
  getCourseInput: prompts the user tot enter course information
  input:   int cc, int grade, int term and string instructor, all passed in by reference
  output:  cc, grade, term and instructor, value of these variables is set to the user's given input
*/
void View::getCourseInput(int& cc, int& grade, int& term, string& instructor){
	cout << endl << "Course Code <0 to end>:  ";
	cin >> cc;
    if(cc == 0){
    	return;
    }
    cout << "grade:                   ";
    cin  >> grade;

    cout << "term:                    ";
    cin >> term;

    cout << "instructor:              ";
    cin >> instructor;
}


/*
  mainMenu:  prompts the user to select one of the given options 
  input:     none
  output:    returns an int variable containing the users input
*/
int View::mainMenu()
{
  int numOptions = 1;
  int selection  = -1;

  cout << endl;
  cout << "(1) Add student" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }
  if(selection == 0){
    cout << endl << endl << "*********************************************************************"<<endl;
  }

  return selection;
}



/*
  printStorage: delegation function used to print out each student's full information
  input:    Storage object which holds a list of all students is passed in by reference 
  output:   prints each student's info 
*/
void View::printStorage(Storage& storage){
	storage.print();
}


