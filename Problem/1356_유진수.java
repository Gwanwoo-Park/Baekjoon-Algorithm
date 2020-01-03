import java.util.Scanner;

public class Main {
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		String n = scan.nextLine();
		boolean flag = false;
		
		for(int i = 0; i < n.length() - 1; i++)
		{
			String a = n.substring(0, i+1);
			String b = n.substring(i+1);
			int aMul = 1; int bMul = 1;
			
			for(int j = 0; j < a.length(); j++)
			{
				aMul = aMul * (a.charAt(j) - '0');
			}
			for(int j = 0; j < b.length(); j++)
			{
				bMul = bMul * (b.charAt(j) - '0');
			}
			if(aMul == bMul)
			{
				System.out.println("YES");
				flag = true;
				break;
			}
		}
		if(flag == false) System.out.println("NO");
	}
}
