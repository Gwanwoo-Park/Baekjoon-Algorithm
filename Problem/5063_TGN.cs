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
            char sp = ' ';
            string[] spstr=new string[500];
            int[] num = new int[1000];
            for (int i = 0; i < n; i++)
            {
                string s = Console.ReadLine();

                spstr = s.Split(sp);

                for (int j = 0; j < spstr.Length; j++)
                { 
                    num[j]=int.Parse(spstr[j]);
                }
                if (num[0] > num[1] - num[2])
                {
                    Console.WriteLine("do not advertise");
                }
                else if (num[0] < num[1] - num[2])
                {
                    Console.WriteLine("advertise");
                }
                else
                {
                    Console.WriteLine("does not matter");
                }
            }
        }
    }
}
