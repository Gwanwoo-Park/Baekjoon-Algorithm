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
            int max=0;
            char sp = ' ';
            string[] spst = new string[100];

            int pandan = 0;
            spst = s.Split(sp);

            int n = int.Parse(spst[0]);
            int m = int.Parse(spst[1]);

            s = Console.ReadLine();

            spst = s.Split(sp);

            Array.Sort(spst);
            Array.Reverse(spst);

            
            for (int i = 0; i < n-2; i++)
            {
                for (int j = i + 1; j < n - 1; j++)
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        if (int.Parse(spst[i]) + int.Parse(spst[j]) + int.Parse(spst[k]) <= m)
                        {
                            if (int.Parse(spst[i]) + int.Parse(spst[j]) + int.Parse(spst[k]) > max)
                            {
                                max = int.Parse(spst[i]) + int.Parse(spst[j]) + int.Parse(spst[k]);
                                break;
                            }
                        }
                    }
                }
            }
            Console.WriteLine(max);
        }
    }
}
