#include "Case.h"

Case::Case(Motherboard motherboard, PowerSupply powerSupply)
{
	this->motherboard = motherboard;
	this->powerSupply = powerSupply;
}

Motherboard Case::getMotherboard()
{
	return this->motherboard;
}

PowerSupply Case::getPowerSupply()
{
	return this->powerSupply;
}