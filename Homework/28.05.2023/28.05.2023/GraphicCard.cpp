#include "GraphicCard.h"

GraphicCard::GraphicCard(string make, string model, string serialNumber, string CUDACores, string memoryType, string cooler)
{
	this->make = make;
	this->model = model;
	this->serialNumber = serialNumber;
	this->CUDACores = CUDACores;
	this->memoryType = memoryType;
	this->cooler = cooler;
}

string GraphicCard::getGPUMake() const
{
	return this->make;
}

string GraphicCard::getGPUModel() const
{
	return this->model;
}

string GraphicCard::getGPUSerialNumber() const
{
	return this->serialNumber;
}

string GraphicCard::getGPUCUDACores() const
{
	return this->CUDACores;
}

string GraphicCard::getGPUMemoryType() const
{
	return this->memoryType;
}

string GraphicCard::getGPUCooler() const
{
	return this->cooler;
}

void GraphicCard::setGPUMake()
{
	cout << "Enter GPU make: "; cin >> this->make;
}

void GraphicCard::setGPUModel()
{
	cout << "Enter GPU model: "; cin >> this->model;
}

void GraphicCard::setGPUSerialNumber()
{
	cout << "Enter GPU serial number: "; cin >> this->serialNumber;
}

void GraphicCard::setGPUCUDACores()
{
	cout << "Enter GPU CUDA cores: "; cin >> this->CUDACores;
}

void GraphicCard::setGPUMemoryType()
{
	cout << "Enter GPU memory type: "; cin >> this->memoryType;
}

void GraphicCard::setGPUCooler()
{
	cout << "Enter GPU cooler: "; cin >> this->cooler;
}

void GraphicCard::printGPUInfo() const
{
	cout << "GPU make: " << this->make << endl
		 << "GPU model: " << this->model << endl
		 << "GPU serial number: " << this->serialNumber << endl
		 << "GPU CUDA cores: " << this->CUDACores << endl
		 << "GPU memory type: " << this->memoryType << endl
		 << "GPU Cooler" << this->cooler << endl;
}