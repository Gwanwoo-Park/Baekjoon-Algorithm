#include <stdio.h>
#include <string.h>

main()
{
	int t;
	int n;
	int i, j;
	int fir=1;
	int a[100]; 
	 
	a[0] = 1;
	a[1] = 2;
	a[2] = 4;
	a[3] = 7;

	scanf("%d", &t);

	for(i=4; i<12; i++)
	{
		a[i] = a[i-3] + a[i-2] + a[i-1];
	}

	for(i=0; i<t; i++)
	{
		scanf("%d", &n);

		printf("%d\n", a[n-1]);
	}
}
