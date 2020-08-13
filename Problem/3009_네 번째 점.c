#include <stdio.h>

main()
{
	int a[2], b[2], c[2];
	
	scanf("%d %d", &a[0], &a[1]);
	scanf("%d %d", &b[0], &b[1]);
	scanf("%d %d", &c[0], &c[1]);

	if(a[0] == b[0])
	{
		if(a[1] == b[1])
		{
			printf("%d %d\n", c[0], c[1]);
		}
		else if(a[1] == c[1]) printf("%d %d\n", c[0], b[1]);
		else if(b[1] == c[1]) printf("%d %d\n", c[0], a[1]);
	}
	else if(a[0] == c[0])
	{
		if(a[1] == b[1]) printf("%d %d\n", b[0], c[1]);
		else if(a[1] == c[1]) printf("%d %d\n", b[0], b[1]);
		else if(b[1] == c[1]) printf("%d %d\n", b[0], a[1]);
	}
	else if(b[0] == c[0])
	{
		if(a[1] == b[1]) printf("%d %d\n", a[0], c[1]);
		else if(a[1] == c[1]) printf("%d %d\n", a[0], b[1]);
		else if(b[1] == c[1]) printf("%d %d\n", a[0], a[1]);
	}
}
