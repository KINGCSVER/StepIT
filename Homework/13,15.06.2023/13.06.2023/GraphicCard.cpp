#include "GraphicCard.h"

GraphicCard::GraphicCard(string& _make, string& _model, string& _CUDA,
	uint16_t& _frequency, uint16_t& _powerConsumption, uint16_t& _transistors)
{
	this->make = _make;
	this->model = _model;
	this->CUDA = _CUDA;
	*this->frequency = _frequency;
	*this->powerConsumption = _powerConsumption;
	*this->transistors = _transistors;
}

GraphicCard::GraphicCard(const GraphicCard& _graphicCard)
{
	this->make = _graphicCard.make;
	this->model = _graphicCard.model;
	this->CUDA = _graphicCard.CUDA;
	this->frequency = new uint16_t(*_graphicCard.frequency);
	this->powerConsumption = new uint16_t(*_graphicCard.powerConsumption);
	this->transistors = new uint16_t(*_graphicCard.transistors);
}

string GraphicCard::getMake() const
{
	return this->make;
}

string GraphicCard::getModel() const
{
	return this->model;
}

string GraphicCard::getCUDA() const
{
	return this->CUDA;
}

uint16_t GraphicCard::getFrequency() const
{
	return *this->frequency;
}

uint16_t GraphicCard::getPowerConsumption() const
{
	return *this->powerConsumption;
}

uint16_t GraphicCard::getTransistors() const
{
	return *this->transistors;
}

void GraphicCard::pruitnDataGraphicCard() const
{
	cout
		<< "Graphic Card make: " << this->make << endl
		<< "Graphic Card model: " << this->model << endl
		<< "Graphic Card CUDA: " << this->CUDA << endl
		<< "Graphic Card frequency: " << *this->frequency << endl
		<< "Graphic Card power consumption: " << *this->powerConsumption << endl
		<< "Graphic Card transistors: " << *this->transistors << endl;
}