#include <stdio.h>
#include <math.h>
#include <malloc.h>

main()
{
	int n;
	int i, j;
	int a, b, c, d;
	int max=0;
	int sum[1000] = {0};
	int max_small = 0;
	int arr[4] = {0};

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d %d %d %d",&a, &b, &c, &d);
		
		if(a==b && b==c && c==d)
		{
			sum[i] = 50000 + a*5000;
		}
		else if((a==b && b==c) || (a==b && b==d) || (a==c && c==d))
		{
			sum[i] = 10000 + a*1000;
		}
		else if(b==c && c==d)
		{
			sum[i] = 10000 + b*1000;
		}
		else if((a==b && c==d) || (a==d && b==c))
		{
			sum[i] = 2000 + a*500 + c*500;
		}
		else if(a==c && b==d)
		{
			sum[i] = 2000 + a*500 + b*500;
		}
		else if(a==b || a==c || a==d)
		{
			sum[i] = 1000 + a*100;
		}
		else if(b==c || b==d)
		{
			sum[i] = 1000 + b*100;
		}
		else if(c==d)
		{
			sum[i] = 1000 + c*100;
		}
		else
		{
			arr[0] = a;
			arr[1] = b;
			arr[2] = c;
			arr[3] = d;
			for(j=0; j<4; j++)
			{
				if(arr[j] >= max_small)
				{
					max_small = arr[j];
				}
			}
			sum[i] = max_small*100;
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
