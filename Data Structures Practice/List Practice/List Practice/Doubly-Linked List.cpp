#include "pch.h"
#include "Doubly-Linked List.h"

DLL::DLL() {

	head = nullptr;
	tail = nullptr;

}

void DLL::createNode(int value) {

	Node *temp = new Node; // creating new node named temp or temporary
	temp->data = value; // assign value to temp data member
	temp->next = nullptr;// assign temp next element, pointing to null
	if (head == nullptr) { // if head pointer, points to null then

		head = temp;// head points to temp
		tail = temp;// tail points to temp
		temp->back = nullptr;//temp back element points to null

	}
	else {
		tail->next = temp;// next element from where tail is becomes temp
		temp->back = tail;// back element points to the previous node that is tail for now
		tail = temp;// tail points to temp
		tail->next = nullptr;
	}

}

void DLL::display() {

	Node *temp = new Node; // create new node
	temp = head; // assign head address to temp
	while (temp != nullptr) { //while temp points to something, then
		cout << temp->data << "\t";// print the data temp is pointing to
		temp = temp->next;//point temp next element to the next node there is, and it becomes next temp
	}

}

void DLL::displayBackwards() {

	Node *temp = new Node; // create new node
	temp = tail; // assign tail address to temp
	while (temp != nullptr) { //while temp points to something, then
		cout << temp->data << "\t";// print the data temp is pointing to
		temp = temp->back;//point temp next element to the next node there is, and it becomes next temp
	}

}

void DLL::insertStart(int value) {

	Node *temp = new Node;//create new node
	temp->data = value;//assign value to temp's data element
	temp->next = head;//point temp's next element to head
	temp->back = nullptr;//point temp's back element to null
	head->back = temp;//point head's back element to temp
	head = temp;//make head pointer point to new head being temp

}

void DLL::insertPosition(int pos, int value) {

	Node *prev = new Node;//create temporary node named prev or previous
	Node *current = new Node;// create temporary node called current
	Node *temp = new Node;//create new node, temp or temporary

	current = head;//point current to head

	for (int i = 0; i < pos; i++) {
		prev = current;
		current = current->next;
	}

	temp->data = value;//assign value to temp's data element
	prev->next = temp;//point prev's next element to temp
	temp->back = prev;//point temp's back element to prev
	temp->next = current;//point temp's next element to current
	current->back = temp;//point current's back element to temp

}

void DLL::deleteFirst() {

	Node *temp = new Node;//create new temporary node
	temp = head;//point temp to pointer head
	head = head->next;//move head pointer to next node, to make it new head
	head->back = nullptr;//poin head back element to null
	delete temp;//delete temp

}

void DLL::deleteLast() {

	Node *temp = new Node;//create new temporary node
	temp = tail;//point temp to pointer tail
	tail = temp->back;//move pointer tail to temp's back element
	tail->next = nullptr;//point tail's next element to null
	delete temp;//delete temp

}

void DLL::deletePosition(int pos) {

	Node *current = new Node;//create new temporary node named current
	Node *prev = new Node;//create new temporary node named previous
	Node *temp = new Node;//create new temporary node named temp

	current = head;//point current to head
	for (int i = 0; i < pos; i++) {//for loop to iterate through list until before the position given to function

		prev = current;//point prev to current, ex. I ask for pos 3 to be deleted, prev will only go up to 2
		current = current->next;//point current to current next element

	}

	temp = current->next;//point temp to current's next element
	prev->next = temp;//point prev's next element to temp
	temp->back = prev;//point temp's back element to prev
	delete current;//delete current node
}