#include <stdio.h>
#include <string.h>

main()
{
	int t, i, j, k;
	int n;
	int a[20] = {0};
	int tmp;
	int gizun = 0, length=0;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		length = 0;
		gizun = 0;

		scanf("%d", &n);

		for(j=0; j<n; j++)
		{
			scanf("%d", &a[j]);
		}
		for(j=0; j<n; j++)
		{
			for(k=j+1; k<n; k++)
			{
				if(a[j] > a[k])
				{
					tmp = a[j];
					a[j] = a[k];
					a[k] = tmp;
				}
			}
		}
		gizun = n/2;
		length = ((a[gizun] - a[0])*2) + ((a[n-1] - a[gizun])*2);
		printf("%d\n", length);
	}
}
