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
            string[] spstring;
            char sp = ' ';
            string s;

            for (int i = 0; i < t; i++)
            {
                s = Console.ReadLine();

                spstring = s.Split(sp);

                for (int j = 0; j < spstring[1].Length; j++)
                {
                    if (j + 1 == int.Parse(spstring[0])) continue;
                    Console.Write(spstring[1][j]);
                }
                Console.WriteLine();
            }
        }
    }
}
