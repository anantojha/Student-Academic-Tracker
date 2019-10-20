#include "CourseList.h"
#include <string.h>
#include <iostream>
using namespace std;

float CourseList::computeGPA(){
	
	int result=0, count = 0;
        Node<Course*>* curr;
        curr = head;
        while(curr != NULL){
                if(curr->data->getGrade() >= 0){
                        count += curr->data->getGrade();
                        result++;
                }
                curr = curr->next;
        }
        return (float)count/(float)result;
	
}

// compute fails and withdrawals for linked list
// out: int result

int CourseList::computeNumFW(){
	
        int result=0;
        Node<Course*>* curr;
        curr = head;
        while(curr != NULL){
                if(curr->data->getGrade() <= 0){
                        result++;
                }
                curr = curr->next;
        }
        return result;
	
}
