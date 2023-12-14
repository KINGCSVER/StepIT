using FlyWeight.Model.Classes;
using FlyWeight.Model.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FlyWeight;

class CoffeeFactory
{
    private Dictionary<string, ICoffee> coffeeMenu = new Dictionary<string, ICoffee>();

    public ICoffee GetCoffee(string coffeeType)
    {
        if (!coffeeMenu.ContainsKey(coffeeType))
        {
            coffeeMenu[coffeeType] = new Coffee(coffeeType);
        }

        return coffeeMenu[coffeeType];
    }
}
