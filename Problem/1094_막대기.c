#include<stdio.h>
#include<math.h>

main()
{
	int x;
	int i, j;
	int b;
	int sum=0;
	int a[100] = {0};

	scanf("%d", &x);

	for(i=0; x != 1; i++)
	{
		a[i] = x%2;

		x = x/2;
	}

	for(j=0; i>=0; i--,j++)
	{
		if(a[i] == 1)
		{
			sum++;
		}
	}
	printf("%d\n", sum+1);
}