﻿Array numbers = new();

numbers.Add(1);
numbers.Add(2);
numbers.Add(3);

Console.WriteLine(numbers.Less(5));
Console.WriteLine(numbers.Greater(3));

public interface ICalc
{
    public int Less(int valueToCompare);

    int Greater(int valueToCompare);
}

class Array : ICalc
{
    private List<int> Numbers = new();

    public void Add(int Value)
    {
        Numbers.Add(Value);
    }

    public void Remove(int value)
    {
        Numbers.Remove(value);
    }

    public int Less(int ValueToCompare)
    {
        int count = 0;

        foreach (int item in Numbers)
        {
            if (item < ValueToCompare)
            {
                count++;
            }
        }

        return count;
    }

    public int Greater(int valueToCompare)
    {
        int count = 0;

        foreach (int item in Numbers)
        {
            if (item > valueToCompare)
            {
                count++;
            }
        }

        return count;
    }
}