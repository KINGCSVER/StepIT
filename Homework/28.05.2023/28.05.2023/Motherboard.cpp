#include "Motherboard.h"

Motherboard::Motherboard(string make,string model,string serialNumber, CPU cpu, GraphicCard GPU, RAM ram, Drive drive) : Components (make, model, serialNumber)
{
	this->cpu = cpu;
	this->GPU = GPU;
	this->ram = ram;
	this->drive = drive;
}

string Motherboard::getMotherboardMake() const
{
	return this->make;
}

string Motherboard::getMotherboardModel() const
{
	return this->model;
}

string Motherboard::getMotherboardSerialNumber() const
{
	return this->serialNumber;
}

void Motherboard::setMotherboardMake()
{
	cout << "Enter motherboard make: "; cin >> this->make;
}

void Motherboard::setMotherboardModel()
{
	cout << "Enter motherboard model: "; cin >> this->model;
}

void Motherboard::setMotherboardSerialNumber()
{
	cout << "Enter motherboard serial number: "; cin >> this->serialNumber;
}

CPU Motherboard::getCPU() const
{
	return this->cpu;
}

GraphicCard Motherboard::getGPU() const
{
	return this->GPU;
}

RAM Motherboard::getRam() const
{
	return this->ram;
}

Drive Motherboard::getDrive() const
{
	return this->drive;
}