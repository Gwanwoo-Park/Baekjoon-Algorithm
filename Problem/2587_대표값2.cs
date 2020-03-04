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
            int[] a = new int[5];
            int sum = 0;
            int ave = 0;

            for (int i = 0; i < 5; i++)
            {
                a[i] = int.Parse(Console.ReadLine());

                sum += a[i];
            }
            ave = sum / 5;

            Array.Sort(a);

            Console.WriteLine(ave + "\n" + a[2]);
        }
    }
}
