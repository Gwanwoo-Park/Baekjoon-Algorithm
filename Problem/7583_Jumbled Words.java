import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		while (true) {
			String s = sc.nextLine();

			if ("#".equals(s)) {
				sc.close();
				break;
			}

			String[] str = s.split(" ");

			int len = str.length;

			for (int i = 0; i < len; i++) {
				if (str[i].length() == 1) {
					System.out.println(str[i].charAt(0));
				} else {
					System.out.print(str[i].charAt(0));

					for (int j = str[i].length() - 2; j > 0; j--) {
						System.out.print(str[i].charAt(j));
					}

					System.out.print(str[i].charAt(str[i].length() - 1));

					System.out.print(" ");
				}
			}
			System.out.println();
		}
	}
}
