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
            string s;
            char sp = ' ';
            string[] spstring = new string[10];

            for (int i = 0; i < t; i++)
            {
                int[] arr = new int[10];

                s = Console.ReadLine();

                spstring = s.Split(sp);

                for (int j = 0; j < 10; j++) arr[j] = int.Parse(spstring[j]);

                Array.Sort(arr);
                Array.Reverse(arr);

                Console.WriteLine(arr[2]);
            }
        }
    }
}
