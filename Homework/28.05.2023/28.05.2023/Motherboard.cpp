#include "Motherboard.h"

Motherboard::Motherboard(CPU cpu, GraphicCard GPU, RAM ram, Drive drive)
{
	this->cpu = cpu;
	this->GPU = GPU;
	this->ram = ram;
	this->drive = drive;
}

CPU Motherboard::getCPU() const
{
	return this->cpu;
}

GraphicCard Motherboard::getGPU() const
{
	return this->GPU;
}

RAM Motherboard::getRam() const
{
	return this->ram;
}

Drive Motherboard::getDrive() const
{
	return this->drive;
}