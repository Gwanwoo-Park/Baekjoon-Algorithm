#include <stdio.h>

main()
{
	int a[100]={0};
	int i, j, k;
	int tmp=0;
	int sum=0;
	int fin=0;

	for(i=0; i<9; i++)
	{
		scanf("%d", &a[i]);
	}

	for(i=0; i<9; i++)
	{
		for(j=i+1; j<9; j++)
		{
			if(a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	
	for(i=0; i<9; i++)
	{
		sum = sum + a[i];
	}

	for(i=0; i<9; i++)
	{
		for(j=i+1; j<9; j++)
		{
			fin = sum - a[i] - a[j];
			if(fin == 100)
			{
				break;
			}
			else
			{
				fin = 0;
				continue;
			}
		}
		if(fin == 100) break;
	}
	for(k=0; k<9; k++)
	{
		if(k == i || k == j) continue;
		else printf("%d\n", a[k]);
	}
}
