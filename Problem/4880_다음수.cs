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
            char sp = ' ';
            int[] number = new int[50];
            while (true)
            {
                string s = Console.ReadLine();

                string[] spstring = s.Split(sp);

                if (spstring[0] == "0" && spstring[1] == "0") break;

                for (int i = 0; i < spstring.Length; i++)
                {
                    number[i] = int.Parse(spstring[i]);
                }
                if (number[1] - number[0] == number[2] - number[1])
                {
                    Console.WriteLine("AP " + (number[2] + (number[1] - number[0])));
                }
                else 
                {
                    Console.WriteLine("GP " + number[2] * (number[1] / number[0]));
                }
            }
        }
    }
}
