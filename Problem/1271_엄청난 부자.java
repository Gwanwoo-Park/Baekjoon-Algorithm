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
		
		BigInteger n = scan.nextBigInteger();
		BigInteger m = scan.nextBigInteger();
		
		BigInteger tmp = n.divide(m);
		
		System.out.println(tmp + "\n" + n.subtract(m.multiply(tmp)));
	}
}