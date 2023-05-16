#include "Func.h"

int maximum(int* arr1, int* arr2, int siz1, int siz2)
{
	int max{};

	for (int i = 1; i < siz1; i++)
	{
		if (max < arr1[i]) 
		{
			max = arr1[i];
		}
	}

	for (int i = 1; i < siz2; i++)
	{
		if (max < arr2[i])
		{
			max = arr2[i];
		}
	}

	return max;
}

int minimum(int* arr1, int* arr2, int siz1, int siz2)
{
	int min = arr1[0];

	for (int i = 1; i < siz1; i++)
	{
		if (min > arr1[i]) 
		{
			min = arr1[i];
		}
	}

	for (int i = 1; i < siz2; i++)
	{
		if (min > arr2[i]) 
		{
			min = arr2[i];
		}
	}

	return min;
}

int average(int* arr1, int* arr2, int siz1, int siz2)
{
	int avr{};

	for (int i = 0; i < siz1; i++)
	{
		avr += arr1[i];
	}


	for (int i = 0; i < siz2; i++) 
	{
		avr += arr2[i];
	}

	return avr / (siz1 + siz2);
}