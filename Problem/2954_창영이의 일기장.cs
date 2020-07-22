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
            int p = 0;

            while (true)
            {
                if (p >= s.Length) break;
                if (s[p] != 'a' && s[p] != 'e' && s[p] != 'i' && s[p] != 'o' && s[p] != 'u')
                {
                    Console.Write(s[p]);
                    p++;
                }
                else
                {
                    Console.Write(s[p]);
                    p = p + 3;
                }
            }
            Console.WriteLine();
        }
    }
}
