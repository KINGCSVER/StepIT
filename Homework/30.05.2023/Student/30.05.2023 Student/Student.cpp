#include "Student.h"

Student::Student(string& _name, string& _surname, string& _patronomic, uint16_t& _day, uint16_t& _month,
	uint16_t& _year, string& _placeOfResidence, int& _contactNumber, uint16_t& grade1, uint16_t& grade2,
	uint16_t& grade3, uint16_t& grade4, uint16_t& grade5)
{
	this->name = _name;
	this->surname = _surname;
	this->patronomic = _patronomic;
	this->birthDay = new Birthday(_day, _month, _year);
	this->placeOfRsidence = _placeOfResidence;
	*this->contactNumber = _contactNumber;
	this->grades[0] = grade1;
	this->grades[1] = grade2;
	this->grades[2] = grade3;
	this->grades[3] = grade4;
	this->grades[4] = grade5;
}

string Student::getName() const
{
	return this->name;
}

string Student::getSurname() const
{
	return this->surname;
}

string Student::getPatronomic() const
{
	return this->patronomic;
}


void Student::setName(string& _Name)
{
	this->name = _Name;
}

void Student::setSurname(string& _Surname)
{
	this->surname = _Surname;
}

void Student::setPatronomic(string& _Patronomic)
{
	this->patronomic = _Patronomic;
}

bool Student::operator==(const Student& _Student) const
{
	return (this->name == _Student.name &&
		this->surname == _Student.surname &&
		this->patronomic == _Student.patronomic &&
		this->birthDay->getDay() == _Student.birthDay->getDay() &&
		this->birthDay->getMonth() == _Student.birthDay->getMonth() &&
		this->birthDay->getYear() == _Student.birthDay->getYear() &&
		this->placeOfRsidence == _Student.placeOfRsidence &&
		*this->contactNumber == *_Student.contactNumber);
}

bool Student::operator!=(const Student& _Student) const
{
	return this->name != _Student.name &&
		this->surname != _Student.surname &&
		this->patronomic != _Student.patronomic &&
		this->birthDay->getDay() != _Student.birthDay->getDay() &&
		this->birthDay->getMonth() != _Student.birthDay->getMonth() &&
		this->birthDay->getYear() != _Student.birthDay->getYear() &&
		this->placeOfRsidence != _Student.placeOfRsidence &&
		*this->contactNumber != *_Student.contactNumber;
}

bool Student::operator>(const Student& _Student) const
{
	int average[2]{};

	for (size_t i = 0; i < 5; i++)
	{
		average[0] += this->grades[i];
	}

	for (size_t i = 0; i < 5; i++)
	{
		average[1] += _Student.grades[i];
	}

	return (average[0] / 5) > (average[1] / 5);
}

bool Student::operator>=(const Student& _Student) const
{
	int average[2]{};

	for (size_t i = 0; i < 5; i++)
	{
		average[0] += this->grades[i];
	}

	for (size_t i = 0; i < 5; i++)
	{
		average[1] += _Student.grades[i];
	}

	return (average[0] / 5) >= (average[1] / 5);
}

bool Student::operator<(const Student& _Student) const
{
	int average[2]{};

	for (size_t i = 0; i < 5; i++)
	{
		average[0] += this->grades[i];
	}

	for (size_t i = 0; i < 5; i++)
	{
		average[1] += _Student.grades[i];
	}

	return (average[0] / 5) < (average[1] / 5);
}

bool Student::operator<=(const Student& _Student) const
{
	int average[2]{};

	for (size_t i = 0; i < 5; i++)
	{
		average[0] += this->grades[i];
	}

	for (size_t i = 0; i < 5; i++)
	{
		average[1] += _Student.grades[i];
	}

	return (average[0] / 5) <= (average[1] / 5);
}