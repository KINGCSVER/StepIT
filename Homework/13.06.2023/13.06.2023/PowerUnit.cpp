#include "PowerUnit.h"

PowerUnit::PowerUnit(string& _make, string& _model, uint16_t& _power,
	uint16_t& _tension, uint16_t& _current, uint16_t& _efficiency)
{
	this->make = _make;
	this->model = _model;
	*this->power = _power;
	*this->tension = _tension;
	*this->current = _current;
	*this->efficiency = _efficiency;
}

string PowerUnit::getMake() const
{
	return this->make;
}

string PowerUnit::getModel() const
{
	return this->model;
}
uint16_t PowerUnit::getPower() const
{
	return *this->power;
}

uint16_t PowerUnit::getTension() const
{
	return *this->tension;
}

uint16_t PowerUnit::getCurrent() const
{
	return *this->current;
}

uint16_t PowerUnit::getEfficiency() const
{
	return *this->efficiency;
}

void PowerUnit::printDataPowerUnit() const
{
	cout
		<< "Power Unit make: " << this->make << endl
		<< "Power Unit model: " << this->model << endl
		<< "Power Unit power: " << *this->power << endl
		<< "Power Unit tension: " << *this->tension << endl
		<< "Power Unit current: " << *this->current << endl
		<< "Power Unit efficiency: " << *this->efficiency << endl;
}