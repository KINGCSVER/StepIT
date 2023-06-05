#include "Case.h"

Case::Case(string make, string model, string serialNumber, Motherboard motherboard, PowerSupply powerSupply) : Components(make, model, serialNumber)
{
	this->motherboard = motherboard;
	this->powerSupply = powerSupply;
}

string Case::getCaseMake() const
{
	return this->make;
}

string Case::getCaseMake() const
{
	return this->model;
}

string Case::getCaseMake() const
{
	return this->serialNumber;
}

void Case::setCaseMake()
{
	cout << "Enter case make: "; cin >> this->make;
}

void Case::setCaseMake()
{
	cout << "Enter case model: "; cin >> this->model;
}

void Case::setCaseMake()
{
	cout << "Enter case serial number: "; cin >> this->serialNumber;
}

Motherboard Case::getMotherboard()
{
	return this->motherboard;
}

PowerSupply Case::getPowerSupply()
{
	return this->powerSupply;
}