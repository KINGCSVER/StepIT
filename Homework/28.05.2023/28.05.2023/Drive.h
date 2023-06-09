#pragma once
#include <iostream>
#include "Components.h"

using namespace std;

class Drive : public Components
{
private:
	string type;
	string capacity;
public:
	Drive() = default;

	Drive(string make, string model, string serialNumber, string type, string capacity) : Components(make, model, serialNumber) {};

	string getDriveMake() const;
	string getDriveModel() const;
	string getDriveSerialNumber() const;
	string getDriveType() const;
	string getDriveCapacity() const;

	void setDriveMake();
	void setDriveModel();
	void setDriveSerialNumber();
	void setDriveType();
	void setDriveCapacity();

	void printDriveInfo() const;
};