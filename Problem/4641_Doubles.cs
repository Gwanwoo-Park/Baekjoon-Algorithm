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
                char sp = ' ';
                string[] spst;
                string s = Console.ReadLine();
                spst = s.Split(sp);
                
                int sum = 0;

                if(s[0] == '-') break;

                for (int i = 0; i < spst.Length - 1; i++)
                {
                    for (int j = 0; j < spst.Length - 1; j++)
                    {
                        if (int.Parse(spst[i]) * 2 == int.Parse(spst[j]))
                        {
                            sum++;
                            break;
                        }
                    }
                }
                Console.WriteLine(sum);

            }
        }
    }
}
