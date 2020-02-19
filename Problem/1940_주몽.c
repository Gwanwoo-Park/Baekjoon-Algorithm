#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int n, m;
	int a[15000] = { 0, };
	int i, j;
	int sum = 0;


	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n - 1; i++)
	{
		if (a[i] == 0) continue;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] == 0) continue;
			if (a[i] + a[j] == m)
			{
				sum++;
				a[i] = 0;
				a[j] = 0;
				break;
			}
		}
	}
	printf("%d\n", sum);
}
