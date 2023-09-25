public class Money
{
    public int dollars { get; private set; }
    public int cents { get; private set; }

    public Money(int dollars, int cents)
    {
        this.dollars = dollars;
        this.cents = cents;
    }

    public void Print()
    {
        Console.WriteLine("Money: " + dollars + '.' + cents);
    }

    public void SetAmount(int dollars, int cents)
    {
        this.dollars = dollars;
        this.cents = cents;
    }
}

public class Product
{
    public string name { get; private set; }
    public Money price { get; }

    public Product(string name, Money price)
    {
        this.name = name;
        this.price = price;
    }

    public void ReducePrice(int dollars, int cents)
    {
        int tempDollar = price.dollars;
        int tempCents = price.cents;


        tempDollar -= dollars;
        tempCents -= cents;

        if (tempCents < 0)
        {
            tempDollar -= 1;
            tempCents += 100;
        }

        price.SetAmount(tempDollar, tempCents);
    }

    public void AddToPrice(int dollars, int cents)
    {
        int tempDollar = price.dollars;
        int tempCents = price.cents;

        tempDollar += dollars;
        tempCents += cents;

        if (tempCents >= 100)
        {
            tempDollar += tempCents / 100;
            tempCents %= 100;
        }

        price.SetAmount(tempDollar, tempCents);
    }
}