#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int n;
	int i;
	int arr[101];
	int sum=0;
	int addpoint=2;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	if(n == 1)
	{
		if(arr[0] == 1) printf("1\n");
		else printf("0\n");
	}
	else
	{
		for(i=0; i<n; i++)
		{
			if(arr[i] == 1)
			{
				if(arr[i-1] == 1)
				{
					sum = sum + addpoint;
					addpoint++;
				}
				else
				{
					sum++;
					addpoint = 2;
				}
			}
		}
	}
	printf("%d\n", sum);
}
