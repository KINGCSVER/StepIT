#pragma once
#include "Motherboard.h"
#include "PowerSupply.h"

class Case
{
private:
	Motherboard motherboard;
	PowerSupply powerSupply;
public:
	Case(Motherboard motherboard, PowerSupply powerSupply);

	Motherboard getMotherboard();
	PowerSupply getPowerSupply();
};