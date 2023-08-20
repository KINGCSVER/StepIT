#include "MotherBoard.h"

MotherBoard::MotherBoard(string& _make, string& _model, RAM& _RAM, CPU& _CPU, GraphicCard& _graphicCard)
{
	this->make = _make;
	this->model = _model;
	this->ram = new RAM(_RAM);
	this->cpu = new CPU(_CPU);
	this->graphicCard = new GraphicCard(_graphicCard);
}

MotherBoard::MotherBoard(const MotherBoard& _motherBoard)
{
	this->make = _motherBoard.make;
	this->model = _motherBoard.model;
	this->ram = new RAM(*_motherBoard.ram);
	this->cpu = new CPU(*_motherBoard.cpu);
	this->graphicCard = new GraphicCard(*_motherBoard.graphicCard);
}

string MotherBoard::getMake() const
{
	return this->make;
}

string MotherBoard::getModel() const
{
	return this->model;
}

void MotherBoard::printDataMotherBoard() const
{
	cout
		<< "Mother Board make: " << this->make << endl
		<< "Mother Board mpdel: " << this->model << endl;

	this->ram->printDataRAM();
	this->cpu->printDataCPU();
	this->graphicCard->pruitnDataGraphicCard();
}