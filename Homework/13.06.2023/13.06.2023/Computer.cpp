#include "Computer.h"

Computer::Computer(string& _make, string& _model, SystemUnit& _SystemUnit, Monitor& _Monitor, Keyboard& _Keyboard, Mouse& _Mouse)
{
	this->make = _make;
	this->model = _model;
	this->systemUnit = new SystemUnit(_SystemUnit);
	this->monitor = new Monitor(_Monitor);
	this->keyboard = new Keyboard(_Keyboard);
	this->mouse = new Mouse(_Mouse);
}

Computer::Computer(const Computer& _Computer)
{
	this->make = _Computer.make;
	this->model = _Computer.model;
	this->systemUnit = new SystemUnit(*_Computer.systemUnit);
	this->monitor = new Monitor(*_Computer.monitor);
	this->keyboard = new Keyboard(*_Computer.keyboard);
	this->mouse = new Mouse(*_Computer.mouse);
}

string Computer::getMake() const
{
	return this->make;
}

string Computer::getModel() const
{
	return this->model;
}

void Computer::printDataComputer() const
{
	cout
		<< "Computer make: " << this->make << endl
		<< "Computer model: " << this->model << endl;

	this->systemUnit->printDataSystemUnit();
	this->monitor->printDataMonitor();
	this->keyboard->printDataKeyboard();
	this->mouse->printDataMouse();
}