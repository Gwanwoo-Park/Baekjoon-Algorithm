#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int n, m;
	int i, j;
	int arr[100][100] = {0};
	int arr2[100][100] = {0};

	scanf("%d %d", &n, &m);

	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			scanf("%d", &arr2[i][j]);

			arr[i][j] += arr2[i][j];
		}
	}

	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
