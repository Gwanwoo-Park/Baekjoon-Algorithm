#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int a, b, c;
	int max=0;
	int mid=0;
	int min=0;
	int sum=0;
	int tmp = 0;

	scanf("%d %d %d", &a, &b, &c);

	if(b-a > c-b)
	{
		printf("%d\n", b-a-1);
	}
	else printf("%d\n", c-b-1);
}
