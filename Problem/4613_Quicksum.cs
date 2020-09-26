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
            while (true)
            {
                string s = Console.ReadLine();
                int sum = 0;

                if (s[0] == '#') break;

                for (int i = 0; i < s.Length; i++)
                {
                    if (s[i] >= 'A' && s[i] <= 'Z')
                    {
                        sum += (i + 1) * (s[i] - 'A' + 1);
                    }
                }
                Console.WriteLine(sum);
            }
        }
    }
}
