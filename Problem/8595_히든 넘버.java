import java.awt.Point;
import java.util.Arrays;
import java.util.Scanner;

class Main 
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		
		long sum = 0;
		int n = scan.nextInt();
		scan.nextLine();
		String s = scan.nextLine();
		StringBuilder sb = new StringBuilder();
		sb.append(s);
		
		for(int i=0; i<n; i++)
		{
			if((sb.charAt(i) >= 'a' && sb.charAt(i) <= 'z') ||
					(sb.charAt(i) >= 'A' && sb.charAt(i) <= 'Z'))
			{
				sb.setCharAt(i,  ' ');
			}
		}
		
		s = sb.toString();
		
		String a = "";
		int count = 0;
		int pandan = 0;
		for(int i=0; i<s.length(); i++)
		{
			if(s.charAt(i) == ' ' || count == 6 || i == s.length() - 1)
			{
				if(i == s.length() - 1)
				{
					if(s.charAt(i) >= '0' && s.charAt(i) <= '9')
					{
						a = a + s.charAt(i);
					}
				}
				if(a.length() > 0) sum += Long.parseLong(a);
				a = "";
				count = 0;
				pandan++;
				continue;
			}
			a = a + s.charAt(i);
			count++;
		}
		if(pandan == 0) System.out.println(s);
		else System.out.println(sum);
	}
}
