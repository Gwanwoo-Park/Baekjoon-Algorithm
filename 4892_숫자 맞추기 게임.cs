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
            int casenumber = 1;

            while (true)
            {
                int n0 = int.Parse(Console.ReadLine());
                if (n0 == 0) break;
                int n1 = 3 * n0;
                int n2;
                int final;
                if (n1 % 2 == 0)
                {
                    n2 = n1 / 2;
                }
                else
                {
                    n2 = (n1 + 1) / 2;
                }

                int n3 = 3 * n2;
                int n4 = n3 / 9;
                if (n1 % 2 == 0)
                {
                    final = 2 * n4;
                    Console.WriteLine(casenumber + ". even " + n4);
                    casenumber++;
                }
                else
                {
                    final = 2 * n4 + 1;
                    Console.WriteLine(casenumber + ". odd " + n4);
                    casenumber++;
                }
            }
        }
    }
}
