using Computer.Entities;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Computer.Services.Interfaces;

interface IComputerBuilder
{
    public PC ComputerToBuild { get; set; }
    public void SetCPU(string name, int cores, float clock);
    public void SetGPU(string name, int memmory);
    public void SetRAM(string name, int speed, int capacity);
}
