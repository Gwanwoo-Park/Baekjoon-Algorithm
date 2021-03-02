#include <stdio.h>
#include <math.h>

main()
{	
	int a[100]={0};
	int t;
	int i, j, k;
	int tmp;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		for(j=0; j<5; j++)
		{
			scanf("%d", &a[j]);
		}

		for(j=0; j<5; j++)
		{
			for(k=0; k<5; k++)
			{
				if(a[j] < a[k])
				{
					tmp = a[j];
					a[j] = a[k];
					a[k] = tmp;
				}
			}
		}
		if(a[3] - a[1] >= 4)
		{
			printf("KIN\n");
		}
		else
		{
			printf("%d\n", a[1] + a[2] + a[3]);
		}
	}
}
