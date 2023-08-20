#include "StudentData.h"

class Aspirant : protected StudentData
{
public:
	string Specialization{};
	string Courses{};
	string publications{};
	string conferences{};
	string awardsAndAchievements{};
	string researchProject{};
	string Laboratory{};

	Aspirant(string& _name, string& _surname, string& _patronomic, string& _gender, string& _adress, string& _University, string& _Faculty, uint16_t _grades[5],
		DateOfBirth& _dateOfBirth, string& _Specialization, string& _Courses, string& _publications, string& _conferences, string& _awardsAndAchievements,
		string& _researchProject, string& _Laboratory, uint16_t& numberAspirant) :
		Student(_name, _surname, _patronomic, _gender, _adress, _University, _Faculty, &_grades[5], _dateOfBirth);
	

	uint16_t getNumberAspirant();

private:
	uint16_t* numberAspirant{};
};