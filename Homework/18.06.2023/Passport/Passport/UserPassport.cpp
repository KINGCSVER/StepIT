#include "UserPassport.h"

UserPassport::UserPassport(string& _name, string& _surname, string& _gender, dateOfBirth& _DateOfBirth, dateOfIssue& _DateOfIssue, dateOfExpiry& _DateOfExpiry,
	uint16_t& _passportNO, string& _placeOfBirth, string& _authority)
{
	this->name = _name;
	this->surname = _surname;
	this->gender = _gender;
	this->DateOfBirth = new dateOfBirth(_DateOfBirth);
	this->DateOfIssue = new dateOfIssue(_DateOfIssue);
	this->DateOfExpiry = new dateOfExpiry(_DateOfExpiry);
	this->passportNO = new uint16_t(_passportNO);
	this->placeOfBirth = _placeOfBirth;
	this->authority = _authority;
}

dateOfBirth UserPassport::getDateOfBirth() const
{
	return *this->DateOfBirth;
}

dateOfIssue UserPassport::getDateOfIssue() const
{
	return *this->DateOfIssue;
}

dateOfExpiry UserPassport::getDateOfExpiry() const
{
	return *this->DateOfExpiry;
}

uint16_t UserPassport::getPassportNO() const
{
	return *this->passportNO;
}

string UserPassport::getPlaceOfBirth() const
{
	return this->placeOfBirth;
}

string UserPassport::getAuthority() const
{
	return this->authority;
}