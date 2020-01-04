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
            char sp = ' ';
            string s = Console.ReadLine();
            string[] spstring;

            spstring = s.Split(sp);

            string x = new String(spstring[0].ToCharArray().Reverse().ToArray());
            string y = new String(spstring[1].ToCharArray().Reverse().ToArray());

            int a = int.Parse(x);
            int b = int.Parse(y);

            int c = a + b;

            string z = c.ToString();

            z = new String(z.ToCharArray().Reverse().ToArray());

            int d = int.Parse(z);

            Console.WriteLine(d);
        }
    }
}