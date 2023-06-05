#pragma once
#include "Motherboard.h"
#include "PowerSupply.h"

class Case : public Components
{
private:
	Motherboard motherboard;
	PowerSupply powerSupply;
public:
	Case(string make, string model, string serialNumber, Motherboard motherboard, PowerSupply powerSupply) : Components(make, model, serialNumber) {};

	string getCaseMake() const;
	string getCaseMake() const;
	string getCaseMake() const;

	void setCaseMake();
	void setCaseMake();
	void setCaseMake();

	Motherboard getMotherboard();
	PowerSupply getPowerSupply();
};