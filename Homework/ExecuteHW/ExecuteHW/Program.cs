using System.Data.SqlClient;
using Microsoft.Extensions.Configuration;

var builder = new ConfigurationBuilder();
builder.AddJsonFile("appsettings.json");

var config = builder.Build();
using SqlConnection conn = new(config.GetConnectionString("Default"));

conn.Open();

var command = new SqlCommand("select count(*) from Groups", conn);
{
    int res = (int)command.ExecuteScalar();

    Console.WriteLine($"Count of groups {res}");
}

command = new SqlCommand("select max(Salary) from Teachers", conn);
{
    decimal res = (decimal)command.ExecuteScalar();

    Console.WriteLine($"Maximum salary on the teacher list {res}");
}

command = new SqlCommand("select sum(Financing) from Departments", conn);
{
    decimal res = (decimal)command.ExecuteScalar();

    Console.WriteLine($"Summary of all sponsored departments {res}");
}

 command = new SqlCommand("insert into Departments(Financing, Name) values(20000, N'MIT')", conn);
 {
     var res = command.ExecuteNonQuery();
     
     Console.WriteLine($"Rows added {res}");
 }
 
 command = new SqlCommand("delete from Departments where Financing = 20000", conn);
 {
     var res = command.ExecuteNonQuery();
     
     Console.WriteLine($"Rows deleted {res}");
 }
 
 command = new SqlCommand("update Groups set Rating = Rating + 1 where Name = N'848a'", conn);
 {
     var res = command.ExecuteNonQuery();
     
     Console.WriteLine($"Rows updated {res}");
 }