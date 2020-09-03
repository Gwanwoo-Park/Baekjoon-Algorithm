#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int t;
	int i;
	int n;
	int max=0;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d", &n);

		while(1)
		{
			if(n > max) max = n;

			if(n==1) break;

			if(n%2==0)
			{
				n = n/2;
			}
			else
			{
				n = n*3+1;
			}
		}
		printf("%d\n", max);
		max=0;
	}
}
