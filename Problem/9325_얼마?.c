#include <stdio.h>

main()
{
	int t, i, j;
	int car[1000] = {0};
	int optprice[100000], opt[10000];
	int n, sum[1000] = {0};
	int final[1000] = {0};

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d %d", &car[i], &n);
		sum[i] = car[i];
		for(j=0; j<n; j++)
		{
			scanf("%d %d", &opt[j], &optprice[j]);
			
			sum[i] = sum[i] + opt[j]*optprice[j];
		}
	}
	for(i=0; i<t; i++)
	{
		printf("%d\n", sum[i]);
	}
}
