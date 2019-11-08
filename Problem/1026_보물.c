#include <stdio.h>

main()
{
	int n;
	int i, j;
	int a[101];
	int b[101];
	int tmp;
	int sum = 0;

	scanf("%d", &n);

	for(i=0; i<n; i++) scanf("%d", &a[i]);
	
	for(i=0; i<n; i++) scanf("%d", &b[i]);

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(b[i] < b[j])
			{
				tmp = b[i];
				b[i] = b[j];
				b[j] = tmp;
			}
		}
	}

	for(i=0; i<n; i++)
	{
		sum = sum + a[i]*b[i];
	}

	printf("%d\n", sum);
}