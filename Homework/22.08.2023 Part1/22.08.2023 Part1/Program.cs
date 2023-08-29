#region Task 1

/*Console.Write("Enter number: ");
int number = int.Parse(Console.ReadLine());

while (number < 1 || number > 100)
{
    Console.Write("Wrong number. Enter again: ");
    number = int.Parse(Console.ReadLine());
}

if (number % 15 == 0)
{
    Console.WriteLine("Fizz Buzz");
}
else if (number % 3 == 0)
{
    Console.WriteLine("Fizz");
}
else if (number % 5 == 0)
{
    Console.WriteLine("Buzz");
}
else
{
    Console.WriteLine(number);
}*/

#endregion

#region Task 2

/*Console.Write("Enter number: ");
int number = int.Parse(Console.ReadLine());

Console.Write("Enter percentage(%): ");
int percentage = int.Parse(Console.ReadLine());

float res = (float)number * (float)percentage / 100;

Console.WriteLine($"Result = {res}");*/

#endregion

#region Task 3

/*int[] numArray = new int[4];

for (int i = 0; i < numArray.Length; i++)
{
    Console.Write($"Enter {i + 1} number: ");
    numArray[i] = int.Parse(Console.ReadLine());
}

int res = numArray[0] * 1000 + numArray[1] *100 + numArray[2] *10 + numArray[3];

Console.WriteLine($"Result = {res}");*/

#endregion

#region Task 4

/*int[] numArray = new int[6];
int[] changeArray = new int[2];
int tpm, res;

for (int i = 0; i < numArray.Length; i++)
{
    Console.Write($"Enter {i + 1} number: ");
    numArray[i] = int.Parse(Console.ReadLine());
}

Console.WriteLine();

for (int j = 0; j < changeArray.Length; j++)
{
    Console.Write($"Enter {j + 1} number for change: ");
    changeArray[j] = int.Parse(Console.ReadLine());
}

res = numArray[0] * 100000 + numArray[1] * 10000 + numArray[2] * 1000 + numArray[3] * 100 + numArray[4] * 10 + numArray[5];

Console.WriteLine();
Console.WriteLine($"Before: {res}");

tpm = numArray[changeArray[0] - 1];
numArray[changeArray[0] - 1] = numArray[changeArray[1] - 1];
numArray[changeArray[1] - 1] = tpm;

res = numArray[0] * 100000 + numArray[1] * 10000 + numArray[2] * 1000 + numArray[3] * 100 + numArray[4] * 10 + numArray[5];

Console.WriteLine($"After: {res}");*/

#endregion

#region Task 5



#endregion

#region Task 6

/*int choice;
float degree;

Console.Write("Enter degree: ");
degree = int.Parse(Console.ReadLine());

Console.Write("Enter choice: \n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius \nEnter your choice: ");
choice = int.Parse(Console.ReadLine());

Console.WriteLine();

switch (choice)
{
    case 1:
        degree = degree * 1.8f + 32;
        Console.WriteLine($"{(int)degree} Fahrenheit");
        break;
    case 2:
        degree = (degree - 32) / 1.8f;
        Console.WriteLine($"{(int)degree} Celsius");
        break;
    default:
        break;
}*/

#endregion

#region Task 7

/*int begin, end, tpm;

Console.Write("Enter begin: ");
begin = int.Parse(Console.ReadLine());

Console.Write("Enter end: ");
end = int.Parse(Console.ReadLine());

if (begin > end)
{
    tpm = begin;
    begin = end;
    end = tpm;
}

Console.WriteLine();

for (int i = begin; i < end; i++)
{
    if (i % 2 == 0)
    {
        Console.Write($"{i} ");
    }
}

Console.WriteLine();*/

#endregion