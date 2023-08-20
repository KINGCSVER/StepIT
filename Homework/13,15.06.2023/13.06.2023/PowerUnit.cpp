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

PowerUnit::PowerUnit(const PowerUnit& _powerUnit)
{
	this->make = _powerUnit.make;
	this->model = _powerUnit.model;
	this->power = new uint16_t(*_powerUnit.power);
	this->tension = new uint16_t(*_powerUnit.tension);
	this->current = new uint16_t(*_powerUnit.current);
	this->efficiency = new uint16_t(*_powerUnit.efficiency);
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