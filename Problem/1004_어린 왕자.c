#include <stdio.h>
#include <math.h>

main()
{
	int t, n;
	int x1, y1, x2, y2;
	int i, j;
	int cx, cy, r;
	int count[10001]={0};
	double a, b;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		scanf("%d", &n);

		for(j=0; j<n; j++) 
		{
			scanf("%d %d %d", &cx, &cy, &r);
			a = sqrt(pow(cx-x1, 2.0) + pow(cy-y1, 2.0));
			b = sqrt(pow(cx-x2, 2.0) + pow(cy-y2, 2.0));
			
			if((a<r && b >r) || (a>r && b<r))
			{
				count[i]++;
			}
			else if((a<r && b<r) || (a>r && b>r))
			{
				continue;
			}
		}
	}
	for(i=0; i<t; i++)
	{
		printf("%d\n", count[i]);
	}
}