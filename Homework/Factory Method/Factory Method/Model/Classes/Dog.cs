using Factory_Method.Model.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Factory_Method.Model.Classes;

public class Dog : IAnimal
{
    public string GetDescription()
    {
        return "Dog: Loyal and playful companion.";
    }
}
