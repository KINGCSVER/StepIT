#pragma once
#include "CPU.h"
#include "GraphicCard.h"
#include "RAM.h"
#include "Drive.h"

class Motherboard
{
private:
	CPU cpu;
	GraphicCard GPU;
	RAM ram;
	Drive drive;
public:
	Motherboard() = default;

	Motherboard(CPU cpu, GraphicCard GPU, RAM ram, Drive drive);

	CPU getCPU() const;
	GraphicCard getGPU() const;
	RAM getRam() const;
	Drive getDrive() const;
};