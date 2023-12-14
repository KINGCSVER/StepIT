using Proxy.Services.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Proxy.Services.Classes;

public class FileAccessProxy : IFileAccess
{
    private PublicFile publicFile;
    private string filename;

    public FileAccessProxy(string filename)
    {
        this.filename = filename;
    }

    public void Display()
    {
        if (publicFile == null)
        {
            publicFile = new PublicFile(filename);
        }

        Console.WriteLine("FileAccessProxy: Checking access control before displaying.");

        publicFile.Display();
    }
}
