using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TEST
{
    class Program
    {
        static void Main(string[] args)
        {
            int N;
            int i;
            N = int.Parse(Console.ReadLine());
            for (i = 1; i <= N; i++)
            {
                Console.Write(i+"\n");
            }
        }
    }
}
