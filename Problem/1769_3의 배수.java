import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		String s = scan.nextLine();
		int sum = 0;
		int pandan = 0;
		int i;
		
		if(s.length() == 1)
		{
			System.out.println("0");
			
			if(Integer.parseInt(s) % 3 == 0)
			{
				System.out.println("YES");
			}
			else System.out.println("NO");
		}
		else
		{
			while(true)
			{
				for(i=0; i<s.length(); i++)
				{
					sum = sum + (s.charAt(i) - '0');
				}
				
				pandan++;
				
				if(sum >=10)
				{
					s = Integer.toString(sum);
					sum=0;
				}
				else
				{
					System.out.println(pandan);
					
					if(sum%3==0)
					{
						System.out.println("YES");
					}
					else System.out.println("NO");
					
					break;
				}
			}
		}
	}
}