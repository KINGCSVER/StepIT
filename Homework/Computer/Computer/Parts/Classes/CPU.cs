using Computer.Parts.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Computer.Parts.Classes;

class CPU : IPart
{
    public string Name { get; set; }
    public int Cores { get; set; }
    public float Clock { get; set; }

}
