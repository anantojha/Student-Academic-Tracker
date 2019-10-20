NAME:    Anant Ojha
ID #:    101072523
E-MAIL:  anantojha@cmail.carleton.ca

		
_______________________________COMP2404 ASSIGNMENT #4_______________________________
Program:	

	Student Auditing Program - reads student input and outputs a 
	summary of a student(s) grades for every term they have completed, 
	withdrawn or failed a course. Also outputs a log for students with
	GPA and/or Fail warnings.


PACKAGE:	A4_2404
Source Files:  	main.cc Control.cc View.cc Courses.cc  Student.cc  Storage.cc Monitor.cc GPAMonitor.cc FWMonitor.cc CourseList.cc
Header Files:   defs.h	Control.h List.h View.h Courses.h  Student.h  Storage.h Monitor.h GPAMonitor.h FWMonitor.h CourseList.h StuServer.h
Provided Files: StuServer.o StuServer.h
Build Files:   	Makefile 
Text Files:	README.txt  in.txt




COMPILING & RUNNING INSTRUCTIONS:


	1. 	navigate to folder "A4_2404" after expanding tar file

	2.  	enter command: 			make clean

	3. 	enter command:  		make

	4.	enter command:  		./A4 <in.txt

	5.  to check for memory leaks: 		valgrind ./A4 <in.txt
