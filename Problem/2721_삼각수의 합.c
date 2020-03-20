#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int triangular(int n)
{
	return (n*(n+1))/2;
}

main()
{
	int t;
	int i, j, k;
	int n;
	int sum=0;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d", &n);

		for(k=1; k<=n; k++)
		{
			sum += k*triangular(k+1);
		}
		printf("%d\n", sum);
		sum=0;
	}
}
