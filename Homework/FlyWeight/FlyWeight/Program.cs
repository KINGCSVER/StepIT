using FlyWeight;
using FlyWeight.Model.Interfaces;

CoffeeFactory coffeeFactory = new CoffeeFactory();

ICoffee espresso = coffeeFactory.GetCoffee("Espresso");
ICoffee latte = coffeeFactory.GetCoffee("Latte");
ICoffee cappuccino = coffeeFactory.GetCoffee("Cappuccino");

espresso.ServeCoffee("Alice");
latte.ServeCoffee("Bob");
cappuccino.ServeCoffee("Charlie");
