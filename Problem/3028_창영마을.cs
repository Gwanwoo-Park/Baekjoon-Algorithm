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
            int a = 1, b = 0, c = 0;
            int tmp = 0;

            for (int i = 0; i < s.Length; i++)
            {    
                if (s[i] == 'A')
                {
                    tmp = a;
                    a = b;
                    b = tmp;
                }
                else if (s[i] == 'B')
                {
                    tmp = b;
                    b = c;
                    c = tmp;
                }
                else if (s[i] == 'C')
                {
                    tmp = c;
                    c = a;
                    a = tmp;
                }
            }
            if (a == 1) Console.WriteLine("1");
            else if (b == 1) Console.WriteLine("2");
            else Console.WriteLine("3");
        }
    }
}
