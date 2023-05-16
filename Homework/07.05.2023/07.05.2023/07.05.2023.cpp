#include <iostream>
using namespace std;

struct Student
{
	char* name = new char[31] {};
	char* surname = new char[31] {};
	int age{};
	int faculty{};
	int average{};
	int course{};
};

struct Academy
{
	char* name = new char[31] {};
	int count[4]{};
	Student* dataScience = new Student[30]{};
	Student* cyberSecurity = new Student[30]{};
	Student* programmer = new Student[30]{};
	Student* computerScience = new Student[30]{};

	void addStudent()
	{
		Student* student = new Student{};

		cin.ignore();

		cout << "Enter name: "; cin.getline(student->name, 30);
		cout << "Enter surname: "; cin.getline(student->surname, 30);
		cout << "Enter age: "; cin >> student->age;
		cout << "Enter average: "; cin >> student->average;
		cout << "Enter course: "; cin >> student->course;

		cout
			<< "Enter faculty" << endl
			<< "1. Data Science" << endl
			<< "2. Cyber Security" << endl
			<< "3. Programmer" << endl
			<< "4. Computer Science" << endl;

		cin >> student->faculty;

		switch (student->faculty)
		{
		case 1:
			dataScience[count[0]] = *student;
			count[0]++;
			break;
		case 2:
			cyberSecurity[count[1]] = *student;
			count[1]++;
			break;
		case 3:
			programmer[count[2]] = *student;
			count[2]++;
			break;
		case 4:
			computerScience[count[3]] = *student;
			count[3]++;
		default:
			break;
		}
	}

	int printStud()
	{
		int choice{};

		cout
			<< "1. Data Science" << endl
			<< "2. Cyber Security" << endl
			<< "3. Programmer" << endl
			<< "4. Computer Science" << endl;

		cin >> choice;

		switch (choice)
		{
		case 1:
			for (int i = 0; i < count[0]; i++)
			{
				cout << i + 1 << ' ' << dataScience[i].name << endl;
			}
			break;
		case 2:
			for (int i = 0; i < count[1]; i++)
			{
				cout << count + 1 << ' ' << cyberSecurity[i].name << endl;
			}
			break;
		case 3:
			for (int i = 0; i < count[2]; i++)
			{
				cout << i + 1 << ' ' << programmer[i].name << endl;
			}
			break;
		case 4:
			for (int i = 0; i < count[3]; i++)
			{
				cout << i + 1 << ' ' << computerScience[i].name << endl;
			}
			break;
		default:
			break;
		}

		return choice;
	}

	void deleteStudent(int facult)
	{
		int choice{};

		cout << "Choose student to delete:" << endl; cin >> choice;

		cin.ignore();

		switch (facult)
		{
		case 1:
			for (int i = choice - 1; i < count[0] - 1; ++i)
			{
				dataScience[i].name = dataScience[i + 1].name;
				dataScience[i].surname = dataScience[i + 1].surname;
				dataScience[i].faculty = dataScience[i + 1].faculty;
				dataScience[i].age = dataScience[i + 1].age;
				dataScience[i].average = dataScience[i + 1].average;
				dataScience[i].course = dataScience[i + 1].course;
			}

			count[0]--;
			break;
		default:
			break;
		}

	}
};

void createAcademy(Academy*& a)
{
	cout << "Enter name: "; cin.getline(a->name, 30);
}

int main()
{
	Academy* AZMIU = new Academy{};
	createAcademy(AZMIU);

	while (true)
	{
		int choice{};

		cout
			<< "1. Add Student" << endl
			<< "2. Delete Student" << endl
			<< "3. Show Faculty student" << endl;
		cin >> choice;


		switch (choice)
		{
		case 1:
			system("cls");
			AZMIU->addStudent();
			break;
		case 2:
			system("cls");
			AZMIU->deleteStudent(AZMIU->printStud());
			break;
		case 3:
			system("cls");
			AZMIU->printStud();
			break;
		default:
			break;
		}
	}

	return 0;
}