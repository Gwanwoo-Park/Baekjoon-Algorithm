#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int n;
	int i;
	int arr[1000] = {0};
	int max=0;
	int sum=0;
	int pandan=0;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for(i=0; i<n-1; i++)
	{
		if(arr[i] < arr[i+1])
		{
			sum += arr[i+1] - arr[i];
			pandan++;
		}
		else
		{
			if(max < sum)
			{
				max = sum;
			}
			sum=0;
		}

		if(i==n-2)
		{
			if(max < sum)
			{
				max = sum;
				sum = 0;
			}
		}
	}
	if(pandan > 0) printf("%d\n", max);
	else printf("0\n");
}
