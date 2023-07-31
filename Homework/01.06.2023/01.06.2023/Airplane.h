#pragma once
#include <iostream>
#include <string>

using namespace std;

class Airplane
{
private:
	string make{};
	string model{};
	uint16_t* volume = new uint16_t{};
	uint16_t* lengthWithRamp = new uint16_t{};
	uint16_t* floorLength = new uint16_t{};
	uint16_t* floorWidth = new uint16_t{};
	uint16_t* floorArea = new uint16_t{};
	uint16_t* heightBehindTheCenterSection = new uint16_t{};
	uint16_t* heightUnderCenterSection = new uint16_t{};
	uint16_t* passengerСapacity = new uint16_t{};

public:
	string name{};
	uint16_t* countPassengers = new uint16_t{};

	Airplane(string& _make, string& _model, string& _name, uint16_t& _volume, uint16_t& _lengthWithRamp, uint16_t& _floorLength,
		uint16_t& _floorWidth, uint16_t& _floorArea, uint16_t _heightBehindTheCenterSection, uint16_t& _heightUnderCenterSection, uint16_t& _passengerСapacity, uint16_t& _countPassengers);

	string getMake() const;
	string getModel() const;
	uint16_t getVolume() const;
	uint16_t getLengthWithRamp() const;
	uint16_t getFloorLength() const;
	uint16_t getFloorWidth() const;
	uint16_t getFloorArea() const;
	uint16_t getHeightBehindTheCenterSection() const;
	uint16_t getHeightUnderCenterSection() const;
	uint16_t getPassengerСapacity() const;

	bool operator==(const Airplane _airplane);
	bool operator!=(const Airplane _airplane);

	Airplane& operator++();
	Airplane& operator--();

	bool operator>(const Airplane _airplane);
	bool operator>=(const Airplane _airplane);
	bool operator<(const Airplane _airplane);
	bool operator<=(const Airplane _airplane);
};

