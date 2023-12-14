using AbstractVehicleFactory;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory.Model.Classes;

class SportsCar : IAbstractVehicle
{
    public string Type = "Sports Car";
    public string Color = "Red";
    public int Horsepower = 500;

    public void Drive()
    {
        Console.WriteLine("Driving a fast sports car!");
    }

    public void VehicleInfo()
    {
        Console.WriteLine($"Type: {Type}, Color: {Color}, Horsepower: {Horsepower}hp");
    }
}