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
            int n = int.Parse(Console.ReadLine());
            string s;
            int pandan = 0;
            int sum = 0;
            int[] alp;
            int top = 0;

            for (int i = 0; i < n; i++)
            {
                s = Console.ReadLine();

                alp = new int[26];

                for (int j = 0; j < s.Length - 1; j++)
                {
                    if (s[j] != s[j + 1])
                    {
                        top = j + 1;
                        alp[s[j] - 'a']++;
                        break;
                    }
                }

                for (int j = top; j < s.Length - 1; j++)
                {
                    alp[s[j] - 'a']++;

                    if (s[j] == s[j + 1]) continue;

                    if (alp[s[j + 1] - 'a'] > 0)
                    {
                        pandan++;
                        break;
                    }
                }
                if (pandan == 0) sum++;
                pandan = 0;

            }
            Console.WriteLine(sum);
        }
    }
}