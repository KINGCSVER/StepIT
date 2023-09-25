Array numbers = new();

numbers.Add(1);
numbers.Add(2);
numbers.Add(3);
numbers.Add(1);

Console.WriteLine(numbers.CountDistinct());
Console.WriteLine(numbers.EqualToValue(4));

public interface ICalc2
{
    int CountDistinct();
    int EqualToValue(int valueToCompare);
}


class Array : ICalc2
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

    public int CountDistinct()
    {
        int unique = 0;

        foreach (int i in numbers)
        {
            int tempUnique = 0;

            foreach (int j in numbers)
            {
                if (j == i)
                {
                    tempUnique++;
                }
            }

            if (tempUnique == 1)
            {
                unique++;
            }
        }

        return unique;
    }

    public int EqualToValue(int valueToCompare)
    {
        int count = 0;

        foreach (int item in numbers)
        {
            if (item == valueToCompare)
            {
                count++;
            }
        }

        return count;
    }
}