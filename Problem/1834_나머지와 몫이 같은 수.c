#include <stdio.h>

main()
{
	long long int n;
	long long int i;
	long long int sum=0;
	long long int multiple = 1;

	scanf("%lld", &n);

	for(i=0; i<n-1; i++)
	{
		sum = sum + (n+1)*multiple;
		multiple++;
	}
	printf("%lld\n", sum);
}