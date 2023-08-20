#include "RAM.h"
#include "CPU.h"
#include "GraphicCard.h"

class MotherBoard
{
private:
	string make;
	string model;
public:
	RAM* ram{};
	CPU* cpu{};
	GraphicCard* graphicCarD{};

	MotherBoard(string& _make, string& _model, RAM& _RAM, CPU& _CPU, GraphicCard& _graphicCard);

	string getMake() const;
	string getModel() const;

	void printDataMotherBoard() const;
};