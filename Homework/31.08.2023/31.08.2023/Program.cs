#region Task1

/*int choice = 0;

while (choice <= 0 || choice > 2)
{
    Console.WriteLine("Enter your choice: \n" +
                      "1. From decimal to binary \n" +
                      "2. From binary to decimal");

    int.TryParse(Console.ReadLine(), out choice);
}

int number;

Console.WriteLine("Enter number for convert: ");

while (!int.TryParse(Console.ReadLine(), out number)) ;

switch (choice)
{
    case 1:
        string binary = "";

        while (number > 0)
        {
            binary += number % 2;
            number /= 2;
        }

        Console.WriteLine(binary.Reverse().ToArray());
        break;
    case 2:
        int @decimal = 0;
        string numbers = number.ToString();

        for (int i = 0; i < numbers.Length; i++)
        {
            @decimal += int.Parse(numbers[i].ToString()) * (int)Math.Pow(2, numbers.Length - 1 - i);
        }

        Console.WriteLine(@decimal);
        break;
}*/

#endregion

#region Task2

/*Console.Write("Enter a number in words: ");

string? number = Console.ReadLine();

string[] numbersName = new string[10] { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

for (int i = 0; i < 10; i++)
{
    if (number == numbersName[i])
    {
        Console.WriteLine(i);
        break;
    }
}*/

#endregion

#region Task3

/*using System.Text.RegularExpressions;

class ForeignPassport
{
    public string PassportNumber { get; init; }
    public string Name { get; init; }
    public string Surname { get; init; }
    public string Patronomic { get; init; }

    public ForeignPassport(string _PassportNumber, string _Name, string _Surname, string _Patronomic)
    {
        if (int.TryParse(_PassportNumber, out _) || _PassportNumber.Length < 7)
        {
            throw new Exception("Invalid Passport Number!");
        }

        if (!Regex.IsMatch(_Name, @"^[a-zA-Z]+$") || _Name.Length < 2 || _Name.Length > 20)
        {
            throw new Exception("Invalid Name!");
        }

        if (!Regex.IsMatch(_Surname, @"^[a-zA-Z]+$") || _Name.Length < 2 || _Name.Length > 20)
        {
            throw new Exception("Invalid Surname!");
        }

        if (!Regex.IsMatch(_Patronomic, @"^[a-zA-Z]+$") || _Name.Length < 2 || _Name.Length > 20)
        {
            throw new Exception("Invalid Patronomic!");
        }

        this.PassportNumber = _PassportNumber;
        this.Name = _Name;
        this.Surname = _Surname;
        this.Patronomic = _Patronomic;
    }
}*/

#endregion

#region Task4

/*Console.WriteLine("Enter expression: ");

string? expression = Console.ReadLine();

try
{
    if (expression.Contains("."))
    {
        throw new Exception("Invalid Input");
    }
}
catch (Exception e)
{
    Console.WriteLine(e.Message);

    Environment.Exit(0);
}

int[] numbers = new int[2];
string token = "";

for (int i = 0, index = 0; i < expression.Length; i++)
{
    while (char.IsDigit(expression[i]))
    {
        if (numbers[index] != 0)
        {
            numbers[index] *= 10;
        }

        numbers[index] += (int)expression[i] - (int)'0';

        if (i + 1 < expression.Length)
        {
            i++;
            continue;
        }
        break;
    }
    if (i + 1 < expression.Length)
    {
        token += expression[i];

        if (char.IsDigit(expression[i + 1]))
        {
            index++;
        }
    }
}

switch (token)
{
    case ">":
        Console.WriteLine(numbers[0] > numbers[1]);
        break;
    case "<":
        Console.WriteLine(numbers[0] < numbers[1]);
        break;
    case ">=":
        Console.WriteLine(numbers[0] >= numbers[1]);
        break;
    case "<=":
        Console.WriteLine(numbers[0] <= numbers[1]);
        break;
    case "==":
        Console.WriteLine(numbers[0] == numbers[1]);
        break;
    case "!=":
        Console.WriteLine(numbers[0] != numbers[1]);
        break;
}*/

#endregion
