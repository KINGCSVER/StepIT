#pragma once
#include <iostream>

using namespace std;

class Drive
{
private:
	string make;
	string model;
	string serialNumber;
	string type;
	string capacity;
public:
	Drive() = default;

	Drive(string make, string model, string serialNumber, string type, string capacity);

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