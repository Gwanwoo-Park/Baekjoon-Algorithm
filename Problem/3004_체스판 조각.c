#include <stdio.h>

main()
{
	int n;

	scanf("%d", &n);

	if(n%2 == 0)
	{
		printf("%d\n", (n/2+1)*(n/2+1));
	}
	else
	{
		printf("%d\n", (n/2+1)*(n/2+2));
	}
}
