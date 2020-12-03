#include <stdio.h>

main()
{
	int a, b, c, min;
	int coke, sprite, min2;

	scanf("%d %d %d %d %d", &a, &b, &c, &coke, &sprite);

	if(a<b)
	{
		if(a>c) min = c;
		else min = a;
	}
	else if(b<c)
	{
		if(b>a) min = a;
		else min = b;
	}
	else if(c<a)
	{
		if(c>b) min = b;
		else min = c;
	}

	if(coke<sprite) min2 = coke;
	else min2 = sprite;

	printf("%d\n", min + min2 - 50);
}
