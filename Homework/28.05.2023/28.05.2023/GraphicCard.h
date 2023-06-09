#pragma once
#include <iostream>
#include "Components.h"

using namespace std;

class GraphicCard : public Components
{
private:
	string CUDACores;
	string memoryType;
	string cooler;
public:
	GraphicCard() = default;

	GraphicCard(string make, string model, string serialNumber, string CUDACores, string memoryType, string cooler) : Components(make, model, serialNumber) {};

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