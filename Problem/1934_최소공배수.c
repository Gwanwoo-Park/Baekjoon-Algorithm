#include<stdio.h>
#include<math.h>

main()
{
	int t;
	int a, b;
	long long int i, j;
	int max, min;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d %d", &a, &b);

		if(a>b) max = a;
		else max = b;

		for(j=max; j>=1; j--)
		{
			if(a==1 || b==1)
			{
				printf("%d\n", a*b);
				break;
			}
			else if(a % j == 0 && b % j == 0)
			{
				printf("%lld\n", j*(a/j)*(b/j));
				break;
			}
		}
	}
}