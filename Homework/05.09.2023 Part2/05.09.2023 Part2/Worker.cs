abstract class Worker
{
    public string name { get; init; }
    public string responsibilities { get; init; }

    public Worker(string name, string responsibilities)
    {
        this.name = name;
        this.responsibilities = responsibilities;
    }

    public abstract void Print();
}

class President : Worker
{
    public President(string name, string responsibilities) : base(name, responsibilities) { }

    public override void Print()
    {
        Console.WriteLine("President: " + name);

        Console.WriteLine("Responsibilities: \n" + responsibilities);
    }
}

class Guard : Worker
{
    public Guard(string name, string responsibilities) : base(name, responsibilities) { }

    public override void Print()
    {
        Console.WriteLine("Guard: " + name);

        Console.WriteLine("Responsibilities: \n" + responsibilities);
    }
}

class Manager : Worker
{
    public Manager(string name, string responsibilities) : base(name, responsibilities) { }

    public override void Print()
    {
        Console.WriteLine("Manager: " + name);

        Console.WriteLine("Responsibilities: \n" + responsibilities);
    }
}

class Engineer : Worker
{
    public Engineer(string name, string responsibilities) : base(name, responsibilities)
    {
    }

    public override void Print()
    {
        Console.WriteLine("Engineer: " + name);

        Console.WriteLine("Responsibilities: \n" + responsibilities);
    }
}