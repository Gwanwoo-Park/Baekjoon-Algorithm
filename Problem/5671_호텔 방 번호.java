import java.awt.Point;
import java.util.Scanner;

class Main 
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		
		while(scan.hasNextInt())
		{
			int n = scan.nextInt();
			int m = scan.nextInt();
			String s;
			int sum = 0;
			
			for(int i=n; i<=m; i++)
			{
				int[] num = new int[10];
				s = Integer.toString(i);
				int pandan = 0;
				
				for(int j=0; j<s.length(); j++)
				{
					num[s.charAt(j) - '0']++;
					if(num[s.charAt(j) - '0'] > 1)
					{
						pandan++;
						break;
					}
				}
				if(pandan == 0)
				{
					sum++;
				}
			}
			System.out.println(sum);
		}
	}
}
