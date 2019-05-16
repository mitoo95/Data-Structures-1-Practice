#pragma once
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Node{

	public:
		Node();
		Node(int);
		string getOperationType();
		void setOperationType(int);
		int getAverageTime();
		void setAverageTime(int);
		Node *next;

	private:

		string operation;
		int averageTime;
		

};