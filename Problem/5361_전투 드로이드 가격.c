#include <stdio.h>

main()
{
	int t, i;
	int a, b, c, d, e;
	double sum[10000] = {0};

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
		
		sum[i] = (a*350.34) + (b*230.90) + (c*190.55) + (d*125.30) + (e*180.90);
	}
	for(i=0; i<t; i++)
	{
	printf("$%.2f\n", sum[i]);
	}
}
