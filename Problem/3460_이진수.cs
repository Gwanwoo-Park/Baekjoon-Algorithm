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
            
            for (int i = 0; i < t; i++)
            {
                int a = int.Parse(Console.ReadLine());

                string s = "";

                while (true)
                {
                    if (a == 1)
                    {
                        s = s + "1";
                        break;
                    }
                    if (a % 2 == 0)
                    {
                        s = s + "0";
                    }
                    else s = s + "1";
                    a = a / 2;
                }
                for (int j = 0; j < s.Length; j++)
                {
                    if (s[j] == '1') Console.Write(j + " ");
                }
                Console.WriteLine();
            }
        }
    }
}
