#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int n;
	int a, b;
	int max = 0;
	int min = 0;
	int i, j;
	int num;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d %d", &a, &b);

		if(a>=b)
		{
			min = b;
			max = a;
		}
		else
		{
			min = a;
			max = b;
		}

		for(j=max; j>0; j--)
		{
			if(a%j == 0 && b%j == 0)
			{
				num = j;
				break;
			}
		}
		
		printf("%d\n", num*(a/num)*(b/num));
	}
}
