#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int arr[3];
	int i;
	int j;
	int max=0;

	while(1)
	{
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

		if(arr[0] == 0 && arr[1] == 0 && arr[2] == 0) break;
		for(i=0; i<2; i++)
		{
			for(j=i+1; j<3; j++)
			{
				if(arr[i] > arr[j])
				{
					int tmp=arr[i];
					arr[i]=arr[j];
					arr[j]=tmp;
				}
			}
		}

		if(arr[0]*arr[0]+arr[1]*arr[1] == arr[2]*arr[2]) printf("right\n");
		else printf("wrong\n");
	}
}
