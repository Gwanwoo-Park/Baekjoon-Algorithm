#include <stdio.h>

main()
{
	int t, n;
	int i, j;
	char a;
	char b;
	int p1=0, p2=0;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d", &n);

		for(j=0; j<n; j++)
		{
			scanf(" %c %c", &a, &b);

			if(a == 'R')
			{
				if(b == 'P') p2++;
				else if(b == 'S') p1++;
			}
			else if(a == 'P')
			{
				if(b == 'R') p1++;
				else if(b == 'S') p2++;
			}
			else
			{
				if(b == 'R') p2++;
				else if(b == 'P') p1++;
			}
		}
		if(p1 > p2) 
		{
			printf("Player 1\n");
		}
		else if(p2 > p1) 
		{
			printf("Player 2\n");
		}
		else 
		{
			printf("TIE\n");
		}
		p1=p2=0;
	}
}
