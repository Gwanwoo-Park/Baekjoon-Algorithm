#include <stdio.h>

main()
{
	int i, j;
	int n;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		for(j=0; j<i; j++)
		{
			printf(" ");
		}
		for(j=2*i; j<2*n-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
