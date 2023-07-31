#include "Fraction.h"

void input(int &num, int &den)
{
	static int index = 1;

	cout << "Enter the numerator of the " << index << " fraction: "; cin >> num;
	cout << "Enter the denominator of the " << index << " fraction: "; cin >> den;

	index++;
}

int main()
{
	int choice{}, num{}, den{};

	input(num, den);

	Fraction first(num, den);

	cout << endl << "1. Summary" << endl
		 << "2. Subtraction" << endl
		 << "3. Multiplication" << endl
		 << "4. Division" << endl
		 << "Enter choice: ";

	cin >> choice;

	while (choice > 4 || choice <= 0)
	{
		cout << "Invalid input! Good bye)"
			 << "Please re-enter: ";
		cin >> choice;
	}

	cout << endl;

	input(num, den);

	Fraction second(num, den);

	if (choice == 1)
	{
		cout << endl << "Summary of fractions is " << first + second << endl;
	}
	else if (choice == 2)
	{
		cout << endl << "Substraction of fractions is " << first - second << endl;
	}
	else if (choice == 3)
	{
		cout << endl << "Multiplication of fractions is " << first * second << endl;
	}
	else if (choice == 4)
	{
		cout << endl << "Division of fractions is " << first / second << endl;
	}

	return 0;
}
