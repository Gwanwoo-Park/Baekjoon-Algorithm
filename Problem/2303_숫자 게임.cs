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
            char sp = ' ';
            string[] spstr;
            string s;
            int[] array = new int[5000];
            int max = 0;
            int sum = 0, index=0;

            for (int i = 0; i < n; i++)
            {
                s = Console.ReadLine();

                spstr = s.Split(sp);

                for (int j = 0; j < 3; j++)
                {
                    for (int k = j+1; k < 4; k++)
                    {
                        for (int l = k+1; l < 5; l++)
                        {
                            sum = sum + int.Parse(spstr[j]) + int.Parse(spstr[k]) + int.Parse(spstr[l]);

                            if ((sum % 10) > max)
                            {
                                max = sum % 10;
                            }
                            sum = 0;
                        }
                    }
                }
                array[i] = max;
                max = 0;
            }
            max = 0;
            for (int i = 0; i < n; i++)
            {
                if (array[i] >= max)
                {
                    max = array[i];
                    index = i + 1;
                }
            }
            Console.WriteLine(index);
        }
    }
}
