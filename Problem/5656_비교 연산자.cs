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
            string s;
            char sp = ' ';
            string[] spst;
            int a, b;
            int count=0;

            while (true)
            {
                s = Console.ReadLine();

                spst = s.Split(sp);

                a = int.Parse(spst[0]);
                b = int.Parse(spst[2]);

                if (spst[1] == "E") break;
                
                count++;

                Console.Write("Case {0}: ", count); 
                
                if (spst[1] == ">")
                {
                    if (a > b) Console.WriteLine("true");
                    else Console.WriteLine("false");
                }
                else if (spst[1] == ">=")
                {
                    if (a >= b) Console.WriteLine("true");
                    else Console.WriteLine("false");
                }
                else if (spst[1] == "<")
                {
                    if (a < b) Console.WriteLine("true");
                    else Console.WriteLine("false");
                }
                else if (spst[1] == "<=")
                {
                    if (a <= b) Console.WriteLine("true");
                    else Console.WriteLine("false");
                }
                else if (spst[1] == "==")
                {
                    if (a == b) Console.WriteLine("true");
                    else Console.WriteLine("false");
                }
                else
                {
                    if (a != b) Console.WriteLine("true");
                    else Console.WriteLine("false");
                }
            }
        }
    }
}
