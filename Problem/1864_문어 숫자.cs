using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Test
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                string s = Console.ReadLine();
                if (s == "#") break;
                char[] imsi = new char[50];
                for (int i = 0; i < s.Length; i++)
                {
                    imsi[i] = s[i];
                    if (imsi[i] == '-') imsi[i] = '0';
                    else if (imsi[i] == '\\') imsi[i] = '1';
                    else if (imsi[i] == '(') imsi[i] = '2';
                    else if (imsi[i] == '@') imsi[i] = '3';
                    else if (imsi[i] == '?') imsi[i] = '4';
                    else if (imsi[i] == '>') imsi[i] = '5';
                    else if (imsi[i] == '&') imsi[i] = '6';
                    else if (imsi[i] == '%') imsi[i] = '7';
                    else if (imsi[i] == '/') imsi[i] = '9';
                }
                int eight = 1;
                int sum = 0;
                int num = 0;
                for (int i = s.Length - 1; i >= 0; i--)
                {
                    if (imsi[i] == '9')
                    {
                        num = -1;
                    }
                    else
                    {
                        num = imsi[i] - 48;
                    }
                    sum = sum + (num * eight);
                    eight = eight * 8;
                }
                Console.WriteLine(sum);
            }
        }
    }
}