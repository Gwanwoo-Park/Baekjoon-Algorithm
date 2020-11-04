#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int k;
	int i, j;
	int p, m;
	int person;

	scanf("%d", &k);

	for(i=0; i<k; i++)
	{
		int arr[500]={0};
		int sum = 0;

		scanf("%d %d", &p, &m);

		for(j=0; j<p; j++)
		{
			scanf("%d", &person);

			arr[person-1]++;
		}
		for(j=0; j<m; j++)
		{
			if(arr[j] > 1)
			{
				sum += arr[j] - 1;
			}
		}
		printf("%d\n", sum);
	}
}
