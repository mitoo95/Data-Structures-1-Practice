#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	Stack s;

	cout << "---Pushing---" << endl;
	s.Push("Erasmo", 69);
	s.Push("Rafael", 59);
	s.Push("Santos", 49);
	s.Push("Saybe", 39);

	s.Print();

	for (int i = 0; i < 5; i++)
	{
		cout << "---Popping---" << endl;
		s.Pop();
	}

	cout << "Pushing new stack" << endl;
	s.Push("Erasmo", 79);
	s.Push("Rafael", 89);
	s.Push("Santos", 99);
	s.Push("Saybe", 109);
	s.Print();

}