#pragma once
#include "pch.h"
#include <iostream>
#include <cstdlib>

using namespace std;

#define SIZE 10;

class ArrQueue {

	public:
		ArrQueue (int);
		void dequeue();
		void enqueue(int);
		int peek();
		int size();
		bool isEmpty();
		bool isFull();

	private:
		int *arr;   	// array to store queue elements
		int capacity;   // maximum capacity of the queue
		int front;  	// front points to front element in the queue (if any)
		int rear;   	// rear points to last element in the queue
		int count;  	// current size of the queue
};
