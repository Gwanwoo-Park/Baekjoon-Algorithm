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
            char[] arr = new char[26];

            for (int i = 0; i < t; i++)
            {
                s = Console.ReadLine();

                string alp = Console.ReadLine();

                for (int j = 0; j < 26; j++)
                {
                    arr[j] = alp[j];
                }

                
                for (int j = 0; j < s.Length; j++)
                {
                    if (s[j] == ' ')
                    {
                        Console.Write(" ");
                        continue;
                    }
                    Console.Write(arr[s[j]-'A']);
                }
                Console.WriteLine();
            }
        }
    }
}
