import java.awt.Point;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Stack;

class Main {
	public static void main(String args[]) {

		Scanner sc = new Scanner(System.in);

		int num = 1;
		
		while (true) {
			int n = Integer.parseInt(sc.nextLine());

			if (n == 0) break;
			
			System.out.println("SET " + num);
			num++;

			String[] s = new String[n];

			for (int i = 0; i < n; i++) {
				s[i] = sc.nextLine();
			}
			
			for(int i = 0; i < n; i = i + 2) { 
				System.out.println(s[i]); 
			}
			
			int j;
			int pos;
			
			if (n % 2 == 0) {
				pos = n - 1;
			} else pos = n - 2;
			
			for(j = pos; j >= 0; j = j - 2) { 
				 System.out.println(s[j]); 
			}
			
		}
	}
}
