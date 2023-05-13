#include <iostream>
using namespace std;

#pragma region Task1

//int* sumMultFinder(int* arr, int size)
//{
//	int sum{}, mult = 1;
//	int* arr1 = new int[2] {};
//
//	for (int i = 0; i < size; i++)
//	{
//		sum += arr[i];
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		mult *= arr[i];
//	}
//
//	arr1[0] = sum;
//	arr1[1] = mult;
//
//	return arr1;
//}
//
//int main()
//{
//	int size = 5;
//	int* array = new int[size] { 1, 2, 3, 4, 5 };
//	int* array1 = new int[2] {};
//
//	array1 = sumMultFinder(array, size);
//
//	for (int i = 0; i < 2; i++)
//	{
//		cout << array1[i] << ' ';
//	}
//}

#pragma endregion

#pragma region Task2

//int* nullNegPosFinder(int* arr, int size)
//{
//	int countNull{}, countNeg{}, countPos{};
//	int* arr1 = new int[3] {};
//
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > 0)
//		{
//			countPos++;
//		}
//		else if (arr[i] < 0)
//		{
//			countNeg++;
//		}
//		else {
//			countNull++;
//		}
//	}
//
//	arr1[0] = countNull; arr1[1] = countNeg;
//	arr1[2] = countPos;
//	return arr1;
//}
//
//int main()
//{
//	int size = 5;
//	int* array = new int[size] { -2, 0, 3, 4, -1 }; 
//	int* array1 = new int[3] {};
//
//	array1 = nullNegPosFinder(array, size);
//
//	cout << "Nulls = " << array1[0] << endl
//		 << "Negative numbers = " << array1[1] << endl
//		 << "Positive numbers = " << array1[2] << endl;
//}

#pragma endregion

#pragma region Task3

//int subsetFinder(int* arrA, int* arrB, int lenA, int lenB)
//{
//	int num{};
//
//	for (int i = 0; i < lenA; i++)
//	{
//		for (int j = 0; j < lenB; j++)
//		{
//			if (arrA[i] == arrB[j])
//			{
//				i++;
//				num++;
//			}
//		}
//	}
//
//	if (num == lenB)
//	{
//		for (int i = 0; i < lenA; i++)
//		{
//			for (int j = 0; j < lenB; j++)
//			{
//				if (arrA[i] = arrB[j])
//				{
//					return arrA[i];
//				}
//			}
//		}
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int lengthA = 5, lengthB = 2;
//	int arrayA[5]{ 1, 2, 3, 4, 5 };
//	int arrayB[2]{ 1, 2};
//
//	cout << subsetFinder(arrayA, arrayB, lengthA, lengthB);
//
//	return 0;
//}


#pragma endregion

#pragma region Task4

//int countNeg{};
//
//int* negDeleter(int* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] < 0)
//		{
//			countNeg++;
//		}
//	}
//
//	int* arr1 = new int[size - countNeg];
//
//	for (int i = 0, j{}; i < size; i++, j++)
//	{
//		if (arr[i] < 0)
//		{
//			arr1[j] = 0;
//			i++;
//		}
//		else
//		{
//			arr1[j] = arr[i];
//		}
//	}
//
//	return arr1;
//}
//
//int main() {
//	int size = 5; int* array = new int[size] { -2, 0, 3, 4, -1 };
//	int* array1 = new int[size - countNeg] {};
//
//	array1 = negDeleter(array, size);
//
//	for (int i = 0; i < size - countNeg; i++) {
//		cout << array1[i] << ' ';
//	}
//}

#pragma endregion

#pragma region Task5

//void merger(int*& arr1, int* arr2, int& siz1, int siz2)
//{
//	int* arr3 = new int[siz1] {};
//
//	for (int i = 0; i < siz1; i++)
//	{
//		arr3[i] = arr1[i];
//	}
//
//	siz1 += siz2;
//	arr1 = new int[siz1] {};
//
//	for (int i = 0; i < (siz1 - siz2); i++)
//	{
//		arr1[i] = arr3[i];
//	}
//
//	for (int i = siz1 - siz2, j{}; i < siz1; i++, j++)
//	{
//		arr1[i] = arr2[j];
//	}
//}
//
//int main()
//{
//	int size1 = 5, size2 = 5;
//	int* array1 = new int[size1] { 1, 2, 3, 4, 5 };
//	int* array2 = new int[size2] { 6, 7, 8, 9, 10 };
//
//	merger(array1, array2, size1, size2);
//
//	for (int i = 0; i < size1; i++)
//	{
//		cout << array1[i] << ' ';
//	}
//
//	return 0;
//}

#pragma endregion

#pragma region Task6

//void mergingWithIndex(int*& arr1, int* arr2, int& siz1, int siz2, int& cho)
//{
//	int* arr3 = new int[cho] {};
//	int* arr4 = new int[siz1 - cho] {};
//
//	for (int i = 0; i < cho; i++)
//	{
//		arr3[i] = arr1[i];
//	}
//
//	for (int i = cho, j{}; i < siz1; i++, j++)
//	{
//		arr4[j] = arr1[i];
//	}
//
//	siz1 += siz2;
//	arr1 = new int[siz1] {};
//
//	for (int i = 0; i < cho; i++)
//	{
//		arr1[i] = arr3[i];
//	}
//
//	for (int i = cho, j{}; i < cho + siz2; i++, j++)
//	{
//		arr1[i] = arr2[j];
//	}
//
//	for (int i = cho + siz2, j{}; i < siz1; i++, j++)
//	{
//		arr1[i] = arr4[j];
//	}
//}
//
//int main()
//{
//	int size1 =  5, size2 =  5, choice{};
//	int* array1 = new int[size1] {1, 2, 3, 4, 5 };
//	int* array2 = new int[size2] { 6, 7, 8, 9, 10 };
//
//	cout << "Choice from 1 to 6: "; cin >> choice;
//
//	choice -= 1;
//
//	mergingWithIndex(array1, array2, size1, size2, choice);
//
//	for (int i = 0; i < size1; i++)
//	{
//		cout << array1[i] << ' ';
//	}
//
//	return 0;
//}

#pragma endregion

#pragma region Task7

//void foo(int*& arr, int& siz)
//{
//	int choice{};
//
//	cout << "Enter number from 1 to 10: "; cin >> choice;
//
//	siz = choice;
//	int* arr1 = new int[choice] {};
//
//	for (int i = 0; i < choice; i++)
//	{
//		arr1[i] = arr[i];
//	}
//
//	arr = new int[choice] {};
//
//	for (int i = 0; i < choice; i++)
//	{
//		arr[i] = arr1[i];
//	}
//}
//
//int main()
//{
//	int size = 10;
//	int* array = new int[size] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	foo(array, size);
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << array[i] << ' ';
//	}
//
//	return 0;
//}

#pragma endregion
