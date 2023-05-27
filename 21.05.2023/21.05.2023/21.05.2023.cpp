#include <iostream>

using namespace std;

class Fraction 
{
private:
	int numerator1;
	int numerator2;
	int denominator1;
	int denominator2;
public:

	Fraction() = default;

	Fraction(int numerator1, int numerator2, int denominator1, int denominator2)
	{
		this->numerator1 = numerator1;
		this->numerator2 = numerator2;
		this->denominator1 = denominator1;
		this->denominator2 = denominator2;
	}

	void fractionSummary()
	{
		int denominator{}, numerator{};
		float result{};
	
		if (this->denominator1 % this->denominator2 == 0)
		{
			denominator = this->denominator1;
		}
		else if (this->denominator2 % this->denominator1 == 0)
		{
			denominator = this->denominator2;
		}
		else
		{
			denominator = this->denominator1 * this->denominator2;
		}
	
		numerator = this->numerator1 * (denominator / this->denominator1) + this->numerator2 * (denominator / this->denominator2);

		result = (float)numerator / (float)denominator;

		cout << "Summary of fractions: " << result << endl;
	}

	void fractionSubtraction()
	{
		int denominator{}, numerator{};
		float result{};

		if (this->denominator1 % this->denominator2 == 0)
		{
			denominator = this->denominator1;
		}
		else if (this->denominator2 % this->denominator1 == 0)
		{
			denominator = this->denominator2;
		}
		else
		{
			denominator = this->denominator1 * this->denominator2;
		}

		numerator = this->numerator1 * (denominator / this->denominator1) - this->numerator2 * (denominator / this->denominator2);

		result = (float)numerator / (float)denominator;

		cout << "Subtraction of fractions: " << result << endl;
	}

	void fractionMultiply()
	{
		float result{};

		result = (float)(this->numerator1 * this->numerator2) / (float)(this->denominator1 * denominator2);

		cout << "Multiply of fractions: " << result << endl;
	}

	void fractionDivide()
	{
		float result{};

		result = (float)(this->numerator1 * this->denominator2) / (float)(this->numerator2 * denominator1);

		cout << "Divide of fractions: " << result << endl;
	}
};



int main()
{
	int numer1{}, numer2{}, denom1{}, denom2{};

	cout << "Enter numerator of first fraction: "; cin >> numer1;
	cout << "Enter denominator of first fraction: "; cin >> denom1;
	cout << "Enter numerator of second fraction: "; cin >> numer2;
	cout << "Enter denominator of second fraction: "; cin >> denom2;

	cout << endl;

	Fraction fraction(numer1, numer2, denom1, denom2);

	fraction.fractionSummary();
	
	fraction.fractionSubtraction();

	fraction.fractionMultiply();

	fraction.fractionDivide();

	return 0;
}