#region Task1

/*int[] array1 = new int[5];
int[,] array2 = new int[3, 4];

Console.WriteLine("Please enter the numbers in the range of 1 - 100: ");

for (int i = 0; i < 5; i++)
{
    bool checkoutNumber = false;

    while (!checkoutNumber || array1[i] < 0 || array1[i] > 100)
    {
        Console.Write("Enter " + (i + 1) + " number: ");
        checkoutNumber = int.TryParse(Console.ReadLine(), out array1[i]);
    }
}

Random random = new();

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        array2[i, j] = random.Next(0, 101);
    }
}*/

#region Data output

/*Console.WriteLine("Array 1: ");

for (int i = 0; i < 5; i++)
{
    Console.Write(array1[i] + "\t");
}

Console.WriteLine("\nArray 2: ");

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        Console.Write(array2[i, j] + "\t");
    }

    Console.WriteLine();
}*/

#region Maximum

int[] tempArr = new int[5];

array1.CopyTo(tempArr, 0);

int searchMax(int[] arr1, int[,] arr2)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                if (arr2[j, k] == arr1.Max())
                {
                    return arr1.Max();
                }
            }
        }

        arr1[Array.IndexOf(arr1, arr1.Max())] = 0;
    }

    return 0;
}

int max = searchMax(tempArr, array2);

Console.WriteLine("Maximum number in arrays: " + max);

#endregion

#region Minimum

int[] tempArray = new int[5];

array1.CopyTo(tempArray, 0);
int searchMin(int[] arr1, int[,] arr2)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                if (arr2[j, k] == arr1.Min())
                {
                    return arr1.Min();
                }
            }
        }

        arr1[Array.IndexOf(arr1, arr1.Min())] = 0;
    }

    return 0;
}

int min = searchMin(tempArray, array2);

Console.WriteLine("Minimum number in arrays: " + min);

#endregion

#region Summary and Product

/*int sumArray1 = 0, sumArray2 = 0, productArray1 = 1, productArray2 = 1;

for (int i = 0; i < 5; i++)
{
    sumArray1 += array1[i];
    productArray1 *= array1[i];
}

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        sumArray2 += array2[i, j];
        productArray2 += array2[i, j];
    }
}

Console.WriteLine("The summary of all the numbers in first array: " + sumArray1);
Console.WriteLine("The summary of all the numbers in  second array: " + sumArray1);

Console.WriteLine("The product of all the numbers in the first array: " + productArray1);
Console.WriteLine("The product of all the numbers in the second array: " + productArray2);*/

#endregion

#region Summary of even and odd numbers

/*int sumArray1 = 0, sumArray2 = 0;

for (int i = 0; i < 5; i++)
{
    if (array1[i] % 2 == 0)
    {
        sumArray1 += array1[i];
    }
}

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        if (j % 2 != 0)
        {
            sumArray2 += array2[i, j];
        }
    }
}

Console.WriteLine("Sum of even elements of the first array: " + sumArray1);
Console.WriteLine("Sum of odd columns of the second array: " + sumArray2);*/

#endregion

#endregion

#endregion 

#region Task2

/*int[,] array = new int[5, 5];
int start1 = 0, start2 = 0, end1 = 0, end2 = 0, summary = 0;

Random random = new Random();

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        array[i, j] = random.Next(-101, 101);
    }
}

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        Console.Write(array[i, j] + "\t");

        if (array[i, j] < array[start1, start2])
        {
            start1 = i;
            start2 = j;
        }

        if (array[i, j] > array[end1, end2])
        {
            end1 = i;
            end2 = j;
        }
    }

    Console.WriteLine();
}

if (start1 >= end1)
{
    if (start1 == end1)
    {
        if (start2 > end2)
        {
            int temp = start1;
            start1 = end1;
            end1 = temp;
            temp = start2;
            start2 = end2;
            end2 = temp;
        }
    }

    else
    {
        int temp = start1;
        start1 = end1;
        end1 = temp;
        temp = start2;
        start2 = end2;
        end2 = temp;
    }
}

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        if (i >= start1)
        {
            if (i == start1)
            {
                if (j >= start2)
                {
                    summary += array[i, j];
                    Console.WriteLine(array[i, j] + ' ');
                }
            }

            else
            {
                if (i <= end1)
                {
                    if (i == end2)
                    {
                        if (j <= end2)
                        {
                            summary += array[i, j];
                            Console.WriteLine(array[i, j] + ' ');
                        }
                    }
                }
            }
        }
    }
}

Console.WriteLine("Summary of numbers between range: " + summary);*/

#endregion 

#region Task3

/*Console.Write("Enter text: ");

string? text = Console.ReadLine(), newText = "";

int shift = 0;

bool checkoutNumber = false;

while (!checkoutNumber)
{
    Console.Write("Enter shift: ");
    checkoutNumber = int.TryParse(Console.ReadLine(), out shift);
}

string textToEncrypted(string text, string newText, int shift)
{
    for (int i = 0; i < text.Length; i++)
    {
        int letter = (int)text[i] + shift;
        newText += (char)letter;
    }
    return newText;
}

string encryptedToText(string text, string newText, int shift)
{
    for (int i = 0; i < text.Length; i++)
    {
        int letter = (int)text[i] - shift;
        newText += (char)letter;
    }
    return newText;
}

int choice = 0;

checkoutNumber = false;

Console.WriteLine("1. Text to Encrypted \n" +
                  "2. Encrypted to Text");

while (!checkoutNumber || choice <= 0 || choice > 2)
{
    Console.Write("Enter your choice: ");

    checkoutNumber = int.TryParse(Console.ReadLine(), out shift);
}

switch (choice)
{
    case 1:
        textToEncrypted(text, newText, shift);
        Console.WriteLine("Encypted text: " + newText);
        break;
    case 2:
        encryptedToText(text, newText, shift);
        Console.WriteLine("Text: " + newText);
        break;
}
*/
#endregion

#region Task4

/*void enterData(out int[,] matrix1, out int[,] matrix2, out int row, out int column)
{
    Console.Write("Enter row: ");
    int.TryParse(Console.ReadLine(), out row);

    Console.Write("Enter col: ");
    int.TryParse(Console.ReadLine(), out column);

    matrix1 = new int[row, column];
    matrix2 = new int[row, column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            Console.Write("Enter a number by index for matrix 1 " + (i + 1) + ':' + (j + 1) + ": ");
            int.TryParse(Console.ReadLine(), out matrix1[i, j]);

            Console.Write("Enter a number by index for matrix 2 " + (i + 1) + ':' + (j + 1) + ": ");
            int.TryParse(Console.ReadLine(), out matrix2[i, j]);
        }
    }
}

void printData(int[,] matrix, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Console.Write(matrix[i, j] + "\t");
        }

        Console.WriteLine();
    }
}

int choice = 0, row, col;
int[,] matrix1, matrix2;

enterData(out matrix1, out matrix2, out row, out col);

bool checkoutNumber = false;

Console.WriteLine("1. Multiplying a matrix by a number \n" +
                  "2. Matrix Addition \n" +
                  "3. Product of matrices");

while (!checkoutNumber || choice <= 0 || choice > 3)
{
    Console.Write("Enter your choice: ");
    checkoutNumber = int.TryParse(Console.ReadLine(), out choice);
}

if (choice == 1)
{
    int multiplier = 0;

    Console.Write("Enter multiplier: ");
    int.TryParse(Console.ReadLine(), out multiplier);

    Console.WriteLine("Arrays before: ");

    printData(matrix1, row, col);
    printData(matrix2, row, col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix1[i, j] *= multiplier;
            matrix2[i, j] *= multiplier;
        }
    }

    Console.WriteLine("Arrays after: ");

    printData(matrix1, row, col);
    printData(matrix2, row, col);
}

else if (choice == 2)
{
    int[,] result = new int[row, col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i, j] = matrix1[i, j] + matrix2[i, j];
        }
    }

    Console.WriteLine("Matrix Addition: ");
    printData(result, row, col);
}

else
{
    int[,] result = new int[row, col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i, j] = matrix1[i, j] * matrix2[i, j];
        }
    }

    Console.WriteLine("Matrix product: ");
    printData(result, row, col);
}
*/
#endregion 

#region Task5

/*Console.Write("Enter the expression: ");

string? expression = Console.ReadLine();

int[] numbers = new int[100]; 
char[] tokens = new char[50];

int t = 0, n = 0;

for (int i = 0; i < expression.Length; i++)
{
    while (char.IsDigit(expression[i]))
    {
        if (numbers[n] != 0)
        {
            numbers[n] *= 10;
        }

        numbers[n] += (int)expression[i] - (int)'0';

        if (i + 1 < expression.Length)
        {
            i++;
            continue;
        }

        break;
    }

    n++;

    if (expression[i] == '+' || expression[i] == '-')
    {
        tokens[t] = expression[i];
        t++;
    }
}

int res = numbers[0];

for (int i = 0; tokens[i] != '\0'; i++)
{
    if (tokens[i] == '+')
    {
        res += numbers[i + 1];
    }
    else
    {
        res -= numbers[i + 1];
    }
}

Console.WriteLine(res);*/

#endregion

#region Task6

/*Console.Write("Enter text: ");

string? text = Console.ReadLine(), newText = "";

int letter = (int)text[0] - 32;

newText += (char)letter;

for (int i = 1; i < text.Length; i++)
{
    if (text[i] == ' ')
    {
        newText += text[i];
    }
    else if (text[i - 1] == '.')
    {
        letter = (int)text[i] - 32;
        newText += (char)(int)letter;
    }
    else
    {
        newText += text[i];
    }
}

Console.WriteLine("Corrected text: " + newText);*/

#endregion 

#region Task7

/*Console.Write("Enter text: ");

string? text = Console.ReadLine(), newText = "";

Console.Write("Enter an invalid word: ");

string? word = Console.ReadLine();

int statistics = 0;

for (int i = 0; i < text.Length; i++)
{
    if (text[i] == word[0] && text[i - 1] == ' ')
    {
        string word2 = "";

        for (int j = 0; j < word.Length; j++)
        {
            word2 += text[i];
            i++;
        }

        if (i < text.Length && (int)text[i] >= 32 && (int)text[i] <= 47)
        {
            for (int k = 0; k < word.Length; k++)
            {
                newText += '*';
            }

            newText += ' ';
            statistics++;
        }
    }
    else
    {
        newText += text[i];
    }
}

Console.WriteLine("Result: \n" + newText);

Console.WriteLine("Statistics: " + statistics + " word replacements " + word);
*/
#endregion 