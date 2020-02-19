#include <stdio.h>
#include <math.h>
#include <malloc.h>

main()
{
	int n;
	int i, j;
	int a, b, c;
	int max=0;
	int sum[1000] = {0};
	int max_small;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d %d %d",&a, &b, &c);

		if(a==b && b==c)
		{
			sum[i] = sum[i] + 10000 + a*1000;
		}
		else if(a==b)
		{
			sum[i] = sum[i] + 1000 + a*100;
		}
		else if(b==c)
		{
			sum[i] = sum[i] + 1000 + b*100;
		}
		else if(a==c)
		{
			sum[i] = sum[i] + 1000 + a*100;
		}
		else
		{
			if(a>=b)
			{
				max_small = a;
			}
			else max_small = b;

			if(c >= max_small) max_small = c;

			sum[i] = sum[i] + max_small*100;
		}
	}
	for(i=0; i<n; i++)
	{
		if(sum[i] >= max)
		{
			max = sum[i];
		}
	}
	printf("%d\n", max);
}
