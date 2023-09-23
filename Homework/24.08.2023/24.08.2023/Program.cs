#region Task1

/*int length;

Console.Write("Enter the length of the side of the square: ");

while (!int.TryParse(Console.ReadLine(), out length)) ;

Console.Write("Enter symbol: ");

char symbol = char.Parse(Console.ReadLine());

for (int i = 0; i < length; i++)
{
    for (int j = 0; j < length; j++)
    {
        Console.Write(symbol + " ");
    }

    Console.WriteLine();
}*/

#endregion

#region Task2

/*Console.Write("Enter number: ");

string? number = Console.ReadLine();

while (number.Length % 2 != 0)
{
    number = Console.ReadLine();
}

string[] palindrome = new string[2];

for (int i = 0; i < number.Length; i++)
{
    if (i + 1 > number.Length / 2)
    {
        palindrome[1] += number[i];
    }
    else
    {
        palindrome[0] += number[i];
    }
}

string pal = "";

for (int i = palindrome[1].Length - 1; i >= 0; i--)
{
    pal += palindrome[1][i];
}


if (palindrome[0] == pal)
{
    Console.WriteLine("This number is palindrome!");
}
else
{
    Console.WriteLine("This number is not palindrome!");
}*/

#endregion

#region Task3

/*int[] filtering(int[] array, int[] filterArr)
{
    int[] result = new int[array.Length];

    for (int i = 0, j = 0; i < array.Length; i++)
    {
        if (!filterArr.Contains(array[i]))
        {
            result[j++] = array[i];
        }
    }

    return result;
}

void printData(int[] array)
{
    foreach (var item in array)
    {
        Console.Write(item + "\t");
    }

    Console.WriteLine();
}

int[] createArray()
{
    int length = 0;

    Console.Write("Enter the length array: ");

    while (!int.TryParse(Console.ReadLine(), out length)) ;

    int[] tempArray = new int[length];

    for (int i = 0; i < length; i++)
    {
        Console.WriteLine("Enter " + (i + 1) + " number: ");

        while (!int.TryParse(Console.ReadLine(), out tempArray[i])) ;
    }

    return tempArray;
}

int[] arr = createArray();

int[] filterArr = createArray();

int[] result = filtering(arr, filterArr);

Console.WriteLine("Array: ");
printData(arr);

Console.WriteLine("Filtering array: ");
printData(filterArr);

Console.WriteLine("Result: ");
printData(result);*/

#endregion

#region Task4

/*Website website = new();

website.inputData();

website.printData();

class Website
{
    private string name { get; set; }
    private string url { get; set; }
    private string description { get; set; }
    private string ipAddress { get; set; }

    public void inputData()
    {
        Console.Write("Enter Website name: ");
        name = Console.ReadLine();

        Console.Write("Enter URL: ");
        url = Console.ReadLine();

        Console.Write("Enter description: ");
        description = Console.ReadLine();

        Console.Write("Enter IP Adress: ");
        ipAddress = Console.ReadLine();
    }

    public void printData()
    {
        Console.WriteLine("Website name: " + name);
        Console.WriteLine("Website URL: " + url);
        Console.WriteLine("Website description: " + description);
        Console.WriteLine("Website IP Adress: " + ipAddress);
    }
}*/

#endregion

#region Task5

/*Journal journal = new();

journal.inputData();

Console.WriteLine();

journal.printData();

class Journal
{
    private string name { get; set; }
    private int yearFounded { get; set; }
    private string description { get; set; }
    private string phone { get; set; }
    private string email { get; set; }

    public void inputData()
    {
        Console.Write("Enter journal name: ");
        name = Console.ReadLine();

        Console.Write("Enter journal year founded: ");
        yearFounded = int.Parse(Console.ReadLine());

        Console.Write("Enter journal description: ");
        description = Console.ReadLine();

        Console.Write("Enter contact phone: ");
        phone = Console.ReadLine();

        Console.Write("Enter contact e-mail: ");
        email = Console.ReadLine();
    }

    public void printData()
    {
        Console.WriteLine("Journal name: " + name);
        Console.WriteLine("Journal year founded: " + yearFounded);
        Console.WriteLine("Journal description: " + description);
        Console.WriteLine("Journal contact phone: " + phone);
        Console.WriteLine("Journal contact e-mail: " + email);
    }
}*/

#endregion

#region Task6

/*Store store = new();

store.InputData();

Console.WriteLine();

store.DisplayData();

class Store
{
    private string name { get; set; }
    private string address { get; set; }
    private string description { get; set; }
    private string phone { get; set; }
    private string email { get; set; }

    public void InputData()
    {
        Console.Write("Enter store name: ");
        name = Console.ReadLine();

        Console.Write("Enter store adress: ");
        address = Console.ReadLine();

        Console.Write("Enter store description: ");
        description = Console.ReadLine();

        Console.Write("Enter store contact phone: ");
        phone = Console.ReadLine();

        Console.Write("Enter store contact e-mail: ");
        email = Console.ReadLine();
    }

    public void DisplayData()
    {
        Console.WriteLine("Store name: " + name);
        Console.WriteLine("Store adress: " + address);
        Console.WriteLine("Store description: " + description);
        Console.WriteLine("Store contact phone: " + phone);
        Console.WriteLine("Store contact e-mail: " + email);
    }
}*/

#endregion