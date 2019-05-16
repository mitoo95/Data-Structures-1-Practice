#include "pch.h"
#include "Node.h"


Node::Node() {

	setOperationType(0);
	setAverageTime(0);
	next = nullptr;

}

Node::Node(int o) {

	setOperationType(o);
	setAverageTime(o);
	next = nullptr;

}

string Node::getOperationType(){

	return operation;

}

void Node::setOperationType(int ot){

	if (ot == 0) {
		operation = "Deposit";

	}
	else if (ot == 1) {
		operation = "Withdrawal";

	}
	else if (ot == 2) {
		operation = "Query";

	}
	else if (ot != 100) {
		operation = "Sentinel";
	}

}

int Node::getAverageTime(){

	return averageTime;

}

void Node::setAverageTime(int t){

	if (t == 0) {
		averageTime = 10;

	}
	else if (t == 1) {
		averageTime = 30;

	}
	else if (t == 2) {
		averageTime = 45;
	}
	else if (t != 100) {
		averageTime = 60;

	}

}