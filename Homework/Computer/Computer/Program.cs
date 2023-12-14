using Computer.Entities;
using Computer.Services.Classes;
using Computer.Services.Interfaces;

IComputerBuilder builder = new ComputerBuilder();

Director director = new Director(builder);

PC gamingPC = director.BuildGamingComputer();
PC designPC = director.BuildDesignComputer();
PC officePC = director.BuildOfficeComputer();

gamingPC.Show();
designPC.Show();
officePC.Show(); 