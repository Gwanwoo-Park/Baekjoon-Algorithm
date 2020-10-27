#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int a[3];
	int i, j;
	int tmp;

	while(1)
	{
		scanf("%d %d %d", &a[0], &a[1], &a[2]);

		if(a[0] == 0 && a[1] == 0 && a[2] == 0) break;
		for(i=0; i<2; i++)
		{
			for(j=i+1; j<3; j++)
			{
				if(a[i] > a[j])
				{
					tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
			}
		}

		if(a[0]+a[1] <= a[2])
		{
			printf("Invalid\n");
			continue;
		}

		if(a[0]==a[1] && a[1]==a[2])
		{
			printf("Equilateral\n");
		}
		else if(a[0] != a[1] && a[0] != a[2] && a[1] != a[2])
		{
			printf("Scalene\n");
		}
		else printf("Isosceles\n");
	}
}
