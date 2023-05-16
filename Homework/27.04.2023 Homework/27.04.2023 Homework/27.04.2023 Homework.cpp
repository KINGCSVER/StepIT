#include <iostream>
using namespace std;

#pragma region Task1
struct student
{
	char* surname = new char[21] {};
	char* group = new char[21] {};
	int performance[5]{};

	void printInfo()
	{
		cout
			<< "Surname: " << surname << endl
			<< "Group: " << group << endl;

		for (int i = 0; i < 5; i++)
		{
			cout << "Grade " << i + 1 << ":" << performance[i] << endl;
		}
	}
};

struct Students
{
	char* faculty = new char[21] {};
	uint16_t capacity{};
	uint16_t count{};
	student* students{};

	void createStudent()
	{
		student* createStud = new student{};

		getchar();

		cout << "Enter surname: "; cin.getline(createStud->surname, 20);
		cout << "Enter group: "; cin.getline(createStud->group, 20);

		for (int i = 0; i < 5; i++)
		{
			cout << "Enter grade " << i + 1 << ":"; cin >> createStud->performance[i];
		}

		students[count] = *createStud;
		count++;
	}

	void editCapacity()
	{
		cout << "Enter new capacity: "; cin >> capacity;

		student* stud = new student[capacity]{};

		for (int i = 0; i < count; i++)
		{
			student* stud1 = new student{};

			stud1->surname = students[i].surname;
			stud1->group = students[i].group;

			for (int j = 0; j < 5; j++)
			{
				stud1->performance[j] = students[i].performance[j];
			}

			stud[i] = *stud1;
			delete stud1;
		}

		delete students;

		students = new student[capacity]{};

		for (int i = 0; i < count; i++)
		{
			student* stud2 = new student{};

			stud2->surname = stud[i].surname;
			stud2->group = stud[i].group;

			for (int j = 0; j < 5; j++)
			{
				stud2->performance[j] = stud[i].performance[j];
			}

			students[i] = *stud2;
			delete stud2;
		}
		delete stud;
	}

	void print()
	{
		for (int i = 0; i < count; i++)
		{
			students[i].printInfo();
		}
	}
};

void createStudents(Students*& name)
{
	name = new Students{};

	cout << "Enter faculty: "; cin.getline(name->faculty, 20);
	cout << "Enter capacity: "; cin >> name->capacity;

	name->students = new student[name->capacity]{};
}

int main()
{
	Students* classroom{};
	createStudents(classroom);

	while (true)
	{
		int choice{};

		cout
			<< "1. Add" << endl
			<< "2. Print Info" << endl
			<< "3. Edit capacity" << endl;

		cin >> choice;

		switch (choice)
		{
		case 1:
			system("cls");
			classroom->createStudent();
			break;
		case 2:
			system("cls");
			classroom->print();
			break;
		case 3:
			system("cls");
			classroom->editCapacity();
			break;
		default:
			break;
		}
	}

	return 0;
}
#pragma endregion
