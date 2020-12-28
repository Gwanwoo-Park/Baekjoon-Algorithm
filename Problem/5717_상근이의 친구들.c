#define _CRT_SEUCRE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int m, w;

int sum()
{
	while(1)
	{
		scanf("%d %d", &m, &w);

		if(m==0 && w==0)
		{
			break;
		}
		printf("%d\n", m+w);
	}
}

main()
{
	sum();
}
