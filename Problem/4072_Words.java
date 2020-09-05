import java.awt.Point;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Stack;

class Main 
{
	public static void main(String args[]) {
		
		Scanner scan = new Scanner(System.in);
		
		String s;
		String[] virus;
		
		while (true) {
			s = scan.nextLine();
			
			if (s.equals("#")) break;
			
			virus = s.split(" ");
			
			for(int i = 0; i < virus.length; i++) {
				System.out.print(new StringBuffer(virus[i]).reverse().toString() + " ");
			}
			System.out.println();
		}	
	}
}
