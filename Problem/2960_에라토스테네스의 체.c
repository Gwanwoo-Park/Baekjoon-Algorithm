#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int n, k;
	int i, j;
	int arr[1000] = {0};
	int pandan=0;
	int top=2;
	int increase = 1;
	int tmp;
	int wndwl=0;

	scanf("%d %d", &n, &k);

	for(i=2; i<=n; i++)
	{
		arr[i] = i;
	}

	while(1)
	{
		if(arr[top] == 0)
		{
			top++;
			continue;
		}

		while(1)
		{
			if(arr[top*increase] != 0)
			{
				tmp = arr[top*increase];
				arr[top*increase] = 0;
				pandan++;
				increase++;

				if(pandan == k)
				{
					wndwl++;
					printf("%d\n", tmp);
					break;
				}
			}
			else
			{
				increase++;
			}

			if(top*increase > n)
			{
				top++;
				increase=1;
				break;
			}
		}
		if(wndwl > 0) break;
	}
}
