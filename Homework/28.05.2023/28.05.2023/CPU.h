#pragma once
#include <iostream>

using namespace std;

class CPU
{
private:
	string make;
	string model;
	string serialNumber;
	string cores;
	string clock;
	string socket;
public:
	CPU() = default;

	CPU(string make, string model, string serialNumber, string cores, string clock, string socket);

	string getCPUMake() const;
	string getCPUModel() const;
	string getCPUSerialNumber() const;
	string getCPUCores() const;
	string getCPUClock() const;
	string getCPUSocket() const;

	void setCPUMake();
	void setCPUModel();
	void setCPUSerialNumber();
	void setCPUCores();
	void setCPUClock();
	void setCPUSocket();

	void printCPUInfo() const;
};