using System;
using AbstractFactory.Factory.Classes;
using AbstractFactory.Factory.Interfaces;
using AbstractVehicleFactory;

IVehicleFactory sportsVehicleFactory = new VehicleFactory();

IAbstractVehicle sportsCar = sportsVehicleFactory.CreateSportsCar();
IAbstractVehicle truck = sportsVehicleFactory.CreateTruck();

sportsCar.Drive();
sportsCar.VehicleInfo();

Console.WriteLine();

truck.Drive();
truck.VehicleInfo();