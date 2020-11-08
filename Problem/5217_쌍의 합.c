#include <stdio.h>

main()
{
	int t;
	int i, j;
	int a;
	int num[12];

	for(i=0; i<12; i++)
	{
		num[i] = i+1;
	}

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d", &a);

		printf("Pairs for %d:", a);

		for(j=0; j<12; j++)
		{
			if(a - num[j] < 13 && a-num[j] != num[j] && a-num[j] > num[j])
			{
				if(j>0) printf(",");
				printf(" %d %d", num[j], a-num[j]);
			}
		}
		printf("\n");
	}
}
