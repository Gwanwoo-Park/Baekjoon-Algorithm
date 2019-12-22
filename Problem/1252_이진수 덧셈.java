import java.util.Scanner;

public class Main {
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		String a = scan.next();
		String b = scan.next();
		
		if(a.length() < b.length())
		{
			String tmp = a;
			a = b;
			b = tmp;
		}
		
		while(a.length() != b.length())
		{
			b = "0" + b;
		}
		
		String sum = "";
		
		int pandan = 0;
		
		for(int i = a.length() - 1; i >= 0; i--)
		{
			if(a.charAt(i) == b.charAt(i) && a.charAt(i) == '1')
			{
				if(pandan == 0)
				{
					sum = "0" + sum;
				}
				else sum = "1" + sum;
				
				pandan = 1;
			}
			else if(a.charAt(i) == b.charAt(i) && a.charAt(i) == '0')
			{
				if(pandan == 1)
				{
					sum = "1" + sum;
				}
				else sum = "0" + sum;
				
				pandan = 0;
			}
			else
			{
				if(pandan == 1) 
				{
					sum = "0" + sum;
					pandan = 1;
				}
				else 
				{
					sum = "1" + sum;
					pandan = 0;
				}
			}
		}
		if(pandan == 1) sum = "1" + sum;
		
		pandan = 0;
		
		while(true)
		{	
			if(sum.charAt(0) == '1') break;
			if(sum.length() == 1) break;
			
			sum = sum.substring(1);
		}
		System.out.println(sum);
	}
}
