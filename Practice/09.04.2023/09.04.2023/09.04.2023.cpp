#include <iostream>
using namespace std;

void spaceToTab(char*& string)
{
    for (int i = 0; i < 52; i++)
    {
        if (string[i] == '\0') 
        {
            break;
        }
        else if (string[i] == ' ')
        {
            string[i] = '\t';
        }
    }
}

void count(char* string)
{
    int number{}, letter{}, symbol{};

    for (int i = 0; i < 52; i++)
    {
        if (string[i] == '\0') 
        {
            break;
        }

        if ((int)string[i] > 32 && (int)string[i] < 48 || (int)string[i] > 57 && (int)string[i] < 65 || (int)string[i] > 90 && (int)string[i] < 97 || (int)string[i] > 122 && (int)string[i] < 127)
        {
            symbol++;
        }
        else if ((int)string[i] > 47 && (int)string[i] < 58)
        {
            number++;
        }
        else if ((int)string[i] > 64 && (int)string[i] < 91 || (int)string[i] > 96 && (int)string[i] < 123)
        {
            letter++;
        }
    }

    cout
        << "In line " << symbol << " symbols" << endl
        << "In line " << number << " numbers" << endl
        << "In line " << letter << " letters" << endl;

}

void countWords(char* string)
{
    int words{};

    for (int i = 0; i < 52; i++)
    {
        if (string[i] == '\0')
        {
            break;
        }

        if (string[i] == ' ' || string[i] == ',' || string[i] == ':') 
        {
            words++;
        }
    }

    cout << "In this line " << words << " words";
}

void palindrome(char* string)
{
    char* newString = new char[51] {};
    int count1{}, count2{};


    for (int i = 0, j = 0; i < 52; i++)
    {
        if (string[i] == '\0') 
        {
            break;
        }

        if (string[i] != ' ' && string[i] != ',' && string[i] != '.' && string[i] != ':' && string[i] != ';' && string[i] != '?')
        {
            newString[j] = string[i];
            if (newString[j] > 64 && newString[j] < 91)
            {
                newString[j] = (char)((int)newString[j] + 32);
            }
            j++;
        }
    }


    while (newString[count1] != '\0')
    {
        count1++;
    }


    for (int i = 0, j = count1 - 1; i < count1 / 2; i++, j--)
    {
        if (string[i] == string[j]) 
        {
            count2++;
        }
    }

    if (count2 == count1 / 2) 
    {
        cout << "yes";
    }
    else 
    {
        cout << "no";
    }

}

int main()
{

#pragma region Task1

    /*char* string = new char[51] {};

    cout << "Enter line: "; cin.getline(string, 50);

    spaceToTab(string);

    for (int i = 0; i < 51; i++)
    {
        cout << string[i];
    }*/

#pragma endregion

#pragma region Task2

    /*char* string = new char[51];
    
    cout << "Enter line: "; cin.getline(string, 50);

    count(string);*/

#pragma endregion

#pragma region Task3

    /*char* string = new char[51];

    cout << "Enter line: "; cin.getline(string, 50);

    countWords(string);*/

#pragma endregion

#pragma region Task4

    /*char* string = new char[51] {};

    cout << "Enter line: "; cin.getline(string, 50);

    palindrome(string);*/

#pragma endregion

    return 0;
}