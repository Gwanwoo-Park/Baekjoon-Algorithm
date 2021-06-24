#include <stdio.h>

main()
{
	int t;
	int i, j;
	int d[10000] = {0};
	int result[10000] = {0};

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d", &d[i]);
		
		for(j=0; j<=100; j++)
		{
			if(d[i] > j*j && d[i] - j >= j*j) result[i] = j;
			else break;
		}
	}
	for(i=0; i<t; i++)
	{
		printf("%d\n", result[i]);
	}
}
