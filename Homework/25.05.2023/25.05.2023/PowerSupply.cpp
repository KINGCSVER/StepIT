#include "PowerSupply.h"

PowerSupply::PowerSupply(string make, string model, string serialNumber, string voltage, string power)
{
	this->make = make;
	this->model = model;
	this->serialNumber = serialNumber;
	this->voltage = voltage;
	this->power = power;
}

string PowerSupply::getPowerSupplyMake() const
{
	return this->make;
}

string PowerSupply::getPowerSupplyModel() const
{
	return this->model;
}

string PowerSupply::getPowerSupplySerialNumber() const
{
	return this->serialNumber;
}

string PowerSupply::getPowerSupplyVoltage() const
{
	return this->voltage;
}

string PowerSupply::getPowerSupplyPower() const
{
	return this->power;
}

void PowerSupply::setPowerSupplyMake()
{
	cout << "Enter Power supply make: "; cin >> this->make;
}

void PowerSupply::setPowerSupplyModel()
{
	cout << "Enter Power supply model: "; cin >> this->model;
}

void PowerSupply::setPowerSupplySerialNumber()
{
	cout << "Enter Power supply serial number: "; cin >> this->serialNumber;
}

void PowerSupply::setPowerSupplyVoltage()
{
	cout << "Enter Power supply voltage: "; cin >> this->voltage;
}

void PowerSupply::setDPowerSupplyPower()
{
	cout << "Enter Power supply power: "; cin >> this->power;
}

void PowerSupply::printPowerSupplyInfo() const
{
	cout << "Power supply make: " << this->make << endl
		 << "Power supply model: " << this->model << endl
		 << "Power supply serial number: " << this->serialNumber << endl
		 << "Power supply voltage: " << this->voltage << endl
		 << "Power supply power: " << this->power << endl;
}