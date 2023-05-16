#include <iostream>
using namespace std;

int main()
{

#pragma region Task1

	/*char* text = new char[101] {};
	char* textReplace = new char[101] {};
	char* replaceWord = new char[11] {};
	char* replacementWord = new char[11] {};

	cout << "Enter text: "; cin.getline(text, 100);
	cout << "Enter replace word: "; cin.getline(replaceWord, 10);
	cout << "Enter a replacement word: "; cin.getline(replacementWord, 10);

	int count{}, count2{};

	while (replaceWord[count] != '\0')
	{
		count++;
	}

	while (replacementWord[count2] != '\0')
	{
		count2++;
	}

	int yes{};

	for (int i = 0, a = 0; i < 100;)
	{
		if (text[i] == '\0')
		{
			break;
		}

		if ((int)text[i] > 64 && (int)text[i] < 91 || (int)text[i] == 32)
		{
			if ((int)text[i] == 32)
			{
				i++;
				a++;

				textReplace[a - 1] = text[i - 1];
			}

			for (int j = 0, c = i; j < count; j++, c++)
			{
				if (text[c] == replaceWord[j])
				{
					yes++;
				}
			}

			if (yes == count)
			{
				for (int b = 0; b < count2; b++)
				{
					if (replacementWord[b] == '\0')
					{
						textReplace[a] = ' ';
					}
					else 
					{
					textReplace[a] = replacementWord[b];
					}	

					a++;
				}

				int c{};

				while (c != count)
				{
					c++;
					i++;
				}
			}

			else
			{
				i++;
				a++;
				textReplace[a - 1] = text[i - 1];
			}

			yes = 0;
		}

		else
		{
			textReplace[a] = text[i];
			i++;
			a++;
		}
	}
	cout << textReplace;*/

#pragma endregion

#pragma region Task2

	/*char* text = new char[101];

	cout << "Enter text: "; cin.getline(text, 100);

	if ((int)text[0] > 96 && (int)text[0] < 123) 
	{
		text[0] = (int(text[0] - 32));
	}

	for (int i = 0; i < 102; i++)
	{
		if (text[i] == '\0' || text[i + 1] == '\0') {
			break;
		}

		else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
		{
			if (text[i + 1] == ' ')
			{
				text[i + 2] = (int(text[i + 2] - 32));
			}
			else
			{
				text[i + 1] = (int(text[i + 2] - 32));
			}
		}
	}

	cout << text;*/

#pragma endregion

#pragma region Task3

	/*int count1[26]{}, count2[26]{};;
	char* text = new char[101] {};

	cout << "Enter text: "; cin.getline(text, 100);

	for (int i = 97, j = 0; i < 123; i++, j++)
	{
		count1[j] = i;
	} 

	for (int i = 0; i < 102; i++)
	{
		if (text[i] == '\0')
		{
			break;
		}

		for (int j = 0; j < 26; j++)
		{
			if ((int)text[i] == count1[j] || (int)text[i] + 32 == count1[j])
			{
				count2[j] += 1;
				break;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (count2[i] > 0)
		{
			cout << "Letter " << (char)count1[i] << " met " << count2[i] << " times." << endl;
		}
	}*/

#pragma endregion

#pragma region Task4

	/*int count{};
	char* text = new char[101] {};

	cout << "Enter text: "; cin.getline(text, 100);
	
	for (int i = 0; i < 102; i++)
	{
		if (text[i] == '\0') 
		{
			break;
		}

		if ((int)text[i] > 47 && (int)text[i] < 58) 
		{
			count++;
		}
	}

	cout << "Numbers met " << count << " times." << endl;*/

#pragma endregion

	return 0;
}
