#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int d, wr, hr;
	double r;

	scanf("%d %d %d", &d, &wr, &hr);

	r = d / sqrt(pow(wr, 2.0) + pow(hr, 2.0));

	wr *= r;
	hr *= r;

	printf("%d %d\n", wr, hr);
}