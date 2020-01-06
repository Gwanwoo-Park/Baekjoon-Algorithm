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
            String s = Console.ReadLine();

            int size = s.Length;

            char[] arr = new char[size];

            for (int i = 0; i < s.Length; i++)
            {
                arr[i] = s.ElementAt(i);
            }

            Array.Sort(arr);

            for (int i = s.Length - 1; i >= 0; i--) Console.Write(arr[i]);
        }
    }
}