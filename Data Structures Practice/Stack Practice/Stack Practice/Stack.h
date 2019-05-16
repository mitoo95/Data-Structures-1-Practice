#pragma once
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Stack {

	struct Node {

		int value;
		string name;
		Node *prev;

	};

	public:
		Stack ();
		~Stack();
		void Push(string, int);
		void Pop();
		void readItem(Node *);
		void Print();

	private:

		Node *stackPtr;

};