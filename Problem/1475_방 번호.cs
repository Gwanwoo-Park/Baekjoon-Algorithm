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
            int result = 0;
            int[] num = new int[10];
            int sum1 = 0, sum2 = 0;
            int max = 0;

            for (int i = 0; i < s.Length; i++)
            {
                num[s[i] - '0']++;
            }

            for (int i = 0; i < 10; i++)
            {
                if (i == 6 || i == 9) continue;
                if (max < num[i])
                {
                    max = num[i];
                }
            }
            int a = num[6] + num[9];
            if (a % 2 != 0)
            {
                if (max < a / 2 + 1) max = a / 2 + 1;
            }
            else
            {
                if (max < a / 2) max = a / 2;
            }
            Console.WriteLine(max);
        }
    }
}