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
            int n = int.Parse(Console.ReadLine());
            int good = 0;
            int bad = 0;
            for (int i = 0; i < n; i++)
            {
                string s = Console.ReadLine();
                good = 0;
                bad = 0;
                for (int j = 0; j < s.Length; j++)
                {
                    if (s[j] == 'g' || s[j] == 'G')
                    {
                        good++;
                    }
                    else if (s[j] == 'b' || s[j] == 'B')
                    {
                        bad++;
                    }
                }
                if (good > bad) Console.WriteLine(s + " is GOOD");
                else if (good < bad) Console.WriteLine(s + " is A BADDY");
                else Console.WriteLine(s + " is NEUTRAL");
            }
        }
    }
}
