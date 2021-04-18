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
            string bi;
            int sum = 0;
            int pandan = 0;
            string result = "";
            int p = 0;

            int n = int.Parse(Console.ReadLine());

            for (int i = 0; i < n; i++)
            {
                bi = Console.ReadLine();

                for (int j = 0; j < bi.Length; j++)
                {
                    if ((s[j] >= '0' && s[j] <= '9') || (s[j] >= 'A' && s[j] <= 'Z'))
                    {
                        if (s[j] != bi[j])
                        {
                            pandan++;
                            break;
                        }
                    }
                }
                if (pandan == 0)
                {
                    result += String.Concat(bi) + "\n";
                    p++;
                    sum++;
                }
                pandan = 0;
            }
            Console.WriteLine(sum);

            if (sum != 0)
            {
                result = result.Substring(0, result.Length - 1);

                Console.WriteLine(result);
            }
        }
    }
}
