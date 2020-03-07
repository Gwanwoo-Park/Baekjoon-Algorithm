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
            string[] arr = new string[100];
            string s = Console.ReadLine();
            char[] word = new char[100];
            char[] word2 = new char[100];
            int[] alp = new int[26];
            
            int result = 0;
            int pandan = 0;
            int wordlength = 0;
            int word2length = 0;

            for (int i = 0; i < s.Length; i++)
            { 
                word[i] = s[i];
                wordlength++;
            }

            for (int i = 0; i < wordlength; i++)
            {
                alp[word.ElementAt(i) - 'A']++;
            }

            for (int i = 0; i < n-1; i++)
            {
                arr[i] = Console.ReadLine();

                int[] alp2 = new int[26];

                if(Math.Abs(s.Length - arr[i].Length) > 1) continue;

                for (int j = 0; j < arr[i].Length; j++)
                {
                    word2[j] = arr[i][j];
                    word2length++;
                }

                for (int j = 0; j < word2length; j++)
                {
                    alp2[word2[j] - 'A']++;
                }

                word2length = 0;

                for (int j = 0; j < 26; j++)
                {
                    if (alp[j] != alp2[j])
                    {
                        pandan = pandan + Math.Abs(alp[j] - alp2[j]);
                    }
                    if (pandan > 2) break;
                }
                if (pandan <= 2) result++;
                pandan = 0;
            }
            Console.WriteLine(result);
        }
    }
}
