#include <iostream>
using namespace std;

#pragma region Task1

//template <typename T>
//void max(T* arr)
//{
//	int max{}, min = 9999;
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//
//	cout << "Minimum: " << min << endl;
//	cout << "Maximum: " << max;
//}
//
//int main()
//{
//	int* array = new int[5]{ 1, 2, 3, 4, 5 };
//
//	max(array);
//
//	return 0;
//}

#pragma endregion 

#pragma region Task2

//template <typename T>
//void average(T* arr)
//{
//	float sum{};
//
//	for (int i = 0; i < 5; i++)
//	{
//		sum += arr[i];
//	}
//	sum /= 5;
//
//	cout << "Average of array " << sum;
//}
//
//int main()
//{
//	int* array = new int[5]{ 1, 2, 3, 4, 5 };
//
//	average(array);
//
//	return 0;
//}

#pragma endregion 

#pragma region Task3

//template <typename T>
//void factorialFinder(T num)
//{
//	int factorial = 1;
//
//	for (int i = 1; i <= num; i++)
//	{
//		factorial *= i;
//	}
//
//	cout << "Factorial of " << num << " = " << factorial;
//}
//
//int main()
//{
//	int number = 5;
//
//	factorialFinder(number);
//
//	return 0;
//}

#pragma endregion

#pragma region Task4

//template <typename T>
//void fact(T* num)
//{
//
//	int factorial = 1, sum{};
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 1; j <= num[i]; j++)
//		{
//			factorial *= j;
//		}
//
//		sum += factorial;
//		factorial = 1;
//	}
//
//	cout << "Summary of factorials " << sum;
//}
//
//int main()
//{
//	int* array = new int[5]{ 1, 2, 3, 4, 5 };
//
//	fact(array);
//
//	return 0;
//}

#pragma endregion 