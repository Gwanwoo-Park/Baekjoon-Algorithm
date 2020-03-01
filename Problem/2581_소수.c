#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int m, n;
	int i, j;
	int sum=0;
	int min=10000;
	int pandan=0;
	int no=0;

	scanf("%d %d", &m, &n);

	if(m==1 && n==1)
	{
		printf("-1\n");
	}
	else
	{
		for(i=m; i<=n; i++)
		{
			for(j=i-1; j>1; j--)
			{
				if(i%j==0)
				{
					pandan++;
					break;
				}
			}
			if(pandan==0 && i>1)
			{
				sum = sum + i;
				if(i < min)
				{
					min = i;
				}
			}
			pandan=0;
		}
		if(sum==0) printf("-1\n");
		else printf("%d\n%d\n", sum, min);
	}
}
