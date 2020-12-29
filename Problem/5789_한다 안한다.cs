using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LL
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());

            for (int i = 0; i < t; i++)
            {
                string s = Console.ReadLine();

                if (s[s.Length / 2 - 1] == s[s.Length / 2])
                {
                    Console.WriteLine("Do-it");
                }
                else Console.WriteLine("Do-it-Not");
            }
        }
    }
}
