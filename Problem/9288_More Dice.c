#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	int t;
	int i, j, k;
	int sum;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d", &sum);

		printf("Case %d:\n", i+1);

		for(j=1; j<=6; j++)
		{
			for(k=j; k<=6; k++)
			{
				if(j+k == sum)
				{
					printf("(%d,%d)\n", j, k);
				}
			}
		}
	}
}
