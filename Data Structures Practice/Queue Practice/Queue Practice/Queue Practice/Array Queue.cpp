#include "pch.h"
#include "Array Queue.h"

// Constructor to initialize queue
ArrQueue::ArrQueue(int size) {

	size = SIZE;
	arr = new int[size];
	capacity = size;
	front = 0;
	rear = -1;
	count = 0;
}

// Utility function to remove front element from the queue
void ArrQueue::dequeue() {

	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Removing " << arr[front] << '\n';

	front = (front + 1) % capacity;
	count--;

}

// Utility function to add an item to the queue
void ArrQueue::enqueue(int item) {

	if (isFull())
	{
		cout << "OverFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Inserting " << item << '\n';

	rear = (rear + 1) % capacity;
	arr[rear] = item;
	count++;

}

// Utility function to return front element in the queue
int ArrQueue::peek() {

	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}
	return arr[front];

}

// Utility function to return the size of the queue
int ArrQueue::size() {

	return count;

}

// Utility function to check if the queue is empty or not
bool ArrQueue::isEmpty() {

	return (size() == 0);

}

// Utility function to check if the queue is full or not
bool ArrQueue::isFull() {

	return (size() == capacity);

}