#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	int i, j;
	int n;
	int pandan = 0;
	

	while(scanf("%d ", &n) != EOF)
	{
		int arr[3000] = {0, };
	int sub[3000] = {0, };
	int sub2[3000] = {0, };
		
		for(i=0; i<n; i++)
		{
			scanf("%d", &arr[i]);
		}

		for(i=1; i<n; i++)
		{
			sub[i-1] = abs(arr[i] - arr[i - 1]);
		}

		for(i=0; i<n-1; i++)
		{
			sub2[sub[i]]++;
		}

		for(i=1; i<=n-1; i++)
		{
			if(sub2[i] == 0)
			{
				pandan++;
				break;
			}
		}

		if(pandan == 1) printf("Not jolly\n");
		else printf("Jolly\n");

		pandan = 0;
	}
}
