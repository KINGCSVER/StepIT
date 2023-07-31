#include <iostream>
#include <string>
using namespace std;

class Fraction
{
public:
	int numerator{};
	int denominator{}; 

	Fraction() = default;

	Fraction(int numerator, int denominator)
	{
		this->numerator = numerator;
		this->denominator = denominator;
	}

	friend ostream& operator << (ostream& os, const Fraction answer)
	{
		cout
			<< "Numerator: " << answer.numerator << endl
			<< "Denominator: " << answer.denominator << endl;
		return os;
	}

	float reduction(Fraction& red);

	float operator+(Fraction& b);
	float operator-(Fraction& b);
	float operator*(Fraction& b);
	float operator/(Fraction& b);
};