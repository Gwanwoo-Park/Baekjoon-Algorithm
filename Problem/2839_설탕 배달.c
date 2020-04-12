#include <stdio.h>
#include <math.h>

main()
{
	int n;
	int sum=0;
	int a;

	scanf("%d", &n);

	for(; ; )
	{
		if(n%5 != 0)
		{
			n = n-3;
			sum++;
			if(n<0) 
			{
				printf("-1\n");
				break;
			}
			else if(n%5 ==0)
			{
				printf("%d\n", sum + n/5);
				break;
			}
		}
		
		else if(n%5 == 0)
		{
			printf("%d\n", n/5);
			break;
		}
	}
}
