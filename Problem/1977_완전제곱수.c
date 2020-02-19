#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int m, n;
	int i, j;
	int num=1;
	int sum=0;
	int min;

	scanf("%d %d", &m, &n);

	while(1)
	{
		if(num*num < m) num++;
		else break;
	}

	min = num*num;

	if(num*num <= n)
	{
		while(1)
		{
			sum = sum + num*num;
			num++;
			if(num*num > n)
			{
				printf("%d\n", sum);
				printf("%d\n", min);
				break;
			}
		}
	}
	else printf("-1\n");
}
