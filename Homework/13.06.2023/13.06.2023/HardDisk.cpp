#include "HardDisk.h"

HardDisk::HardDisk(string& _make, string& _model, uint16_t& _readingSpeed, uint16_t& _writeSpeed
	, uint16_t& _powerConsumption, uint16_t& _weight, uint16_t& _capacity)
{
	this->make = _make;
	this->model = _model;
	*this->readingSpeed = _readingSpeed;
	*this->writeSpeed = _writeSpeed;
	*this->powerConsumption = _powerConsumption;
	*this->weight = _weight;
	*this->capacity = _capacity;
}

string HardDisk::getMake() const
{
	return this->make;
}

string HardDisk::getModel() const
{
	return this->model;
}

uint16_t HardDisk::getReadingSpeed() const
{
	return *this->readingSpeed;
}

uint16_t HardDisk::getWriteSpeed() const
{
	return *this->writeSpeed;
}

uint16_t HardDisk::getPowerConsuption() const
{
	return *this->powerConsumption;
}

uint16_t HardDisk::getWeight() const
{
	return *this->weight;
}

uint16_t HardDisk::getCapacity() const
{
	return *this->capacity;
}

void HardDisk::printDataHardDisk() const
{
	cout
		<< "Storage device make: " << this->make << endl
		<< "Storage device model: " << this->model << endl
		<< "Storage device reading speed: " << *this->readingSpeed << endl
		<< "Storage device write speed: " << *this->writeSpeed << endl
		<< "Storage device power consuption: " << *this->powerConsumption << endl
		<< "Storage device weight: " << *this->weight << endl
		<< "Storage device capacity: " << *this->capacity << endl;
}