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
		
		
		int n = Integer.parseInt(scan.nextLine());
		int len, tmp;
		
		HashSet<String> hs = new HashSet<>();
		for(int i = 0; i < n; i++) hs.add(scan.nextLine());
		
		int size = hs.size();
		String arr[] = new String[size];
		hs.toArray(arr);
		
		Arrays.sort(arr, new Comparator<String>() {
			public int compare(String s1, String s2) {
				return Integer.compare(s1.length(), s2.length());
			}
		});
		int j;
		int i;
		for(i = 0; i < size; i++) {
			len = arr[i].length();
			for(j = i + 1; j < size; j++) {
				tmp = arr[j].length();
				if (len != tmp) break;
			}
			Arrays.sort(arr, i, j);
			i = j - 1;
		}
		
		for(i = 0; i < size; i++) System.out.println(arr[i]);
	}
}