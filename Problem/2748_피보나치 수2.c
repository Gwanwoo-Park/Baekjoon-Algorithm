#include <stdio.h>

main()
{
	long long a[100];
	int n;
	int i;

	scanf("%d", &n);

	a[0] = 0;
	a[1] = 1;

	for(i=0; i<=n; i++)
	{
		a[i+2] = a[i+1] + a[i];
	}
	printf("%ld\n", a[n]);
}
