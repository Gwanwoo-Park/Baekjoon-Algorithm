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
            int[] arr;
            int sum=0;

            for (int i = 0; i < t; i++)
            {
                arr = new int[10];

                string s = Console.ReadLine();

                for (int j = 0; j < s.Length; j++)
                {
                    arr[s[j] - '0']++;
                }

                for (int j = 0; j < 10; j++)
                {
                    if (arr[j] != 0) sum++;
                }
                Console.WriteLine(sum);
                sum = 0;
            }
        }
    }
}
