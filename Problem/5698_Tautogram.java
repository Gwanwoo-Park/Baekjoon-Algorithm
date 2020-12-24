import java.util.Scanner;

class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		
		while(true) {
			String s = sc.nextLine();
			
			if (s.equals("*")) break;
			
			s = s.toUpperCase();
			String[] sp = s.split(" ");
			int length = sp.length;
			boolean flag = true;
			
			char compare = sp[0].charAt(0);
			for(int j = 0; j < length; j++) {
				if(sp[j].charAt(0) != compare) {
					System.out.println("N");
					flag = false;
					break;
				}
			}
			if (flag == true) System.out.println("Y");
		}
	}
}
