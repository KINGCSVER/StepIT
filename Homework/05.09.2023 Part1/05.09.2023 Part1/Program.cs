#region Task1

Journal journal = new();

journal.inputData();

Console.WriteLine();

journal.printData();

class Journal
{
    public string? name { get; private set; }
    public int yearReleased { get; private set; }
    public string? description { get; private set; }
    public string? phone { get; private set; }
    public string? email { get; private set; }
    public int NumberOfEmployees { get; private set; }

    public void inputData()
    {
        Console.Write("Enter journal name: ");
        name = Console.ReadLine();

        Console.Write("Enter journal release year: ");
        yearReleased = int.Parse(Console.ReadLine());

        Console.Write("Enter journal description: ");
        description = Console.ReadLine();

        Console.Write("Enter contact phone: ");
        phone = Console.ReadLine();

        Console.Write("Enter contact e-mail: ");
        email = Console.ReadLine();

        Console.WriteLine("Enter number of employees: ");
        NumberOfEmployees = int.Parse(Console.ReadLine());
    }

    public void printData()
    {
        Console.WriteLine("Journal name: " + name);
        Console.WriteLine("Journal year founded: " + yearReleased);
        Console.WriteLine("Journal description: " + description);
        Console.WriteLine("Journal contact phone: " + phone);
        Console.WriteLine("Journal contact e-mail: " + email);
        Console.WriteLine("Journal number of employees " + NumberOfEmployees);
    }

    public static Journal operator +(Journal journal, int count)
    {
        journal.NumberOfEmployees += count;
        return journal;
    }

    public static Journal operator -(Journal journal, int count)
    {
        journal.NumberOfEmployees -= count;
        return journal;
    }

    public static bool operator >(Journal journal1, Journal journal2)
    {
        return journal1.NumberOfEmployees > journal2.NumberOfEmployees;
    }

    public static bool operator <(Journal journal1, Journal journal2)
    {
        return journal1.NumberOfEmployees < journal2.NumberOfEmployees;
    }

    public static bool operator ==(Journal journal1, Journal journal2)
    {
        return journal1.Equals(journal2);
    }

    public static bool operator !=(Journal journal1, Journal journal2)
    {
        return !journal1.Equals(journal2);
    }

    public override bool Equals(object obj)
    {
        if (obj is Journal)
        {
            Journal? j = obj as Journal;
            return j.name == name && j.yearReleased == yearReleased && j.description == description && j.phone == phone
                && j.email == email && j.NumberOfEmployees == NumberOfEmployees;
        }

        return false;
    }
}

#endregion

#region Task2

Store store = new();

store.InputData();

Console.WriteLine();

store.DisplayData();

class Store
{
    public string? name { get; private set; }
    public string? address { get; private set; }
    public string? description { get; private set; }
    public string? phone { get; private set; }
    public string? email { get; private set; }

    public int storeAreas { get; set; }

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

    public static Store operator +(Store Store, int count)
    {
        Store.storeAreas += count;
        return Store;
    }

    public static Store operator -(Store Store, int count)
    {
        Store.storeAreas -= count;
        return Store;
    }

    public static bool operator >(Store Store1, Store Store2)
    {
        return Store1.storeAreas > Store2.storeAreas;
    }

    public static bool operator <(Store Store1, Store Store2)
    {
        return Store1.storeAreas < Store2.storeAreas;
    }

    public static bool operator ==(Store Store1, Store Store2)
    {
        return Store1.Equals(Store2);
    }

    public static bool operator !=(Store Store1, Store Store2)
    {
        return !Store1.Equals(Store2);
    }

    public override bool Equals(object obj)
    {
        if (obj is Store)
        {
            Store? s = obj as Store;
            return s.name == name && s.address == address && s.description == description && s.phone == phone
                && s.email == email && s.storeAreas == storeAreas;
        }

        return false;
    }
}

#endregion

#region Task3

public class Book
{
    public string Title { get; set; }
    public string Author { get; set; }

    public Book(string title, string author)
    {
        Title = title;
        Author = author;
    }

    public override string ToString()
    {
        return $"{Title} by {Author}";
    }
}

public class BookList
{
    private List<Book> books;

    public BookList()
    {
        books = new List<Book>();
    }

    public void AddBook(Book book)
    {
        books.Add(book);
    }

    public void RemoveBook(Book book)
    {
        books.Remove(book);
    }

    public bool ContainsBook(Book book)
    {
        return books.Contains(book);
    }

    public Book this[int index]
    {
        get
        {
            if (index >= 0 && index < books.Count)
            {
                return books[index];
            }
            else
            {
                throw new IndexOutOfRangeException("Index is out of range.");
            }
        }
    }

    public int Count
    {
        get { return books.Count; }
    }
}

#endregion