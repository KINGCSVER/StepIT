#pragma once
#include <iostream>

using namespace std;

class GraphicCard
{
private:
	string make;
	string model;
	string serialNumber;
	string CUDACores;
	string memoryType;
	string cooler;
public:
	GraphicCard() = default;

	GraphicCard(string make, string model, string serialNumber, string CUDACores, string memoryType, string cooler);

	string getGPUMake() const;
	string getGPUModel() const;
	string getGPUSerialNumber() const;
	string getGPUCUDACores() const;
	string getGPUMemoryType() const;
	string getGPUCooler() const;

	void setGPUMake();
	void setGPUModel();
	void setGPUSerialNumber();
	void setGPUCUDACores();
	void setGPUMemoryType();
	void setGPUCooler();

	void printGPUInfo() const;
};