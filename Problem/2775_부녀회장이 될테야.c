#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int t;
	int i, j;
	int arr[15][15] = {0};
	int a, b;
	int sum=1;

	for(i=0; i<14; i++)
	{
		arr[0][i] = i+1;
	}

	for(i=1; i<=14; i++)
	{
		arr[i][0] = 1;

		for(j=1; j<=14; j++)
		{
			sum = sum + arr[i-1][j];
			arr[i][j] = arr[i][j] + sum;
		}
		sum=1;
	}

	

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d %d", &a, &b);

		printf("%d\n", arr[a][b-1]);
	}
}
