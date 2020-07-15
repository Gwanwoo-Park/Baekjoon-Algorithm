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
            StringBuilder sb = new StringBuilder();
           
            string a = Console.ReadLine();
            string operand = Console.ReadLine();
            string b = Console.ReadLine();

            string max;
            string min;

            if (a.Length >= b.Length)
            {
                max = a;
                min = b;
            }
            else
            {
                max = b;
                min = a;
            }

            if (operand == "+")
            {
                sb.Append(max);
                sb[max.Length - min.Length]++;
                Console.WriteLine(sb);
            }
            else
            {
                for (int i = 0; i < min.Length - 1; i++) max += "0";
                Console.WriteLine(max);
            }
        }
    }
}
