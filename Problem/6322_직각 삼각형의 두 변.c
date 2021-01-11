#include <stdio.h>
#include <math.h>

main()
{	
	int num=1;
	int pri=0;
	double a, b, c;

	while(1)
	{
		scanf("%lf %lf %lf", &a, &b, &c);

		
		if(pri != 0) printf("\n");

		if(a==0 && b==0 && c==0) break;

		printf("Triangle #%d\n", num);
		num++;
		
		if(a==-1)
		{
			if(b*b<c*c)
			{
				printf("a = %.3lf\n", sqrt((c*c-b*b)));
				pri++;
				continue;
			}
		}
		else if(b==-1)
		{
			if(a*a<c*c)
			{
				printf("b = %.3lf\n", sqrt((c*c-a*a)));
				pri++;
				continue;
			}
		}
		else if(c==-1)
		{
			printf("c = %.3lf\n", sqrt(a*a+b*b));
			pri++;
			continue;
		}
		printf("Impossible.\n");
		pri++;
	}
}
