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
            string result = "";
            result = result + s[0];

            for (int i = 1; i < s.Length; i++)
            {
                if (s[i-1] == '-')
                {
                    result += s[i];
                }
            }
            Console.WriteLine(result);
        }
    }
}
