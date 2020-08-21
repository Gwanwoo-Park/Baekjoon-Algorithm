#include <stdio.h>

main()
{
	int a, b, c;
	int i, j;
	char str[10];
	int tmp;

	scanf("%d %d %d", &a, &b, &c);

	scanf("%s", str);

	if(a>b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	if(b>c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	if(a>b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if(str[0] == 'A')
	{
		printf("%d ", a);
		if(str[1] == 'B')
		{
			printf("%d %d\n", b, c);
		}
		else printf("%d %d\n", c, b);
	}
	else if(str[0] == 'B')
	{
		printf("%d ", b);
		if(str[1] == 'A')
		{
			printf("%d %d\n", a, c);
		}
		else printf("%d %d\n", c, a);
	}
	else
	{
		printf("%d ", c);
		if(str[1] == 'A')
		{
			printf("%d %d\n", a, b);
		}
		else printf("%d %d\n", b, a);
	}
}
