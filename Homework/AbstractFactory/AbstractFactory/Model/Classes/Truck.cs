using AbstractVehicleFactory;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory.Model.Classes;

class Truck : IAbstractVehicle
{
    public string Type = "Truck";
    public string Color = "Blue";
    public int Capacity = 10000;

    public void Drive()
    {
        Console.WriteLine("Driving a heavy-duty truck!");
    }

    public void VehicleInfo()
    {
        Console.WriteLine($"Type: {Type}, Color: {Color}, Capacity: {Capacity}kg");
    }
}