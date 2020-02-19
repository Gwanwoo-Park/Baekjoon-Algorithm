#include <stdio.h>

main()
{
	long long int a, b;
	int i;
	long long int max, min;
	long long int sum=0;

	scanf("%lld %lld", &a, &b);

	if(a>=b) 
	{
		max = a;
		min = b;
	}
	else 
	{
		max = b;
		min = a;
	}
	sum = ((min+max) * (max-min+1))/2;
	printf("%lld\n", sum);
}
