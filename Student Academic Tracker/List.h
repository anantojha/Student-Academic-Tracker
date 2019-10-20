#include <cstdlib>
#include <string>
#include <iostream>
#include "CourseList.h"
using namespace std;
template<class T>
class List
{
	public:
		template<class V>
		class Node	
		{
			friend class List<V>;	 // friend class deceleration, List class needs access to private data members
			friend class CourseList;
			private:
		        	V data;   // pointer which holds course data
				Node<V>* next;     // pointer to the next node
		};

		List<T>();					// constructor 
		~List<T>();				// deconstructor
		void operator+=(T); 		// function to add courses 
//		float computeGPA();		// function for computing GPA
//		int computeNumFW();		//function for calculating fails or withdrawals
//		void printCourses();	//function to print all the courses
		void printHT();			//function to print head and tail Node's courses  
		void printCourses();
	protected:
		int size;				// size of list
		Node<T>* head;				// front of the list (first node)
		Node<T>* tail;				// end of the list (last node)
};


/*
        Constructor
        input: no input param
        output: sets the size to 0, and head & tail nodes point to NULL
*/
template<class T>
List<T>::List(){
        size = 0;
        head = NULL;
        tail = NULL;
};

/*
        Constructor
        input: no input param
        output: deallocates the memory of each node's data and node in the list
*/
template<class T>
List<T>::~List(){
        Node<T>* curr;
        curr = head;
        Node<T>* next;

        while (curr != tail) {
                next = curr->next;
                delete curr->data;
                delete curr;
                curr = next;
        }
        delete tail->data;
        delete tail;
};


/*
        add: add a node to the linked list, insertion in ascending order of course code
        input: Course pointer that holds course info
        output: linked list's size is increased by 1, since new node is inserted
*/
template<class T>
void List<T>::operator+=(T c){
        // declare necessary Node pointers to traverse then insert into linked list
        Node<T>* curr;
        Node<T>* tmp;
        Node<T>* prev;

        // set the new Node's pointers
        tmp = new Node<T>();
        tmp->data = c;
        tmp->next = NULL;

        // set pointers in order to traverse the list
        curr = head;
        prev = NULL;

        // Traversing the list
        while(curr != NULL){
                if(c->lessThan(curr->data))  // condition is true when the insertion position is reached
                        break;

                prev = curr;                            // changing pointers as moving through list
                curr = curr->next;
        }

        if(prev == NULL)                                // CASE 1: adding to an empty list or front of the list
                head = tmp;
        else
                prev->next = tmp;                       //CASE 2: adding to the middle or end of the list

        if(curr == NULL)                                //CASE 3: adding to the end of the list
                tail = tmp;


        tmp->next = curr;                               // set new Node's next
        size++;                                                 
}

/*
        printCourses: traverse through the list while printing out each Node's data
*/
template <class T>
void List<T>::printCourses(){
        Node<T>* curr;
        curr = head;
        while(curr != NULL){
                curr->data->print();
                cout<< endl;
                curr = curr->next;
        }
}


/*
        printHT: prints the head and tail Node's data
*/
template<class T>
void List<T>::printHT(){
        cout << endl;
        cout << "** HEAD: " ;
        head->data->print();
        cout << endl ;
        cout << "** TAIL: " ;
        tail->data->print();
        cout << endl ;

}

