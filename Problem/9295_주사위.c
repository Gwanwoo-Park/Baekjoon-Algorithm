#include <stdio.h>

main()
{
	int t;
	int i;
	int a[1000], b[1000];
	int sum[1000];
	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
		
		sum[i] = a[i] + b[i];
	}
	for(i=0; i<t; i++) printf("Case %d: %d\n", i+1, sum[i]);
}
