using Proxy.Services.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Proxy.Services.Classes;

public class PublicFile : IFileAccess
{
    private string filename;

    public PublicFile(string filename)
    {
        this.filename = filename;
        LoadFile();
    }

    private void LoadFile()
    {
        Console.WriteLine($"Loading public file: {filename}");
    }

    public void Display()
    {
        Console.WriteLine($"Displaying public file: {filename}");
    }
}