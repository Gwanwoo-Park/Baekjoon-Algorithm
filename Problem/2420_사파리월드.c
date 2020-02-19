#include <stdio.h>
#include <math.h>

main()
{
	long long int n, m;
	long long int max, min;
	long long int sum;

	scanf("%lld %lld", &n, &m);

	printf("%lld\n", llabs(n-m));
}
