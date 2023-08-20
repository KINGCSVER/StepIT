#include <string>
#include <iostream>

using namespace std;

class Cooler
{
private:
	string make{};
	string model{};
	string purpose{};
	string socket{};
	string connectorType{};
	string material{};
	uint16_t* numberOfHeatPipes = new uint16_t{};
	uint16_t* numberOfFans = new uint16_t{};
	uint16_t* rotationalSpeed = new uint16_t{};
	uint16_t* noiseLevel = new uint16_t{};
	uint16_t* weight = new uint16_t{};
public:
	Cooler(string& _make, string& _model, string& _purpose, string& _socket, string& _connectorType, string& _material,
		uint16_t& _numberOfHeatPipes, uint16_t& _numberOfFans, uint16_t& _rotationalSpeed, uint16_t& _noiseLevel, uint16_t& _weight);

	string getMake() const;
	string getModel() const;
	string getPurpose() const;
	string getSocket() const;
	string getConnectorType() const;
	string getMaterial() const;
	uint16_t getNumberOfHeatPipes() const;
	uint16_t getNumberOfFans() const;
	uint16_t getRotationalSpeed() const;
	uint16_t getNoiseLevel() const;
	uint16_t getWeight() const;

	void printDataCooler() const;
};