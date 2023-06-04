#include "Drive.h"

Drive::Drive(string make, string model, string serialNumber, string type, string capacity)
{
	this->make = make;
	this->model = model;
	this->serialNumber = serialNumber;
	this->type = type;
	this->capacity = capacity;
}

string Drive::getDriveMake() const
{
	return this->make;
}

string Drive::getDriveModel() const
{
	return this->model;
}

string Drive::getDriveSerialNumber() const
{
	return this->serialNumber;
}

string Drive::getDriveType() const
{
	return this->type;
}

string Drive::getDriveCapacity() const
{
	return this->capacity;
}

void Drive::setDriveMake()
{
	cout << "Enter Drive make: "; cin >> this->make;
}

void Drive::setDriveModel()
{
	cout << "Enter Drive model: "; cin >> this->model;
}

void Drive::setDriveSerialNumber()
{
	cout << "Enter Drive serial number: "; cin >> this->serialNumber;
}

void Drive::setDriveType()
{
	cout << "Enter Drive type: "; cin >> this->type;
}

void Drive::setDriveCapacity()
{
	cout << "Enter Drive capacity: "; cin >> this->capacity;
}

void Drive::printDriveInfo() const
{
	cout << "Drive make: " << this->make << endl
		 << "Drive model: " << this->model << endl
		 << "Drive serial number: " << this->serialNumber << endl
		 << "Drive type: " << this->type << endl
		 << "Drive pins: " << this->capacity << endl;
}