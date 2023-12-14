using AbstractFactory.Factory.Interfaces;
using AbstractFactory.Model.Classes;
using AbstractVehicleFactory;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory.Factory.Classes;

class VehicleFactory : IVehicleFactory
{
    public IAbstractVehicle CreateSportsCar()
    {
        return new SportsCar();
    }

    public IAbstractVehicle CreateTruck()
    {
        return new Truck();
    }
}