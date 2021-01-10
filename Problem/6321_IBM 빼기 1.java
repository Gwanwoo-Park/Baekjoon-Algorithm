import java.util.Scanner;

public class Main {
	public static void main(String[]args)
	{
		int num=0;
		
		String s = "";
		
		Scanner scan = new Scanner(System.in);
		
		s = scan.nextLine();
		
		int n = Integer.parseInt(s);
		
		for(int i=0; i<n; i++)
		{
			s = scan.nextLine();
			
			num++;
			
			StringBuffer sb = new StringBuffer();
			
			sb.append(s);
			
			for(int j=0; j<sb.length(); j++)
			{
				if(sb.charAt(j) == 'Z')
				{
					sb.setCharAt(j, 'A');
					continue;
				}
				sb.setCharAt(j, (char)(sb.charAt(j)+1));
			}
			System.out.println("String #" + num);
			System.out.println(sb);
			System.out.println();
		}
	}
}
