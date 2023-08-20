#include "BusDepo.h"

int main() {
    dataType::BinaryTree<BusDepo::dataBus> Buses{};

    bool exit{ true };

    while (exit)
    {
        uint16_t choice{};
        cout
            << "Enter your choice: " << endl
            << "1. Add bus" << endl
            << "2. Search bus" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string name{}, surname{}, busNumber{};
            uint16_t* routeNumber = new uint16_t{};
            uint16_t* numberOfSeatsOnTheBus = new uint16_t{};

            cout << "Enter driver name: "; cin >> name;
            cout << "Enter driver surname: "; cin >> surname;
            cout << "Enter bus number: "; cin >> busNumber;
            cout << "Enter route number: "; cin >> *routeNumber;
            cout << "Enter number of seats on the bus: "; cin >> *numberOfSeatsOnTheBus;

            BusDepo::dataBus* newBus = new BusDepo::dataBus(name, surname, busNumber, *routeNumber, *numberOfSeatsOnTheBus);

            bool yes = Buses.tryAdd(*newBus);

            if (yes)
                BusDepo::saveInFile(*newBus);
            break;
        }
        case 2:
        {
            string busNumber{};
            cout << "Enter bus number: "; cin >> busNumber;

            cout << BusDepo::searchBus(busNumber, Buses);

            break;
        }
        }
    }


    return 0;
}