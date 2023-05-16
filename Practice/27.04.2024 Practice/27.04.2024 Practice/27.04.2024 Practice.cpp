#include <iostream>
using namespace std;

uint16_t count1{};

struct student
{
	char* name = new char[21];
	char* surname = new char[21];
	char* patronymic = new char[21];
	int grades[10]{};

	void printInfo()
	{
		cout
			<< endl << "Student name: " << name << endl
			<< "Student surname: " << surname << endl
			<< "Student patronomic: " << patronymic << endl;

		for (int i = 0; i < 10; i++)
		{
			cout << "Grades " << i + 1 << ":" << grades[i] << endl;
		}
	}

	void average()
	{
		int a{};

		for (int i = 0; i < 10; i++)
		{
			a += grades[i];
		}
		cout << "Average rating this student: " << a / 10;
	}
};

struct students
{
	char* name = new char[21];
	uint16_t capacity{ 20 };
	student* students{};

	void createStudent()
	{
		if (count1 < capacity)
		{
			student* s = new student{};

			cin.ignore();
			cout << "Enter student name: "; cin.getline(s->name, 20);
			cout << "Enter student surname: "; cin.getline(s->surname, 20);
			cout << "Enter student surname: "; cin.getline(s->patronymic, 20);

			students[count1] = *s;
			count1++;
		}
		else
			cout << "Class full";
	}

	void addGrades()
	{
		for (int i = 0; i < 10; i++)
		{
			cout << "Enter grades " << i + 1 << ":"; cin >> students->grades[i];
		}
	}

	void printStudents()
	{
		for (int i = 0; i < count1; i++)
		{
			cout << i + 1 << students[i].name << endl;
		}
	}

	void printInfoStudents()
	{
		for (int i = 0; i < count1; i++)
		{
			students[i].printInfo();
		}
	}
};

void createStudents(students*& s)
{
	s = new students{};

	cout << "Enter name: "; cin.getline(s->name, 20);

	s->students = new student[s->capacity];
}

int main()
{
	students* students{};
	createStudents(students);

	while (true)
	{
		int choice{};
		cout
			<< "1. Add student" << endl
			<< "2. Rate" << endl
			<< "3. Displaying a list of students" << endl
			<< "4. Printing student grades" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			students->createStudent();
			break;
		case 2:
			system("cls");
			students->printStudents();
			cin >> choice;
			students[choice].addGrades();
			break;
		case 3:
			system("cls");
			students->printStudents();
			break;
		case 4:
			system("cls");
			students->printStudents();
			cin >> choice;
			students[choice].printInfoStudents();
			break;
		}
	}
}