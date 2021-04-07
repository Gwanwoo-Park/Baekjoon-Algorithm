#include <stdio.h>

main()
{
	int t, i, j;
	int n[1000], k;
	int sum[100] = {0};
	int candy;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d %d", &n[i], &k);
		for(j=0; j<n[i]; j++)
		{
			scanf("%d", &candy);
			sum[i] = sum[i] + candy/k;
		}
	}
	for(i=0; i<t; i++) printf("%d\n", sum[i]);
}
