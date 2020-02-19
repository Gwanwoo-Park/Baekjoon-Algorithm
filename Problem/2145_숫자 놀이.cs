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
            int sum = 0;

            while (true)
            {
                s = Console.ReadLine();

                if (s == "0") break;

                while (true)
                {
                    for (int i = 0; i < s.Length; i++)
                    {
                        sum += s[i] - '0';
                    }
                    if (sum < 10)
                    {
                        break;
                    }
                    else
                    {
                        s = sum.ToString();
                        sum = 0;
                    }
                }
                Console.WriteLine(sum);
                sum = 0;
            }
        }
    }
}
