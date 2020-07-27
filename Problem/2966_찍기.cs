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
            int n = int.Parse(Console.ReadLine());
            string s = Console.ReadLine();
            int a = 1;
            int c = 1;
            int b = 4;
            string adrian = "";
            string bruno = "";
            string goran = "";
            

            int adr = 0;
            int bru = 0;
            int gor = 0;

            for (int i = 0; i < n; i++)
            {
                if (i % 3 == 0) adrian = adrian + "A";
                else if (i == a)
                {
                    adrian = adrian + "B";
                    a = a + 3;
                }
                else
                {
                    adrian = adrian + "C";
                }
            }

            a = 1;

            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    bruno = bruno + "B";
                }
                else if (i == a)
                {
                    bruno = bruno + "A";
                    a = a + 4;
                }
                else 
                {
                    bruno = bruno + "C";
                }

            }
            
            a = 2;
            
            for (int i = 0; i < n; i++)
            {
                if (i % 6 == 0)
                {
                    goran = goran + "CC";
                }
                else if (i == a)
                {
                    goran = goran + "AA";
                    a = a + 6;
                }
                else if(i==b)
                {
                    goran = goran + "BB";
                    b = b + 6;
                }
            }

            
            for (int i = 0; i < n; i++)
            {
                if (string.Equals(adrian[i], s[i]))
                {
                    adr++;
                }
                if (string.Equals(bruno[i], s[i]))
                {
                    bru++;
                }
                if (string.Equals(goran[i], s[i]))
                {
                    gor++;
                }
            }

           

            int max = 0;

            if (adr >= max)
            {
                max = adr;
            }
            if (bru >= max)
            {
                max = bru;                
            }
            if (gor >= max)
            {
                max = gor;
            }

            Console.WriteLine(max);

            if (max==adr)
            {
                Console.WriteLine("Adrian");
            }
            if (max == bru)
            {
                Console.WriteLine("Bruno");
            }
            if (max == gor) Console.WriteLine("Goran");
        }
    }
}
