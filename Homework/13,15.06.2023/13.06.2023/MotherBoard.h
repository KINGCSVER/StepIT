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
	GraphicCard* graphicCard{};

	MotherBoard(string& _make, string& _model, RAM& _RAM, CPU& _CPU, GraphicCard& _graphicCard);

	MotherBoard(const MotherBoard& _motherBoard);

	string getMake() const;
	string getModel() const;

	void printDataMotherBoard() const;
};