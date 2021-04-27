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
		
		String[] password = new String[n];
		
		for(int i=0; i<n; i++)
		{
			password[i] = scan.nextLine();
		}
		for(int i=0; i<n-1; i++)
		{
			String tmp = new StringBuffer(password[i]).reverse().toString();
			for(int j=i+1; j<n; j++)
			{
				if(tmp.contentEquals(password[j]) || tmp.contentEquals(password[i]))
				{
					pandan ++;
					System.out.println(tmp.length() + " " + tmp.charAt(tmp.length()/2));
					break;
				}
			}
			if(pandan == 1) break;
		}
	}
}
