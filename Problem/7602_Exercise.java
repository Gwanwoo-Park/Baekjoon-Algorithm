import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int a = 1;
		
		while (true) {
			int step = sc.nextInt();
			
			if(step == 0) {
				sc.close();
				break;
			}
			
			System.out.println("Machine " + a);
			a++;

			int[] arr = new int[step + 1];

			for (int i = 1; i < step + 1; i++) {
				arr[i] = sc.nextInt();
			}
			sc.nextLine();

			while (true) {
				String s = sc.nextLine();
				if("# 0".equals(s)) {
					break;
				}
			
				String[] str = s.split(" ");
				
				int count = Integer.parseInt(str[1]);
				int sum = 0;

				for (int i = 0; i < count; i++) {
					int location = sc.nextInt();
					int frequency = sc.nextInt();
					sc.nextLine();
					
					sum += arr[location] * frequency;
				}
				
				System.out.println(str[0] + " " + sum);
			}
		}
	}
}
