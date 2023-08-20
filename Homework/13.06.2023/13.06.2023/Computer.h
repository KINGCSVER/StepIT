#include "SystemUnit.h" 
#include "Monitor.h"
#include "Mouse.h"
#include "Keyboard.h"

class Computer
{
private:
	string make{};
	string model{};
public:
	SystemUnit* systemUnit{};
	Monitor* monitor{};
	Keyboard* keyboard{};
	Mouse* mouse{};

	Computer(string& _make, string& _model, SystemUnit& _SystemUnit, Monitor& Monitor, Keyboard& Keyboard, Mouse& _Mouse);

	string getMake() const;
	string getModel() const;

	void printDataComputer() const;
};