import java.util.Scanner;

public class Main {
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		int n = scan.nextInt();
		String l = scan.next();
		int count = 0;
		int max = 0;
		int compare = 1;
		
		while(true)
		{
			
			
			if(Integer.toString(compare).contains(l))
			{
				compare++;
			}
			else
			{
				max = compare;
				compare++;
				count++;
			}
			if(count == n) break;
		}
		System.out.println(max);
	}
}
