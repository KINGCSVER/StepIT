#include <iostream>

using namespace std;

struct DateOfBirth
{
private:
	uint16_t* day{};
	uint16_t* month{};
	uint16_t* year{};
public:
	DateOfBirth(uint16_t _day, uint16_t _month, uint16_t _year)
	{
		this->day = new uint16_t(_day);
		this->month = new uint16_t(_month);
		this->year = new uint16_t(_year);
	}

	uint16_t getDay()
	{
		return *this->day;
	}

	uint16_t getMonth()
	{
		return *this->month;
	}

	uint16_t getYear()
	{
		return *this->year;
	}
};

class StudentData
{
public:
	string name{};
	string surname{};
	string patronomic{};
	string gender{};
	string adress{};
	string University{};
	string Faculty{};
	uint16_t* grades = new uint16_t[5]{};

	StudentData(string& _name, string& _surname, string& _patronomic, string& _gender, string& _adress, string& _University, string& _Faculty, uint16_t _grades[5],
		DateOfBirth& _dateOfBirth);

	uint16_t getDateOfBirth();
protected:
	DateOfBirth* _dateOfBirth;
};