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
            int sum = 0;
            int pandan=0;

            for (int i = 0; i < s.Length; i++)
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    sum += s[i] - 'a' + 1;
                }
                else
                {
                    sum += s[i] - 'A' + 27;
                }
            }
            for (int i = 2; i < sum; i++)
            {
                if (sum % i == 0)
                {
                    pandan++;
                    break;
                }
            }
            if (pandan > 0) Console.WriteLine("It is not a prime word.");
            else Console.WriteLine("It is a prime word.");
        }
    }
}
