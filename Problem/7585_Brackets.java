import java.util.Scanner;
import java.util.Stack;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		while (true) {
			String s = sc.nextLine();

			if ("#".equals(s)) {
				sc.close();
				break;
			}

			boolean pandan = true;
			
			int one = 0;
			
			int len = s.length();

			Stack<Character> stack = new Stack<Character>();

			for (int i = 0; i < len; i++) {
				if (s.charAt(i) == '(' || s.charAt(i) == '{' || s.charAt(i) == '[') {
					stack.add(s.charAt(i));
					one++;
				} else if (s.charAt(i) == ')') {
					if (stack.pop() != '(') {
						pandan = false;
						break;
					}
					one--;
				} else if (s.charAt(i) == '}') {
					if (stack.pop() != '{') {
						pandan = false;
						break;
					}
					one--;
				} else if (s.charAt(i) == ']') {
					if (stack.pop() != '[') {
						pandan = false;
						break;
					}
					one--;
				}
			}
			if(pandan && one == 0) {
				System.out.println("Legal");
			} else System.out.println("Illegal");
		}
	}
}
