MathOperation operation = Calculator.Add;

Console.WriteLine(Calculator.Calculate(operation, 3, 4));

operation = Calculator.Subtract;

Console.WriteLine(Calculator.Calculate(operation, 8, 5));

operation = Calculator.Multiply;

Console.WriteLine(Calculator.Calculate(operation, 3, 3));

operation = Calculator.Divide;

Console.WriteLine(Calculator.Calculate(operation, 6, 2));

delegate double MathOperation(double num1, double num2);

class Calculator
{
    public static double Add(double num1, double num2)
    {
        return num1 + num2;
    }

    public static double Subtract(double num1, double num2)
    {
        return num1 - num2;
    }

    public static double Multiply(double num1, double num2)
    {
        return num1 * num2;
    }

    public static double Divide(double num1, double num2)
    {
        return num1 / num2;
    }

    public static double Calculate(MathOperation Operation, double num1, double num2)
    {
        return Operation(num1, num2);
    }
}