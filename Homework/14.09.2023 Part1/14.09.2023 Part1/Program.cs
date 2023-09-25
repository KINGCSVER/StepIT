﻿BankAccount account = new("BirBank", 100);

account.AccountOperation = BankAccountOperation.Actions.IncreaseBalance;

account.Deposit(50);

account.DisplayBalance();

account.AccountOperation = BankAccountOperation.Actions.DecreaseBalance;

try
{
    account.Withdraw(167);
}
catch (Exception e)
{
    Console.WriteLine(e.Message);
}

account.DisplayBalance();

class BankAccount
{
    public string AccountName;
    public double Balance { get; set; }
    public Func<double, double, double> AccountOperation { get; set; }

    public BankAccount(string accountName, double balance)
    {
        this.AccountName = accountName;
        this.Balance = balance;
    }

    public void Deposit(double amount)
    {
        this.Balance = AccountOperation(amount, this.Balance);
    }

    public void Withdraw(double amount)
    {
        this.Balance = AccountOperation(amount, this.Balance);
    }

    public void DisplayBalance()
    {
        Console.WriteLine("Current balance: " + this.Balance);
    }
}