class Device
{
    private string name;
    private string description;

    public Device(string name, string description)
    {
        this.name = name;
        this.description = description;
    }

    public void Sound()
    {
        Console.WriteLine(name + " emits a device sound");
    }

    public void Show()
    {
        Console.WriteLine("Device: " + name);
    }

    public void Desc()
    {
        Console.WriteLine("Device description: " + description);
    }
}

class Kettle : Device
{
    public Kettle(string name, string description) : base(name, description) { }
}

class Microwave : Device
{
    public Microwave(string name, string description) : base(name, description) { }
}

class Car : Device
{
    public Car(string name, string description) : base(name, description) { }
}

class Ship : Device
{
    public Ship(string name, string description) : base(name, description) { }
}