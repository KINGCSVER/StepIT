#include "Monitor.h"

Monitor::Monitor(string& _make, string& _model, string& _screenCover, string& _brightness, string& _contrast,
	uint16_t& _maximumResolution, uint16_t& _pixelResponseTime, uint16_t& _pixelSize,
	uint16_t& _pixelDensity, uint16_t& _maximumScreenRefreshRate)
{
	this->make = _make;
	this->model = _model;
	this->screenCover = _screenCover;
	this->brightness = _brightness;
	this->contrast = _contrast;
	*this->maximumResolution = _maximumResolution;
	*this->pixelResponseTime = _pixelResponseTime;
	*this->pixelSize = _pixelSize;
	*this->pixelDensity = _pixelDensity;
	*this->maximumScreenRefreshRate = _maximumScreenRefreshRate;
}

string Monitor::getMake() const
{
	return this->make;
}

string Monitor::getModel() const
{
	return this->model;
}

string Monitor::getScreenCover() const
{
	return this->screenCover;
}

string Monitor::getBrightness() const
{
	return this->brightness;
}

string Monitor::getContrast() const
{
	return this->contrast;
}

uint16_t Monitor::getMaximumResolution() const
{
	return *this->maximumResolution;
}

uint16_t Monitor::getPixelResponseTime() const
{
	return *this->pixelResponseTime;
}

uint16_t Monitor::getPixelSize() const
{
	return *this->pixelSize;
}

uint16_t Monitor::getPixelDensity() const
{
	return *this->pixelDensity;
}

uint16_t Monitor::getMaximumScreenRefreshRate() const
{
	return *this->maximumScreenRefreshRate;
}

void Monitor::printDataMonitor() const
{
	cout
		<< "Monitor make: " << this->make << endl
		<< "Monitor model: " << this->model << endl
		<< "Monitor screen cover: " << this->screenCover << endl
		<< "Monitor brightness: " << this->brightness << endl
		<< "Monitor contrast: " << this->contrast << endl
		<< "Monitor maximum resolution: " << *this->maximumResolution << endl
		<< "Monitor pixel response time: " << *this->pixelResponseTime << endl
		<< "Monitor pixel size: " << *this->pixelSize << endl
		<< "Monitor pixel density: " << *this->pixelDensity << endl
		<< "Monitor maximum screen refresh rate: " << *this->maximumScreenRefreshRate << endl;
}