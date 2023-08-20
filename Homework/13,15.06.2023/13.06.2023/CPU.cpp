#include "CPU.h"

CPU::CPU(string& _make, string& _model, uint16_t& _frequency, string& _performance, string& _socket)
{
	this->make = _make;
	this->model = _model;
	*this->frequency = _frequency;
	this->performance = _performance;
	this->socket = _socket;
}

CPU::CPU(const CPU& _CPU)
{
	this->make = _CPU.make;
	this->model = _CPU.model;
	this->frequency = new uint16_t(*_CPU.frequency);
	this->performance = _CPU.performance;
	this->socket = _CPU.socket;
}

string CPU::getMake() const
{
	return this->make;
}

string CPU::getModel() const
{
	return this->model;
}

string CPU::getPerformance() const
{
	return this->performance;
}

string CPU::getSocket() const
{
	return this->socket;
}

uint16_t CPU::getFrequency() const
{
	return *this->frequency;
}

void CPU::printDataCPU() const
{
	cout
		<< "CPU make: " << this->make << endl
		<< "CPU model: " << this->model << endl
		<< "CPU frequency: " << *this->frequency << endl
		<< "CPU performance: " << this->performance << endl
		<< "CPU socket: " << this->socket << endl;
}