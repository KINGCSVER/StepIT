#include "mouse.h"


Mouse::Mouse(string& _make, string& _model, string& _sensortype, string& _connectionType, uint16_t& _frequency, uint16_t& _numberOfButtons,
	uint16_t& _responseTime, uint16_t& _DPI, uint16_t& _weight)
{
	this->make = _make;
	this->model = _model;
	this->sensorType = _sensortype;
	this->connectionType = _connectionType;
	*this->frequency = _frequency;
	*this->numberOfButtons = _numberOfButtons;
	*this->responseTime = _responseTime;
	*this->DPI = _DPI;
	*this->weight = _weight;
}

Mouse::Mouse(const Mouse& _mouse)
{
	this->make = _mouse.make;
	this->model = _mouse.model;
	this->sensorType = _mouse.sensorType;
	this->connectionType = _mouse.connectionType;
	this->frequency = new uint16_t(*_mouse.frequency);
	this->numberOfButtons = new uint16_t(*_mouse.numberOfButtons);
	this->responseTime = new uint16_t(*_mouse.responseTime);
	this->DPI = new uint16_t(*_mouse.DPI);
	this->weight = new uint16_t(*_mouse.weight);
}

string Mouse::getMake() const
{
	return this->make;
}

string Mouse::getModel() const
{
	return this->model;
}

string Mouse::getSensorType() const
{
	return this->sensorType;
}

string Mouse::getConnectiontype() const
{
	return this->connectionType;
}

uint16_t Mouse::getFrequency() const
{
	return *this->frequency;
}

uint16_t Mouse::getNumberOfButtons() const
{
	return *this->numberOfButtons;
}

uint16_t Mouse::getResponseTime() const
{
	return *this->responseTime;
}

uint16_t Mouse::getDPI() const
{
	return *this->DPI;
}

uint16_t Mouse::getWeight() const
{
	return *this->weight;
}

void Mouse::printDataMouse() const
{
	cout
		<< "Mouse make: " << this->make << endl
		<< "Mouse model: " << this->model << endl
		<< "Mouse sensor type: " << this->sensorType << endl
		<< "Mouse connection type: " << this->connectionType << endl
		<< "Mouse frequency: " << *this->frequency << endl
		<< "Mouse numbers of buttons: " << *this->numberOfButtons << endl
		<< "Mouse response time: " << *this->responseTime << endl
		<< "Mouse DPI: " << *this->DPI << endl
		<< "Mouse weight: " << *this->weight << endl;
}