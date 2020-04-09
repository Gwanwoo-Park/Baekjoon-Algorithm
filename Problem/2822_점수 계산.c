#include <stdio.h>
#include <string.h>

int sort(int a[], int x)
{
	int i, j;
	int sum=0;
	int tmp;
	int s[5];
	int top=-1;
	int copy[8];

	for(i=0; i<x; i++)
	{
		copy[i] = a[i];
	}

	for(i=0; i<x; i++)
	{
		for(j=i+1; j<x; j++)
		{
			if(a[i] < a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	for(i=0; i<5; i++)
	{
		for(j=0; j<x; j++)
		{
			if(a[i] == copy[j])
			{
				s[i] = j+1;
			}
		}
	}

	for(i=0; i<5; i++)
	{
		sum = sum + a[i];
	}
	printf("%d\n", sum);

	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(s[i] > s[j])
			{
				tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}
		}
	}

	for(i=0; i<5; i++)
	{
		printf("%d ", s[i]);
	}
	printf("\n");
	
	return 0;
}

main()
{
	int a[9];
	int i, j;

	for(i=0; i<8; i++)
	{
		scanf("%d", &a[i]);
	}

	sort(a, 8);
}
