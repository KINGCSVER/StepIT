#pragma once
#include "Car.h"

class Sedan : public Car
{
public:

	Sedan(string& _mark, string& _model, uint16_t& _maxSpeed, uint16_t& _numberOfSeats)
		: Car(_mark, _model, _maxSpeed, _numberOfSeats) {};

	void drive() const override
	{
		cout << "Sedan starts!" << endl;

		int choice{};

		cout
			<< "Where are we going?" << endl
			<< "1. Let's go home" << endl
			<< "2. Let's go to the nearest market" << endl
			<< "3. Let's go to the nearest hospital" << endl
			<< "4. Let's go to the nearest school" << endl
			<< "5. Enter adress: " << endl;

		if (choice == 5)
		{
			string adress{};

			cout << "Enter adress: "; cin >> adress;
		}

		cout << "Route completed, please buckle up!" << endl;
	}

	void park() const override
	{
		cout
			<< "Search for a parking place" << endl
			<< "Parking spot found" << endl
			<< "The car is parked" << endl
			<< "Parking complate!" << endl;
	}

	void doWork() const override
	{
		string job{};

		cout << "Enter job: "; cin >> job;

		cout << "Job: " << job << ' ' << "in progress." << endl;
		cout << "Job complated!" << endl;
	}
};