#include <stdio.h>
#include <math.h>
#include <malloc.h>

main()
{
	int a[10];
	int i, j;
	int top=-1;
	int max=0;
	int res;

	for(i=0; i<9; i++)
	{
		top++;

		scanf("%d", &a[i]);

		if(a[i] > max)
		{
			max = a[i];
			res = top+1;
		}
	}
	printf("%d\n%d\n", max, res);
}
