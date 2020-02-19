import java.util.Scanner;
import java.awt.List;
import java.awt.Point;
import java.util.ArrayList;

class Main 
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		
		int t = scan.nextInt();
		
		for(int i = 0; i < t; i++)
		{			
			int n = scan.nextInt();
			int m = scan.nextInt();
			
			ArrayList list = new ArrayList();
			
			for(int j = 0; j < n; j++)
			{
				int a = scan.nextInt();
				
				if(j == m)
				{
					list.add(a+10);
				}
				else list.add(a);
			}
			/*
			for(int j = 0; j < n; j++)
			{
				System.out.print(list.get(j) + " ");
			}
			System.out.println();
			*/
			
			int front = -1, end = 1;
			int pandan = 0;
			
			if(n > 1)
			{
				while(true)
				{
					if(front == n - 1) break;
					if(pandan == 0) front++;
					pandan = 0;
					end = front + 1;
					if(end == n) break;
					
					int a = (int) list.get(front);
					int tmpA;
					if(a > 10)
					{
						tmpA = a - 10;
					}
					else tmpA = a;
					
					while(true)
					{
						int b = (int) list.get(end);
						int tmpB;
						if(b > 10)
						{
							tmpB = b - 10;
						}
						else tmpB = b;
					
						if(tmpA < tmpB)
						{
						    list.add(a);
							list.remove(front);
							pandan++;
							break;
						}
						end++;
						if(end == n) break;
					}
				}
			}
			
			/*
			for(int j = 0; j < n; j++)
			{
				System.out.print(list.get(j) + " ");
			}
			System.out.println();
			*/
			
			for(int j = 0; j < n; j++)
			{
				int a = (int) list.get(j);
				if(a > 10) 
				{ 
					System.out.println(j + 1);
					break;
				}
			}
		}
	}
}
