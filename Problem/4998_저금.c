#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	double n, b, m;
	int year = 0;

	while(scanf("%lf %lf %lf", &n, &b, &m) != EOF)
	{
		while(1)
		{
			if(n > m) break;

			n = n * (1 + (b * 0.01));
			year++;
		}
		printf("%d\n", year);
		year = 0;
	}
}
