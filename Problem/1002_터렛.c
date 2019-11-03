#include <stdio.h>
#include <math.h>

main()
{
	int x1,y1,r1,x2,y2,r2;
	double d;
	int t;

	scanf("%d", &t);

	for( ; t>0 ; t--)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

		d = sqrt(pow(x1-x2 , 2.0) + pow(y1-y2, 2.0));

		if(x1==x2 && y1==y2)
		{
			if(r1==r2) printf("-1\n");
			else printf("0\n");
		}

		else
		{
			if(r1+r2 > d && abs(r1-r2) < d) printf("2\n");
			else if(r1+r2==d || abs(r1-r2) ==d) printf("1\n");
			else printf("0\n");
		}
	}
}