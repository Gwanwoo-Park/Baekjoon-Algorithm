import java.util.Scanner;

public class Main {
	public static void main(String[] args)
	{
		String s;
		int sum=0;
		
		Scanner scan = new Scanner(System.in);
		
		while(true)
		{
			s = scan.nextLine();
			
			if(s.charAt(0) == '0') break;
			
			while(true)
			{
				for(int i=0; i<s.length(); i++)
				{
					sum += s.charAt(i)-'0';
				}
				if(sum < 10) break;
				
				String a = String.valueOf(sum);
				s = a;
				sum=0;
			}
			System.out.println(sum);
			sum=0;
		}
	}
}
