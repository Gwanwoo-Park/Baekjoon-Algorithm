import java.util.Scanner;

public class Main {
	public static void main(String[] args)
	{
		String s;
		String sp = " ";
		String[] spst;
		int pandan = 0;
		
		Scanner scan = new Scanner(System.in);
		int t = Integer.parseInt(scan.nextLine());
		
		for(int i=0; i<t; i++)
		{
			s = scan.nextLine();
			
			spst = s.split(sp);
			
			System.out.print(spst[0] + " & " + spst[1] + " are ");
			int[] alp = new int[26];
			int[] alp2 = new int[26];
			
			if(spst[0].length() != spst[1].length())
			{
				System.out.println("NOT anagrams.");
				continue;
			}
			
			for(int j=0; j<spst[0].length(); j++)
			{
				alp[spst[0].charAt(j)-'a']++;
			}
			
			for(int j=0; j<spst[1].length(); j++)
			{
				alp2[spst[1].charAt(j)-'a']++;
			}
			for(int j=0; j<26; j++)
			{
				if(alp[j] != alp2[j])
				{
					System.out.println("NOT anagrams.");
					pandan++;
					break;
				}
			}
			if(pandan==0)
			{
				System.out.println("anagrams.");
			}
			pandan=0;
		}
	}
}
