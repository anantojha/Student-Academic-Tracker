#include "Monitor.h"
#include <iostream>
#include <string.h>
using namespace std;

// constructor 
Monitor::Monitor() { }

//deconstruvtor
Monitor::~Monitor() { };

// function to print logs
void Monitor::printLogs(){
	string temp;
	cout << endl << "LOG: " << endl;
	for(int i=0; i<logs.size(); i++){
		temp = logs.at(i);
		cout << temp << endl<< endl;
	}	
}