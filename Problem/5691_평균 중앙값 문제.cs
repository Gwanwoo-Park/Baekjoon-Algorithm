using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TEST
{
    class Program
    {
        static void Main(string[] args)
        {
            char sp = ' ';
            string s = "";
            string[] spstring = new string[100];
            int c;
            int a, b;
            int max;

            while (true)
            {
                s = Console.ReadLine();

                spstring = s.Split(sp);

                a = int.Parse(spstring[0]);
                b = int.Parse(spstring[1]);

                if (a == 0 && b == 0) break;

                Console.WriteLine(a - (b - a));
            }
        }
    }
}
