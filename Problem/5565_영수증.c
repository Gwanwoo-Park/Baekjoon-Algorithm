#include <stdio.h>

main()
{
	int a[10] = {0};
	int sum, i;
	int nine=0;

	scanf("%d", &sum);
	
	for(i=0; i<9; i++)
	{
		scanf("%d", &a[i]);
	}

	for(i=0; i<9; i++)
	{
		nine += a[i];
	}
	a[9] = sum - nine;
	printf("%d\n", a[9]);
}
