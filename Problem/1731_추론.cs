using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Test
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int[] data = new int[51];
            for (int i = 0; i < n; i++)
            {
                data[i] = int.Parse(Console.ReadLine());
            }

            if (data[1] - data[0] == data[2] - data[1])
            {
                Console.WriteLine(data[n - 1] + (data[1] - data[0]));
            }
            else
            {
                Console.WriteLine(data[n - 1] * (data[1] / data[0]));
            }
        }
    }
}