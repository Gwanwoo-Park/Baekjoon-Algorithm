#include <stdio.h>

main()
{
	int a[10] = {0};
	int b[10] = {0};
	int i, j;
	int min=1000;
	int sum=0;

	for(i=0; i<7; i++)
	{
		scanf("%d", &a[i]);
		
		if(a[i] % 2 != 0)
		{
			sum = sum + a[i];
			if(a[i] < min)
			{
				min = a[i];
			}
		}
	}
	if(sum == 0) printf("-1\n");
	else
	{
		printf("%d\n%d\n", sum, min);
	}
}
