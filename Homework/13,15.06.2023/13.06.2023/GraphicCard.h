#include <string>
#include <iostream>

using namespace std;

class GraphicCard
{
private:
	string make{};
	string model{};
	string CUDA{};
	uint16_t* frequency = new uint16_t{};
	uint16_t* powerConsumption = new uint16_t{};
	uint16_t* transistors = new uint16_t{};
public:
	GraphicCard(string& _make, string& _model, string& _CUDA,
		uint16_t& _frequency, uint16_t& _powerConsumption, uint16_t& _transistors);

	GraphicCard(const GraphicCard& _graphicCard);

	string getMake() const;
	string getModel() const;
	string getCUDA() const;
	uint16_t getFrequency() const;
	uint16_t getPowerConsumption() const;
	uint16_t getTransistors() const;

	void pruitnDataGraphicCard() const;
};