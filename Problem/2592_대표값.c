#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int a[10];
	int i, j;
	int sum=0;
	int compare=0;
	int max=0;
	int index=0;

	for(i=0; i<10; i++)
	{
		scanf("%d", &a[i]);

		sum += a[i];
	}

	for(i=0; i<10; i++)
	{
		for(j=i; j<10; j++)
		{
			if(a[i] == a[j])
			{
				compare++;
			}
		}
		if(compare >= max)
		{
			max = compare;
			index = i;
		}
		compare=0;
	}
	printf("%d\n%d\n", sum/10, a[index]);
}
