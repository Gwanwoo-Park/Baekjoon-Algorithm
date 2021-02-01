#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	int n;
	int i, j;

	while(1)
	{
		scanf("%d", &n);

		if(n==0) break;

		for(i=0; i<n; i++)
		{
			for(j=0; j<=i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}
