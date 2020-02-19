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
            string s;
            int sum = 0;
            while (true)
            {
                s = Console.ReadLine();

                if (s[0] == '#') break;

                s = s.ToLower();
                
                for (int i = 1; i < s.Length; i++)
                {
                    if (s[0] == s[i])
                    {
                        sum++;
                    }
                }
                Console.WriteLine(s[0] + " " +sum);
                sum = 0;
            }
        }
    }
}
