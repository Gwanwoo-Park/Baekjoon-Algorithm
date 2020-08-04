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

            while (true)
            {
                if (s.Length % 3 == 0) break;

                s = "0" + s;
            }

            while (true)
            {
                if (s.Substring(0, 3).Equals("000"))
                {
                    Console.Write("0");
                }
                else if (s.Substring(0, 3).Equals("001"))
                {
                    Console.Write("1");
                }
                else if (s.Substring(0, 3).Equals("010"))
                {
                    Console.Write("2");
                }
                else if (s.Substring(0, 3).Equals("011"))
                {
                    Console.Write("3");
                }
                else if (s.Substring(0, 3).Equals("100"))
                {
                    Console.Write("4");
                }
                else if (s.Substring(0, 3).Equals("101"))
                {
                    Console.Write("5");
                }
                else if (s.Substring(0, 3).Equals("110"))
                {
                    Console.Write("6");
                }
                else if (s.Substring(0, 3).Equals("111"))
                {
                    Console.Write("7");
                }
                if (s.Length == 3) break;
                s = s.Substring(3);
            }
            Console.WriteLine();
        }
    }
}
