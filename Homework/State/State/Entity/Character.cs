using State.Services.Classes;
using State.Services.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace State.Entity;

public class Character
{
    private IWeatherState weatherState;

    public Character()
    {
        weatherState = new SunnyState(); 
    }

    public void DescribeWeather()
    {
        weatherState.DescribeWeather();
    }

    public void ChangeWeather(IWeatherState newWeatherState)
    {
        weatherState = newWeatherState;
    }
}
