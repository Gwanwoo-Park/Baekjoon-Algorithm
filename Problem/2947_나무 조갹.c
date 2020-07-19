#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int i, j;
	int arr[5] = {0};
	int pandan=0;

	for(i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}

	while(1)
	{
		for(i=0; i<4; i++)
		{
			if(arr[i] > arr[i+1])
			{
				int tmp= arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = tmp;

				for(j=0; j<5; j++)
				{
					printf("%d ", arr[j]);
				}
				printf("\n");
			}
		}

		for(i=0; i<4; i++)
		{
			if(arr[i] + 1 == arr[i+1])
			{
				pandan++;
			}
		}
		if(pandan==4) break;
		pandan=0;
	}
}
