#include "Keyboard.h"

Keyboard::Keyboard(string& _make, string& _model, string& _type, string& _connectionType, string& _spillResistance, string& _compatibleWithOC,
	uint16_t& _pollingFrequency)
{
	this->make = _make;
	this->model = _model;
	this->type = _type;
	this->connectionType = _connectionType;
	this->spillResistance = _spillResistance;
	this->compatibleWithOC = _compatibleWithOC;
	*this->pollingFrequency = _pollingFrequency;
}

Keyboard::Keyboard(const Keyboard& _keyboard)
{
	this->make = _keyboard.make;
	this->model = _keyboard.model;
	this->type = _keyboard.type;
	this->connectionType = _keyboard.connectionType;
	this->spillResistance = _keyboard.spillResistance;
	this->compatibleWithOC = _keyboard.compatibleWithOC;
	this->pollingFrequency = new uint16_t(*_keyboard.pollingFrequency);
}

string Keyboard::getMake() const
{
	return this->make;
}

string Keyboard::getModel() const
{
	return this->model;
}

string Keyboard::getType() const
{
	return this->type;
}

string Keyboard::getConnectionType() const
{
	return this->connectionType;
}

string Keyboard::getSpillResistance() const
{
	return this->spillResistance;
}

string Keyboard::getCompatibleWithOC() const
{
	return this->compatibleWithOC;
}

uint16_t Keyboard::getPollingFrequency() const
{
	return *this->pollingFrequency;
}

void Keyboard::printDataKeyboard() const
{
	cout
		<< "Keyboard make: " << this->make << endl
		<< "Keyboard model: " << this->model << endl
		<< "Keyboard type: " << this->type << endl
		<< "Keybard connection type: " << this->connectionType << endl
		<< "Keyboard spill resistance: " << this->spillResistance << endl
		<< "Keyboard compatible with OC: " << this->compatibleWithOC << endl
		<< "Keyboard polling frequency: " << *this->pollingFrequency << endl;
}