import java.awt.Point;
import java.util.Arrays;
import java.util.Scanner;

class Main 
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		int count = 0;
		
		while(true)
		{
			int n = scan.nextInt();
			scan.nextLine();
			String[] s = new String[n];
			if(n == 0) break;
			
			count++;
			
			for(int i=0; i<n; i++)
			{
				s[i] = scan.nextLine();
			}
			Arrays.parallelSort(s);
			
			System.out.println(count);
			
			for(int i=0; i<n; i++)
			{
				System.out.println(s[i]);
			}
		}
	}
}
