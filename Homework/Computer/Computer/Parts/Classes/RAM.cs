using Computer.Parts.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Computer.Parts.Classes;

class RAM : IPart
{
    public string Name { get; set; }
    public int Speed { get; set; }
    public int Capacity { get; set; }
}
