#include "MotherBoard.h"
#include "HardDisk.h"
#include "PowerUnit.h"
#include "Cooler.h"

class SystemUnit
{
private:
	string make;
	string model;
public:
	MotherBoard* motherBoardd{};
	PowerUnit* powerUnitt{};
	HardDisk* hardDiskk{};
	Cooler* cooler{};

	SystemUnit(string& _make, string& _model, MotherBoard& _motherBoard,
		PowerUnit& _powerUnit, HardDisk& _storageDevice, Cooler& _cooler);

	string getMake() const;
	string getModel() const;

	void printDataSystemUnit() const;
};