#pragma once
#include "pch.h"
#include "Node.h"

using namespace std;

class Q {
	public:
		Q ();
		~Q ();
		int Enqueue(Node *);
		int Dequeue();
		bool isEmpty();
		int maxRep();
		void print();
		Node *sentinel = new Node();
		Node *head;

	private:

};