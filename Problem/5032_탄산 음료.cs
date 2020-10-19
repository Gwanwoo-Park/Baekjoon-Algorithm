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
            string s = Console.ReadLine();

            string[] spstring = s.Split(sp);

            int e = int.Parse(spstring[0]);
            int f = int.Parse(spstring[1]);
            int c = int.Parse(spstring[2]);

            int sum = 0;
            int hap=e+f;

            while (hap/c!=0)
            {
                sum = sum + hap / c;
                hap = hap / c + hap%c;
            }
            Console.WriteLine(sum);
        }
    }
}
