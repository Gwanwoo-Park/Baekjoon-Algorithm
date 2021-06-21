#include <stdio.h>
#include <string.h>

main()
{
	int n, t;
	int i, j;
	int num=0;
	int a[60] = {0};

	scanf("%d %d", &n, &t);

	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++)
	{
		t = t - a[i];
		if(t>=0)
		{
			num++;
		}
		else break;
	}
	printf("%d\n", num);
}
