#include<stdio.h>
#include<math.h>

main()
{
	int i, j;
	int a[10] = {-2};
	int b[10] = {-1};
	int num;
	int sum=10;
	int sj = -4;

	for(i=0; i<10; i++)
	{
		scanf("%d", &num);

		a[i] = num%42;
	}

	for(i=0; i<10; i++)
	{
		for(j=i+1; j<10; j++)
		{
			if(a[i] == a[j])
			{
				sum--;
				a[j] = sj;
				sj--;
			}
		}
	}

	printf("%d\n", sum);
}
