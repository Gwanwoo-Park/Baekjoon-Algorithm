#include <stdio.h>

main()
{
	int L;
	int a, b, c, d;
	int sum = 0;

	scanf("%d %d %d %d %d", &L, &a, &b, &c, &d);

	if(a/c >= b/d)
	{
		if(a%c == 0)
		{
			sum = a/c;
		}
		else if(a%c != 0)
		{
			sum = (a/c)+1;
		}
	}
	else if(b/d >= a/c)
	{
		if(b%d == 0)
		{
			sum = b/d;
		}
		else if(b%d != 0)
		{
			sum = (b/d)+1;
		}
	}
	printf("%d\n", L-sum);
}
