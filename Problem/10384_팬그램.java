import java.awt.Point;
import java.util.Arrays;
import java.util.Scanner;

class Main 
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		
		int n = scan.nextInt();
		scan.nextLine();
		int pandan = 0;
		int count = 0;
		int length;
		
		for(int i=0; i<n; i++)
		{
			int[] alp = new int[26];
			
			count++;
			
			String s = scan.nextLine();
			
			int sLength = s.length();
			for(int j=0; j<sLength; j++)
			{
				if(s.charAt(j) >= 'A' && s.charAt(j) <= 'Z') alp[s.charAt(j) - 'A']++;
				else if(s.charAt(j) >= 'a' && s.charAt(j) <= 'z') alp[s.charAt(j) - 'a']++;
			}
			System.out.print("Case " + count + ": ");
			
			for(int j=0; j<26; j++)
			{
				if(alp[j] == 0)
				{
					System.out.println("Not a pangram");
					pandan++;
					break;
				}
			}
			if(pandan == 0)
			{
				for(int j=0; j<26; j++)
				{
					if(alp[j] > 2) pandan++;
				}
				if(pandan == 26)
				{
					System.out.println("Triple pangram!!!");
				}
			}
			if(pandan != 26)
			{
				pandan = 0;

				for(int j=0; j<26; j++)
				{
					if(alp[j] > 1) pandan++;
				}
				if(pandan == 26)
				{
					System.out.println("Double pangram!!");
				}
			}
			if(pandan != 26)
			{
				pandan = 0;

				for(int j=0; j<26; j++)
				{
					if(alp[j] > 0) pandan++;
				}
				if(pandan == 26)
				{
					System.out.println("Pangram!");
				}
			}
			pandan = 0;
		}
	}
}
