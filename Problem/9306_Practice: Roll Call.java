import java.awt.Point;
import java.util.Arrays;
import java.util.Scanner;

class Main 
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		
		int t = scan.nextInt();
		scan.nextLine();
		
		int count = 0;
		
		for(int i=0; i<t; i++)
		{
			String b = scan.nextLine();
			String a = scan.nextLine();
			
			count++;
			System.out.println("Case " + count + ": " + a + ", " + b);
		}
	}
}
