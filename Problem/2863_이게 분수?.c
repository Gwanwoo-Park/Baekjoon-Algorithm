#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	double a, b, c, d;
	double max = 0;
	int i;
	int bi;
	double result[4];

	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

	result[0] = a/c + b/d;
	result[1] = c/d + a/b;
	result[2] = d/b + c/a;
	result[3] = b/a + d/c;

	for(i=3; i>=0; i--)
	{
		if(result[i] >= max)
		{
			max = result[i];
			bi = i;
		}
	}
	printf("%d\n", bi);
}
