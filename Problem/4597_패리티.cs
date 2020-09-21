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
            string s;
            int num = 0;

            while (true)
            {
                s = Console.ReadLine();

                if (s[0] == '#') break;

                for (int i = 0; i < s.Length; i++)
                {
                    if (s[i] == 'e')
                    {
                        if (num % 2 == 0) s = s.Replace('e', '0');
                        else s = s.Replace('e', '1'); ;
                        break;
                    }
                    else if (s[i] == 'o')
                    {
                        if (num % 2 == 0) s = s.Replace('o', '1');
                        else s = s.Replace('o', '0');;
                        break;
                    }

                    if (s[i] == '1') num++;
                }
                num = 0;
                Console.WriteLine(s);
            }
        }
    }
}
