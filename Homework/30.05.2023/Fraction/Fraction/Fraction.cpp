#include "Fraction.h"

float Fraction::reduction(Fraction& red)
{
	float num{};

	num = (float)red.numerator / (float)red.denominator;

	return num;
}

float Fraction :: operator+(Fraction& frac)
{
	Fraction result{};

	result.numerator = (numerator * frac.denominator) + (frac.numerator * denominator);
	result.denominator = denominator * frac.denominator;

	return reduction(result);
}


float Fraction :: operator-(Fraction& frac)
{
	Fraction result{};

	int num = 1;

	if (frac.denominator > denominator)
	{
		while ((frac.denominator * num) % denominator != 0) 
		{
			num++;
		}

		result.denominator = frac.denominator * num;
	}
	else
	{
		while ((denominator * num) % frac.denominator != 0)
		{
			num++;
		}

		result.denominator = denominator * num;
	}

	result.numerator = (numerator * (result.denominator / denominator)) - (frac.numerator * (result.denominator / frac.denominator));

	return reduction(result);
}


float Fraction :: operator*(Fraction& frac)
{
	Fraction result{};

	result.numerator = numerator * frac.numerator;
	result.denominator = denominator * frac.denominator;

	return reduction(result);;
}


float Fraction :: operator/(Fraction& frac)
{
	Fraction result{};

	result.numerator = numerator * frac.denominator;
	result.denominator = denominator * frac.numerator;

	return reduction(result);
}