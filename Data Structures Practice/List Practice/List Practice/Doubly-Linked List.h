#pragma once
#include <iostream>

using namespace std;

class DLL {

	struct Node {

		int data;
		Node *next;
		Node *back;

	};

	public:
		DLL();
		void createNode(int);
		void display();
		void displayBackwards();
		void insertStart(int);
		void insertPosition(int, int);
		void deleteFirst();
		void deleteLast();
		void deletePosition(int);

	private:
		Node *head;
		Node *tail;
};
