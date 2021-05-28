import java.util.Scanner;

public class Main {
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		int n = Integer.parseInt(scan.nextLine());
		int pandan = 0;
		
		for(int i = 0; i < n; i++)
		{
			String s = scan.nextLine();
			
			s = s.toLowerCase();
			
			
			if(s.length() % 2 == 0)
			{
				for(int j=0, k=s.length()-1; j<s.length()/2 && k>=s.length()/2; j++,k--)
				{
					if(s.charAt(j) != s.charAt(k))
					{
						pandan++;
						System.out.println("No");
						break;
					}
				}
			}
			else
			{
				for(int j=0, k=s.length()-1; j<s.length()/2 && k>s.length()/2; j++,k--)
				{
					if(s.charAt(j) != s.charAt(k))
					{
						pandan++;
						System.out.println("No");
						break;
					}
                }
			}
			if (pandan == 0) System.out.println("Yes");
            pandan = 0;
		}
	}
}
