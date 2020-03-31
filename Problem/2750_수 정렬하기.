#include <stdio.h>
#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))

main()
{
	int n;
	int i, j;
	int a[1001] = {0};
	int tmp;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i; j<n-1; j++)
		{
			if(a[i] > a[j+1])
			{
				tmp = a[i];
				a[i] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	for(i=0; i<n; i++) printf("%d\n", a[i]);
}
