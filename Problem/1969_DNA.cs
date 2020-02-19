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
            char sp = ' ';
            string[] spst = new string[2];
            spst = s.Split(sp);
            string[] arr = new string[1000];
            int[] alphabet;
            int plus = 0;
            string result="";
            int max = 0;
            int dna = 0;
            int sum = 0;

            for (int i = 0; i < int.Parse(spst[0]); i++)
            {
                arr[i] = Console.ReadLine();
            }

            for (int i = 0; i < int.Parse(spst[1]); i++)
            {
                alphabet = new int[26];

                for (int j = 0; j < int.Parse(spst[0]); j++)
                {
                    StringBuilder sb = new StringBuilder();

                    sb.Append(arr[j]);

                    alphabet[sb[plus] - 'A']++;
                }

                plus++;

                for (int j = 0; j < 26; j++)
                {
                    if (alphabet[j] > max)
                    {
                        max = alphabet[j];
                        dna = j;
                    }
                }
                result = result + (char)(dna + 'A');
                max = 0;
                dna = 0;
            }

            for (int i = 0; i < int.Parse(spst[0]); i++)
            {
                for (int j = 0; j < int.Parse(spst[1]); j++)
                {
                    if (result[j] != arr[i][j])
                    {
                        sum++;
                    }
                }
            }
            Console.WriteLine(result + "\n" + sum);
        }
    }
}
