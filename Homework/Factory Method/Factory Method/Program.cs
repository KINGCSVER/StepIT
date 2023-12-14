using System;
using Factory_Method.Model.Interfaces;
using Factory_Method.Services.Classes;
using Factory_Method.Services.Interfaces;

IAnimalFactory dogFactory = new DogFactory();
IAnimalFactory catFactory = new CatFactory();
IAnimalFactory elephantFactory = new ElephantFactory();

IAnimal dog = dogFactory.CreateAnimal();
IAnimal cat = catFactory.CreateAnimal();
IAnimal elephant = elephantFactory.CreateAnimal();

Console.WriteLine(dog.GetDescription());
Console.WriteLine(cat.GetDescription());
Console.WriteLine(elephant.GetDescription());

