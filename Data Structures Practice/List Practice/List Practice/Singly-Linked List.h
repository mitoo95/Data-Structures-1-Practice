#pragma once
#include <iostream>

using namespace std;

class SLL{
	
	struct Node{

		int data;
		Node *next;

	};

	public:
		SLL();
		void createNode(int);
		void display();
		void insertStart(int);
		void insertPosition(int, int);
		void deleteFirst();
		void deleteLast();
		void deletePosition(int);

	private:

		Node *head, *tail;
};