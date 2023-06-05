#pragma once
#include "CPU.h"
#include "GraphicCard.h"
#include "RAM.h"
#include "Drive.h"
#include "Components.h"

class Motherboard : public Components
{
private:
	CPU cpu;
	GraphicCard GPU;
	RAM ram;
	Drive drive;
public:
	Motherboard() = default;

	Motherboard(string make, string model, string serialNumber, CPU cpu, GraphicCard GPU, RAM ram, Drive drive) : Components(make, model, serialNumber) {};

	string getMotherboardMake() const;
	string getMotherboardModel() const;
	string getMotherboardSerialNumber() const;

	void setMotherboardMake();
	void setMotherboardModel();
	void setMotherboardSerialNumber();

	CPU getCPU() const;
	GraphicCard getGPU() const;
	RAM getRam() const;
	Drive getDrive() const;
};