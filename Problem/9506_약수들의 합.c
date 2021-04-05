#include <stdio.h>
#include <string.h>
#include <math.h>

main()
{
	int n;
	int i, j;
	int sum=0;
	char s[100000];

	while(1)
	{
		scanf("%d", &n);

		if(n == -1) break;

		printf("%d ", n);

		for(i=1; i<n; i++)
		{
			if(n%i==0)
			{
				sum += i;
			}
		}
		if(sum == n)
		{
			printf("= ");
			for(i=1; i<n; i++)
			{
				if(n%i==0)
				{
					printf("%d ", i);
					if(i != n/2) printf("+ ");
				}
			}
			printf("\n");
		}
		else printf("is NOT perfect.\n");
		sum=0;
	}
}
