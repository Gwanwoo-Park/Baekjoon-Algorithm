#include <stdio.h>

main()
{
	int n;
	int i, j;
	int second=0;

	scanf("%d", &n);

	i=1;

	for( ; ; )
	{
		if(n-i < 0)
		{
			i=1;
		}
		n = n-i;

		i++;
		second++;

		if(n==0) 
		{
			printf("%d\n", second);
			break;
		}
	}
}