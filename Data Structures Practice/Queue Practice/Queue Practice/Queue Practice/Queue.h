#pragma once
#include "pch.h"
#include <iostream>

using namespace std;

struct Node {

	int data;
	Node *next;

};

class Queue {


	public:
		Queue();
		void enqueue(int);
		void dequeue();
		void readItem(Node *);
		void print();


	private:

		Node *front;
		Node *rear;

};