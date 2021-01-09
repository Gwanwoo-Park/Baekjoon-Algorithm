import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int a = sc.nextInt();
		int b = sc.nextInt();
		int d = sc.nextInt();
		
		sc.close();
		
		boolean[] arr = new boolean[b+1];
		arr[0] = arr[1] = false;
		for(int i = 2; i <= b; i++) {
			arr[i] = true;
		}
		
		for(int i = 2; i * i <= b; i++) {
			for(int j = i * i; j <= b; j += i) {
				arr[j] = false;
			}
		}
		
		int sum = 0;
		
		for(int i = a; i <= b; i++) {
			if(arr[i] && (String.valueOf(i)).contains(String.valueOf(d))) {
				sum++;
			}
		}
		System.out.println(sum);
	}
}
