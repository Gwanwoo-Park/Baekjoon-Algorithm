import java.util.Arrays;
import java.util.Scanner;

class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		
		String s = sc.nextLine();
		String result = "";
		
		int length = s.length();
		int count = 0;
		
		for(int i = length - 1; i >= 0; i--) {
			count++;
			result = s.charAt(i) + result;
			if (count == 3 && i != 0) {
				result = "," + result;
				count = 0;
			}
		}
		
		System.out.println(result);
	}
}
