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
            int n = int.Parse(Console.ReadLine());
            string s;
            int a = 0, b, c, result = 0;
            char sp = ' ';
            string[] spstring;
            string x, y;
            string x2, y2, result2;

            for (int i = 0; i < n; i++)
            {
                s = Console.ReadLine();

                spstring = s.Split(sp);

                x = spstring[0];
                y = spstring[1];

                x2 = new String(x.ToCharArray().Reverse().ToArray());
                y2 = new String(y.ToCharArray().Reverse().ToArray());

                b = int.Parse(x2);
                c = int.Parse(y2);

                result = b + c;
                result2 = result.ToString();

                result2 = new String(result2.ToCharArray().Reverse().ToArray());
                
                for (int j = 0; j < result2.Length; j++)
                {
                    if (result2[j] == '0')
                    {
                        if (j > 0 && result2[j - 1] != '0')
                        {
                            Console.Write(result2.Substring(j));
                            break;
                        }
                    }
                    else
                    {
                        Console.Write(result2[j]);
                    }
                    
                }
                Console.WriteLine();
            }
        }
    }
}
