using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.ConstrainedExecution;
using System.Text;
using System.Threading.Tasks;
using Computer.Entities;
using Computer.Parts.Classes;
using Computer.Services.Interfaces;

namespace Computer.Services.Classes;
class ComputerBuilder : IComputerBuilder
{
    public PC ComputerToBuild { get; set; }

    public ComputerBuilder()
    {
        ComputerToBuild = new PC();
    }

    public void SetCPU(string name, int cores, float clock)
    {
        ComputerToBuild.Parts.Add(new CPU()
        {
            Name = name,
            Clock = clock,
            Cores = cores
        });
    }

    public void SetGPU(string name, int memmory)
    {
        ComputerToBuild.Parts.Add(new GPU()
        {
            Name = name,
            Memory = memmory
        });
    }

    public void SetRAM(string name, int speed, int capacity)
    {
        ComputerToBuild.Parts.Add(new RAM()
        {
            Name = name,
            Speed = speed,
            Capacity = capacity
        });
    }
}
