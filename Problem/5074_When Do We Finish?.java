import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		while (true) {
			String s = sc.nextLine();

			if ("00:00 00:00".equals(s)) {
				break;
			}

			String[] tmp = s.split(" ");

			String[] str = tmp[0].split(":");

			int hour = Integer.parseInt(str[0]);
			int minute = Integer.parseInt(str[1]);

			str = tmp[1].split(":");

			int hour2 = Integer.parseInt(str[0]);
			int minute2 = Integer.parseInt(str[1]);

			hour += hour2;
			minute += minute2;
			
			if(minute >= 60) {
				hour += minute / 60;
				minute -= minute * (minute / 60);
			}
			
			int day = 0;
			
			if(hour >= 24) {
				day = hour / 24;
				hour -= 24 * (hour / 24);
			}
			
			String hourResult = String.valueOf(hour);
			String minuteResult = String.valueOf(minute);
			
			if(hourResult.length() == 1) {
				hourResult = "0" + hourResult;
			}
			if(minuteResult.length() == 1) {
				minuteResult = "0" + minuteResult;
			}
			
			System.out.print(hourResult + ":" + minuteResult);
			
			if(day > 0) {
				System.out.print(" +" + day);
			}
			System.out.println();
		}
	}
}
