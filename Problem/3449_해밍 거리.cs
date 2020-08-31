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
            int t = int.Parse(Console.ReadLine());
            string s1;
            string s2;
            int sum = 0;

            for (int i = 0; i < t; i++)
            {
                s1 = Console.ReadLine();
                s2 = Console.ReadLine();

                for (int j = 0; j < s1.Length; j++)
                {
                    if (s1[j] != s2[j]) sum++;
                }
                Console.WriteLine("Hamming distance is " + sum + ".");
                sum = 0;
            }
        }
    }
}
