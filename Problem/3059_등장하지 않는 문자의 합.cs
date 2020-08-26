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
            int[] alp;
            int sum = 0;

            for (int i = 0; i < t; i++)
            {
                string s = Console.ReadLine();

                alp = new int[26];

                for (int j = 0; j < s.Length; j++)
                {
                    alp[s[j] - 'A']++;
                }
                for (int j = 0; j < 26; j++)
                {
                    if (alp[j] == 0)
                    {
                        sum += j + 'A';
                    }
                }
                Console.WriteLine(sum);
                sum = 0;
            }
        }
    }
}
