using State.Services.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace State.Services.Classes;

public class SunnyState : IWeatherState
{
    public void DescribeWeather()
    {
        Console.WriteLine("It's a sunny day ☀");
    }
}
