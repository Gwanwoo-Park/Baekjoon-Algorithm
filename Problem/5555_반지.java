import java.awt.Point;
import java.util.Scanner;

class Main 
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		
		String ring = scan.next();
		int n = scan.nextInt();
		int sum = 0;
		
		for(int i=0; i<n; i++)
		{
			String s = scan.next();
			
			s = s + s;
			
			if(s.contains(ring)) sum++;
		
		}
		
		System.out.println(sum);
	}
}
