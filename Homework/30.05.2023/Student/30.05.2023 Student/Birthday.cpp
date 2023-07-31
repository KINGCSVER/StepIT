#include "Birthday.h"

Birthday::Birthday(uint16_t& _day, uint16_t& _month, uint16_t& _year)
{
	*this->day = _day;
	*this->month = _month;
	*this->year = _year;
}

uint16_t Birthday::getDay() const
{
	return *this->day;
}

uint16_t Birthday::getMonth() const
{
	return *this->month;
}

uint16_t Birthday::getYear() const
{
	return *this->year;
}