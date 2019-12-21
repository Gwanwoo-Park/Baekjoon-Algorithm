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
		
		for(int i = 0; i < 3; i++)
		{
			int n = scan.nextInt();
			scan.nextLine();
			
			BigInteger sum = new BigInteger("0");
			BigInteger bi = new BigInteger("0");
			
			for(int j = 0; j < n; j++)
			{
				BigInteger num = scan.nextBigInteger();
				scan.nextLine();
				sum = sum.add(num);
			}
			
			if(sum.compareTo(bi) == 0) System.out.println("0");
			else if(sum.compareTo(bi) == 1) System.out.println("+");
			else System.out.println("-");
		}
	}
}