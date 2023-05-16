#include <iostream>
using namespace std;

struct boiler
{
	char* make = new char[21] {};
	char* color = new char[21] {};
	int	power{};
	int volume{};
	int heatingTemperature{};

	void printInfo() 
	{
		cout
			<< endl << "Boiler make: " << make << endl
			<< "Boiler color: " << color << endl
			<< "Boiler power: " << power << endl
			<< "Boiler volume: " << volume << endl
			<< "Boiler Heating Temperature: " << heatingTemperature << endl << endl;
	}
};

struct Boilers
{
	uint16_t capacity{};
	uint16_t count{};
	char* name = new char[21] {};
	boiler* boilers = new boiler[10]{};

	void createBoiler() 
	{
		if (count < capacity)
		{

			boiler* Boiler = new boiler{};

			cin.ignore();

			cout << "Enter boiler make: ";
			cin.getline(Boiler->make, 20);

			cout << "Enter boiler color: ";
			cin.getline(Boiler->color, 20);

			cout << "Enter boiler power: ";
			cin >> Boiler->power;

			cout << "Enter boiler volume: ";
			cin >> Boiler->volume;

			cout << "Enter boiler Heating Temperature: ";
			cin >> Boiler->heatingTemperature;

			boilers[count] = *Boiler;
			count++;

		}
		else {
			cout << "Boilers is full" << endl;
		}
	}

	void printInfo()
	{
		cout
			<< "There are " << count << " boiler in " << name << endl;
	}

	void ShowAll() {
		for (int i = 0; i < count; i++) 
		{
			cout << "Boiler #" << i + 1 << '\t';
			boilers[i].printInfo();
		}
	}
};

void createBoilers(Boilers*& boil)
{
	boil = new Boilers{};

	cout << "Enter name: "; cin.getline(boil->name, 20);
	cout << "Enter capacity: "; cin >> boil->capacity;

	boil->boilers = new boiler[boil->capacity];
}

int main()
{
	Boilers* boilers{};

	createBoilers(boilers);

	while (true) 
	{
		int choice{};
		cout
			<< "Enter choice: " << endl
			<< "1. Add boiler" << endl
			<< "2. Show all boilers" << endl;

		cin >> choice;

		switch (choice) {
		case 1:
			system("cls");
			boilers->createBoiler();
			break;
		case 2:
			system("cls");
			boilers->ShowAll();
			break;
		default:
			break;
		}
	}
	return 0;
}