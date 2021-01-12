#include <stdio.h>
#include <math.h>

main()
{	
	int i, j;
	double result=0;
	double a=2;
	double sum = 2.5;

	printf("n e\n- -----------\n0 1\n");
	printf("1 2\n2 2.5\n");
	for(i=3; i<10; i++)
	{
		a = a * i;
		sum = sum + 1/a;

		printf("%d %.9f\n", i, sum);
	}
}
