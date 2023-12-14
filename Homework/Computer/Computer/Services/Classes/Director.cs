using Computer.Entities;
using Computer.Services.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.ConstrainedExecution;
using System.Text;
using System.Threading.Tasks;

namespace Computer.Services.Classes;
class Director
{
    private readonly IComputerBuilder builder;

    public Director(IComputerBuilder builder)
    {
        this.builder = builder;
    }

    public PC BuildGamingComputer()
    {
        builder.SetCPU("i7-12700F", 12, 4.9f);
        builder.SetGPU("NVIDIA® GeForce RTX™ 4070 Ti", 12);
        builder.SetRAM("Kingston ValueRAM", 3200, 16);

        return builder.ComputerToBuild;
    }

    public PC BuildDesignComputer()
    {
        builder.SetCPU("i9-11900F", 8, 2.5f);
        builder.SetGPU("GeForce RTX™ 4060", 8);
        builder.SetRAM("Corsair Vengeance", 5200 , 64);

        return builder.ComputerToBuild;
    }

    public PC BuildOfficeComputer()
    {
        builder.SetCPU("i5-12600F", 6, 3.0f);
        builder.SetGPU("Intel UHD Graphics 730", 64);
        builder.SetRAM("Kingston FURY", 3200, 16);

        return builder.ComputerToBuild;
    }
}
