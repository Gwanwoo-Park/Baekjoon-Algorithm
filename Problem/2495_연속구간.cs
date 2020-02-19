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
            int sum = 1;
            int max = 0;
            int pandan = 0;
            for(int i=0; i<3; i++)
            {
                s = Console.ReadLine();

                for (int j = 0; j < s.Length-1; j++)
                {
                    if (s[j].Equals(s[j+1]))
                    {
                        sum++;
                    }
                    else
                    {
                        pandan++;
                        if (sum >= max)
                        {
                            max = sum;
                        }
                        sum = 1;
                    }
                    if (s[6] == s[7] && sum >= max) max = sum;
                }

                if (pandan > 0)
                {
                    Console.WriteLine(max);
                }
                else Console.WriteLine(sum);
                max = 0;
                sum = 1;
                pandan = 0;
            }
        }
    }
}
