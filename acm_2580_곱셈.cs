using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System.Threading;
using System.IO;

using System.Collections.Generic;
using System.Linq;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            char[] c = b.ToString().ToCharArray();

            for(int i = 0;i < c.Length; i++)
            {
                Console.WriteLine(a * int.Parse(c[c.Length - 1 - i].ToString()));
            }
            Console.WriteLine(a * b);
        }
    }
}