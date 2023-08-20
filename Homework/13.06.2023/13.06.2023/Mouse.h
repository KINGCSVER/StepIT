#include <iostream>
#include <string>

using namespace std;

class Mouse
{
private:
	string make{};
	string model{};
	string sensorType{};
	string connectionType{};
	uint16_t* frequency = new uint16_t{};
	uint16_t* numberOfButtons = new uint16_t{};
	uint16_t* responseTime = new uint16_t{};
	uint16_t* DPI = new uint16_t{};
	uint16_t* weight = new uint16_t{};
public:
	Mouse(string& _make, string& _model, string& _sensortype, string& _connectionType, uint16_t& _frequency, uint16_t& _numberOfButtons,
		uint16_t& _responseTime, uint16_t& _DPI, uint16_t& _weight);

	Mouse(const Mouse& _mouse);

	string getMake() const;
	string getModel() const;
	string getSensorType() const;
	string getConnectiontype() const;

	uint16_t getFrequency() const;
	uint16_t getNumberOfButtons() const;
	uint16_t getResponseTime() const;
	uint16_t getDPI() const;
	uint16_t getWeight() const;

	void printDataMouse() const;
};