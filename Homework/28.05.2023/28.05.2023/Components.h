#pragma once
#include <iostream>

using namespace std;

class Components
{
protected:
	string make;
	string model;
	string serialNumber;
public:
	Components() = default;

	Components(string make, string model, string serialNumber);
};