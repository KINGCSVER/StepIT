#include <iostream>
using namespace std;


char** goods = new char* [6] {
	new char[20] {"Monitor"},
	new char[20] {"Case"},
	new char[20] {"CPU"},
	new char[20] {"Cooler"},
	new char[20] {"Graphic card"},
	new char[20] {"Keyboard"}
};
int goodsCount[6]{ 10, 10, 10, 10, 10, 10 };
float prices[6]{ 300, 100, 400, 150, 900, 200 };

int count1{}, choice1{};
float balance, overallBalance{}, choice2{}, count2{};
bool choicekass = true;
bool paid = false;

int main()
{
	while (choicekass)
	{
		if (goodsCount[0] == 0 && goodsCount[1] == 0 && goodsCount[2] == 0 && goodsCount[3] == 0)
		{
			cout << "We have run out of goods((";
			break;
		}

		cout << "Continue: "; cin >> choice2;

		choice1 = choice2;

		if (choice1 == 0)
		{
			break;
		}

		choice1 = 0, balance = 0, count1 = 0;
		bool choicepep = true;
		bool paid{};

		cout << "Hello, what do you want to buy?" << endl;

		for (int i = 0; i < 6; i++)
		{
			if (goodsCount[i] > 0)
				cout << i + 1 << " - " << goods[i] << '\t' << "Goods and Prices: " << goodsCount[i] << " - " << prices[i] << '$' << endl;
		}

		cin >> choice2;
		choice1 = choice2;

		while (choice1 > 6 || choice1 == 0 || choice1 < 0)
		{
			cout << "This product does not exist, please re-enter: "; cin >> choice2;
			choice1 = choice2;
			cout << endl;
		}

		while (choicepep)
		{
			switch (choice1)
			{
			case 1:
			{
				if (goodsCount[0] == 0)
				{
					cout << "We have no garlands left(" << endl;
					cout << "Enter another choice: " << endl; cin >> choice2;
					choice1 = choice2;
					continue;
				}

				cout << "Enter count product: " << endl; cin >> count2;

				count1 = count2;

				while (count1 > goodsCount[0] || count1 < 0)
				{
					cout << "We don't have that many items, please re-enter: "; cin >> count2;
					count1 = count2;
					cout << endl;
				}

				balance += prices[0] * count1;
				goodsCount[0] -= count1;
				break;
			}
			case 2:
			{
				if (goodsCount[1] == 0)
				{
					cout << "We have no Christmas Tree left(" << endl;
					cout << "Enter another choice: " << endl; cin >> choice2;
					choice1 = choice2;
					continue;
				}

				cout << "Enter count product: " << endl; cin >> count2;

				count1 = count2;

				while (count1 > goodsCount[1] || count1 < 0)
				{
					cout << "We don't have that many items, please re-enter: "; cin >> count2;
					count1 = count2;
					cout << endl;
				}

				balance += prices[1] * count1;
				goodsCount[1] -= count1;
				break;
			}
			case 3:
			{
				if (goodsCount[2] == 0)
				{
					cout << "We have no crackers left(" << endl;
					cout << "Enter another choice: " << endl; cin >> choice2;
					choice1 = choice2;
					continue;
				}

				cout << "Enter count product: " << endl; cin >> count2;

				count1 = count2;
				
				while (count1 > goodsCount[2] || count1 < 0)
				{
					cout << "We don't have that many items, please re-enter: "; cin >> count2;
					count1 = count2;
					cout << endl;
				}

				balance += prices[2] * count1;
				goodsCount[2] -= count1;
				break;
			}
			case 4:
			{
				if (goodsCount[3] == 0)
				{
					cout << "We have no sparklers left(" << endl;
					cout << "Enter another choice: " << endl; cin >> choice2;
					choice1 = choice2;
					continue;
				}

				cout << "Enter count product: " << endl; cin >> count2;

				count1 = count2;

				while (count1 > goodsCount[3] || count1 < 0)
				{
					cout << "We don't have that many items, please re-enter: "; cin >> count2;
					count1 = count2;
					cout << endl;
				}

				balance += prices[3] * count1;
				goodsCount[3] -= count1;
				break;
			}
			case 5:
			{
				if (goodsCount[4] == 0)
				{
					cout << "We have no New Year Lamp left(" << endl;
					cout << "Enter another choice: " << endl; cin >> choice2;
					choice1 = choice2;
					continue;
				}

				cout << "Enter count product: " << endl; cin >> count2;

				count1 = count2;

				while (count1 > goodsCount[4] || count1 < 0)
				{
					cout << "We don't have that many items, please re-enter: "; cin >> count2;
					count1 = count2;
					cout << endl;
				}

				while (count1 > 3)
				{
					cout << "Discounted items can only buy 3 pieces, please re-enter:"; cin >> count2;
					count1 = count2;
					cout << endl;
				}

				balance += prices[4] * count1;
				goodsCount[4] -= count1;

				break;
			}
			case 6:
			{
				if (goodsCount[5] == 0)
				{
					cout << "We have no New Year's cookies left(" << endl;
					cout << "Enter another choice: " << endl; cin >> choice2;
					choice1 = choice2;
					continue;
				}

				cout << "Enter count product: " << endl; cin >> count2;

				count1 = count2;

				while (count1 > goodsCount[5] || count1 < 0)
				{
					cout << "We don't have that many items, please re-enter: "; cin >> count2;
					count1 = count2;
					cout << endl;
				}

				while (count1 > 3)
				{
					cout << "Discounted items can only buy 3 pieces, please re-enter:"; cin >> count2;
					count1 = count2;
					cout << endl;
				}

				balance += prices[5] * count1;
				goodsCount[5] -= count1;
				break;
			}
			}

			cout << "Anything else ?" << endl; cin >> choice2;

			choice1 = choice2;

			while (choice1 > 4 || choice1 < 0)
			{
				cout << "This product does not exist, please re-enter: "; cin >> choice2;
				choice1 = choice2;
				cout << endl;
			}

			if (choice1 == 0)
			{
				if (balance > 300)
				{
					cout << "Your purchase is more than 300 dollars, please choose a product as a gift)" << endl;

					for (int i = 0; i < 4; i++)
					{
						if (goodsCount[i] > 0) 
						{
							cout << i + 1 << " - " << goods[i] << endl;
						}
					}
				}

				choicepep = false;

				float discount{};

				cout << "If you have discounts, enter the discount: "; cin >> discount;

				while (discount > 100 || discount < 0)
				{
					cout << "There is no such percentage. Please re-enter discount: "; cin >> discount;
				}

				balance = balance - ((balance / 100) * discount);

				cout << "You must: " << balance << endl;

				overallBalance += balance;

				cout << "Successfully paid: "; cin >> paid;

				if (paid)
				{
					cout << "\a";
				}

				system("cls");

				continue;
			}
		}
	}
	cout << "Over All balance: " << overallBalance << "$";

	return 0;
}