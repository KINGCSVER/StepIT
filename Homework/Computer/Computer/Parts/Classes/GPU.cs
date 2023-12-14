using Computer.Parts.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Computer.Parts.Classes;

class GPU : IPart
{
    public string Name { get; set; }
    public int Memory { get; set; }
}
