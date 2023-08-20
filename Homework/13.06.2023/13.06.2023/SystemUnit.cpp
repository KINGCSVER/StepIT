#include "SystemUnit.h"

SystemUnit::SystemUnit(string& _make, string& _model, MotherBoard& _motherBoard,
	PowerUnit& _powerUnit, HardDisk& _storageDevice, Cooler& _cooler)
{
	this->make = _make;
	this->model = _model;
	this->motherBoardd = new MotherBoard(_motherBoard);
	this->powerUnitt = new PowerUnit(_powerUnit);
	this->hardDiskk = new HardDisk(_storageDevice);
	this->cooler = new Cooler(_cooler);
}

SystemUnit::SystemUnit(const SystemUnit& _systemUnit)
{
	this->make = _systemUnit.make;
	this->model = _systemUnit.model;
	this->motherBoardd = new MotherBoard(*_systemUnit.motherBoardd);
	this->powerUnitt = new PowerUnit(*_systemUnit.powerUnitt);
	this->hardDiskk = new HardDisk(*_systemUnit.hardDiskk);
	this->cooler = new Cooler(*_systemUnit.cooler);
}

string SystemUnit::getMake() const
{
	return this->make;
}

string SystemUnit::getModel() const
{
	return this->model;
}

void SystemUnit::printDataSystemUnit() const
{
	cout
		<< "System unit make: " << this->make << endl
		<< "System unit model: " << this->model << endl;

	this->motherBoardd->printDataMotherBoard();
	this->powerUnitt->printDataPowerUnit();
	this->hardDiskk->printDataHardDisk();
	this->cooler->printDataCooler();
}