import java.awt.Point;
import java.math.BigInteger;
import java.util.Arrays;
import java.util.Scanner;

class Main 
{
	  public static void reverseArrayString(String[] array) {
		    String temp;

		    for (int i = 0; i < array.length / 2; i++) {
		      temp = array[i];
		      array[i] = array[(array.length - 1) - i];
		      array[(array.length - 1) - i] = temp;
		    }
		  }
			
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		
		int n = scan.nextInt();
		scan.nextLine();
		String[] s = new String[n];
		int max = 0;
		String maxString = "";
		
		for(int i = 0; i < n; i++)
		{
			s[i] = scan.nextLine();
		}
		
		for(int i = 0; i < n; i++)
		{
			if(s[i] == null) continue;
			String tmp = s[i];
			int sum = 0;
			for(int j = 0; j < n; j++)
			{
				if(s[j] == null) continue;
				if(tmp.equals(s[j]))
				{
					sum++;
					s[j] = null;
				}
			}
			if(sum > max)
			{
				max = sum;
				maxString = tmp;
			}
			else if(sum == max)
			{
				if(maxString.compareTo(tmp) > 0)
				{
					maxString = tmp;
				}
			}
		}
		System.out.println(maxString);
	}
}