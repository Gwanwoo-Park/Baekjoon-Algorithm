#include <stdio.h>
#include <math.h>

main()
{
	int a, b;
	int i, j;
	int x1, y1, x2, y2;
	int result;

	scanf("%d %d", &a, &b);

	if(a%4==0)
	{
		x1 = a/4;
		y1 = 4;
	}
	else
	{
		x1 = a/4+1;
		y1 = a%4;
	}

	if(b%4==0)
	{
		x2 = b/4;
		y2 = 4;
	}
	else
	{
		x2 = b/4+1;
		y2 = b%4;
	}

	result = abs(x2-x1) + abs(y2-y1);

	printf("%d\n", result);
}