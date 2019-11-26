#include <stdio.h>

main()
{
	int a[5];
	int i, j;
	int num=0;
	int sum=0;

	for(i=0; i<5; i++)
	{
		scanf("%d", &a[i]);

		if(a[i] > num)
		{
			num = a[i];
		}
	}

	for(i=1; ; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i % a[j] == 0)
			{
				sum++;
			}
		}
		if(sum>=3) break;
		sum=0;
	}
	printf("%d\n", i);
}