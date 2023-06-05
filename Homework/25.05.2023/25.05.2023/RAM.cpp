#include "RAM.h"

RAM::RAM(string make, string model, string serialNumber, string type, string pins, string speed)
{
	this->make = make;
	this->model = model;
	this->serialNumber = serialNumber;
	this->type = type;
	this->pins = pins;
	this->speed = speed;
}

string RAM::getRAMMake() const
{
	return this->make;
}

string RAM::getRAMModel() const
{
	return this->model;
}

string RAM::getRAMSerialNumber() const
{
	return this->serialNumber;
}

string RAM::getRAMType() const
{
	return this->type;
}

string RAM::getRAMPins() const
{
	return this->pins;
}

string RAM::getRAMSpeed() const
{
	return this->speed;
}

void RAM::setRAMMake()
{
	cout << "Enter RAM make: "; cin >> this->make;
}

void RAM::setRAMModel()
{
	cout << "Enter RAM model: "; cin >> this->model;
}

void RAM::setRAMSerialNumber()
{
	cout << "Enter RAM serial number: "; cin >> this->serialNumber;
}

void RAM::setRAMType()
{
	cout << "Enter RAM type: "; cin >> this->type;
}

void RAM::setRAMPins()
{
	cout << "Enter RAM pins: "; cin >> this->pins;
}

void RAM::setRAMSpeed()
{
	cout << "Enter RAM speed: "; cin >> this->speed;
}

void RAM::printRAMInfo() const
{
	cout << "RAM make: " << this->make << endl
		 << "RAM model: " << this->model << endl
		 << "RAM serial number: " << this->serialNumber << endl
		 << "RAM type: " << this->type << endl
		 << "RAM pins: " << this->pins << endl
		 << "RAM speed: " << this->speed << endl;
}