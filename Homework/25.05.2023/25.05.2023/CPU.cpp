#include "CPU.h"

CPU::CPU(string make, string model, string serialNumber, string cores, string clock, string socket)
{
	this->make = make;
	this->model = model;
	this->serialNumber = serialNumber;
	this->cores = cores;
	this->clock = clock;
	this->socket = socket;
}

string CPU::getCPUMake() const
{
	return this->make;
}

string CPU::getCPUModel() const
{
	return this->model;
}

string CPU::getCPUSerialNumber() const
{
	return this->serialNumber;
}

string CPU::getCPUCores() const
{
	return this->cores;
}

string CPU::getCPUClock() const
{
	return this->clock;
}

string CPU::getCPUSocket() const
{
	return this->socket;
}

void CPU::setCPUMake()
{
	cout << "Enter CPU make: "; cin >> this->make;
}

void CPU::setCPUModel()
{
	cout << "Enter CPU model: "; cin >> this->model;
}

void CPU::setCPUSerialNumber()
{
	cout << "Enter CPU serial number: "; cin >> this->serialNumber;
}

void CPU::setCPUCores()
{
	cout << "Enter CPU cores: "; cin >> this->cores;
}

void CPU::setCPUClock()
{
	cout << "Enter CPU clock: "; cin >> this->clock;
}

void CPU::setCPUSocket()
{
	cout << "Enter CPU socket: "; cin >> this->socket;
}

void CPU::printCPUInfo() const
{
	cout << "CPU make: " << this->make << endl
		 << "CPU model: " << this->model << endl
		 << "CPU serial number: " << this->serialNumber << endl
		 << "CPU cores: " << this->cores << endl
		 << "CPU clock: " << this->clock << endl
		 << "CPU socket: " << this->socket << endl;
}