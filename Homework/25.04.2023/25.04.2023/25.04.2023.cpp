#include "Func.h"

int main()
{
	int count{};
	cout << "How many books do you want to add? "; cin >> count;
	cin.ignore();

	book** books = new book * [10] {};

	for (int i = 0; i < count; i++)
	{
		books[i] = createBook(count);
	}

	bool stop = true;

	while (stop)
	{
		int choice{};
		cout
			<< "Enter your choice: " << endl
			<< "1. Edit book" << endl
			<< "2. Print books" << endl
			<< "3. Book search by name" << endl
			<< "4. Search for books by author" << endl
			<< "5. Sorting the array by book title" << endl
			<< "6. Sorting the array by book author" << endl
			<< "7. Sorting the array by book publishing" << endl
			<< "8. Stop programm" << endl << "Enter choice: ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			system("cls");
			printBook(books);
			cout << "Choice book: "; cin >> choice;
			books[choice - 1]->edit();
			break;
		case 2:
			system("cls");
			printBook(books);
			break;
		case 3:
			system("cls");
			cin.ignore();
			searchBookName(books);
			break;
		case 4:
			system("cls");
			cin.ignore();
			searchBookAuthor(books);
			break;
		case 5:
			system("cls");
			cin.ignore();
			sortName(books);
			break;
		case 6:
			system("cls");
			cin.ignore();
			sortAuthor(books);
			break;
		case 7:
			system("cls");
			cin.ignore();
			sortPublishing(books);
			break;
		case 8:
			stop = false;
			break;
		default:
			break;
		}
	}

	return 0;
}