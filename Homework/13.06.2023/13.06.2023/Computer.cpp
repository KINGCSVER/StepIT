#include "Computer.h"

Computer::Computer(string& _make, string& _model, SystemUnit& _SystemUnit, Monitor& _Monitor, Keyboard& _Keyboard, Mouse& _Mouse)
{
	this->make = _make;
	this->model = _model;
	this->SystemUnit = new SystemUnit(_SystemUnit);
	this->Monitor = new Monitor(_Monitor);
	this->Keyboard = new Keyboard(_Keyboard);
	this->Mouse = new Mouse(_Mouse);
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

	this->SystemUnit->printDataSystemUnit();
	this->Monitor->printDataMonitor();
	this->Keyboard->printDataKeyboard();
	this->Mouse->printDataMouse();
}