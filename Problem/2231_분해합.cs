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
            int sum = 0;
            int pandan = 0;
            string tmp;

            for (int i = 1; i < int.Parse(s); i++)
            {
                sum = sum + i;
                tmp = sum.ToString();
                for (int j = 0; j < tmp.Length; j++)
                {
                    sum = sum + tmp[j] - '0';
                }
                if (sum == int.Parse(s))
                {
                    Console.WriteLine(i);
                    pandan++;
                    break;
                }
                sum = 0;
            }
            if (pandan == 0) Console.WriteLine("0");
        }
    }
}
