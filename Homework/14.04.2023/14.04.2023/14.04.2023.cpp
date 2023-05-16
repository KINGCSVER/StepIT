#include <iostream>
#include "Func.h"
using namespace std;

int (*Action[])(int*, int*, int, int) { maximum, minimum, average };

int main()
{
	int size1{}, size2{};

	cout << "Enter size of first array:"; cin >> size1;
	cout << "Enter size of second array:"; cin >> size2;

	int* array1 = new int[size1];
	int* array2 = new int[size2];

	srand(time(0));

	for (int i = 0; i < size1; i++) 
	{
	array1[i] = rand() % 100 + 1;
	}

	for (int i = 0; i < size2; i++) 
	{
		array2[i] = rand() % 100 + 1;
	}

	int choice{};

	cout
		<< "1. Maximum" << endl
		<< "2. Minimum" << endl
		<< "3. Average" << endl
		<< "Enter choice: ";

	cin >> choice;

	cout << endl;

	cout << Action[choice - 1](array1, array2, size1, size2) << endl;

	return 0;
}