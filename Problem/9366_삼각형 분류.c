#include <stdio.h>
#include <string.h>
#include <math.h>

main()
{
	int t;
	int i, j, k;
	int arr[3];
	int count=0;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

		count++;

		printf("Case #%d: ", count);

		for(j=0; j<2; j++)
		{
			for(k=j+1; k<3; k++)
			{
				if(arr[j] > arr[k])
				{
					int tmp = arr[j];
					arr[j] = arr[k];
					arr[k] = tmp;
				}
			}
		}

		if(arr[0] + arr[1] <= arr[2]) printf("invalid!\n");
		else if(arr[0]==arr[1] && arr[0]==arr[2] && arr[1]==arr[2])
		{
			printf("equilateral\n");
		}
		else if(arr[0]!=arr[1] && arr[0]!=arr[2] && arr[1]!=arr[2])
		{
			printf("scalene\n");
		}
		else printf("isosceles\n");
	}
}
