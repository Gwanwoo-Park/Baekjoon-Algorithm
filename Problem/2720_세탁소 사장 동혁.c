#include <stdio.h>

main()
{
	int t, i;
	int q = 25, d = 10, n = 5, p = 1;
	int c[10000000] = {0};
	int f1, f2, f3, f4;

	scanf("%d", &t);
	for(i=0; i<t; i++)
	{
		scanf("%d", &c[i]);
	}
	for(i=0; i<t; i++)
	{
		f1 = c[i]/q;
		f2 = c[i]%q/d;
		f3 = c[i]%q%d/n;
		f4 = c[i]%q%d%n/p;
		printf("%d %d %d %d\n", f1, f2, f3, f4);
	}
}
