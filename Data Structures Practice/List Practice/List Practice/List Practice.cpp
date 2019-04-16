#include "pch.h"
#include <iostream>
#include "Singly-Linked List.h"
#include "Doubly-Linked List.h"

using namespace std;

void sllExample();
void dllExample();

int main(){
	
	//sllExample();
	dllExample();

}


void sllExample() {

	SLL myList;

	myList.createNode(10);
	myList.createNode(20);
	myList.createNode(30);
	myList.createNode(40);

	cout << "Displaying List";

	cout << "\n--------------------------------------------------\n";

	myList.display();

	cout << "\n--------------------------------------------------\n";


	cout << "Inserting At End";

	cout << "\n--------------------------------------------------\n";

	myList.createNode(50);
	myList.display();

	cout << "\n--------------------------------------------------\n";

	cout << "Inserting at Start";

	cout << "\n--------------------------------------------------\n";

	myList.insertStart(1);
	myList.display();

	cout << "\n--------------------------------------------------\n";

	cout << "Inserting At Particular";

	cout << "\n--------------------------------------------------\n";

	myList.insertPosition(5, 60);
	myList.display();

	cout << "\n--------------------------------------------------\n";

	cout << "Deleting At Start";
	cout << "\n--------------------------------------------------\n";

	myList.deleteFirst();
	myList.display();

	cout << "\n--------------------------------------------------\n";

	cout << "Deleting At End";

	cout << "\n--------------------------------------------------\n";

	myList.deleteLast();
	myList.display();

	cout << "\n--------------------------------------------------\n";

	cout << "Deleting At Position";
	cout << "\n--------------------------------------------------\n";
	myList.deletePosition(3);
	myList.display();

	cout << "\n\n";
	system("pause");

}

void dllExample() {

	DLL dll;

	dll.createNode(10);
	dll.createNode(20);
	dll.createNode(30);
	dll.createNode(40);

	cout << "Display List" << endl;
	dll.display();

	cout << "\nDisplay Backwards" << endl;
	dll.displayBackwards();

	cout << "\nInsert Element Start" << endl;
	dll.insertStart(1);
	dll.display();
	cout << "\nDisplay backward" << endl;
	dll.displayBackwards();

	cout << "\nInsert Element Position" << endl;
	dll.insertPosition(2, 70);
	dll.display();
	cout << "\nDisplaying backwards" << endl;
	dll.displayBackwards();

	cout << "\nDeleting starting element" << endl;
	dll.deleteFirst();
	cout << "Display List" << endl;
	dll.display();
	cout << "\nDisplaying backwards" << endl;
	dll.displayBackwards();

	cout << "\nDeleting element at the end" << endl;
	dll.deleteLast();
	cout << "Display List" << endl;
	dll.display();
	cout << "\nDisplaying backwards" << endl;
	dll.displayBackwards();

	cout << "\nDeleting element at position" << endl;
	dll.deletePosition(2);
	cout << "Display List" << endl;
	dll.display();
	cout << "\nDisplaying backwards" << endl;
	dll.displayBackwards();

}