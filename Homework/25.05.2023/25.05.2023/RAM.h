#pragma once
#include <iostream>

using namespace std;

class RAM
{
private:
	string make;
	string model;
	string serialNumber;
	string type;
	string pins;
	string speed;
public:
	RAM() = default;

	RAM(string make, string model, string serialNumber, string type, string pins, string speed);

	string getRAMMake() const;
	string getRAMModel() const;
	string getRAMSerialNumber() const;
	string getRAMType() const;
	string getRAMPins() const;
	string getRAMSpeed() const;

	void setRAMMake();
	void setRAMModel();
	void setRAMSerialNumber();
	void setRAMType();
	void setRAMPins();
	void setRAMSpeed();

	void printRAMInfo() const;
};