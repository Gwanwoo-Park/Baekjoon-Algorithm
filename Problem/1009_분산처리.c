#include <stdio.h>

main()
{
	int t;
	int a[10000], b[10000], c[10000];
	int i, j;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
	}

	for(i=0; i<t; i++)
	{
		c[i] = a[i];

		for(j=0; j<b[i]-1; j++)
		{
			c[i] = (c[i]%10)*a[i];
		}
		if(c[i]%10==0) printf("10\n");
		else printf("%d\n", c[i]%10);
	}
}