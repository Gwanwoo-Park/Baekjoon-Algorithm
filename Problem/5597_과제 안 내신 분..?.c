#include <stdio.h>

main()
{
	int a[30] = {0};
	int bun, i;

	for(i=0; i<28; i++)
	{
		scanf("%d", &bun);
		a[bun-1] = bun;
	}
	for(i=0; i<30; i++)
	{
		if(a[i] == 0)
		{
			printf("%d\n", i+1);
		}
	}
}
