#include <stdio.h>

main()
{
	int a[10];
	int i, j;
	int sum=0;
	int exc1, exc2;

	for(i=0; i<9; i++)
	{
		scanf("%d", &a[i]);

		sum = sum + a[i];
	}

	for(i=0; i<9; i++)
	{
		for(j=i+1; j<9; j++)
		{
			if(sum - a[i] - a[j] == 100)
			{
				exc1 = i;
				exc2 = j;
				break;
			}
		}
		if(sum - a[i] - a[j] == 100)
		{
			exc1 = i;
			exc2 = j;
			break;
		}
	}
	for(i=0; i<9; i++)
	{
		if(i != exc1 && i != exc2)
		{
			printf("%d\n", a[i]);
		}
	}
}
