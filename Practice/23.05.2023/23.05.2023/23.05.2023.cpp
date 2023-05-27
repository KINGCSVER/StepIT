#include <iostream>
#include <string>
#include <chrono>

using namespace std;

struct Birthday
{
protected:
	uint16_t day;
	uint16_t month;
	uint16_t year;
	string birthdayDate;
public:
	Birthday() = default;

	Birthday(uint16_t day, uint16_t month, uint16_t year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	};
};

class Student : public Birthday
{
private:
	string nameOfInstitution;
	string cityOfInstitution;
	string countryOfInstitution;
public:
	string name;
	string surname;
	string patronymic;
	string phoneNumber;
	string groupNumber;
	string city;
	string country;

	Student() = default;

	Student(uint16_t day, uint16_t month, uint16_t year, string nameOfInstitution, string cityOfInstitution, string countryOfInstitution, string name,
		    string surname, string patronymic, string phoneNumber, string groupNumber, string city, string country) : Birthday(day, month, year)
	{
		this->name = name;
		this->surname = surname;
		this->patronymic = patronymic;
		this->phoneNumber = phoneNumber;
		this->groupNumber = groupNumber;
		this->city = city;
		this->country = country;
		this->nameOfInstitution = nameOfInstitution;
		this->cityOfInstitution = cityOfInstitution;
		this->countryOfInstitution = countryOfInstitution;
	}

	string getName() const
	{
		return name;
	}

	string getSurname() const
	{
		return surname;
	}

	string getPatronymic() const
	{
		return patronymic;
	}

	string getBirthdayDate() const 
	{
		string birthdayDate = to_string(day) + "/" + to_string(month) + "/" + to_string(year);

		return birthdayDate;
	}

	string getPhoneNumber() const
	{
		return phoneNumber;
	}

	string getCity() const
	{
		return city;
	}

	string getCountry() const
	{
		return country;
	}

	string getNameOfInstit() const
	{
		return nameOfInstitution;
	}

	string getCityOfInstit() const
	{
		return cityOfInstitution;
	}

	string getCountryOfInstit() const
	{
		return countryOfInstitution;
	}

	string getGroupNumber() const
	{
		return groupNumber;
	}

	void addInstitution()
	{
		cout << "Enter name of institution: "; cin >> this->nameOfInstitution;
		cout << "Enter the country where the institution is located: "; cin >> this->countryOfInstitution;
		cout << "Enter the city where the institution is located: "; cin >> this->cityOfInstitution;
	}

	void addStudent()
	{
		cout << "Enter student name: "; cin >> this->name;
		cout << "Enter student surname: "; cin >> this->surname;
		cout << "Enter student patronymic: "; cin >> this->patronymic;
		cout << "Enter student day of birthday: "; cin >> this->day;
		cout << "Enter student month of birthday: "; cin >> this->month;
		cout << "Enter student year of birthday: "; cin >> this->year;
		cout << "Enter phone number of student: "; cin >> this->phoneNumber;
		cout << "Enter country where student lives: "; cin >> this->country;
		cout << "Enter city where student lives: "; cin >> this->city;
		cout << "Enter group number of student: "; cin >> this->groupNumber;
	}

	void print() const
	{
		cout << "Name of student: " << this->name << endl
			 << "Surname of student: " << this->surname << endl
			 << "Patronymic of student: " << this->patronymic << endl
			 << "Birthday of student: " << this->day << '.' << this->month << '.' << this->year << endl
			 << "Phone number of student: " << this->phoneNumber << endl
			 << "Country where student lives: " << this->country << endl
			 << "City where student lives: " << this->city << endl
			 << "Name of institution: " << this->nameOfInstitution << endl
			 << "The country where the institution is located: " << this->countryOfInstitution << endl
			 << "The city where the institution is located: " << this->cityOfInstitution << endl
			 << "Group number of student: " << this->groupNumber << endl;
	}
};

int main()
{
	/*Student student;

	student.addInstitution();

	student.addStudent();

	system("cls");

	student.print();*/

	return 0;
}