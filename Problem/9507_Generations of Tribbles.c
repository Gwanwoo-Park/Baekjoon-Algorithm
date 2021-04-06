#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

long long int koong(long long int n)
{
	int i;
	if(n < 2) return 1;
	if(n == 2) return 2;
	if(n == 3) return 4;
	else 
	{long long int arr[68] = {0, };
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for(i=4; i<=n; i++)
	{
		arr[i] = arr[i-1] + arr[i-2] + arr[i-3] + arr[i-4];
	}
	return arr[n];
	}
}

main()
{
	int t;
	int i;
	long long int n;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%lld", &n);

		printf("%lld\n", koong(n));
	}
}
