import java.awt.Point;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;
import java.util.Stack;

class Main 
{
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
	
		while(true) {
			int n = Integer.parseInt(scan.nextLine());
			int pandan = 0;
			
			if(n == 0) break;
			
			String[] s = new String[n];
			String[] compare = new String[n];
			
			for(int i = 0; i < n; i++) {
				s[i] = scan.nextLine();
				compare[i] = s[i].toLowerCase();
			}
			
			Arrays.parallelSort(compare);
			
			//for(int i = 0; i < n; i++) System.out.println(compare[i]);
			
			for(int i = 0; i < n; i++) {
				for(int j = 0; j < n; j++) {
					if(compare[i].equals(s[j].toLowerCase())) {
						System.out.println(s[j]);
						pandan++;
						break;
					}
				}
				if(pandan == 1) break;
				pandan = 0;
			}
			
		}
	}
}
