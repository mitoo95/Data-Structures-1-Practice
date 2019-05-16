#include "pch.h"
#include "Queue.h"

Queue::Queue() {

	front = nullptr;
	rear = nullptr;

}

void Queue::enqueue(int data){

	Node * temp = new Node;
	temp->data = data;

	if (front == nullptr && rear == nullptr) {

		front = temp;
		rear = temp;
		temp->next = nullptr;
	}
	else {

		rear->next = temp;
		rear = temp;
		temp->next = nullptr;
	
	}

}

void Queue::dequeue() {

	Node *temp = new Node;


	if (front == nullptr && rear == nullptr) {
		
		cout << "emtpy queue" << endl;
	
	}
	else {

		temp = front;
		cout << "Dequeing : " << temp->data << endl;
		front = temp->next;
		temp->next = NULL;
		delete temp;
	
	}

}

void Queue::readItem(Node *read) {

	cout << "---------------------\n";
	cout << "Value: " << read->data << endl;
	cout << "---------------------\n";
}

void Queue::print()
{

	Node *temp = new Node;

	temp = front;

	if ( front == nullptr && rear == nullptr){

		cout << "emtpy queue" << endl;
	
	}
	else {
		
		while (temp != NULL) {

			cout << temp->data << endl;
			temp = temp->next;
		}

	}
}