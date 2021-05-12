using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Test
{
    class Program
    {
        static void Main(string[] args)
        {
            char sp = ' ';

            string text = Console.ReadLine();

            string[] spstr = text.Split(sp);

            long a = long.Parse(spstr[0]);
            long b = long.Parse(spstr[1]);

            if (a > b)
            {
                Console.WriteLine(a - b - 1);

                for (long i = b + 1; i < a; i++)
                {
                    Console.Write(i + " ");
                }
                Console.WriteLine();
            }
            else if (b > a)
            {
                Console.WriteLine(b - a - 1);

                for (long i = a + 1; i < b; i++)
                {
                    Console.Write(i + " ");
                }
                Console.WriteLine();
            }
            else
            {
                Console.WriteLine("0");
            }
        }
    }
}
