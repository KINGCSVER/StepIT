Array numbers = new();

numbers.Add(1);
numbers.Add(2);
numbers.Add(3);

numbers.ShowEven();
numbers.ShowOdd();

public interface IOutput2
{
    void ShowEven();
    void ShowOdd();
}

class Array : IOutput2
{
    private List<int> numbers = new();

    public void Add(int Value)
    {
        numbers.Add(Value);
    }

    public void Remove(int value)
    {
        numbers.Remove(value);
    }

    public void ShowEven()
    {
        foreach (int item in numbers)
        {
            if (item % 2 == 0)
            {
                Console.WriteLine(item);
            }
        }
    }

    public void ShowOdd()
    {
        foreach (int item in numbers)
        {
            if (item % 2 != 0)
            {
                Console.WriteLine(item);
            }
        }
    }
}