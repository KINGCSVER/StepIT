using FlyWeight.Model.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FlyWeight.Model.Classes;

class Coffee : ICoffee
{
    private string coffeeType;

    public Coffee(string coffeeType)
    {
        this.coffeeType = coffeeType;
    }

    public void ServeCoffee(string customerName)
    {
        Console.WriteLine($"Serving {coffeeType} coffee to {customerName}.");
    }
}
