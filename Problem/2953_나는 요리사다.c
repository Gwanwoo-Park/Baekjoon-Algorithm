#include <stdio.h>

main()
{
	int i;
	int sum[5];
	int a, b, c, d;
	int max=0;
	int top;

	for(i=0; i<5; i++)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);

		sum[i] = a + b + c + d;

		if(sum[i] >= max)
		{
			max = sum[i];
			top = i;
		}
	}
	printf("%d %d\n", top+1, max);
}
