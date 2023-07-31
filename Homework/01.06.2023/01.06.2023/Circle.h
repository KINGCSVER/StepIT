#pragma once
#include <iostream>
#include <string>

using namespace std;

class Circle
{
public:
	int radius{};
	int diameter{};

	Circle() = default;
	Circle(int _radius, int _diameter);

	friend ostream& operator << (ostream& os, const Circle& _Circle)
	{
		os << _Circle.radius << endl << _Circle.diameter << endl;
		return os;
	}

	bool operator==(const Circle& _Circle) const;
	bool operator!=(const Circle& _Circle) const;
	bool operator>(const Circle& _Circle) const;
	bool operator>=(const Circle& _Circle) const;
	bool operator<(const Circle& _Circle) const;
	bool operator<=(const Circle& _Circle) const;

	Circle operator+=(const int& add);
	Circle operator-=(const int& minus);
};