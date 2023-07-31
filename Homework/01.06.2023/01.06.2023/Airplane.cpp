#include "Airplane.h"

Airplane::Airplane(string& _make, string& _model, string& _name, uint16_t& _volume, uint16_t& _lengthWithRamp, uint16_t& _floorLength,
	uint16_t& _floorWidth, uint16_t& _floorArea, uint16_t _heightBehindTheCenterSection, uint16_t& _heightUnderCenterSection, uint16_t& _passengerСapacity, uint16_t& _countPassengers)
{
	this->make = _make;
	this->model = _model;
	this->name = _name;
	*this->volume = _volume;
	*this->lengthWithRamp = _lengthWithRamp;
	*this->floorLength = _floorLength;
	*this->floorWidth = _floorWidth;
	*this->floorArea = _floorArea;
	*this->heightBehindTheCenterSection = _heightBehindTheCenterSection;
	*this->heightUnderCenterSection = -_heightUnderCenterSection;
	*this->passengerСapacity = _passengerСapacity;
	*this->countPassengers = _countPassengers;
}

string Airplane::getMake() const
{
	return this->make;
}

string Airplane::getModel() const
{
	return this->model;
}

uint16_t Airplane::getVolume() const
{
	return *this->volume;
}

uint16_t Airplane::getLengthWithRamp() const
{
	return *this->lengthWithRamp;
}

uint16_t Airplane::getFloorLength() const
{
	return *this->floorLength;
}

uint16_t Airplane::getFloorWidth() const
{
	return *this->floorWidth;
}

uint16_t Airplane::getFloorArea() const
{
	return *this->floorArea;
}

uint16_t Airplane::getHeightBehindTheCenterSection() const
{
	return *this->heightBehindTheCenterSection;
}

uint16_t Airplane::getHeightUnderCenterSection() const
{
	return *this->heightUnderCenterSection;
}

uint16_t Airplane::getPassengerСapacity() const
{
	return *this->passengerСapacity;
}

bool Airplane::operator==(const Airplane _airplane)
{
	return this->make == _airplane.make &&
		this->model == _airplane.model &&
		this->name == _airplane.name &&
		*this->volume == *_airplane.volume &&
		*this->lengthWithRamp == *_airplane.lengthWithRamp &&
		*this->floorLength == *_airplane.floorLength &&
		*this->floorWidth == *_airplane.floorWidth &&
		*this->floorArea == *_airplane.floorArea &&
		*this->heightBehindTheCenterSection == *_airplane.heightBehindTheCenterSection &&
		*this->heightUnderCenterSection == *_airplane.heightUnderCenterSection &&
		*this->passengerСapacity == *_airplane.passengerСapacity;
}

bool Airplane::operator!=(const Airplane _airplane)
{
	return this->make != _airplane.make &&
		this->model != _airplane.model &&
		this->name != _airplane.name &&
		*this->volume != *_airplane.volume &&
		*this->lengthWithRamp != *_airplane.lengthWithRamp &&
		*this->floorLength != *_airplane.floorLength &&
		*this->floorWidth != *_airplane.floorWidth &&
		*this->floorArea != *_airplane.floorArea &&
		*this->heightBehindTheCenterSection != *_airplane.heightBehindTheCenterSection &&
		*this->heightUnderCenterSection != *_airplane.heightUnderCenterSection &&
		*this->passengerСapacity != *_airplane.passengerСapacity;
}

Airplane& Airplane::operator++()
{
	if (*this->countPassengers <= *this->passengerСapacity)
	{
		++*this->countPassengers;
	}
	else
	{
		cout << "Airplane is full!";
	}

	return *this;
}

Airplane& Airplane::operator--()
{
	if (*this->countPassengers >= 1)
	{
		--*this->countPassengers;
	}
	else
	{
		cout << "No passengers!";
	}

	return *this;
}

bool Airplane::operator>(const Airplane _airplane)
{
	return *this->passengerСapacity > *_airplane.passengerСapacity;
}

bool Airplane::operator>=(const Airplane _airplane)
{
	return *this->passengerСapacity >= *_airplane.passengerСapacity;
}

bool Airplane::operator<(const Airplane _airplane)
{
	return *this->passengerСapacity < *_airplane.passengerСapacity;
}

bool Airplane::operator<=(const Airplane _airplane)
{
	return *this->passengerСapacity <= *_airplane.passengerСapacity;
}