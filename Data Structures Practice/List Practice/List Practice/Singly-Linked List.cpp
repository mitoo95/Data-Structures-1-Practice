#include "pch.h"
#include "Singly-Linked List.h"

SLL::SLL() {

	head = nullptr;
	tail = nullptr;

}

void SLL::createNode(int value) {

	Node *temp = new Node; // creating new node named temp or temporary
	temp->data = value; // assign value to temp data member
	temp->next = nullptr;// assign temp next element, pointing to null
	if (head == nullptr) { // if head pointer, points to null then
		
		head = temp;// head points to temp
		tail = temp;// tail points to temp
		temp = nullptr;//temp points to null

	}
	else {
		tail->next = temp;// next element from where tail is becomes temp
		tail = temp;// tail points to temp
	}

}

void SLL::display() {

	Node *temp = new Node; // create new node
	temp = head; // head pointer points to temp
	while (temp != nullptr) { //while temp points to something, then
		cout << temp->data << "\t";// print the data temp is pointing to
		temp = temp->next;//point temp next element to the next node there is, and it becomes next temp
	}

}

void SLL::insertStart(int value) {

	Node *temp = new Node;//create new node
	temp->data = value;//assign value to temp's data element
	temp->next = head;//point temp's next element to head
	head = temp;//make head pointer point to new head being temp

}

void SLL::insertPosition(int pos, int value) {

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
	temp->next = current;//point temp's next element to current

}

void SLL::deleteFirst() {

	Node *temp = new Node;//create new temporary node
	temp = head;//point temp to pointer head
	head = head->next;//move head pointer to next node, to make it new head
	delete temp;//delete temp

}

void SLL::deleteLast(){

	Node *current = new Node;//create new temporary node named current
	Node *prev = new Node;//create new temporary node named previous

	current = head;//point current to head
	while (current->next != nullptr) {//while current next element points to something
		prev = current;//point prev to current
		current = current->next;// move current to next node
	}
	tail = prev;//point tail to pointer prev
	prev->next = nullptr;//make prev next element point to null
	delete current;//delete current

}

void SLL::deletePosition(int pos) {

	Node *current = new Node;//create new temporary node named current
	Node *prev = new Node;//create new temporary node named previous

	current = head;//point current to head
	for (int i = 0; i < pos; i++) {//for loop to iterate through list until before the position given to function

		prev = current;//point prev to current, ex. I ask for pos 3 to be deleted, prev will only go up to 2
		current = current->next;//point current to current next element

	}
	prev->next = current->next;//point prev next element to current next element
	delete current;//delete current node
}