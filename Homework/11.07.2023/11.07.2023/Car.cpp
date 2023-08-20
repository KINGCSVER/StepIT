#include "Car.h"

Car::Car(string& _mark, string& _model, uint16_t& _maxSpeed, uint16_t& _numberOfSeats)
{
	this->mark = _mark;
	this->model = _model;
	*this->maxSpeed = _maxSpeed;
	*this->numberOfSeats = _numberOfSeats;
}

string Car::getMark() const
{
	return this->mark;
}

string Car::getModel() const
{
	return this->model;
}

uint16_t Car::getMaxSpeed() const
{
	return *this->maxSpeed;
}

uint16_t Car::getnumberOfSeets() const
{
	return *this->numberOfSeats;
}