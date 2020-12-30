#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int a, n;
	int i, j, k;
	int arr[50];
	int max=0, min=10000;
	int sub[49];
	int submax=0;
	int Class = 0;

	scanf("%d", &a);

	for(i=0; i<a; i++)
	{
		scanf("%d", &n);

		Class++;

		for(j=0; j<n; j++)
		{
			scanf("%d", &arr[j]);

			if(max < arr[j]) max = arr[j];
			if(min > arr[j]) min = arr[j];
		}


		for(j=0; j<n-1; j++)
		{
			for(k=j+1; k<n; k++)
			{
				if(arr[j] < arr[k])
				{
					int tmp = arr[j];
					arr[j] = arr[k];
					arr[k] = tmp;
				}
			}
		}

		
		for(j=0; j<n-1; j++)
		{
			sub[j] = arr[j] - arr[j+1];

			if(submax < sub[j]) submax = sub[j];
		}
		printf("Class %d\n", Class);
		printf("Max %d, Min %d, Largest gap %d\n", max, min, submax);
		max = 0; min = 10000; submax = 0;
	}
}
