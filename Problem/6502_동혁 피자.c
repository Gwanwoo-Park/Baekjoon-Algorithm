#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	double r;
	double w, l;
	int num=0;
	double p;

	while(1)
	{
		scanf("%lf", &r);

		if(r==0) break;
		
		num++;

		scanf("%lf %lf", &w, &l); 

		p = w*w + l*l;
		printf("Pizza %d ", num);
		if(sqrt(p) <= r*2) printf("fits on the table.\n");
		else printf("does not fit on the table.\n");
	}
}
