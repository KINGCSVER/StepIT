#include <iostream>
#include <string>

using namespace std;

class Keyboard
{
private:
	string make{};
	string model{};
	string type{};
	string connectionType{};
	string spillResistance{};
	string compatibleWithOC{};
	uint16_t* pollingFrequency = new uint16_t{};
public:
	Keyboard(string& _make, string& _model, string& _type, string& _connectionType, string& _spillResistance, string& _compatibleWithOC,
		uint16_t& _pollingFrequency);

	Keyboard(const Keyboard& _keyboard);

	string getMake() const;
	string getModel() const;
	string getType() const;
	string getConnectionType() const;
	string getSpillResistance() const;
	string getCompatibleWithOC() const;

	uint16_t getPollingFrequency() const;

	void printDataKeyboard() const;
};