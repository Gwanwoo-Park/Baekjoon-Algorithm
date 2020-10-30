import java.util.HashSet;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int week = 0;
		
		while (true) {
			week++;
			
			String nTmp = sc.nextLine();
			int n = Integer.parseInt(nTmp);
			
			if(n == 0) break;

			HashSet<String> hs = new HashSet<>();

			for (int i = 0; i < n; i++) {
				String s = sc.nextLine();

				hs.add(s);
			}
			
			System.out.println("Week " + week + " " + hs.size());
		}
	}
}
