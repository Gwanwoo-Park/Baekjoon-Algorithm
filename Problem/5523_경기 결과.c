#include <stdio.h>

main()
{
	int n, i;
	int a, b;
	int asum = 0, bsum = 0;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d %d", &a, &b);
		if(a>b) asum++;
		else if(b>a) bsum++;
		else if(a==b) asum = asum;
	}
	printf("%d %d\n", asum, bsum);
}
