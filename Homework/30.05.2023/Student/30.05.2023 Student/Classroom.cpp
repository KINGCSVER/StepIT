#include "Classroom.h"

Classroom::Classroom(string& _nameClass, uint16_t& _capacity)
{
	this->nameClass = _nameClass;
	*this->capacity = _capacity;
	this->Students = new Student[_capacity]{};
}

uint16_t Classroom::getCapacity() const
{
	return *this->capacity;
}

bool Classroom::operator==(const Classroom _Classroom) const
{
	return this->nameClass == _Classroom.nameClass && *this->capacity == *_Classroom.capacity;
}

bool Classroom::operator!=(const Classroom _Classroom) const
{
	return this->nameClass != _Classroom.nameClass && *this->capacity == *_Classroom.capacity;
}

bool Classroom::operator>(const Classroom _Classroom) const
{
	return  *this->capacity > *_Classroom.capacity;
}

bool Classroom::operator>=(const Classroom _Classroom) const
{
	return  *this->capacity >= *_Classroom.capacity;
}

bool Classroom::operator<(const Classroom _Classroom) const
{
	return  *this->capacity < *_Classroom.capacity;
}

bool Classroom::operator<=(const Classroom _Classroom) const
{
	return  *this->capacity <= *_Classroom.capacity;
}