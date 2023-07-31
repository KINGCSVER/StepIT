#include "Circle.h"

Circle::Circle(int _radius, int _diameter)
{
	this->radius = _radius;
	this->diameter = _diameter;
}

bool Circle::operator==(const Circle& _Circle) const
{
		return this->radius == _Circle.radius && this->diameter == _Circle.diameter;
}

bool Circle::operator!=(const Circle& _Circle) const
{
	return !(*this == _Circle);
}

bool Circle::operator>(const Circle& _Circle) const
{
	return this->radius > _Circle.radius && this->diameter > _Circle.diameter;
}

bool Circle::operator>=(const Circle& _Circle) const
{
	return this->radius >= _Circle.radius && this->diameter >= _Circle.diameter;
}

bool Circle::operator<(const Circle& _Circle) const
{
	return this->radius < _Circle.radius && this->diameter < _Circle.diameter;
}

bool Circle::operator<=(const Circle& _Circle) const
{
	return this->radius <= _Circle.radius && this->diameter <= _Circle.diameter;
}

Circle Circle::operator+=(const int& add)
{
	this->radius += add;
	this->diameter += (add * 2);

	return *this;
}

Circle Circle::operator-=(const int& sub)
{
	this->radius -= sub;
	this->diameter -= (sub * 2);

	return *this;
}