#include <stdio.h>

main()
{
	int i, j;
	int n;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		for(j=0; j<i+1; j++) printf("*");
		for(j=2*i; j<2*n-2; j++) printf(" ");
		for(j=0; j<i+1; j++) printf("*");
		printf("\n");
	}
	for(i=0; i<n-1; i++)
	{
		for(j=i; j<n-1; j++) printf("*");
		for(j=0; j<2*i+2; j++) printf(" ");
		for(j=i; j<n-1; j++) printf("*");
		printf("\n");
	}
}
