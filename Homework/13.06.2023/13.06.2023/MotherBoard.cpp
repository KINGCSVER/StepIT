#include "MotherBoard.h"

MotherBoard::MotherBoard(string& _make, string& _model, RAM& _RAM, CPU& _CPU, GraphicCard& _graphicCard)
{
	this->make = _make;
	this->model = _model;
	this->ram = new RAM(_RAM);
	this->cpu = new CPU(_CPU);
	this->graphicCarD = new GraphicCard(_graphicCard);
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
	this->graphicCarD->pruitnDataGraphicCard();
}