#include <iostream>
#include "Funcs.h";

int myStrCmp(char* str1, char* str2)
{
	int length1{}, length2{};

	for (int i = 0; i < 52; i++)
	{
		if (str1[i] == '\0')
		{
			break;
		}

		length1++;
	}
	for (int i = 0; i < 52; i++)
	{
		if (str2[i] == '\0')
		{
			break;
		}

		length2++;
	}

	return (length1 == length2) ? 0 : (length1 > length2) ? 1 : -1;
}

void stringToNumber(char* string)
{
	int* strToNum = new int[51] {};

	for (int i = 0; i < 52; i++)
	{
		if (string[i] == '\0')
		{
			break;
		}

		strToNum[i] = (int)string[i];
	}
	for (int i = 0; i < 52; i++)
	{
		if (string[i] == '\0')
		{
			break;
		}

		std::cout << strToNum[i];
	}
}

void numberToString(int* number)
{
	char* numToStr = new char[51] {};

	for (int i = 0; i < 52; i++)
	{
		if (number[i] == '\0')
		{
			break;
		}

		numToStr[i] = (char)number[i];
	}

	for (int i = 0; i < 52; i++)
	{
		if (number[i] == '\0')
		{
			break;
		}

		std::cout << numToStr[i];
	}
}

char* upperCase(char* str1)
{
	char* upperString = new char[51] {};

	for (int i = 0; i < 52; i++)
	{
		if (str1[i] == '\0')
		{
			break;
		}

		if ((int)str1[i] > 96 && (int)str1[i] < 123)
		{
			upperString[i] = (char)((int)str1[i] - 32);
		}
		else
			upperString[i] = str1[i];
	}

	return upperString;
}

char* lowerCase(char* str1)
{
	char* lowerstring = new char[51] {};

	for (int i = 0; i < 52; i++)
	{
		if (str1[i] == '\0')
		{
			break;
		}

		if ((int)str1[i] > 64 && (int)str1[i] < 91)
		{
			lowerstring[i] = (char)((int)str1[i] + 32);
		}
		else
			lowerstring[i] = str1[i];
	}

	return lowerstring;
}

char* myStrRev(char* str)
{
	char* reverseString = new char[51] {};

	int i{};

	while (str[i] != '\0')
	{
		i++;
	}

	for (int j = i, a = 0; j != -1; j--, a++)
	{
		reverseString[a] = str[j];
	}

	return reverseString;
}
