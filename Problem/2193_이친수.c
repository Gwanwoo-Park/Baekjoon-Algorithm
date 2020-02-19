#include <stdio.h>
#include <string.h>

main()
{
	int i, j;
	int n;
	long long int a[100];

	scanf("%d", &n);

	a[0] = 1;
	a[1] = 1;

	for(i=2; i<n; i++)
	{
		a[i] = a[i-2] + a[i-1];
	}
	printf("%lld\n", a[i-1]);
}
