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
            string a = Console.ReadLine();
            string b = Console.ReadLine();
            char[] a1 = new char[a.Length];
            char[] b1 = new char[b.Length];
            int sum = 0;

            for (int i = 0; i < a.Length; i++)
            {
                a1[i] = a[i];
            }
            for (int i = 0; i < b.Length; i++)
            {
                b1[i] = b[i];
            }
            Array.Sort(a1); Array.Sort(b1);

            for (int i = 0; i < a.Length; i++)
            {
                for (int j = 0; j < b.Length; j++)
                {
                    if (a1[i] == b1[j])
                    {
                        a1[i] = (char)124;
                        b1[j] = (char)124;
                        break;
                    }
                }
            }
            Array.Sort(a1);
            Array.Sort(b1);

            for (int i = 0; a1[i] != 124; i++)
            {
                sum++;
            }
            for (int i = 0; b1[i] != 124; i++)
            {
                sum++;
            }
            Console.WriteLine(sum);
        }
    }
}