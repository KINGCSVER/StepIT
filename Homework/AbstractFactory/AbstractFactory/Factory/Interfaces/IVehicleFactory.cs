using AbstractVehicleFactory;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory.Factory.Interfaces;

interface IVehicleFactory
{
    IAbstractVehicle CreateSportsCar();
    IAbstractVehicle CreateTruck();
}