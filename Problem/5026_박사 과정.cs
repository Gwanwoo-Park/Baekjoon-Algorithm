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

                if (s[0] == 'P')
                {
                    Console.WriteLine("skipped");
                    continue;
                }

                char sp = '+';
                string[] spst;
                spst = s.Split(sp);

                int result = int.Parse(spst[0]) + int.Parse(spst[1]);
                Console.WriteLine(result);
            }
        }
    }
}
