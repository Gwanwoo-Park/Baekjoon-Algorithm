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
            string s = Console.ReadLine();
            char sp = ' ';
            string[] spstring;

            spstring = s.Split(sp);
            int a, b;

            Array.Sort(spstring);
            Array.Reverse(spstring);

            string max = spstring[0].ToString();
            string min = spstring[1].ToString();

            max = max.Replace("6", "5");
            min = min.Replace("6", "5");

            Console.Write(int.Parse(max) + int.Parse(min) + " ");

            max = max.Replace("5", "6");
            min = min.Replace("5", "6");

            Console.WriteLine(int.Parse(max) + int.Parse(min));
        }
    }
}
