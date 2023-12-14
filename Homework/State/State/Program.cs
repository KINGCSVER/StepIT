using State.Entity;
using State.Services.Classes;

var character = new Character();

character.DescribeWeather();
Console.WriteLine();

character.ChangeWeather(new CloudyState());
character.DescribeWeather();
Console.WriteLine();

character.ChangeWeather(new RainyState());
character.DescribeWeather();
Console.WriteLine();