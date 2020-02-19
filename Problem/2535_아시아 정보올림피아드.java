import java.awt.Point;
import java.util.Scanner;

class Main 
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		
		int n = scan.nextInt();
		int[][] arr = new int[n][3];
		int[] overlap = new int[n+1];
		
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<3; j++)
			{
				arr[i][j] = scan.nextInt();
			}
		}
		
		for(int i=0; i<n-1; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				if(arr[i][2] < arr[j][2])
				{
					int tmp = arr[i][0];
					arr[i][0] = arr[j][0];
					arr[j][0] = tmp;
					
					tmp = arr[i][1];
					arr[i][1] = arr[j][1];
					arr[j][1] = tmp;

					tmp = arr[i][2];
					arr[i][2] = arr[j][2];
					arr[j][2] = tmp;
				}
			}
		}
		
		int count = 0;
		
		for(int i=0; i<n; i++)
		{
			overlap[arr[i][0]]++;
			if(overlap[arr[i][0]] > 2)
			{
				continue;
			}
			System.out.println(arr[i][0] + " " + arr[i][1]);
			count++;
			if(count == 3) break;
		}
	}
}
