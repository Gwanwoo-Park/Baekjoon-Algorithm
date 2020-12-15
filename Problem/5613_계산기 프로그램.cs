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
            int result = int.Parse(Console.ReadLine());
            int n2;

            string o = Console.ReadLine();

            if (o == "=") Console.WriteLine(result);
            else
            {
                while (true)
                {
                    n2 = int.Parse(Console.ReadLine());

                    if (o == "+")
                    {
                        result = result + n2;
                    }
                    else if (o == "-")
                    {
                        result = result - n2;
                    }
                    else if (o == "*")
                    {
                        result = result * n2;
                    }
                    else 
                    {
                        result = result / n2;
                    }

                    o = Console.ReadLine();

                    if (o == "=")
                    {
                        Console.WriteLine(result);
                        break;
                    }
                }
            }
        }
    }
}
