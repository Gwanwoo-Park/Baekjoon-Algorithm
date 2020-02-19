using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TEST
{
    class Program
    {
        static void Main(string[] args)
        {
            int N;
            int i, j, k;
            N = int.Parse(Console.ReadLine());
            for (i = 1; i <= N; i++)
            {
                for (k = N; k > i; k--)
                {
                    Console.Write(" ");
                }
                for (j = 1; j <= i; j++)
                {
                    Console.Write("*");
                }
                Console.Write("\n");
            }
        }
    }
}
