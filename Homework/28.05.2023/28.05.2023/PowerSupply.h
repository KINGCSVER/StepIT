#pragma once
#include <iostream>

using namespace std;

class PowerSupply
{
private:
	string make;
	string model;
	string serialNumber;
	string voltage;
	string power;
public:
	PowerSupply() = default;

	PowerSupply(string make, string model, string serialNumber, string voltage, string power);

	string getPowerSupplyMake() const;
	string getPowerSupplyModel() const;
	string getPowerSupplySerialNumber() const;
	string getPowerSupplyVoltage() const;
	string getPowerSupplyPower() const;

	void setPowerSupplyMake();
	void setPowerSupplyModel();
	void setPowerSupplySerialNumber();
	void setPowerSupplyVoltage();
	void setDPowerSupplyPower();

	void printPowerSupplyInfo() const;
};