import java.util.Scanner;

public class Main {
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		int n = scan.nextInt();
		int gimin = scan.nextInt();
		int hansu = scan.nextInt();
		
		if(gimin > hansu)
		{
			int tmp = gimin;
			gimin = hansu;
			hansu = tmp;
		}
		
		int[] fight = new int[n];
		
		for(int i = 0; i < fight.length; i++)
		{
			fight[i] = i + 1;
		}
		int sumRound = 1;
		
		while(true)
		{
			if(gimin % 2 == 1 && gimin + 1 == hansu) break;
			if(fight.length <= 2)
			{
				System.out.println("-1");
				break;
			}
			sumRound++;
			
			if(gimin % 2 == 1)
			{
				gimin = gimin / 2 + 1;
			}
			else gimin = gimin / 2;
			
			if(hansu % 2 == 1)
			{
				hansu = hansu / 2 + 1;
			}
			else hansu = hansu / 2;
			
			if(fight.length % 2 == 0)
			{
				fight = new int[fight.length / 2];
			}
			else fight = new int[fight.length / 2 + 1];
			
			for(int i = 0; i < fight.length; i++)
			{
				if(i + 1 == gimin) continue;
				if(i + 1 == hansu) continue;
				fight[i] = i + 1;
			}
		}
		System.out.println(sumRound);
	}
}
