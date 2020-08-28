import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		String s = sc.nextLine();

		String[] str = s.split(" ");

		int len = str.length;

		for (int i = 0; i < len; i++) {
			if (i > 0) {
				if ("i".equals(str[i])) {
					continue;
				}
				if ("pa".equals(str[i])) {
					continue;
				}
				if ("te".equals(str[i])) {
					continue;
				}
				if ("ni".equals(str[i])) {
					continue;
				}
				if ("niti".equals(str[i])) {
					continue;
				}
				if ("a".equals(str[i])) {
					continue;
				}
				if ("ali".equals(str[i])) {
					continue;
				}
				if ("nego".equals(str[i])) {
					continue;
				}
				if ("no".equals(str[i])) {
					continue;
				}
				if ("ili".equals(str[i])) {
					continue;
				}
			}
			System.out.print((char) (str[i].charAt(0) - 32));
		}

		sc.close();
	}
}
