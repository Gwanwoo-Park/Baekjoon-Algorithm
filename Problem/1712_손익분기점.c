#include <stdio.h>
#include <math.h>
#include <string.h>

main()
{
	int a, b, c;
	int i, j;

	scanf("%d %d %d", &a, &b, &c);

	if(b>=c)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n", a/(c-b)+1);
	}
}