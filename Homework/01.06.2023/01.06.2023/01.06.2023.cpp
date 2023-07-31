#include "Circle.h"
#include "Airplane.h"

int main()
{
	string make = "Boeing";
	string model = "737";
	uint16_t volume = 1;
	uint16_t lengthWithRamp = 1;
	uint16_t floorLength = 1;
	uint16_t floorWidth = 1;
	uint16_t floorArea = 1;
	uint16_t heightBehindTheCenterSection = 1;
	uint16_t heightUnderCenterSection = 1;
	uint16_t passengerСapacity = 50;
	string name = "a";
	uint16_t countPassengers = 15;

	Airplane boeing(make, model, name, volume, lengthWithRamp, floorLength, floorWidth, floorArea, heightBehindTheCenterSection, heightUnderCenterSection, passengerСapacity,
		countPassengers);

	return 0;
}