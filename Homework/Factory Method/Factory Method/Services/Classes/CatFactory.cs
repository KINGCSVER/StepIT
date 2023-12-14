using Factory_Method.Model.Classes;
using Factory_Method.Model.Interfaces;
using Factory_Method.Services.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Factory_Method.Services.Classes;

public class CatFactory : IAnimalFactory
{
    public IAnimal CreateAnimal()
    {
        return new Cat();
    }
}
