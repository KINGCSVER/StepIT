#include "File.h"
#include <regex>
#include <Windows.h>

void getClick(int& x, int& y)
{
	HANDLE hConsoleIn = GetStdHandle(STD_INPUT_HANDLE);
	INPUT_RECORD inputRec;
	DWORD events;
	COORD coord;
	bool clicked = false;

	DWORD fdwMode = ENABLE_EXTENDED_FLAGS | ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT;
	SetConsoleMode(hConsoleIn, fdwMode);

	while (!clicked) {

		ReadConsoleInput(hConsoleIn, &inputRec, 1, &events);

		if (inputRec.EventType == MOUSE_EVENT) {
			if (inputRec.Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED) {
				coord = inputRec.Event.MouseEvent.dwMousePosition;
				x = coord.X;
				y = coord.Y;
				clicked = true;
			}
		}
		if (GetAsyncKeyState(VK_ESCAPE)) {
			break;
		}
	}
}

string getKeyBoard()
{
	HANDLE hConsoleIn = GetStdHandle(STD_INPUT_HANDLE);
	INPUT_RECORD inputRec{};
	DWORD events{};
	COORD coord{};
	bool clicked = false;

	DWORD fdwMode = ENABLE_EXTENDED_FLAGS | ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT;
	SetConsoleMode(hConsoleIn, fdwMode);

	std::string numToString{};

	while (true) {
		ReadConsoleInput(hConsoleIn, &inputRec, 1, &events);

		if (inputRec.EventType == KEY_EVENT && inputRec.Event.KeyEvent.bKeyDown) {
			if (inputRec.Event.KeyEvent.wVirtualKeyCode == VK_RETURN) {
				break;
			}
			else if (inputRec.Event.KeyEvent.wVirtualKeyCode == VK_BACK) {
				if (!numToString.empty()) {
					numToString.pop_back();
					std::cout << "\b \b";
				}
			}
			else if (inputRec.Event.KeyEvent.uChar.AsciiChar >= 32 && inputRec.Event.KeyEvent.uChar.AsciiChar <= 126) {
				std::cout << inputRec.Event.KeyEvent.uChar.AsciiChar;
				numToString += inputRec.Event.KeyEvent.uChar.AsciiChar;
			}
		}
	}

	return numToString;
}

User registration()
{
	string name{};
	string surname{};
	string email{};
	string password{};
	string phone{};

	regex regexNameAndSurname("[a-zA-Z]{3,20}");
	regex emailRegex(R"(([a-zA-Z0-9](\.|_)?)+([a-zA-Z0-9])+@([a-zA-Z0-9])+((\.)[a-zA-Z]{2,})+)");
	regex regexPassword("[a-zA-Z0-9.]{8,20}");
	regex phoneRegex("^[+]994[0-9]{9}$");

	cout << "Enter your name: "; name = getKeyBoard(); cout << '\n';
	if (!regex_match(name, regexNameAndSurname)) {
		throw invalid_argument("Invalid name!");
	}

	cout << "Enter your surname: "; surname = getKeyBoard(); cout << '\n';
	if (!regex_match(surname, regexNameAndSurname)) {
		throw invalid_argument("Invalid surname!");
	}

	cout << "Enter your email: "; email = getKeyBoard(); cout << '\n';
	if (!regex_match(email, emailRegex)) {
		throw invalid_argument("Invalid email!");
	}

	cout << "Enter your password: "; password = getKeyBoard(); cout << '\n';
	if (!regex_match(password, regexPassword)) {
		throw invalid_argument("Invalid password!");
	}

	cout << "Enter your phone: "; phone = getKeyBoard(); cout << '\n';
	if (!regex_match(phone, phoneRegex)) {
		throw invalid_argument("Invalid phone!");
	}

	User u(name, surname, email, password, phone);

	return u;
}

bool login(User* users, uint16_t usersCount)
{
	string email{};
	string password{};

	regex emailRegex(R"(([a-zA-Z0-9](\.|_)?)+([a-zA-Z0-9])+@([a-zA-Z0-9])+((\.)[a-zA-Z]{2,})+)");
	regex regexPassword("[a-zA-Z0-9.]{8,20}");

	cout << "Enter your email: "; email = getKeyBoard(); cout << '\n';
	if (!regex_match(email, emailRegex)) {
		throw invalid_argument("Invalid email!");
	}

	cout << "Enter your password: "; password = getKeyBoard(); cout << '\n';
	if (!regex_match(password, regexPassword)) {
		throw invalid_argument("Invalid password!");
	}

	for (size_t i = 0; i < usersCount; i++)
	{
		if (users[i].getEmail() == email)
		{
			if (users[i].getPassword() == password)
				return true;
		}
		else
			throw invalid_argument("Invalid Password or Email");
	}
}

int main()
{
	User* users = new User[100]{};
	uint16_t usersCount{};
	file::loadnames(users, usersCount);
	int x{}, y{};

	while (true)
	{
		cout << "\t\t\t\t\t\tWelcome!" << endl;
		cout << "\t\t\t\tSign up\t\t\t\t\tLogin" << endl;

		while (y != 1 or x < 32 or x > 38 and x < 72 or x > 76)
			getClick(x, y);

		if (x >= 32 and x <= 38)
		{
			bool regComplated = true;
			while (regComplated)
			{
				try {
					users[usersCount] = registration();
				}
				catch (exception& e) {
					cout << e.what() << endl;
					continue;
				}
				file::savetoFile(users, usersCount);
				regComplated = false;
				usersCount++;
			}
		}
		else
		{
			bool regComplated = true;
			while (regComplated)
			{
				try {
					login(users, usersCount);
				}
				catch (exception& e) {
					cout << e.what() << endl;
					continue;
				}
				cout << "Login Complated!";
				regComplated = false;
				Sleep(3000);
			}
		}
		system("cls");
		x = 0, y = 0;
	}

	return 0;
}