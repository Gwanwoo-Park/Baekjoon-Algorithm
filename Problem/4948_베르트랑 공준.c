#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int n;
	int i, j;
	int sum=0;
	int pandan=0;

	while(1)
	{
		scanf("%d", &n);

		if(n==0) break;

		for(i=n+1; i<=2*n; i++)
		{
			for(j=2; j<=sqrt((double)i); j++)
			{
				if(i%j==0)
				{
					pandan++;
					break;
				}
			}
			if(pandan == 0) sum++;
			pandan=0;
		}
		printf("%d\n", sum);
		sum=0;
	}
}
